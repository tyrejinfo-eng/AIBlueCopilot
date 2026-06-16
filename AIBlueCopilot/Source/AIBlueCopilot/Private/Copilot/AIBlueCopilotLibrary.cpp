// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#include "Copilot/AIBlueCopilotLibrary.h"
#include "EngineUtils.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Auth/TokenStorage.h"
#if WITH_EDITOR
#include "Framework/Notifications/NotificationManager.h"
#include "Widgets/Notifications/SNotificationList.h"
#endif

AAIBlueCopilot* UAIBlueCopilotLibrary::GetCopilotInstance(UObject* WorldContextObject)
{
	if (!WorldContextObject)
	{
		return nullptr;
	}

	UWorld* World = WorldContextObject->GetWorld();
	if (!World)
	{
		return nullptr;
	}

	// Search for existing copilot
	for (TActorIterator<AAIBlueCopilot> ActorItr(World); ActorItr; ++ActorItr)
	{
		return *ActorItr;
	}

	// Create new copilot if none exists
	AAIBlueCopilot* NewCopilot = World->SpawnActor<AAIBlueCopilot>();
	return NewCopilot;
}

void UAIBlueCopilotLibrary::BuildScene(UObject* WorldContextObject, const FString& SceneDescription)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot && Copilot->IsCopilotReady())
	{
		FCopilotCommand Command;
		Command.CommandType = ECopilotCommandType::BuildScene;
		Command.CommandText = SceneDescription;
		Copilot->ExecuteCommand(Command);
	}
}

void UAIBlueCopilotLibrary::BuildUI(UObject* WorldContextObject, const FString& UIDescription)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot && Copilot->IsCopilotReady())
	{
		FCopilotCommand Command;
		Command.CommandType = ECopilotCommandType::BuildUI;
		Command.CommandText = UIDescription;
		Copilot->ExecuteCommand(Command);
	}
}

void UAIBlueCopilotLibrary::AnalyzeArchitecture(UObject* WorldContextObject)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot && Copilot->IsCopilotReady())
	{
		FCopilotCommand Command;
		Command.CommandType = ECopilotCommandType::AnalyzeArchitecture;
		Command.CommandText = TEXT("Analyze the project architecture and provide recommendations");
		Copilot->ExecuteCommand(Command);
	}
}

void UAIBlueCopilotLibrary::RefactorBlueprint(UObject* WorldContextObject, const FString& BlueprintPath, const FString& RefactoringRequest)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot && Copilot->IsCopilotReady())
	{
		FCopilotCommand Command;
		Command.CommandType = ECopilotCommandType::RefactorBlueprint;
		Command.TargetAsset = BlueprintPath;
		Command.CommandText = RefactoringRequest;
		Copilot->ExecuteCommand(Command);
	}
}

void UAIBlueCopilotLibrary::SendCustomPrompt(UObject* WorldContextObject, const FString& Prompt)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot && Copilot->IsCopilotReady())
	{
		Copilot->SendPrompt(Prompt);
	}
}

bool UAIBlueCopilotLibrary::IsCopilotReady(UObject* WorldContextObject)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	return Copilot && Copilot->IsCopilotReady();
}

FString UAIBlueCopilotLibrary::GetLastResponse(UObject* WorldContextObject)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot)
	{
		return Copilot->GetCopilotResponse();
	}
	return FString();
}

void UAIBlueCopilotLibrary::InitializeCopilot(UObject* WorldContextObject, const FString& LMStudioURL)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot)
	{
		UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Initializing Copilot via Blueprint library with URL %s"), *LMStudioURL);
		Copilot->InitializeCopilot(LMStudioURL);
	}
}

void UAIBlueCopilotLibrary::SetLMStudioURL(UObject* WorldContextObject, const FString& NewURL)
{
	GConfig->SetString(TEXT("AIBlueCopilot"), TEXT("LMStudioURL"), *NewURL, GEditorPerProjectIni);
	GConfig->Flush(false, GEditorPerProjectIni);
}

FString UAIBlueCopilotLibrary::GetLMStudioURL(UObject* WorldContextObject)
{
	FString URL;
	GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("LMStudioURL"), URL, GEditorPerProjectIni);
	if (URL.IsEmpty())
	{
		// default to the address you provided
		URL = TEXT("http://192.168.8.139:1234");
	}
	return URL;
}

void UAIBlueCopilotLibrary::SetUseLocalhost(UObject* WorldContextObject, bool bUseLocal)
{
	GConfig->SetBool(TEXT("AIBlueCopilot"), TEXT("bUseLocalhost"), bUseLocal, GEditorPerProjectIni);
	GConfig->Flush(false, GEditorPerProjectIni);
}

