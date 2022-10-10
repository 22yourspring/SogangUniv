// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestListeItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestListeItemData() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestListeItemData_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestListeItemData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void UQuestListeItemData::StaticRegisterNativesUQuestListeItemData()
	{
	}
	UClass* Z_Construct_UClass_UQuestListeItemData_NoRegister()
	{
		return UQuestListeItemData::StaticClass();
	}
	struct Z_Construct_UClass_UQuestListeItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestListeItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListeItemData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UI/QuestListeItemData.h" },
		{ "ModuleRelativePath", "UI/QuestListeItemData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestListeItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestListeItemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestListeItemData_Statics::ClassParams = {
		&UQuestListeItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestListeItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListeItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestListeItemData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestListeItemData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestListeItemData, 1995960585);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestListeItemData>()
	{
		return UQuestListeItemData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestListeItemData(Z_Construct_UClass_UQuestListeItemData, &UQuestListeItemData::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestListeItemData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestListeItemData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
