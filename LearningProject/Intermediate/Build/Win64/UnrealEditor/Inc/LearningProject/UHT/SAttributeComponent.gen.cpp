// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SAttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSAttributeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USAttributeComponent();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USAttributeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class USAttributeComponent Function ApllyHealthChange
struct Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics
{
	struct SAttributeComponent_eventApllyHealthChange_Parms
	{
		float Delta;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Delta;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SAttributeComponent_eventApllyHealthChange_Parms, Delta), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SAttributeComponent_eventApllyHealthChange_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SAttributeComponent_eventApllyHealthChange_Parms), &Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::NewProp_Delta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USAttributeComponent, nullptr, "ApllyHealthChange", nullptr, nullptr, Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::SAttributeComponent_eventApllyHealthChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::SAttributeComponent_eventApllyHealthChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USAttributeComponent::execApllyHealthChange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ApllyHealthChange(Z_Param_Delta);
	P_NATIVE_END;
}
// End Class USAttributeComponent Function ApllyHealthChange

// Begin Class USAttributeComponent
void USAttributeComponent::StaticRegisterNativesUSAttributeComponent()
{
	UClass* Class = USAttributeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApllyHealthChange", &USAttributeComponent::execApllyHealthChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USAttributeComponent);
UClass* Z_Construct_UClass_USAttributeComponent_NoRegister()
{
	return USAttributeComponent::StaticClass();
}
struct Z_Construct_UClass_USAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SAttributeComponent.h" },
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called when the game starts\n" },
#endif
		{ "ModuleRelativePath", "Public/SAttributeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the game starts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USAttributeComponent_ApllyHealthChange, "ApllyHealthChange" }, // 3375421733
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USAttributeComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USAttributeComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USAttributeComponent_Statics::NewProp_Health,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USAttributeComponent_Statics::ClassParams = {
	&USAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_USAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USAttributeComponent()
{
	if (!Z_Registration_Info_UClass_USAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USAttributeComponent.OuterSingleton, Z_Construct_UClass_USAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USAttributeComponent.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<USAttributeComponent>()
{
	return USAttributeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USAttributeComponent);
USAttributeComponent::~USAttributeComponent() {}
// End Class USAttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USAttributeComponent, USAttributeComponent::StaticClass, TEXT("USAttributeComponent"), &Z_Registration_Info_UClass_USAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USAttributeComponent), 2378455828U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_2659471547(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
