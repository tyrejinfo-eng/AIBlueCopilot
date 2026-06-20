// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#include "Copilot/AIBlueCopilot.h"
#include "Analyzer/ProjectAnalyzer.h"
#include "AssetToolsModule.h"
#include "Factories/BlueprintFactory.h"
#include "Misc/PackageName.h"
#include "Engine/Blueprint.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Audit/CopilotAuditLog.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "UObject/Package.h"
#include "Serialization/JsonSerializer.h"
#include "Auth/TokenStorage.h"

AAIBlueCopilot::AAIBlueCopilot()
	: bIsInitialized(false)
{
	PrimaryActorTick.bCanEverTick = false;

	ProjectAnalyzer = CreateDefaultSubobject<UProjectAnalyzer>(TEXT("ProjectAnalyzer"));
}

void AAIBlueCopilot::BeginPlay()
{
	Super::BeginPlay();

	if (!bIsInitialized)
	{
		InitializeCopilot();
	}
}

void AAIBlueCopilot::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AAIBlueCopilot::InitializeCopilot(const FString& LMStudioURL)
{
	UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Initializing with LM Studio at %s"), *LMStudioURL);

	LLMClient.Initialize(LMStudioURL);
	LLMClient.SetModelParameters(0.7f, 2048);
	// If there is a configured LM Studio model name, use it
	FString LMModel; GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("LMStudioModel"), LMModel, GEditorPerProjectIni);
	if (!LMModel.IsEmpty()) { LLMClient.SetModelName(LMModel); }
	// Optional verbose logging (useful for LM Studio debugging)
	bool bVerbose = false; GConfig->GetBool(TEXT("AIBlueCopilot"), TEXT("LLMVerboseLogging"), bVerbose, GEditorPerProjectIni);
	LLMClient.SetVerboseLogging(bVerbose);

	// If a service token is saved (e.g., ChatGPT), provide it to the LLM client so requests include Authorization
	FString SelectedService;
	GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("SelectedService"), SelectedService, GEditorPerProjectIni);
	if (SelectedService == TEXT("ChatGPT"))
	{
		// Prefer protected token storage and unprotect it for runtime use
		FString Protected;
		GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("ChatGPT_Token_Protected"), Protected, GEditorPerProjectIni);
		if (!Protected.IsEmpty())
		{
			FString Unprotected;
			if (TokenStorage::UnprotectString(Protected, Unprotected))
			{
				LLMClient.SetAuthToken(Unprotected);
			}
		}
		// fallback to plain token for compatibility
		FString ChatToken;
		GConfig->GetString(TEXT("AIBlueCopilot"), TEXT("ChatGPT_Token"), ChatToken, GEditorPerProjectIni);
		if (!ChatToken.IsEmpty())
		{
			LLMClient.SetAuthToken(ChatToken);
		}
	}

	if (ProjectAnalyzer)
	{
		ProjectAnalyzer->AnalyzeProjectArchitecture();
		UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Project architecture analyzed"));
		OnCopilotProgress.Broadcast(TEXT("Project architecture analyzed"));
	}

	bIsInitialized = true;
	OnCopilotProgress.Broadcast(TEXT("Copilot initialized"));
}

void AAIBlueCopilot::ExecuteCommand(const FCopilotCommand& Command)
{
	if (!bIsInitialized)
	{
		OnCopilotResponse.Broadcast(TEXT("Copilot not initialized"), false);
		return;
	}

	OnCopilotProgress.Broadcast(FString::Printf(TEXT("Executing command: %s"), *Command.CommandText));

	switch (Command.CommandType)
	{
		case ECopilotCommandType::BuildScene:
			HandleBuildSceneCommand(Command);
			break;
		case ECopilotCommandType::BuildUI:
			HandleBuildUICommand(Command);
			break;
		case ECopilotCommandType::ConvertJSON:
			HandleConvertJSONCommand(Command);
			break;
		case ECopilotCommandType::EditBlueprint:
			HandleEditBlueprintCommand(Command);
			break;
		case ECopilotCommandType::AnalyzeArchitecture:
			HandleAnalyzeArchitectureCommand(Command);
			break;
		case ECopilotCommandType::GenerateCode:
			HandleGenerateCodeCommand(Command);
			break;
		case ECopilotCommandType::RefactorBlueprint:
			HandleRefactorBlueprintCommand(Command);
			break;
	}
}

void AAIBlueCopilot::SendPrompt(const FString& Prompt)
{
	if (!bIsInitialized)
	{
		OnCopilotResponse.Broadcast(TEXT("Copilot not initialized"), false);
		return;
	}

	FString ContextPrompt = BuildContextPrompt(Prompt);

	FSimpleDelegate OnComplete = FSimpleDelegate::CreateUObject(this, &AAIBlueCopilot::OnLLMResponseReceived);
	FSimpleDelegate OnError = FSimpleDelegate::CreateUObject(this, &AAIBlueCopilot::OnLLMError);

	LLMClient.SendPrompt(ContextPrompt, OnComplete, OnError);
}

