// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_CharacterHUD_generated_h
#error "CharacterHUD.generated.h already included, missing '#pragma once' in CharacterHUD.h"
#endif
#define SOGANGUNIV_CharacterHUD_generated_h

#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_RPC_WRAPPERS
#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterHUD(); \
	friend struct Z_Construct_UClass_UCharacterHUD_Statics; \
public: \
	DECLARE_CLASS(UCharacterHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UCharacterHUD)


#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterHUD(); \
	friend struct Z_Construct_UClass_UCharacterHUD_Statics; \
public: \
	DECLARE_CLASS(UCharacterHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UCharacterHUD)


#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterHUD(UCharacterHUD&&); \
	NO_API UCharacterHUD(const UCharacterHUD&); \
public:


#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterHUD(UCharacterHUD&&); \
	NO_API UCharacterHUD(const UCharacterHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterHUD)


#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_CharacterPic() { return STRUCT_OFFSET(UCharacterHUD, m_CharacterPic); } \
	FORCEINLINE static uint32 __PPO__m_NameText() { return STRUCT_OFFSET(UCharacterHUD, m_NameText); } \
	FORCEINLINE static uint32 __PPO__m_HPBar() { return STRUCT_OFFSET(UCharacterHUD, m_HPBar); } \
	FORCEINLINE static uint32 __PPO__m_MPBar() { return STRUCT_OFFSET(UCharacterHUD, m_MPBar); }


#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_18_PROLOG
#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_INCLASS \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_CharacterHUD_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UCharacterHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_CharacterHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
