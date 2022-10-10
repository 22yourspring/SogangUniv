// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SOGANGUNIV_Trigger_generated_h
#error "Trigger.generated.h already included, missing '#pragma once' in Trigger.h"
#endif
#define SOGANGUNIV_Trigger_generated_h

#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_9_DELEGATE \
static inline void FTriggerDelegate_DelegateWrapper(const FMulticastScriptDelegate& TriggerDelegate) \
{ \
	TriggerDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTriggerEndOverlap); \
	DECLARE_FUNCTION(execTriggerBeginOverlap);


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTriggerEndOverlap); \
	DECLARE_FUNCTION(execTriggerBeginOverlap);


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrigger(); \
	friend struct Z_Construct_UClass_ATrigger_Statics; \
public: \
	DECLARE_CLASS(ATrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(ATrigger)


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_INCLASS \
private: \
	static void StaticRegisterNativesATrigger(); \
	friend struct Z_Construct_UClass_ATrigger_Statics; \
public: \
	DECLARE_CLASS(ATrigger, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(ATrigger)


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrigger(ATrigger&&); \
	NO_API ATrigger(const ATrigger&); \
public:


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrigger(ATrigger&&); \
	NO_API ATrigger(const ATrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrigger)


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Trigger() { return STRUCT_OFFSET(ATrigger, m_Trigger); } \
	FORCEINLINE static uint32 __PPO__m_ShapeType() { return STRUCT_OFFSET(ATrigger, m_ShapeType); } \
	FORCEINLINE static uint32 __PPO__m_TriggerBeginDelegate() { return STRUCT_OFFSET(ATrigger, m_TriggerBeginDelegate); } \
	FORCEINLINE static uint32 __PPO__m_TriggerEndDelegate() { return STRUCT_OFFSET(ATrigger, m_TriggerEndDelegate); }


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_11_PROLOG
#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_INCLASS \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Trigger_Trigger_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class ATrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Trigger_Trigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
