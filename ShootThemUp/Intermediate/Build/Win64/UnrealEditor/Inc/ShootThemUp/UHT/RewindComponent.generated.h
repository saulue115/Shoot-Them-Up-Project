// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "RewindTime/Components/RewindComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTTHEMUP_RewindComponent_generated_h
#error "RewindComponent.generated.h already included, missing '#pragma once' in RewindComponent.h"
#endif
#define SHOOTTHEMUP_RewindComponent_generated_h

#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_16_DELEGATE \
SHOOTTHEMUP_API void FOnTimeManipulationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeManipulationStarted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_17_DELEGATE \
SHOOTTHEMUP_API void FOnTimeManipulationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeManipulationCompleted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_19_DELEGATE \
SHOOTTHEMUP_API void FOnRewindStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRewindStarted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_20_DELEGATE \
SHOOTTHEMUP_API void FOnRewindCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnRewindCompleted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_22_DELEGATE \
SHOOTTHEMUP_API void FOnFastForwardStarted_DelegateWrapper(const FMulticastScriptDelegate& OnFastForwardStarted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_23_DELEGATE \
SHOOTTHEMUP_API void FOnFastForwardCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnFastForwardCompleted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_25_DELEGATE \
SHOOTTHEMUP_API void FOnTimeScrubStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeScrubStarted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_26_DELEGATE \
SHOOTTHEMUP_API void FOnTimeScrubCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeScrubCompleted);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_32_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics; \
	SHOOTTHEMUP_API static class UScriptStruct* StaticStruct();


template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<struct FTransformAndVelocitySnapshot>();

#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics; \
	SHOOTTHEMUP_API static class UScriptStruct* StaticStruct();


template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<struct FMovementVelocityAndModeSnapshot>();

#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnGlobalTimelineVisualizationDisabled); \
	DECLARE_FUNCTION(execOnGlobalTimelineVisualizationEnabled); \
	DECLARE_FUNCTION(execOnGlobalTimeScrubCompleted); \
	DECLARE_FUNCTION(execOnGlobalFastForwardCompleted); \
	DECLARE_FUNCTION(execOnGlobalRewindCompleted); \
	DECLARE_FUNCTION(execOnGlobalTimeScrubStarted); \
	DECLARE_FUNCTION(execOnGlobalFastForwardStarted); \
	DECLARE_FUNCTION(execOnGlobalRewindStarted); \
	DECLARE_FUNCTION(execSetIsRewindingEnabled); \
	DECLARE_FUNCTION(execIsRewindingEnabled); \
	DECLARE_FUNCTION(execIsVisualizingTimeline); \
	DECLARE_FUNCTION(execIsTimeBeingManipulated); \
	DECLARE_FUNCTION(execIsTimeScrubbing); \
	DECLARE_FUNCTION(execIsFastForwarding); \
	DECLARE_FUNCTION(execIsRewinding);


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURewindComponent(); \
	friend struct Z_Construct_UClass_URewindComponent_Statics; \
public: \
	DECLARE_CLASS(URewindComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(URewindComponent)


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_73_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URewindComponent(URewindComponent&&); \
	URewindComponent(const URewindComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URewindComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URewindComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URewindComponent) \
	NO_API virtual ~URewindComponent();


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_70_PROLOG
#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_73_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class URewindComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
