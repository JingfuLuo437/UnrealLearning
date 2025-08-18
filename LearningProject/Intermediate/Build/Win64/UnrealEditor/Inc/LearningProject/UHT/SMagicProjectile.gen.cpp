// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SMagicProjectile.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMagicProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASMagicProjectile();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASMagicProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASMagicProjectile Function OnActorOverlap
struct Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics
{
	struct SMagicProjectile_eventOnActorOverlap_Parms
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
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMagicProjectile_eventOnActorOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMagicProjectile_eventOnActorOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMagicProjectile_eventOnActorOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMagicProjectile_eventOnActorOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((SMagicProjectile_eventOnActorOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SMagicProjectile_eventOnActorOverlap_Parms), &Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SMagicProjectile_eventOnActorOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASMagicProjectile, nullptr, "OnActorOverlap", nullptr, nullptr, Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::SMagicProjectile_eventOnActorOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::SMagicProjectile_eventOnActorOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASMagicProjectile::execOnActorOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ASMagicProjectile Function OnActorOverlap

// Begin Class ASMagicProjectile
void ASMagicProjectile::StaticRegisterNativesASMagicProjectile()
{
	UClass* Class = ASMagicProjectile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnActorOverlap", &ASMagicProjectile::execOnActorOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASMagicProjectile);
UClass* Z_Construct_UClass_ASMagicProjectile_NoRegister()
{
	return ASMagicProjectile::StaticClass();
}
struct Z_Construct_UClass_ASMagicProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SMagicProjectile.h" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "SMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileComp_MetaData[] = {
		{ "Category", "SMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComp_MetaData[] = {
		{ "Category", "SMagicProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SMagicProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASMagicProjectile_OnActorOverlap, "OnActorOverlap" }, // 3647087921
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMagicProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMagicProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ProjectileComp = { "ProjectileComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMagicProjectile, ProjectileComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileComp_MetaData), NewProp_ProjectileComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ParticleComp = { "ParticleComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMagicProjectile, ParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleComp_MetaData), NewProp_ParticleComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ProjectileComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_ParticleComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASMagicProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASMagicProjectile_Statics::ClassParams = {
	&ASMagicProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASMagicProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASMagicProjectile()
{
	if (!Z_Registration_Info_UClass_ASMagicProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASMagicProjectile.OuterSingleton, Z_Construct_UClass_ASMagicProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASMagicProjectile.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<ASMagicProjectile>()
{
	return ASMagicProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASMagicProjectile);
ASMagicProjectile::~ASMagicProjectile() {}
// End Class ASMagicProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASMagicProjectile, ASMagicProjectile::StaticClass, TEXT("ASMagicProjectile"), &Z_Registration_Info_UClass_ASMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMagicProjectile), 2191278099U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_90219169(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
