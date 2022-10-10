// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_SogangUnivGameInstance_generated_h
#error "SogangUnivGameInstance.generated.h already included, missing '#pragma once' in SogangUnivGameInstance.h"
#endif
#define SOGANGUNIV_SogangUnivGameInstance_generated_h

#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_65_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerTableInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FPlayerTableInfo>();

#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEnemyTableInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FEnemyTableInfo>();

#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_RPC_WRAPPERS
#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_RPC_WRAPPERS_NO_PURE_DECLS
#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSogangUnivGameInstance(); \
	friend struct Z_Construct_UClass_USogangUnivGameInstance_Statics; \
public: \
	DECLARE_CLASS(USogangUnivGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(USogangUnivGameInstance)


#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_INCLASS \
private: \
	static void StaticRegisterNativesUSogangUnivGameInstance(); \
	friend struct Z_Construct_UClass_USogangUnivGameInstance_Statics; \
public: \
	DECLARE_CLASS(USogangUnivGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(USogangUnivGameInstance)


#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USogangUnivGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USogangUnivGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USogangUnivGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USogangUnivGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USogangUnivGameInstance(USogangUnivGameInstance&&); \
	NO_API USogangUnivGameInstance(const USogangUnivGameInstance&); \
public:


#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USogangUnivGameInstance(USogangUnivGameInstance&&); \
	NO_API USogangUnivGameInstance(const USogangUnivGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USogangUnivGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USogangUnivGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USogangUnivGameInstance)


#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_EnemyInfoTable() { return STRUCT_OFFSET(USogangUnivGameInstance, m_EnemyInfoTable); } \
	FORCEINLINE static uint32 __PPO__m_PlayerInfoTable() { return STRUCT_OFFSET(USogangUnivGameInstance, m_PlayerInfoTable); } \
	FORCEINLINE static uint32 __PPO__m_UIItemInfoTable() { return STRUCT_OFFSET(USogangUnivGameInstance, m_UIItemInfoTable); } \
	FORCEINLINE static uint32 __PPO__m_QuestInfoTable() { return STRUCT_OFFSET(USogangUnivGameInstance, m_QuestInfoTable); } \
	FORCEINLINE static uint32 __PPO__m_DailyQuestInfoTable() { return STRUCT_OFFSET(USogangUnivGameInstance, m_DailyQuestInfoTable); } \
	FORCEINLINE static uint32 __PPO__m_SensingQuestInfoTable() { return STRUCT_OFFSET(USogangUnivGameInstance, m_SensingQuestInfoTable); } \
	FORCEINLINE static uint32 __PPO__m_StretchingQuestInfoTable() { return STRUCT_OFFSET(USogangUnivGameInstance, m_StretchingQuestInfoTable); } \
	FORCEINLINE static uint32 __PPO__m_NpcTrigger() { return STRUCT_OFFSET(USogangUnivGameInstance, m_NpcTrigger); } \
	FORCEINLINE static uint32 __PPO__m_npcType() { return STRUCT_OFFSET(USogangUnivGameInstance, m_npcType); } \
	FORCEINLINE static uint32 __PPO__percentList() { return STRUCT_OFFSET(USogangUnivGameInstance, percentList); }


#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_114_PROLOG
#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_INCLASS \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h_117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class USogangUnivGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_SogangUnivGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
