// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestDescCompleteListData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestDescCompleteListData() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestDescCompleteListData_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestDescCompleteListData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	void UQuestDescCompleteListData::StaticRegisterNativesUQuestDescCompleteListData()
	{
	}
	UClass* Z_Construct_UClass_UQuestDescCompleteListData_NoRegister()
	{
		return UQuestDescCompleteListData::StaticClass();
	}
	struct Z_Construct_UClass_UQuestDescCompleteListData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestDescCompleteListData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestDescCompleteListData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestDescCompleteListData.h" },
		{ "ModuleRelativePath", "UI/QuestDescCompleteListData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestDescCompleteListData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestDescCompleteListData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestDescCompleteListData_Statics::ClassParams = {
		&UQuestDescCompleteListData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UQuestDescCompleteListData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestDescCompleteListData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestDescCompleteListData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestDescCompleteListData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestDescCompleteListData, 1326567861);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestDescCompleteListData>()
	{
		return UQuestDescCompleteListData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestDescCompleteListData(Z_Construct_UClass_UQuestDescCompleteListData, &UQuestDescCompleteListData::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestDescCompleteListData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestDescCompleteListData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
