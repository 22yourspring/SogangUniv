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
enum class EQuestButtonType : uint8;
enum class EQuestScriptType : uint8;
#ifdef SOGANGUNIV_QuestNPCWidget_generated_h
#error "QuestNPCWidget.generated.h already included, missing '#pragma once' in QuestNPCWidget.h"
#endif
#define SOGANGUNIV_QuestNPCWidget_generated_h

#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNativePushImagePath); \
	DECLARE_FUNCTION(execAddImagePath); \
	DECLARE_FUNCTION(execLoadImageFromDisk); \
	DECLARE_FUNCTION(execAddListItemByName); \
	DECLARE_FUNCTION(execAddListItemByID); \
	DECLARE_FUNCTION(execSetRender); \
	DECLARE_FUNCTION(execItemClick);


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNativePushImagePath); \
	DECLARE_FUNCTION(execAddImagePath); \
	DECLARE_FUNCTION(execLoadImageFromDisk); \
	DECLARE_FUNCTION(execAddListItemByName); \
	DECLARE_FUNCTION(execAddListItemByID); \
	DECLARE_FUNCTION(execSetRender); \
	DECLARE_FUNCTION(execItemClick);


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_EVENT_PARMS \
	struct QuestNPCWidget_eventPushImagePath_Parms \
	{ \
		FString path; \
		FString ext; \
	};


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_CALLBACK_WRAPPERS
#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuestNPCWidget(); \
	friend struct Z_Construct_UClass_UQuestNPCWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestNPCWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UQuestNPCWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUQuestNPCWidget(); \
	friend struct Z_Construct_UClass_UQuestNPCWidget_Statics; \
public: \
	DECLARE_CLASS(UQuestNPCWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UQuestNPCWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestNPCWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestNPCWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestNPCWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestNPCWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestNPCWidget(UQuestNPCWidget&&); \
	NO_API UQuestNPCWidget(const UQuestNPCWidget&); \
public:


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuestNPCWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuestNPCWidget(UQuestNPCWidget&&); \
	NO_API UQuestNPCWidget(const UQuestNPCWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuestNPCWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuestNPCWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuestNPCWidget)


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_pDesc() { return STRUCT_OFFSET(UQuestNPCWidget, m_pDesc); } \
	FORCEINLINE static uint32 __PPO__m_pList() { return STRUCT_OFFSET(UQuestNPCWidget, m_pList); } \
	FORCEINLINE static uint32 __PPO__m_defaultDesc() { return STRUCT_OFFSET(UQuestNPCWidget, m_defaultDesc); } \
	FORCEINLINE static uint32 __PPO__m_pImageSendPanel() { return STRUCT_OFFSET(UQuestNPCWidget, m_pImageSendPanel); } \
	FORCEINLINE static uint32 __PPO__m_pImage() { return STRUCT_OFFSET(UQuestNPCWidget, m_pImage); } \
	FORCEINLINE static uint32 __PPO__m_pImageSendButton() { return STRUCT_OFFSET(UQuestNPCWidget, m_pImageSendButton); } \
	FORCEINLINE static uint32 __PPO__m_pMinute() { return STRUCT_OFFSET(UQuestNPCWidget, m_pMinute); } \
	FORCEINLINE static uint32 __PPO__m_pClock() { return STRUCT_OFFSET(UQuestNPCWidget, m_pClock); } \
	FORCEINLINE static uint32 __PPO__m_pSleepPanel() { return STRUCT_OFFSET(UQuestNPCWidget, m_pSleepPanel); } \
	FORCEINLINE static uint32 __PPO__m_dailyQuestList() { return STRUCT_OFFSET(UQuestNPCWidget, m_dailyQuestList); } \
	FORCEINLINE static uint32 __PPO__m_imagePathList() { return STRUCT_OFFSET(UQuestNPCWidget, m_imagePathList); } \
	FORCEINLINE static uint32 __PPO__m_imageIndex() { return STRUCT_OFFSET(UQuestNPCWidget, m_imageIndex); } \
	FORCEINLINE static uint32 __PPO__m_pEditBox() { return STRUCT_OFFSET(UQuestNPCWidget, m_pEditBox); }


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_19_PROLOG \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_EVENT_PARMS


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_CALLBACK_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_INCLASS \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_CALLBACK_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UQuestNPCWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_QuestNPCWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
