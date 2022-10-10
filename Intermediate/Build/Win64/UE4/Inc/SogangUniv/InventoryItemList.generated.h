// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SOGANGUNIV_InventoryItemList_generated_h
#error "InventoryItemList.generated.h already included, missing '#pragma once' in InventoryItemList.h"
#endif
#define SOGANGUNIV_InventoryItemList_generated_h

#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetData);


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetData);


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryItemList(); \
	friend struct Z_Construct_UClass_UInventoryItemList_Statics; \
public: \
	DECLARE_CLASS(UInventoryItemList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItemList)


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryItemList(); \
	friend struct Z_Construct_UClass_UInventoryItemList_Statics; \
public: \
	DECLARE_CLASS(UInventoryItemList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UInventoryItemList)


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItemList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItemList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItemList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItemList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItemList(UInventoryItemList&&); \
	NO_API UInventoryItemList(const UInventoryItemList&); \
public:


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryItemList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryItemList(UInventoryItemList&&); \
	NO_API UInventoryItemList(const UInventoryItemList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryItemList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryItemList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryItemList)


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_IconImage() { return STRUCT_OFFSET(UInventoryItemList, m_IconImage); } \
	FORCEINLINE static uint32 __PPO__m_NameText() { return STRUCT_OFFSET(UInventoryItemList, m_NameText); }


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_14_PROLOG
#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_INCLASS \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_InventoryItemList_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UInventoryItemList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_InventoryItemList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
