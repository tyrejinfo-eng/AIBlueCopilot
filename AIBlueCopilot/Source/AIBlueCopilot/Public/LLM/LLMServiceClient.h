// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Http.h"
#include "Json.h"

class FLLMServiceClient
{
public:
	FLLMServiceClient();
	~FLLMServiceClient();

	/** Initialize connection to LM Studio */
	void Initialize(const FString& InServerUrl = TEXT("http://192.168.8.139:1234"));

	/** Send a prompt to the LLM and get response */
	void SendPrompt(const FString& Prompt, FSimpleDelegate OnComplete, FSimpleDelegate OnError);

	/** Get the last response from the LLM */
	const FString& GetLastResponse() const { return LastResponse; }

	/** Get the last error message from the LLM client */
	const FString& GetLastError() const { return LastError; }

	/** Check if connected to LM Studio */
	bool IsConnected() const { return bIsConnected; }

	/** Set the model parameters */
	void SetModelParameters(float InTemperature = 0.7f, int32 InMaxTokens = 2048);

	/** Enable or disable streaming (if server supports it) */
	void SetUseStreaming(bool bStream);
	bool IsStreaming() const { return bUseStreaming; }

	/** Set a specific model name (used for LM Studio/OpenAI) */
	void SetModelName(const FString& InModelName) { ModelName = InModelName; }
	const FString& GetModelName() const { return ModelName; }

	/** Enable verbose request/response logging (helpful for debugging LM Studio integration) */
	void SetVerboseLogging(bool bVerbose) { bVerboseLogging = bVerbose; }

	/** Set an authorization token (example: OpenAI "Bearer <token>") for services that require it */
	void SetAuthToken(const FString& Token);
	const FString& GetAuthToken() const { return AuthToken; }

private:
	void OnResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful);
	bool ParseResponseFlexible(const FString& ResponseStr, FString& OutText);
	void TryAlternateEndpoint(const FString& Endpoint, const FString& Body, FSimpleDelegate OnComplete, FSimpleDelegate OnError);

	FString ServerUrl;
	FString ModelName;
	FString LastResponse;
	FString LastError;
	bool bIsConnected;
	bool bUseStreaming;
	bool bVerboseLogging;

	float Temperature;
	int32 MaxTokens;

	FSimpleDelegate OnCompleteDelegate;
	FSimpleDelegate OnErrorDelegate;

	// Store a raw pointer to the HTTP module (FHttpModule::Get() returns a reference)
	FHttpModule* HttpModule;

	// Optional authorization token (Bearer ...) used for ChatGPT/OpenAI or other services
	FString AuthToken;
};
