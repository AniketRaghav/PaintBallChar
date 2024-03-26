// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HoudiniEngineRuntime/Private/HoudiniOutput.h"
#include "HoudiniEngineRuntime/Private/HoudiniGeoPartObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoudiniOutput() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELevelInstanceCreationType();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeOutput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeOutput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput();
	HOUDINIENGINERUNTIME_API UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType();
	HOUDINIENGINERUNTIME_API UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniExtents();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniGeoPartObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniHLODLayer();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutput();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject();
	HOUDINIENGINERUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeSplineActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSplineSegment_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HoudiniEngineRuntime();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoudiniCurveOutputType;
	static UEnum* EHoudiniCurveOutputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("EHoudiniCurveOutputType"));
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveOutputType.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniCurveOutputType>()
	{
		return EHoudiniCurveOutputType_StaticEnum();
	}
	struct Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enumerators[] = {
		{ "EHoudiniCurveOutputType::UnrealSpline", (int64)EHoudiniCurveOutputType::UnrealSpline },
		{ "EHoudiniCurveOutputType::HoudiniSpline", (int64)EHoudiniCurveOutputType::HoudiniSpline },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enum_MetaDataParams[] = {
		{ "HoudiniSpline.Name", "EHoudiniCurveOutputType::HoudiniSpline" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "UnrealSpline.Name", "EHoudiniCurveOutputType::UnrealSpline" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		"EHoudiniCurveOutputType",
		"EHoudiniCurveOutputType",
		Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType()
	{
		if (!Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton, Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHoudiniCurveOutputType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties;
class UScriptStruct* FHoudiniCurveOutputProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniCurveOutputProperties"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniCurveOutputProperties>()
{
	return FHoudiniCurveOutputProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurveOutputType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveOutputType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveOutputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumPoints_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClosed_MetaData[];
#endif
		static void NewProp_bClosed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClosed;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveType;
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CurveMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurveMethod;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniCurveOutputProperties>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_MetaData[] = {
		{ "Comment", "// Curve output properties\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Curve output properties" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType = { "CurveOutputType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveOutputType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveOutputType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_MetaData)) }; // 4182463941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniCurveOutputProperties, NumPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit(void* Obj)
	{
		((FHoudiniCurveOutputProperties*)Obj)->bClosed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed = { "bClosed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniCurveOutputProperties), &Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed_MetaData)) };
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType = { "CurveType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_MetaData)) }; // 4285111500
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod = { "CurveMethod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniCurveOutputProperties, CurveMethod), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniCurveMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_MetaData)) }; // 1134644187
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveOutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_NumPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_bClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewProp_CurveMethod,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniCurveOutputProperties",
		sizeof(FHoudiniCurveOutputProperties),
		alignof(FHoudiniCurveOutputProperties),
		Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties.InnerSingleton;
	}
	void UHoudiniLandscapePtr::StaticRegisterNativesUHoudiniLandscapePtr()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapePtr);
	UClass* Z_Construct_UClass_UHoudiniLandscapePtr_NoRegister()
	{
		return UHoudiniLandscapePtr::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniLandscapePtr_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSoftPtr_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LandscapeSoftPtr;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BakeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BakeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditLayerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_EditLayerName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr = { "LandscapeSoftPtr", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapePtr, LandscapeSoftPtr), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType = { "BakeType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapePtr, BakeType), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniLandscapeOutputBakeType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_MetaData)) }; // 3006034418
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName_MetaData[] = {
		{ "Comment", "// Edit layer to which this output corresponds, if applicable. \n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Edit layer to which this output corresponds, if applicable." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName = { "EditLayerName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapePtr, EditLayerName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_LandscapeSoftPtr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_BakeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapePtr_Statics::NewProp_EditLayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniLandscapePtr_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapePtr>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams = {
		&UHoudiniLandscapePtr::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapePtr_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniLandscapePtr()
	{
		if (!Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapePtr_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniLandscapePtr.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapePtr>()
	{
		return UHoudiniLandscapePtr::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapePtr);
	UHoudiniLandscapePtr::~UHoudiniLandscapePtr() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniExtents;
class UScriptStruct* FHoudiniExtents::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniExtents.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniExtents.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniExtents, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniExtents"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniExtents.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniExtents>()
{
	return FHoudiniExtents::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniExtents_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniExtents_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniExtents>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Min_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniExtents, Min), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Max_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniExtents, Max), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Max_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniExtents_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewProp_Max,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniExtents_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniExtents",
		sizeof(FHoudiniExtents),
		alignof(FHoudiniExtents),
		Z_Construct_UScriptStruct_FHoudiniExtents_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniExtents_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniExtents()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniExtents.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniExtents.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniExtents_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniExtents.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer;
class UScriptStruct* FHoudiniClearedTargetLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniClearedTargetLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniClearedTargetLayer>()
{
	return FHoudiniClearedTargetLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLayers_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayers_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_TargetLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniClearedTargetLayer>();
	}
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_ElementProp = { "TargetLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers = { "TargetLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniClearedTargetLayer, TargetLayers), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewProp_TargetLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniClearedTargetLayer",
		sizeof(FHoudiniClearedTargetLayer),
		alignof(FHoudiniClearedTargetLayer),
		Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers;
class UScriptStruct* FHoudiniClearedEditLayers::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniClearedEditLayers"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniClearedEditLayers>()
{
	return FHoudiniClearedEditLayers::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditLayers_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_EditLayers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditLayers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EditLayers;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniClearedEditLayers>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_ValueProp = { "EditLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer, METADATA_PARAMS(nullptr, 0) }; // 2714659071
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_Key_KeyProp = { "EditLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers = { "EditLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniClearedEditLayers, EditLayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_MetaData)) }; // 2714659071
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewProp_EditLayers,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniClearedEditLayers",
		sizeof(FHoudiniClearedEditLayers),
		alignof(FHoudiniClearedEditLayers),
		Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniClearedEditLayers()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers.InnerSingleton;
	}
	void UHoudiniLandscapeTargetLayerOutput::StaticRegisterNativesUHoudiniLandscapeTargetLayerOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeTargetLayerOutput);
	UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister()
	{
		return UHoudiniLandscapeTargetLayerOutput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedEditLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedEditLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CookedEditLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CookedEditLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetLayer_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TargetLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Extents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClearLayer_MetaData[];
#endif
		static void NewProp_bClearLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearLayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreatedLandscape_MetaData[];
#endif
		static void NewProp_bCreatedLandscape_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreatedLandscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCookedLayerRequiresBaking_MetaData[];
#endif
		static void NewProp_bCookedLayerRequiresBaking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCookedLayerRequiresBaking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedLandscapeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedLandscapeName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfoObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfoObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerInfoObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeOutlinerFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeOutlinerFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeFolder_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeFolder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWriteLockedLayers_MetaData[];
#endif
		static void NewProp_bWriteLockedLayers_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteLockedLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLockLayer_MetaData[];
#endif
		static void NewProp_bLockLayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockLayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Landscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Landscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LandscapeProxy_MetaData[] = {
		{ "Comment", "// Parent Landscape\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Parent Landscape" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LandscapeProxy = { "LandscapeProxy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, LandscapeProxy), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LandscapeProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LandscapeProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedEditLayer_MetaData[] = {
		{ "Comment", "// Landscape Proxy\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Landscape Proxy" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedEditLayer = { "BakedEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, BakedEditLayer), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedEditLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedEditLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_CookedEditLayer_MetaData[] = {
		{ "Comment", "// Final baked layer name\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Final baked layer name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_CookedEditLayer = { "CookedEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, CookedEditLayer), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_CookedEditLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_CookedEditLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_TargetLayer_MetaData[] = {
		{ "Comment", "// Temp cooked layer name\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Temp cooked layer name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_TargetLayer = { "TargetLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, TargetLayer), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_TargetLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_TargetLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Extents_MetaData[] = {
		{ "Comment", "// Target layer name\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Target layer name" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Extents = { "Extents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, Extents), Z_Construct_UScriptStruct_FHoudiniExtents, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Extents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Extents_MetaData)) }; // 912651266
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer_MetaData[] = {
		{ "Comment", "// Extents of the grid updated\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Extents of the grid updated" },
	};
#endif
	void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer_SetBit(void* Obj)
	{
		((UHoudiniLandscapeTargetLayerOutput*)Obj)->bClearLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer = { "bClearLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape_SetBit(void* Obj)
	{
		((UHoudiniLandscapeTargetLayerOutput*)Obj)->bCreatedLandscape = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape = { "bCreatedLandscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking_SetBit(void* Obj)
	{
		((UHoudiniLandscapeTargetLayerOutput*)Obj)->bCookedLayerRequiresBaking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking = { "bCookedLayerRequiresBaking", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedLandscapeName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedLandscapeName = { "BakedLandscapeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, BakedLandscapeName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedLandscapeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedLandscapeName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects_Inner = { "LayerInfoObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects = { "LayerInfoObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, LayerInfoObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeOutlinerFolder_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeOutlinerFolder = { "BakeOutlinerFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, BakeOutlinerFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeOutlinerFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeOutlinerFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeFolder_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeFolder = { "BakeFolder", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, BakeFolder), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeFolder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_MaterialInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeTargetLayerOutput, MaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_MaterialInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_MaterialInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers_SetBit(void* Obj)
	{
		((UHoudiniLandscapeTargetLayerOutput*)Obj)->bWriteLockedLayers = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers = { "bWriteLockedLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer_SetBit(void* Obj)
	{
		((UHoudiniLandscapeTargetLayerOutput*)Obj)->bLockLayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer = { "bLockLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniLandscapeTargetLayerOutput), &Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Landscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LandscapeProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedEditLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_CookedEditLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_TargetLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_Extents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bClearLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCreatedLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bCookedLayerRequiresBaking,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakedLandscapeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_LayerInfoObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeOutlinerFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_BakeFolder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_MaterialInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bWriteLockedLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::NewProp_bLockLayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeTargetLayerOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::ClassParams = {
		&UHoudiniLandscapeTargetLayerOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeTargetLayerOutput>()
	{
		return UHoudiniLandscapeTargetLayerOutput::StaticClass();
	}
	UHoudiniLandscapeTargetLayerOutput::UHoudiniLandscapeTargetLayerOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeTargetLayerOutput);
	UHoudiniLandscapeTargetLayerOutput::~UHoudiniLandscapeTargetLayerOutput() {}
	void UHoudiniLandscapeOutput::StaticRegisterNativesUHoudiniLandscapeOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeOutput);
	UClass* Z_Construct_UClass_UHoudiniLandscapeOutput_NoRegister()
	{
		return UHoudiniLandscapeOutput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniLandscapeOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Layers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreated_MetaData[];
#endif
		static void NewProp_bCreated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName = { "BakedName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeOutput, BakedName), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeOutput, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_SetBit(void* Obj)
	{
		((UHoudiniLandscapeOutput*)Obj)->bCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated = { "bCreated", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniLandscapeOutput), &Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Landscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_BakedName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_Layers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::NewProp_bCreated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::ClassParams = {
		&UHoudiniLandscapeOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniLandscapeOutput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniLandscapeOutput.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeOutput>()
	{
		return UHoudiniLandscapeOutput::StaticClass();
	}
	UHoudiniLandscapeOutput::UHoudiniLandscapeOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeOutput);
	UHoudiniLandscapeOutput::~UHoudiniLandscapeOutput() {}
	void UHoudiniLandscapeSplineTargetLayerOutput::StaticRegisterNativesUHoudiniLandscapeSplineTargetLayerOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeSplineTargetLayerOutput);
	UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister()
	{
		return UHoudiniLandscapeSplineTargetLayerOutput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AfterEditLayer_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AfterEditLayer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer = { "AfterEditLayer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplineTargetLayerOutput, AfterEditLayer), METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplineTargetLayerOutput, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_AfterEditLayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::NewProp_Segments,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeSplineTargetLayerOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::ClassParams = {
		&UHoudiniLandscapeSplineTargetLayerOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeSplineTargetLayerOutput>()
	{
		return UHoudiniLandscapeSplineTargetLayerOutput::StaticClass();
	}
	UHoudiniLandscapeSplineTargetLayerOutput::UHoudiniLandscapeSplineTargetLayerOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeSplineTargetLayerOutput);
	UHoudiniLandscapeSplineTargetLayerOutput::~UHoudiniLandscapeSplineTargetLayerOutput() {}
	void UHoudiniLandscapeSplinesOutput::StaticRegisterNativesUHoudiniLandscapeSplinesOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniLandscapeSplinesOutput);
	UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_NoRegister()
	{
		return UHoudiniLandscapeSplinesOutput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Landscape;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplineActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplineActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplinesComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerOutputs_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LayerOutputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LayerOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LayerOutputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, Landscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy = { "LandscapeProxy", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeProxy), Z_Construct_UClass_ALandscapeProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor = { "LandscapeSplineActor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeSplineActor), Z_Construct_UClass_ALandscapeSplineActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent = { "LandscapeSplinesComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LandscapeSplinesComponent), Z_Construct_UClass_ULandscapeSplinesComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_ValueProp = { "LayerOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_Key_KeyProp = { "LayerOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs = { "LayerOutputs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, LayerOutputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeSplineSegment_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULandscapeSplineControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniLandscapeSplinesOutput, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Landscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplineActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LandscapeSplinesComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_LayerOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_Segments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::NewProp_ControlPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniLandscapeSplinesOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::ClassParams = {
		&UHoudiniLandscapeSplinesOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniLandscapeSplinesOutput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton, Z_Construct_UClass_UHoudiniLandscapeSplinesOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniLandscapeSplinesOutput>()
	{
		return UHoudiniLandscapeSplinesOutput::StaticClass();
	}
	UHoudiniLandscapeSplinesOutput::UHoudiniLandscapeSplinesOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniLandscapeSplinesOutput);
	UHoudiniLandscapeSplinesOutput::~UHoudiniLandscapeSplinesOutput() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier;
class UScriptStruct* FHoudiniOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniOutputObjectIdentifier>()
{
	return FHoudiniOutputObjectIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ObjectId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeoId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_GeoId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PartName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PrimitiveIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PointIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniOutputObjectIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId_MetaData[] = {
		{ "Comment", "// NodeId of corresponding Houdini Object.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "NodeId of corresponding Houdini Object." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId = { "ObjectId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, ObjectId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId_MetaData[] = {
		{ "Comment", "// NodeId of corresponding Houdini Geo.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "NodeId of corresponding Houdini Geo." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId = { "GeoId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, GeoId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId_MetaData[] = {
		{ "Comment", "// PartId\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "PartId" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PartId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData[] = {
		{ "Comment", "// String identifier for the split that created this\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "String identifier for the split that created this" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName_MetaData[] = {
		{ "Comment", "// Name of the part used to generate the output\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Name of the part used to generate the output" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName = { "PartName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PartName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex_MetaData[] = {
		{ "Comment", "// First valid primitive index for this output\n// (used to read generic attributes)\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "First valid primitive index for this output\n(used to read generic attributes)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex = { "PrimitiveIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PrimitiveIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex_MetaData[] = {
		{ "Comment", "// First valid point index for this output\n// (used to read generic attributes)\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "First valid point index for this output\n(used to read generic attributes)" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObjectIdentifier, PointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_ObjectId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_GeoId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PartName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PrimitiveIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewProp_PointIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniOutputObjectIdentifier",
		sizeof(FHoudiniOutputObjectIdentifier),
		alignof(FHoudiniOutputObjectIdentifier),
		Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier;
class UScriptStruct* FHoudiniBakedOutputObjectIdentifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutputObjectIdentifier"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutputObjectIdentifier>()
{
	return FHoudiniBakedOutputObjectIdentifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PartId_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PartId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplitIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SplitIdentifier;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutputObjectIdentifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId_MetaData[] = {
		{ "Comment", "// PartId\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "PartId" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId = { "PartId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObjectIdentifier, PartId), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData[] = {
		{ "Comment", "// String identifier for the split that created this\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "String identifier for the split that created this" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier = { "SplitIdentifier", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObjectIdentifier, SplitIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_PartId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewProp_SplitIdentifier,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniBakedOutputObjectIdentifier",
		sizeof(FHoudiniBakedOutputObjectIdentifier),
		alignof(FHoudiniBakedOutputObjectIdentifier),
		Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput;
class UScriptStruct* FHoudiniInstancedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniInstancedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniInstancedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniInstancedOutput>()
{
	return FHoudiniInstancedOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OriginalObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalObjectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalObjectIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalTransforms;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_VariationObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariationObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariationObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VariationTransformOffsets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariationTransformOffsets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariationTransformOffsets;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TransformVariationIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformVariationIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformVariationIndices;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OriginalInstanceIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalInstanceIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginalInstanceIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bChanged_MetaData[];
#endif
		static void NewProp_bChanged_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bChanged;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStale_MetaData[];
#endif
		static void NewProp_bStale_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStale;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUniformScaleLocked_MetaData[];
#endif
		static void NewProp_bUniformScaleLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUniformScaleLocked;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniInstancedOutput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject_MetaData[] = {
		{ "Comment", "// Original object used by the instancer.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Original object used by the instancer." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject = { "OriginalObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex = { "OriginalObjectIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalObjectIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_Inner = { "OriginalTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_MetaData[] = {
		{ "Comment", "// Original Instance transforms\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Original Instance transforms" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms = { "OriginalTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_Inner = { "VariationObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_MetaData[] = {
		{ "Comment", "// Variation objects currently used for instancing\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Variation objects currently used for instancing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects = { "VariationObjects", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutput, VariationObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_Inner = { "VariationTransformOffsets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_MetaData[] = {
		{ "Comment", "// Transform offsets, one for each variation.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Transform offsets, one for each variation." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets = { "VariationTransformOffsets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutput, VariationTransformOffsets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_Inner = { "TransformVariationIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_MetaData[] = {
		{ "Comment", "// Index of the variation used for each transform\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Index of the variation used for each transform" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices = { "TransformVariationIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutput, TransformVariationIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_Inner = { "OriginalInstanceIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_MetaData[] = {
		{ "Comment", "// Original Indices of the variation instances\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Original Indices of the variation instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices = { "OriginalInstanceIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniInstancedOutput, OriginalInstanceIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_MetaData[] = {
		{ "Comment", "// Indicates this instanced output's component should be recreated\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Indicates this instanced output's component should be recreated" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutput*)Obj)->bChanged = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged = { "bChanged", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_MetaData[] = {
		{ "Comment", "// Indicates this instanced output is stale and should be removed\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Indicates this instanced output is stale and should be removed" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutput*)Obj)->bStale = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale = { "bStale", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked_SetBit(void* Obj)
	{
		((FHoudiniInstancedOutput*)Obj)->bUniformScaleLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked = { "bUniformScaleLocked", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniInstancedOutput), &Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalObjectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_VariationTransformOffsets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_TransformVariationIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_OriginalInstanceIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bChanged,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bStale,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewProp_bUniformScaleLocked,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniInstancedOutput",
		sizeof(FHoudiniInstancedOutput),
		alignof(FHoudiniInstancedOutput),
		Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniInstancedOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams;
class UScriptStruct* FHoudiniLevelInstanceParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniLevelInstanceParams"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniLevelInstanceParams>()
{
	return FHoudiniLevelInstanceParams::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Parameters used to create the level instance.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Parameters used to create the level instance." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniLevelInstanceParams>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniLevelInstanceParams, Type), Z_Construct_UEnum_Engine_ELevelInstanceCreationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_MetaData)) }; // 4133885045
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName = { "OutputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniLevelInstanceParams, OutputName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewProp_OutputName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniLevelInstanceParams",
		sizeof(FHoudiniLevelInstanceParams),
		alignof(FHoudiniLevelInstanceParams),
		Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject;
class UScriptStruct* FHoudiniBakedOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutputObject>()
{
	return FHoudiniBakedOutputObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Blueprint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Blueprint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorBakeName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorBakeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedObject_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakedComponent;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstancedActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedActors;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InstancedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstancedComponents;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LandscapeLayers_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeLayers_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LandscapeLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FoliageInstancePositions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageInstancePositions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FoliageInstancePositions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelInstanceActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelInstanceActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Landscape_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Landscape;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutputObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor_MetaData[] = {
		{ "Comment", "// The actor that the baked output was associated with\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The actor that the baked output was associated with" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, Actor), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint_MetaData[] = {
		{ "Comment", "// The blueprint that baked output was associated with, if any\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The blueprint that baked output was associated with, if any" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, Blueprint), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName_MetaData[] = {
		{ "Comment", "// The intended bake actor name. The actor's actual name could have a numeric suffix for uniqueness.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The intended bake actor name. The actor's actual name could have a numeric suffix for uniqueness." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName = { "ActorBakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, ActorBakeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject_MetaData[] = {
		{ "Comment", "// The baked output asset\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The baked output asset" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject = { "BakedObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedObject), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent_MetaData[] = {
		{ "Comment", "// The baked output component \n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The baked output component" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent = { "BakedComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, BakedComponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_Inner = { "InstancedActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_MetaData[] = {
		{ "Comment", "// In the case of instance actor component baking, this is the array of instanced actors\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "In the case of instance actor component baking, this is the array of instanced actors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors = { "InstancedActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, InstancedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_Inner = { "InstancedComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_MetaData[] = {
		{ "Comment", "// In the case of mesh split instancer baking: this is the array of instance components\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "In the case of mesh split instancer baking: this is the array of instance components" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents = { "InstancedComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, InstancedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_ValueProp = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_Key_KeyProp = { "LandscapeLayers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_MetaData[] = {
		{ "Comment", "// For landscapes this is the previously bake layer info assets (layer name as key, soft object path as value)\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "For landscapes this is the previously bake layer info assets (layer name as key, soft object path as value)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, LandscapeLayers), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_Inner = { "FoliageInstancePositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_MetaData[] = {
		{ "Comment", "// Positions of Foliage instances; used for removal on rebake.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Positions of Foliage instances; used for removal on rebake." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions = { "FoliageInstancePositions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, FoliageInstancePositions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType_MetaData[] = {
		{ "Comment", "// Foliage Type (Baked or user-defined)\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Foliage Type (Baked or user-defined)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_Inner = { "LevelInstanceActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_MetaData[] = {
		{ "Comment", "// All exported level instance actors.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "All exported level instance actors." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors = { "LevelInstanceActors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, LevelInstanceActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape_MetaData[] = {
		{ "Comment", "// For landscape splines, this is the landscape that contains the splines.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "For landscape splines, this is the landscape that contains the splines." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape = { "Landscape", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutputObject, Landscape), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_ActorBakeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_BakedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_InstancedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LandscapeLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageInstancePositions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_FoliageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_LevelInstanceActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewProp_Landscape,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniBakedOutputObject",
		sizeof(FHoudiniBakedOutputObject),
		alignof(FHoudiniBakedOutputObject),
		Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutputObject()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniBakedOutput;
class UScriptStruct* FHoudiniBakedOutput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniBakedOutput, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniBakedOutput"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniBakedOutput>()
{
	return FHoudiniBakedOutput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakedOutputObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedOutputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BakedOutputObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Container to hold the map of baked objects. There should be one of\n// these for each UHoudiniOutput. We manage this separately from UHoudiniOutput so\n// that the \"previous/last\" bake objects can survive output reconstruction or PDG\n// dirty/dirty all operations.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Container to hold the map of baked objects. There should be one of\nthese for each UHoudiniOutput. We manage this separately from UHoudiniOutput so\nthat the \"previous/last\" bake objects can survive output reconstruction or PDG\ndirty/dirty all operations." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniBakedOutput>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject, METADATA_PARAMS(nullptr, 0) }; // 3453140568
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp = { "BakedOutputObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) }; // 2952593562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects = { "BakedOutputObjects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniBakedOutput, BakedOutputObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_MetaData)) }; // 2952593562 3453140568
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewProp_BakedOutputObjects,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniBakedOutput",
		sizeof(FHoudiniBakedOutput),
		alignof(FHoudiniBakedOutput),
		Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniBakedOutput()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniBakedOutput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniDataLayer;
class UScriptStruct* FHoudiniDataLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniDataLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniDataLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniDataLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniDataLayer>()
{
	return FHoudiniDataLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateIfNeeded_MetaData[];
#endif
		static void NewProp_bCreateIfNeeded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateIfNeeded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Information about the data the output is to be placed in.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Information about the data the output is to be placed in." },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniDataLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniDataLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_SetBit(void* Obj)
	{
		((FHoudiniDataLayer*)Obj)->bCreateIfNeeded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded = { "bCreateIfNeeded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniDataLayer), &Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewProp_bCreateIfNeeded,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniDataLayer",
		sizeof(FHoudiniDataLayer),
		alignof(FHoudiniDataLayer),
		Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniDataLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniDataLayer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniHLODLayer;
class UScriptStruct* FHoudiniHLODLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniHLODLayer, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniHLODLayer"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniHLODLayer>()
{
	return FHoudiniHLODLayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniHLODLayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniHLODLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniHLODLayer",
		sizeof(FHoudiniHLODLayer),
		alignof(FHoudiniHLODLayer),
		Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniHLODLayer()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniHLODLayer.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_HoudiniOutputObject;
class UScriptStruct* FHoudiniOutputObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FHoudiniOutputObject, (UObject*)Z_Construct_UPackage__Script_HoudiniEngineRuntime(), TEXT("HoudiniOutputObject"));
	}
	return Z_Registration_Info_UScriptStruct_HoudiniOutputObject.OuterSingleton;
}
template<> HOUDINIENGINERUNTIME_API UScriptStruct* StaticStruct<FHoudiniOutputObject>()
{
	return FHoudiniOutputObject::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputComponents;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_OutputActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutputComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProxyComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProxyComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bProxyIsCurrent_MetaData[];
#endif
		static void NewProp_bProxyIsCurrent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bProxyIsCurrent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsImplicit_MetaData[];
#endif
		static void NewProp_bIsImplicit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsImplicit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGeometryCollectionPiece_MetaData[];
#endif
		static void NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGeometryCollectionPiece;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollectionPieceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_GeometryCollectionPieceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BakeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveOutputProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurveOutputProperty;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedAttributes_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedAttributes_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedAttributes;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedTokens_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedTokens_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedTokens_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedTokens;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserFoliageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UserFoliageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FoliageType_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FoliageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataLayers;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HLODLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HLODLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HLODLayers;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelInstanceParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelInstanceParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHoudiniOutputObject>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject_MetaData[] = {
		{ "Comment", "// The main output object\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The main output object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject = { "OutputObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, OutputObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_Inner = { "OutputComponents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_MetaData[] = {
		{ "Comment", "// The main output component\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The main output component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents = { "OutputComponents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, OutputComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_Inner = { "OutputActors", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_MetaData[] = {
		{ "Comment", "// The main output component\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The main output component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors = { "OutputActors", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, OutputActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent = { "OutputComponent", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, OutputComponent_DEPRECATED), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject_MetaData[] = {
		{ "Comment", "// Proxy object\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Proxy object" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject = { "ProxyObject", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, ProxyObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent_MetaData[] = {
		{ "Comment", "// Proxy Component\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Proxy Component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent = { "ProxyComponent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, ProxyComponent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_MetaData[] = {
		{ "Comment", "// Mesh output properties\n// If this is true the proxy mesh is \"current\", \n// in other words, it is newer than the UStaticMesh\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Mesh output properties\nIf this is true the proxy mesh is \"current\",\nin other words, it is newer than the UStaticMesh" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit(void* Obj)
	{
		((FHoudiniOutputObject*)Obj)->bProxyIsCurrent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent = { "bProxyIsCurrent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_MetaData[] = {
		{ "Comment", "// Implicit output objects shouldn't be created as actors / components in the scene. \n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Implicit output objects shouldn't be created as actors / components in the scene." },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit(void* Obj)
	{
		((FHoudiniOutputObject*)Obj)->bIsImplicit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit = { "bIsImplicit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_MetaData[] = {
		{ "Comment", "// Is this mesh a part of a geometry collection?\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Is this mesh a part of a geometry collection?" },
	};
#endif
	void Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit(void* Obj)
	{
		((FHoudiniOutputObject*)Obj)->bIsGeometryCollectionPiece = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece = { "bIsGeometryCollectionPiece", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FHoudiniOutputObject), &Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName_MetaData[] = {
		{ "Comment", "// Associated geometry collection. Only valid if bIsGeometryCollectionPiece is true;\n// Cached on mesh generation to avoid a Houdini session requirement for baking\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Associated geometry collection. Only valid if bIsGeometryCollectionPiece is true;\nCached on mesh generation to avoid a Houdini session requirement for baking" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName = { "GeometryCollectionPieceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, GeometryCollectionPieceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName_MetaData[] = {
		{ "Comment", "// Bake Name override for this output object\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Bake Name override for this output object" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName = { "BakeName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, BakeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty = { "CurveOutputProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, CurveOutputProperty), Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty_MetaData)) }; // 2361326888
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp = { "CachedAttributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp = { "CachedAttributes_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_MetaData[] = {
		{ "Comment", "// NOTE: The idea behind CachedAttributes and CachedTokens is to\n// collect attributes (such as unreal_level_path and unreal_output_name)\n// and context-specific tokens (hda name, hda actor name, geo and part ids, tile_id, etc)\n// and cache them directly on the output object. When the object gets baked,\n// certain tokens can be updated specifically for the bake pass afterwhich the \n// the string / path attributes can be resolved with the updated tokens.\n//\n// A more concrete example:\n//  unreal_output_name = \"{hda_actor_name}_PurplePlants_{geo_id}_{part_id}\"\n//  unreal_level_path  = \"{out}/{hda_name}/{guid}/PurplePlants/{geo_id}/{part_id}\"\n// \n// All of the aforementions tokens and attributes would be cached on the output object\n// when it is being cooked so that the same values are available at bake time. During \n// a bake some tokens may be updated, such as `{out}` to change where assets get serialized.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "NOTE: The idea behind CachedAttributes and CachedTokens is to\ncollect attributes (such as unreal_level_path and unreal_output_name)\nand context-specific tokens (hda name, hda actor name, geo and part ids, tile_id, etc)\nand cache them directly on the output object. When the object gets baked,\ncertain tokens can be updated specifically for the bake pass afterwhich the\nthe string / path attributes can be resolved with the updated tokens.\n\nA more concrete example:\n unreal_output_name = \"{hda_actor_name}_PurplePlants_{geo_id}_{part_id}\"\n unreal_level_path  = \"{out}/{hda_name}/{guid}/PurplePlants/{geo_id}/{part_id}\"\n\nAll of the aforementions tokens and attributes would be cached on the output object\nwhen it is being cooked so that the same values are available at bake time. During\na bake some tokens may be updated, such as `{out}` to change where assets get serialized." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes = { "CachedAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, CachedAttributes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp = { "CachedTokens", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp = { "CachedTokens_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_MetaData[] = {
		{ "Comment", "// Cache any tokens here that is needed for string resolving\n// at bake time. \n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Cache any tokens here that is needed for string resolving\nat bake time." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens = { "CachedTokens", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, CachedTokens), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType_MetaData[] = {
		{ "Comment", "// Object that was instanced.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Object that was instanced." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType = { "UserFoliageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, UserFoliageType), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType_MetaData[] = {
		{ "Comment", "// Foliage Type was that used.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Foliage Type was that used." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, FoliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World_MetaData[] = {
		{ "Comment", "// World used when creating the output. This is used for Foliage may have no explicit objects\n// are created and so we cannot track the original world when we want to remove instances.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "World used when creating the output. This is used for Foliage may have no explicit objects\nare created and so we cannot track the original world when we want to remove instances." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_Inner = { "DataLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniDataLayer, METADATA_PARAMS(nullptr, 0) }; // 4164416104
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_MetaData[] = {
		{ "Comment", "// Data Layers which should be applied (during Baking only).\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Data Layers which should be applied (during Baking only)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers = { "DataLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, DataLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_MetaData)) }; // 4164416104
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_Inner = { "HLODLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniHLODLayer, METADATA_PARAMS(nullptr, 0) }; // 929473366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_MetaData[] = {
		{ "Comment", "// HLOD Layers which should be applied (during Baking only).\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "HLOD Layers which should be applied (during Baking only)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers = { "HLODLayers", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, HLODLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_MetaData)) }; // 929473366
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams = { "LevelInstanceParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FHoudiniOutputObject, LevelInstanceParams), Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams_MetaData)) }; // 2504465785
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_OutputComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_ProxyComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bProxyIsCurrent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsImplicit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_bIsGeometryCollectionPiece,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_GeometryCollectionPieceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_BakeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CurveOutputProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedAttributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_CachedTokens,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_UserFoliageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_FoliageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_DataLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_HLODLayers,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewProp_LevelInstanceParams,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
		nullptr,
		&NewStructOps,
		"HoudiniOutputObject",
		sizeof(FHoudiniOutputObject),
		alignof(FHoudiniOutputObject),
		Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHoudiniOutputObject()
	{
		if (!Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton, Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_HoudiniOutputObject.InnerSingleton;
	}
	void UHoudiniOutput::StaticRegisterNativesUHoudiniOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHoudiniOutput);
	UClass* Z_Construct_UClass_UHoudiniOutput_NoRegister()
	{
		return UHoudiniOutput::StaticClass();
	}
	struct Z_Construct_UClass_UHoudiniOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HoudiniGeoPartObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniGeoPartObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniGeoPartObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_OutputObjects;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputs_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancedOutputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancedOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InstancedOutputs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssignementMaterials_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignementMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignementMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_AssignementMaterials;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReplacementMaterials_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReplacementMaterials_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReplacementMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReplacementMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeWorldComposition_MetaData[];
#endif
		static void NewProp_bLandscapeWorldComposition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeWorldComposition;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniCreatedSocketActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniCreatedSocketActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniCreatedSocketActors;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoudiniAttachedSocketActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoudiniAttachedSocketActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HoudiniAttachedSocketActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEditableNode_MetaData[];
#endif
		static void NewProp_bIsEditableNode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditableNode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasEditableNodeBuilt_MetaData[];
#endif
		static void NewProp_bHasEditableNodeBuilt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasEditableNodeBuilt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUpdating_MetaData[];
#endif
		static void NewProp_bIsUpdating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUpdating;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanDeleteHoudiniNodes_MetaData[];
#endif
		static void NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanDeleteHoudiniNodes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHoudiniOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HoudiniEngineRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HoudiniOutput.h" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_MetaData[] = {
		{ "Comment", "// Indicates the type of output we're dealing with\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Indicates the type of output we're dealing with" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, Type), Z_Construct_UEnum_HoudiniEngineRuntime_EHoudiniOutputType, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_MetaData)) }; // 3177125249
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniGeoPartObject, METADATA_PARAMS(nullptr, 0) }; // 4027277687
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData[] = {
		{ "Comment", "// The output's corresponding HGPO\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The output's corresponding HGPO" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects = { "HoudiniGeoPartObjects", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, HoudiniGeoPartObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_MetaData)) }; // 4027277687
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_ValueProp = { "OutputObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniOutputObject, METADATA_PARAMS(nullptr, 0) }; // 1511747761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_Key_KeyProp = { "OutputObjects_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3466299402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects = { "OutputObjects", nullptr, (EPropertyFlags)0x0020080000200000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, OutputObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_MetaData)) }; // 3466299402 1511747761
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_ValueProp = { "InstancedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FHoudiniInstancedOutput, METADATA_PARAMS(nullptr, 0) }; // 3235437202
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_Key_KeyProp = { "InstancedOutputs_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier, METADATA_PARAMS(nullptr, 0) }; // 3466299402
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_MetaData[] = {
		{ "Comment", "// Instanced outputs\n// Stores the instance variations objects (replacement), transform offsets \n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Instanced outputs\nStores the instance variations objects (replacement), transform offsets" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs = { "InstancedOutputs", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, InstancedOutputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_MetaData)) }; // 3466299402 3235437202
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_ValueProp = { "AssignementMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_Key_KeyProp = { "AssignementMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_MetaData[] = {
		{ "Comment", "// The material assignments for this output\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The material assignments for this output" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials = { "AssignementMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, AssignementMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_ValueProp = { "ReplacementMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_Key_KeyProp = { "ReplacementMaterials_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_MetaData[] = {
		{ "Comment", "// The material replacements for this output\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The material replacements for this output" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials = { "ReplacementMaterials", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, ReplacementMaterials), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_SetBit(void* Obj)
	{
		((UHoudiniOutput*)Obj)->bLandscapeWorldComposition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition = { "bLandscapeWorldComposition", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_Inner = { "HoudiniCreatedSocketActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_MetaData[] = {
		{ "Comment", "// stores the created actors for sockets with actor references.\n// <CreatedActorPtr, SocketName>\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "stores the created actors for sockets with actor references.\n<CreatedActorPtr, SocketName>" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors = { "HoudiniCreatedSocketActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, HoudiniCreatedSocketActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_Inner = { "HoudiniAttachedSocketActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors = { "HoudiniAttachedSocketActors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHoudiniOutput, HoudiniAttachedSocketActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_MetaData[] = {
		{ "Comment", "// Use HoudiniOutput to represent an editable curve.\n// This flag tells whether this output is an editable curve.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "Use HoudiniOutput to represent an editable curve.\nThis flag tells whether this output is an editable curve." },
	};
#endif
	void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_SetBit(void* Obj)
	{
		((UHoudiniOutput*)Obj)->bIsEditableNode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode = { "bIsEditableNode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_MetaData[] = {
		{ "Comment", "// An editable node is only built once. This flag indicates whether this node has been built.\n// Transient, so resets every unreal session so curves must be rebuilt to work properly.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "An editable node is only built once. This flag indicates whether this node has been built.\nTransient, so resets every unreal session so curves must be rebuilt to work properly." },
	};
#endif
	void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_SetBit(void* Obj)
	{
		((UHoudiniOutput*)Obj)->bHasEditableNodeBuilt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt = { "bHasEditableNodeBuilt", nullptr, (EPropertyFlags)0x0040000000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_MetaData[] = {
		{ "Comment", "// The IsUpdating flag is set to true when this out exists and is being updated.\n" },
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
		{ "ToolTip", "The IsUpdating flag is set to true when this out exists and is being updated." },
	};
#endif
	void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_SetBit(void* Obj)
	{
		((UHoudiniOutput*)Obj)->bIsUpdating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating = { "bIsUpdating", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData[] = {
		{ "ModuleRelativePath", "Private/HoudiniOutput.h" },
	};
#endif
	void Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit(void* Obj)
	{
		((UHoudiniOutput*)Obj)->bCanDeleteHoudiniNodes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes = { "bCanDeleteHoudiniNodes", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UHoudiniOutput), &Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniGeoPartObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_OutputObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_InstancedOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_AssignementMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_ReplacementMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bLandscapeWorldComposition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniCreatedSocketActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_HoudiniAttachedSocketActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsEditableNode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bHasEditableNodeBuilt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bIsUpdating,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHoudiniOutput_Statics::NewProp_bCanDeleteHoudiniNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHoudiniOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHoudiniOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams = {
		&UHoudiniOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHoudiniOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHoudiniOutput()
	{
		if (!Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton, Z_Construct_UClass_UHoudiniOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHoudiniOutput.OuterSingleton;
	}
	template<> HOUDINIENGINERUNTIME_API UClass* StaticClass<UHoudiniOutput>()
	{
		return UHoudiniOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHoudiniOutput);
	struct Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::EnumInfo[] = {
		{ EHoudiniCurveOutputType_StaticEnum, TEXT("EHoudiniCurveOutputType"), &Z_Registration_Info_UEnum_EHoudiniCurveOutputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4182463941U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ScriptStructInfo[] = {
		{ FHoudiniCurveOutputProperties::StaticStruct, Z_Construct_UScriptStruct_FHoudiniCurveOutputProperties_Statics::NewStructOps, TEXT("HoudiniCurveOutputProperties"), &Z_Registration_Info_UScriptStruct_HoudiniCurveOutputProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniCurveOutputProperties), 2361326888U) },
		{ FHoudiniExtents::StaticStruct, Z_Construct_UScriptStruct_FHoudiniExtents_Statics::NewStructOps, TEXT("HoudiniExtents"), &Z_Registration_Info_UScriptStruct_HoudiniExtents, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniExtents), 912651266U) },
		{ FHoudiniClearedTargetLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniClearedTargetLayer_Statics::NewStructOps, TEXT("HoudiniClearedTargetLayer"), &Z_Registration_Info_UScriptStruct_HoudiniClearedTargetLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniClearedTargetLayer), 2714659071U) },
		{ FHoudiniClearedEditLayers::StaticStruct, Z_Construct_UScriptStruct_FHoudiniClearedEditLayers_Statics::NewStructOps, TEXT("HoudiniClearedEditLayers"), &Z_Registration_Info_UScriptStruct_HoudiniClearedEditLayers, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniClearedEditLayers), 2136584256U) },
		{ FHoudiniOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniOutputObjectIdentifier), 3466299402U) },
		{ FHoudiniBakedOutputObjectIdentifier::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutputObjectIdentifier_Statics::NewStructOps, TEXT("HoudiniBakedOutputObjectIdentifier"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObjectIdentifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutputObjectIdentifier), 2952593562U) },
		{ FHoudiniInstancedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniInstancedOutput_Statics::NewStructOps, TEXT("HoudiniInstancedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniInstancedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniInstancedOutput), 3235437202U) },
		{ FHoudiniLevelInstanceParams::StaticStruct, Z_Construct_UScriptStruct_FHoudiniLevelInstanceParams_Statics::NewStructOps, TEXT("HoudiniLevelInstanceParams"), &Z_Registration_Info_UScriptStruct_HoudiniLevelInstanceParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniLevelInstanceParams), 2504465785U) },
		{ FHoudiniBakedOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutputObject_Statics::NewStructOps, TEXT("HoudiniBakedOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutputObject), 3453140568U) },
		{ FHoudiniBakedOutput::StaticStruct, Z_Construct_UScriptStruct_FHoudiniBakedOutput_Statics::NewStructOps, TEXT("HoudiniBakedOutput"), &Z_Registration_Info_UScriptStruct_HoudiniBakedOutput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniBakedOutput), 1693097940U) },
		{ FHoudiniDataLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniDataLayer_Statics::NewStructOps, TEXT("HoudiniDataLayer"), &Z_Registration_Info_UScriptStruct_HoudiniDataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniDataLayer), 4164416104U) },
		{ FHoudiniHLODLayer::StaticStruct, Z_Construct_UScriptStruct_FHoudiniHLODLayer_Statics::NewStructOps, TEXT("HoudiniHLODLayer"), &Z_Registration_Info_UScriptStruct_HoudiniHLODLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniHLODLayer), 929473366U) },
		{ FHoudiniOutputObject::StaticStruct, Z_Construct_UScriptStruct_FHoudiniOutputObject_Statics::NewStructOps, TEXT("HoudiniOutputObject"), &Z_Registration_Info_UScriptStruct_HoudiniOutputObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FHoudiniOutputObject), 1511747761U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHoudiniLandscapePtr, UHoudiniLandscapePtr::StaticClass, TEXT("UHoudiniLandscapePtr"), &Z_Registration_Info_UClass_UHoudiniLandscapePtr, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapePtr), 688237620U) },
		{ Z_Construct_UClass_UHoudiniLandscapeTargetLayerOutput, UHoudiniLandscapeTargetLayerOutput::StaticClass, TEXT("UHoudiniLandscapeTargetLayerOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeTargetLayerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeTargetLayerOutput), 2273253807U) },
		{ Z_Construct_UClass_UHoudiniLandscapeOutput, UHoudiniLandscapeOutput::StaticClass, TEXT("UHoudiniLandscapeOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeOutput), 1622717999U) },
		{ Z_Construct_UClass_UHoudiniLandscapeSplineTargetLayerOutput, UHoudiniLandscapeSplineTargetLayerOutput::StaticClass, TEXT("UHoudiniLandscapeSplineTargetLayerOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeSplineTargetLayerOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeSplineTargetLayerOutput), 3227440101U) },
		{ Z_Construct_UClass_UHoudiniLandscapeSplinesOutput, UHoudiniLandscapeSplinesOutput::StaticClass, TEXT("UHoudiniLandscapeSplinesOutput"), &Z_Registration_Info_UClass_UHoudiniLandscapeSplinesOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniLandscapeSplinesOutput), 3054461698U) },
		{ Z_Construct_UClass_UHoudiniOutput, UHoudiniOutput::StaticClass, TEXT("UHoudiniOutput"), &Z_Registration_Info_UClass_UHoudiniOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHoudiniOutput), 2573615756U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_4238967897(TEXT("/Script/HoudiniEngineRuntime"),
		Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniOutput_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
