// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/GameInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfo() {}
// Cross Module References
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_NpcType();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EQuestScriptType();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EQuestButtonType();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EQuestType();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_ETriggerType();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_ECheckDistanceType();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FCookieMessageInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestTableInfo();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestInfo();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FQuestButtonInfo();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FQusetPlayInfo();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FAssetPathInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FUIItemTableInfo();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo();
// End Cross Module References
	static UEnum* NpcType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_NpcType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("NpcType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<NpcType>()
	{
		return NpcType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_NpcType(NpcType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("NpcType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_NpcType_Hash() { return 3618351403U; }
	UEnum* Z_Construct_UEnum_SogangUniv_NpcType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("NpcType"), 0, Get_Z_Construct_UEnum_SogangUniv_NpcType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "NpcType::SHOP", (int64)NpcType::SHOP },
				{ "NpcType::QUEST", (int64)NpcType::QUEST },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "QUEST.Name", "NpcType::QUEST" },
				{ "SHOP.Name", "NpcType::SHOP" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"NpcType",
				"NpcType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuestScriptType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_EQuestScriptType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EQuestScriptType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<EQuestScriptType>()
	{
		return EQuestScriptType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestScriptType(EQuestScriptType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("EQuestScriptType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_EQuestScriptType_Hash() { return 1169989051U; }
	UEnum* Z_Construct_UEnum_SogangUniv_EQuestScriptType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestScriptType"), 0, Get_Z_Construct_UEnum_SogangUniv_EQuestScriptType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestScriptType::NONE", (int64)EQuestScriptType::NONE },
				{ "EQuestScriptType::IMAGE_SEND", (int64)EQuestScriptType::IMAGE_SEND },
				{ "EQuestScriptType::IMAGE_SEND_1", (int64)EQuestScriptType::IMAGE_SEND_1 },
				{ "EQuestScriptType::WRITE", (int64)EQuestScriptType::WRITE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "IMAGE_SEND.Name", "EQuestScriptType::IMAGE_SEND" },
				{ "IMAGE_SEND_1.Name", "EQuestScriptType::IMAGE_SEND_1" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "NONE.Name", "EQuestScriptType::NONE" },
				{ "WRITE.Name", "EQuestScriptType::WRITE" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"EQuestScriptType",
				"EQuestScriptType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuestButtonType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_EQuestButtonType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EQuestButtonType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<EQuestButtonType>()
	{
		return EQuestButtonType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestButtonType(EQuestButtonType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("EQuestButtonType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_EQuestButtonType_Hash() { return 1179583871U; }
	UEnum* Z_Construct_UEnum_SogangUniv_EQuestButtonType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestButtonType"), 0, Get_Z_Construct_UEnum_SogangUniv_EQuestButtonType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestButtonType::NONE", (int64)EQuestButtonType::NONE },
				{ "EQuestButtonType::NEXT", (int64)EQuestButtonType::NEXT },
				{ "EQuestButtonType::EXIT", (int64)EQuestButtonType::EXIT },
				{ "EQuestButtonType::REWARD", (int64)EQuestButtonType::REWARD },
				{ "EQuestButtonType::COMPLETE", (int64)EQuestButtonType::COMPLETE },
				{ "EQuestButtonType::QUESTING", (int64)EQuestButtonType::QUESTING },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "COMPLETE.Name", "EQuestButtonType::COMPLETE" },
				{ "EXIT.Name", "EQuestButtonType::EXIT" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "NEXT.Name", "EQuestButtonType::NEXT" },
				{ "NONE.Name", "EQuestButtonType::NONE" },
				{ "QUESTING.Name", "EQuestButtonType::QUESTING" },
				{ "REWARD.Name", "EQuestButtonType::REWARD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"EQuestButtonType",
				"EQuestButtonType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EQuestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_EQuestType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EQuestType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<EQuestType>()
	{
		return EQuestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EQuestType(EQuestType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("EQuestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_EQuestType_Hash() { return 1204903950U; }
	UEnum* Z_Construct_UEnum_SogangUniv_EQuestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EQuestType"), 0, Get_Z_Construct_UEnum_SogangUniv_EQuestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EQuestType::SENSING", (int64)EQuestType::SENSING },
				{ "EQuestType::NORMAL", (int64)EQuestType::NORMAL },
				{ "EQuestType::STRETCHING", (int64)EQuestType::STRETCHING },
				{ "EQuestType::SLEEP", (int64)EQuestType::SLEEP },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "NORMAL.Name", "EQuestType::NORMAL" },
				{ "SENSING.Name", "EQuestType::SENSING" },
				{ "SLEEP.Name", "EQuestType::SLEEP" },
				{ "STRETCHING.Name", "EQuestType::STRETCHING" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"EQuestType",
				"EQuestType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETriggerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_ETriggerType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("ETriggerType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<ETriggerType>()
	{
		return ETriggerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETriggerType(ETriggerType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("ETriggerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_ETriggerType_Hash() { return 2398684385U; }
	UEnum* Z_Construct_UEnum_SogangUniv_ETriggerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETriggerType"), 0, Get_Z_Construct_UEnum_SogangUniv_ETriggerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETriggerType::Box", (int64)ETriggerType::Box },
				{ "ETriggerType::Sphere", (int64)ETriggerType::Sphere },
				{ "ETriggerType::Capsule", (int64)ETriggerType::Capsule },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Box.Name", "ETriggerType::Box" },
				{ "Capsule.Name", "ETriggerType::Capsule" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "Sphere.Name", "ETriggerType::Sphere" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"ETriggerType",
				"ETriggerType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECheckDistanceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_ECheckDistanceType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("ECheckDistanceType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<ECheckDistanceType>()
	{
		return ECheckDistanceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECheckDistanceType(ECheckDistanceType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("ECheckDistanceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_ECheckDistanceType_Hash() { return 3048833652U; }
	UEnum* Z_Construct_UEnum_SogangUniv_ECheckDistanceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECheckDistanceType"), 0, Get_Z_Construct_UEnum_SogangUniv_ECheckDistanceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECheckDistanceType::Trace", (int64)ECheckDistanceType::Trace },
				{ "ECheckDistanceType::Attack", (int64)ECheckDistanceType::Attack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "ECheckDistanceType::Attack" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "Trace.Name", "ECheckDistanceType::Trace" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"ECheckDistanceType",
				"ECheckDistanceType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}

static_assert(std::is_polymorphic<FCookieMessageInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCookieMessageInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FCookieMessageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FCookieMessageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCookieMessageInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("CookieMessageInfo"), sizeof(FCookieMessageInfo), Get_Z_Construct_UScriptStruct_FCookieMessageInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FCookieMessageInfo>()
{
	return FCookieMessageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCookieMessageInfo(FCookieMessageInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("CookieMessageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFCookieMessageInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFCookieMessageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CookieMessageInfo")),new UScriptStruct::TCppStructOps<FCookieMessageInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFCookieMessageInfo;
	struct Z_Construct_UScriptStruct_FCookieMessageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCookieMessageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::NewProp_Message_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CookieMessageInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCookieMessageInfo, Message), METADATA_PARAMS(Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::NewProp_Message_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::NewProp_Message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::NewProp_Message,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"CookieMessageInfo",
		sizeof(FCookieMessageInfo),
		alignof(FCookieMessageInfo),
		Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCookieMessageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCookieMessageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CookieMessageInfo"), sizeof(FCookieMessageInfo), Get_Z_Construct_UScriptStruct_FCookieMessageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCookieMessageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCookieMessageInfo_Hash() { return 527868106U; }

static_assert(std::is_polymorphic<FQuestTableInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestTableInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FQuestTableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FQuestTableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestTableInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("QuestTableInfo"), sizeof(FQuestTableInfo), Get_Z_Construct_UScriptStruct_FQuestTableInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FQuestTableInfo>()
{
	return FQuestTableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestTableInfo(FQuestTableInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("QuestTableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFQuestTableInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFQuestTableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestTableInfo")),new UScriptStruct::TCppStructOps<FQuestTableInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFQuestTableInfo;
	struct Z_Construct_UScriptStruct_FQuestTableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfoArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestTableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestTableInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTableInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestTableInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTableInfo, Type), Z_Construct_UEnum_SogangUniv_EQuestType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_InfoArray_Inner = { "InfoArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_InfoArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestTableInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_InfoArray = { "InfoArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestTableInfo, InfoArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_InfoArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_InfoArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestTableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_InfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestTableInfo_Statics::NewProp_InfoArray,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestTableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QuestTableInfo",
		sizeof(FQuestTableInfo),
		alignof(FQuestTableInfo),
		Z_Construct_UScriptStruct_FQuestTableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestTableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestTableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestTableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestTableInfo"), sizeof(FQuestTableInfo), Get_Z_Construct_UScriptStruct_FQuestTableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestTableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestTableInfo_Hash() { return 1852991504U; }
class UScriptStruct* FQuestInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FQuestInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("QuestInfo"), sizeof(FQuestInfo), Get_Z_Construct_UScriptStruct_FQuestInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FQuestInfo>()
{
	return FQuestInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestInfo(FQuestInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("QuestInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFQuestInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFQuestInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestInfo")),new UScriptStruct::TCppStructOps<FQuestInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFQuestInfo;
	struct Z_Construct_UScriptStruct_FQuestInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DescImagePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ButtonList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ButtonList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ButtonList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Desc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, Desc), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Desc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_DescImagePath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_DescImagePath = { "DescImagePath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, DescImagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_DescImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_DescImagePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, Type), Z_Construct_UEnum_SogangUniv_EQuestScriptType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_m_ButtonList_Inner = { "m_ButtonList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FQuestButtonInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_m_ButtonList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_m_ButtonList = { "m_ButtonList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestInfo, m_ButtonList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_m_ButtonList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_m_ButtonList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Desc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_DescImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_m_ButtonList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestInfo_Statics::NewProp_m_ButtonList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		nullptr,
		&NewStructOps,
		"QuestInfo",
		sizeof(FQuestInfo),
		alignof(FQuestInfo),
		Z_Construct_UScriptStruct_FQuestInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestInfo"), sizeof(FQuestInfo), Get_Z_Construct_UScriptStruct_FQuestInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestInfo_Hash() { return 3894900024U; }
class UScriptStruct* FQuestButtonInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FQuestButtonInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestButtonInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("QuestButtonInfo"), sizeof(FQuestButtonInfo), Get_Z_Construct_UScriptStruct_FQuestButtonInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FQuestButtonInfo>()
{
	return FQuestButtonInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuestButtonInfo(FQuestButtonInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("QuestButtonInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFQuestButtonInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFQuestButtonInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuestButtonInfo")),new UScriptStruct::TCppStructOps<FQuestButtonInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFQuestButtonInfo;
	struct Z_Construct_UScriptStruct_FQuestButtonInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_name;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_reward_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_reward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestButtonInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestButtonInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_name = { "m_name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestButtonInfo, m_name), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_name_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestButtonInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_type = { "m_type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestButtonInfo, m_type), Z_Construct_UEnum_SogangUniv_EQuestButtonType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_index_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestButtonInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_index = { "m_index", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestButtonInfo, m_index), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_index_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_reward_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestButtonInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_reward = { "m_reward", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestButtonInfo, m_reward), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_reward_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_reward_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_timer_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestButtonInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_timer = { "m_timer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuestButtonInfo, m_timer), METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_timer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_reward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::NewProp_m_timer,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		nullptr,
		&NewStructOps,
		"QuestButtonInfo",
		sizeof(FQuestButtonInfo),
		alignof(FQuestButtonInfo),
		Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuestButtonInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuestButtonInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuestButtonInfo"), sizeof(FQuestButtonInfo), Get_Z_Construct_UScriptStruct_FQuestButtonInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuestButtonInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuestButtonInfo_Hash() { return 3585384911U; }
class UScriptStruct* FQusetPlayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FQusetPlayInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQusetPlayInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("QusetPlayInfo"), sizeof(FQusetPlayInfo), Get_Z_Construct_UScriptStruct_FQusetPlayInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FQusetPlayInfo>()
{
	return FQusetPlayInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQusetPlayInfo(FQusetPlayInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("QusetPlayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFQusetPlayInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFQusetPlayInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QusetPlayInfo")),new UScriptStruct::TCppStructOps<FQusetPlayInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFQusetPlayInfo;
	struct Z_Construct_UScriptStruct_FQusetPlayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_complete_MetaData[];
#endif
		static void NewProp_complete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_complete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQusetPlayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_complete_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_complete_SetBit(void* Obj)
	{
		((FQusetPlayInfo*)Obj)->complete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_complete = { "complete", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FQusetPlayInfo), &Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_complete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_complete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_complete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_value_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQusetPlayInfo, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_complete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::NewProp_value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		nullptr,
		&NewStructOps,
		"QusetPlayInfo",
		sizeof(FQusetPlayInfo),
		alignof(FQusetPlayInfo),
		Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQusetPlayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQusetPlayInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QusetPlayInfo"), sizeof(FQusetPlayInfo), Get_Z_Construct_UScriptStruct_FQusetPlayInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQusetPlayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQusetPlayInfo_Hash() { return 931412469U; }
class UScriptStruct* FAssetPathInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FAssetPathInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetPathInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("AssetPathInfo"), sizeof(FAssetPathInfo), Get_Z_Construct_UScriptStruct_FAssetPathInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FAssetPathInfo>()
{
	return FAssetPathInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetPathInfo(FAssetPathInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("AssetPathInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFAssetPathInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFAssetPathInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetPathInfo")),new UScriptStruct::TCppStructOps<FAssetPathInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFAssetPathInfo;
	struct Z_Construct_UScriptStruct_FAssetPathInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPathInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetPathInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetPathInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Path_MetaData[] = {
		{ "Category", "Path" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetPathInfo, Path), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Path_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetPathInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetPathInfo_Statics::NewProp_Path,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetPathInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		nullptr,
		&NewStructOps,
		"AssetPathInfo",
		sizeof(FAssetPathInfo),
		alignof(FAssetPathInfo),
		Z_Construct_UScriptStruct_FAssetPathInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPathInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetPathInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetPathInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetPathInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetPathInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetPathInfo"), sizeof(FAssetPathInfo), Get_Z_Construct_UScriptStruct_FAssetPathInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetPathInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetPathInfo_Hash() { return 1830334257U; }

static_assert(std::is_polymorphic<FUIItemTableInfo>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FUIItemTableInfo cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FUIItemTableInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FUIItemTableInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIItemTableInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("UIItemTableInfo"), sizeof(FUIItemTableInfo), Get_Z_Construct_UScriptStruct_FUIItemTableInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FUIItemTableInfo>()
{
	return FUIItemTableInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUIItemTableInfo(FUIItemTableInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("UIItemTableInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFUIItemTableInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFUIItemTableInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UIItemTableInfo")),new UScriptStruct::TCppStructOps<FUIItemTableInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFUIItemTableInfo;
	struct Z_Construct_UScriptStruct_FUIItemTableInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_IconPath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIItemTableInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UIItemTableInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUIItemTableInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_IconPath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UIItemTableInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_IconPath = { "IconPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUIItemTableInfo, IconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_IconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_IconPath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::NewProp_IconPath,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"UIItemTableInfo",
		sizeof(FUIItemTableInfo),
		alignof(FUIItemTableInfo),
		Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIItemTableInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUIItemTableInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UIItemTableInfo"), sizeof(FUIItemTableInfo), Get_Z_Construct_UScriptStruct_FUIItemTableInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUIItemTableInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUIItemTableInfo_Hash() { return 3791674530U; }
class UScriptStruct* FPlayerInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOGANGUNIV_API uint32 Get_Z_Construct_UScriptStruct_FPlayerInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerInfo, Z_Construct_UPackage__Script_SogangUniv(), TEXT("PlayerInfo"), sizeof(FPlayerInfo), Get_Z_Construct_UScriptStruct_FPlayerInfo_Hash());
	}
	return Singleton;
}
template<> SOGANGUNIV_API UScriptStruct* StaticStruct<FPlayerInfo>()
{
	return FPlayerInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerInfo(FPlayerInfo::StaticStruct, TEXT("/Script/SogangUniv"), TEXT("PlayerInfo"), false, nullptr, nullptr);
static struct FScriptStruct_SogangUniv_StaticRegisterNativesFPlayerInfo
{
	FScriptStruct_SogangUniv_StaticRegisterNativesFPlayerInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerInfo")),new UScriptStruct::TCppStructOps<FPlayerInfo>);
	}
} ScriptStruct_SogangUniv_StaticRegisterNativesFPlayerInfo;
	struct Z_Construct_UScriptStruct_FPlayerInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Attack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Armor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Armor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Exp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Exp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Coin_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Coin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Name_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Attack_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Attack = { "Attack", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, Attack), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Attack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Attack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Armor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Armor = { "Armor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, Armor), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Armor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Armor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, HP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HPMax = { "HPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, HPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MP_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MP = { "MP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, MP), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MPMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MPMax = { "MPMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, MPMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MPMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Level_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Exp_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Exp = { "Exp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, Exp), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Exp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Exp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Coin_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Coin = { "Coin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, Coin), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Coin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Coin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackDistance = { "AttackDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, AttackDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackSpeed = { "AttackSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, AttackSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackAngle_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackAngle = { "AttackAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, AttackAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerInfo" },
		{ "ModuleRelativePath", "GameInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerInfo, MoveSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Attack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Armor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_HPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Exp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_Coin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_AttackAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerInfo_Statics::NewProp_MoveSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
		nullptr,
		&NewStructOps,
		"PlayerInfo",
		sizeof(FPlayerInfo),
		alignof(FPlayerInfo),
		Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerInfo"), sizeof(FPlayerInfo), Get_Z_Construct_UScriptStruct_FPlayerInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerInfo_Hash() { return 2120597188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
