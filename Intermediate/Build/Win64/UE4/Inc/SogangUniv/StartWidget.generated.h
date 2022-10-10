// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_StartWidget_generated_h
#error "StartWidget.generated.h already included, missing '#pragma once' in StartWidget.h"
#endif
#define SOGANGUNIV_StartWidget_generated_h

#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execQuitButton_OnPressed); \
	DECLARE_FUNCTION(execStartButton_OnPressed); \
	DECLARE_FUNCTION(execQuitButton); \
	DECLARE_FUNCTION(execStartButton);


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execQuitButton_OnPressed); \
	DECLARE_FUNCTION(execStartButton_OnPressed); \
	DECLARE_FUNCTION(execQuitButton); \
	DECLARE_FUNCTION(execStartButton);


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStartWidget(); \
	friend struct Z_Construct_UClass_UStartWidget_Statics; \
public: \
	DECLARE_CLASS(UStartWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UStartWidget)


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUStartWidget(); \
	friend struct Z_Construct_UClass_UStartWidget_Statics; \
public: \
	DECLARE_CLASS(UStartWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(UStartWidget)


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartWidget(UStartWidget&&); \
	NO_API UStartWidget(const UStartWidget&); \
public:


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStartWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStartWidget(UStartWidget&&); \
	NO_API UStartWidget(const UStartWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStartWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStartWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStartWidget)


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_StartButton() { return STRUCT_OFFSET(UStartWidget, m_StartButton); } \
	FORCEINLINE static uint32 __PPO__m_QuitButton() { return STRUCT_OFFSET(UStartWidget, m_QuitButton); } \
	FORCEINLINE static uint32 __PPO__m_StartButtonMouseOn() { return STRUCT_OFFSET(UStartWidget, m_StartButtonMouseOn); } \
	FORCEINLINE static uint32 __PPO__m_QuitButtonMouseOn() { return STRUCT_OFFSET(UStartWidget, m_QuitButtonMouseOn); }


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_14_PROLOG
#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_INCLASS \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_UI_StartWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class UStartWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_UI_StartWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
