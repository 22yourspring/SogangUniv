// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_MainMenuWidget_generated_h
#error "MainMenuWidget.generated.h already included, missing '#pragma once' in MainMenuWidget.h"
#endif
#define SOGANGUNIV_MainMenuWidget_generated_h

#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnQuest); \
	DECLARE_FUNCTION(execOnCharacterState); \
	DECLARE_FUNCTION(execOnInventory);


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnQuest); \
	DECLARE_FUNCTION(execOnCharacterState); \
	DECLARE_FUNCTION(execOnInventory);


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMainMenuWidget(); \
	friend struct Z_Construct_UClass_UMainMenuWidget_Statics; \
public: \
	DECLARE_CLASS(UMainMenuWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuWidget)


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public:


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMainMenuWidget(UMainMenuWidget&&); \
	NO_API UMainMenuWidget(const UMainMenuWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuWidget)


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_InventoryButton() { return STRUCT_OFFSET(UMainMenuWidget, m_InventoryButton); } \
	FORCEINLINE static uint32 __PPO__m_CharacterStateButton() { return STRUCT_OFFSET(UMainMenuWidget, m_CharacterStateButton); } \
	FORCEINLINE static uint32 __PPO__m_QuestButton() { return STRUCT_OFFSET(UMainMenuWidget, m_QuestButton); } \
	FORCEINLINE static uint32 __PPO__m_OptionButton() { return STRUCT_OFFSET(UMainMenuWidget, m_OptionButton); } \
	FORCEINLINE static uint32 __PPO__m_pCoin() { return STRUCT_OFFSET(UMainMenuWidget, m_pCoin); }


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_14_PROLOG
#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_INCLASS \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UMainMenuWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_MainMenuWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
