// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HyperFPS/MainHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainHUD() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AHUD();
HYPERFPS_API UClass* Z_Construct_UClass_AMainHUD();
HYPERFPS_API UClass* Z_Construct_UClass_AMainHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_HyperFPS();
// End Cross Module References

// Begin Class AMainHUD
void AMainHUD::StaticRegisterNativesAMainHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainHUD);
UClass* Z_Construct_UClass_AMainHUD_NoRegister()
{
	return AMainHUD::StaticClass();
}
struct Z_Construct_UClass_AMainHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "MainHUD.h" },
		{ "ModuleRelativePath", "MainHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_HyperFPS,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainHUD_Statics::ClassParams = {
	&AMainHUD::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainHUD()
{
	if (!Z_Registration_Info_UClass_AMainHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainHUD.OuterSingleton, Z_Construct_UClass_AMainHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainHUD.OuterSingleton;
}
template<> HYPERFPS_API UClass* StaticClass<AMainHUD>()
{
	return AMainHUD::StaticClass();
}
AMainHUD::AMainHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainHUD);
AMainHUD::~AMainHUD() {}
// End Class AMainHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainHUD, AMainHUD::StaticClass, TEXT("AMainHUD"), &Z_Registration_Info_UClass_AMainHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainHUD), 857695728U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainHUD_h_1372511696(TEXT("/Script/HyperFPS"),
	Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Git_new_HyperFPS_HyperFPS_Source_HyperFPS_MainHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
