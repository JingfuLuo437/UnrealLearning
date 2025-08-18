// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SProjectileBaseClass.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSProjectileBaseClass() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASProjectileBaseClass();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASProjectileBaseClass_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USAttributeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASProjectileBaseClass Function Explode
static FName NAME_ASProjectileBaseClass_Explode = FName(TEXT("Explode"));
void ASProjectileBaseClass::Explode()
{
	ProcessEvent(FindFunctionChecked(NAME_ASProjectileBaseClass_Explode),NULL);
}
struct Z_Construct_UFunction_ASProjectileBaseClass_Explode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASProjectileBaseClass_Explode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASProjectileBaseClass, nullptr, "Explode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASProjectileBaseClass_Explode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASProjectileBaseClass_Explode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASProjectileBaseClass_Explode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASProjectileBaseClass_Explode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASProjectileBaseClass::execExplode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Explode_Implementation();
	P_NATIVE_END;
}
// End Class ASProjectileBaseClass Function Explode

// Begin Class ASProjectileBaseClass Function OverlapWithOtherActor
struct Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics
{
	struct SProjectileBaseClass_eventOverlapWithOtherActor_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SProjectileBaseClass_eventOverlapWithOtherActor_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SProjectileBaseClass_eventOverlapWithOtherActor_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SProjectileBaseClass_eventOverlapWithOtherActor_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SProjectileBaseClass_eventOverlapWithOtherActor_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SProjectileBaseClass_eventOverlapWithOtherActor_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SProjectileBaseClass_eventOverlapWithOtherActor_Parms), &Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SProjectileBaseClass_eventOverlapWithOtherActor_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASProjectileBaseClass, nullptr, "OverlapWithOtherActor", nullptr, nullptr, Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::SProjectileBaseClass_eventOverlapWithOtherActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::SProjectileBaseClass_eventOverlapWithOtherActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASProjectileBaseClass::execOverlapWithOtherActor)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OverlapWithOtherActor(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASProjectileBaseClass Function OverlapWithOtherActor

// Begin Class ASProjectileBaseClass
void ASProjectileBaseClass::StaticRegisterNativesASProjectileBaseClass()
{
	UClass* Class = ASProjectileBaseClass::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Explode", &ASProjectileBaseClass::execExplode },
		{ "OverlapWithOtherActor", &ASProjectileBaseClass::execOverlapWithOtherActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASProjectileBaseClass);
UClass* Z_Construct_UClass_ASProjectileBaseClass_NoRegister()
{
	return ASProjectileBaseClass::StaticClass();
}
struct Z_Construct_UClass_ASProjectileBaseClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SProjectileBaseClass.h" },
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactVFX_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Public/SProjectileBaseClass.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactVFX;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASProjectileBaseClass_Explode, "Explode" }, // 2825932602
		{ &Z_Construct_UFunction_ASProjectileBaseClass_OverlapWithOtherActor, "OverlapWithOtherActor" }, // 939529915
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASProjectileBaseClass>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProjectileBaseClass, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_ProjectileMovementComp = { "ProjectileMovementComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProjectileBaseClass, ProjectileMovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComp_MetaData), NewProp_ProjectileMovementComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_ParticleComp = { "ParticleComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProjectileBaseClass, ParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleComp_MetaData), NewProp_ParticleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_AttributeComponent = { "AttributeComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProjectileBaseClass, AttributeComponent), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeComponent_MetaData), NewProp_AttributeComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_ImpactVFX = { "ImpactVFX", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASProjectileBaseClass, ImpactVFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactVFX_MetaData), NewProp_ImpactVFX_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASProjectileBaseClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_ProjectileMovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_ParticleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_AttributeComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASProjectileBaseClass_Statics::NewProp_ImpactVFX,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileBaseClass_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASProjectileBaseClass_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileBaseClass_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASProjectileBaseClass_Statics::ClassParams = {
	&ASProjectileBaseClass::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASProjectileBaseClass_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileBaseClass_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASProjectileBaseClass_Statics::Class_MetaDataParams), Z_Construct_UClass_ASProjectileBaseClass_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASProjectileBaseClass()
{
	if (!Z_Registration_Info_UClass_ASProjectileBaseClass.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASProjectileBaseClass.OuterSingleton, Z_Construct_UClass_ASProjectileBaseClass_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASProjectileBaseClass.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<ASProjectileBaseClass>()
{
	return ASProjectileBaseClass::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASProjectileBaseClass);
ASProjectileBaseClass::~ASProjectileBaseClass() {}
// End Class ASProjectileBaseClass

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASProjectileBaseClass, ASProjectileBaseClass::StaticClass, TEXT("ASProjectileBaseClass"), &Z_Registration_Info_UClass_ASProjectileBaseClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASProjectileBaseClass), 3671408488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_2963478301(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
