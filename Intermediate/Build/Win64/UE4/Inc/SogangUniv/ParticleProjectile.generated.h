// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
#ifdef SOGANGUNIV_ParticleProjectile_generated_h
#error "ParticleProjectile.generated.h already included, missing '#pragma once' in ParticleProjectile.h"
#endif
#define SOGANGUNIV_ParticleProjectile_generated_h

#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProjectileStop);


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProjectileStop);


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParticleProjectile(); \
	friend struct Z_Construct_UClass_AParticleProjectile_Statics; \
public: \
	DECLARE_CLASS(AParticleProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AParticleProjectile)


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParticleProjectile(); \
	friend struct Z_Construct_UClass_AParticleProjectile_Statics; \
public: \
	DECLARE_CLASS(AParticleProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AParticleProjectile)


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParticleProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParticleProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticleProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticleProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticleProjectile(AParticleProjectile&&); \
	NO_API AParticleProjectile(const AParticleProjectile&); \
public:


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticleProjectile(AParticleProjectile&&); \
	NO_API AParticleProjectile(const AParticleProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticleProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticleProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParticleProjectile)


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Body() { return STRUCT_OFFSET(AParticleProjectile, m_Body); } \
	FORCEINLINE static uint32 __PPO__m_Particle() { return STRUCT_OFFSET(AParticleProjectile, m_Particle); } \
	FORCEINLINE static uint32 __PPO__m_Movement() { return STRUCT_OFFSET(AParticleProjectile, m_Movement); } \
	FORCEINLINE static uint32 __PPO__m_Distance() { return STRUCT_OFFSET(AParticleProjectile, m_Distance); }


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_9_PROLOG
#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_INCLASS \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class AParticleProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Effect_ParticleProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
