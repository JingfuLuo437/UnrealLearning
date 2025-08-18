// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "STargetDummy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class USAttributeComponent;
#ifdef LEARNINGPROJECT_STargetDummy_generated_h
#error "STargetDummy.generated.h already included, missing '#pragma once' in STargetDummy.h"
#endif
#define LEARNINGPROJECT_STargetDummy_generated_h

#define FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHealthChange);


#define FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASTargetDummy(); \
	friend struct Z_Construct_UClass_ASTargetDummy_Statics; \
public: \
	DECLARE_CLASS(ASTargetDummy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningProject"), NO_API) \
	DECLARE_SERIALIZER(ASTargetDummy)


#define FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASTargetDummy(ASTargetDummy&&); \
	ASTargetDummy(const ASTargetDummy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASTargetDummy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASTargetDummy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASTargetDummy) \
	NO_API virtual ~ASTargetDummy();


#define FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_12_PROLOG
#define FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_15_INCLASS_NO_PURE_DECLS \
	FID_LearningProject_Source_LearningProject_Public_STargetDummy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGPROJECT_API UClass* StaticClass<class ASTargetDummy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LearningProject_Source_LearningProject_Public_STargetDummy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
