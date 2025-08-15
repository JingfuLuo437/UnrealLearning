// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/S_SuctionProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_SuctionProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_AS_SuctionProjectile();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_AS_SuctionProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class AS_SuctionProjectile
void AS_SuctionProjectile::StaticRegisterNativesAS_SuctionProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AS_SuctionProjectile);
UClass* Z_Construct_UClass_AS_SuctionProjectile_NoRegister()
{
	return AS_SuctionProjectile::StaticClass();
}
struct Z_Construct_UClass_AS_SuctionProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "S_SuctionProjectile.h" },
		{ "ModuleRelativePath", "Public/S_SuctionProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereComp_MetaData[] = {
		{ "Category", "S_SuctionProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_SuctionProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovementComp_MetaData[] = {
		{ "Category", "S_SuctionProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_SuctionProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticleComp_MetaData[] = {
		{ "Category", "S_SuctionProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_SuctionProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceComp_MetaData[] = {
		{ "Category", "S_SuctionProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_SuctionProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "S_SuctionProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/S_SuctionProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovementComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS_SuctionProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_SphereComp = { "SphereComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_SuctionProjectile, SphereComp), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereComp_MetaData), NewProp_SphereComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_ProjectileMovementComp = { "ProjectileMovementComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_SuctionProjectile, ProjectileMovementComp), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectileMovementComp_MetaData), NewProp_ProjectileMovementComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_ParticleComp = { "ParticleComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_SuctionProjectile, ParticleComp), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticleComp_MetaData), NewProp_ParticleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_ForceComp = { "ForceComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_SuctionProjectile, ForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceComp_MetaData), NewProp_ForceComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AS_SuctionProjectile, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AS_SuctionProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_SphereComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_ProjectileMovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_ParticleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_ForceComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AS_SuctionProjectile_Statics::NewProp_MeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AS_SuctionProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AS_SuctionProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AS_SuctionProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AS_SuctionProjectile_Statics::ClassParams = {
	&AS_SuctionProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AS_SuctionProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AS_SuctionProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AS_SuctionProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_AS_SuctionProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AS_SuctionProjectile()
{
	if (!Z_Registration_Info_UClass_AS_SuctionProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AS_SuctionProjectile.OuterSingleton, Z_Construct_UClass_AS_SuctionProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AS_SuctionProjectile.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<AS_SuctionProjectile>()
{
	return AS_SuctionProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AS_SuctionProjectile);
AS_SuctionProjectile::~AS_SuctionProjectile() {}
// End Class AS_SuctionProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_S_SuctionProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AS_SuctionProjectile, AS_SuctionProjectile::StaticClass, TEXT("AS_SuctionProjectile"), &Z_Registration_Info_UClass_AS_SuctionProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AS_SuctionProjectile), 2666034071U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_S_SuctionProjectile_h_2206782425(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_S_SuctionProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_S_SuctionProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