bool UAIBlueCopilotLibrary::GetUseLocalhost(UObject* WorldContextObject)
{
	bool bUseLocal = false;
	GConfig->GetBool(TEXT("AIBlueCopilot"), TEXT("bUseLocalhost"), bUseLocal, GEditorPerProjectIni);
	return bUseLocal;
}

FString UAIBlueCopilotLibrary::GetLastError(UObject* WorldContextObject)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot)
	{
		return Copilot->GetLastError();
	}
	return FString();
}

void UAIBlueCopilotLibrary::SetAllowAssetChanges(UObject* WorldContextObject, bool bAllow)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot)
	{
		Copilot->SetAllowAssetChanges(bAllow);
		// persist choice
		GConfig->SetBool(TEXT("AIBlueCopilot"), TEXT("bAllowAssetChanges"), bAllow, GEditorPerProjectIni);
		GConfig->Flush(false, GEditorPerProjectIni);
	}
}

bool UAIBlueCopilotLibrary::GetAllowAssetChanges(UObject* WorldContextObject)
{
	bool bAllow = false;
	GConfig->GetBool(TEXT("AIBlueCopilot"), TEXT("bAllowAssetChanges"), bAllow, GEditorPerProjectIni);
	return bAllow;
}

void UAIBlueCopilotLibrary::RunHealthCheck(UObject* WorldContextObject)
{
	// Determine endpoint based on selected service
	FString SelectedService;
	GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("SelectedService"), SelectedService, GEditorPerProjectIni);

	FString CheckUrl;
	FString AuthToken;

	if (SelectedService == TEXT("ChatGPT"))
	{
		CheckUrl = TEXT("https://api.openai.com/v1/models");
		// Prefer protected token if present
		FString Protected;
		GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("ChatGPT_Token_Protected"), Protected, GEditorPerProjectIni);
		if (!Protected.IsEmpty())
		{
			FString Unprotected;
			if (TokenStorage::UnprotectString(Protected, Unprotected))
			{
				AuthToken = Unprotected;
			}
		}
		// fallback to plain config entry if someone has it
		if (AuthToken.IsEmpty())
		{
			GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("ChatGPT_Token"), AuthToken, GEditorPerProjectIni);
		}
	}
	else
	{
		FString URL = GetLMStudioURL(WorldContextObject);
		CheckUrl = URL;
		if (!CheckUrl.EndsWith(TEXT("/"))) CheckUrl += TEXT("");
		CheckUrl += TEXT("/v1/models");
	}

	UE_LOG(LogTemp, Log, TEXT("[AIBLUE Copilot] Running health check to %s (Service=%s)"), *CheckUrl, *SelectedService);

	FHttpModule* Http = &FHttpModule::Get();
	if (!Http) return;

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = Http->CreateRequest();
	Request->SetURL(CheckUrl);
	Request->SetVerb(TEXT("GET"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	if (!AuthToken.IsEmpty()) Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));

	Request->OnProcessRequestComplete().BindLambda([CheckUrl](FHttpRequestPtr RequestPtr, FHttpResponsePtr Response, bool bWasSuccessful) {
		if (!bWasSuccessful || !Response.IsValid())
		{
			UE_LOG(LogTemp, Error, TEXT("[AIBLUE Copilot] Health check failed to reach %s"), *CheckUrl);
			return;
		}
		UE_LOG(LogTemp, Log, TEXT("[AIBLUE Copilot] Health check status: %d, body: %s"), Response->GetResponseCode(), *Response->GetContentAsString());
	});

	Request->ProcessRequest();
}

void UAIBlueCopilotLibrary::SetUseStreaming(UObject* WorldContextObject, bool bUse)
{
	GConfig->SetBool(TEXT("AIBlueCopilot"), TEXT("bUseStreaming"), bUse, GEditorPerProjectIni);
	GConfig->Flush(false, GEditorPerProjectIni);

	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot)
	{
		Copilot->SetUseStreaming(bUse);
	}
}

bool UAIBlueCopilotLibrary::GetUseStreaming(UObject* WorldContextObject)
{
	bool bUse = false;
	GConfig->GetBool(TEXT("AIBlueCopilot"), TEXT("bUseStreaming"), bUse, GEditorPerProjectIni);
	return bUse;
}

void UAIBlueCopilotLibrary::SetPollTimeoutSeconds(UObject* WorldContextObject, float Seconds)
{
	GConfig->SetFloat(TEXT("AIBlueCopilot"), TEXT("PollTimeoutSeconds"), Seconds, GEditorPerProjectIni);
	GConfig->Flush(false, GEditorPerProjectIni);
}

