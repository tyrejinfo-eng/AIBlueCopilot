// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LLM/LLMServiceClient.h"
#include "Analyzer/ProjectAnalyzer.h"
#include "AIBlueCopilot.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCopilotResponse, const FString&, Response, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCopilotProgress, const FString&, Message);

UENUM(BlueprintType)
enum class ECopilotCommandType : uint8
{
	BuildScene,
	BuildUI,
	ConvertJSON,
	EditBlueprint,
	AnalyzeArchitecture,
	GenerateCode,
	RefactorBlueprint
};

USTRUCT(BlueprintType)
struct FCopilotCommand
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Copilot")
	ECopilotCommandType CommandType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Copilot")
	FString CommandText;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Copilot")
	FString TargetAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Copilot")
	TMap<FString, FString> Parameters;
};

/**
 * AI Copilot Manager - Main interface for AI-powered UE5 development
 * Integrates with LM Studio and Qwen2.5 Coder model
 */
UCLASS(BlueprintType, Blueprintable)
class AIBLUECOPILOT_API AAIBlueCopilot : public AActor
{
	GENERATED_BODY()

public:
	AAIBlueCopilot();

	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	/** Initialize the copilot with LM Studio connection */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	void InitializeCopilot(const FString& LMStudioURL = TEXT("http://localhost:1234"));

	/** Execute a copilot command */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	void ExecuteCommand(const FCopilotCommand& Command);

	/** Send a conversational prompt to the copilot */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	void SendPrompt(const FString& Prompt);

	/** Get the current response from the copilot */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	FString GetCopilotResponse() const;

	/** Check if copilot is ready */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	bool IsCopilotReady() const;

	/** Apply a JSON plan produced by the LLM (dry-run -> apply) */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	void ApplyPlan(const FString& PlanJson);

	/** Toggle streaming usage in the LLM client */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings")
	void SetUseStreaming(bool bUse);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings")
	bool GetUseStreaming() const;
	// Delegates
	UPROPERTY(BlueprintAssignable, Category = "AIBLUE|Copilot")
	FOnCopilotResponse OnCopilotResponse;

	UPROPERTY(BlueprintAssignable, Category = "AIBLUE|Copilot")
	FOnCopilotProgress OnCopilotProgress;

private:
	UPROPERTY(VisibleAnywhere, Category = "AIBLUE|Copilot")
	class UProjectAnalyzer* ProjectAnalyzer;

	FLLMServiceClient LLMClient;
	bool bIsInitialized;
	FString CurrentResponse;
	FString LastError;
	bool bAllowAssetChanges = false;

	// Command handlers
	void HandleBuildSceneCommand(const FCopilotCommand& Command);
	void HandleBuildUICommand(const FCopilotCommand& Command);
	void HandleConvertJSONCommand(const FCopilotCommand& Command);
	void HandleEditBlueprintCommand(const FCopilotCommand& Command);
	void HandleAnalyzeArchitectureCommand(const FCopilotCommand& Command);
	void HandleGenerateCodeCommand(const FCopilotCommand& Command);
	void HandleRefactorBlueprintCommand(const FCopilotCommand& Command);

	// LLM callbacks
	void OnLLMResponseReceived();
	void OnLLMError();

	// Helper functions
	FString BuildContextPrompt(const FString& UserCommand);
	void ExecuteGeneratedCode(const FString& GeneratedCode);

public:
	// Expose error/permissions
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	FString GetLastError() const { return LastError; }

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	void SetAllowAssetChanges(bool bAllow) { bAllowAssetChanges = bAllow; }

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Copilot")
	bool IsAssetModificationAllowed() const { return bAllowAssetChanges; }
};
