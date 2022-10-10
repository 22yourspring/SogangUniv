// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_CharacterSelectHUD_generated_h
#error "CharacterSelectHUD.generated.h already included, missing '#pragma once' in CharacterSelectHUD.h"
#endif
#define SOGANGUNIV_CharacterSelectHUD_generated_h

#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBackButtonClick); \
	DECLARE_FUNCTION(execStartButtonClick);


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBackButtonClick); \
	DECLARE_FUNCTION(execStartButtonClick);


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterSelectHUD(); \
	friend struct Z_Construct_UClass_UCharacterSelectHUD_Statics; \
public: \
	DECLARE_CLASS(UCharacterSelectHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UCharacterSelectHUD)


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterSelectHUD(); \
	friend struct Z_Construct_UClass_UCharacterSelectHUD_Statics; \
public: \
	DECLARE_CLASS(UCharacterSelectHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UCharacterSelectHUD)


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterSelectHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterSelectHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSelectHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSelectHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterSelectHUD(UCharacterSelectHUD&&); \
	NO_API UCharacterSelectHUD(const UCharacterSelectHUD&); \
public:


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterSelectHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterSelectHUD(UCharacterSelectHUD&&); \
	NO_API UCharacterSelectHUD(const UCharacterSelectHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterSelectHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterSelectHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterSelectHUD)


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_StartButton() { return STRUCT_OFFSET(UCharacterSelectHUD, m_StartButton); } \
	FORCEINLINE static uint32 __PPO__m_BackButton() { return STRUCT_OFFSET(UCharacterSelectHUD, m_BackButton); } \
	FORCEINLINE static uint32 __PPO__m_CharacterState() { return STRUCT_OFFSET(UCharacterSelectHUD, m_CharacterState); } \
	FORCEINLINE static uint32 __PPO__m_NameInput() { return STRUCT_OFFSET(UCharacterSelectHUD, m_NameInput); }


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_13_PROLOG
#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_INCLASS \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UCharacterSelectHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_CharacterSelectHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