float UAIBlueCopilotLibrary::GetPollTimeoutSeconds(UObject* WorldContextObject)
{
	float Seconds = 60.0f;
	GConfig->GetFloat(TEXT("AIBlueCopilot"), TEXT("PollTimeoutSeconds"), Seconds, GEditorPerProjectIni);
	return Seconds;
}

void UAIBlueCopilotLibrary::SetPollIntervalSeconds(UObject* WorldContextObject, float Seconds)
{
	GConfig->SetFloat(TEXT("AIBlueCopilot"), TEXT("PollIntervalSeconds"), Seconds, GEditorPerProjectIni);
	GConfig->Flush(false, GEditorPerProjectIni);
}

float UAIBlueCopilotLibrary::GetPollIntervalSeconds(UObject* WorldContextObject)
{
	float Seconds = 0.5f;
	GConfig->GetFloat(TEXT("AIBlueCopilot"), TEXT("PollIntervalSeconds"), Seconds, GEditorPerProjectIni);
	return Seconds;
}

void UAIBlueCopilotLibrary::ApplyPlan(UObject* WorldContextObject, const FString& PlanJson)
{
	AAIBlueCopilot* Copilot = GetCopilotInstance(WorldContextObject);
	if (Copilot)
	{
		Copilot->ApplyPlan(PlanJson);
	}
}

void UAIBlueCopilotLibrary::GenerateBlueprint(UObject* WorldContextObject, const FString& Description)
{
	FString Prompt = FString::Printf(TEXT("Generate a detailed Blueprint JSON specification for: %s\nReturn JSON only."), *Description);
	SendCustomPrompt(WorldContextObject, Prompt);
}

void UAIBlueCopilotLibrary::GenerateMaterial(UObject* WorldContextObject, const FString& Description)
{
	FString Prompt = FString::Printf(TEXT("Generate a UMaterial/MaterialGraph JSON for: %s\nReturn JSON only."), *Description);
	SendCustomPrompt(WorldContextObject, Prompt);
}

void UAIBlueCopilotLibrary::GenerateBehaviorTree(UObject* WorldContextObject, const FString& Description)
{
	FString Prompt = FString::Printf(TEXT("Design a Behavior Tree JSON for an AI agent that should: %s\nReturn JSON only."), *Description);
	SendCustomPrompt(WorldContextObject, Prompt);
}

void UAIBlueCopilotLibrary::IndexProject(UObject* WorldContextObject)
{
	// Very small index: record top-level asset names into config (stub for a full indexer)
	TArray<FAssetData> AssetList;
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(FName(TEXT("AssetRegistry")));
	AssetRegistryModule.Get().GetAllAssets(AssetList);
	TArray<FString> Names;
	for (const FAssetData& A : AssetList)
	{
		Names.Add(A.AssetName.ToString());
	}
	FString Joined = FString::Join(Names, TEXT(","));
	GConfig->SetString(TEXT("AIBlueCopilot"), TEXT("ProjectIndexSample"), *Joined, GEditorPerProjectIni);
	GConfig->Flush(false, GEditorPerProjectIni);
#if WITH_EDITOR
	FNotificationInfo Info(FText::FromString(FString::Printf(TEXT("Project indexed: %d assets"), Names.Num())));
	FSlateNotificationManager::Get().AddNotification(Info);
#endif
}

void UAIBlueCopilotLibrary::Generate3DModel(UObject* WorldContextObject, const FString& Description)
{
	FString Prompt = FString::Printf(TEXT("Generate a 3D model specification (meshes/materials/textures) for: %s\nReturn structured JSON describing export steps."), *Description);
	SendCustomPrompt(WorldContextObject, Prompt);
}

void UAIBlueCopilotLibrary::GenerateImage(UObject* WorldContextObject, const FString& Prompt)
{
	FString Body = FString::Printf(TEXT("Generate an image with prompt: %s"), *Prompt);
	SendCustomPrompt(WorldContextObject, Body);
}

void UAIBlueCopilotLibrary::GenerateAudio(UObject* WorldContextObject, const FString& Prompt)
{
	FString Body = FString::Printf(TEXT("Generate audio for: %s"), *Prompt);
	SendCustomPrompt(WorldContextObject, Body);
}

void UAIBlueCopilotLibrary::StartCodeAssistant(UObject* WorldContextObject)
{
	// Placeholder: shows a notification and logs to help validate LLM round-trips
	UE_LOG(LogTemp, Log, TEXT("[AIBLUE] Code Assistant (stub) started"));
	#if WITH_EDITOR
	FNotificationInfo Info(FText::FromString(TEXT("Code Assistant launched (stub)")));
	FSlateNotificationManager::Get().AddNotification(Info);
#endif
}

