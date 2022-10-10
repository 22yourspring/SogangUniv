// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/HPBar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHPBar() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UHPBar_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UHPBar();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	void UHPBar::StaticRegisterNativesUHPBar()
	{
	}
	UClass* Z_Construct_UClass_UHPBar_NoRegister()
	{
		return UHPBar::StaticClass();
	}
	struct Z_Construct_UClass_UHPBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HPBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_NameText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHPBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHPBar_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/HPBar.h" },
		{ "ModuleRelativePath", "UI/HPBar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHPBar_Statics::NewProp_m_HPBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HPBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HPBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHPBar_Statics::NewProp_m_HPBar = { "m_HPBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHPBar, m_HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHPBar_Statics::NewProp_m_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHPBar_Statics::NewProp_m_HPBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHPBar_Statics::NewProp_m_NameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "HPBar" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/HPBar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHPBar_Statics::NewProp_m_NameText = { "m_NameText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHPBar, m_NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHPBar_Statics::NewProp_m_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHPBar_Statics::NewProp_m_NameText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHPBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPBar_Statics::NewProp_m_HPBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHPBar_Statics::NewProp_m_NameText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHPBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHPBar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHPBar_Statics::ClassParams = {
		&UHPBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHPBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHPBar_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHPBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHPBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHPBar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHPBar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHPBar, 3202265362);
	template<> SOGANGUNIV_API UClass* StaticClass<UHPBar>()
	{
		return UHPBar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHPBar(Z_Construct_UClass_UHPBar, &UHPBar::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UHPBar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHPBar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
