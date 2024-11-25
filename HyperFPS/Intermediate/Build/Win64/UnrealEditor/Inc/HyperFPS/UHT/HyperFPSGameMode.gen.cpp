// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperFPS/HyperFPSGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHyperFPSGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HYPERFPS_API UClass* Z_Construct_UClass_AHyperFPSGameMode();
HYPERFPS_API UClass* Z_Construct_UClass_AHyperFPSGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HyperFPS();
// End Cross Module References

// Begin Class AHyperFPSGameMode
void AHyperFPSGameMode::StaticRegisterNativesAHyperFPSGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHyperFPSGameMode);
UClass* Z_Construct_UClass_AHyperFPSGameMode_NoRegister()
{
	return AHyperFPSGameMode::StaticClass();
}
struct Z_Construct_UClass_AHyperFPSGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HyperFPSGameMode.h" },
		{ "ModuleRelativePath", "HyperFPSGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHyperFPSGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AHyperFPSGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HyperFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHyperFPSGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHyperFPSGameMode_Statics::ClassParams = {
	&AHyperFPSGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHyperFPSGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHyperFPSGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHyperFPSGameMode()
{
	if (!Z_Registration_Info_UClass_AHyperFPSGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHyperFPSGameMode.OuterSingleton, Z_Construct_UClass_AHyperFPSGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHyperFPSGameMode.OuterSingleton;
}
template<> HYPERFPS_API UClass* StaticClass<AHyperFPSGameMode>()
{
	return AHyperFPSGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHyperFPSGameMode);
AHyperFPSGameMode::~AHyperFPSGameMode() {}
// End Class AHyperFPSGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHyperFPSGameMode, AHyperFPSGameMode::StaticClass, TEXT("AHyperFPSGameMode"), &Z_Registration_Info_UClass_AHyperFPSGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHyperFPSGameMode), 3939455492U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSGameMode_h_718915346(TEXT("/Script/HyperFPS"),
	Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_HyperFPSGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
