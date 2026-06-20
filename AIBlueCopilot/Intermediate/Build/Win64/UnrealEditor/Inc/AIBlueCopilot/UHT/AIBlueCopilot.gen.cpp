// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIBlueCopilot/Public/Copilot/AIBlueCopilot.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBlueCopilot() {}
// Cross Module References
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_AAIBlueCopilot();
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_AAIBlueCopilot_NoRegister();
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UProjectAnalyzer_NoRegister();
	AIBLUECOPILOT_API UEnum* Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType();
	AIBLUECOPILOT_API UFunction* Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature();
	AIBLUECOPILOT_API UFunction* Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature();
	AIBLUECOPILOT_API UScriptStruct* Z_Construct_UScriptStruct_FCopilotCommand();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_AIBlueCopilot();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics
	{
		struct _Script_AIBlueCopilot_eventOnCopilotResponse_Parms
		{
			FString Response;
			bool bSuccess;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Response;
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_Response_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIBlueCopilot_eventOnCopilotResponse_Parms, Response), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_Response_MetaData), Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_Response_MetaData) };
	void Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_AIBlueCopilot_eventOnCopilotResponse_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_AIBlueCopilot_eventOnCopilotResponse_Parms), &Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_Response,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::NewProp_bSuccess,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIBlueCopilot, nullptr, "OnCopilotResponse__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::_Script_AIBlueCopilot_eventOnCopilotResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::_Script_AIBlueCopilot_eventOnCopilotResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCopilotResponse_DelegateWrapper(const FMulticastScriptDelegate& OnCopilotResponse, const FString& Response, bool bSuccess)
{
	struct _Script_AIBlueCopilot_eventOnCopilotResponse_Parms
	{
		FString Response;
		bool bSuccess;
	};
	_Script_AIBlueCopilot_eventOnCopilotResponse_Parms Parms;
	Parms.Response=Response;
	Parms.bSuccess=bSuccess ? true : false;
	OnCopilotResponse.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics
	{
		struct _Script_AIBlueCopilot_eventOnCopilotProgress_Parms
		{
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIBlueCopilot_eventOnCopilotProgress_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::NewProp_Message_MetaData), Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::NewProp_Message_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIBlueCopilot, nullptr, "OnCopilotProgress__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::_Script_AIBlueCopilot_eventOnCopilotProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::_Script_AIBlueCopilot_eventOnCopilotProgress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnCopilotProgress_DelegateWrapper(const FMulticastScriptDelegate& OnCopilotProgress, const FString& Message)
{
	struct _Script_AIBlueCopilot_eventOnCopilotProgress_Parms
	{
		FString Message;
	};
	_Script_AIBlueCopilot_eventOnCopilotProgress_Parms Parms;
	Parms.Message=Message;
	OnCopilotProgress.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECopilotCommandType;
	static UEnum* ECopilotCommandType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECopilotCommandType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECopilotCommandType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType, (UObject*)Z_Construct_UPackage__Script_AIBlueCopilot(), TEXT("ECopilotCommandType"));
		}
		return Z_Registration_Info_UEnum_ECopilotCommandType.OuterSingleton;
	}
	template<> AIBLUECOPILOT_API UEnum* StaticEnum<ECopilotCommandType>()
	{
		return ECopilotCommandType_StaticEnum();
	}
	struct Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::Enumerators[] = {
		{ "ECopilotCommandType::BuildScene", (int64)ECopilotCommandType::BuildScene },
		{ "ECopilotCommandType::BuildUI", (int64)ECopilotCommandType::BuildUI },
		{ "ECopilotCommandType::ConvertJSON", (int64)ECopilotCommandType::ConvertJSON },
		{ "ECopilotCommandType::EditBlueprint", (int64)ECopilotCommandType::EditBlueprint },
		{ "ECopilotCommandType::AnalyzeArchitecture", (int64)ECopilotCommandType::AnalyzeArchitecture },
		{ "ECopilotCommandType::GenerateCode", (int64)ECopilotCommandType::GenerateCode },
		{ "ECopilotCommandType::RefactorBlueprint", (int64)ECopilotCommandType::RefactorBlueprint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::Enum_MetaDataParams[] = {
		{ "AnalyzeArchitecture.Name", "ECopilotCommandType::AnalyzeArchitecture" },
		{ "BlueprintType", "true" },
		{ "BuildScene.Name", "ECopilotCommandType::BuildScene" },
		{ "BuildUI.Name", "ECopilotCommandType::BuildUI" },
		{ "ConvertJSON.Name", "ECopilotCommandType::ConvertJSON" },
		{ "EditBlueprint.Name", "ECopilotCommandType::EditBlueprint" },
		{ "GenerateCode.Name", "ECopilotCommandType::GenerateCode" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
		{ "RefactorBlueprint.Name", "ECopilotCommandType::RefactorBlueprint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIBlueCopilot,
		nullptr,
		"ECopilotCommandType",
		"ECopilotCommandType",
		Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType()
	{
		if (!Z_Registration_Info_UEnum_ECopilotCommandType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECopilotCommandType.InnerSingleton, Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECopilotCommandType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CopilotCommand;
class UScriptStruct* FCopilotCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CopilotCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CopilotCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCopilotCommand, (UObject*)Z_Construct_UPackage__Script_AIBlueCopilot(), TEXT("CopilotCommand"));
	}
	return Z_Registration_Info_UScriptStruct_CopilotCommand.OuterSingleton;
}
template<> AIBLUECOPILOT_API UScriptStruct* StaticStruct<FCopilotCommand>()
{
	return FCopilotCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCopilotCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CommandType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CommandType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CommandText_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CommandText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetAsset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Parameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopilotCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCopilotCommand>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandType_MetaData[] = {
		{ "Category", "Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandType = { "CommandType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCopilotCommand, CommandType), Z_Construct_UEnum_AIBlueCopilot_ECopilotCommandType, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandType_MetaData), Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandType_MetaData) }; // 519678723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandText_MetaData[] = {
		{ "Category", "Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandText = { "CommandText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCopilotCommand, CommandText), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandText_MetaData), Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandText_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_TargetAsset_MetaData[] = {
		{ "Category", "Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCopilotCommand, TargetAsset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_TargetAsset_MetaData), Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_TargetAsset_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters_ValueProp = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters_Key_KeyProp = { "Parameters_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCopilotCommand, Parameters), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters_MetaData), Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCopilotCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_CommandText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_TargetAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewProp_Parameters,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCopilotCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
		nullptr,
		&NewStructOps,
		"CopilotCommand",
		Z_Construct_UScriptStruct_FCopilotCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopilotCommand_Statics::PropPointers),
		sizeof(FCopilotCommand),
		alignof(FCopilotCommand),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopilotCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCopilotCommand_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCopilotCommand_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCopilotCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_CopilotCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CopilotCommand.InnerSingleton, Z_Construct_UScriptStruct_FCopilotCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CopilotCommand.InnerSingleton;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execIsAssetModificationAllowed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAssetModificationAllowed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execSetAllowAssetChanges)
	{
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllowAssetChanges(Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execGetLastError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execGetUseStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseStreaming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execSetUseStreaming)
	{
		P_GET_UBOOL(Z_Param_bUse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseStreaming(Z_Param_bUse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execApplyPlan)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PlanJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyPlan(Z_Param_PlanJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execIsCopilotReady)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCopilotReady();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execGetCopilotResponse)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCopilotResponse();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execSendPrompt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Prompt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendPrompt(Z_Param_Prompt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execExecuteCommand)
	{
		P_GET_STRUCT_REF(FCopilotCommand,Z_Param_Out_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecuteCommand(Z_Param_Out_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAIBlueCopilot::execInitializeCopilot)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LMStudioURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCopilot(Z_Param_LMStudioURL);
		P_NATIVE_END;
	}
	void AAIBlueCopilot::StaticRegisterNativesAAIBlueCopilot()
	{
		UClass* Class = AAIBlueCopilot::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyPlan", &AAIBlueCopilot::execApplyPlan },
			{ "ExecuteCommand", &AAIBlueCopilot::execExecuteCommand },
			{ "GetCopilotResponse", &AAIBlueCopilot::execGetCopilotResponse },
			{ "GetLastError", &AAIBlueCopilot::execGetLastError },
			{ "GetUseStreaming", &AAIBlueCopilot::execGetUseStreaming },
			{ "InitializeCopilot", &AAIBlueCopilot::execInitializeCopilot },
			{ "IsAssetModificationAllowed", &AAIBlueCopilot::execIsAssetModificationAllowed },
			{ "IsCopilotReady", &AAIBlueCopilot::execIsCopilotReady },
			{ "SendPrompt", &AAIBlueCopilot::execSendPrompt },
			{ "SetAllowAssetChanges", &AAIBlueCopilot::execSetAllowAssetChanges },
			{ "SetUseStreaming", &AAIBlueCopilot::execSetUseStreaming },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics
	{
		struct AIBlueCopilot_eventApplyPlan_Parms
		{
			FString PlanJson;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::NewProp_PlanJson_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::NewProp_PlanJson = { "PlanJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilot_eventApplyPlan_Parms, PlanJson), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::NewProp_PlanJson_MetaData), Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::NewProp_PlanJson_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::NewProp_PlanJson,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Apply a JSON plan produced by the LLM (dry-run -> apply) */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Apply a JSON plan produced by the LLM (dry-run -> apply)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "ApplyPlan", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::AIBlueCopilot_eventApplyPlan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::AIBlueCopilot_eventApplyPlan_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics
	{
		struct AIBlueCopilot_eventExecuteCommand_Parms
		{
			FCopilotCommand Command;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilot_eventExecuteCommand_Parms, Command), Z_Construct_UScriptStruct_FCopilotCommand, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::NewProp_Command_MetaData), Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::NewProp_Command_MetaData) }; // 2057021856
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Execute a copilot command */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execute a copilot command" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "ExecuteCommand", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::AIBlueCopilot_eventExecuteCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::AIBlueCopilot_eventExecuteCommand_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics
	{
		struct AIBlueCopilot_eventGetCopilotResponse_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilot_eventGetCopilotResponse_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Get the current response from the copilot */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the current response from the copilot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "GetCopilotResponse", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::AIBlueCopilot_eventGetCopilotResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::AIBlueCopilot_eventGetCopilotResponse_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics
	{
		struct AIBlueCopilot_eventGetLastError_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilot_eventGetLastError_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Expose error/permissions\n" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Expose error/permissions" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "GetLastError", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::AIBlueCopilot_eventGetLastError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::AIBlueCopilot_eventGetLastError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_GetLastError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_GetLastError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics
	{
		struct AIBlueCopilot_eventGetUseStreaming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueCopilot_eventGetUseStreaming_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilot_eventGetUseStreaming_Parms), &Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "GetUseStreaming", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::AIBlueCopilot_eventGetUseStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::AIBlueCopilot_eventGetUseStreaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics
	{
		struct AIBlueCopilot_eventInitializeCopilot_Parms
		{
			FString LMStudioURL;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::NewProp_LMStudioURL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::NewProp_LMStudioURL = { "LMStudioURL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilot_eventInitializeCopilot_Parms, LMStudioURL), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::NewProp_LMStudioURL_MetaData), Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::NewProp_LMStudioURL_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::NewProp_LMStudioURL,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Initialize the copilot with LM Studio connection */" },
#endif
		{ "CPP_Default_LMStudioURL", "http://localhost:1234" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the copilot with LM Studio connection" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "InitializeCopilot", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::AIBlueCopilot_eventInitializeCopilot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::AIBlueCopilot_eventInitializeCopilot_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics
	{
		struct AIBlueCopilot_eventIsAssetModificationAllowed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueCopilot_eventIsAssetModificationAllowed_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilot_eventIsAssetModificationAllowed_Parms), &Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "IsAssetModificationAllowed", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::AIBlueCopilot_eventIsAssetModificationAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::AIBlueCopilot_eventIsAssetModificationAllowed_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics
	{
		struct AIBlueCopilot_eventIsCopilotReady_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AIBlueCopilot_eventIsCopilotReady_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilot_eventIsCopilotReady_Parms), &Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Check if copilot is ready */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Check if copilot is ready" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "IsCopilotReady", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::AIBlueCopilot_eventIsCopilotReady_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::AIBlueCopilot_eventIsCopilotReady_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics
	{
		struct AIBlueCopilot_eventSendPrompt_Parms
		{
			FString Prompt;
		};
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::NewProp_Prompt_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::NewProp_Prompt = { "Prompt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIBlueCopilot_eventSendPrompt_Parms, Prompt), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::NewProp_Prompt_MetaData), Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::NewProp_Prompt_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::NewProp_Prompt,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Send a conversational prompt to the copilot */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Send a conversational prompt to the copilot" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "SendPrompt", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::AIBlueCopilot_eventSendPrompt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::AIBlueCopilot_eventSendPrompt_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_SendPrompt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_SendPrompt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics
	{
		struct AIBlueCopilot_eventSetAllowAssetChanges_Parms
		{
			bool bAllow;
		};
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((AIBlueCopilot_eventSetAllowAssetChanges_Parms*)Obj)->bAllow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilot_eventSetAllowAssetChanges_Parms), &Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "SetAllowAssetChanges", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::AIBlueCopilot_eventSetAllowAssetChanges_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::AIBlueCopilot_eventSetAllowAssetChanges_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics
	{
		struct AIBlueCopilot_eventSetUseStreaming_Parms
		{
			bool bUse;
		};
		static void NewProp_bUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUse;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::NewProp_bUse_SetBit(void* Obj)
	{
		((AIBlueCopilot_eventSetUseStreaming_Parms*)Obj)->bUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::NewProp_bUse = { "bUse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIBlueCopilot_eventSetUseStreaming_Parms), &Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::NewProp_bUse_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::NewProp_bUse,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle streaming usage in the LLM client */" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle streaming usage in the LLM client" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIBlueCopilot, nullptr, "SetUseStreaming", nullptr, nullptr, Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::AIBlueCopilot_eventSetUseStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::AIBlueCopilot_eventSetUseStreaming_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIBlueCopilot);
	UClass* Z_Construct_UClass_AAIBlueCopilot_NoRegister()
	{
		return AAIBlueCopilot::StaticClass();
	}
	struct Z_Construct_UClass_AAIBlueCopilot_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCopilotResponse_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCopilotResponse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCopilotProgress_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCopilotProgress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectAnalyzer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectAnalyzer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIBlueCopilot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AAIBlueCopilot_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIBlueCopilot_ApplyPlan, "ApplyPlan" }, // 823134143
		{ &Z_Construct_UFunction_AAIBlueCopilot_ExecuteCommand, "ExecuteCommand" }, // 4265728966
		{ &Z_Construct_UFunction_AAIBlueCopilot_GetCopilotResponse, "GetCopilotResponse" }, // 4237371169
		{ &Z_Construct_UFunction_AAIBlueCopilot_GetLastError, "GetLastError" }, // 511310994
		{ &Z_Construct_UFunction_AAIBlueCopilot_GetUseStreaming, "GetUseStreaming" }, // 2372808392
		{ &Z_Construct_UFunction_AAIBlueCopilot_InitializeCopilot, "InitializeCopilot" }, // 165524679
		{ &Z_Construct_UFunction_AAIBlueCopilot_IsAssetModificationAllowed, "IsAssetModificationAllowed" }, // 2511757505
		{ &Z_Construct_UFunction_AAIBlueCopilot_IsCopilotReady, "IsCopilotReady" }, // 872890933
		{ &Z_Construct_UFunction_AAIBlueCopilot_SendPrompt, "SendPrompt" }, // 3299768606
		{ &Z_Construct_UFunction_AAIBlueCopilot_SetAllowAssetChanges, "SetAllowAssetChanges" }, // 2246871906
		{ &Z_Construct_UFunction_AAIBlueCopilot_SetUseStreaming, "SetUseStreaming" }, // 2838637376
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBlueCopilot_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AI Copilot Manager - Main interface for AI-powered UE5 development\n * Integrates with LM Studio and Qwen2.5 Coder model\n */" },
#endif
		{ "IncludePath", "Copilot/AIBlueCopilot.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI Copilot Manager - Main interface for AI-powered UE5 development\nIntegrates with LM Studio and Qwen2.5 Coder model" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotResponse_MetaData[] = {
		{ "Category", "AIBLUE|Copilot" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegates\n" },
#endif
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegates" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotResponse = { "OnCopilotResponse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIBlueCopilot, OnCopilotResponse), Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotResponse_MetaData), Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotResponse_MetaData) }; // 1766626530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotProgress_MetaData[] = {
		{ "Category", "AIBLUE|Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotProgress = { "OnCopilotProgress", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIBlueCopilot, OnCopilotProgress), Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotProgress_MetaData), Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotProgress_MetaData) }; // 485474869
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_ProjectAnalyzer_MetaData[] = {
		{ "Category", "AIBLUE|Copilot" },
		{ "ModuleRelativePath", "Public/Copilot/AIBlueCopilot.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_ProjectAnalyzer = { "ProjectAnalyzer", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIBlueCopilot, ProjectAnalyzer), Z_Construct_UClass_UProjectAnalyzer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_ProjectAnalyzer_MetaData), Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_ProjectAnalyzer_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIBlueCopilot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotResponse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_OnCopilotProgress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIBlueCopilot_Statics::NewProp_ProjectAnalyzer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIBlueCopilot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIBlueCopilot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIBlueCopilot_Statics::ClassParams = {
		&AAIBlueCopilot::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAIBlueCopilot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIBlueCopilot_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIBlueCopilot_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAIBlueCopilot()
	{
		if (!Z_Registration_Info_UClass_AAIBlueCopilot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIBlueCopilot.OuterSingleton, Z_Construct_UClass_AAIBlueCopilot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAIBlueCopilot.OuterSingleton;
	}
	template<> AIBLUECOPILOT_API UClass* StaticClass<AAIBlueCopilot>()
	{
		return AAIBlueCopilot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIBlueCopilot);
	AAIBlueCopilot::~AAIBlueCopilot() {}
	struct Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::EnumInfo[] = {
		{ ECopilotCommandType_StaticEnum, TEXT("ECopilotCommandType"), &Z_Registration_Info_UEnum_ECopilotCommandType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 519678723U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::ScriptStructInfo[] = {
		{ FCopilotCommand::StaticStruct, Z_Construct_UScriptStruct_FCopilotCommand_Statics::NewStructOps, TEXT("CopilotCommand"), &Z_Registration_Info_UScriptStruct_CopilotCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCopilotCommand), 2057021856U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAIBlueCopilot, AAIBlueCopilot::StaticClass, TEXT("AAIBlueCopilot"), &Z_Registration_Info_UClass_AAIBlueCopilot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIBlueCopilot), 2653835780U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_2395299883(TEXT("/Script/AIBlueCopilot"),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
