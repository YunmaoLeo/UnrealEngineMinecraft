// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/Blocks/BlockEnumType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockEnumType() {}
// Cross Module References
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_BlockEnumType();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	static UEnum* BlockEnumType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Minecraft_BlockEnumType, Z_Construct_UPackage__Script_Minecraft(), TEXT("BlockEnumType"));
		}
		return Singleton;
	}
	template<> MINECRAFT_API UEnum* StaticEnum<BlockEnumType>()
	{
		return BlockEnumType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_BlockEnumType(BlockEnumType_StaticEnum, TEXT("/Script/Minecraft"), TEXT("BlockEnumType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Minecraft_BlockEnumType_Hash() { return 2644960432U; }
	UEnum* Z_Construct_UEnum_Minecraft_BlockEnumType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Minecraft();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("BlockEnumType"), 0, Get_Z_Construct_UEnum_Minecraft_BlockEnumType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "BlockEnumType::STONE", (int64)BlockEnumType::STONE },
				{ "BlockEnumType::GRASS", (int64)BlockEnumType::GRASS },
				{ "BlockEnumType::DIRT", (int64)BlockEnumType::DIRT },
				{ "BlockEnumType::AIR", (int64)BlockEnumType::AIR },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AIR.DisplaName", "air" },
				{ "AIR.Name", "BlockEnumType::AIR" },
				{ "BlueprintType", "true" },
				{ "DIRT.DisplayName", "dirt" },
				{ "DIRT.Name", "BlockEnumType::DIRT" },
				{ "GRASS.DisplayName", "grass" },
				{ "GRASS.Name", "BlockEnumType::GRASS" },
				{ "ModuleRelativePath", "Blocks/BlockEnumType.h" },
				{ "STONE.DisplayName", "stone" },
				{ "STONE.Name", "BlockEnumType::STONE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Minecraft,
				nullptr,
				"BlockEnumType",
				"BlockEnumType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
