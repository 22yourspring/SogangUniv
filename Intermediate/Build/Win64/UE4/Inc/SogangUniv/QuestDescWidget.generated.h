// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture2D;
#ifdef SOGANGUNIV_QuestDescWidget_generated_h
#error "QuestDescWidget.generated.h already included, missing '#pragma once' in QuestDescWidget.h"
#endif
#define SOGANGUNIV_QuestDescWidget_generated_h

#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadImageFromDisk); \
	DECLARE_FUNCTION(execTestClick);


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadImageFromDisk); \
	DECLARE_FUNCTION(execTestClick);


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestDescWidget(); \
	friend struct Z_Construct_UClass_UQuestDescWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestDescWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UQuestDescWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUQuestDescWidget(); \
	friend struct Z_Construct_UClass_UQuestDescWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestDescWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UQuestDescWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestDescWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestDescWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDescWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDescWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDescWidget(UQuestDescWidget&&); \
	NO_API UQuestDescWidget(const UQuestDescWidget&); \
public:


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestDescWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestDescWidget(UQuestDescWidget&&); \
	NO_API UQuestDescWidget(const UQuestDescWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestDescWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestDescWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestDescWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_NameText() { return STRUCT_OFFSET(UQuestDescWidget, m_NameText); } \
	FORCEINLINE static uint32 __PPO__m_DescText() { return STRUCT_OFFSET(UQuestDescWidget, m_DescText); } \
	FORCEINLINE static uint32 __PPO__m_CheckButton() { return STRUCT_OFFSET(UQuestDescWidget, m_CheckButton); } \
	FORCEINLINE static uint32 __PPO__m_Image() { return STRUCT_OFFSET(UQuestDescWidget, m_Image); }


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_16_PROLOG
#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_INCLASS \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UQuestDescWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_QuestDescWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
