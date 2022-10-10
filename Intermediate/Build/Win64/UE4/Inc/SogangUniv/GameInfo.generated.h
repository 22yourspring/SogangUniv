// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOGANGUNIV_GameInfo_generated_h
#error "GameInfo.generated.h already included, missing '#pragma once' in GameInfo.h"
#endif
#define SOGANGUNIV_GameInfo_generated_h

#define SogangUniv_Source_SogangUniv_GameInfo_h_228_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCookieMessageInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FCookieMessageInfo>();

#define SogangUniv_Source_SogangUniv_GameInfo_h_212_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestTableInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FQuestTableInfo>();

#define SogangUniv_Source_SogangUniv_GameInfo_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct();


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FQuestInfo>();

#define SogangUniv_Source_SogangUniv_GameInfo_h_172_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQuestButtonInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct();


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FQuestButtonInfo>();

#define SogangUniv_Source_SogangUniv_GameInfo_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FQusetPlayInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct();


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FQusetPlayInfo>();

#define SogangUniv_Source_SogangUniv_GameInfo_h_150_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssetPathInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct();


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FAssetPathInfo>();

#define SogangUniv_Source_SogangUniv_GameInfo_h_138_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIItemTableInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FUIItemTableInfo>();

#define SogangUniv_Source_SogangUniv_GameInfo_h_89_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlayerInfo_Statics; \
	SOGANGUNIV_API static class UScriptStruct* StaticStruct();


template<> SOGANGUNIV_API UScriptStruct* StaticStruct<struct FPlayerInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SogangUniv_Source_SogangUniv_GameInfo_h


#define FOREACH_ENUM_NPCTYPE(op) \
	op(NpcType::SHOP) \
	op(NpcType::QUEST) 

enum class NpcType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<NpcType>();

#define FOREACH_ENUM_EQUESTSCRIPTTYPE(op) \
	op(EQuestScriptType::NONE) \
	op(EQuestScriptType::IMAGE_SEND) \
	op(EQuestScriptType::IMAGE_SEND_1) \
	op(EQuestScriptType::WRITE) 

enum class EQuestScriptType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<EQuestScriptType>();

#define FOREACH_ENUM_EQUESTBUTTONTYPE(op) \
	op(EQuestButtonType::NONE) \
	op(EQuestButtonType::NEXT) \
	op(EQuestButtonType::EXIT) \
	op(EQuestButtonType::REWARD) \
	op(EQuestButtonType::COMPLETE) \
	op(EQuestButtonType::QUESTING) 

enum class EQuestButtonType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<EQuestButtonType>();

#define FOREACH_ENUM_EQUESTTYPE(op) \
	op(EQuestType::SENSING) \
	op(EQuestType::NORMAL) \
	op(EQuestType::STRETCHING) \
	op(EQuestType::SLEEP) 

enum class EQuestType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<EQuestType>();

#define FOREACH_ENUM_ETRIGGERTYPE(op) \
	op(ETriggerType::Box) \
	op(ETriggerType::Sphere) \
	op(ETriggerType::Capsule) 

enum class ETriggerType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<ETriggerType>();

#define FOREACH_ENUM_ECHECKDISTANCETYPE(op) \
	op(ECheckDistanceType::Trace) \
	op(ECheckDistanceType::Attack) 

enum class ECheckDistanceType : uint8;
template<> SOGANGUNIV_API UEnum* StaticEnum<ECheckDistanceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
