// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/SelectPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectPlayer() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ASelectPlayer_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ASelectPlayer();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo();
// End Cross Module References
	void ASelectPlayer::StaticRegisterNativesASelectPlayer()
	{
	}
	UClass* Z_Construct_UClass_ASelectPlayer_NoRegister()
	{
		return ASelectPlayer::StaticClass();
	}
	struct Z_Construct_UClass_ASelectPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PlayerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASelectPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectPlayer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SelectPlayer.h" },
		{ "ModuleRelativePath", "Player/SelectPlayer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASelectPlayer_Statics::NewProp_m_PlayerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SelectPlayer" },
		{ "ModuleRelativePath", "Player/SelectPlayer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASelectPlayer_Statics::NewProp_m_PlayerInfo = { "m_PlayerInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASelectPlayer, m_PlayerInfo), Z_Construct_UScriptStruct_FPlayerInfo, METADATA_PARAMS(Z_Construct_UClass_ASelectPlayer_Statics::NewProp_m_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASelectPlayer_Statics::NewProp_m_PlayerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASelectPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASelectPlayer_Statics::NewProp_m_PlayerInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASelectPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASelectPlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASelectPlayer_Statics::ClassParams = {
		&ASelectPlayer::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASelectPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASelectPlayer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASelectPlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASelectPlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASelectPlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASelectPlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASelectPlayer, 108460822);
	template<> SOGANGUNIV_API UClass* StaticClass<ASelectPlayer>()
	{
		return ASelectPlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASelectPlayer(Z_Construct_UClass_ASelectPlayer, &ASelectPlayer::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ASelectPlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASelectPlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
