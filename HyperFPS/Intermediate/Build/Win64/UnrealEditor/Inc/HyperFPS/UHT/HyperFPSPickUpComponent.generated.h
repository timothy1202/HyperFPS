// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HyperFPSPickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AHyperFPSCharacter;
class UPrimitiveComponent;
struct FHitResult;
#ifdef HYPERFPS_HyperFPSPickUpComponent_generated_h
#error "HyperFPSPickUpComponent.generated.h already included, missing '#pragma once' in HyperFPSPickUpComponent.h"
#endif
#define HYPERFPS_HyperFPSPickUpComponent_generated_h

#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_12_DELEGATE \
HYPERFPS_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AHyperFPSCharacter* PickUpCharacter);


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHyperFPSPickUpComponent(); \
	friend struct Z_Construct_UClass_UHyperFPSPickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UHyperFPSPickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HyperFPS"), NO_API) \
	DECLARE_SERIALIZER(UHyperFPSPickUpComponent)


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHyperFPSPickUpComponent(UHyperFPSPickUpComponent&&); \
	UHyperFPSPickUpComponent(const UHyperFPSPickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHyperFPSPickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHyperFPSPickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHyperFPSPickUpComponent) \
	NO_API virtual ~UHyperFPSPickUpComponent();


#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_14_PROLOG
#define FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HYPERFPS_API UClass* StaticClass<class UHyperFPSPickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSPickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
