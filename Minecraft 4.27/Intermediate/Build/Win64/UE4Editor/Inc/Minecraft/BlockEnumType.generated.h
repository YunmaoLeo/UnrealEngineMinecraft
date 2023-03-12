// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_BlockEnumType_generated_h
#error "BlockEnumType.generated.h already included, missing '#pragma once' in BlockEnumType.h"
#endif
#define MINECRAFT_BlockEnumType_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_4_27_Source_Minecraft_Blocks_BlockEnumType_h


#define FOREACH_ENUM_BLOCKENUMTYPE(op) \
	op(BlockEnumType::STONE) \
	op(BlockEnumType::GRASS) \
	op(BlockEnumType::DIRT) \
	op(BlockEnumType::AIR) 

enum class BlockEnumType : uint8;
template<> MINECRAFT_API UEnum* StaticEnum<BlockEnumType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
