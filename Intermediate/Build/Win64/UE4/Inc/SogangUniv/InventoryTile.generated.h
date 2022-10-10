// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UUserWidget;
#ifdef SOGANGUNIV_InventoryTile_generated_h
#error "InventoryTile.generated.h already included, missing '#pragma once' in InventoryTile.h"
#endif
#define SOGANGUNIV_InventoryTile_generated_h

#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execItemHovered); \
	DECLARE_FUNCTION(execItemScroll); \
	DECLARE_FUNCTION(execItemDoubleClick); \
	DECLARE_FUNCTION(execItemClick);


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execItemHovered); \
	DECLARE_FUNCTION(execItemScroll); \
	DECLARE_FUNCTION(execItemDoubleClick); \
	DECLARE_FUNCTION(execItemClick);


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryTile(); \
	friend struct Z_Construct_UClass_UInventoryTile_Statics; \
public: \
	DECLARE_CLASS(UInventoryTile, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UInventoryTile)


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryTile(); \
	friend struct Z_Construct_UClass_UInventoryTile_Statics; \
public: \
	DECLARE_CLASS(UInventoryTile, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UInventoryTile)


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryTile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryTile(UInventoryTile&&); \
	NO_API UInventoryTile(const UInventoryTile&); \
public:


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryTile(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryTile(UInventoryTile&&); \
	NO_API UInventoryTile(const UInventoryTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryTile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryTile); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryTile)


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_InventoryTile() { return STRUCT_OFFSET(UInventoryTile, m_InventoryTile); } \
	FORCEINLINE static uint32 __PPO__m_InventorySlot() { return STRUCT_OFFSET(UInventoryTile, m_InventorySlot); } \
	FORCEINLINE static uint32 __PPO__m_ItemDescWidget() { return STRUCT_OFFSET(UInventoryTile, m_ItemDescWidget); }


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_17_PROLOG
#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_INCLASS \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_InventoryTile_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UInventoryTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_InventoryTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
