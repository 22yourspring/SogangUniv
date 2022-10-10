// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTreeView_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestDescWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestWidget::execAddQuestItemData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_questKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_questValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddQuestItemData(Z_Param_questKey,Z_Param_questValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidget::execSetQuestList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetQuestList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidget::execQuestClick)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuestClick(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidget::execGetItemChildren)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_ItemArray);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetItemChildren(Z_Param_Data,Z_Param_Out_ItemArray);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidget::execItemHovered)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_GET_UBOOL(Z_Param_Hovered);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemHovered(Z_Param_Data,Z_Param_Hovered);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidget::execItemClick)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemClick(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestWidget::execItemDoubleClick)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemDoubleClick(Z_Param_Data);
		P_NATIVE_END;
	}
	void UQuestWidget::StaticRegisterNativesUQuestWidget()
	{
		UClass* Class = UQuestWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddQuestItemData", &UQuestWidget::execAddQuestItemData },
			{ "GetItemChildren", &UQuestWidget::execGetItemChildren },
			{ "ItemClick", &UQuestWidget::execItemClick },
			{ "ItemDoubleClick", &UQuestWidget::execItemDoubleClick },
			{ "ItemHovered", &UQuestWidget::execItemHovered },
			{ "QuestClick", &UQuestWidget::execQuestClick },
			{ "SetQuestList", &UQuestWidget::execSetQuestList },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics
	{
		struct QuestWidget_eventAddQuestItemData_Parms
		{
			int32 questKey;
			int32 questValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_questKey;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_questValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::NewProp_questKey = { "questKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventAddQuestItemData_Parms, questKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::NewProp_questValue = { "questValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventAddQuestItemData_Parms, questValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::NewProp_questKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::NewProp_questValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "AddQuestItemData", nullptr, nullptr, sizeof(QuestWidget_eventAddQuestItemData_Parms), Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_AddQuestItemData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestWidget_AddQuestItemData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics
	{
		struct QuestWidget_eventGetItemChildren_Parms
		{
			UObject* Data;
			TArray<UObject*> ItemArray;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemArray_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemArray;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventGetItemChildren_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::NewProp_ItemArray_Inner = { "ItemArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::NewProp_ItemArray = { "ItemArray", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventGetItemChildren_Parms, ItemArray), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::NewProp_ItemArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::NewProp_ItemArray,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "GetItemChildren", nullptr, nullptr, sizeof(QuestWidget_eventGetItemChildren_Parms), Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_GetItemChildren()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestWidget_GetItemChildren_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidget_ItemClick_Statics
	{
		struct QuestWidget_eventItemClick_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventItemClick_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "ItemClick", nullptr, nullptr, sizeof(QuestWidget_eventItemClick_Parms), Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_ItemClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestWidget_ItemClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics
	{
		struct QuestWidget_eventItemDoubleClick_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventItemDoubleClick_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "ItemDoubleClick", nullptr, nullptr, sizeof(QuestWidget_eventItemDoubleClick_Parms), Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_ItemDoubleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestWidget_ItemDoubleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics
	{
		struct QuestWidget_eventItemHovered_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventItemHovered_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::NewProp_Hovered_SetBit(void* Obj)
	{
		((QuestWidget_eventItemHovered_Parms*)Obj)->Hovered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::NewProp_Hovered = { "Hovered", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestWidget_eventItemHovered_Parms), &Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::NewProp_Hovered_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::NewProp_Hovered,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "ItemHovered", nullptr, nullptr, sizeof(QuestWidget_eventItemHovered_Parms), Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_ItemHovered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestWidget_ItemHovered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidget_QuestClick_Statics
	{
		struct QuestWidget_eventQuestClick_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestWidget_eventQuestClick_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "QuestClick", nullptr, nullptr, sizeof(QuestWidget_eventQuestClick_Parms), Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_QuestClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestWidget_QuestClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestWidget_SetQuestList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestWidget_SetQuestList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestWidget_SetQuestList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestWidget, nullptr, "SetQuestList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestWidget_SetQuestList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestWidget_SetQuestList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestWidget_SetQuestList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestWidget_SetQuestList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestWidget_NoRegister()
	{
		return UQuestWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuestWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Menu_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Menu;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_QuestDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_QuestDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_QuestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_QuestList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestWidget_AddQuestItemData, "AddQuestItemData" }, // 2211611068
		{ &Z_Construct_UFunction_UQuestWidget_GetItemChildren, "GetItemChildren" }, // 3036032707
		{ &Z_Construct_UFunction_UQuestWidget_ItemClick, "ItemClick" }, // 3561219716
		{ &Z_Construct_UFunction_UQuestWidget_ItemDoubleClick, "ItemDoubleClick" }, // 1080664846
		{ &Z_Construct_UFunction_UQuestWidget_ItemHovered, "ItemHovered" }, // 2898841554
		{ &Z_Construct_UFunction_UQuestWidget_QuestClick, "QuestClick" }, // 2109918869
		{ &Z_Construct_UFunction_UQuestWidget_SetQuestList, "SetQuestList" }, // 1196609063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestWidget.h" },
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_Menu_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_Menu = { "m_Menu", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestWidget, m_Menu), Z_Construct_UClass_UTreeView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_Menu_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestDesc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestDesc = { "m_QuestDesc", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestWidget, m_QuestDesc), Z_Construct_UClass_UQuestDescWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestList = { "m_QuestList", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestWidget, m_QuestList), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_Menu,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestWidget_Statics::NewProp_m_QuestList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestWidget_Statics::ClassParams = {
		&UQuestWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestWidget, 722603319);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestWidget>()
	{
		return UQuestWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestWidget(Z_Construct_UClass_UQuestWidget, &UQuestWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
