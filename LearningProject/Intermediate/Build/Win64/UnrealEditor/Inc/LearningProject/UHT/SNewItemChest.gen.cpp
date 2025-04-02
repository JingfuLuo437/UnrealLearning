// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SNewItemChest.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSNewItemChest() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASNewItemChest();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASNewItemChest_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USGameplayInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASNewItemChest
void ASNewItemChest::StaticRegisterNativesASNewItemChest()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASNewItemChest);
UClass* Z_Construct_UClass_ASNewItemChest_NoRegister()
{
	return ASNewItemChest::StaticClass();
}
struct Z_Construct_UClass_ASNewItemChest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SNewItemChest.h" },
		{ "ModuleRelativePath", "Public/SNewItemChest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMesh_MetaData[] = {
		{ "Category", "SNewItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SNewItemChest.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LidMesh_MetaData[] = {
		{ "Category", "SNewItemChest" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SNewItemChest.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LidMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASNewItemChest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASNewItemChest_Statics::NewProp_BaseMesh = { "BaseMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASNewItemChest, BaseMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMesh_MetaData), NewProp_BaseMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASNewItemChest_Statics::NewProp_LidMesh = { "LidMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASNewItemChest, LidMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LidMesh_MetaData), NewProp_LidMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASNewItemChest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASNewItemChest_Statics::NewProp_BaseMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASNewItemChest_Statics::NewProp_LidMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASNewItemChest_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASNewItemChest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASNewItemChest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASNewItemChest_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_USGameplayInterface_NoRegister, (int32)VTABLE_OFFSET(ASNewItemChest, ISGameplayInterface), false },  // 3202653327
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASNewItemChest_Statics::ClassParams = {
	&ASNewItemChest::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASNewItemChest_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASNewItemChest_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASNewItemChest_Statics::Class_MetaDataParams), Z_Construct_UClass_ASNewItemChest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASNewItemChest()
{
	if (!Z_Registration_Info_UClass_ASNewItemChest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASNewItemChest.OuterSingleton, Z_Construct_UClass_ASNewItemChest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASNewItemChest.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<ASNewItemChest>()
{
	return ASNewItemChest::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASNewItemChest);
ASNewItemChest::~ASNewItemChest() {}
// End Class ASNewItemChest

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SNewItemChest_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASNewItemChest, ASNewItemChest::StaticClass, TEXT("ASNewItemChest"), &Z_Registration_Info_UClass_ASNewItemChest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASNewItemChest), 4105125140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SNewItemChest_h_2511202749(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SNewItemChest_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SNewItemChest_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
