// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIBlueCopilot_init() {}
	AIBLUECOPILOT_API UFunction* Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature();
	AIBLUECOPILOT_API UFunction* Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_AIBlueCopilot;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_AIBlueCopilot()
	{
		if (!Z_Registration_Info_UPackage__Script_AIBlueCopilot.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotProgress__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AIBlueCopilot_OnCopilotResponse__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/AIBlueCopilot",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD270486A,
				0xCCFD9067,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_AIBlueCopilot.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_AIBlueCopilot.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_AIBlueCopilot(Z_Construct_UPackage__Script_AIBlueCopilot, TEXT("/Script/AIBlueCopilot"), Z_Registration_Info_UPackage__Script_AIBlueCopilot, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD270486A, 0xCCFD9067));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
