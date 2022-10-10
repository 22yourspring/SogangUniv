// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_EnemySpawnPoint_generated_h
#error "EnemySpawnPoint.generated.h already included, missing '#pragma once' in EnemySpawnPoint.h"
#endif
#define SOGANGUNIV_EnemySpawnPoint_generated_h

#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_RPC_WRAPPERS
#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemySpawnPoint(); \
	friend struct Z_Construct_UClass_AEnemySpawnPoint_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawnPoint)


#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemySpawnPoint(); \
	friend struct Z_Construct_UClass_AEnemySpawnPoint_Statics; \
public: \
	DECLARE_CLASS(AEnemySpawnPoint, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AEnemySpawnPoint)


#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemySpawnPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemySpawnPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawnPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawnPoint(AEnemySpawnPoint&&); \
	NO_API AEnemySpawnPoint(const AEnemySpawnPoint&); \
public:


#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemySpawnPoint(AEnemySpawnPoint&&); \
	NO_API AEnemySpawnPoint(const AEnemySpawnPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemySpawnPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemySpawnPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemySpawnPoint)


#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_EnemyClass() { return STRUCT_OFFSET(AEnemySpawnPoint, m_EnemyClass); } \
	FORCEINLINE static uint32 __PPO__m_SpawnTime() { return STRUCT_OFFSET(AEnemySpawnPoint, m_SpawnTime); } \
	FORCEINLINE static uint32 __PPO__m_PatrolPointArray() { return STRUCT_OFFSET(AEnemySpawnPoint, m_PatrolPointArray); }


#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_9_PROLOG
#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_INCLASS \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class AEnemySpawnPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Enemy_EnemySpawnPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
