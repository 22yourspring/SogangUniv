// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/UI/InventoryItemTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryItemTile() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryItemTile_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UInventoryItemTile();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryItemTile::execSetData)
	{
		P_GET_OBJECT(UObject,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetData(Z_Param_Data);
		P_NATIVE_END;
	}
	void UInventoryItemTile::StaticRegisterNativesUInventoryItemTile()
	{
		UClass* Class = UInventoryItemTile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetData", &UInventoryItemTile::execSetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryItemTile_SetData_Statics
	{
		struct InventoryItemTile_eventSetData_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryItemTile_eventSetData_Parms, Data), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/InventoryItemTile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryItemTile, nullptr, "SetData", nullptr, nullptr, sizeof(InventoryItemTile_eventSetData_Parms), Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryItemTile_SetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryItemTile_SetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryItemTile_NoRegister()
	{
		return UInventoryItemTile::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryItemTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_IconImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_IconImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryItemTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryItemTile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryItemTile_SetData, "SetData" }, // 3574542178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemTile_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/InventoryItemTile.h" },
		{ "ModuleRelativePath", "UI/InventoryItemTile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryItemTile_Statics::NewProp_m_IconImage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "InventoryItemTile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/InventoryItemTile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryItemTile_Statics::NewProp_m_IconImage = { "m_IconImage", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryItemTile, m_IconImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryItemTile_Statics::NewProp_m_IconImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemTile_Statics::NewProp_m_IconImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryItemTile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryItemTile_Statics::NewProp_m_IconImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryItemTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryItemTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryItemTile_Statics::ClassParams = {
		&UInventoryItemTile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryItemTile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemTile_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryItemTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryItemTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryItemTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryItemTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryItemTile, 3776875045);
	template<> SOGANGUNIV_API UClass* StaticClass<UInventoryItemTile>()
	{
		return UInventoryItemTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryItemTile(Z_Construct_UClass_UInventoryItemTile, &UInventoryItemTile::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UInventoryItemTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryItemTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
