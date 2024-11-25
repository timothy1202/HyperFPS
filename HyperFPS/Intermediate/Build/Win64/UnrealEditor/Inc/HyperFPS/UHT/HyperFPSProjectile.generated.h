// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HyperFPSProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HYPERFPS_HyperFPSProjectile_generated_h
#error "HyperFPSProjectile.generated.h already included, missing '#pragma once' in HyperFPSProjectile.h"
#endif
#define HYPERFPS_HyperFPSProjectile_generated_h

#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHyperFPSProjectile(); \
	friend struct Z_Construct_UClass_AHyperFPSProjectile_Statics; \
public: \
	DECLARE_CLASS(AHyperFPSProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperFPS"), NO_API) \
	DECLARE_SERIALIZER(AHyperFPSProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AHyperFPSProjectile(AHyperFPSProjectile&&); \
	AHyperFPSProjectile(const AHyperFPSProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHyperFPSProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHyperFPSProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHyperFPSProjectile) \
	NO_API virtual ~AHyperFPSProjectile();


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_12_PROLOG
#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYPERFPS_API UClass* StaticClass<class AHyperFPSProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
