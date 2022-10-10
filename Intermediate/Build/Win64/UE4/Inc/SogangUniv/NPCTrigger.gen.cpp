// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Trigger/NPCTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPCTrigger() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_ANPCTrigger_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ANPCTrigger();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ABoxTrigger();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_NpcType();
// End Cross Module References
	DEFINE_FUNCTION(ANPCTrigger::execTriggerEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANPCTrigger::execTriggerBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerBegin();
		P_NATIVE_END;
	}
	void ANPCTrigger::StaticRegisterNativesANPCTrigger()
	{
		UClass* Class = ANPCTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerBegin", &ANPCTrigger::execTriggerBegin },
			{ "TriggerEnd", &ANPCTrigger::execTriggerEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANPCTrigger_TriggerBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCTrigger_TriggerBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trigger/NPCTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCTrigger_TriggerBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCTrigger, nullptr, "TriggerBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCTrigger_TriggerBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCTrigger_TriggerBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCTrigger_TriggerBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPCTrigger_TriggerBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANPCTrigger_TriggerEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANPCTrigger_TriggerEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trigger/NPCTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANPCTrigger_TriggerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANPCTrigger, nullptr, "TriggerEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANPCTrigger_TriggerEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANPCTrigger_TriggerEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANPCTrigger_TriggerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANPCTrigger_TriggerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANPCTrigger_NoRegister()
	{
		return ANPCTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ANPCTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPCTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABoxTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANPCTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANPCTrigger_TriggerBegin, "TriggerBegin" }, // 2095596513
		{ &Z_Construct_UFunction_ANPCTrigger_TriggerEnd, "TriggerEnd" }, // 3440660490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Trigger/NPCTrigger.h" },
		{ "ModuleRelativePath", "Trigger/NPCTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANPCTrigger_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPCTrigger_Statics::NewProp_Type_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NPCTrigger" },
		{ "ModuleRelativePath", "Trigger/NPCTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANPCTrigger_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPCTrigger, Type), Z_Construct_UEnum_SogangUniv_NpcType, METADATA_PARAMS(Z_Construct_UClass_ANPCTrigger_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCTrigger_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPCTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCTrigger_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPCTrigger_Statics::NewProp_Type,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPCTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPCTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPCTrigger_Statics::ClassParams = {
		&ANPCTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANPCTrigger_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANPCTrigger_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANPCTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANPCTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPCTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPCTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPCTrigger, 3210988005);
	template<> SOGANGUNIV_API UClass* StaticClass<ANPCTrigger>()
	{
		return ANPCTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPCTrigger(Z_Construct_UClass_ANPCTrigger, &ANPCTrigger::StaticClass, TEXT("/Script/SogangUniv"), TEXT("ANPCTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPCTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
