// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/CharacterNameInputWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterNameInputWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterNameInputWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterNameInputWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	void UCharacterNameInputWidget::StaticRegisterNativesUCharacterNameInputWidget()
	{
	}
	UClass* Z_Construct_UClass_UCharacterNameInputWidget_NoRegister()
	{
		return UCharacterNameInputWidget::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterNameInputWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InputText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterNameInputWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterNameInputWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/CharacterNameInputWidget.h" },
		{ "ModuleRelativePath", "UI/CharacterNameInputWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterNameInputWidget_Statics::NewProp_m_InputText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterNameInputWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterNameInputWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterNameInputWidget_Statics::NewProp_m_InputText = { "m_InputText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterNameInputWidget, m_InputText), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterNameInputWidget_Statics::NewProp_m_InputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterNameInputWidget_Statics::NewProp_m_InputText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterNameInputWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterNameInputWidget_Statics::NewProp_m_InputText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterNameInputWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterNameInputWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterNameInputWidget_Statics::ClassParams = {
		&UCharacterNameInputWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCharacterNameInputWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterNameInputWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterNameInputWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterNameInputWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterNameInputWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterNameInputWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterNameInputWidget, 3992135148);
	template<> SOGANGUNIV_API UClass* StaticClass<UCharacterNameInputWidget>()
	{
		return UCharacterNameInputWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterNameInputWidget(Z_Construct_UClass_UCharacterNameInputWidget, &UCharacterNameInputWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UCharacterNameInputWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterNameInputWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
