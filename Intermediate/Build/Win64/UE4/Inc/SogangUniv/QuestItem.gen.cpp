// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestItem() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestItem_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestItem();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestItem::execSetData)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Data);
		P_NATIVE_END;
	}
	void UQuestItem::StaticRegisterNativesUQuestItem()
	{
		UClass* Class = UQuestItem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UQuestItem::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestItem_SetData_Statics
	{
		struct QuestItem_eventSetData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestItem_SetData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestItem_eventSetData_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestItem_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestItem_SetData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestItem_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestItem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestItem_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestItem, nullptr, "SetData", nullptr, nullptr, sizeof(QuestItem_eventSetData_Parms), Z_Construct_UFunction_UQuestItem_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestItem_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestItem_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestItem_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestItem_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestItem_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestItem_NoRegister()
	{
		return UQuestItem::StaticClass();
	}
	struct Z_Construct_UClass_UQuestItem_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Selection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Selection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestItem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestItem_SetData, "SetData" }, // 215416176
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestItem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestItem.h" },
		{ "ModuleRelativePath", "UI/QuestItem.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestItem_Statics::NewProp_m_NameText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItem_Statics::NewProp_m_NameText = { "m_NameText", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestItem, m_NameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestItem_Statics::NewProp_m_NameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItem_Statics::NewProp_m_NameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestItem_Statics::NewProp_m_Selection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestItem" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestItem_Statics::NewProp_m_Selection = { "m_Selection", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestItem, m_Selection), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestItem_Statics::NewProp_m_Selection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItem_Statics::NewProp_m_Selection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItem_Statics::NewProp_m_NameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestItem_Statics::NewProp_m_Selection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestItem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestItem_Statics::ClassParams = {
		&UQuestItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItem_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestItem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestItem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestItem, 416498652);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestItem>()
	{
		return UQuestItem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestItem(Z_Construct_UClass_UQuestItem, &UQuestItem::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestItem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestItem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
