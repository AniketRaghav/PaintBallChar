// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniEngineRuntime_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HoudiniEngineRuntime;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime()
	{
		if (!Z_Registration_Info_UPackage__Script_HoudiniEngineRuntime.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/HoudiniEngineRuntime",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x479CDEBC,
				0x75EE605F,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HoudiniEngineRuntime.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_HoudiniEngineRuntime.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HoudiniEngineRuntime(Z_Construct_UPackage__Script_HoudiniEngineRuntime, TEXT("/Script/HoudiniEngineRuntime"), Z_Registration_Info_UPackage__Script_HoudiniEngineRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x479CDEBC, 0x75EE605F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
