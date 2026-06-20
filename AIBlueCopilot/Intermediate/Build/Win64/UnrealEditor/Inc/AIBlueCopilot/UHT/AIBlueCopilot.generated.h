// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Copilot/AIBlueCopilot.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCopilotCommand;
#ifdef AIBLUECOPILOT_AIBlueCopilot_generated_h
#error "AIBlueCopilot.generated.h already included, missing '#pragma once' in AIBlueCopilot.h"
#endif
#define AIBLUECOPILOT_AIBlueCopilot_generated_h

#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_13_DELEGATE \
AIBLUECOPILOT_API void FOnCopilotResponse_DelegateWrapper(const FMulticastScriptDelegate& OnCopilotResponse, const FString& Response, bool bSuccess);


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_14_DELEGATE \
AIBLUECOPILOT_API void FOnCopilotProgress_DelegateWrapper(const FMulticastScriptDelegate& OnCopilotProgress, const FString& Message);


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCopilotCommand_Statics; \
	AIBLUECOPILOT_API static class UScriptStruct* StaticStruct();


template<> AIBLUECOPILOT_API UScriptStruct* StaticStruct<struct FCopilotCommand>();

#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_SPARSE_DATA
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsAssetModificationAllowed); \
	DECLARE_FUNCTION(execSetAllowAssetChanges); \
	DECLARE_FUNCTION(execGetLastError); \
	DECLARE_FUNCTION(execGetUseStreaming); \
	DECLARE_FUNCTION(execSetUseStreaming); \
	DECLARE_FUNCTION(execApplyPlan); \
	DECLARE_FUNCTION(execIsCopilotReady); \
	DECLARE_FUNCTION(execGetCopilotResponse); \
	DECLARE_FUNCTION(execSendPrompt); \
	DECLARE_FUNCTION(execExecuteCommand); \
	DECLARE_FUNCTION(execInitializeCopilot);


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAIBlueCopilot(); \
	friend struct Z_Construct_UClass_AAIBlueCopilot_Statics; \
public: \
	DECLARE_CLASS(AAIBlueCopilot, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AIBlueCopilot"), NO_API) \
	DECLARE_SERIALIZER(AAIBlueCopilot)


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAIBlueCopilot(AAIBlueCopilot&&); \
	NO_API AAIBlueCopilot(const AAIBlueCopilot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAIBlueCopilot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAIBlueCopilot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAIBlueCopilot) \
	NO_API virtual ~AAIBlueCopilot();


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_50_PROLOG
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_SPARSE_DATA \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIBLUECOPILOT_API UClass* StaticClass<class AAIBlueCopilot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilot_h


#define FOREACH_ENUM_ECOPILOTCOMMANDTYPE(op) \
	op(ECopilotCommandType::BuildScene) \
	op(ECopilotCommandType::BuildUI) \
	op(ECopilotCommandType::ConvertJSON) \
	op(ECopilotCommandType::EditBlueprint) \
	op(ECopilotCommandType::AnalyzeArchitecture) \
	op(ECopilotCommandType::GenerateCode) \
	op(ECopilotCommandType::RefactorBlueprint) 

enum class ECopilotCommandType : uint8;
template<> struct TIsUEnumClass<ECopilotCommandType> { enum { Value = true }; };
template<> AIBLUECOPILOT_API UEnum* StaticEnum<ECopilotCommandType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
