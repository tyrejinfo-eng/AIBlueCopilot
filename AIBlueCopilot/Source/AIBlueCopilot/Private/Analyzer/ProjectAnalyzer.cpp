// Copyright Syntheticgamelabs. All Rights Reserved.
// Developer: Syntheticgamelabs
// Contact: syntheticgamelabs@gmail.com

#include "Analyzer/ProjectAnalyzer.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Interfaces/IPluginManager.h"
#include "HAL/FileManager.h"
#include "Misc/Paths.h"

UProjectAnalyzer::UProjectAnalyzer()
	: bArchitectureAnalyzed(false)
{
}

FProjectArchitecture UProjectAnalyzer::AnalyzeProjectArchitecture()
{
	if (bArchitectureAnalyzed)
	{
		return CachedArchitecture;
	}

	CachedArchitecture.ProjectName = FApp::GetProjectName();
	CachedArchitecture.Modules = GetProjectModules();
	CachedArchitecture.Plugins = GetProjectPlugins();

	// Get total assets
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	TArray<FAssetData> AllAssets;
	AssetRegistryModule.Get().GetAllAssets(AllAssets, true);
	CachedArchitecture.TotalAssets = AllAssets.Num();

	bArchitectureAnalyzed = true;
	UE_LOG(LogTemp, Warning, TEXT("[ProjectAnalyzer] Project architecture analyzed: %s"), *CachedArchitecture.ProjectName);

	return CachedArchitecture;
}

TArray<FProjectModule> UProjectAnalyzer::GetProjectModules()
{
	TArray<FProjectModule> Modules;

	FString SourceDir = FPaths::ProjectDir() / TEXT("Source");
	TArray<FString> BuildFiles;
	IFileManager& FileManager = IFileManager::Get();
	FileManager.FindFilesRecursive(BuildFiles, *SourceDir, TEXT("*.Build.cs"), true, false);

	for (const FString& BuildFile : BuildFiles)
	{
		FString ModuleName = FPaths::GetBaseFilename(BuildFile);
		FProjectModule Module;
		Module.ModuleName = ModuleName;
		Module.bIsPlugin = false;
		Modules.Add(Module);
	}

	UE_LOG(LogTemp, Warning, TEXT("[ProjectAnalyzer] Found %d modules"), Modules.Num());
	return Modules;
}

TArray<FString> UProjectAnalyzer::GetProjectPlugins()
{
	TArray<FString> Plugins;
	IPluginManager& PluginManager = IPluginManager::Get();

	TArray<TSharedRef<IPlugin>> InstalledPlugins = PluginManager.GetDiscoveredPlugins();
	for (const TSharedRef<IPlugin>& Plugin : InstalledPlugins)
	{
		if (Plugin->IsEnabled())
		{
			Plugins.Add(Plugin->GetName());
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("[ProjectAnalyzer] Found %d enabled plugins"), Plugins.Num());
	return Plugins;
}

FString UProjectAnalyzer::GetArchitectureSummary()
{
	if (!bArchitectureAnalyzed)
	{
		AnalyzeProjectArchitecture();
	}

	FString Summary = FString::Printf(
		TEXT("Project: %s\n")
		TEXT("Modules: %d\n")
		TEXT("Plugins: %d\n")
		TEXT("Total Assets: %d\n"),
		*CachedArchitecture.ProjectName,
		CachedArchitecture.Modules.Num(),
		CachedArchitecture.Plugins.Num(),
		CachedArchitecture.TotalAssets
	);

	return Summary;
}

TArray<FString> UProjectAnalyzer::ScanContentDirectory(const FString& Directory)
{
	TArray<FString> Assets;
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	FARFilter Filter;
	Filter.PackagePaths.Add(*Directory);
	Filter.bRecursivePaths = true;

	TArray<FAssetData> AssetData;
	AssetRegistryModule.Get().GetAssets(Filter, AssetData);

	for (const FAssetData& Asset : AssetData)
	{
		Assets.Add(Asset.PackageName.ToString());
	}

	return Assets;
}

TArray<FString> UProjectAnalyzer::GetBlueprintClasses()
{
	TArray<FString> Blueprints;
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");

	FARFilter Filter;
	Filter.ClassNames.Add(UBlueprint::StaticClass()->GetFName());
	Filter.bRecursivePaths = true;

	TArray<FAssetData> AssetData;
	AssetRegistryModule.Get().GetAssets(Filter, AssetData);

	for (const FAssetData& Asset : AssetData)
	{
		Blueprints.Add(Asset.PackageName.ToString());
	}

	return Blueprints;
}
