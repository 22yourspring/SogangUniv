// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define SOGANGUNIV_PlayerCharacter_generated_h

#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNameWidgetCallback);


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNameWidgetCallback);


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Camera() { return STRUCT_OFFSET(APlayerCharacter, m_Camera); } \
	FORCEINLINE static uint32 __PPO__m_Arm() { return STRUCT_OFFSET(APlayerCharacter, m_Arm); } \
	FORCEINLINE static uint32 __PPO__m_HPBar() { return STRUCT_OFFSET(APlayerCharacter, m_HPBar); } \
	FORCEINLINE static uint32 __PPO__m_Capture() { return STRUCT_OFFSET(APlayerCharacter, m_Capture); } \
	FORCEINLINE static uint32 __PPO__m_PlayerInfo() { return STRUCT_OFFSET(APlayerCharacter, m_PlayerInfo); }


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_10_PROLOG
#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_INCLASS \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Player_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
