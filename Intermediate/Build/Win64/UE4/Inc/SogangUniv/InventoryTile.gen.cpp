// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/InventoryTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryTile() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryTile_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryTile();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UItemDescWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryTile::execItemHovered)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_GET_UBOOL(Z_Param_Hovered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemHovered(Z_Param_Data,Z_Param_Hovered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryTile::execItemScroll)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_GET_OBJECT(UUserWidget,Z_Param_Widget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemScroll(Z_Param_Data,Z_Param_Widget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryTile::execItemDoubleClick)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemDoubleClick(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryTile::execItemClick)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemClick(Z_Param_Data);
		P_NATIVE_END;
	}
	void UInventoryTile::StaticRegisterNativesUInventoryTile()
	{
		UClass* Class = UInventoryTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ItemClick", &UInventoryTile::execItemClick },
			{ "ItemDoubleClick", &UInventoryTile::execItemDoubleClick },
			{ "ItemHovered", &UInventoryTile::execItemHovered },
			{ "ItemScroll", &UInventoryTile::execItemScroll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryTile_ItemClick_Statics
	{
		struct InventoryTile_eventItemClick_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryTile_eventItemClick_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryTile, nullptr, "ItemClick", nullptr, nullptr, sizeof(InventoryTile_eventItemClick_Parms), Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryTile_ItemClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryTile_ItemClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics
	{
		struct InventoryTile_eventItemDoubleClick_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryTile_eventItemDoubleClick_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryTile, nullptr, "ItemDoubleClick", nullptr, nullptr, sizeof(InventoryTile_eventItemDoubleClick_Parms), Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryTile_ItemDoubleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryTile_ItemDoubleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics
	{
		struct InventoryTile_eventItemHovered_Parms
		{
			UObject* Data;
			bool Hovered;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static void NewProp_Hovered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hovered;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryTile_eventItemHovered_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::NewProp_Hovered_SetBit(void* Obj)
	{
		((InventoryTile_eventItemHovered_Parms*)Obj)->Hovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::NewProp_Hovered = { "Hovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InventoryTile_eventItemHovered_Parms), &Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::NewProp_Hovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::NewProp_Hovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryTile, nullptr, "ItemHovered", nullptr, nullptr, sizeof(InventoryTile_eventItemHovered_Parms), Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryTile_ItemHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryTile_ItemHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics
	{
		struct InventoryTile_eventItemScroll_Parms
		{
			UObject* Data;
			UUserWidget* Widget;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Widget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryTile_eventItemScroll_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryTile_eventItemScroll_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::NewProp_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::NewProp_Widget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::NewProp_Widget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryTile, nullptr, "ItemScroll", nullptr, nullptr, sizeof(InventoryTile_eventItemScroll_Parms), Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryTile_ItemScroll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryTile_ItemScroll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryTile_NoRegister()
	{
		return UInventoryTile::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InventoryTile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InventoryTile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_InventorySlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_InventorySlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ItemDescWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ItemDescWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryTile_ItemClick, "ItemClick" }, // 3831296698
		{ &Z_Construct_UFunction_UInventoryTile_ItemDoubleClick, "ItemDoubleClick" }, // 3669339061
		{ &Z_Construct_UFunction_UInventoryTile_ItemHovered, "ItemHovered" }, // 2838913701
		{ &Z_Construct_UFunction_UInventoryTile_ItemScroll, "ItemScroll" }, // 455351917
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InventoryTile.h" },
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventoryTile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventoryTile = { "m_InventoryTile", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryTile, m_InventoryTile), Z_Construct_UClass_UTileView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventoryTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventoryTile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventorySlot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventorySlot = { "m_InventorySlot", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryTile, m_InventorySlot), Z_Construct_UClass_UTileView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventorySlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventorySlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_ItemDescWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/InventoryTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_ItemDescWidget = { "m_ItemDescWidget", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryTile, m_ItemDescWidget), Z_Construct_UClass_UItemDescWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_ItemDescWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_ItemDescWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventoryTile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_InventorySlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryTile_Statics::NewProp_m_ItemDescWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryTile_Statics::ClassParams = {
		&UInventoryTile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTile_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryTile, 3253987654);
	template<> SOGANGUNIV_API UClass* StaticClass<UInventoryTile>()
	{
		return UInventoryTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryTile(Z_Construct_UClass_UInventoryTile, &UInventoryTile::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UInventoryTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
