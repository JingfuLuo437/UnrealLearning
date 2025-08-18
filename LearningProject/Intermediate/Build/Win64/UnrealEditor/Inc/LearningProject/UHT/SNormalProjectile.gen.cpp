// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SNormalProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNormalProjectile() {}

// Begin Cross Module References
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASNormalProjectile();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASNormalProjectile_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASProjectileBaseClass();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASNormalProjectile
void ASNormalProjectile::StaticRegisterNativesASNormalProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASNormalProjectile);
UClass* Z_Construct_UClass_ASNormalProjectile_NoRegister()
{
	return ASNormalProjectile::StaticClass();
}
struct Z_Construct_UClass_ASNormalProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SNormalProjectile.h" },
		{ "ModuleRelativePath", "Public/SNormalProjectile.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASNormalProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASNormalProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASProjectileBaseClass,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASNormalProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASNormalProjectile_Statics::ClassParams = {
	&ASNormalProjectile::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASNormalProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASNormalProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASNormalProjectile()
{
	if (!Z_Registration_Info_UClass_ASNormalProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASNormalProjectile.OuterSingleton, Z_Construct_UClass_ASNormalProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASNormalProjectile.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<ASNormalProjectile>()
{
	return ASNormalProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASNormalProjectile);
ASNormalProjectile::~ASNormalProjectile() {}
// End Class ASNormalProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASNormalProjectile, ASNormalProjectile::StaticClass, TEXT("ASNormalProjectile"), &Z_Registration_Info_UClass_ASNormalProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASNormalProjectile), 2069139354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_1701886376(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
