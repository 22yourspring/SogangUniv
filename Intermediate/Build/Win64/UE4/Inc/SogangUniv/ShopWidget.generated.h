// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_ShopWidget_generated_h
#error "ShopWidget.generated.h already included, missing '#pragma once' in ShopWidget.h"
#endif
#define SOGANGUNIV_ShopWidget_generated_h

#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBuy); \
	DECLARE_FUNCTION(execSetRender);


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBuy); \
	DECLARE_FUNCTION(execSetRender);


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShopWidget(); \
	friend struct Z_Construct_UClass_UShopWidget_Statics; \
public: \
	DECLARE_CLASS(UShopWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UShopWidget)


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUShopWidget(); \
	friend struct Z_Construct_UClass_UShopWidget_Statics; \
public: \
	DECLARE_CLASS(UShopWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UShopWidget)


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShopWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShopWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShopWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShopWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShopWidget(UShopWidget&&); \
	NO_API UShopWidget(const UShopWidget&); \
public:


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShopWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShopWidget(UShopWidget&&); \
	NO_API UShopWidget(const UShopWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShopWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShopWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShopWidget)


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pDesc() { return STRUCT_OFFSET(UShopWidget, m_pDesc); } \
	FORCEINLINE static uint32 __PPO__m_pMsg() { return STRUCT_OFFSET(UShopWidget, m_pMsg); } \
	FORCEINLINE static uint32 __PPO__m_pNext() { return STRUCT_OFFSET(UShopWidget, m_pNext); }


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_14_PROLOG
#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_INCLASS \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_ShopWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UShopWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_ShopWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
