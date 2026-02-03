// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/Base/Actors/BaseWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_ABaseWeapon();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References

// Begin Class ABaseWeapon
void ABaseWeapon::StaticRegisterNativesABaseWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseWeapon);
UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
{
	return ABaseWeapon::StaticClass();
}
struct Z_Construct_UClass_ABaseWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Base/Actors/BaseWeapon.h" },
		{ "ModuleRelativePath", "Base/Actors/BaseWeapon.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
	&ABaseWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABaseWeapon()
{
	if (!Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABaseWeapon.OuterSingleton;
}
template<> SHOOTTHEMUP_API UClass* StaticClass<ABaseWeapon>()
{
	return ABaseWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
ABaseWeapon::~ABaseWeapon() {}
// End Class ABaseWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABaseWeapon, ABaseWeapon::StaticClass, TEXT("ABaseWeapon"), &Z_Registration_Info_UClass_ABaseWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseWeapon), 700815420U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_4193038459(TEXT("/Script/ShootThemUp"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_Base_Actors_BaseWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
