// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_SaveSystem_generated_h
#error "SaveSystem.generated.h already included, missing '#pragma once' in SaveSystem.h"
#endif
#define SOGANGUNIV_SaveSystem_generated_h

#define SogangUniv_Source_SogangUniv_SaveSystem_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestingData_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct();


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FQuestingData>();

#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_RPC_WRAPPERS
#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS
#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSaveSystem(); \
	friend struct Z_Construct_UClass_USaveSystem_Statics; \
public: \
	DECLARE_CLASS(USaveSystem, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(USaveSystem)


#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUSaveSystem(); \
	friend struct Z_Construct_UClass_USaveSystem_Statics; \
public: \
	DECLARE_CLASS(USaveSystem, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(USaveSystem)


#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveSystem(USaveSystem&&); \
	NO_API USaveSystem(const USaveSystem&); \
public:


#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USaveSystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USaveSystem(USaveSystem&&); \
	NO_API USaveSystem(const USaveSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USaveSystem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USaveSystem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USaveSystem)


#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_PlayerName() { return STRUCT_OFFSET(USaveSystem, m_PlayerName); } \
	FORCEINLINE static uint32 __PPO__m_dailyQuestList() { return STRUCT_OFFSET(USaveSystem, m_dailyQuestList); } \
	FORCEINLINE static uint32 __PPO__m_day() { return STRUCT_OFFSET(USaveSystem, m_day); } \
	FORCEINLINE static uint32 __PPO__m_uniqueKey() { return STRUCT_OFFSET(USaveSystem, m_uniqueKey); } \
	FORCEINLINE static uint32 __PPO__m_questingList() { return STRUCT_OFFSET(USaveSystem, m_questingList); } \
	FORCEINLINE static uint32 __PPO__m_coin() { return STRUCT_OFFSET(USaveSystem, m_coin); }


#define SogangUniv_Source_SogangUniv_SaveSystem_h_37_PROLOG
#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_INCLASS \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_SaveSystem_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_SaveSystem_h_40_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class USaveSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_SaveSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
