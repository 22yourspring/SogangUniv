// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SOGANGUNIV_InventoryList_generated_h
#error "InventoryList.generated.h already included, missing '#pragma once' in InventoryList.h"
#endif
#define SOGANGUNIV_InventoryList_generated_h

#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execItemDoubleClick);


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execItemDoubleClick);


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryList(); \
	friend struct Z_Construct_UClass_UInventoryList_Statics; \
public: \
	DECLARE_CLASS(UInventoryList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UInventoryList)


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryList(); \
	friend struct Z_Construct_UClass_UInventoryList_Statics; \
public: \
	DECLARE_CLASS(UInventoryList, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UInventoryList)


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryList(UInventoryList&&); \
	NO_API UInventoryList(const UInventoryList&); \
public:


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryList(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryList(UInventoryList&&); \
	NO_API UInventoryList(const UInventoryList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryList); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryList)


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_InventoryList() { return STRUCT_OFFSET(UInventoryList, m_InventoryList); }


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_15_PROLOG
#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_INCLASS \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_InventoryList_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UInventoryList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_InventoryList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
