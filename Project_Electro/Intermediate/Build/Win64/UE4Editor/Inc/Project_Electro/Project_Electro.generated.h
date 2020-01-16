// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_ELECTRO_Project_Electro_generated_h
#error "Project_Electro.generated.h already included, missing '#pragma once' in Project_Electro.h"
#endif
#define PROJECT_ELECTRO_Project_Electro_generated_h

#define Project_Electro_Source_Project_Electro_Project_Electro_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPowerTypeValue_Statics; \
	PROJECT_ELECTRO_API static class UScriptStruct* StaticStruct();


template<> PROJECT_ELECTRO_API UScriptStruct* StaticStruct<struct FPowerTypeValue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Electro_Source_Project_Electro_Project_Electro_h


#define FOREACH_ENUM_EPOWERTYPE(op) \
	op(EPowerType::Red) \
	op(EPowerType::Blue) \
	op(EPowerType::Green) \
	op(EPowerType::Grey) 

enum class EPowerType : uint8;
template<> PROJECT_ELECTRO_API UEnum* StaticEnum<EPowerType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
