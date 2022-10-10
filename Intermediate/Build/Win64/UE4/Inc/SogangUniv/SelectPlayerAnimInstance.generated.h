// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_SelectPlayerAnimInstance_generated_h
#error "SelectPlayerAnimInstance.generated.h already included, missing '#pragma once' in SelectPlayerAnimInstance.h"
#endif
#define SOGANGUNIV_SelectPlayerAnimInstance_generated_h

#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_SPARSE_DATA
#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_TransitionIdle);


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_TransitionIdle);


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSelectPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_USelectPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USelectPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(USelectPlayerAnimInstance)


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUSelectPlayerAnimInstance(); \
	friend struct Z_Construct_UClass_USelectPlayerAnimInstance_Statics; \
public: \
	DECLARE_CLASS(USelectPlayerAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/SogangUniv"), NO_API) \
	DECLARE_SERIALIZER(USelectPlayerAnimInstance)


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USelectPlayerAnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USelectPlayerAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectPlayerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectPlayerAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectPlayerAnimInstance(USelectPlayerAnimInstance&&); \
	NO_API USelectPlayerAnimInstance(const USelectPlayerAnimInstance&); \
public:


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USelectPlayerAnimInstance(USelectPlayerAnimInstance&&); \
	NO_API USelectPlayerAnimInstance(const USelectPlayerAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USelectPlayerAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USelectPlayerAnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USelectPlayerAnimInstance)


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_AnimType() { return STRUCT_OFFSET(USelectPlayerAnimInstance, m_AnimType); }


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_20_PROLOG
#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_RPC_WRAPPERS \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_INCLASS \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_PRIVATE_PROPERTY_OFFSET \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_SPARSE_DATA \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_INCLASS_NO_PURE_DECLS \
	SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOGANGUNIV_API UClass* StaticClass<class USelectPlayerAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_Player_SelectPlayerAnimInstance_h


#define FOREACH_ENUM_ESELECTPLAYERANIMTYPE(op) \
	op(ESelectPlayerAnimType::Idle) \
	op(ESelectPlayerAnimType::Select) 

enum class ESelectPlayerAnimType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<ESelectPlayerAnimType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
