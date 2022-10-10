// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/ShopWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShopWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UShopWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UShopWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UShopWidget::execBuy)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_cost);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Buy(Z_Param_cost);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UShopWidget::execSetRender)
	{
		P_GET_UBOOL(Z_Param_render);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRender(Z_Param_render);
		P_NATIVE_END;
	}
	void UShopWidget::StaticRegisterNativesUShopWidget()
	{
		UClass* Class = UShopWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Buy", &UShopWidget::execBuy },
			{ "SetRender", &UShopWidget::execSetRender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShopWidget_Buy_Statics
	{
		struct ShopWidget_eventBuy_Parms
		{
			int32 cost;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_cost;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UShopWidget_Buy_Statics::NewProp_cost = { "cost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ShopWidget_eventBuy_Parms, cost), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UShopWidget_Buy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ShopWidget_eventBuy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShopWidget_Buy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShopWidget_eventBuy_Parms), &Z_Construct_UFunction_UShopWidget_Buy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShopWidget_Buy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShopWidget_Buy_Statics::NewProp_cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShopWidget_Buy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShopWidget_Buy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Shop" },
		{ "CPP_Default_cost", "15" },
		{ "ModuleRelativePath", "UI/ShopWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShopWidget_Buy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShopWidget, nullptr, "Buy", nullptr, nullptr, sizeof(ShopWidget_eventBuy_Parms), Z_Construct_UFunction_UShopWidget_Buy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShopWidget_Buy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShopWidget_Buy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShopWidget_Buy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShopWidget_Buy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShopWidget_Buy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UShopWidget_SetRender_Statics
	{
		struct ShopWidget_eventSetRender_Parms
		{
			bool render;
		};
		static void NewProp_render_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_render;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UShopWidget_SetRender_Statics::NewProp_render_SetBit(void* Obj)
	{
		((ShopWidget_eventSetRender_Parms*)Obj)->render = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UShopWidget_SetRender_Statics::NewProp_render = { "render", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ShopWidget_eventSetRender_Parms), &Z_Construct_UFunction_UShopWidget_SetRender_Statics::NewProp_render_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UShopWidget_SetRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UShopWidget_SetRender_Statics::NewProp_render,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShopWidget_SetRender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/ShopWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShopWidget_SetRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShopWidget, nullptr, "SetRender", nullptr, nullptr, sizeof(ShopWidget_eventSetRender_Parms), Z_Construct_UFunction_UShopWidget_SetRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UShopWidget_SetRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShopWidget_SetRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShopWidget_SetRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShopWidget_SetRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShopWidget_SetRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShopWidget_NoRegister()
	{
		return UShopWidget::StaticClass();
	}
	struct Z_Construct_UClass_UShopWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pNext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pNext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShopWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShopWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShopWidget_Buy, "Buy" }, // 2097193257
		{ &Z_Construct_UFunction_UShopWidget_SetRender, "SetRender" }, // 798122369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShopWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/ShopWidget.h" },
		{ "ModuleRelativePath", "UI/ShopWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pDesc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShopWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ShopWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pDesc = { "m_pDesc", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShopWidget, m_pDesc), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pMsg_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShopWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ShopWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pMsg = { "m_pMsg", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShopWidget, m_pMsg), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pNext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ShopWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/ShopWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pNext = { "m_pNext", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShopWidget, m_pNext), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pNext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pNext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShopWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShopWidget_Statics::NewProp_m_pNext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShopWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShopWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShopWidget_Statics::ClassParams = {
		&UShopWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShopWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShopWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UShopWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShopWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShopWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShopWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShopWidget, 575020709);
	template<> SOGANGUNIV_API UClass* StaticClass<UShopWidget>()
	{
		return UShopWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShopWidget(Z_Construct_UClass_UShopWidget, &UShopWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UShopWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShopWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
