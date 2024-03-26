// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniAssetStateTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniAssetStateTypes_generated_h
#error "HoudiniAssetStateTypes.generated.h already included, missing '#pragma once' in HoudiniAssetStateTypes.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniAssetStateTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_r015142l_STUDENT_000_Downloads_BioPaintPrototyping_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniAssetStateTypes_h


#define FOREACH_ENUM_EHOUDINIASSETSTATE(op) \
	op(EHoudiniAssetState::NeedInstantiation) \
	op(EHoudiniAssetState::NewHDA) \
	op(EHoudiniAssetState::PreInstantiation) \
	op(EHoudiniAssetState::Instantiating) \
	op(EHoudiniAssetState::PreCook) \
	op(EHoudiniAssetState::Cooking) \
	op(EHoudiniAssetState::PostCook) \
	op(EHoudiniAssetState::PreProcess) \
	op(EHoudiniAssetState::Processing) \
	op(EHoudiniAssetState::None) \
	op(EHoudiniAssetState::NeedRebuild) \
	op(EHoudiniAssetState::NeedDelete) \
	op(EHoudiniAssetState::Deleting) \
	op(EHoudiniAssetState::ProcessTemplate) 

enum class EHoudiniAssetState : uint8;
template<> struct TIsUEnumClass<EHoudiniAssetState> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetState>();

#define FOREACH_ENUM_EHOUDINIASSETSTATERESULT(op) \
	op(EHoudiniAssetStateResult::None) \
	op(EHoudiniAssetStateResult::Working) \
	op(EHoudiniAssetStateResult::Success) \
	op(EHoudiniAssetStateResult::FinishedWithError) \
	op(EHoudiniAssetStateResult::FinishedWithFatalError) \
	op(EHoudiniAssetStateResult::Aborted) 

enum class EHoudiniAssetStateResult : uint8;
template<> struct TIsUEnumClass<EHoudiniAssetStateResult> { enum { Value = true }; };
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniAssetStateResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
