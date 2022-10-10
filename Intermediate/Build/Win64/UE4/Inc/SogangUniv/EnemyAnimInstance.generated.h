// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_EnemyAnimInstance_generated_h
#error "EnemyAnimInstance.generated.h already included, missing '#pragma once' in EnemyAnimInstance.h"
#endif
#define SOGANGUNIV_EnemyAnimInstance_generated_h

#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_DeathEnd); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_Attack);


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_DeathEnd); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_Attack);


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnemyAnimInstance(); \
	friend struct Z_Construct_UClass_UEnemyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnimInstance)


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_INCLASS \
private: \
	static void StaticRegisterNativesUEnemyAnimInstance(); \
	friend struct Z_Construct_UClass_UEnemyAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UEnemyAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UEnemyAnimInstance)


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnemyAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnemyAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyAnimInstance(UEnemyAnimInstance&&); \
	NO_API UEnemyAnimInstance(const UEnemyAnimInstance&); \
public:


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnemyAnimInstance(UEnemyAnimInstance&&); \
	NO_API UEnemyAnimInstance(const UEnemyAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnemyAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnemyAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEnemyAnimInstance)


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_OnGround() { return STRUCT_OFFSET(UEnemyAnimInstance, m_OnGround); } \
	FORCEINLINE static uint32 __PPO__m_AnimType() { return STRUCT_OFFSET(UEnemyAnimInstance, m_AnimType); } \
	FORCEINLINE static uint32 __PPO__m_AttackType() { return STRUCT_OFFSET(UEnemyAnimInstance, m_AttackType); }


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_29_PROLOG
#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_INCLASS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UEnemyAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Enemy_EnemyAnimInstance_h


#define FOREACH_ENUM_EENEMYATTACKTYPE(op) \
	op(EEnemyAttackType::Attack1) \
	op(EEnemyAttackType::Attack2) \
	op(EEnemyAttackType::Attack3) \
	op(EEnemyAttackType::Attack4) 

enum class EEnemyAttackType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<EEnemyAttackType>();

#define FOREACH_ENUM_EENEMYANIMTYPE(op) \
	op(EEnemyAnimType::Idle) \
	op(EEnemyAnimType::Walk) \
	op(EEnemyAnimType::Run) \
	op(EEnemyAnimType::Attack) \
	op(EEnemyAnimType::Death) \
	op(EEnemyAnimType::Skill) 

enum class EEnemyAnimType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<EEnemyAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
