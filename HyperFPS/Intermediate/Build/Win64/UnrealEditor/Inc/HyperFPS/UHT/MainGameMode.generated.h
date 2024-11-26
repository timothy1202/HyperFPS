// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HYPERFPS_MainGameMode_generated_h
#error "MainGameMode.generated.h already included, missing '#pragma once' in MainGameMode.h"
#endif
#define HYPERFPS_MainGameMode_generated_h

#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainGameMode(); \
	friend struct Z_Construct_UClass_AMainGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperFPS"), NO_API) \
	DECLARE_SERIALIZER(AMainGameMode)


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainGameMode(AMainGameMode&&); \
	AMainGameMode(const AMainGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainGameMode) \
	NO_API virtual ~AMainGameMode();


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainGameMode_h_12_PROLOG
#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYPERFPS_API UClass* StaticClass<class AMainGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
