// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Analyzer/ProjectAnalyzer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FProjectArchitecture;
struct FProjectModule;
#ifdef AIBLUECOPILOT_ProjectAnalyzer_generated_h
#error "ProjectAnalyzer.generated.h already included, missing '#pragma once' in ProjectAnalyzer.h"
#endif
#define AIBLUECOPILOT_ProjectAnalyzer_generated_h

#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectModule_Statics; \
	AIBLUECOPILOT_API static class UScriptStruct* StaticStruct();


template<> AIBLUECOPILOT_API UScriptStruct* StaticStruct<struct FProjectModule>();

#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_29_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProjectArchitecture_Statics; \
	AIBLUECOPILOT_API static class UScriptStruct* StaticStruct();


template<> AIBLUECOPILOT_API UScriptStruct* StaticStruct<struct FProjectArchitecture>();

#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_SPARSE_DATA
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBlueprintClasses); \
	DECLARE_FUNCTION(execScanContentDirectory); \
	DECLARE_FUNCTION(execGetArchitectureSummary); \
	DECLARE_FUNCTION(execGetProjectPlugins); \
	DECLARE_FUNCTION(execGetProjectModules); \
	DECLARE_FUNCTION(execAnalyzeProjectArchitecture);


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_ACCESSORS
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProjectAnalyzer(); \
	friend struct Z_Construct_UClass_UProjectAnalyzer_Statics; \
public: \
	DECLARE_CLASS(UProjectAnalyzer, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AIBlueCopilot"), NO_API) \
	DECLARE_SERIALIZER(UProjectAnalyzer)


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProjectAnalyzer(UProjectAnalyzer&&); \
	NO_API UProjectAnalyzer(const UProjectAnalyzer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProjectAnalyzer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProjectAnalyzer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UProjectAnalyzer) \
	NO_API virtual ~UProjectAnalyzer();


#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_48_PROLOG
#define FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_SPARSE_DATA \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_ACCESSORS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_INCLASS_NO_PURE_DECLS \
	FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AIBLUECOPILOT_API UClass* StaticClass<class UProjectAnalyzer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Ty_Documents_Unreal_Projects_AIBLUE_Plugins_AIBlueCopilot_Source_AIBlueCopilot_Public_Analyzer_ProjectAnalyzer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
