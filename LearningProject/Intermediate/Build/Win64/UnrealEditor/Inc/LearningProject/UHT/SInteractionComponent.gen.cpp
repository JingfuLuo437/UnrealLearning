// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SInteractionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSInteractionComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USInteractionComponent();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class USInteractionComponent
void USInteractionComponent::StaticRegisterNativesUSInteractionComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USInteractionComponent);
UClass* Z_Construct_UClass_USInteractionComponent_NoRegister()
{
	return USInteractionComponent::StaticClass();
}
struct Z_Construct_UClass_USInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SInteractionComponent.h" },
		{ "ModuleRelativePath", "Public/SInteractionComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USInteractionComponent_Statics::ClassParams = {
	&USInteractionComponent::StaticClass,
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
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USInteractionComponent()
{
	if (!Z_Registration_Info_UClass_USInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USInteractionComponent.OuterSingleton, Z_Construct_UClass_USInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USInteractionComponent.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<USInteractionComponent>()
{
	return USInteractionComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USInteractionComponent);
USInteractionComponent::~USInteractionComponent() {}
// End Class USInteractionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SInteractionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USInteractionComponent, USInteractionComponent::StaticClass, TEXT("USInteractionComponent"), &Z_Registration_Info_UClass_USInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USInteractionComponent), 1610676826U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SInteractionComponent_h_1748546398(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SInteractionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SInteractionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
