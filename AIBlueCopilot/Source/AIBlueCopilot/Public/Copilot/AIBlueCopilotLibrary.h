// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Copilot/AIBlueCopilot.h"
#include "AIBlueCopilotLibrary.generated.h"

/**
 * Blueprint Function Library for AIBlueCopilot
 * Provides convenient access to copilot functions from blueprints
 */
UCLASS()
class AIBLUECOPILOT_API UAIBlueCopilotLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Get or create the copilot instance in the world */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Copilot", meta = (WorldContext = "WorldContextObject"))
	static AAIBlueCopilot* GetCopilotInstance(UObject* WorldContextObject);

	/** Build a scene using AI */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Commands", meta = (WorldContext = "WorldContextObject"))
	static void BuildScene(UObject* WorldContextObject, const FString& SceneDescription);

	/** Build a UI using AI */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Commands", meta = (WorldContext = "WorldContextObject"))
	static void BuildUI(UObject* WorldContextObject, const FString& UIDescription);

	/** Analyze project architecture */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Commands", meta = (WorldContext = "WorldContextObject"))
	static void AnalyzeArchitecture(UObject* WorldContextObject);

	/** Refactor a blueprint */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Commands", meta = (WorldContext = "WorldContextObject"))
	static void RefactorBlueprint(UObject* WorldContextObject, const FString& BlueprintPath, const FString& RefactoringRequest);

	/** Send a custom prompt to the copilot */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Commands", meta = (WorldContext = "WorldContextObject"))
	static void SendCustomPrompt(UObject* WorldContextObject, const FString& Prompt);

	/** Check if copilot is ready */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Status", meta = (WorldContext = "WorldContextObject"))
	static bool IsCopilotReady(UObject* WorldContextObject);

	/** Get last response */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Status", meta = (WorldContext = "WorldContextObject"))
	static FString GetLastResponse(UObject* WorldContextObject);

	/** Get last error from the LLM client */
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Status", meta = (WorldContext = "WorldContextObject"))
	static FString GetLastError(UObject* WorldContextObject);

	/** Initialize the copilot with an LLM URL */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static void InitializeCopilot(UObject* WorldContextObject, const FString& LMStudioURL);

	/** Set/Get the LM Studio URL persisted to Editor config */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static void SetLMStudioURL(UObject* WorldContextObject, const FString& NewURL);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static FString GetLMStudioURL(UObject* WorldContextObject);

	/** Use localhost override */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static void SetUseLocalhost(UObject* WorldContextObject, bool bUseLocal);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static bool GetUseLocalhost(UObject* WorldContextObject);

	/** Allow copilot to make asset changes in project (requires explicit opt-in) */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static void SetAllowAssetChanges(UObject* WorldContextObject, bool bAllow);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static bool GetAllowAssetChanges(UObject* WorldContextObject);

	/** Run an asynchronous health check against the LLM endpoint and log results */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Diagnostics", meta = (WorldContext = "WorldContextObject"))
	static void RunHealthCheck(UObject* WorldContextObject);

	/** Toggle streaming for the LLM client (persisted) */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static void SetUseStreaming(UObject* WorldContextObject, bool bUse);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static bool GetUseStreaming(UObject* WorldContextObject);

	/** Poll timeouts in seconds (total and interval) */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static void SetPollTimeoutSeconds(UObject* WorldContextObject, float Seconds);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static float GetPollTimeoutSeconds(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static void SetPollIntervalSeconds(UObject* WorldContextObject, float Seconds);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AIBLUE|Settings", meta = (WorldContext = "WorldContextObject"))
	static float GetPollIntervalSeconds(UObject* WorldContextObject);

	/** Apply a parsed plan (JSON) using the Copilot actor */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Commands", meta = (WorldContext = "WorldContextObject"))
	static void ApplyPlan(UObject* WorldContextObject, const FString& PlanJson);

	// Basic generation helpers (stubs that send a templated prompt to the LLM)
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Generation", meta = (WorldContext = "WorldContextObject"))
	static void GenerateBlueprint(UObject* WorldContextObject, const FString& Description);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Generation", meta = (WorldContext = "WorldContextObject"))
	static void GenerateMaterial(UObject* WorldContextObject, const FString& Description);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Generation", meta = (WorldContext = "WorldContextObject"))
	static void GenerateBehaviorTree(UObject* WorldContextObject, const FString& Description);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Tools", meta = (WorldContext = "WorldContextObject"))
	static void IndexProject(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Generation", meta = (WorldContext = "WorldContextObject"))
	static void Generate3DModel(UObject* WorldContextObject, const FString& Description);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Generation", meta = (WorldContext = "WorldContextObject"))
	static void GenerateImage(UObject* WorldContextObject, const FString& Prompt);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Generation", meta = (WorldContext = "WorldContextObject"))
	static void GenerateAudio(UObject* WorldContextObject, const FString& Prompt);

	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Tools", meta = (WorldContext = "WorldContextObject"))
	static void StartCodeAssistant(UObject* WorldContextObject);
};
