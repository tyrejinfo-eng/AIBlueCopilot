// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIBlueCopilot/Public/Copilot/AIBlueCopilotLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBlueCopilotLibrary() {}
// Cross Module References
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_AAIBlueCopilot_NoRegister();
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UAIBlueCopilotLibrary();
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UAIBlueCopilotLibrary_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AIBlueCopilot();
// End Cross Module References
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execStartCodeAssistant)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::StartCodeAssistant(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGenerateAudio)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::GenerateAudio(Z_Param_WorldContextObject,Z_Param_Prompt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGenerateImage)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::GenerateImage(Z_Param_WorldContextObject,Z_Param_Prompt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGenerate3DModel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::Generate3DModel(Z_Param_WorldContextObject,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execIndexProject)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::IndexProject(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGenerateBehaviorTree)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::GenerateBehaviorTree(Z_Param_WorldContextObject,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGenerateMaterial)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::GenerateMaterial(Z_Param_WorldContextObject,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGenerateBlueprint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Description);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::GenerateBlueprint(Z_Param_WorldContextObject,Z_Param_Description);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execApplyPlan)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_PlanJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::ApplyPlan(Z_Param_WorldContextObject,Z_Param_PlanJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetPollIntervalSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAIBlueCopilotLibrary::GetPollIntervalSeconds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execSetPollIntervalSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::SetPollIntervalSeconds(Z_Param_WorldContextObject,Z_Param_Seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetPollTimeoutSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAIBlueCopilotLibrary::GetPollTimeoutSeconds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execSetPollTimeoutSeconds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::SetPollTimeoutSeconds(Z_Param_WorldContextObject,Z_Param_Seconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetUseStreaming)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAIBlueCopilotLibrary::GetUseStreaming(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execSetUseStreaming)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::SetUseStreaming(Z_Param_WorldContextObject,Z_Param_bUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execRunHealthCheck)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::RunHealthCheck(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetAllowAssetChanges)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAIBlueCopilotLibrary::GetAllowAssetChanges(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execSetAllowAssetChanges)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::SetAllowAssetChanges(Z_Param_WorldContextObject,Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetUseLocalhost)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAIBlueCopilotLibrary::GetUseLocalhost(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execSetUseLocalhost)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bUseLocal);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::SetUseLocalhost(Z_Param_WorldContextObject,Z_Param_bUseLocal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetLMStudioURL)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAIBlueCopilotLibrary::GetLMStudioURL(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execSetLMStudioURL)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::SetLMStudioURL(Z_Param_WorldContextObject,Z_Param_NewURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execInitializeCopilot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_LMStudioURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::InitializeCopilot(Z_Param_WorldContextObject,Z_Param_LMStudioURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetLastError)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAIBlueCopilotLibrary::GetLastError(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetLastResponse)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAIBlueCopilotLibrary::GetLastResponse(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execIsCopilotReady)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAIBlueCopilotLibrary::IsCopilotReady(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execSendCustomPrompt)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::SendCustomPrompt(Z_Param_WorldContextObject,Z_Param_Prompt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execRefactorBlueprint)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_BlueprintPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_RefactoringRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::RefactorBlueprint(Z_Param_WorldContextObject,Z_Param_BlueprintPath,Z_Param_RefactoringRequest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execAnalyzeArchitecture)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::AnalyzeArchitecture(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execBuildUI)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_UIDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::BuildUI(Z_Param_WorldContextObject,Z_Param_UIDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execBuildScene)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SceneDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAIBlueCopilotLibrary::BuildScene(Z_Param_WorldContextObject,Z_Param_SceneDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAIBlueCopilotLibrary::execGetCopilotInstance)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAIBlueCopilot**)Z_Param__Result=UAIBlueCopilotLibrary::GetCopilotInstance(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAIBlueCopilotLibrary::StaticRegisterNativesUAIBlueCopilotLibrary()
	{
		UClass* Class = UAIBlueCopilotLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnalyzeArchitecture", &UAIBlueCopilotLibrary::execAnalyzeArchitecture },
			{ "ApplyPlan", &UAIBlueCopilotLibrary::execApplyPlan },
			{ "BuildScene", &UAIBlueCopilotLibrary::execBuildScene },
			{ "BuildUI", &UAIBlueCopilotLibrary::execBuildUI },
			{ "Generate3DModel", &UAIBlueCopilotLibrary::execGenerate3DModel },
			{ "GenerateAudio", &UAIBlueCopilotLibrary::execGenerateAudio },
			{ "GenerateBehaviorTree", &UAIBlueCopilotLibrary::execGenerateBehaviorTree },
			{ "GenerateBlueprint", &UAIBlueCopilotLibrary::execGenerateBlueprint },
			{ "GenerateImage", &UAIBlueCopilotLibrary::execGenerateImage },
			{ "GenerateMaterial", &UAIBlueCopilotLibrary::execGenerateMaterial },
			{ "GetAllowAssetChanges", &UAIBlueCopilotLibrary::execGetAllowAssetChanges },
			{ "GetCopilotInstance", &UAIBlueCopilotLibrary::execGetCopilotInstance },
			{ "GetLastError", &UAIBlueCopilotLibrary::execGetLastError },
			{ "GetLastResponse", &UAIBlueCopilotLibrary::execGetLastResponse },
			{ "GetLMStudioURL", &UAIBlueCopilotLibrary::execGetLMStudioURL },
			{ "GetPollIntervalSeconds", &UAIBlueCopilotLibrary::execGetPollIntervalSeconds },
			{ "GetPollTimeoutSeconds", &UAIBlueCopilotLibrary::execGetPollTimeoutSeconds },
			{ "GetUseLocalhost", &UAIBlueCopilotLibrary::execGetUseLocalhost },
			{ "GetUseStreaming", &UAIBlueCopilotLibrary::execGetUseStreaming },
			{ "IndexProject", &UAIBlueCopilotLibrary::execIndexProject },
			{ "InitializeCopilot", &UAIBlueCopilotLibrary::execInitializeCopilot },
			{ "IsCopilotReady", &UAIBlueCopilotLibrary::execIsCopilotReady },
			{ "RefactorBlueprint", &UAIBlueCopilotLibrary::execRefactorBlueprint },
			{ "RunHealthCheck", &UAIBlueCopilotLibrary::execRunHealthCheck },
			{ "SendCustomPrompt", &UAIBlueCopilotLibrary::execSendCustomPrompt },
			{ "SetAllowAssetChanges", &UAIBlueCopilotLibrary::execSetAllowAssetChanges },
			{ "SetLMStudioURL", &UAIBlueCopilotLibrary::execSetLMStudioURL },
			{ "SetPollIntervalSeconds", &UAIBlueCopilotLibrary::execSetPollIntervalSeconds },
			{ "SetPollTimeoutSeconds", &UAIBlueCopilotLibrary::execSetPollTimeoutSeconds },
			{ "SetUseLocalhost", &UAIBlueCopilotLibrary::execSetUseLocalhost },
			{ "SetUseStreaming", &UAIBlueCopilotLibrary::execSetUseStreaming },
			{ "StartCodeAssistant", &UAIBlueCopilotLibrary::execStartCodeAssistant },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics
	{
		struct AIBlueCopilotLibrary_eventAnalyzeArchitecture_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventAnalyzeArchitecture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Analyze project architecture */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Analyze project architecture" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "AnalyzeArchitecture", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::AIBlueCopilotLibrary_eventAnalyzeArchitecture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::AIBlueCopilotLibrary_eventAnalyzeArchitecture_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics
	{
		struct AIBlueCopilotLibrary_eventApplyPlan_Parms
		{
			UObject* WorldContextObject;
			FString PlanJson;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlanJson_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PlanJson;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventApplyPlan_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::NewProp_PlanJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::NewProp_PlanJson = { "PlanJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventApplyPlan_Parms, PlanJson), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::NewProp_PlanJson_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::NewProp_PlanJson_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::NewProp_PlanJson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply a parsed plan (JSON) using the Copilot actor */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a parsed plan (JSON) using the Copilot actor" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "ApplyPlan", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::AIBlueCopilotLibrary_eventApplyPlan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::AIBlueCopilotLibrary_eventApplyPlan_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics
	{
		struct AIBlueCopilotLibrary_eventBuildScene_Parms
		{
			UObject* WorldContextObject;
			FString SceneDescription;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SceneDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventBuildScene_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::NewProp_SceneDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::NewProp_SceneDescription = { "SceneDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventBuildScene_Parms, SceneDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::NewProp_SceneDescription_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::NewProp_SceneDescription_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::NewProp_SceneDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Build a scene using AI */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build a scene using AI" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "BuildScene", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::AIBlueCopilotLibrary_eventBuildScene_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::AIBlueCopilotLibrary_eventBuildScene_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics
	{
		struct AIBlueCopilotLibrary_eventBuildUI_Parms
		{
			UObject* WorldContextObject;
			FString UIDescription;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIDescription_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UIDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventBuildUI_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::NewProp_UIDescription_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::NewProp_UIDescription = { "UIDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventBuildUI_Parms, UIDescription), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::NewProp_UIDescription_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::NewProp_UIDescription_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::NewProp_UIDescription,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Build a UI using AI */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Build a UI using AI" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "BuildUI", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::AIBlueCopilotLibrary_eventBuildUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::AIBlueCopilotLibrary_eventBuildUI_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics
	{
		struct AIBlueCopilotLibrary_eventGenerate3DModel_Parms
		{
			UObject* WorldContextObject;
			FString Description;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerate3DModel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerate3DModel_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::NewProp_Description_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Generation" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "Generate3DModel", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::AIBlueCopilotLibrary_eventGenerate3DModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::AIBlueCopilotLibrary_eventGenerate3DModel_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics
	{
		struct AIBlueCopilotLibrary_eventGenerateAudio_Parms
		{
			UObject* WorldContextObject;
			FString Prompt;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateAudio_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateAudio_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::NewProp_Prompt_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::NewProp_Prompt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::NewProp_Prompt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Generation" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GenerateAudio", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::AIBlueCopilotLibrary_eventGenerateAudio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::AIBlueCopilotLibrary_eventGenerateAudio_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics
	{
		struct AIBlueCopilotLibrary_eventGenerateBehaviorTree_Parms
		{
			UObject* WorldContextObject;
			FString Description;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateBehaviorTree_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateBehaviorTree_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::NewProp_Description_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Generation" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GenerateBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::AIBlueCopilotLibrary_eventGenerateBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::AIBlueCopilotLibrary_eventGenerateBehaviorTree_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics
	{
		struct AIBlueCopilotLibrary_eventGenerateBlueprint_Parms
		{
			UObject* WorldContextObject;
			FString Description;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateBlueprint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateBlueprint_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::NewProp_Description_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Generation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Basic generation helpers (stubs that send a templated prompt to the LLM)\n" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic generation helpers (stubs that send a templated prompt to the LLM)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GenerateBlueprint", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::AIBlueCopilotLibrary_eventGenerateBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::AIBlueCopilotLibrary_eventGenerateBlueprint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics
	{
		struct AIBlueCopilotLibrary_eventGenerateImage_Parms
		{
			UObject* WorldContextObject;
			FString Prompt;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateImage_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateImage_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::NewProp_Prompt_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::NewProp_Prompt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::NewProp_Prompt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Generation" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GenerateImage", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::AIBlueCopilotLibrary_eventGenerateImage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::AIBlueCopilotLibrary_eventGenerateImage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics
	{
		struct AIBlueCopilotLibrary_eventGenerateMaterial_Parms
		{
			UObject* WorldContextObject;
			FString Description;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateMaterial_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGenerateMaterial_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::NewProp_Description_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::NewProp_Description_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::NewProp_Description,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Generation" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GenerateMaterial", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::AIBlueCopilotLibrary_eventGenerateMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::AIBlueCopilotLibrary_eventGenerateMaterial_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics
	{
		struct AIBlueCopilotLibrary_eventGetAllowAssetChanges_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetAllowAssetChanges_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueCopilotLibrary_eventGetAllowAssetChanges_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilotLibrary_eventGetAllowAssetChanges_Parms), &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetAllowAssetChanges", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::AIBlueCopilotLibrary_eventGetAllowAssetChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::AIBlueCopilotLibrary_eventGetAllowAssetChanges_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics
	{
		struct AIBlueCopilotLibrary_eventGetCopilotInstance_Parms
		{
			UObject* WorldContextObject;
			AAIBlueCopilot* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetCopilotInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetCopilotInstance_Parms, ReturnValue), Z_Construct_UClass_AAIBlueCopilot_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get or create the copilot instance in the world */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get or create the copilot instance in the world" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetCopilotInstance", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::AIBlueCopilotLibrary_eventGetCopilotInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::AIBlueCopilotLibrary_eventGetCopilotInstance_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics
	{
		struct AIBlueCopilotLibrary_eventGetLastError_Parms
		{
			UObject* WorldContextObject;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetLastError_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetLastError_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get last error from the LLM client */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get last error from the LLM client" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetLastError", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::AIBlueCopilotLibrary_eventGetLastError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::AIBlueCopilotLibrary_eventGetLastError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics
	{
		struct AIBlueCopilotLibrary_eventGetLastResponse_Parms
		{
			UObject* WorldContextObject;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetLastResponse_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetLastResponse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get last response */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get last response" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetLastResponse", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::AIBlueCopilotLibrary_eventGetLastResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::AIBlueCopilotLibrary_eventGetLastResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics
	{
		struct AIBlueCopilotLibrary_eventGetLMStudioURL_Parms
		{
			UObject* WorldContextObject;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetLMStudioURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetLMStudioURL_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetLMStudioURL", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::AIBlueCopilotLibrary_eventGetLMStudioURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::AIBlueCopilotLibrary_eventGetLMStudioURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics
	{
		struct AIBlueCopilotLibrary_eventGetPollIntervalSeconds_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetPollIntervalSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetPollIntervalSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetPollIntervalSeconds", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::AIBlueCopilotLibrary_eventGetPollIntervalSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::AIBlueCopilotLibrary_eventGetPollIntervalSeconds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics
	{
		struct AIBlueCopilotLibrary_eventGetPollTimeoutSeconds_Parms
		{
			UObject* WorldContextObject;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetPollTimeoutSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetPollTimeoutSeconds_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetPollTimeoutSeconds", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::AIBlueCopilotLibrary_eventGetPollTimeoutSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::AIBlueCopilotLibrary_eventGetPollTimeoutSeconds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics
	{
		struct AIBlueCopilotLibrary_eventGetUseLocalhost_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetUseLocalhost_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueCopilotLibrary_eventGetUseLocalhost_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilotLibrary_eventGetUseLocalhost_Parms), &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetUseLocalhost", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::AIBlueCopilotLibrary_eventGetUseLocalhost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::AIBlueCopilotLibrary_eventGetUseLocalhost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics
	{
		struct AIBlueCopilotLibrary_eventGetUseStreaming_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventGetUseStreaming_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueCopilotLibrary_eventGetUseStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilotLibrary_eventGetUseStreaming_Parms), &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "GetUseStreaming", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::AIBlueCopilotLibrary_eventGetUseStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::AIBlueCopilotLibrary_eventGetUseStreaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics
	{
		struct AIBlueCopilotLibrary_eventIndexProject_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventIndexProject_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Tools" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "IndexProject", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::AIBlueCopilotLibrary_eventIndexProject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::AIBlueCopilotLibrary_eventIndexProject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics
	{
		struct AIBlueCopilotLibrary_eventInitializeCopilot_Parms
		{
			UObject* WorldContextObject;
			FString LMStudioURL;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LMStudioURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LMStudioURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventInitializeCopilot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::NewProp_LMStudioURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::NewProp_LMStudioURL = { "LMStudioURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventInitializeCopilot_Parms, LMStudioURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::NewProp_LMStudioURL_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::NewProp_LMStudioURL_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::NewProp_LMStudioURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initialize the copilot with an LLM URL */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the copilot with an LLM URL" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "InitializeCopilot", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::AIBlueCopilotLibrary_eventInitializeCopilot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::AIBlueCopilotLibrary_eventInitializeCopilot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics
	{
		struct AIBlueCopilotLibrary_eventIsCopilotReady_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventIsCopilotReady_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueCopilotLibrary_eventIsCopilotReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilotLibrary_eventIsCopilotReady_Parms), &Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Status" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if copilot is ready */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if copilot is ready" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "IsCopilotReady", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::AIBlueCopilotLibrary_eventIsCopilotReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::AIBlueCopilotLibrary_eventIsCopilotReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics
	{
		struct AIBlueCopilotLibrary_eventRefactorBlueprint_Parms
		{
			UObject* WorldContextObject;
			FString BlueprintPath;
			FString RefactoringRequest;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BlueprintPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RefactoringRequest_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RefactoringRequest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventRefactorBlueprint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_BlueprintPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_BlueprintPath = { "BlueprintPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventRefactorBlueprint_Parms, BlueprintPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_BlueprintPath_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_BlueprintPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_RefactoringRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_RefactoringRequest = { "RefactoringRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventRefactorBlueprint_Parms, RefactoringRequest), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_RefactoringRequest_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_RefactoringRequest_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_BlueprintPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::NewProp_RefactoringRequest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Refactor a blueprint */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Refactor a blueprint" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "RefactorBlueprint", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::AIBlueCopilotLibrary_eventRefactorBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::AIBlueCopilotLibrary_eventRefactorBlueprint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics
	{
		struct AIBlueCopilotLibrary_eventRunHealthCheck_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventRunHealthCheck_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Diagnostics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Run an asynchronous health check against the LLM endpoint and log results */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Run an asynchronous health check against the LLM endpoint and log results" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "RunHealthCheck", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::AIBlueCopilotLibrary_eventRunHealthCheck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::AIBlueCopilotLibrary_eventRunHealthCheck_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics
	{
		struct AIBlueCopilotLibrary_eventSendCustomPrompt_Parms
		{
			UObject* WorldContextObject;
			FString Prompt;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Prompt_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Prompt;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSendCustomPrompt_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSendCustomPrompt_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::NewProp_Prompt_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::NewProp_Prompt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::NewProp_Prompt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Commands" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Send a custom prompt to the copilot */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a custom prompt to the copilot" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "SendCustomPrompt", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::AIBlueCopilotLibrary_eventSendCustomPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::AIBlueCopilotLibrary_eventSendCustomPrompt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics
	{
		struct AIBlueCopilotLibrary_eventSetAllowAssetChanges_Parms
		{
			UObject* WorldContextObject;
			bool bAllow;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetAllowAssetChanges_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((AIBlueCopilotLibrary_eventSetAllowAssetChanges_Parms*)Obj)->bAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilotLibrary_eventSetAllowAssetChanges_Parms), &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allow copilot to make asset changes in project (requires explicit opt-in) */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow copilot to make asset changes in project (requires explicit opt-in)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "SetAllowAssetChanges", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::AIBlueCopilotLibrary_eventSetAllowAssetChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::AIBlueCopilotLibrary_eventSetAllowAssetChanges_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics
	{
		struct AIBlueCopilotLibrary_eventSetLMStudioURL_Parms
		{
			UObject* WorldContextObject;
			FString NewURL;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewURL_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewURL;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetLMStudioURL_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::NewProp_NewURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::NewProp_NewURL = { "NewURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetLMStudioURL_Parms, NewURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::NewProp_NewURL_MetaData), Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::NewProp_NewURL_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::NewProp_NewURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set/Get the LM Studio URL persisted to Editor config */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set/Get the LM Studio URL persisted to Editor config" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "SetLMStudioURL", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::AIBlueCopilotLibrary_eventSetLMStudioURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::AIBlueCopilotLibrary_eventSetLMStudioURL_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics
	{
		struct AIBlueCopilotLibrary_eventSetPollIntervalSeconds_Parms
		{
			UObject* WorldContextObject;
			float Seconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetPollIntervalSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetPollIntervalSeconds_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "SetPollIntervalSeconds", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::AIBlueCopilotLibrary_eventSetPollIntervalSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::AIBlueCopilotLibrary_eventSetPollIntervalSeconds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics
	{
		struct AIBlueCopilotLibrary_eventSetPollTimeoutSeconds_Parms
		{
			UObject* WorldContextObject;
			float Seconds;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetPollTimeoutSeconds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetPollTimeoutSeconds_Parms, Seconds), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::NewProp_Seconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Poll timeouts in seconds (total and interval) */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Poll timeouts in seconds (total and interval)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "SetPollTimeoutSeconds", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::AIBlueCopilotLibrary_eventSetPollTimeoutSeconds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::AIBlueCopilotLibrary_eventSetPollTimeoutSeconds_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics
	{
		struct AIBlueCopilotLibrary_eventSetUseLocalhost_Parms
		{
			UObject* WorldContextObject;
			bool bUseLocal;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bUseLocal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLocal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetUseLocalhost_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::NewProp_bUseLocal_SetBit(void* Obj)
	{
		((AIBlueCopilotLibrary_eventSetUseLocalhost_Parms*)Obj)->bUseLocal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::NewProp_bUseLocal = { "bUseLocal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilotLibrary_eventSetUseLocalhost_Parms), &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::NewProp_bUseLocal_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::NewProp_bUseLocal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Use localhost override */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Use localhost override" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "SetUseLocalhost", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::AIBlueCopilotLibrary_eventSetUseLocalhost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::AIBlueCopilotLibrary_eventSetUseLocalhost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics
	{
		struct AIBlueCopilotLibrary_eventSetUseStreaming_Parms
		{
			UObject* WorldContextObject;
			bool bUse;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventSetUseStreaming_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::NewProp_bUse_SetBit(void* Obj)
	{
		((AIBlueCopilotLibrary_eventSetUseStreaming_Parms*)Obj)->bUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::NewProp_bUse = { "bUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilotLibrary_eventSetUseStreaming_Parms), &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::NewProp_bUse_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::NewProp_bUse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle streaming for the LLM client (persisted) */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle streaming for the LLM client (persisted)" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "SetUseStreaming", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::AIBlueCopilotLibrary_eventSetUseStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::AIBlueCopilotLibrary_eventSetUseStreaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics
	{
		struct AIBlueCopilotLibrary_eventStartCodeAssistant_Parms
		{
			UObject* WorldContextObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilotLibrary_eventStartCodeAssistant_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Tools" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIBlueCopilotLibrary, nullptr, "StartCodeAssistant", nullptr, nullptr, Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::AIBlueCopilotLibrary_eventStartCodeAssistant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::AIBlueCopilotLibrary_eventStartCodeAssistant_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAIBlueCopilotLibrary);
	UClass* Z_Construct_UClass_UAIBlueCopilotLibrary_NoRegister()
	{
		return UAIBlueCopilotLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAIBlueCopilotLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_AnalyzeArchitecture, "AnalyzeArchitecture" }, // 893022452
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_ApplyPlan, "ApplyPlan" }, // 1177374938
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildScene, "BuildScene" }, // 3614698771
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_BuildUI, "BuildUI" }, // 2987967280
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_Generate3DModel, "Generate3DModel" }, // 2433698195
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateAudio, "GenerateAudio" }, // 2542152724
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBehaviorTree, "GenerateBehaviorTree" }, // 382081268
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateBlueprint, "GenerateBlueprint" }, // 3852908305
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateImage, "GenerateImage" }, // 2184064236
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GenerateMaterial, "GenerateMaterial" }, // 984093637
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetAllowAssetChanges, "GetAllowAssetChanges" }, // 3169681035
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetCopilotInstance, "GetCopilotInstance" }, // 1849079424
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastError, "GetLastError" }, // 4178299803
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLastResponse, "GetLastResponse" }, // 2952456960
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetLMStudioURL, "GetLMStudioURL" }, // 2682812061
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollIntervalSeconds, "GetPollIntervalSeconds" }, // 4211192197
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetPollTimeoutSeconds, "GetPollTimeoutSeconds" }, // 2842851051
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseLocalhost, "GetUseLocalhost" }, // 3955244153
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_GetUseStreaming, "GetUseStreaming" }, // 18582054
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_IndexProject, "IndexProject" }, // 3158868951
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_InitializeCopilot, "InitializeCopilot" }, // 2775195031
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_IsCopilotReady, "IsCopilotReady" }, // 710651253
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_RefactorBlueprint, "RefactorBlueprint" }, // 1969880450
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_RunHealthCheck, "RunHealthCheck" }, // 1382837764
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_SendCustomPrompt, "SendCustomPrompt" }, // 835606079
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetAllowAssetChanges, "SetAllowAssetChanges" }, // 3371543621
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetLMStudioURL, "SetLMStudioURL" }, // 2835542482
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollIntervalSeconds, "SetPollIntervalSeconds" }, // 3593444740
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetPollTimeoutSeconds, "SetPollTimeoutSeconds" }, // 2124456136
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseLocalhost, "SetUseLocalhost" }, // 3886229558
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_SetUseStreaming, "SetUseStreaming" }, // 2514177728
		{ &Z_Construct_UFunction_UAIBlueCopilotLibrary_StartCodeAssistant, "StartCodeAssistant" }, // 2748512394
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Blueprint Function Library for AIBlueCopilot\n * Provides convenient access to copilot functions from blueprints\n */" },
#endif
		{ "IncludePath", "Copilot/AIBlueCopilotLibrary.h" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilotLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Blueprint Function Library for AIBlueCopilot\nProvides convenient access to copilot functions from blueprints" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIBlueCopilotLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::ClassParams = {
		&UAIBlueCopilotLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UAIBlueCopilotLibrary()
	{
		if (!Z_Registration_Info_UClass_UAIBlueCopilotLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAIBlueCopilotLibrary.OuterSingleton, Z_Construct_UClass_UAIBlueCopilotLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAIBlueCopilotLibrary.OuterSingleton;
	}
	template<> AIBLUECOPILOT_API UClass* StaticClass<UAIBlueCopilotLibrary>()
	{
		return UAIBlueCopilotLibrary::StaticClass();
	}
	UAIBlueCopilotLibrary::UAIBlueCopilotLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIBlueCopilotLibrary);
	UAIBlueCopilotLibrary::~UAIBlueCopilotLibrary() {}
	struct Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAIBlueCopilotLibrary, UAIBlueCopilotLibrary::StaticClass, TEXT("UAIBlueCopilotLibrary"), &Z_Registration_Info_UClass_UAIBlueCopilotLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAIBlueCopilotLibrary), 2741864440U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_2697416443(TEXT("/Script/AIBlueCopilot"),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
