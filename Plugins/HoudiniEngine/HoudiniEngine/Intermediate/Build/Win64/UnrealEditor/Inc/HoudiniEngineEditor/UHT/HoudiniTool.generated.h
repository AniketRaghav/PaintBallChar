// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "HoudiniTool.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINEEDITOR_HoudiniTool_generated_h
#error "HoudiniTool.generated.h already included, missing '#pragma once' in HoudiniTool.h"
#endif
#define HOUDINIENGINEEDITOR_HoudiniTool_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_anike_OneDrive_Documents_Unreal_Projects_PaintBallChar_Plugins_HoudiniEngine_HoudiniEngine_Source_HoudiniEngineEditor_Private_HoudiniTool_h


#define FOREACH_ENUM_EHOUDINITOOLTYPE(op) \
	op(EHoudiniToolType::HTOOLTYPE_GENERATOR) \
	op(EHoudiniToolType::HTOOLTYPE_OPERATOR_SINGLE) \
	op(EHoudiniToolType::HTOOLTYPE_OPERATOR_MULTI) \
	op(EHoudiniToolType::HTOOLTYPE_OPERATOR_BATCH) 

enum class EHoudiniToolType : uint8;
template<> struct TIsUEnumClass<EHoudiniToolType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolType>();

#define FOREACH_ENUM_EHOUDINITOOLSELECTIONTYPE(op) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_ALL) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_WORLD_ONLY) \
	op(EHoudiniToolSelectionType::HTOOL_SELECTION_CB_ONLY) 

enum class EHoudiniToolSelectionType : uint8;
template<> struct TIsUEnumClass<EHoudiniToolSelectionType> { enum { Value = true }; };
template<> HOUDINIENGINEEDITOR_API UEnum* StaticEnum<EHoudiniToolSelectionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
