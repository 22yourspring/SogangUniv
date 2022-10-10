// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/InventoryList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryList() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryList_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryList();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryList::execItemDoubleClick)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemDoubleClick(Z_Param_Data);
		P_NATIVE_END;
	}
	void UInventoryList::StaticRegisterNativesUInventoryList()
	{
		UClass* Class = UInventoryList::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemDoubleClick", &UInventoryList::execItemDoubleClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics
	{
		struct InventoryList_eventItemDoubleClick_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryList_eventItemDoubleClick_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InventoryList.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryList, nullptr, "ItemDoubleClick", nullptr, nullptr, sizeof(InventoryList_eventItemDoubleClick_Parms), Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryList_ItemDoubleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryList_ItemDoubleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryList_NoRegister()
	{
		return UInventoryList::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryList_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InventoryList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InventoryList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryList_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryList_ItemDoubleClick, "ItemDoubleClick" }, // 1572441531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryList_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InventoryList.h" },
		{ "ModuleRelativePath", "UI/InventoryList.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryList_Statics::NewProp_m_InventoryList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryList" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/InventoryList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryList_Statics::NewProp_m_InventoryList = { "m_InventoryList", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryList, m_InventoryList), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryList_Statics::NewProp_m_InventoryList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryList_Statics::NewProp_m_InventoryList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryList_Statics::NewProp_m_InventoryList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryList>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryList_Statics::ClassParams = {
		&UInventoryList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryList_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryList()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryList_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryList, 537778870);
	template<> SOGANGUNIV_API UClass* StaticClass<UInventoryList>()
	{
		return UInventoryList::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryList(Z_Construct_UClass_UInventoryList, &UInventoryList::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UInventoryList"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryList);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
