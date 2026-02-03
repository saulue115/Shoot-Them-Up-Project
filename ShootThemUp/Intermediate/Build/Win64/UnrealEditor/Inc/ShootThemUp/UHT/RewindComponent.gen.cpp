// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootThemUp/RewindTime/Components/RewindComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRewindComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_ASTUGameModeBase_NoRegister();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_URewindComponent();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_URewindComponent_NoRegister();
SHOOTTHEMUP_API UClass* Z_Construct_UClass_URewindVisualizationComponent_NoRegister();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardCompleted__DelegateSignature();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardStarted__DelegateSignature();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature();
SHOOTTHEMUP_API UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature();
SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot();
SHOOTTHEMUP_API UScriptStruct* Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot();
UPackage* Z_Construct_UPackage__Script_ShootThemUp();
// End Cross Module References

// Begin Delegate FOnTimeManipulationStarted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnTimeManipulationStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimeManipulationStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeManipulationStarted)
{
	OnTimeManipulationStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTimeManipulationStarted

// Begin Delegate FOnTimeManipulationCompleted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnTimeManipulationCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimeManipulationCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeManipulationCompleted)
{
	OnTimeManipulationCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTimeManipulationCompleted

// Begin Delegate FOnRewindStarted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnRewindStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRewindStarted_DelegateWrapper(const FMulticastScriptDelegate& OnRewindStarted)
{
	OnRewindStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRewindStarted

// Begin Delegate FOnRewindCompleted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnRewindCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRewindCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnRewindCompleted)
{
	OnRewindCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnRewindCompleted

// Begin Delegate FOnFastForwardStarted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnFastForwardStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFastForwardStarted_DelegateWrapper(const FMulticastScriptDelegate& OnFastForwardStarted)
{
	OnFastForwardStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFastForwardStarted

// Begin Delegate FOnFastForwardCompleted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnFastForwardCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnFastForwardCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnFastForwardCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnFastForwardCompleted)
{
	OnFastForwardCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnFastForwardCompleted

// Begin Delegate FOnTimeScrubStarted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnTimeScrubStarted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimeScrubStarted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeScrubStarted)
{
	OnTimeScrubStarted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTimeScrubStarted

// Begin Delegate FOnTimeScrubCompleted
struct Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ShootThemUp, nullptr, "OnTimeScrubCompleted__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimeScrubCompleted_DelegateWrapper(const FMulticastScriptDelegate& OnTimeScrubCompleted)
{
	OnTimeScrubCompleted.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnTimeScrubCompleted

// Begin ScriptStruct FTransformAndVelocitySnapshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot;
class UScriptStruct* FTransformAndVelocitySnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot, (UObject*)Z_Construct_UPackage__Script_ShootThemUp(), TEXT("TransformAndVelocitySnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot.OuterSingleton;
}
template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<FTransformAndVelocitySnapshot>()
{
	return FTransformAndVelocitySnapshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State snapshots used when rewinding transforms and velocity\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State snapshots used when rewinding transforms and velocity" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastSnapshot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time since the last snapshot was recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time since the last snapshot was recorded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Transform at time snapshot was recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transform at time snapshot was recorded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearVelocity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Linear velocity from the owner's root primitive component at time snapshot was recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Linear velocity from the owner's root primitive component at time snapshot was recorded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocityInRadians_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Angular velocity from the owner's root primitive component at time snapshot was recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Angular velocity from the owner's root primitive component at time snapshot was recorded" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastSnapshot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LinearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AngularVelocityInRadians;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTransformAndVelocitySnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_TimeSinceLastSnapshot = { "TimeSinceLastSnapshot", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformAndVelocitySnapshot, TimeSinceLastSnapshot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastSnapshot_MetaData), NewProp_TimeSinceLastSnapshot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformAndVelocitySnapshot, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_LinearVelocity = { "LinearVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformAndVelocitySnapshot, LinearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearVelocity_MetaData), NewProp_LinearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_AngularVelocityInRadians = { "AngularVelocityInRadians", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTransformAndVelocitySnapshot, AngularVelocityInRadians), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocityInRadians_MetaData), NewProp_AngularVelocityInRadians_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_TimeSinceLastSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_LinearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewProp_AngularVelocityInRadians,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	nullptr,
	&NewStructOps,
	"TransformAndVelocitySnapshot",
	Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::PropPointers),
	sizeof(FTransformAndVelocitySnapshot),
	alignof(FTransformAndVelocitySnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot.InnerSingleton, Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot.InnerSingleton;
}
// End ScriptStruct FTransformAndVelocitySnapshot

// Begin ScriptStruct FMovementVelocityAndModeSnapshot
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot;
class UScriptStruct* FMovementVelocityAndModeSnapshot::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot, (UObject*)Z_Construct_UPackage__Script_ShootThemUp(), TEXT("MovementVelocityAndModeSnapshot"));
	}
	return Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot.OuterSingleton;
}
template<> SHOOTTHEMUP_API UScriptStruct* StaticStruct<FMovementVelocityAndModeSnapshot>()
{
	return FMovementVelocityAndModeSnapshot::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// State snapshots used when rewinding movement\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State snapshots used when rewinding movement" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceLastSnapshot_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time since the last snapshot was recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time since the last snapshot was recorded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementVelocity_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement velocity from the owner's movement component at time snapshot was recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement velocity from the owner's movement component at time snapshot was recorded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement mode from the owner's movement component at time snapshot was recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement mode from the owner's movement component at time snapshot was recorded" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceLastSnapshot;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MovementVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementVelocityAndModeSnapshot>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::NewProp_TimeSinceLastSnapshot = { "TimeSinceLastSnapshot", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementVelocityAndModeSnapshot, TimeSinceLastSnapshot), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceLastSnapshot_MetaData), NewProp_TimeSinceLastSnapshot_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::NewProp_MovementVelocity = { "MovementVelocity", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementVelocityAndModeSnapshot, MovementVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementVelocity_MetaData), NewProp_MovementVelocity_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMovementVelocityAndModeSnapshot, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMode_MetaData), NewProp_MovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::NewProp_TimeSinceLastSnapshot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::NewProp_MovementVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::NewProp_MovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
	nullptr,
	&NewStructOps,
	"MovementVelocityAndModeSnapshot",
	Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::PropPointers),
	sizeof(FMovementVelocityAndModeSnapshot),
	alignof(FMovementVelocityAndModeSnapshot),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot()
{
	if (!Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot.InnerSingleton, Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot.InnerSingleton;
}
// End ScriptStruct FMovementVelocityAndModeSnapshot

// Begin Class URewindComponent Function IsFastForwarding
struct Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics
{
	struct RewindComponent_eventIsFastForwarding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the component is currently fast forwarding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the component is currently fast forwarding" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RewindComponent_eventIsFastForwarding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RewindComponent_eventIsFastForwarding_Parms), &Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "IsFastForwarding", nullptr, nullptr, Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::PropPointers), sizeof(Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::RewindComponent_eventIsFastForwarding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::RewindComponent_eventIsFastForwarding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URewindComponent_IsFastForwarding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_IsFastForwarding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execIsFastForwarding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFastForwarding();
	P_NATIVE_END;
}
// End Class URewindComponent Function IsFastForwarding

// Begin Class URewindComponent Function IsRewinding
struct Z_Construct_UFunction_URewindComponent_IsRewinding_Statics
{
	struct RewindComponent_eventIsRewinding_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the component is currently rewinding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the component is currently rewinding" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RewindComponent_eventIsRewinding_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RewindComponent_eventIsRewinding_Parms), &Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "IsRewinding", nullptr, nullptr, Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::PropPointers), sizeof(Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::RewindComponent_eventIsRewinding_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::RewindComponent_eventIsRewinding_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URewindComponent_IsRewinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_IsRewinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execIsRewinding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRewinding();
	P_NATIVE_END;
}
// End Class URewindComponent Function IsRewinding

// Begin Class URewindComponent Function IsRewindingEnabled
struct Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics
{
	struct RewindComponent_eventIsRewindingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether rewinding is currently enabled\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether rewinding is currently enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RewindComponent_eventIsRewindingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RewindComponent_eventIsRewindingEnabled_Parms), &Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "IsRewindingEnabled", nullptr, nullptr, Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::RewindComponent_eventIsRewindingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::RewindComponent_eventIsRewindingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URewindComponent_IsRewindingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_IsRewindingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execIsRewindingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRewindingEnabled();
	P_NATIVE_END;
}
// End Class URewindComponent Function IsRewindingEnabled

// Begin Class URewindComponent Function IsTimeBeingManipulated
struct Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics
{
	struct RewindComponent_eventIsTimeBeingManipulated_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the component is currently doing any form of time manipulation\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the component is currently doing any form of time manipulation" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RewindComponent_eventIsTimeBeingManipulated_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RewindComponent_eventIsTimeBeingManipulated_Parms), &Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "IsTimeBeingManipulated", nullptr, nullptr, Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::PropPointers), sizeof(Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::RewindComponent_eventIsTimeBeingManipulated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::RewindComponent_eventIsTimeBeingManipulated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execIsTimeBeingManipulated)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTimeBeingManipulated();
	P_NATIVE_END;
}
// End Class URewindComponent Function IsTimeBeingManipulated

// Begin Class URewindComponent Function IsTimeScrubbing
struct Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics
{
	struct RewindComponent_eventIsTimeScrubbing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether the component is currently time scrubbing\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether the component is currently time scrubbing" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RewindComponent_eventIsTimeScrubbing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RewindComponent_eventIsTimeScrubbing_Parms), &Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "IsTimeScrubbing", nullptr, nullptr, Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::PropPointers), sizeof(Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::RewindComponent_eventIsTimeScrubbing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::RewindComponent_eventIsTimeScrubbing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URewindComponent_IsTimeScrubbing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_IsTimeScrubbing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execIsTimeScrubbing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTimeScrubbing();
	P_NATIVE_END;
}
// End Class URewindComponent Function IsTimeScrubbing

// Begin Class URewindComponent Function IsVisualizingTimeline
struct Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics
{
	struct RewindComponent_eventIsVisualizingTimeline_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns  the component is currently visualizing the timeline\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns  the component is currently visualizing the timeline" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RewindComponent_eventIsVisualizingTimeline_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RewindComponent_eventIsVisualizingTimeline_Parms), &Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "IsVisualizingTimeline", nullptr, nullptr, Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::RewindComponent_eventIsVisualizingTimeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::RewindComponent_eventIsVisualizingTimeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execIsVisualizingTimeline)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisualizingTimeline();
	P_NATIVE_END;
}
// End Class URewindComponent Function IsVisualizingTimeline

// Begin Class URewindComponent Function OnGlobalFastForwardCompleted
struct Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when fast forwarding completes\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when fast forwarding completes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalFastForwardCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalFastForwardCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalFastForwardCompleted();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalFastForwardCompleted

// Begin Class URewindComponent Function OnGlobalFastForwardStarted
struct Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when fast forwarding starts\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when fast forwarding starts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalFastForwardStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalFastForwardStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalFastForwardStarted();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalFastForwardStarted

// Begin Class URewindComponent Function OnGlobalRewindCompleted
struct Z_Construct_UFunction_URewindComponent_OnGlobalRewindCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when rewinding completes\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when rewinding completes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalRewindCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalRewindCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalRewindCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalRewindCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalRewindCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalRewindCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalRewindCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalRewindCompleted();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalRewindCompleted

// Begin Class URewindComponent Function OnGlobalRewindStarted
struct Z_Construct_UFunction_URewindComponent_OnGlobalRewindStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when rewinding starts\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when rewinding starts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalRewindStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalRewindStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalRewindStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalRewindStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalRewindStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalRewindStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalRewindStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalRewindStarted();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalRewindStarted

// Begin Class URewindComponent Function OnGlobalTimelineVisualizationDisabled
struct Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationDisabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when timeline visualization is disabled\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when timeline visualization is disabled" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalTimelineVisualizationDisabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationDisabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalTimelineVisualizationDisabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalTimelineVisualizationDisabled();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalTimelineVisualizationDisabled

// Begin Class URewindComponent Function OnGlobalTimelineVisualizationEnabled
struct Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when timeline visualization is enabled\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when timeline visualization is enabled" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalTimelineVisualizationEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalTimelineVisualizationEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalTimelineVisualizationEnabled();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalTimelineVisualizationEnabled

// Begin Class URewindComponent Function OnGlobalTimeScrubCompleted
struct Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubCompleted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when time scrubbing completes\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when time scrubbing completes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalTimeScrubCompleted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubCompleted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalTimeScrubCompleted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalTimeScrubCompleted();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalTimeScrubCompleted

// Begin Class URewindComponent Function OnGlobalTimeScrubStarted
struct Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubStarted_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when time scrubbing starts\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when time scrubbing starts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubStarted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "OnGlobalTimeScrubStarted", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubStarted_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubStarted_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubStarted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubStarted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execOnGlobalTimeScrubStarted)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGlobalTimeScrubStarted();
	P_NATIVE_END;
}
// End Class URewindComponent Function OnGlobalTimeScrubStarted

// Begin Class URewindComponent Function SetIsRewindingEnabled
struct Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics
{
	struct RewindComponent_eventSetIsRewindingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sets whether rewinding is currently enabled\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets whether rewinding is currently enabled" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((RewindComponent_eventSetIsRewindingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RewindComponent_eventSetIsRewindingEnabled_Parms), &Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URewindComponent, nullptr, "SetIsRewindingEnabled", nullptr, nullptr, Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::RewindComponent_eventSetIsRewindingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::RewindComponent_eventSetIsRewindingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URewindComponent::execSetIsRewindingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsRewindingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class URewindComponent Function SetIsRewindingEnabled

// Begin Class URewindComponent
void URewindComponent::StaticRegisterNativesURewindComponent()
{
	UClass* Class = URewindComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsFastForwarding", &URewindComponent::execIsFastForwarding },
		{ "IsRewinding", &URewindComponent::execIsRewinding },
		{ "IsRewindingEnabled", &URewindComponent::execIsRewindingEnabled },
		{ "IsTimeBeingManipulated", &URewindComponent::execIsTimeBeingManipulated },
		{ "IsTimeScrubbing", &URewindComponent::execIsTimeScrubbing },
		{ "IsVisualizingTimeline", &URewindComponent::execIsVisualizingTimeline },
		{ "OnGlobalFastForwardCompleted", &URewindComponent::execOnGlobalFastForwardCompleted },
		{ "OnGlobalFastForwardStarted", &URewindComponent::execOnGlobalFastForwardStarted },
		{ "OnGlobalRewindCompleted", &URewindComponent::execOnGlobalRewindCompleted },
		{ "OnGlobalRewindStarted", &URewindComponent::execOnGlobalRewindStarted },
		{ "OnGlobalTimelineVisualizationDisabled", &URewindComponent::execOnGlobalTimelineVisualizationDisabled },
		{ "OnGlobalTimelineVisualizationEnabled", &URewindComponent::execOnGlobalTimelineVisualizationEnabled },
		{ "OnGlobalTimeScrubCompleted", &URewindComponent::execOnGlobalTimeScrubCompleted },
		{ "OnGlobalTimeScrubStarted", &URewindComponent::execOnGlobalTimeScrubStarted },
		{ "SetIsRewindingEnabled", &URewindComponent::execSetIsRewindingEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URewindComponent);
UClass* Z_Construct_UClass_URewindComponent_NoRegister()
{
	return URewindComponent::StaticClass();
}
struct Z_Construct_UClass_URewindComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "RewindTime/Components/RewindComponent.h" },
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotFrequencySeconds_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How often a snapshot should be recorded\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How often a snapshot should be recorded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSnapshotMovementVelocityAndMode_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether actor requires movement component to be rewind\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether actor requires movement component to be rewind" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseAnimationDuringTimeScrubbing_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether actor should pause animations during time scrubbing\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether actor should pause animations during time scrubbing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeManipulationStarted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component begins time manipulation\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component begins time manipulation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeManipulationCompleted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component stops time manipulation\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component stops time manipulation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRewindStarted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component begins rewinding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component begins rewinding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRewindCompleted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component stops rewinding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component stops rewinding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFastForwardStarted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component begins fast forwarding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component begins fast forwarding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFastForwardCompleted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component stops fast forwarding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component stops fast forwarding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeScrubStarted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component begins rewinding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component begins rewinding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTimeScrubCompleted_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the component stops rewinding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the component stops rewinding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameMode_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Game mode for global rewind state\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game mode for global rewind state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRewinding_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the component is currently rewinding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the component is currently rewinding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFastForwarding_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the component is currently fast forwarding\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the component is currently fast forwarding" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsTimeScrubbing_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the component is currently time scrubbing\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the component is currently time scrubbing" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisualizingTimeline_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether the component is currently visualizing the timeline\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether the component is currently visualizing the timeline" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRewindingEnabled_MetaData[] = {
		{ "Category", "Rewind" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether rewinding is currently enabled\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether rewinding is currently enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSnapshots_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max snapshots to store; computed in BeginPlay\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max snapshots to store; computed in BeginPlay" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeSinceSnapshotsChanged_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Time since the last snapshot was added/removed to/from the ring buffer\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Time since the last snapshot was added/removed to/from the ring buffer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LatestSnapshotIndex_MetaData[] = {
		{ "Category", "Rewind|Debug" },
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerRootComponent_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Root primitive component on owner, if one exists\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Root primitive component on owner, if one exists" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerMovementComponent_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement component on owner, if one exists\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement component on owner, if one exists" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerSkeletalMesh_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Skeletal mesh component on owner, if one exists\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skeletal mesh component on owner, if one exists" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerVisualizationComponent_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Rewind visualization component on owner, if one exists\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rewind visualization component on owner, if one exists" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPausedPhysics_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether time manipulation paused physics\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether time manipulation paused physics" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPausedAnimation_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether time manipulation paused animation\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether time manipulation paused animation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAnimationsPausedAtStartOfTimeManipulation_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether animation was paused when the current time manipulation operation began\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether animation was paused when the current time manipulation operation began" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLastTimeManipulationWasRewind_MetaData[] = {
		{ "Category", "Rewind|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Whether last manipulation was rewind or fast forward; used by time scrubbing to determine interpolation direction\n" },
#endif
		{ "ModuleRelativePath", "RewindTime/Components/RewindComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether last manipulation was rewind or fast forward; used by time scrubbing to determine interpolation direction" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SnapshotFrequencySeconds;
	static void NewProp_bSnapshotMovementVelocityAndMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapshotMovementVelocityAndMode;
	static void NewProp_bPauseAnimationDuringTimeScrubbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseAnimationDuringTimeScrubbing;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeManipulationStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeManipulationCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRewindStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRewindCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFastForwardStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFastForwardCompleted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeScrubStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTimeScrubCompleted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameMode;
	static void NewProp_bIsRewinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRewinding;
	static void NewProp_bIsFastForwarding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFastForwarding;
	static void NewProp_bIsTimeScrubbing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTimeScrubbing;
	static void NewProp_bIsVisualizingTimeline_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisualizingTimeline;
	static void NewProp_bIsRewindingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRewindingEnabled;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaxSnapshots;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeSinceSnapshotsChanged;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LatestSnapshotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerRootComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerMovementComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerVisualizationComponent;
	static void NewProp_bPausedPhysics_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPausedPhysics;
	static void NewProp_bPausedAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPausedAnimation;
	static void NewProp_bAnimationsPausedAtStartOfTimeManipulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimationsPausedAtStartOfTimeManipulation;
	static void NewProp_bLastTimeManipulationWasRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLastTimeManipulationWasRewind;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URewindComponent_IsFastForwarding, "IsFastForwarding" }, // 2771407662
		{ &Z_Construct_UFunction_URewindComponent_IsRewinding, "IsRewinding" }, // 4051251836
		{ &Z_Construct_UFunction_URewindComponent_IsRewindingEnabled, "IsRewindingEnabled" }, // 3537501183
		{ &Z_Construct_UFunction_URewindComponent_IsTimeBeingManipulated, "IsTimeBeingManipulated" }, // 1100247147
		{ &Z_Construct_UFunction_URewindComponent_IsTimeScrubbing, "IsTimeScrubbing" }, // 3656895063
		{ &Z_Construct_UFunction_URewindComponent_IsVisualizingTimeline, "IsVisualizingTimeline" }, // 3710919145
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardCompleted, "OnGlobalFastForwardCompleted" }, // 1194858220
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalFastForwardStarted, "OnGlobalFastForwardStarted" }, // 2401858899
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalRewindCompleted, "OnGlobalRewindCompleted" }, // 1879875928
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalRewindStarted, "OnGlobalRewindStarted" }, // 2971080643
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationDisabled, "OnGlobalTimelineVisualizationDisabled" }, // 2832739641
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalTimelineVisualizationEnabled, "OnGlobalTimelineVisualizationEnabled" }, // 3351543577
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubCompleted, "OnGlobalTimeScrubCompleted" }, // 2202439002
		{ &Z_Construct_UFunction_URewindComponent_OnGlobalTimeScrubStarted, "OnGlobalTimeScrubStarted" }, // 244258014
		{ &Z_Construct_UFunction_URewindComponent_SetIsRewindingEnabled, "SetIsRewindingEnabled" }, // 191859499
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URewindComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_SnapshotFrequencySeconds = { "SnapshotFrequencySeconds", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, SnapshotFrequencySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotFrequencySeconds_MetaData), NewProp_SnapshotFrequencySeconds_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bSnapshotMovementVelocityAndMode_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bSnapshotMovementVelocityAndMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bSnapshotMovementVelocityAndMode = { "bSnapshotMovementVelocityAndMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bSnapshotMovementVelocityAndMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSnapshotMovementVelocityAndMode_MetaData), NewProp_bSnapshotMovementVelocityAndMode_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bPauseAnimationDuringTimeScrubbing_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bPauseAnimationDuringTimeScrubbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bPauseAnimationDuringTimeScrubbing = { "bPauseAnimationDuringTimeScrubbing", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bPauseAnimationDuringTimeScrubbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseAnimationDuringTimeScrubbing_MetaData), NewProp_bPauseAnimationDuringTimeScrubbing_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeManipulationStarted = { "OnTimeManipulationStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnTimeManipulationStarted), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeManipulationStarted_MetaData), NewProp_OnTimeManipulationStarted_MetaData) }; // 993912770
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeManipulationCompleted = { "OnTimeManipulationCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnTimeManipulationCompleted), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeManipulationCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeManipulationCompleted_MetaData), NewProp_OnTimeManipulationCompleted_MetaData) }; // 3969199720
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnRewindStarted = { "OnRewindStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnRewindStarted), Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRewindStarted_MetaData), NewProp_OnRewindStarted_MetaData) }; // 2677528587
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnRewindCompleted = { "OnRewindCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnRewindCompleted), Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRewindCompleted_MetaData), NewProp_OnRewindCompleted_MetaData) }; // 4259460880
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnFastForwardStarted = { "OnFastForwardStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnFastForwardStarted), Z_Construct_UDelegateFunction_ShootThemUp_OnRewindStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFastForwardStarted_MetaData), NewProp_OnFastForwardStarted_MetaData) }; // 2677528587
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnFastForwardCompleted = { "OnFastForwardCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnFastForwardCompleted), Z_Construct_UDelegateFunction_ShootThemUp_OnRewindCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFastForwardCompleted_MetaData), NewProp_OnFastForwardCompleted_MetaData) }; // 4259460880
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeScrubStarted = { "OnTimeScrubStarted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnTimeScrubStarted), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubStarted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeScrubStarted_MetaData), NewProp_OnTimeScrubStarted_MetaData) }; // 1579100276
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeScrubCompleted = { "OnTimeScrubCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OnTimeScrubCompleted), Z_Construct_UDelegateFunction_ShootThemUp_OnTimeScrubCompleted__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTimeScrubCompleted_MetaData), NewProp_OnTimeScrubCompleted_MetaData) }; // 1864982559
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_GameMode = { "GameMode", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, GameMode), Z_Construct_UClass_ASTUGameModeBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameMode_MetaData), NewProp_GameMode_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewinding_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bIsRewinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewinding = { "bIsRewinding", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRewinding_MetaData), NewProp_bIsRewinding_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsFastForwarding_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bIsFastForwarding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsFastForwarding = { "bIsFastForwarding", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsFastForwarding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFastForwarding_MetaData), NewProp_bIsFastForwarding_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsTimeScrubbing_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bIsTimeScrubbing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsTimeScrubbing = { "bIsTimeScrubbing", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsTimeScrubbing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsTimeScrubbing_MetaData), NewProp_bIsTimeScrubbing_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsVisualizingTimeline_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bIsVisualizingTimeline = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsVisualizingTimeline = { "bIsVisualizingTimeline", nullptr, (EPropertyFlags)0x0010000000022015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsVisualizingTimeline_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisualizingTimeline_MetaData), NewProp_bIsVisualizingTimeline_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewindingEnabled_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bIsRewindingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewindingEnabled = { "bIsRewindingEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewindingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRewindingEnabled_MetaData), NewProp_bIsRewindingEnabled_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_MaxSnapshots = { "MaxSnapshots", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, MaxSnapshots), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSnapshots_MetaData), NewProp_MaxSnapshots_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_TimeSinceSnapshotsChanged = { "TimeSinceSnapshotsChanged", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, TimeSinceSnapshotsChanged), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeSinceSnapshotsChanged_MetaData), NewProp_TimeSinceSnapshotsChanged_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_LatestSnapshotIndex = { "LatestSnapshotIndex", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, LatestSnapshotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LatestSnapshotIndex_MetaData), NewProp_LatestSnapshotIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerRootComponent = { "OwnerRootComponent", nullptr, (EPropertyFlags)0x00100000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OwnerRootComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerRootComponent_MetaData), NewProp_OwnerRootComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerMovementComponent = { "OwnerMovementComponent", nullptr, (EPropertyFlags)0x00100000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OwnerMovementComponent), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerMovementComponent_MetaData), NewProp_OwnerMovementComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerSkeletalMesh = { "OwnerSkeletalMesh", nullptr, (EPropertyFlags)0x00100000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OwnerSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerSkeletalMesh_MetaData), NewProp_OwnerSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerVisualizationComponent = { "OwnerVisualizationComponent", nullptr, (EPropertyFlags)0x00100000000a2009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URewindComponent, OwnerVisualizationComponent), Z_Construct_UClass_URewindVisualizationComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerVisualizationComponent_MetaData), NewProp_OwnerVisualizationComponent_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedPhysics_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bPausedPhysics = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedPhysics = { "bPausedPhysics", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedPhysics_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPausedPhysics_MetaData), NewProp_bPausedPhysics_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedAnimation_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bPausedAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedAnimation = { "bPausedAnimation", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPausedAnimation_MetaData), NewProp_bPausedAnimation_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bAnimationsPausedAtStartOfTimeManipulation_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bAnimationsPausedAtStartOfTimeManipulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bAnimationsPausedAtStartOfTimeManipulation = { "bAnimationsPausedAtStartOfTimeManipulation", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bAnimationsPausedAtStartOfTimeManipulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAnimationsPausedAtStartOfTimeManipulation_MetaData), NewProp_bAnimationsPausedAtStartOfTimeManipulation_MetaData) };
void Z_Construct_UClass_URewindComponent_Statics::NewProp_bLastTimeManipulationWasRewind_SetBit(void* Obj)
{
	((URewindComponent*)Obj)->bLastTimeManipulationWasRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URewindComponent_Statics::NewProp_bLastTimeManipulationWasRewind = { "bLastTimeManipulationWasRewind", nullptr, (EPropertyFlags)0x0010000000022001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URewindComponent), &Z_Construct_UClass_URewindComponent_Statics::NewProp_bLastTimeManipulationWasRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLastTimeManipulationWasRewind_MetaData), NewProp_bLastTimeManipulationWasRewind_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URewindComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_SnapshotFrequencySeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bSnapshotMovementVelocityAndMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bPauseAnimationDuringTimeScrubbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeManipulationStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeManipulationCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnRewindStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnRewindCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnFastForwardStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnFastForwardCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeScrubStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OnTimeScrubCompleted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_GameMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsFastForwarding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsTimeScrubbing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsVisualizingTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bIsRewindingEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_MaxSnapshots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_TimeSinceSnapshotsChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_LatestSnapshotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerMovementComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_OwnerVisualizationComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedPhysics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bPausedAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bAnimationsPausedAtStartOfTimeManipulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URewindComponent_Statics::NewProp_bLastTimeManipulationWasRewind,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URewindComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ShootThemUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URewindComponent_Statics::ClassParams = {
	&URewindComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URewindComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URewindComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_URewindComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URewindComponent()
{
	if (!Z_Registration_Info_UClass_URewindComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URewindComponent.OuterSingleton, Z_Construct_UClass_URewindComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URewindComponent.OuterSingleton;
}
template<> SHOOTTHEMUP_API UClass* StaticClass<URewindComponent>()
{
	return URewindComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URewindComponent);
URewindComponent::~URewindComponent() {}
// End Class URewindComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTransformAndVelocitySnapshot::StaticStruct, Z_Construct_UScriptStruct_FTransformAndVelocitySnapshot_Statics::NewStructOps, TEXT("TransformAndVelocitySnapshot"), &Z_Registration_Info_UScriptStruct_TransformAndVelocitySnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTransformAndVelocitySnapshot), 3665132970U) },
		{ FMovementVelocityAndModeSnapshot::StaticStruct, Z_Construct_UScriptStruct_FMovementVelocityAndModeSnapshot_Statics::NewStructOps, TEXT("MovementVelocityAndModeSnapshot"), &Z_Registration_Info_UScriptStruct_MovementVelocityAndModeSnapshot, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMovementVelocityAndModeSnapshot), 506333882U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URewindComponent, URewindComponent::StaticClass, TEXT("URewindComponent"), &Z_Registration_Info_UClass_URewindComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URewindComponent), 1810878778U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_708968524(TEXT("/Script/ShootThemUp"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ShootThemUp_Source_ShootThemUp_RewindTime_Components_RewindComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
