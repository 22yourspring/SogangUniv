// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestListItemWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestListItemWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestListItemWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestListItemWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestListItemWidget::execSetData)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Data);
		P_NATIVE_END;
	}
	void UQuestListItemWidget::StaticRegisterNativesUQuestListItemWidget()
	{
		UClass* Class = UQuestListItemWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UQuestListItemWidget::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics
	{
		struct QuestListItemWidget_eventSetData_Parms
		{
			UObject* Data;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestListItemWidget_eventSetData_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestListItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestListItemWidget, nullptr, "SetData", nullptr, nullptr, sizeof(QuestListItemWidget_eventSetData_Parms), Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestListItemWidget_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestListItemWidget_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestListItemWidget_NoRegister()
	{
		return UQuestListItemWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuestListItemWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_NameText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestListItemWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestListItemWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestListItemWidget_SetData, "SetData" }, // 63318882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListItemWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestListItemWidget.h" },
		{ "ModuleRelativePath", "UI/QuestListItemWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestListItemWidget_Statics::NewProp_m_NameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestListItemWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestListItemWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestListItemWidget_Statics::NewProp_m_NameText = { "m_NameText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestListItemWidget, m_NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestListItemWidget_Statics::NewProp_m_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListItemWidget_Statics::NewProp_m_NameText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestListItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestListItemWidget_Statics::NewProp_m_NameText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestListItemWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestListItemWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestListItemWidget_Statics::ClassParams = {
		&UQuestListItemWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestListItemWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListItemWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestListItemWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestListItemWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestListItemWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestListItemWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestListItemWidget, 969601510);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestListItemWidget>()
	{
		return UQuestListItemWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestListItemWidget(Z_Construct_UClass_UQuestListItemWidget, &UQuestListItemWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestListItemWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestListItemWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
