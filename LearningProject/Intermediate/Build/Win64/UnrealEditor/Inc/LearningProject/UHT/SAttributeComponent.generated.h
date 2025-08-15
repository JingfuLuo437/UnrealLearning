// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SAttributeComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNINGPROJECT_SAttributeComponent_generated_h
#error "SAttributeComponent.generated.h already included, missing '#pragma once' in SAttributeComponent.h"
#endif
#define LEARNINGPROJECT_SAttributeComponent_generated_h

#define FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApllyHealthChange);


#define FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSAttributeComponent(); \
	friend struct Z_Construct_UClass_USAttributeComponent_Statics; \
public: \
	DECLARE_CLASS(USAttributeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningProject"), NO_API) \
	DECLARE_SERIALIZER(USAttributeComponent)


#define FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	USAttributeComponent(USAttributeComponent&&); \
	USAttributeComponent(const USAttributeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USAttributeComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USAttributeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USAttributeComponent) \
	NO_API virtual ~USAttributeComponent();


#define FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_10_PROLOG
#define FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGPROJECT_API UClass* StaticClass<class USAttributeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LearningProject_Source_LearningProject_Public_SAttributeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
