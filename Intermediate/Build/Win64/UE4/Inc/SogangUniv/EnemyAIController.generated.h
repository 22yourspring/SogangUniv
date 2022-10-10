// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define SOGANGUNIV_EnemyAIController_generated_h

#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_RPC_WRAPPERS
#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIController)


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_AITree() { return STRUCT_OFFSET(AEnemyAIController, m_AITree); } \
	FORCEINLINE static uint32 __PPO__m_AIBlackboard() { return STRUCT_OFFSET(AEnemyAIController, m_AIBlackboard); }


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_15_PROLOG
#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_INCLASS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Enemy_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
