// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/Blocks/BlockActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockActor() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_ABlockActor_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ABlockActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
	MINECRAFT_API UEnum* Z_Construct_UEnum_Minecraft_BlockEnumType();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void ABlockActor::StaticRegisterNativesABlockActor()
	{
	}
	UClass* Z_Construct_UClass_ABlockActor_NoRegister()
	{
		return ABlockActor::StaticClass();
	}
	struct Z_Construct_UClass_ABlockActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockMeshesMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BlockMeshesMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BlockMeshesMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlockMeshesMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlockMeshesMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MaterialsMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialsMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialsMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialsMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlockActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Blocks/BlockActor.h" },
		{ "ModuleRelativePath", "Blocks/BlockActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_MetaData[] = {
		{ "Category", "BlockActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Blocks/BlockActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap = { "BlockMeshesMap", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockActor, BlockMeshesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_Key_KeyProp = { "BlockMeshesMap_Key", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Minecraft_BlockEnumType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_ValueProp = { "BlockMeshesMap", nullptr, (EPropertyFlags)0x0000000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Blocks/BlockActor.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap = { "MaterialsMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlockActor, MaterialsMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_Key_KeyProp = { "MaterialsMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Minecraft_BlockEnumType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_ValueProp = { "MaterialsMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlockActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_BlockMeshesMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlockActor_Statics::NewProp_MaterialsMap_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlockActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlockActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlockActor_Statics::ClassParams = {
		&ABlockActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABlockActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABlockActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlockActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlockActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlockActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlockActor, 669119397);
	template<> MINECRAFT_API UClass* StaticClass<ABlockActor>()
	{
		return ABlockActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlockActor(Z_Construct_UClass_ABlockActor, &ABlockActor::StaticClass, TEXT("/Script/Minecraft"), TEXT("ABlockActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlockActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
