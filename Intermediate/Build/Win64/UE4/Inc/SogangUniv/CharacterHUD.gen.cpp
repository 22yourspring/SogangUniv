// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/CharacterHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterHUD() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterHUD_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	void UCharacterHUD::StaticRegisterNativesUCharacterHUD()
	{
	}
	UClass* Z_Construct_UClass_UCharacterHUD_NoRegister()
	{
		return UCharacterHUD::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CharacterPic_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CharacterPic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_NameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HPBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MPBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_MPBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUD_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI/CharacterHUD.h" },
		{ "ModuleRelativePath", "UI/CharacterHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_CharacterPic_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_CharacterPic = { "m_CharacterPic", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterHUD, m_CharacterPic), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_CharacterPic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_CharacterPic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_NameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_NameText = { "m_NameText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterHUD, m_NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_NameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_HPBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_HPBar = { "m_HPBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterHUD, m_HPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_HPBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_MPBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_MPBar = { "m_MPBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterHUD, m_MPBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_MPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_MPBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_CharacterPic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_NameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_HPBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterHUD_Statics::NewProp_m_MPBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterHUD_Statics::ClassParams = {
		&UCharacterHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterHUD, 211601796);
	template<> SOGANGUNIV_API UClass* StaticClass<UCharacterHUD>()
	{
		return UCharacterHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterHUD(Z_Construct_UClass_UCharacterHUD, &UCharacterHUD::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UCharacterHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
