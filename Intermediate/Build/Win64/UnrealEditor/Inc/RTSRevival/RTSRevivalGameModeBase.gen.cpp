// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTSRevival/RTSRevivalGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTSRevivalGameModeBase() {}
// Cross Module References
	RTSREVIVAL_API UClass* Z_Construct_UClass_ARTSRevivalGameModeBase_NoRegister();
	RTSREVIVAL_API UClass* Z_Construct_UClass_ARTSRevivalGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RTSRevival();
// End Cross Module References
	void ARTSRevivalGameModeBase::StaticRegisterNativesARTSRevivalGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARTSRevivalGameModeBase);
	UClass* Z_Construct_UClass_ARTSRevivalGameModeBase_NoRegister()
	{
		return ARTSRevivalGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARTSRevivalGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARTSRevivalGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RTSRevival,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARTSRevivalGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "RTSRevivalGameModeBase.h" },
		{ "ModuleRelativePath", "RTSRevivalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARTSRevivalGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARTSRevivalGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARTSRevivalGameModeBase_Statics::ClassParams = {
		&ARTSRevivalGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARTSRevivalGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARTSRevivalGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARTSRevivalGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ARTSRevivalGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARTSRevivalGameModeBase.OuterSingleton, Z_Construct_UClass_ARTSRevivalGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARTSRevivalGameModeBase.OuterSingleton;
	}
	template<> RTSREVIVAL_API UClass* StaticClass<ARTSRevivalGameModeBase>()
	{
		return ARTSRevivalGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARTSRevivalGameModeBase);
	struct Z_CompiledInDeferFile_FID_RTSRevival_Source_RTSRevival_RTSRevivalGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSRevival_Source_RTSRevival_RTSRevivalGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARTSRevivalGameModeBase, ARTSRevivalGameModeBase::StaticClass, TEXT("ARTSRevivalGameModeBase"), &Z_Registration_Info_UClass_ARTSRevivalGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARTSRevivalGameModeBase), 1064227924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RTSRevival_Source_RTSRevival_RTSRevivalGameModeBase_h_590784190(TEXT("/Script/RTSRevival"),
		Z_CompiledInDeferFile_FID_RTSRevival_Source_RTSRevival_RTSRevivalGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RTSRevival_Source_RTSRevival_RTSRevivalGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
