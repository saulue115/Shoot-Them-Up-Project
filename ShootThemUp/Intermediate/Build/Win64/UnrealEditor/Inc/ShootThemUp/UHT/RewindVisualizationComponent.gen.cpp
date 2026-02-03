// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/RewindTime/Components/RewindVisualizationComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewindVisualizationComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_URewindVisualizationComponent();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_URewindVisualizationComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References

// Begin Class URewindVisualizationComponent
void URewindVisualizationComponent::StaticRegisterNativesURewindVisualizationComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URewindVisualizationComponent);
UClass* Z_Construct_UClass_URewindVisualizationComponent_NoRegister()
{
	return URewindVisualizationComponent::StaticClass();
}
struct Z_Construct_UClass_URewindVisualizationComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Trigger" },
		{ "IncludePath", "RewindTime/Components/RewindVisualizationComponent.h" },
		{ "ModuleRelativePath", "RewindTime/Components/RewindVisualizationComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URewindVisualizationComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URewindVisualizationComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInstancedStaticMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URewindVisualizationComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URewindVisualizationComponent_Statics::ClassParams = {
	&URewindVisualizationComponent::StaticClass,
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
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URewindVisualizationComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URewindVisualizationComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URewindVisualizationComponent()
{
	if (!Z_Registration_Info_UClass_URewindVisualizationComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URewindVisualizationComponent.OuterSingleton, Z_Construct_UClass_URewindVisualizationComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URewindVisualizationComponent.OuterSingleton;
}
template<> SHOOTTHEMUP_API UClass* StaticClass<URewindVisualizationComponent>()
{
	return URewindVisualizationComponent::StaticClass();
}
URewindVisualizationComponent::URewindVisualizationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URewindVisualizationComponent);
URewindVisualizationComponent::~URewindVisualizationComponent() {}
// End Class URewindVisualizationComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindVisualizationComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URewindVisualizationComponent, URewindVisualizationComponent::StaticClass, TEXT("URewindVisualizationComponent"), &Z_Registration_Info_UClass_URewindVisualizationComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URewindVisualizationComponent), 1443407529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindVisualizationComponent_h_2227267325(TEXT("/Script/ShootThemUp"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindVisualizationComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindVisualizationComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
