// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/StartWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStartWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UStartWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UStartWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UStartWidget::execQuitButton_OnPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitButton_OnPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execStartButton_OnPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButton_OnPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execQuitButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStartWidget::execStartButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButton();
		P_NATIVE_END;
	}
	void UStartWidget::StaticRegisterNativesUStartWidget()
	{
		UClass* Class = UStartWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QuitButton", &UStartWidget::execQuitButton },
			{ "QuitButton_OnPressed", &UStartWidget::execQuitButton_OnPressed },
			{ "StartButton", &UStartWidget::execStartButton },
			{ "StartButton_OnPressed", &UStartWidget::execStartButton_OnPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStartWidget_QuitButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_QuitButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_QuitButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "QuitButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_QuitButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_QuitButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_QuitButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartWidget_QuitButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "QuitButton_OnPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_StartButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_StartButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_StartButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "StartButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_StartButton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_StartButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_StartButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartWidget_StartButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStartWidget_StartButton_OnPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStartWidget_StartButton_OnPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStartWidget_StartButton_OnPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStartWidget, nullptr, "StartButton_OnPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStartWidget_StartButton_OnPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStartWidget_StartButton_OnPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStartWidget_StartButton_OnPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStartWidget_StartButton_OnPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStartWidget_NoRegister()
	{
		return UStartWidget::StaticClass();
	}
	struct Z_Construct_UClass_UStartWidget_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_QuitButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_QuitButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_StartButtonMouseOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_StartButtonMouseOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_QuitButtonMouseOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_QuitButtonMouseOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStartWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStartWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStartWidget_QuitButton, "QuitButton" }, // 858087388
		{ &Z_Construct_UFunction_UStartWidget_QuitButton_OnPressed, "QuitButton_OnPressed" }, // 2698570029
		{ &Z_Construct_UFunction_UStartWidget_StartButton, "StartButton" }, // 1609086417
		{ &Z_Construct_UFunction_UStartWidget_StartButton_OnPressed, "StartButton_OnPressed" }, // 3520066114
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/StartWidget.h" },
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButton = { "m_StartButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartWidget, m_StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StartWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButton = { "m_QuitButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartWidget, m_QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButtonMouseOn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StartWidget" },
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButtonMouseOn = { "m_StartButtonMouseOn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartWidget, m_StartButtonMouseOn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButtonMouseOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButtonMouseOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButtonMouseOn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StartWidget" },
		{ "ModuleRelativePath", "UI/StartWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButtonMouseOn = { "m_QuitButtonMouseOn", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStartWidget, m_QuitButtonMouseOn), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButtonMouseOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButtonMouseOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStartWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartWidget_Statics::NewProp_m_StartButtonMouseOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStartWidget_Statics::NewProp_m_QuitButtonMouseOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStartWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStartWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStartWidget_Statics::ClassParams = {
		&UStartWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStartWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStartWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStartWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStartWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStartWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStartWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStartWidget, 2490286441);
	template<> SOGANGUNIV_API UClass* StaticClass<UStartWidget>()
	{
		return UStartWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStartWidget(Z_Construct_UClass_UStartWidget, &UStartWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UStartWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStartWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
