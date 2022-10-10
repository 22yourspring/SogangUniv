// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Trigger/PortalTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePortalTrigger() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_APortalTrigger_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_APortalTrigger();
	SOGANGUNIV_API UClass* Z_Construct_UClass_ASphereTrigger();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
// End Cross Module References
	DEFINE_FUNCTION(APortalTrigger::execTriggerEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APortalTrigger::execTriggerBegin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerBegin();
		P_NATIVE_END;
	}
	void APortalTrigger::StaticRegisterNativesAPortalTrigger()
	{
		UClass* Class = APortalTrigger::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TriggerBegin", &APortalTrigger::execTriggerBegin },
			{ "TriggerEnd", &APortalTrigger::execTriggerEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APortalTrigger_TriggerBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalTrigger_TriggerBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trigger/PortalTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalTrigger_TriggerBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalTrigger, nullptr, "TriggerBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalTrigger_TriggerBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalTrigger_TriggerBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalTrigger_TriggerBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalTrigger_TriggerBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APortalTrigger_TriggerEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APortalTrigger_TriggerEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trigger/PortalTrigger.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APortalTrigger_TriggerEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APortalTrigger, nullptr, "TriggerEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APortalTrigger_TriggerEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APortalTrigger_TriggerEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APortalTrigger_TriggerEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APortalTrigger_TriggerEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APortalTrigger_NoRegister()
	{
		return APortalTrigger::StaticClass();
	}
	struct Z_Construct_UClass_APortalTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APortalTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASphereTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APortalTrigger_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APortalTrigger_TriggerBegin, "TriggerBegin" }, // 1315642670
		{ &Z_Construct_UFunction_APortalTrigger_TriggerEnd, "TriggerEnd" }, // 2365534586
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APortalTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Trigger/PortalTrigger.h" },
		{ "ModuleRelativePath", "Trigger/PortalTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APortalTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APortalTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APortalTrigger_Statics::ClassParams = {
		&APortalTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APortalTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APortalTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APortalTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APortalTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APortalTrigger, 4181690360);
	template<> SOGANGUNIV_API UClass* StaticClass<APortalTrigger>()
	{
		return APortalTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APortalTrigger(Z_Construct_UClass_APortalTrigger, &APortalTrigger::StaticClass, TEXT("/Script/SogangUniv"), TEXT("APortalTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APortalTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
