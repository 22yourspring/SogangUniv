// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/CharacterSelectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSelectHUD() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterSelectHUD_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterSelectHUD();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterSelectState_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UCharacterNameInputWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCharacterSelectHUD::execBackButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BackButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCharacterSelectHUD::execStartButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButtonClick();
		P_NATIVE_END;
	}
	void UCharacterSelectHUD::StaticRegisterNativesUCharacterSelectHUD()
	{
		UClass* Class = UCharacterSelectHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BackButtonClick", &UCharacterSelectHUD::execBackButtonClick },
			{ "StartButtonClick", &UCharacterSelectHUD::execStartButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CharacterSelectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectHUD, nullptr, "BackButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/CharacterSelectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterSelectHUD, nullptr, "StartButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterSelectHUD_NoRegister()
	{
		return UCharacterSelectHUD::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterSelectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_StartButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_BackButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CharacterState_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_CharacterState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NameInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_NameInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterSelectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterSelectHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterSelectHUD_BackButtonClick, "BackButtonClick" }, // 4067074131
		{ &Z_Construct_UFunction_UCharacterSelectHUD_StartButtonClick, "StartButtonClick" }, // 711195911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/CharacterSelectHUD.h" },
		{ "ModuleRelativePath", "UI/CharacterSelectHUD.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_StartButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterSelectHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterSelectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_StartButton = { "m_StartButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSelectHUD, m_StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_StartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_StartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_BackButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterSelectHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterSelectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_BackButton = { "m_BackButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSelectHUD, m_BackButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_BackButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_CharacterState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterSelectHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterSelectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_CharacterState = { "m_CharacterState", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSelectHUD, m_CharacterState), Z_Construct_UClass_UCharacterSelectState_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_CharacterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_CharacterState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_NameInput_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CharacterSelectHUD" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/CharacterSelectHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_NameInput = { "m_NameInput", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCharacterSelectHUD, m_NameInput), Z_Construct_UClass_UCharacterNameInputWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_NameInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_NameInput_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterSelectHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_StartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_BackButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_CharacterState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterSelectHUD_Statics::NewProp_m_NameInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterSelectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterSelectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterSelectHUD_Statics::ClassParams = {
		&UCharacterSelectHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCharacterSelectHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterSelectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterSelectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterSelectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterSelectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterSelectHUD, 1876676765);
	template<> SOGANGUNIV_API UClass* StaticClass<UCharacterSelectHUD>()
	{
		return UCharacterSelectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterSelectHUD(Z_Construct_UClass_UCharacterSelectHUD, &UCharacterSelectHUD::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UCharacterSelectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterSelectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
