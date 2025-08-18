// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/STargetDummy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSTargetDummy() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASTargetDummy();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_ASTargetDummy_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USAttributeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Class ASTargetDummy Function OnHealthChange
struct Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics
{
	struct STargetDummy_eventOnHealthChange_Parms
	{
		AActor* InstigatorActor;
		USAttributeComponent* OwningComp;
		float NewHealth;
		float delta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/STargetDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_delta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STargetDummy_eventOnHealthChange_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_OwningComp = { "OwningComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STargetDummy_eventOnHealthChange_Parms, OwningComp), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningComp_MetaData), NewProp_OwningComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STargetDummy_eventOnHealthChange_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_delta = { "delta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(STargetDummy_eventOnHealthChange_Parms, delta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_OwningComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::NewProp_delta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASTargetDummy, nullptr, "OnHealthChange", nullptr, nullptr, Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::STargetDummy_eventOnHealthChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::STargetDummy_eventOnHealthChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASTargetDummy_OnHealthChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASTargetDummy_OnHealthChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASTargetDummy::execOnHealthChange)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_GET_OBJECT(USAttributeComponent,Z_Param_OwningComp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealth);
	P_GET_PROPERTY(FFloatProperty,Z_Param_delta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHealthChange(Z_Param_InstigatorActor,Z_Param_OwningComp,Z_Param_NewHealth,Z_Param_delta);
	P_NATIVE_END;
}
// End Class ASTargetDummy Function OnHealthChange

// Begin Class ASTargetDummy
void ASTargetDummy::StaticRegisterNativesASTargetDummy()
{
	UClass* Class = ASTargetDummy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHealthChange", &ASTargetDummy::execOnHealthChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASTargetDummy);
UClass* Z_Construct_UClass_ASTargetDummy_NoRegister()
{
	return ASTargetDummy::StaticClass();
}
struct Z_Construct_UClass_ASTargetDummy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "STargetDummy.h" },
		{ "ModuleRelativePath", "Public/STargetDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeComp_MetaData[] = {
		{ "Category", "STargetDummy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STargetDummy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "Category", "STargetDummy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/STargetDummy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASTargetDummy_OnHealthChange, "OnHealthChange" }, // 649745916
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASTargetDummy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTargetDummy_Statics::NewProp_AttributeComp = { "AttributeComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTargetDummy, AttributeComp), Z_Construct_UClass_USAttributeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeComp_MetaData), NewProp_AttributeComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASTargetDummy_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASTargetDummy, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASTargetDummy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTargetDummy_Statics::NewProp_AttributeComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASTargetDummy_Statics::NewProp_MeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetDummy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASTargetDummy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetDummy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASTargetDummy_Statics::ClassParams = {
	&ASTargetDummy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASTargetDummy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetDummy_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASTargetDummy_Statics::Class_MetaDataParams), Z_Construct_UClass_ASTargetDummy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASTargetDummy()
{
	if (!Z_Registration_Info_UClass_ASTargetDummy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASTargetDummy.OuterSingleton, Z_Construct_UClass_ASTargetDummy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASTargetDummy.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<ASTargetDummy>()
{
	return ASTargetDummy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASTargetDummy);
ASTargetDummy::~ASTargetDummy() {}
// End Class ASTargetDummy

// Begin Registration
struct Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASTargetDummy, ASTargetDummy::StaticClass, TEXT("ASTargetDummy"), &Z_Registration_Info_UClass_ASTargetDummy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASTargetDummy), 3752357967U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_2503356994(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
