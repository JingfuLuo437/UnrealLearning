// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLearningProject_init() {}
	LEARNINGPROJECT_API UFunction* Z_Construct_UDelegateFunction_LearningProject_OnHealthChange__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_LearningProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_LearningProject()
	{
		if (!Z_Registration_Info_UPackage__Script_LearningProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_LearningProject_OnHealthChange__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/LearningProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xB754555F,
				0x96204C8F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_LearningProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_LearningProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_LearningProject(Z_Construct_UPackage__Script_LearningProject, TEXT("/Script/LearningProject"), Z_Registration_Info_UPackage__Script_LearningProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xB754555F, 0x96204C8F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
