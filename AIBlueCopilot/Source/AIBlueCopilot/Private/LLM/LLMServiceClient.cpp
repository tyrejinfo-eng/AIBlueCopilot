// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#include "LLM/LLMServiceClient.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"

FLLMServiceClient::FLLMServiceClient()
	: ServerUrl(TEXT("http://192.168.8.139:1234"))
	, bIsConnected(false)
	, bUseStreaming(false)
	, Temperature(0.7f)
	, MaxTokens(2048)
	, HttpModule(nullptr)
{
	HttpModule = &FHttpModule::Get();
}

void FLLMServiceClient::SetUseStreaming(bool bStream)
{
	bUseStreaming = bStream;
	UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] SetUseStreaming = %d"), (int)bUseStreaming);
}

void FLLMServiceClient::SetAuthToken(const FString& Token)
{
	AuthToken = Token;
	UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] Auth token set (length=%d)"), AuthToken.Len());
}

FLLMServiceClient::~FLLMServiceClient()
{
}

void FLLMServiceClient::Initialize(const FString& InServerUrl)
{
	ServerUrl = InServerUrl;
	bIsConnected = false;

	// Test connection to LM Studio by querying models endpoint and validate response
	if (HttpModule)
	{
		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HttpModule->CreateRequest();
		Request->SetURL(ServerUrl + TEXT("/v1/models"));
		Request->SetVerb(TEXT("GET"));
		Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
		if (!AuthToken.IsEmpty())
		{
			Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));
		}

		Request->OnProcessRequestComplete().BindLambda([this](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bWasSuccessful) {
			if (!bWasSuccessful || !Resp.IsValid())
			{
				UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Health check failed to reach %s"), *ServerUrl);
				return;
			}

			int32 Status = Resp->GetResponseCode();
			FString Body = Resp->GetContentAsString();
			UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] Health check status: %d, body: %s"), Status, *Body);
			if (Status >= 200 && Status < 300)
			{
				bIsConnected = true;
				UE_LOG(LogTemp, Warning, TEXT("[AIBLUE LLM] Connected to LM Studio at %s"), *ServerUrl);
			}
			else
			{
				bIsConnected = false;
				LastError = FString::Printf(TEXT("Health check failed with status %d"), Status);
				UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Health check failed (%d): %s"), Status, *Body);
			}
		});

		if (!Request->ProcessRequest())
		{
			UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Failed to dispatch health check request to %s"), *ServerUrl);
		}
	}
}

