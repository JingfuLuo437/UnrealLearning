// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SMagicProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMagicProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASMagicProjectile();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASMagicProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASMagicProjectile
void ASMagicProjectile::StaticRegisterNativesASMagicProjectile()
{
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
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASMagicProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASMagicProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASMagicProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
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
	nullptr,
	Z_Construct_UClass_ASMagicProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
struct Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASMagicProjectile, ASMagicProjectile::StaticClass, TEXT("ASMagicProjectile"), &Z_Registration_Info_UClass_ASMagicProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASMagicProjectile), 2092604878U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_1307572727(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SMagicProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
