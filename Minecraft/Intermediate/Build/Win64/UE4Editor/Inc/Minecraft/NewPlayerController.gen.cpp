// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Minecraft/NewPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewPlayerController() {}
// Cross Module References
	MINECRAFT_API UClass* Z_Construct_UClass_ANewPlayerController_NoRegister();
	MINECRAFT_API UClass* Z_Construct_UClass_ANewPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Minecraft();
// End Cross Module References
	void ANewPlayerController::StaticRegisterNativesANewPlayerController()
	{
	}
	UClass* Z_Construct_UClass_ANewPlayerController_NoRegister()
	{
		return ANewPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ANewPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_unitBlockSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_unitBlockSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_chunkElementCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_chunkElementCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_renderRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_renderRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Minecraft,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NewPlayerController.h" },
		{ "ModuleRelativePath", "NewPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewPlayerController_Statics::NewProp_unitBlockSize_MetaData[] = {
		{ "Category", "render" },
		{ "ModuleRelativePath", "NewPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANewPlayerController_Statics::NewProp_unitBlockSize = { "unitBlockSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewPlayerController, unitBlockSize), METADATA_PARAMS(Z_Construct_UClass_ANewPlayerController_Statics::NewProp_unitBlockSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayerController_Statics::NewProp_unitBlockSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewPlayerController_Statics::NewProp_chunkElementCount_MetaData[] = {
		{ "Category", "render" },
		{ "ModuleRelativePath", "NewPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ANewPlayerController_Statics::NewProp_chunkElementCount = { "chunkElementCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewPlayerController, chunkElementCount), METADATA_PARAMS(Z_Construct_UClass_ANewPlayerController_Statics::NewProp_chunkElementCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayerController_Statics::NewProp_chunkElementCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewPlayerController_Statics::NewProp_renderRange_MetaData[] = {
		{ "Category", "render" },
		{ "ModuleRelativePath", "NewPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ANewPlayerController_Statics::NewProp_renderRange = { "renderRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewPlayerController, renderRange), METADATA_PARAMS(Z_Construct_UClass_ANewPlayerController_Statics::NewProp_renderRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayerController_Statics::NewProp_renderRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewPlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewPlayerController_Statics::NewProp_unitBlockSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewPlayerController_Statics::NewProp_chunkElementCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewPlayerController_Statics::NewProp_renderRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewPlayerController_Statics::ClassParams = {
		&ANewPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANewPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewPlayerController, 3839351732);
	template<> MINECRAFT_API UClass* StaticClass<ANewPlayerController>()
	{
		return ANewPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewPlayerController(Z_Construct_UClass_ANewPlayerController, &ANewPlayerController::StaticClass, TEXT("/Script/Minecraft"), TEXT("ANewPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
