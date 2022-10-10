// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/QuestNPCWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuestNPCWidget() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestNPCWidget_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UQuestNPCWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EQuestButtonType();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EQuestScriptType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UComboBoxString_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UQuestNPCWidget::execNativePushImagePath)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_questID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NativePushImagePath(Z_Param_questID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestNPCWidget::execAddImagePath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_path);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddImagePath(Z_Param_path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestNPCWidget::execLoadImageFromDisk)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_GET_PROPERTY(FStrProperty,Z_Param_ImagePath);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_FileData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_outPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UQuestNPCWidget::LoadImageFromDisk(Z_Param_Outer,Z_Param_ImagePath,Z_Param_Out_FileData,Z_Param_Out_outPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestNPCWidget::execAddListItemByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_questID);
		P_GET_PROPERTY(FIntProperty,Z_Param_subQuestId);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_ENUM(EQuestButtonType,Z_Param_type);
		P_GET_ENUM(EQuestScriptType,Z_Param_scriptType);
		P_GET_PROPERTY(FIntProperty,Z_Param_reward);
		P_GET_PROPERTY(FIntProperty,Z_Param_timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddListItemByName(Z_Param_name,Z_Param_questID,Z_Param_subQuestId,Z_Param_index,EQuestButtonType(Z_Param_type),EQuestScriptType(Z_Param_scriptType),Z_Param_reward,Z_Param_timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestNPCWidget::execAddListItemByID)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_questID);
		P_GET_PROPERTY(FIntProperty,Z_Param_questValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddListItemByID(Z_Param_questID,Z_Param_questValue,Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestNPCWidget::execSetRender)
	{
		P_GET_UBOOL(Z_Param_render);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRender(Z_Param_render);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuestNPCWidget::execItemClick)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ItemClick(Z_Param_Data);
		P_NATIVE_END;
	}
	static FName NAME_UQuestNPCWidget_PushImagePath = FName(TEXT("PushImagePath"));
	void UQuestNPCWidget::PushImagePath(const FString& path, const FString& ext)
	{
		QuestNPCWidget_eventPushImagePath_Parms Parms;
		Parms.path=path;
		Parms.ext=ext;
		ProcessEvent(FindFunctionChecked(NAME_UQuestNPCWidget_PushImagePath),&Parms);
	}
	void UQuestNPCWidget::StaticRegisterNativesUQuestNPCWidget()
	{
		UClass* Class = UQuestNPCWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddImagePath", &UQuestNPCWidget::execAddImagePath },
			{ "AddListItemByID", &UQuestNPCWidget::execAddListItemByID },
			{ "AddListItemByName", &UQuestNPCWidget::execAddListItemByName },
			{ "ItemClick", &UQuestNPCWidget::execItemClick },
			{ "LoadImageFromDisk", &UQuestNPCWidget::execLoadImageFromDisk },
			{ "NativePushImagePath", &UQuestNPCWidget::execNativePushImagePath },
			{ "SetRender", &UQuestNPCWidget::execSetRender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics
	{
		struct QuestNPCWidget_eventAddImagePath_Parms
		{
			FString path;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddImagePath_Parms, path), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::NewProp_path,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "TEST" },
		{ "DefaultToSelf", "Outer" },
		{ "HidePin", "Outer" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "AddImagePath", nullptr, nullptr, sizeof(QuestNPCWidget_eventAddImagePath_Parms), Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_AddImagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_AddImagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics
	{
		struct QuestNPCWidget_eventAddListItemByID_Parms
		{
			int32 questID;
			int32 questValue;
			int32 index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_questID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_questValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::NewProp_questID = { "questID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByID_Parms, questID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::NewProp_questValue = { "questValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByID_Parms, questValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByID_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::NewProp_questID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::NewProp_questValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "AddListItemByID", nullptr, nullptr, sizeof(QuestNPCWidget_eventAddListItemByID_Parms), Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics
	{
		struct QuestNPCWidget_eventAddListItemByName_Parms
		{
			FString name;
			int32 questID;
			int32 subQuestId;
			int32 index;
			EQuestButtonType type;
			EQuestScriptType scriptType;
			int32 reward;
			int32 timer;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_questID;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_subQuestId;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_scriptType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_scriptType;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_reward;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_questID = { "questID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, questID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_subQuestId = { "subQuestId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, subQuestId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, type), Z_Construct_UEnum_SogangUniv_EQuestButtonType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_scriptType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_scriptType = { "scriptType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, scriptType), Z_Construct_UEnum_SogangUniv_EQuestScriptType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_reward = { "reward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, reward), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_timer = { "timer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventAddListItemByName_Parms, timer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_questID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_subQuestId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_scriptType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_scriptType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_reward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::NewProp_timer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "AddListItemByName", nullptr, nullptr, sizeof(QuestNPCWidget_eventAddListItemByName_Parms), Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics
	{
		struct QuestNPCWidget_eventItemClick_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventItemClick_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "ItemClick", nullptr, nullptr, sizeof(QuestNPCWidget_eventItemClick_Parms), Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_ItemClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_ItemClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics
	{
		struct QuestNPCWidget_eventLoadImageFromDisk_Parms
		{
			UObject* Outer;
			FString ImagePath;
			TArray<uint8> FileData;
			FString outPath;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Outer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImagePath;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FileData_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FileData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_outPath;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventLoadImageFromDisk_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_ImagePath = { "ImagePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventLoadImageFromDisk_Parms, ImagePath), METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_ImagePath_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_FileData_Inner = { "FileData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_FileData = { "FileData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventLoadImageFromDisk_Parms, FileData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_outPath = { "outPath", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventLoadImageFromDisk_Parms, outPath), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventLoadImageFromDisk_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_Outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_ImagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_FileData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_FileData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_outPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "TEST" },
		{ "DefaultToSelf", "Outer" },
		{ "HidePin", "Outer" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "LoadImageFromDisk", nullptr, nullptr, sizeof(QuestNPCWidget_eventLoadImageFromDisk_Parms), Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics
	{
		struct QuestNPCWidget_eventNativePushImagePath_Parms
		{
			int32 questID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_questID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::NewProp_questID = { "questID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventNativePushImagePath_Parms, questID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::NewProp_questID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "NativePushImagePath", nullptr, nullptr, sizeof(QuestNPCWidget_eventNativePushImagePath_Parms), Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_path_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_path;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_path = { "path", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventPushImagePath_Parms, path), METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_path_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_path_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_ext_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_ext = { "ext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuestNPCWidget_eventPushImagePath_Parms, ext), METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_ext_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_ext_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_path,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::NewProp_ext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "PushImagePath", nullptr, nullptr, sizeof(QuestNPCWidget_eventPushImagePath_Parms), Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_PushImagePath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_PushImagePath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics
	{
		struct QuestNPCWidget_eventSetRender_Parms
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
	void Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::NewProp_render_SetBit(void* Obj)
	{
		((QuestNPCWidget_eventSetRender_Parms*)Obj)->render = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::NewProp_render = { "render", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(QuestNPCWidget_eventSetRender_Parms), &Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::NewProp_render_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::NewProp_render,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuestNPCWidget, nullptr, "SetRender", nullptr, nullptr, sizeof(QuestNPCWidget_eventSetRender_Parms), Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuestNPCWidget_SetRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuestNPCWidget_SetRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuestNPCWidget_NoRegister()
	{
		return UQuestNPCWidget::StaticClass();
	}
	struct Z_Construct_UClass_UQuestNPCWidget_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_defaultDesc_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_defaultDesc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pImageSendPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pImageSendPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pImageSendButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pImageSendButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMinute_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMinute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pClock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pClock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pSleepPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pSleepPanel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_dailyQuestList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_dailyQuestList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_dailyQuestList;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_m_imagePathList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_imagePathList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_imagePathList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_imageIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_imageIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pEditBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pEditBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuestNPCWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuestNPCWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuestNPCWidget_AddImagePath, "AddImagePath" }, // 3435246146
		{ &Z_Construct_UFunction_UQuestNPCWidget_AddListItemByID, "AddListItemByID" }, // 4128439962
		{ &Z_Construct_UFunction_UQuestNPCWidget_AddListItemByName, "AddListItemByName" }, // 4228382169
		{ &Z_Construct_UFunction_UQuestNPCWidget_ItemClick, "ItemClick" }, // 2894367340
		{ &Z_Construct_UFunction_UQuestNPCWidget_LoadImageFromDisk, "LoadImageFromDisk" }, // 1022526403
		{ &Z_Construct_UFunction_UQuestNPCWidget_NativePushImagePath, "NativePushImagePath" }, // 1798452575
		{ &Z_Construct_UFunction_UQuestNPCWidget_PushImagePath, "PushImagePath" }, // 2493911227
		{ &Z_Construct_UFunction_UQuestNPCWidget_SetRender, "SetRender" }, // 2530338144
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/QuestNPCWidget.h" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pDesc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pDesc = { "m_pDesc", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pDesc), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pList = { "m_pList", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pList), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_defaultDesc_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_defaultDesc = { "m_defaultDesc", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_defaultDesc), METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_defaultDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_defaultDesc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendPanel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendPanel = { "m_pImageSendPanel", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pImageSendPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImage = { "m_pImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendButton_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendButton = { "m_pImageSendButton", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pImageSendButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pMinute_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pMinute = { "m_pMinute", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pMinute), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pMinute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pMinute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pClock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pClock = { "m_pClock", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pClock), Z_Construct_UClass_UComboBoxString_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pClock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pClock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pSleepPanel_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pSleepPanel = { "m_pSleepPanel", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pSleepPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pSleepPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pSleepPanel_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_dailyQuestList_Inner = { "m_dailyQuestList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_dailyQuestList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_dailyQuestList = { "m_dailyQuestList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_dailyQuestList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_dailyQuestList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_dailyQuestList_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imagePathList_Inner = { "m_imagePathList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imagePathList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imagePathList = { "m_imagePathList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_imagePathList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imagePathList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imagePathList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imageIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imageIndex = { "m_imageIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_imageIndex), METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imageIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pEditBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "QuestNPCWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/QuestNPCWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pEditBox = { "m_pEditBox", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuestNPCWidget, m_pEditBox), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pEditBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pEditBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuestNPCWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_defaultDesc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pImageSendButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pMinute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pClock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pSleepPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_dailyQuestList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_dailyQuestList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imagePathList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imagePathList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_imageIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuestNPCWidget_Statics::NewProp_m_pEditBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuestNPCWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuestNPCWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuestNPCWidget_Statics::ClassParams = {
		&UQuestNPCWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuestNPCWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuestNPCWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuestNPCWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuestNPCWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuestNPCWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuestNPCWidget, 3627671718);
	template<> SOGANGUNIV_API UClass* StaticClass<UQuestNPCWidget>()
	{
		return UQuestNPCWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuestNPCWidget(Z_Construct_UClass_UQuestNPCWidget, &UQuestNPCWidget::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UQuestNPCWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuestNPCWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