FString AAIBlueCopilot::GetCopilotResponse() const
{
	return CurrentResponse;
}

bool AAIBlueCopilot::IsCopilotReady() const
{
	return bIsInitialized && LLMClient.IsConnected();
}

void AAIBlueCopilot::HandleBuildSceneCommand(const FCopilotCommand& Command)
{
	FString Prompt = FString::Printf(
		TEXT("You are an Unreal Engine 5.3 expert. Build a detailed blueprint scene specification based on this request:\n")
		TEXT("Request: %s\n\n")
		TEXT("Provide a detailed JSON specification for creating this scene including:\n")
		TEXT("1. Actor placements\n")
		TEXT("2. Components configuration\n")
		TEXT("3. Material assignments\n")
		TEXT("4. Blueprint nodes needed\n")
		TEXT("Return valid JSON only."),
		*Command.CommandText
	);

	SendPrompt(Prompt);
}

void AAIBlueCopilot::HandleBuildUICommand(const FCopilotCommand& Command)
{
	FString Prompt = FString::Printf(
		TEXT("You are a UMG UI expert in Unreal Engine 5.3. Design a UI specification based on this request:\n")
		TEXT("Request: %s\n\n")
		TEXT("Provide a detailed JSON specification for creating this UI including:\n")
		TEXT("1. Widget hierarchy\n")
		TEXT("2. Layout settings\n")
		TEXT("3. Style properties\n")
		TEXT("4. Event bindings\n")
		TEXT("Return valid JSON only."),
		*Command.CommandText
	);

	SendPrompt(Prompt);
}

void AAIBlueCopilot::HandleConvertJSONCommand(const FCopilotCommand& Command)
{
	FString TargetAsset = Command.TargetAsset.IsEmpty() ? TEXT("/Game/AI/GeneratedAssets/NewAsset") : Command.TargetAsset;

	FString Prompt = FString::Printf(
		TEXT("You are an Unreal Engine 5.3 blueprint conversion expert. Convert this JSON specification to blueprint node commands:\n")
		TEXT("JSON Content:\n%s\n\n")
		TEXT("Target Asset: %s\n\n")
		TEXT("Provide step-by-step instructions to construct this in blueprints."),
		*Command.CommandText,
		*TargetAsset
	);

	SendPrompt(Prompt);
}

void AAIBlueCopilot::HandleEditBlueprintCommand(const FCopilotCommand& Command)
{
	FString Prompt = FString::Printf(
		TEXT("You are an Unreal Engine 5.3 blueprint refactoring expert. Make this modification to the blueprint:\n")
		TEXT("Target: %s\n")
		TEXT("Modification: %s\n\n")
		TEXT("Explain how to implement these changes in the blueprint editor."),
		*Command.TargetAsset,
		*Command.CommandText
	);

	SendPrompt(Prompt);
}

void AAIBlueCopilot::HandleAnalyzeArchitectureCommand(const FCopilotCommand& Command)
{
	if (!ProjectAnalyzer)
	{
		OnCopilotResponse.Broadcast(TEXT("Project analyzer not available"), false);
		return;
	}

	FString ArchitectureSummary = ProjectAnalyzer->GetArchitectureSummary();

	FString Prompt = FString::Printf(
		TEXT("You are an Unreal Engine 5.3 architect. Analyze this project structure and provide optimization recommendations:\n\n")
		TEXT("Project Architecture:\n%s\n\n")
		TEXT("User Request: %s\n\n")
		TEXT("Provide detailed recommendations for improvement."),
		*ArchitectureSummary,
		*Command.CommandText
	);

	SendPrompt(Prompt);
}

void AAIBlueCopilot::HandleGenerateCodeCommand(const FCopilotCommand& Command)
{
	FString Prompt = FString::Printf(
		TEXT("You are an Unreal Engine 5.3 C++ expert. Generate code based on this specification:\n")
		TEXT("Specification: %s\n\n")
		TEXT("Generate clean, well-commented C++ code following Unreal Engine standards."),
		*Command.CommandText
	);

	SendPrompt(Prompt);
}

void AAIBlueCopilot::HandleRefactorBlueprintCommand(const FCopilotCommand& Command)
{
	FString Prompt = FString::Printf(
		TEXT("You are an Unreal Engine 5.3 blueprint optimization expert. Refactor this blueprint conversationally:\n")
		TEXT("Blueprint: %s\n")
		TEXT("Refactoring Request: %s\n\n")
		TEXT("Provide step-by-step refactoring instructions and explain the benefits."),
		*Command.TargetAsset,
		*Command.CommandText
	);

	SendPrompt(Prompt);
}

