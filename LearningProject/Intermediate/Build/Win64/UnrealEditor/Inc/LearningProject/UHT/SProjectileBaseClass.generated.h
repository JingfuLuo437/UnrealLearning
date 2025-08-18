// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SProjectileBaseClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef LEARNINGPROJECT_SProjectileBaseClass_generated_h
#error "SProjectileBaseClass.generated.h already included, missing '#pragma once' in SProjectileBaseClass.h"
#endif
#define LEARNINGPROJECT_SProjectileBaseClass_generated_h

#define FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Explode_Implementation(); \
	DECLARE_FUNCTION(execExplode); \
	DECLARE_FUNCTION(execOverlapWithOtherActor);


#define FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_CALLBACK_WRAPPERS
#define FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASProjectileBaseClass(); \
	friend struct Z_Construct_UClass_ASProjectileBaseClass_Statics; \
public: \
	DECLARE_CLASS(ASProjectileBaseClass, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningProject"), NO_API) \
	DECLARE_SERIALIZER(ASProjectileBaseClass)


#define FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASProjectileBaseClass(ASProjectileBaseClass&&); \
	ASProjectileBaseClass(const ASProjectileBaseClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASProjectileBaseClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASProjectileBaseClass); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASProjectileBaseClass) \
	NO_API virtual ~ASProjectileBaseClass();


#define FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_15_PROLOG
#define FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_CALLBACK_WRAPPERS \
	FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_INCLASS_NO_PURE_DECLS \
	FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGPROJECT_API UClass* StaticClass<class ASProjectileBaseClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LearningProject_Source_LearningProject_Public_SProjectileBaseClass_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
