// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniInputTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniInputTypes() {}
// Cross Module References
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniXformType;
	static UEnum* EHoudiniXformType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniXformType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniXformType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>()
	{
		return EHoudiniXformType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators[] = {
		{ "EHoudiniXformType::None", (int64)EHoudiniXformType::None },
		{ "EHoudiniXformType::IntoThisObject", (int64)EHoudiniXformType::IntoThisObject },
		{ "EHoudiniXformType::Auto", (int64)EHoudiniXformType::Auto },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams[] = {
		{ "Auto.Name", "EHoudiniXformType::Auto" },
		{ "IntoThisObject.Name", "EHoudiniXformType::IntoThisObject" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "None.Name", "EHoudiniXformType::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniXformType",
		"EHoudiniXformType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniXformType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings;
class UScriptStruct* FHoudiniInputObjectSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniInputObjectSettings"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniInputObjectSettings>()
{
	return FHoudiniInputObjectSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_KeepWorldTransform_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_KeepWorldTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReference_MetaData[];
#endif
		static void NewProp_bImportAsReference_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceRotScaleEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceRotScaleEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceBboxEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceBboxEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bImportAsReferenceMaterialEnabled_MetaData[];
#endif
		static void NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bImportAsReferenceMaterialEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportLODs_MetaData[];
#endif
		static void NewProp_bExportLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportSockets_MetaData[];
#endif
		static void NewProp_bExportSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportSockets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNaniteFallbackMesh_MetaData[];
#endif
		static void NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNaniteFallbackMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportColliders_MetaData[];
#endif
		static void NewProp_bExportColliders_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportColliders;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportMaterialParameters_MetaData[];
#endif
		static void NewProp_bExportMaterialParameters_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportMaterialParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[];
#endif
		static void NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddRotAndScaleAttributesOnCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseLegacyInputCurves_MetaData[];
#endif
		static void NewProp_bUseLegacyInputCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLegacyInputCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnrealSplineResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UnrealSplineResolution;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeExportType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeExportType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeExportType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportSelectionOnly_MetaData[];
#endif
		static void NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportSelectionOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectComponent_MetaData[];
#endif
		static void NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportMaterials_MetaData[];
#endif
		static void NewProp_bLandscapeExportMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportLighting_MetaData[];
#endif
		static void NewProp_bLandscapeExportLighting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportLighting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportNormalizedUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportNormalizedUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeExportTileUVs_MetaData[];
#endif
		static void NewProp_bLandscapeExportTileUVs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeExportTileUVs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeAutoSelectSplines_MetaData[];
#endif
		static void NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeAutoSelectSplines;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportControlPoints_MetaData[];
#endif
		static void NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportControlPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData[];
#endif
		static void NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportLeftRightCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData[];
#endif
		static void NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeSplinesExportSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeSplineMeshComponents_MetaData[];
#endif
		static void NewProp_bMergeSplineMeshComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExportPerEditLayerData_MetaData[];
#endif
		static void NewProp_bExportPerEditLayerData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExportPerEditLayerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Struct of input settings that affect object exporting to Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Struct of input settings that affect object exporting to Houdini" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInputObjectSettings>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform = { "KeepWorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInputObjectSettings, KeepWorldTransform), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniXformType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_MetaData)) }; // 526419163
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_MetaData[] = {
		{ "Comment", "// Indicates that all the input objects are imported to Houdini as references instead of actual geo\n// (for Geo/World/Asset input types only)\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates that all the input objects are imported to Houdini as references instead of actual geo\n(for Geo/World/Asset input types only)" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReference = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference = { "bImportAsReference", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData[] = {
		{ "Comment", "// Indicates that whether or not to add the rot / scale attributes for reference imports\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates that whether or not to add the rot / scale attributes for reference imports" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceRotScaleEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled = { "bImportAsReferenceRotScaleEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData[] = {
		{ "Comment", "// Indicates whether or not to add bbox attributes for reference imports\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates whether or not to add bbox attributes for reference imports" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceBboxEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled = { "bImportAsReferenceBboxEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData[] = {
		{ "Comment", "// Indicates whether or not to add material attributes for reference imports\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates whether or not to add material attributes for reference imports" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bImportAsReferenceMaterialEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled = { "bImportAsReferenceMaterialEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_MetaData[] = {
		{ "Comment", "// Indicates that all LODs in the input should be marshalled to Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates that all LODs in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs = { "bExportLODs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_MetaData[] = {
		{ "Comment", "// Indicates that all sockets in the input should be marshalled to Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates that all sockets in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets = { "bExportSockets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData[] = {
		{ "Comment", "// Override property for preferring the Nanite fallback mesh when using a Nanite geometry as input\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Override property for preferring the Nanite fallback mesh when using a Nanite geometry as input" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bPreferNaniteFallbackMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh = { "bPreferNaniteFallbackMesh", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_MetaData[] = {
		{ "Comment", "// Indicates that all colliders in the input should be marshalled to Houdini\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates that all colliders in the input should be marshalled to Houdini" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportColliders = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders = { "bExportColliders", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_MetaData[] = {
		{ "Comment", "// Indicates that material parameters should be exported as attributes\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates that material parameters should be exported as attributes" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportMaterialParameters = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters = { "bExportMaterialParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData[] = {
		{ "Comment", "// Set this to true to add rot and scale attributes on curve inputs.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Set this to true to add rot and scale attributes on curve inputs." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bAddRotAndScaleAttributesOnCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves = { "bAddRotAndScaleAttributesOnCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData[] = {
		{ "Comment", "// Set this to true to use legacy (curve::1.0) input curves\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Set this to true to use legacy (curve::1.0) input curves" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bUseLegacyInputCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves = { "bUseLegacyInputCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution_MetaData[] = {
		{ "Comment", "// Resolution used when converting unreal splines to houdini curves\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Resolution used when converting unreal splines to houdini curves" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution = { "UnrealSplineResolution", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInputObjectSettings, UnrealSplineResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_MetaData[] = {
		{ "Comment", "// Indicates if the landscape should be exported as heightfield, mesh or points\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Indicates if the landscape should be exported as heightfield, mesh or points" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType = { "LandscapeExportType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInputObjectSettings, LandscapeExportType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeExportType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_MetaData)) }; // 969116104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData[] = {
		{ "Comment", "// Is set to true when landscape input is set to selection only.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Is set to true when landscape input is set to selection only." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportSelectionOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly = { "bLandscapeExportSelectionOnly", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData[] = {
		{ "Comment", "// Is set to true when the automatic selection of landscape component is active\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Is set to true when the automatic selection of landscape component is active" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeAutoSelectComponent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent = { "bLandscapeAutoSelectComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_MetaData[] = {
		{ "Comment", "// Is set to true when materials are to be exported.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Is set to true when materials are to be exported." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials = { "bLandscapeExportMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_MetaData[] = {
		{ "Comment", "// Is set to true when lightmap information export is desired.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Is set to true when lightmap information export is desired." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportLighting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting = { "bLandscapeExportLighting", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData[] = {
		{ "Comment", "// Is set to true when uvs should be exported in [0,1] space.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Is set to true when uvs should be exported in [0,1] space." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportNormalizedUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs = { "bLandscapeExportNormalizedUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_MetaData[] = {
		{ "Comment", "// Is set to true when uvs should be exported for each tile separately.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "Is set to true when uvs should be exported for each tile separately." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeExportTileUVs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs = { "bLandscapeExportTileUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_MetaData[] = {
		{ "Comment", "// If true, also export a landscape's splines\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "If true, also export a landscape's splines" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeAutoSelectSplines = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines = { "bLandscapeAutoSelectSplines", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_MetaData[] = {
		{ "Comment", "// If true, send a separate control point cloud of the landscape splines control points.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "If true, send a separate control point cloud of the landscape splines control points." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportControlPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints = { "bLandscapeSplinesExportControlPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData[] = {
		{ "Comment", "// If true, export left and right curves as well\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "If true, export left and right curves as well" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportLeftRightCurves = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves = { "bLandscapeSplinesExportLeftRightCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData[] = {
		{ "Comment", "// If true, export the spline mesh components of landscape splines\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "If true, export the spline mesh components of landscape splines" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bLandscapeSplinesExportSplineMeshComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents = { "bLandscapeSplinesExportSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_MetaData[] = {
		{ "Comment", "// If true, the deformed meshes of all spline mesh components of an actor are merged into temporary input mesh.\n// If false, the meshes are sent individually.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "If true, the deformed meshes of all spline mesh components of an actor are merged into temporary input mesh.\nIf false, the meshes are sent individually." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bMergeSplineMeshComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents = { "bMergeSplineMeshComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPerEditLayerData_MetaData[] = {
		{ "Comment", "// If enabled, target layers are exported per Edit Layer.\n" },
		{ "ModuleRelativePath", "Private/HoudiniInputTypes.h" },
		{ "ToolTip", "If enabled, target layers are exported per Edit Layer." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPerEditLayerData_SetBit(void* Obj)
	{
		((FHoudiniInputObjectSettings*)Obj)->bExportPerEditLayerData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPerEditLayerData = { "bExportPerEditLayerData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInputObjectSettings), &Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPerEditLayerData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPerEditLayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPerEditLayerData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_KeepWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceRotScaleEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceBboxEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bImportAsReferenceMaterialEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportSockets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bPreferNaniteFallbackMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportColliders,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportMaterialParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bAddRotAndScaleAttributesOnCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bUseLegacyInputCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_UnrealSplineResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_LandscapeExportType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportSelectionOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportLighting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportNormalizedUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeExportTileUVs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeAutoSelectSplines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportControlPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportLeftRightCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bLandscapeSplinesExportSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bMergeSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewProp_bExportPerEditLayerData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniInputObjectSettings",
		sizeof(FHoudiniInputObjectSettings),
		alignof(FHoudiniInputObjectSettings),
		Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInputObjectSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo[] = {
		{ EHoudiniXformType_StaticEnum, TEXT("EHoudiniXformType"), &Z_Registration_Info_UEnum_EHoudiniXformType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 526419163U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniInputObjectSettings::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInputObjectSettings_Statics::NewStructOps, TEXT("HoudiniInputObjectSettings"), &Z_Registration_Info_UScriptStruct_HoudiniInputObjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInputObjectSettings), 4211452138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_4252510232(TEXT("/Script/HoudiniEngineRuntime"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
