// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/PlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}
// Cross Module References
	SOGANGUNIV_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_APlayerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	SOGANGUNIV_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerInfo();
// End Cross Module References
	DEFINE_FUNCTION(APlayerCharacter::execNameWidgetCallback)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NameWidgetCallback();
		P_NATIVE_END;
	}
	void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
	{
		UClass* Class = APlayerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "NameWidgetCallback", &APlayerCharacter::execNameWidgetCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "NameWidgetCallback", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
	{
		return APlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Arm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Arm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_HPBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_HPBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Capture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_Capture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PlayerInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_NameWidgetCallback, "NameWidgetCallback" }, // 4056640984
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/PlayerCharacter.h" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Camera = { "m_Camera", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter, m_Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Arm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Arm = { "m_Arm", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter, m_Arm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Arm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Arm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_HPBar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_HPBar = { "m_HPBar", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter, m_HPBar), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_HPBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_HPBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Capture_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Capture = { "m_Capture", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter, m_Capture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Capture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Capture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_PlayerInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "Player/PlayerCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_PlayerInfo = { "m_PlayerInfo", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerCharacter, m_PlayerInfo), Z_Construct_UScriptStruct_FPlayerInfo, METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_PlayerInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_PlayerInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Arm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_HPBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_Capture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_m_PlayerInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
		&APlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCharacter, 2915372298);
	template<> SOGANGUNIV_API UClass* StaticClass<APlayerCharacter>()
	{
		return APlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCharacter(Z_Construct_UClass_APlayerCharacter, &APlayerCharacter::StaticClass, TEXT("/Script/SogangUniv"), TEXT("APlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
