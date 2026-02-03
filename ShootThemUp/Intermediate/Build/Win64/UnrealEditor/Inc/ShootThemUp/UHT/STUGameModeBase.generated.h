// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Framework/GameModes/STUGameModeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTTHEMUP_STUGameModeBase_generated_h
#error "STUGameModeBase.generated.h already included, missing '#pragma once' in STUGameModeBase.h"
#endif
#define SHOOTTHEMUP_STUGameModeBase_generated_h

#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_10_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalRewindStarted_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalRewindStarted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_11_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalRewindCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalRewindCompleted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_13_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalFastForwardStarted_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalFastForwardStarted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_14_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalFastForwardCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalFastForwardCompleted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_16_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalTimeScrubStarted_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalTimeScrubStarted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_17_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalTimeScrubCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalTimeScrubCompleted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_19_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalTimelineVisualizationEnabled_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalTimelineVisualizationEnabled);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_20_DELEGATE \
SHOOTTHEMUP_API void FOnGlobalTimelineVisualizationDisabled_DelegateWrapper(const FMulticastScriptDelegate& OnGlobalTimelineVisualizationDisabled);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGlobalRewindSpeed); \
	DECLARE_FUNCTION(execIsGlobalFastForwarding); \
	DECLARE_FUNCTION(execIsGlobalRewinding); \
	DECLARE_FUNCTION(execIsGlobalTimelineVisualizationEnabled); \
	DECLARE_FUNCTION(execIsGlobalTimeScrubbing); \
	DECLARE_FUNCTION(execToggleGlobalTimelineVisualization); \
	DECLARE_FUNCTION(execToggleTimeScrub); \
	DECLARE_FUNCTION(execStopGlobalFastForward); \
	DECLARE_FUNCTION(execStartGlobalFastForward); \
	DECLARE_FUNCTION(execStopGlobalRewind); \
	DECLARE_FUNCTION(execStartGlobalRewind);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTUGameModeBase(); \
	friend struct Z_Construct_UClass_ASTUGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ASTUGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(ASTUGameModeBase)


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASTUGameModeBase(ASTUGameModeBase&&); \
	ASTUGameModeBase(const ASTUGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTUGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTUGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTUGameModeBase) \
	NO_API virtual ~ASTUGameModeBase();


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_23_PROLOG
#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_26_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class ASTUGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Framework_GameModes_STUGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
