// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/Components/BaseCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTTHEMUP_BaseCharacterMovementComponent_generated_h
#error "BaseCharacterMovementComponent.generated.h already included, missing '#pragma once' in BaseCharacterMovementComponent.h"
#endif
#define SHOOTTHEMUP_BaseCharacterMovementComponent_generated_h

#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Components_BaseCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UBaseCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(UBaseCharacterMovementComponent)


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Components_BaseCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBaseCharacterMovementComponent(UBaseCharacterMovementComponent&&); \
	UBaseCharacterMovementComponent(const UBaseCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseCharacterMovementComponent) \
	NO_API virtual ~UBaseCharacterMovementComponent();


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Components_BaseCharacterMovementComponent_h_12_PROLOG
#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Components_BaseCharacterMovementComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Components_BaseCharacterMovementComponent_h_15_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Components_BaseCharacterMovementComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class UBaseCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Components_BaseCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