void AAIBlueCopilot::OnLLMResponseReceived()
{
	// Ensure we update copilot state on the game thread
	AsyncTask(ENamedThreads::GameThread, [this]() {
		CurrentResponse = LLMClient.GetLastResponse();
		UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Response received: %s"), *CurrentResponse);
		OnCopilotResponse.Broadcast(CurrentResponse, true);
	});
}

void AAIBlueCopilot::OnLLMError()
{
	// Ensure error handling happens on the game thread
	AsyncTask(ENamedThreads::GameThread, [this]() {
		LastError = LLMClient.GetLastError();
		CurrentResponse = LastError.IsEmpty() ? TEXT("Error communicating with LLM") : LastError;
		UE_LOG(LogTemp, Error, TEXT("[AIBLUE Copilot] LLM Error: %s"), *CurrentResponse);
		OnCopilotResponse.Broadcast(CurrentResponse, false);
		OnCopilotProgress.Broadcast(CurrentResponse);
	});
}

FString AAIBlueCopilot::BuildContextPrompt(const FString& UserCommand)
{
	FString ContextedPrompt = UserCommand;

	FString TrainingContent;
    FString TrainingPath = FPaths::ProjectContentDir() / TEXT("LLMTraining/LLMTraining.txt");
    if (FPaths::FileExists(TrainingPath))
    {
        if (FFileHelper::LoadFileToString(TrainingContent, *TrainingPath))
        {
            ContextedPrompt = FString::Printf(TEXT("%s\n\n=== LLM TRAINING INSTRUCTIONS ===\n%s\n\n"), *TrainingContent, *UserCommand);
        }
    }

	if (ProjectAnalyzer)
	{
		FString ProjectSummary = ProjectAnalyzer->GetArchitectureSummary();
		ContextedPrompt += FString::Printf(
			TEXT("You are an Unreal Engine 5.3 AI Copilot assistant. You have full knowledge of this project:\n\n")
			TEXT("=== PROJECT CONTEXT ===\n%s\n\n")
			TEXT("=== USER REQUEST ===\n%s\n\n")
			TEXT("Respond with actionable, specific guidance for Unreal Engine."),
			*ProjectSummary,
			*UserCommand
		);
	}

	return ContextedPrompt;
}

void AAIBlueCopilot::ExecuteGeneratedCode(const FString& GeneratedCode)
{
	UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Generated Code:\n%s"), *GeneratedCode);
}

void AAIBlueCopilot::SetUseStreaming(bool bUse)
{
	LLMClient.SetUseStreaming(bUse);
}

bool AAIBlueCopilot::GetUseStreaming() const
{
	return LLMClient.IsStreaming();
}

