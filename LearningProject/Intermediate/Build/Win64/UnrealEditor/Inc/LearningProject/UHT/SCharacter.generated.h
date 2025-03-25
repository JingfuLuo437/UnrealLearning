// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LEARNINGPROJECT_SCharacter_generated_h
#error "SCharacter.generated.h already included, missing '#pragma once' in SCharacter.h"
#endif
#define LEARNINGPROJECT_SCharacter_generated_h

#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_SCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASCharacter(); \
	friend struct Z_Construct_UClass_ASCharacter_Statics; \
public: \
	DECLARE_CLASS(ASCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LearningProject"), NO_API) \
	DECLARE_SERIALIZER(ASCharacter)


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_SCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASCharacter(ASCharacter&&); \
	ASCharacter(const ASCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASCharacter) \
	NO_API virtual ~ASCharacter();


#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_SCharacter_h_11_PROLOG
#define FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_SCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_SCharacter_h_14_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_SCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEARNINGPROJECT_API UClass* StaticClass<class ASCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_Tutorial_LearningProject_Source_LearningProject_SCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
