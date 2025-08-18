// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SDashProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDashProjectile() {}

// Begin Cross Module References
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASDashProjectile();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASDashProjectile_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASProjectileBaseClass();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASDashProjectile
void ASDashProjectile::StaticRegisterNativesASDashProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASDashProjectile);
UClass* Z_Construct_UClass_ASDashProjectile_NoRegister()
{
	return ASDashProjectile::StaticClass();
}
struct Z_Construct_UClass_ASDashProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SDashProjectile.h" },
		{ "ModuleRelativePath", "Public/SDashProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDashProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASDashProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASProjectileBaseClass,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASDashProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDashProjectile_Statics::ClassParams = {
	&ASDashProjectile::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASDashProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASDashProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASDashProjectile()
{
	if (!Z_Registration_Info_UClass_ASDashProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDashProjectile.OuterSingleton, Z_Construct_UClass_ASDashProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASDashProjectile.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<ASDashProjectile>()
{
	return ASDashProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASDashProjectile);
ASDashProjectile::~ASDashProjectile() {}
// End Class ASDashProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SDashProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASDashProjectile, ASDashProjectile::StaticClass, TEXT("ASDashProjectile"), &Z_Registration_Info_UClass_ASDashProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDashProjectile), 2296823117U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SDashProjectile_h_1965872178(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SDashProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SDashProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
