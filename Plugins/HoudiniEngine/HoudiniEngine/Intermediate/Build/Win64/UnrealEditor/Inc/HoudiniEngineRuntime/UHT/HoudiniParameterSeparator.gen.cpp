// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniParameterSeparator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniParameterSeparator() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameter();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterSeparator();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniParameterSeparator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	void UHoudiniParameterSeparator::StaticRegisterNativesUHoudiniParameterSeparator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniParameterSeparator);
	UClass* Z_Construct_UClass_UHoudiniParameterSeparator_NoRegister()
	{
		return UHoudiniParameterSeparator::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniParameterSeparator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniParameterSeparator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniParameterSeparator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniParameterSeparator.h" },
		{ "ModuleRelativePath", "Private/HoudiniParameterSeparator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniParameterSeparator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniParameterSeparator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniParameterSeparator_Statics::ClassParams = {
		&UHoudiniParameterSeparator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniParameterSeparator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniParameterSeparator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniParameterSeparator()
	{
		if (!Z_Registration_Info_UClass_UHoudiniParameterSeparator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniParameterSeparator.OuterSingleton, Z_Construct_UClass_UHoudiniParameterSeparator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniParameterSeparator.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniParameterSeparator>()
	{
		return UHoudiniParameterSeparator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniParameterSeparator);
	UHoudiniParameterSeparator::~UHoudiniParameterSeparator() {}
	struct Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniParameterSeparator, UHoudiniParameterSeparator::StaticClass, TEXT("UHoudiniParameterSeparator"), &Z_Registration_Info_UClass_UHoudiniParameterSeparator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniParameterSeparator), 4279837552U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_350231929(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniParameterSeparator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
