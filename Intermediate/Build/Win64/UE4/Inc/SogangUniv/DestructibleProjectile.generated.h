// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
#ifdef SOGANGUNIV_DestructibleProjectile_generated_h
#error "DestructibleProjectile.generated.h already included, missing '#pragma once' in DestructibleProjectile.h"
#endif
#define SOGANGUNIV_DestructibleProjectile_generated_h

#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProjectileBounce); \
	DECLARE_FUNCTION(execProjectileStop);


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProjectileBounce); \
	DECLARE_FUNCTION(execProjectileStop);


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADestructibleProjectile(); \
	friend struct Z_Construct_UClass_ADestructibleProjectile_Statics; \
public: \
	DECLARE_CLASS(ADestructibleProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(ADestructibleProjectile)


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADestructibleProjectile(); \
	friend struct Z_Construct_UClass_ADestructibleProjectile_Statics; \
public: \
	DECLARE_CLASS(ADestructibleProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(ADestructibleProjectile)


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADestructibleProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADestructibleProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructibleProjectile(ADestructibleProjectile&&); \
	NO_API ADestructibleProjectile(const ADestructibleProjectile&); \
public:


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADestructibleProjectile(ADestructibleProjectile&&); \
	NO_API ADestructibleProjectile(const ADestructibleProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADestructibleProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADestructibleProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADestructibleProjectile)


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Body() { return STRUCT_OFFSET(ADestructibleProjectile, m_Body); } \
	FORCEINLINE static uint32 __PPO__m_Mesh() { return STRUCT_OFFSET(ADestructibleProjectile, m_Mesh); } \
	FORCEINLINE static uint32 __PPO__m_Movement() { return STRUCT_OFFSET(ADestructibleProjectile, m_Movement); } \
	FORCEINLINE static uint32 __PPO__m_DestroyTimeMax() { return STRUCT_OFFSET(ADestructibleProjectile, m_DestroyTimeMax); }


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_9_PROLOG
#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_INCLASS \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class ADestructibleProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Effect_DestructibleProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
