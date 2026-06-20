// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIBlueCopilot/Public/Converter/JSONToBlueprintConverter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJSONToBlueprintConverter() {}
// Cross Module References
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UJSONToBlueprintConverter();
	AIBLUECOPILOT_API UClass* Z_Construct_UClass_UJSONToBlueprintConverter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AIBlueCopilot();
// End Cross Module References
	DEFINE_FUNCTION(UJSONToBlueprintConverter::execParseJSONSpec)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONSpec);
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_OutProperties);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ParseJSONSpec(Z_Param_JSONSpec,Z_Param_Out_OutProperties);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONToBlueprintConverter::execValidateJSONSpec)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONSpec);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ValidateJSONSpec(Z_Param_JSONSpec);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJSONToBlueprintConverter::execConvertJSONToBlueprint)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONSpec);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutBlueprintPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ConvertJSONToBlueprint(Z_Param_JSONSpec,Z_Param_Out_OutBlueprintPath);
		P_NATIVE_END;
	}
	void UJSONToBlueprintConverter::StaticRegisterNativesUJSONToBlueprintConverter()
	{
		UClass* Class = UJSONToBlueprintConverter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertJSONToBlueprint", &UJSONToBlueprintConverter::execConvertJSONToBlueprint },
			{ "ParseJSONSpec", &UJSONToBlueprintConverter::execParseJSONSpec },
			{ "ValidateJSONSpec", &UJSONToBlueprintConverter::execValidateJSONSpec },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics
	{
		struct JSONToBlueprintConverter_eventConvertJSONToBlueprint_Parms
		{
			FString JSONSpec;
			FString OutBlueprintPath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONSpec;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutBlueprintPath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_JSONSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_JSONSpec = { "JSONSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSONToBlueprintConverter_eventConvertJSONToBlueprint_Parms, JSONSpec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_JSONSpec_MetaData), Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_JSONSpec_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_OutBlueprintPath = { "OutBlueprintPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSONToBlueprintConverter_eventConvertJSONToBlueprint_Parms, OutBlueprintPath), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONToBlueprintConverter_eventConvertJSONToBlueprint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JSONToBlueprintConverter_eventConvertJSONToBlueprint_Parms), &Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_JSONSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_OutBlueprintPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Convert JSON spec to blueprint commands */" },
#endif
		{ "ModuleRelativePath", "Public/Converter/JSONToBlueprintConverter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Convert JSON spec to blueprint commands" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONToBlueprintConverter, nullptr, "ConvertJSONToBlueprint", nullptr, nullptr, Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::JSONToBlueprintConverter_eventConvertJSONToBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::JSONToBlueprintConverter_eventConvertJSONToBlueprint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics
	{
		struct JSONToBlueprintConverter_eventParseJSONSpec_Parms
		{
			FString JSONSpec;
			TMap<FString,FString> OutProperties;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONSpec;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutProperties_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutProperties_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutProperties;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_JSONSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_JSONSpec = { "JSONSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSONToBlueprintConverter_eventParseJSONSpec_Parms, JSONSpec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_JSONSpec_MetaData), Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_JSONSpec_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_OutProperties_ValueProp = { "OutProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_OutProperties_Key_KeyProp = { "OutProperties_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_OutProperties = { "OutProperties", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSONToBlueprintConverter_eventParseJSONSpec_Parms, OutProperties), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONToBlueprintConverter_eventParseJSONSpec_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JSONToBlueprintConverter_eventParseJSONSpec_Parms), &Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_JSONSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_OutProperties_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_OutProperties_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_OutProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Parse JSON to structured data */" },
#endif
		{ "ModuleRelativePath", "Public/Converter/JSONToBlueprintConverter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Parse JSON to structured data" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONToBlueprintConverter, nullptr, "ParseJSONSpec", nullptr, nullptr, Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::JSONToBlueprintConverter_eventParseJSONSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::JSONToBlueprintConverter_eventParseJSONSpec_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics
	{
		struct JSONToBlueprintConverter_eventValidateJSONSpec_Parms
		{
			FString JSONSpec;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JSONSpec_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JSONSpec;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_JSONSpec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_JSONSpec = { "JSONSpec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(JSONToBlueprintConverter_eventValidateJSONSpec_Parms, JSONSpec), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_JSONSpec_MetaData), Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_JSONSpec_MetaData) };
	void Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((JSONToBlueprintConverter_eventValidateJSONSpec_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(JSONToBlueprintConverter_eventValidateJSONSpec_Parms), &Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_JSONSpec,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIBLUE|Conversion" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Validate JSON structure */" },
#endif
		{ "ModuleRelativePath", "Public/Converter/JSONToBlueprintConverter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validate JSON structure" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJSONToBlueprintConverter, nullptr, "ValidateJSONSpec", nullptr, nullptr, Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::PropPointers), sizeof(Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::JSONToBlueprintConverter_eventValidateJSONSpec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::Function_MetaDataParams), Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::JSONToBlueprintConverter_eventValidateJSONSpec_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJSONToBlueprintConverter);
	UClass* Z_Construct_UClass_UJSONToBlueprintConverter_NoRegister()
	{
		return UJSONToBlueprintConverter::StaticClass();
	}
	struct Z_Construct_UClass_UJSONToBlueprintConverter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJSONToBlueprintConverter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AIBlueCopilot,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSONToBlueprintConverter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UJSONToBlueprintConverter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJSONToBlueprintConverter_ConvertJSONToBlueprint, "ConvertJSONToBlueprint" }, // 1417796361
		{ &Z_Construct_UFunction_UJSONToBlueprintConverter_ParseJSONSpec, "ParseJSONSpec" }, // 1122678911
		{ &Z_Construct_UFunction_UJSONToBlueprintConverter_ValidateJSONSpec, "ValidateJSONSpec" }, // 1043324793
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UJSONToBlueprintConverter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJSONToBlueprintConverter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * JSON to Blueprint Converter\n * Converts JSON specifications to blueprint instructions\n */" },
#endif
		{ "IncludePath", "Converter/JSONToBlueprintConverter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Converter/JSONToBlueprintConverter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "JSON to Blueprint Converter\nConverts JSON specifications to blueprint instructions" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJSONToBlueprintConverter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJSONToBlueprintConverter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJSONToBlueprintConverter_Statics::ClassParams = {
		&UJSONToBlueprintConverter::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UJSONToBlueprintConverter_Statics::Class_MetaDataParams), Z_Construct_UClass_UJSONToBlueprintConverter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UJSONToBlueprintConverter()
	{
		if (!Z_Registration_Info_UClass_UJSONToBlueprintConverter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJSONToBlueprintConverter.OuterSingleton, Z_Construct_UClass_UJSONToBlueprintConverter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJSONToBlueprintConverter.OuterSingleton;
	}
	template<> AIBLUECOPILOT_API UClass* StaticClass<UJSONToBlueprintConverter>()
	{
		return UJSONToBlueprintConverter::StaticClass();
	}
	UJSONToBlueprintConverter::UJSONToBlueprintConverter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJSONToBlueprintConverter);
	UJSONToBlueprintConverter::~UJSONToBlueprintConverter() {}
	struct Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Converter_JSONToBlueprintConverter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Converter_JSONToBlueprintConverter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJSONToBlueprintConverter, UJSONToBlueprintConverter::StaticClass, TEXT("UJSONToBlueprintConverter"), &Z_Registration_Info_UClass_UJSONToBlueprintConverter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJSONToBlueprintConverter), 1050869931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Converter_JSONToBlueprintConverter_h_3684945227(TEXT("/Script/AIBlueCopilot"),
		Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Converter_JSONToBlueprintConverter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Converter_JSONToBlueprintConverter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
