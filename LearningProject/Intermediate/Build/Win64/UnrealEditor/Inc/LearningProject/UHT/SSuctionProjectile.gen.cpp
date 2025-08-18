// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SSuctionProjectile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSSuctionProjectile() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASProjectileBaseClass();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASSuctionProjectile();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASSuctionProjectile_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASSuctionProjectile
void ASSuctionProjectile::StaticRegisterNativesASSuctionProjectile()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASSuctionProjectile);
UClass* Z_Construct_UClass_ASSuctionProjectile_NoRegister()
{
	return ASSuctionProjectile::StaticClass();
}
struct Z_Construct_UClass_ASSuctionProjectile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SSuctionProjectile.h" },
		{ "ModuleRelativePath", "Public/SSuctionProjectile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceComponent_MetaData[] = {
		{ "Category", "SSuctionProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SSuctionProjectile.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASSuctionProjectile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASSuctionProjectile_Statics::NewProp_ForceComponent = { "ForceComponent", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASSuctionProjectile, ForceComponent), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceComponent_MetaData), NewProp_ForceComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASSuctionProjectile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASSuctionProjectile_Statics::NewProp_ForceComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASSuctionProjectile_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASSuctionProjectile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASProjectileBaseClass,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASSuctionProjectile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASSuctionProjectile_Statics::ClassParams = {
	&ASSuctionProjectile::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASSuctionProjectile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASSuctionProjectile_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASSuctionProjectile_Statics::Class_MetaDataParams), Z_Construct_UClass_ASSuctionProjectile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASSuctionProjectile()
{
	if (!Z_Registration_Info_UClass_ASSuctionProjectile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASSuctionProjectile.OuterSingleton, Z_Construct_UClass_ASSuctionProjectile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASSuctionProjectile.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<ASSuctionProjectile>()
{
	return ASSuctionProjectile::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASSuctionProjectile);
ASSuctionProjectile::~ASSuctionProjectile() {}
// End Class ASSuctionProjectile

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SSuctionProjectile_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASSuctionProjectile, ASSuctionProjectile::StaticClass, TEXT("ASSuctionProjectile"), &Z_Registration_Info_UClass_ASSuctionProjectile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASSuctionProjectile), 2327665078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SSuctionProjectile_h_1545554771(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SSuctionProjectile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SSuctionProjectile_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
