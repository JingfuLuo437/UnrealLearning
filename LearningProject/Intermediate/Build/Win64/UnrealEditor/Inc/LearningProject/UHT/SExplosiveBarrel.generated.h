// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SExplosiveBarrel.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef LEARNINGPROJECT_SExplosiveBarrel_generated_h
#error "SExplosiveBarrel.generated.h already included, missing '#pragma once' in SExplosiveBarrel.h"
#endif
#define LEARNINGPROJECT_SExplosiveBarrel_generated_h

#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASExplosiveBarrel(); \
	friend struct Z_Construct_UClass_ASExplosiveBarrel_Statics; \
public: \
	DECLARE_CLASS(ASExplosiveBarrel, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningProject"), NO_API) \
	DECLARE_SERIALIZER(ASExplosiveBarrel)


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASExplosiveBarrel(ASExplosiveBarrel&&); \
	ASExplosiveBarrel(const ASExplosiveBarrel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASExplosiveBarrel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASExplosiveBarrel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASExplosiveBarrel) \
	NO_API virtual ~ASExplosiveBarrel();


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_13_PROLOG
#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_16_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGPROJECT_API UClass* StaticClass<class ASExplosiveBarrel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_Public_SExplosiveBarrel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
