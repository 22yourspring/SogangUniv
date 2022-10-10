// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Effect/QuestRoomDecal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestRoomDecal() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_AQuestRoomDecal_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AQuestRoomDecal();
	SOGANGUNIV_API UClass* Z_Construct_UClass_AEffectDecal();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void AQuestRoomDecal::StaticRegisterNativesAQuestRoomDecal()
	{
	}
	UClass* Z_Construct_UClass_AQuestRoomDecal_NoRegister()
	{
		return AQuestRoomDecal::StaticClass();
	}
	struct Z_Construct_UClass_AQuestRoomDecal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AQuestRoomDecal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEffectDecal,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AQuestRoomDecal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Effect/QuestRoomDecal.h" },
		{ "ModuleRelativePath", "Effect/QuestRoomDecal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AQuestRoomDecal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuestRoomDecal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AQuestRoomDecal_Statics::ClassParams = {
		&AQuestRoomDecal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AQuestRoomDecal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AQuestRoomDecal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AQuestRoomDecal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AQuestRoomDecal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AQuestRoomDecal, 2524426414);
	template<> SOGANGUNIV_API UClass* StaticClass<AQuestRoomDecal>()
	{
		return AQuestRoomDecal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AQuestRoomDecal(Z_Construct_UClass_AQuestRoomDecal, &AQuestRoomDecal::StaticClass, TEXT("/Script/SogangUniv"), TEXT("AQuestRoomDecal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AQuestRoomDecal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
