// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Copilot/AIBlueCopilotLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIBlueCopilot;
class UObject;
#ifdef AIBLUECOPILOT_AIBlueCopilotLibrary_generated_h
#error "AIBlueCopilotLibrary.generated.h already included, missing '#pragma once' in AIBlueCopilotLibrary.h"
#endif
#define AIBLUECOPILOT_AIBlueCopilotLibrary_generated_h

#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_SPARSE_DATA
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartCodeAssistant); \
	DECLARE_FUNCTION(execGenerateAudio); \
	DECLARE_FUNCTION(execGenerateImage); \
	DECLARE_FUNCTION(execGenerate3DModel); \
	DECLARE_FUNCTION(execIndexProject); \
	DECLARE_FUNCTION(execGenerateBehaviorTree); \
	DECLARE_FUNCTION(execGenerateMaterial); \
	DECLARE_FUNCTION(execGenerateBlueprint); \
	DECLARE_FUNCTION(execApplyPlan); \
	DECLARE_FUNCTION(execGetPollIntervalSeconds); \
	DECLARE_FUNCTION(execSetPollIntervalSeconds); \
	DECLARE_FUNCTION(execGetPollTimeoutSeconds); \
	DECLARE_FUNCTION(execSetPollTimeoutSeconds); \
	DECLARE_FUNCTION(execGetUseStreaming); \
	DECLARE_FUNCTION(execSetUseStreaming); \
	DECLARE_FUNCTION(execRunHealthCheck); \
	DECLARE_FUNCTION(execGetAllowAssetChanges); \
	DECLARE_FUNCTION(execSetAllowAssetChanges); \
	DECLARE_FUNCTION(execGetUseLocalhost); \
	DECLARE_FUNCTION(execSetUseLocalhost); \
	DECLARE_FUNCTION(execGetLMStudioURL); \
	DECLARE_FUNCTION(execSetLMStudioURL); \
	DECLARE_FUNCTION(execInitializeCopilot); \
	DECLARE_FUNCTION(execGetLastError); \
	DECLARE_FUNCTION(execGetLastResponse); \
	DECLARE_FUNCTION(execIsCopilotReady); \
	DECLARE_FUNCTION(execSendCustomPrompt); \
	DECLARE_FUNCTION(execRefactorBlueprint); \
	DECLARE_FUNCTION(execAnalyzeArchitecture); \
	DECLARE_FUNCTION(execBuildUI); \
	DECLARE_FUNCTION(execBuildScene); \
	DECLARE_FUNCTION(execGetCopilotInstance);


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAIBlueCopilotLibrary(); \
	friend struct Z_Construct_UClass_UAIBlueCopilotLibrary_Statics; \
public: \
	DECLARE_CLASS(UAIBlueCopilotLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIBlueCopilot"), NO_API) \
	DECLARE_SERIALIZER(UAIBlueCopilotLibrary)


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAIBlueCopilotLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAIBlueCopilotLibrary(UAIBlueCopilotLibrary&&); \
	NO_API UAIBlueCopilotLibrary(const UAIBlueCopilotLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAIBlueCopilotLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAIBlueCopilotLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAIBlueCopilotLibrary) \
	NO_API virtual ~UAIBlueCopilotLibrary();


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_16_PROLOG
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_SPARSE_DATA \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIBLUECOPILOT_API UClass* StaticClass<class UAIBlueCopilotLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Copilot_AIBlueCopilotLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