void FLLMServiceClient::SendPrompt(const FString& Prompt, FSimpleDelegate OnComplete, FSimpleDelegate OnError)
{
	if (!bIsConnected || !HttpModule)
	{
		UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Not connected to LM Studio"));
		OnError.ExecuteIfBound();
		return;
	}

	OnCompleteDelegate = OnComplete;
	OnErrorDelegate = OnError;

	// Create request payload for LM Studio API
	// For OpenAI/ChatGPT endpoints use the chat completions format
	bool bIsOpenAI = ServerUrl.Contains(TEXT("openai.com"));

	if (bIsOpenAI)
	{
		TSharedPtr<FJsonObject> RequestObject = MakeShareable(new FJsonObject());
		FString UseModel = !ModelName.IsEmpty() ? ModelName : TEXT("gpt-3.5-turbo");
		RequestObject->SetStringField(TEXT("model"), UseModel);
		TArray<TSharedPtr<FJsonValue>> Messages;
		TSharedPtr<FJsonObject> MessageObj = MakeShareable(new FJsonObject());
		MessageObj->SetStringField(TEXT("role"), TEXT("user"));
		MessageObj->SetStringField(TEXT("content"), Prompt);
		Messages.Add(MakeShareable(new FJsonValueObject(MessageObj)));
		RequestObject->SetArrayField(TEXT("messages"), Messages);
		RequestObject->SetNumberField(TEXT("temperature"), Temperature);
		RequestObject->SetNumberField(TEXT("max_tokens"), MaxTokens);
		RequestObject->SetBoolField(TEXT("stream"), bUseStreaming);

		FString RequestBody;
		TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
		FJsonSerializer::Serialize(RequestObject.ToSharedRef(), Writer);

		TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HttpModule->CreateRequest();
		Request->SetURL(ServerUrl + TEXT("/v1/chat/completions"));
		Request->SetVerb(TEXT("POST"));
		Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
		if (!AuthToken.IsEmpty()) Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));
		Request->SetContentAsString(RequestBody);
		if (bVerboseLogging) UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] POST %s -> %s"), *(ServerUrl + TEXT("/v1/chat/completions")), *RequestBody);
		Request->OnProcessRequestComplete().BindRaw(this, &FLLMServiceClient::OnResponseReceived);

		if (!Request->ProcessRequest())
		{
			UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Failed to send prompt to OpenAI/ChatGPT"));
			OnErrorDelegate.ExecuteIfBound();
		}
		return;
	}

	// Fallback for LMStudio-style completions: try a couple of common endpoints/payloads
	FString UseModel = !ModelName.IsEmpty() ? ModelName : TEXT("qwen2.5-coder-7b");

	// Try endpoint /v1/completions with 'prompt' field first
	TSharedPtr<FJsonObject> RequestObject = MakeShareable(new FJsonObject());
	RequestObject->SetStringField(TEXT("model"), UseModel);
	RequestObject->SetStringField(TEXT("prompt"), Prompt);
	RequestObject->SetNumberField(TEXT("temperature"), Temperature);
	RequestObject->SetNumberField(TEXT("max_tokens"), MaxTokens);
	RequestObject->SetBoolField(TEXT("stream"), bUseStreaming);

	FString RequestBody;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
	FJsonSerializer::Serialize(RequestObject.ToSharedRef(), Writer);

	FString Endpoint = ServerUrl + TEXT("/v1/completions");
	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HttpModule->CreateRequest();
	Request->SetURL(Endpoint);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	if (!AuthToken.IsEmpty()) Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));
	Request->SetContentAsString(RequestBody);

	if (bVerboseLogging) UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] POST %s -> %s"), *Endpoint, *RequestBody);

	Request->OnProcessRequestComplete().BindLambda([this, UseModel, Prompt](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bWasSuccessful) {
		if (!bWasSuccessful || !Resp.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Token/Request failed or no response for /v1/completions"));
			this->OnErrorDelegate.ExecuteIfBound();
			return;
		}

		int32 Status = Resp->GetResponseCode();
		FString Body = Resp->GetContentAsString();
		if (bVerboseLogging) UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] %d -> %s"), Status, *Body);

		FString Parsed;
		if (Status >= 200 && Status < 300 && ParseResponseFlexible(Body, Parsed))
		{
			LastResponse = Parsed;
			this->OnCompleteDelegate.ExecuteIfBound();
			return;
		}

		// If we got 404/405 or could not parse, try alternate endpoint (/v1/generate with 'input')
		if (Status == 404 || Status == 405 || Parsed.IsEmpty())
		{
			FString AltEndpoint = ServerUrl + TEXT("/v1/generate");
			TSharedPtr<FJsonObject> AltObj = MakeShareable(new FJsonObject());
			AltObj->SetStringField(TEXT("model"), UseModel);
			AltObj->SetStringField(TEXT("input"), Prompt);
			AltObj->SetNumberField(TEXT("temperature"), Temperature);
			AltObj->SetNumberField(TEXT("max_tokens"), MaxTokens);
			AltObj->SetBoolField(TEXT("stream"), bUseStreaming);
			FString AltBody; TSharedRef<TJsonWriter<>> AltWriter = TJsonWriterFactory<>::Create(&AltBody);
			FJsonSerializer::Serialize(AltObj.ToSharedRef(), AltWriter);

			TryAlternateEndpoint(AltEndpoint, AltBody, this->OnCompleteDelegate, this->OnErrorDelegate);
			return;
		}

		// otherwise treat as failure
		LastError = Body;
		OnErrorDelegate.ExecuteIfBound();
	});

	if (!Request->ProcessRequest())
	{
		UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Failed to dispatch prompt to %s"), *Endpoint);
		OnErrorDelegate.ExecuteIfBound();
	}}

void FLLMServiceClient::OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid())
	{
		LastError = TEXT("HTTP request failed or invalid response");
		UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] HTTP request failed: %s"), *LastError);
		OnErrorDelegate.ExecuteIfBound();
		return;
	}

	FString ResponseStr = Response->GetContentAsString();
	UE_LOG(LogTemp, Warning, TEXT("[AIBLUE LLM] Response: %s"), *ResponseStr);

	FString Parsed;
	if (ParseResponseFlexible(ResponseStr, Parsed))
	{
		LastResponse = Parsed;
		OnCompleteDelegate.ExecuteIfBound();
		return;
	}

	// If parsing failed, set error and call error delegate
	LastError = ResponseStr;
	UE_LOG(LogTemp, Error, TEXT("[AIBLUE LLM] Failed to parse or find consumable text in response: %s"), *ResponseStr);
	OnErrorDelegate.ExecuteIfBound();
}