void AAIBlueCopilot::ApplyPlan(const FString& PlanJson)
{
	AsyncTask(ENamedThreads::GameThread, [this, PlanJson]() {
		UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Applying plan: %s"), *PlanJson);

		// Parse JSON plan (expecting array of command objects)
		TSharedPtr<FJsonValue> RootValue;
		TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(PlanJson);
		TArray<TSharedPtr<FJsonValue>> PlanArray;
		if (FJsonSerializer::Deserialize(Reader, RootValue) && RootValue.IsValid())
		{
			if (RootValue->Type == EJson::Array)
			{
				PlanArray = RootValue->AsArray();
			}
			else if (RootValue->Type == EJson::Object)
			{
				// support { "plan": [ ... ] }
				TSharedPtr<FJsonObject> RootObj = RootValue->AsObject();
				if (RootObj->HasField(TEXT("plan")))
				{
					PlanArray = RootObj->GetArrayField(TEXT("plan"));
				}
			}
		}

		if (PlanArray.Num() == 0)
		{
			UE_LOG(LogTemp, Error, TEXT("[AIBLUE Copilot] No plan actions found in JSON plan"));
			OnCopilotProgress.Broadcast(TEXT("No plan actions found or failed to parse JSON"));
			return;
		}

		// Execute simple actions: create_blueprint
		for (TSharedPtr<FJsonValue> V : PlanArray)
		{
			if (!V.IsValid() || V->Type != EJson::Object) continue;
			TSharedPtr<FJsonObject> ActionObj = V->AsObject();
			FString Action = ActionObj->GetStringField(TEXT("action"));
			if (Action.Equals(TEXT("create_blueprint"), ESearchCase::IgnoreCase))
			{
				FString Path = ActionObj->GetStringField(TEXT("path"));
				FString ParentClassName = ActionObj->GetStringField(TEXT("parent"));
				UClass* ParentClass = AActor::StaticClass();
				if (!ParentClassName.IsEmpty())
				{
					UClass* Found = FindObject<UClass>(ANY_PACKAGE, *ParentClassName);
					if (Found) ParentClass = Found;
				}

				// Determine package path and asset name
				FString PackagePath = FPackageName::GetLongPackagePath(Path);
				FString AssetName = FPackageName::GetShortName(Path);

				if (PackagePath.IsEmpty() || AssetName.IsEmpty())
				{
					UE_LOG(LogTemp, Error, TEXT("[AIBLUE Copilot] Invalid path for create_blueprint action: %s"), *Path);
					continue;
				}

				if (!bAllowAssetChanges)
				{
					UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Asset changes not allowed. Skipping create_blueprint %s"), *Path);
					OnCopilotProgress.Broadcast(TEXT("Asset changes not allowed"));
					continue;
				}

				// Use AssetTools to create a blueprint asset
				FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
				UBlueprintFactory* Factory = NewObject<UBlueprintFactory>();
				Factory->ParentClass = ParentClass;
				UObject* NewAsset = AssetToolsModule.Get().CreateAsset(AssetName, PackagePath, UBlueprint::StaticClass(), Factory);
				if (NewAsset)
				{
					UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Created Blueprint asset: %s/%s"), *PackagePath, *AssetName);
					OnCopilotProgress.Broadcast(FString::Printf(TEXT("Created asset %s/%s"), *PackagePath, *AssetName));

					// Append to audit log
					{
						const FString AuditObjectPath = TEXT("/Game/AIBlue/CopilotAuditLog.CopilotAuditLog");
						UCopilotAuditLog* Audit = LoadObject<UCopilotAuditLog>(nullptr, *AuditObjectPath);
						if (!Audit)
						{
							// create new audit asset
							FString PackageName = TEXT("/Game/AIBlue");
							FString AssetNameStr = TEXT("CopilotAuditLog");
							UPackage* Package = CreatePackage(*FString::Printf(TEXT("%s/%s"), *PackageName, *AssetNameStr));
							Audit = NewObject<UCopilotAuditLog>(Package, UCopilotAuditLog::StaticClass(), *AssetNameStr, RF_Public | RF_Standalone);
							FAssetRegistryModule::AssetCreated(Audit);
							Package->MarkPackageDirty();

							FString PackageFilename = FPackageName::LongPackageNameToFilename(Package->GetName(), FPackageName::GetAssetPackageExtension());
							UPackage::SavePackage(Package, Audit, EObjectFlags::RF_Public | RF_Standalone, *PackageFilename, GError, nullptr, true, true, SAVE_None);
						}
						if (Audit)
						{
							Audit->AddEntry(TEXT("create_blueprint"), FString::Printf(TEXT("%s/%s"), *PackagePath, *AssetName), FString::Printf(TEXT("Parent:%s"), *ParentClassName));
							Audit->MarkPackageDirty();
							FString PackName = Audit->GetOutermost()->GetName();
							FString FileName = FPackageName::LongPackageNameToFilename(PackName, FPackageName::GetAssetPackageExtension());
							UPackage::SavePackage(Audit->GetOutermost(), Audit, EObjectFlags::RF_Public | RF_Standalone, *FileName, GError, nullptr, true, true, SAVE_None);
						}
					}
				}
				else
				{
					UE_LOG(LogTemp, Error, TEXT("[AIBLUE Copilot] Failed to create Blueprint asset: %s/%s"), *PackagePath, *AssetName);
					OnCopilotProgress.Broadcast(FString::Printf(TEXT("Failed to create asset %s/%s"), *PackagePath, *AssetName));

					// Log failure in audit as well
					{
						const FString AuditObjectPath = TEXT("/Game/AIBlue/CopilotAuditLog.CopilotAuditLog");
						UCopilotAuditLog* Audit = LoadObject<UCopilotAuditLog>(nullptr, *AuditObjectPath);
						if (Audit)
						{
							Audit->AddEntry(TEXT("create_blueprint_failed"), FString::Printf(TEXT("%s/%s"), *PackagePath, *AssetName), TEXT("Failed to create asset"));
							Audit->MarkPackageDirty();
							FString PackName = Audit->GetOutermost()->GetName();
							FString FileName = FPackageName::LongPackageNameToFilename(PackName, FPackageName::GetAssetPackageExtension());
							UPackage::SavePackage(Audit->GetOutermost(), Audit, EObjectFlags::RF_Public | RF_Standalone, *FileName, GError, nullptr, true, true, SAVE_None);
						}
					}
				}
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("[AIBLUE Copilot] Unknown action: %s"), *Action);
			}
		}
	});
}
