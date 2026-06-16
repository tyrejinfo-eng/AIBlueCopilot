// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ProjectAnalyzer.generated.h"

USTRUCT(BlueprintType)
struct FProjectModule
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Project")
	FString ModuleName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Project")
	FString ModulePath;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Project")
	bool bIsPlugin;
};

USTRUCT(BlueprintType)
struct FProjectArchitecture
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Project")
	FString ProjectName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Project")
	TArray<FProjectModule> Modules;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Project")
	TArray<FString> Plugins;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Project")
	int32 TotalAssets;
};

/**
 * Project Architecture Analyzer
 * Analyzes Unreal Engine project structure and provides insights
 */
UCLASS(BlueprintType, Blueprintable)
class AIBLUECOPILOT_API UProjectAnalyzer : public UObject
{
	GENERATED_BODY()

public:
	UProjectAnalyzer();

	/** Analyze the project architecture */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analysis")
	FProjectArchitecture AnalyzeProjectArchitecture();

	/** Get project modules */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analysis")
	TArray<FProjectModule> GetProjectModules();

	/** Get installed plugins */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analysis")
	TArray<FString> GetProjectPlugins();

	/** Get architecture summary as string */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analysis")
	FString GetArchitectureSummary();

	/** Scan content directory */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analysis")
	TArray<FString> ScanContentDirectory(const FString& Directory = TEXT("/Game"));

	/** Get blueprint classes in project */
	UFUNCTION(BlueprintCallable, Category = "AIBLUE|Analysis")
	TArray<FString> GetBlueprintClasses();

private:
	FProjectArchitecture CachedArchitecture;
	bool bArchitectureAnalyzed;
};
