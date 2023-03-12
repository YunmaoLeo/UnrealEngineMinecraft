// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_BlockActor_generated_h
#error "BlockActor.generated.h already included, missing '#pragma once' in BlockActor.h"
#endif
#define MINECRAFT_BlockActor_generated_h

#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_SPARSE_DATA
#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlockActor(); \
	friend struct Z_Construct_UClass_ABlockActor_Statics; \
public: \
	DECLARE_CLASS(ABlockActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABlockActor)


#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABlockActor(); \
	friend struct Z_Construct_UClass_ABlockActor_Statics; \
public: \
	DECLARE_CLASS(ABlockActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ABlockActor)


#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABlockActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABlockActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockActor(ABlockActor&&); \
	NO_API ABlockActor(const ABlockActor&); \
public:


#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABlockActor(ABlockActor&&); \
	NO_API ABlockActor(const ABlockActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlockActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlockActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlockActor)


#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_11_PROLOG
#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_SPARSE_DATA \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_INCLASS \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_SPARSE_DATA \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_Blocks_BlockActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class ABlockActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_Blocks_BlockActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
