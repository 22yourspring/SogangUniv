// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_MainHUD_generated_h
#error "MainHUD.generated.h already included, missing '#pragma once' in MainHUD.h"
#endif
#define SOGANGUNIV_MainHUD_generated_h

#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_RPC_WRAPPERS
#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainHUD(); \
	friend struct Z_Construct_UClass_UMainHUD_Statics; \
public: \
	DECLARE_CLASS(UMainHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UMainHUD)


#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUMainHUD(); \
	friend struct Z_Construct_UClass_UMainHUD_Statics; \
public: \
	DECLARE_CLASS(UMainHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UMainHUD)


#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainHUD(UMainHUD&&); \
	NO_API UMainHUD(const UMainHUD&); \
public:


#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainHUD(UMainHUD&&); \
	NO_API UMainHUD(const UMainHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainHUD)


#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CharacterHUD() { return STRUCT_OFFSET(UMainHUD, m_CharacterHUD); } \
	FORCEINLINE static uint32 __PPO__m_MainMenu() { return STRUCT_OFFSET(UMainHUD, m_MainMenu); } \
	FORCEINLINE static uint32 __PPO__m_InventoryList() { return STRUCT_OFFSET(UMainHUD, m_InventoryList); } \
	FORCEINLINE static uint32 __PPO__m_InventoryTile() { return STRUCT_OFFSET(UMainHUD, m_InventoryTile); } \
	FORCEINLINE static uint32 __PPO__m_Quest() { return STRUCT_OFFSET(UMainHUD, m_Quest); } \
	FORCEINLINE static uint32 __PPO__m_pQuestNPC() { return STRUCT_OFFSET(UMainHUD, m_pQuestNPC); } \
	FORCEINLINE static uint32 __PPO__m_pShopNPC() { return STRUCT_OFFSET(UMainHUD, m_pShopNPC); }


#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_19_PROLOG
#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_INCLASS \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_MainHUD_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UMainHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_MainHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
