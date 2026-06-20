// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIBlueCopilot/Public/Audit/CopilotAuditLog.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCopilotAuditLog() {}
// Cross Module References
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UCopilotAuditLog();
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UCopilotAuditLog_NoRegister();
	AIBLUECOPILOT_API UScriptStruct* Z_Construct_UScriptStruct_FAuditEntry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIBlueCopilot();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AuditEntry;
class UScriptStruct* FAuditEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AuditEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AuditEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuditEntry, (UObject*)Z_Construct_UPackage__Script_AIBlueCopilot(), TEXT("AuditEntry"));
	}
	return Z_Registration_Info_UScriptStruct_AuditEntry.OuterSingleton;
}
template<> AIBLUECOPILOT_API UScriptStruct* StaticStruct<FAuditEntry>()
{
	return FAuditEntry::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAuditEntry_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Details;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Timestamp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuditEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuditEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuditEntry>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Action_MetaData[] = {
		{ "Category", "AuditEntry" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuditEntry, Action), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Action_MetaData), Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "AuditEntry" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuditEntry, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_AssetPath_MetaData), Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_AssetPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Details_MetaData[] = {
		{ "Category", "AuditEntry" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuditEntry, Details), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Details_MetaData), Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Details_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Timestamp_MetaData[] = {
		{ "Category", "AuditEntry" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAuditEntry, Timestamp), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Timestamp_MetaData), Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Timestamp_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuditEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Details,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuditEntry_Statics::NewProp_Timestamp,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuditEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
		nullptr,
		&NewStructOps,
		"AuditEntry",
		Z_Construct_UScriptStruct_FAuditEntry_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuditEntry_Statics::PropPointers),
		sizeof(FAuditEntry),
		alignof(FAuditEntry),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuditEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAuditEntry_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuditEntry_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAuditEntry()
	{
		if (!Z_Registration_Info_UScriptStruct_AuditEntry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AuditEntry.InnerSingleton, Z_Construct_UScriptStruct_FAuditEntry_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AuditEntry.InnerSingleton;
	}
	DEFINE_FUNCTION(UCopilotAuditLog::execAddEntry)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Action);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_Details);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEntry(Z_Param_Action,Z_Param_AssetPath,Z_Param_Details);
		P_NATIVE_END;
	}
	void UCopilotAuditLog::StaticRegisterNativesUCopilotAuditLog()
	{
		UClass* Class = UCopilotAuditLog::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEntry", &UCopilotAuditLog::execAddEntry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics
	{
		struct CopilotAuditLog_eventAddEntry_Parms
		{
			FString Action;
			FString AssetPath;
			FString Details;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Details_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Details;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Action_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopilotAuditLog_eventAddEntry_Parms, Action), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Action_MetaData), Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Action_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopilotAuditLog_eventAddEntry_Parms, AssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_AssetPath_MetaData), Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_AssetPath_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Details_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CopilotAuditLog_eventAddEntry_Parms, Details), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Details_MetaData), Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Details_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::NewProp_Details,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Copilot Audit" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCopilotAuditLog, nullptr, "AddEntry", nullptr, nullptr, Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::CopilotAuditLog_eventAddEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::CopilotAuditLog_eventAddEntry_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UCopilotAuditLog_AddEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCopilotAuditLog_AddEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCopilotAuditLog);
	UClass* Z_Construct_UClass_UCopilotAuditLog_NoRegister()
	{
		return UCopilotAuditLog::StaticClass();
	}
	struct Z_Construct_UClass_UCopilotAuditLog_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCopilotAuditLog_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCopilotAuditLog_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UCopilotAuditLog_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCopilotAuditLog_AddEntry, "AddEntry" }, // 1202494181
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCopilotAuditLog_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCopilotAuditLog_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Audit/CopilotAuditLog.h" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCopilotAuditLog_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAuditEntry, METADATA_PARAMS(0, nullptr) }; // 4108063213
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCopilotAuditLog_Statics::NewProp_Entries_MetaData[] = {
		{ "Category", "Copilot Audit" },
		{ "ModuleRelativePath", "Public/Audit/CopilotAuditLog.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCopilotAuditLog_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCopilotAuditLog, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCopilotAuditLog_Statics::NewProp_Entries_MetaData), Z_Construct_UClass_UCopilotAuditLog_Statics::NewProp_Entries_MetaData) }; // 4108063213
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCopilotAuditLog_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCopilotAuditLog_Statics::NewProp_Entries_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCopilotAuditLog_Statics::NewProp_Entries,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCopilotAuditLog_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCopilotAuditLog>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCopilotAuditLog_Statics::ClassParams = {
		&UCopilotAuditLog::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCopilotAuditLog_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCopilotAuditLog_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCopilotAuditLog_Statics::Class_MetaDataParams), Z_Construct_UClass_UCopilotAuditLog_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCopilotAuditLog_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCopilotAuditLog()
	{
		if (!Z_Registration_Info_UClass_UCopilotAuditLog.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCopilotAuditLog.OuterSingleton, Z_Construct_UClass_UCopilotAuditLog_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCopilotAuditLog.OuterSingleton;
	}
	template<> AIBLUECOPILOT_API UClass* StaticClass<UCopilotAuditLog>()
	{
		return UCopilotAuditLog::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCopilotAuditLog);
	UCopilotAuditLog::~UCopilotAuditLog() {}
	struct Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_Statics::ScriptStructInfo[] = {
		{ FAuditEntry::StaticStruct, Z_Construct_UScriptStruct_FAuditEntry_Statics::NewStructOps, TEXT("AuditEntry"), &Z_Registration_Info_UScriptStruct_AuditEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAuditEntry), 4108063213U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCopilotAuditLog, UCopilotAuditLog::StaticClass, TEXT("UCopilotAuditLog"), &Z_Registration_Info_UClass_UCopilotAuditLog, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCopilotAuditLog), 2450094263U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_24262992(TEXT("/Script/AIBlueCopilot"),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Audit_CopilotAuditLog_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
