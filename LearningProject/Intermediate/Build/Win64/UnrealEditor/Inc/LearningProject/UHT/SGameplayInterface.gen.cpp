// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LearningProject/Public/SGameplayInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGameplayInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USGameplayInterface();
LEARNINGPROJECT_API UClass* Z_Construct_UClass_USGameplayInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_LearningProject();
// End Cross Module References

// Begin Interface USGameplayInterface Function Interact
struct SGameplayInterface_eventInteract_Parms
{
	APawn* InstigatorPawn;
};
void ISGameplayInterface::Interact(APawn* InstigatorPawn)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_Interact instead.");
}
static FName NAME_USGameplayInterface_Interact = FName(TEXT("Interact"));
void ISGameplayInterface::Execute_Interact(UObject* O, APawn* InstigatorPawn)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(USGameplayInterface::StaticClass()));
	SGameplayInterface_eventInteract_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_USGameplayInterface_Interact);
	if (Func)
	{
		Parms.InstigatorPawn=InstigatorPawn;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ISGameplayInterface*)(O->GetNativeInterfaceAddress(USGameplayInterface::StaticClass())))
	{
		I->Interact_Implementation(InstigatorPawn);
	}
}
struct Z_Construct_UFunction_USGameplayInterface_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameplayInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USGameplayInterface_Interact_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SGameplayInterface_eventInteract_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USGameplayInterface_Interact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USGameplayInterface_Interact_Statics::NewProp_InstigatorPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayInterface_Interact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGameplayInterface_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USGameplayInterface, nullptr, "Interact", nullptr, nullptr, Z_Construct_UFunction_USGameplayInterface_Interact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayInterface_Interact_Statics::PropPointers), sizeof(SGameplayInterface_eventInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGameplayInterface_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGameplayInterface_Interact_Statics::Function_MetaDataParams) };
static_assert(sizeof(SGameplayInterface_eventInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USGameplayInterface_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGameplayInterface_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ISGameplayInterface::execInteract)
{
	P_GET_OBJECT(APawn,Z_Param_InstigatorPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation(Z_Param_InstigatorPawn);
	P_NATIVE_END;
}
// End Interface USGameplayInterface Function Interact

// Begin Interface USGameplayInterface
void USGameplayInterface::StaticRegisterNativesUSGameplayInterface()
{
	UClass* Class = USGameplayInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Interact", &ISGameplayInterface::execInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USGameplayInterface);
UClass* Z_Construct_UClass_USGameplayInterface_NoRegister()
{
	return USGameplayInterface::StaticClass();
}
struct Z_Construct_UClass_USGameplayInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGameplayInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGameplayInterface_Interact, "Interact" }, // 2577447856
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISGameplayInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGameplayInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LearningProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGameplayInterface_Statics::ClassParams = {
	&USGameplayInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGameplayInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_USGameplayInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGameplayInterface()
{
	if (!Z_Registration_Info_UClass_USGameplayInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGameplayInterface.OuterSingleton, Z_Construct_UClass_USGameplayInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGameplayInterface.OuterSingleton;
}
template<> LEARNINGPROJECT_API UClass* StaticClass<USGameplayInterface>()
{
	return USGameplayInterface::StaticClass();
}
USGameplayInterface::USGameplayInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGameplayInterface);
USGameplayInterface::~USGameplayInterface() {}
// End Interface USGameplayInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGameplayInterface, USGameplayInterface::StaticClass, TEXT("USGameplayInterface"), &Z_Registration_Info_UClass_USGameplayInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGameplayInterface), 3202653327U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_127151242(TEXT("/Script/LearningProject"),
	Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
