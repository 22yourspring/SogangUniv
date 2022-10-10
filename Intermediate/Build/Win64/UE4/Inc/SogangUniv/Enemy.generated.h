// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define SOGANGUNIV_Enemy_generated_h

#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_14_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct();


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FEnemyInfo>();

#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNameWidgetCallback);


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNameWidgetCallback);


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
public: \
	DECLARE_CLASS(AEnemy, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AEnemy)


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public:


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy(AEnemy&&); \
	NO_API AEnemy(const AEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy)


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_EnemyInfo() { return STRUCT_OFFSET(AEnemy, m_EnemyInfo); } \
	FORCEINLINE static uint32 __PPO__m_HPBar() { return STRUCT_OFFSET(AEnemy, m_HPBar); }


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_63_PROLOG
#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_INCLASS \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_Enemy_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class AEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Enemy_Enemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
