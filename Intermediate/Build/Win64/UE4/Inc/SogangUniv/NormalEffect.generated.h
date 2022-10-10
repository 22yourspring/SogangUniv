// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UParticleSystemComponent;
#ifdef SOGANGUNIV_NormalEffect_generated_h
#error "NormalEffect.generated.h already included, missing '#pragma once' in NormalEffect.h"
#endif
#define SOGANGUNIV_NormalEffect_generated_h

#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execParticleFinish);


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execParticleFinish);


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANormalEffect(); \
	friend struct Z_Construct_UClass_ANormalEffect_Statics; \
public: \
	DECLARE_CLASS(ANormalEffect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(ANormalEffect)


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANormalEffect(); \
	friend struct Z_Construct_UClass_ANormalEffect_Statics; \
public: \
	DECLARE_CLASS(ANormalEffect, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(ANormalEffect)


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANormalEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANormalEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANormalEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANormalEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANormalEffect(ANormalEffect&&); \
	NO_API ANormalEffect(const ANormalEffect&); \
public:


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANormalEffect(ANormalEffect&&); \
	NO_API ANormalEffect(const ANormalEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANormalEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANormalEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANormalEffect)


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ParticleSystem() { return STRUCT_OFFSET(ANormalEffect, m_ParticleSystem); }


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_9_PROLOG
#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_INCLASS \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Effect_NormalEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class ANormalEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Effect_NormalEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
