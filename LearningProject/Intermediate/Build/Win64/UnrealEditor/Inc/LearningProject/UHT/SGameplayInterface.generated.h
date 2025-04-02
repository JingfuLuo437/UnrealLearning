// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGameplayInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef LEARNINGPROJECT_SGameplayInterface_generated_h
#error "SGameplayInterface.generated.h already included, missing '#pragma once' in SGameplayInterface.h"
#endif
#define LEARNINGPROJECT_SGameplayInterface_generated_h

#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(APawn* InstigatorPawn) {}; \
	DECLARE_FUNCTION(execInteract);


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS
#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LEARNINGPROJECT_API USGameplayInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USGameplayInterface(USGameplayInterface&&); \
	USGameplayInterface(const USGameplayInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LEARNINGPROJECT_API, USGameplayInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGameplayInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGameplayInterface) \
	LEARNINGPROJECT_API virtual ~USGameplayInterface();


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSGameplayInterface(); \
	friend struct Z_Construct_UClass_USGameplayInterface_Statics; \
public: \
	DECLARE_CLASS(USGameplayInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/LearningProject"), LEARNINGPROJECT_API) \
	DECLARE_SERIALIZER(USGameplayInterface)


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISGameplayInterface() {} \
public: \
	typedef USGameplayInterface UClassType; \
	typedef ISGameplayInterface ThisClass; \
	static void Execute_Interact(UObject* O, APawn* InstigatorPawn); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_10_PROLOG
#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_CALLBACK_WRAPPERS \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGPROJECT_API UClass* StaticClass<class USGameplayInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SGameplayInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
