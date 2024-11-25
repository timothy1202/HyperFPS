// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHyperFPS_init() {}
	HYPERFPS_API UFunction* Z_Construct_UDelegateFunction_HyperFPS_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HyperFPS;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HyperFPS()
	{
		if (!Z_Registration_Info_UPackage__Script_HyperFPS.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_HyperFPS_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HyperFPS",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x14763811,
				0x4CC2BC87,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HyperFPS.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HyperFPS.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HyperFPS(Z_Construct_UPackage__Script_HyperFPS, TEXT("/Script/HyperFPS"), Z_Registration_Info_UPackage__Script_HyperFPS, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x14763811, 0x4CC2BC87));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
