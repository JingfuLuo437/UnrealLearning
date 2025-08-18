// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SNormalProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNINGPROJECT_SNormalProjectile_generated_h
#error "SNormalProjectile.generated.h already included, missing '#pragma once' in SNormalProjectile.h"
#endif
#define LEARNINGPROJECT_SNormalProjectile_generated_h

#define FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASNormalProjectile(); \
	friend struct Z_Construct_UClass_ASNormalProjectile_Statics; \
public: \
	DECLARE_CLASS(ASNormalProjectile, ASProjectileBaseClass, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningProject"), NO_API) \
	DECLARE_SERIALIZER(ASNormalProjectile)


#define FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASNormalProjectile(ASNormalProjectile&&); \
	ASNormalProjectile(const ASNormalProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASNormalProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASNormalProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASNormalProjectile) \
	NO_API virtual ~ASNormalProjectile();


#define FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_16_PROLOG
#define FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_19_INCLASS_NO_PURE_DECLS \
	FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGPROJECT_API UClass* StaticClass<class ASNormalProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_LearningProject_Source_LearningProject_Public_SNormalProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