bool FLLMServiceClient::ParseResponseFlexible(const FString& ResponseStr, FString& OutText)
{
	// Try to parse JSON and handle several common LLM response shapes
	TSharedPtr<FJsonObject> RootObj;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseStr);
	if (FJsonSerializer::Deserialize(Reader, RootObj) && RootObj.IsValid())
	{
		// OpenAI-style choices[]
		if (RootObj->HasField(TEXT("choices")))
		{
			TArray<TSharedPtr<FJsonValue>> Choices = RootObj->GetArrayField(TEXT("choices"));
			if (Choices.Num() > 0 && Choices[0].IsValid())
			{
				TSharedPtr<FJsonObject> First = Choices[0]->AsObject();
				if (First.IsValid())
				{
					if (First->HasField(TEXT("message")))
					{
						TSharedPtr<FJsonObject> Msg = First->GetObjectField(TEXT("message"));
						if (Msg->HasField(TEXT("content"))) { OutText = Msg->GetStringField(TEXT("content")); return true; }
					}
					if (First->HasField(TEXT("text"))) { OutText = First->GetStringField(TEXT("text")); return true; }
				}
			}
		}

		// Generic fields some servers use
		if (RootObj->HasField(TEXT("output")))
		{
			TSharedPtr<FJsonValue> OutVal = RootObj->TryGetField(TEXT("output"));
			if (OutVal.IsValid() && OutVal->Type == EJson::String) { OutText = OutVal->AsString(); return true; }
			if (OutVal.IsValid() && OutVal->Type == EJson::Array)
			{
				TArray<TSharedPtr<FJsonValue>> Arr = OutVal->AsArray();
				if (Arr.Num() > 0 && Arr[0].IsValid()) { OutText = Arr[0]->AsString(); return true; }
			}
		}

		// Some servers return 'generated_text' or 'results'
		if (RootObj->HasField(TEXT("generated_text"))) { OutText = RootObj->GetStringField(TEXT("generated_text")); return true; }
		if (RootObj->HasField(TEXT("result"))) { OutText = RootObj->GetStringField(TEXT("result")); return true; }
		if (RootObj->HasField(TEXT("results")))
		{
			TArray<TSharedPtr<FJsonValue>> Results = RootObj->GetArrayField(TEXT("results"));
			if (Results.Num() > 0) { OutText = Results[0]->AsString(); return true; }
		}
	}

	// If not JSON or none of the above matched, fall back to raw text if present
	if (!ResponseStr.IsEmpty())
	{
		OutText = ResponseStr;
		return true;
	}

	return false;
}

void FLLMServiceClient::TryAlternateEndpoint(const FString& Endpoint, const FString& Body, FSimpleDelegate OnComplete, FSimpleDelegate OnError)
{
	if (!HttpModule)
	{
		OnError.ExecuteIfBound();
		return;
	}

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = HttpModule->CreateRequest();
	Request->SetURL(Endpoint);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	if (!AuthToken.IsEmpty()) Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));
	Request->SetContentAsString(Body);

	if (bVerboseLogging) UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] TryAlternateEndpoint POST %s -> %s"), *Endpoint, *Body);

	Request->OnProcessRequestComplete().BindLambda([this, OnComplete, OnError](FHttpRequestPtr Req, FHttpResponsePtr Resp, bool bWasSuccessful) {
		if (!bWasSuccessful || !Resp.IsValid()) { OnError.ExecuteIfBound(); return; }
		FString BodyStr = Resp->GetContentAsString();
		if (bVerboseLogging) UE_LOG(LogTemp, Log, TEXT("[AIBLUE LLM] AltResponse: %s"), *BodyStr);
		FString Parsed;
		if (Resp->GetResponseCode() >= 200 && Resp->GetResponseCode() < 300 && ParseResponseFlexible(BodyStr, Parsed))
		{
			LastResponse = Parsed;
			OnComplete.ExecuteIfBound();
			return;
		}
		OnError.ExecuteIfBound();
	});

	if (!Request->ProcessRequest()) { OnError.ExecuteIfBound(); }
}

void FLLMServiceClient::SetModelParameters(float InTemperature, int32 InMaxTokens)
{
	Temperature = FMath::Clamp(InTemperature, 0.0f, 2.0f);
	MaxTokens = FMath::Max(InMaxTokens, 1);
}
