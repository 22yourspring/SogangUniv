// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_PlayerAnim_generated_h
#error "PlayerAnim.generated.h already included, missing '#pragma once' in PlayerAnim.h"
#endif
#define SOGANGUNIV_PlayerAnim_generated_h

#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_RightStep); \
	DECLARE_FUNCTION(execAnimNotify_LeftStep); \
	DECLARE_FUNCTION(execAnimNotify_FallStart); \
	DECLARE_FUNCTION(execAnimNotify_SkillFire); \
	DECLARE_FUNCTION(execAnimNotify_JumpEnd); \
	DECLARE_FUNCTION(execAnimNotify_InteractionEnd); \
	DECLARE_FUNCTION(execAnimNotify_AttackCombo); \
	DECLARE_FUNCTION(execAnimNotify_NormalAttack); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd);


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_RightStep); \
	DECLARE_FUNCTION(execAnimNotify_LeftStep); \
	DECLARE_FUNCTION(execAnimNotify_FallStart); \
	DECLARE_FUNCTION(execAnimNotify_SkillFire); \
	DECLARE_FUNCTION(execAnimNotify_JumpEnd); \
	DECLARE_FUNCTION(execAnimNotify_InteractionEnd); \
	DECLARE_FUNCTION(execAnimNotify_AttackCombo); \
	DECLARE_FUNCTION(execAnimNotify_NormalAttack); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd);


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerAnim(); \
	friend struct Z_Construct_UClass_UPlayerAnim_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnim)


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerAnim(); \
	friend struct Z_Construct_UClass_UPlayerAnim_Statics; \
public: \
	DECLARE_CLASS(UPlayerAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UPlayerAnim)


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerAnim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnim(UPlayerAnim&&); \
	NO_API UPlayerAnim(const UPlayerAnim&); \
public:


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerAnim(UPlayerAnim&&); \
	NO_API UPlayerAnim(const UPlayerAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerAnim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerAnim)


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Direction() { return STRUCT_OFFSET(UPlayerAnim, m_Direction); } \
	FORCEINLINE static uint32 __PPO__m_Speed() { return STRUCT_OFFSET(UPlayerAnim, m_Speed); } \
	FORCEINLINE static uint32 __PPO__m_Attack() { return STRUCT_OFFSET(UPlayerAnim, m_Attack); } \
	FORCEINLINE static uint32 __PPO__m_Interaction() { return STRUCT_OFFSET(UPlayerAnim, m_Interaction); } \
	FORCEINLINE static uint32 __PPO__m_OnGround() { return STRUCT_OFFSET(UPlayerAnim, m_OnGround); } \
	FORCEINLINE static uint32 __PPO__m_AnimType() { return STRUCT_OFFSET(UPlayerAnim, m_AnimType); }


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_23_PROLOG
#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_INCLASS \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Player_PlayerAnim_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UPlayerAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Player_PlayerAnim_h


#define FOREACH_ENUM_EPLAYERANIMTYPE(op) \
	op(EPlayerAnimType::Ground) \
	op(EPlayerAnimType::Jump) \
	op(EPlayerAnimType::Death) \
	op(EPlayerAnimType::NPC_Interaction) \
	op(EPlayerAnimType::Object_Interaction) 

enum class EPlayerAnimType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<EPlayerAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
