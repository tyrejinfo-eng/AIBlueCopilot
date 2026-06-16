// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIBlueCopilot/Public/Analyzer/ProjectAnalyzer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectAnalyzer() {}
// Cross Module References
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UProjectAnalyzer();
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UProjectAnalyzer_NoRegister();
	AIBLUECOPILOT_API UScriptStruct* Z_Construct_UScriptStruct_FProjectArchitecture();
	AIBLUECOPILOT_API UScriptStruct* Z_Construct_UScriptStruct_FProjectModule();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIBlueCopilot();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectModule;
class UScriptStruct* FProjectModule::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectModule.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectModule.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectModule, (UObject*)Z_Construct_UPackage__Script_AIBlueCopilot(), TEXT("ProjectModule"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectModule.OuterSingleton;
}
template<> AIBLUECOPILOT_API UScriptStruct* StaticStruct<FProjectModule>()
{
	return FProjectModule::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProjectModule_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModuleName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModulePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ModulePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlugin_MetaData[];
#endif
		static void NewProp_bIsPlugin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlugin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectModule_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectModule_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectModule>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModuleName_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModuleName = { "ModuleName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectModule, ModuleName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModuleName_MetaData), Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModuleName_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModulePath_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModulePath = { "ModulePath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectModule, ModulePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModulePath_MetaData), Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModulePath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_bIsPlugin_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_bIsPlugin_SetBit(void* Obj)
	{
		((FProjectModule*)Obj)->bIsPlugin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_bIsPlugin = { "bIsPlugin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FProjectModule), &Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_bIsPlugin_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_bIsPlugin_MetaData), Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_bIsPlugin_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModuleName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_ModulePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectModule_Statics::NewProp_bIsPlugin,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectModule_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
		nullptr,
		&NewStructOps,
		"ProjectModule",
		Z_Construct_UScriptStruct_FProjectModule_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectModule_Statics::PropPointers),
		sizeof(FProjectModule),
		alignof(FProjectModule),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectModule_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectModule_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectModule_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FProjectModule()
	{
		if (!Z_Registration_Info_UScriptStruct_ProjectModule.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectModule.InnerSingleton, Z_Construct_UScriptStruct_FProjectModule_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProjectModule.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ProjectArchitecture;
class UScriptStruct* FProjectArchitecture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ProjectArchitecture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ProjectArchitecture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectArchitecture, (UObject*)Z_Construct_UPackage__Script_AIBlueCopilot(), TEXT("ProjectArchitecture"));
	}
	return Z_Registration_Info_UScriptStruct_ProjectArchitecture.OuterSingleton;
}
template<> AIBLUECOPILOT_API UScriptStruct* StaticStruct<FProjectArchitecture>()
{
	return FProjectArchitecture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FProjectArchitecture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Modules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Modules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Modules;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Plugins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Plugins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Plugins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalAssets_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalAssets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectArchitecture_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectArchitecture>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_ProjectName_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_ProjectName = { "ProjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectArchitecture, ProjectName), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_ProjectName_MetaData), Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_ProjectName_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Modules_Inner = { "Modules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProjectModule, METADATA_PARAMS(0, nullptr) }; // 2266728452
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Modules_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Modules = { "Modules", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectArchitecture, Modules), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Modules_MetaData), Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Modules_MetaData) }; // 2266728452
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Plugins_Inner = { "Plugins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Plugins_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Plugins = { "Plugins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectArchitecture, Plugins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Plugins_MetaData), Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Plugins_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_TotalAssets_MetaData[] = {
		{ "Category", "Project" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_TotalAssets = { "TotalAssets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FProjectArchitecture, TotalAssets), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_TotalAssets_MetaData), Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_TotalAssets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProjectArchitecture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_ProjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Modules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Modules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Plugins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_Plugins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewProp_TotalAssets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectArchitecture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
		nullptr,
		&NewStructOps,
		"ProjectArchitecture",
		Z_Construct_UScriptStruct_FProjectArchitecture_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectArchitecture_Statics::PropPointers),
		sizeof(FProjectArchitecture),
		alignof(FProjectArchitecture),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectArchitecture_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FProjectArchitecture_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectArchitecture_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FProjectArchitecture()
	{
		if (!Z_Registration_Info_UScriptStruct_ProjectArchitecture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ProjectArchitecture.InnerSingleton, Z_Construct_UScriptStruct_FProjectArchitecture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ProjectArchitecture.InnerSingleton;
	}
	DEFINE_FUNCTION(UProjectAnalyzer::execGetBlueprintClasses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetBlueprintClasses();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectAnalyzer::execScanContentDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Directory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->ScanContentDirectory(Z_Param_Directory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectAnalyzer::execGetArchitectureSummary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetArchitectureSummary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectAnalyzer::execGetProjectPlugins)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->GetProjectPlugins();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectAnalyzer::execGetProjectModules)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FProjectModule>*)Z_Param__Result=P_THIS->GetProjectModules();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UProjectAnalyzer::execAnalyzeProjectArchitecture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FProjectArchitecture*)Z_Param__Result=P_THIS->AnalyzeProjectArchitecture();
		P_NATIVE_END;
	}
	void UProjectAnalyzer::StaticRegisterNativesUProjectAnalyzer()
	{
		UClass* Class = UProjectAnalyzer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnalyzeProjectArchitecture", &UProjectAnalyzer::execAnalyzeProjectArchitecture },
			{ "GetArchitectureSummary", &UProjectAnalyzer::execGetArchitectureSummary },
			{ "GetBlueprintClasses", &UProjectAnalyzer::execGetBlueprintClasses },
			{ "GetProjectModules", &UProjectAnalyzer::execGetProjectModules },
			{ "GetProjectPlugins", &UProjectAnalyzer::execGetProjectPlugins },
			{ "ScanContentDirectory", &UProjectAnalyzer::execScanContentDirectory },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics
	{
		struct ProjectAnalyzer_eventAnalyzeProjectArchitecture_Parms
		{
			FProjectArchitecture ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectAnalyzer_eventAnalyzeProjectArchitecture_Parms, ReturnValue), Z_Construct_UScriptStruct_FProjectArchitecture, METADATA_PARAMS(0, nullptr) }; // 3994975437
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Analysis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Analyze the project architecture */" },
#endif
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Analyze the project architecture" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectAnalyzer, nullptr, "AnalyzeProjectArchitecture", nullptr, nullptr, Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::ProjectAnalyzer_eventAnalyzeProjectArchitecture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::ProjectAnalyzer_eventAnalyzeProjectArchitecture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics
	{
		struct ProjectAnalyzer_eventGetArchitectureSummary_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectAnalyzer_eventGetArchitectureSummary_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Analysis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get architecture summary as string */" },
#endif
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get architecture summary as string" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectAnalyzer, nullptr, "GetArchitectureSummary", nullptr, nullptr, Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::ProjectAnalyzer_eventGetArchitectureSummary_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::ProjectAnalyzer_eventGetArchitectureSummary_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics
	{
		struct ProjectAnalyzer_eventGetBlueprintClasses_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectAnalyzer_eventGetBlueprintClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Analysis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get blueprint classes in project */" },
#endif
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get blueprint classes in project" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectAnalyzer, nullptr, "GetBlueprintClasses", nullptr, nullptr, Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::ProjectAnalyzer_eventGetBlueprintClasses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::ProjectAnalyzer_eventGetBlueprintClasses_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics
	{
		struct ProjectAnalyzer_eventGetProjectModules_Parms
		{
			TArray<FProjectModule> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FProjectModule, METADATA_PARAMS(0, nullptr) }; // 2266728452
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectAnalyzer_eventGetProjectModules_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2266728452
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Analysis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get project modules */" },
#endif
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get project modules" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectAnalyzer, nullptr, "GetProjectModules", nullptr, nullptr, Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::ProjectAnalyzer_eventGetProjectModules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::ProjectAnalyzer_eventGetProjectModules_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics
	{
		struct ProjectAnalyzer_eventGetProjectPlugins_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectAnalyzer_eventGetProjectPlugins_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Analysis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get installed plugins */" },
#endif
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get installed plugins" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectAnalyzer, nullptr, "GetProjectPlugins", nullptr, nullptr, Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::ProjectAnalyzer_eventGetProjectPlugins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::ProjectAnalyzer_eventGetProjectPlugins_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics
	{
		struct ProjectAnalyzer_eventScanContentDirectory_Parms
		{
			FString Directory;
			TArray<FString> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Directory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Directory;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_Directory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_Directory = { "Directory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectAnalyzer_eventScanContentDirectory_Parms, Directory), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_Directory_MetaData), Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_Directory_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ProjectAnalyzer_eventScanContentDirectory_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_Directory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Analysis" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Scan content directory */" },
#endif
		{ "CPP_Default_Directory", "/Game" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scan content directory" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UProjectAnalyzer, nullptr, "ScanContentDirectory", nullptr, nullptr, Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::PropPointers), sizeof(Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::ProjectAnalyzer_eventScanContentDirectory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::ProjectAnalyzer_eventScanContentDirectory_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectAnalyzer);
	UClass* Z_Construct_UClass_UProjectAnalyzer_NoRegister()
	{
		return UProjectAnalyzer::StaticClass();
	}
	struct Z_Construct_UClass_UProjectAnalyzer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectAnalyzer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectAnalyzer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UProjectAnalyzer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UProjectAnalyzer_AnalyzeProjectArchitecture, "AnalyzeProjectArchitecture" }, // 1749650775
		{ &Z_Construct_UFunction_UProjectAnalyzer_GetArchitectureSummary, "GetArchitectureSummary" }, // 3471135559
		{ &Z_Construct_UFunction_UProjectAnalyzer_GetBlueprintClasses, "GetBlueprintClasses" }, // 2278906668
		{ &Z_Construct_UFunction_UProjectAnalyzer_GetProjectModules, "GetProjectModules" }, // 3710723867
		{ &Z_Construct_UFunction_UProjectAnalyzer_GetProjectPlugins, "GetProjectPlugins" }, // 1995890626
		{ &Z_Construct_UFunction_UProjectAnalyzer_ScanContentDirectory, "ScanContentDirectory" }, // 1968675003
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectAnalyzer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectAnalyzer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Project Architecture Analyzer\n * Analyzes Unreal Engine project structure and provides insights\n */" },
#endif
		{ "IncludePath", "Analyzer/ProjectAnalyzer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Analyzer/ProjectAnalyzer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Project Architecture Analyzer\nAnalyzes Unreal Engine project structure and provides insights" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectAnalyzer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectAnalyzer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectAnalyzer_Statics::ClassParams = {
		&UProjectAnalyzer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectAnalyzer_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectAnalyzer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UProjectAnalyzer()
	{
		if (!Z_Registration_Info_UClass_UProjectAnalyzer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectAnalyzer.OuterSingleton, Z_Construct_UClass_UProjectAnalyzer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectAnalyzer.OuterSingleton;
	}
	template<> AIBLUECOPILOT_API UClass* StaticClass<UProjectAnalyzer>()
	{
		return UProjectAnalyzer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectAnalyzer);
	UProjectAnalyzer::~UProjectAnalyzer() {}
	struct Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_Statics::ScriptStructInfo[] = {
		{ FProjectModule::StaticStruct, Z_Construct_UScriptStruct_FProjectModule_Statics::NewStructOps, TEXT("ProjectModule"), &Z_Registration_Info_UScriptStruct_ProjectModule, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectModule), 2266728452U) },
		{ FProjectArchitecture::StaticStruct, Z_Construct_UScriptStruct_FProjectArchitecture_Statics::NewStructOps, TEXT("ProjectArchitecture"), &Z_Registration_Info_UScriptStruct_ProjectArchitecture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FProjectArchitecture), 3994975437U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectAnalyzer, UProjectAnalyzer::StaticClass, TEXT("UProjectAnalyzer"), &Z_Registration_Info_UClass_UProjectAnalyzer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectAnalyzer), 2433489995U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_2608689637(TEXT("/Script/AIBlueCopilot"),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
