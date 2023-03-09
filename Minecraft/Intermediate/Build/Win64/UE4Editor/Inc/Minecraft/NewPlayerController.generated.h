// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MINECRAFT_NewPlayerController_generated_h
#error "NewPlayerController.generated.h already included, missing '#pragma once' in NewPlayerController.h"
#endif
#define MINECRAFT_NewPlayerController_generated_h

#define Minecraft_Source_Minecraft_NewPlayerController_h_16_SPARSE_DATA
#define Minecraft_Source_Minecraft_NewPlayerController_h_16_RPC_WRAPPERS
#define Minecraft_Source_Minecraft_NewPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Minecraft_Source_Minecraft_NewPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANewPlayerController(); \
	friend struct Z_Construct_UClass_ANewPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANewPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ANewPlayerController)


#define Minecraft_Source_Minecraft_NewPlayerController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANewPlayerController(); \
	friend struct Z_Construct_UClass_ANewPlayerController_Statics; \
public: \
	DECLARE_CLASS(ANewPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Minecraft"), NO_API) \
	DECLARE_SERIALIZER(ANewPlayerController)


#define Minecraft_Source_Minecraft_NewPlayerController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewPlayerController(ANewPlayerController&&); \
	NO_API ANewPlayerController(const ANewPlayerController&); \
public:


#define Minecraft_Source_Minecraft_NewPlayerController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANewPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANewPlayerController(ANewPlayerController&&); \
	NO_API ANewPlayerController(const ANewPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANewPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANewPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANewPlayerController)


#define Minecraft_Source_Minecraft_NewPlayerController_h_16_PRIVATE_PROPERTY_OFFSET
#define Minecraft_Source_Minecraft_NewPlayerController_h_13_PROLOG
#define Minecraft_Source_Minecraft_NewPlayerController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_SPARSE_DATA \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_RPC_WRAPPERS \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_INCLASS \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Minecraft_Source_Minecraft_NewPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_PRIVATE_PROPERTY_OFFSET \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_SPARSE_DATA \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	Minecraft_Source_Minecraft_NewPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MINECRAFT_API UClass* StaticClass<class ANewPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Minecraft_Source_Minecraft_NewPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
