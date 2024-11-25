// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HyperFPSWeaponComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AHyperFPSCharacter;
#ifdef HYPERFPS_HyperFPSWeaponComponent_generated_h
#error "HyperFPSWeaponComponent.generated.h already included, missing '#pragma once' in HyperFPSWeaponComponent.h"
#endif
#define HYPERFPS_HyperFPSWeaponComponent_generated_h

#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHyperFPSWeaponComponent(); \
	friend struct Z_Construct_UClass_UHyperFPSWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UHyperFPSWeaponComponent, USkeletalMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperFPS"), NO_API) \
	DECLARE_SERIALIZER(UHyperFPSWeaponComponent)


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHyperFPSWeaponComponent(UHyperFPSWeaponComponent&&); \
	UHyperFPSWeaponComponent(const UHyperFPSWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHyperFPSWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHyperFPSWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHyperFPSWeaponComponent) \
	NO_API virtual ~UHyperFPSWeaponComponent();


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_11_PROLOG
#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYPERFPS_API UClass* StaticClass<class UHyperFPSWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
