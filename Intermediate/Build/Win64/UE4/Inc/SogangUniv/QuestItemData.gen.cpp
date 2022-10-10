// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestItemData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestItemData() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestItemData_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestItemData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	void UQuestItemData::StaticRegisterNativesUQuestItemData()
	{
	}
	UClass* Z_Construct_UClass_UQuestItemData_NoRegister()
	{
		return UQuestItemData::StaticClass();
	}
	struct Z_Construct_UClass_UQuestItemData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_NameText;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ChildArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChildArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ChildArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestItemData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestItemData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestItemData.h" },
		{ "ModuleRelativePath", "UI/QuestItemData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_NameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestItemData" },
		{ "ModuleRelativePath", "UI/QuestItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_NameText = { "m_NameText", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestItemData, m_NameText), METADATA_PARAMS(Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_NameText_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_ChildArray_Inner = { "m_ChildArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_ChildArray_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestItemData" },
		{ "ModuleRelativePath", "UI/QuestItemData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_ChildArray = { "m_ChildArray", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestItemData, m_ChildArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_ChildArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_ChildArray_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_NameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_ChildArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItemData_Statics::NewProp_m_ChildArray,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestItemData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestItemData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestItemData_Statics::ClassParams = {
		&UQuestItemData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UQuestItemData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestItemData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItemData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestItemData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestItemData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestItemData, 1225836525);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestItemData>()
	{
		return UQuestItemData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestItemData(Z_Construct_UClass_UQuestItemData, &UQuestItemData::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestItemData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestItemData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
