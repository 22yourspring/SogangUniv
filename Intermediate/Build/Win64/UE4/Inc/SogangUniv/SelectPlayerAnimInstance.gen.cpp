// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Player/SelectPlayerAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectPlayerAnimInstance() {}
// Cross Module References
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_ESelectPlayerAnimType();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UClass* Z_Construct_UClass_USelectPlayerAnimInstance_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_USelectPlayerAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
	static UEnum* ESelectPlayerAnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_ESelectPlayerAnimType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("ESelectPlayerAnimType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<ESelectPlayerAnimType>()
	{
		return ESelectPlayerAnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESelectPlayerAnimType(ESelectPlayerAnimType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("ESelectPlayerAnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_ESelectPlayerAnimType_Hash() { return 1961909391U; }
	UEnum* Z_Construct_UEnum_SogangUniv_ESelectPlayerAnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESelectPlayerAnimType"), 0, Get_Z_Construct_UEnum_SogangUniv_ESelectPlayerAnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESelectPlayerAnimType::Idle", (int64)ESelectPlayerAnimType::Idle },
				{ "ESelectPlayerAnimType::Select", (int64)ESelectPlayerAnimType::Select },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n *\n */" },
				{ "Idle.Comment", "/**\n *\n */" },
				{ "Idle.Name", "ESelectPlayerAnimType::Idle" },
				{ "ModuleRelativePath", "Player/SelectPlayerAnimInstance.h" },
				{ "Select.Comment", "/**\n *\n */" },
				{ "Select.Name", "ESelectPlayerAnimType::Select" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"ESelectPlayerAnimType",
				"ESelectPlayerAnimType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(USelectPlayerAnimInstance::execAnimNotify_TransitionIdle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_TransitionIdle();
		P_NATIVE_END;
	}
	void USelectPlayerAnimInstance::StaticRegisterNativesUSelectPlayerAnimInstance()
	{
		UClass* Class = USelectPlayerAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_TransitionIdle", &USelectPlayerAnimInstance::execAnimNotify_TransitionIdle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Player/SelectPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectPlayerAnimInstance, nullptr, "AnimNotify_TransitionIdle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USelectPlayerAnimInstance_NoRegister()
	{
		return USelectPlayerAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_USelectPlayerAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_AnimType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_AnimType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USelectPlayerAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USelectPlayerAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectPlayerAnimInstance_AnimNotify_TransitionIdle, "AnimNotify_TransitionIdle" }, // 2116406493
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectPlayerAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Player/SelectPlayerAnimInstance.h" },
		{ "ModuleRelativePath", "Player/SelectPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USelectPlayerAnimInstance_Statics::NewProp_m_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USelectPlayerAnimInstance_Statics::NewProp_m_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SelectPlayerAnimInstance" },
		{ "ModuleRelativePath", "Player/SelectPlayerAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USelectPlayerAnimInstance_Statics::NewProp_m_AnimType = { "m_AnimType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USelectPlayerAnimInstance, m_AnimType), Z_Construct_UEnum_SogangUniv_ESelectPlayerAnimType, METADATA_PARAMS(Z_Construct_UClass_USelectPlayerAnimInstance_Statics::NewProp_m_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USelectPlayerAnimInstance_Statics::NewProp_m_AnimType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectPlayerAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectPlayerAnimInstance_Statics::NewProp_m_AnimType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectPlayerAnimInstance_Statics::NewProp_m_AnimType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USelectPlayerAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectPlayerAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USelectPlayerAnimInstance_Statics::ClassParams = {
		&USelectPlayerAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USelectPlayerAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USelectPlayerAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USelectPlayerAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USelectPlayerAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USelectPlayerAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USelectPlayerAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USelectPlayerAnimInstance, 1665522321);
	template<> SOGANGUNIV_API UClass* StaticClass<USelectPlayerAnimInstance>()
	{
		return USelectPlayerAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USelectPlayerAnimInstance(Z_Construct_UClass_USelectPlayerAnimInstance, &USelectPlayerAnimInstance::StaticClass, TEXT("/Script/SogangUniv"), TEXT("USelectPlayerAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USelectPlayerAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
