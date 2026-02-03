// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Base/Actors/BaseWeapon.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTTHEMUP_BaseWeapon_generated_h
#error "BaseWeapon.generated.h already included, missing '#pragma once' in BaseWeapon.h"
#endif
#define SHOOTTHEMUP_BaseWeapon_generated_h

#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseWeapon(); \
	friend struct Z_Construct_UClass_ABaseWeapon_Statics; \
public: \
	DECLARE_CLASS(ABaseWeapon, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootThemUp"), NO_API) \
	DECLARE_SERIALIZER(ABaseWeapon)


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseWeapon(ABaseWeapon&&); \
	ABaseWeapon(const ABaseWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseWeapon); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseWeapon); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ABaseWeapon) \
	NO_API virtual ~ABaseWeapon();


#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_9_PROLOG
#define FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_12_INCLASS_NO_PURE_DECLS \
	FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTTHEMUP_API UClass* StaticClass<class ABaseWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
