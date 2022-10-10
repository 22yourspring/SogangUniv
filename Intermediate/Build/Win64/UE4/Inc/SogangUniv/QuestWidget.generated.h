// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef SOGANGUNIV_QuestWidget_generated_h
#error "QuestWidget.generated.h already included, missing '#pragma once' in QuestWidget.h"
#endif
#define SOGANGUNIV_QuestWidget_generated_h

#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddQuestItemData); \
	DECLARE_FUNCTION(execSetQuestList); \
	DECLARE_FUNCTION(execQuestClick); \
	DECLARE_FUNCTION(execGetItemChildren); \
	DECLARE_FUNCTION(execItemHovered); \
	DECLARE_FUNCTION(execItemClick); \
	DECLARE_FUNCTION(execItemDoubleClick);


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddQuestItemData); \
	DECLARE_FUNCTION(execSetQuestList); \
	DECLARE_FUNCTION(execQuestClick); \
	DECLARE_FUNCTION(execGetItemChildren); \
	DECLARE_FUNCTION(execItemHovered); \
	DECLARE_FUNCTION(execItemClick); \
	DECLARE_FUNCTION(execItemDoubleClick);


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestWidget(); \
	friend struct Z_Construct_UClass_UQuestWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UQuestWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUQuestWidget(); \
	friend struct Z_Construct_UClass_UQuestWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UQuestWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestWidget(UQuestWidget&&); \
	NO_API UQuestWidget(const UQuestWidget&); \
public:


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestWidget(UQuestWidget&&); \
	NO_API UQuestWidget(const UQuestWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Menu() { return STRUCT_OFFSET(UQuestWidget, m_Menu); } \
	FORCEINLINE static uint32 __PPO__m_QuestDesc() { return STRUCT_OFFSET(UQuestWidget, m_QuestDesc); } \
	FORCEINLINE static uint32 __PPO__m_QuestList() { return STRUCT_OFFSET(UQuestWidget, m_QuestList); }


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_16_PROLOG
#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_INCLASS \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_QuestWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UQuestWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_QuestWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
