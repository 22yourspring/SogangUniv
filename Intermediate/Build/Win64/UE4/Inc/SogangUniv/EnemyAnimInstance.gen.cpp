// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SogangUniv/Enemy/EnemyAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAnimInstance() {}
// Cross Module References
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EEnemyAttackType();
	UPackage* Z_Construct_UPackage__Script_SogangUniv();
	SOGANGUNIV_API UEnum* Z_Construct_UEnum_SogangUniv_EEnemyAnimType();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister();
	SOGANGUNIV_API UClass* Z_Construct_UClass_UEnemyAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
	static UEnum* EEnemyAttackType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_EEnemyAttackType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EEnemyAttackType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<EEnemyAttackType>()
	{
		return EEnemyAttackType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyAttackType(EEnemyAttackType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("EEnemyAttackType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_EEnemyAttackType_Hash() { return 171790215U; }
	UEnum* Z_Construct_UEnum_SogangUniv_EEnemyAttackType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyAttackType"), 0, Get_Z_Construct_UEnum_SogangUniv_EEnemyAttackType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyAttackType::Attack1", (int64)EEnemyAttackType::Attack1 },
				{ "EEnemyAttackType::Attack2", (int64)EEnemyAttackType::Attack2 },
				{ "EEnemyAttackType::Attack3", (int64)EEnemyAttackType::Attack3 },
				{ "EEnemyAttackType::Attack4", (int64)EEnemyAttackType::Attack4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack1.Name", "EEnemyAttackType::Attack1" },
				{ "Attack2.Name", "EEnemyAttackType::Attack2" },
				{ "Attack3.Name", "EEnemyAttackType::Attack3" },
				{ "Attack4.Name", "EEnemyAttackType::Attack4" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"EEnemyAttackType",
				"EEnemyAttackType",
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
	static UEnum* EEnemyAnimType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SogangUniv_EEnemyAnimType, Z_Construct_UPackage__Script_SogangUniv(), TEXT("EEnemyAnimType"));
		}
		return Singleton;
	}
	template<> SOGANGUNIV_API UEnum* StaticEnum<EEnemyAnimType>()
	{
		return EEnemyAnimType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEnemyAnimType(EEnemyAnimType_StaticEnum, TEXT("/Script/SogangUniv"), TEXT("EEnemyAnimType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SogangUniv_EEnemyAnimType_Hash() { return 3785347093U; }
	UEnum* Z_Construct_UEnum_SogangUniv_EEnemyAnimType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SogangUniv();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEnemyAnimType"), 0, Get_Z_Construct_UEnum_SogangUniv_EEnemyAnimType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEnemyAnimType::Idle", (int64)EEnemyAnimType::Idle },
				{ "EEnemyAnimType::Walk", (int64)EEnemyAnimType::Walk },
				{ "EEnemyAnimType::Run", (int64)EEnemyAnimType::Run },
				{ "EEnemyAnimType::Attack", (int64)EEnemyAnimType::Attack },
				{ "EEnemyAnimType::Death", (int64)EEnemyAnimType::Death },
				{ "EEnemyAnimType::Skill", (int64)EEnemyAnimType::Skill },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EEnemyAnimType::Attack" },
				{ "BlueprintType", "true" },
				{ "Death.Name", "EEnemyAnimType::Death" },
				{ "Idle.Name", "EEnemyAnimType::Idle" },
				{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
				{ "Run.Name", "EEnemyAnimType::Run" },
				{ "Skill.Name", "EEnemyAnimType::Skill" },
				{ "Walk.Name", "EEnemyAnimType::Walk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SogangUniv,
				nullptr,
				"EEnemyAnimType",
				"EEnemyAnimType",
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
	DEFINE_FUNCTION(UEnemyAnimInstance::execAnimNotify_DeathEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_DeathEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyAnimInstance::execAnimNotify_AttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEnemyAnimInstance::execAnimNotify_Attack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_Attack();
		P_NATIVE_END;
	}
	void UEnemyAnimInstance::StaticRegisterNativesUEnemyAnimInstance()
	{
		UClass* Class = UEnemyAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_Attack", &UEnemyAnimInstance::execAnimNotify_Attack },
			{ "AnimNotify_AttackEnd", &UEnemyAnimInstance::execAnimNotify_AttackEnd },
			{ "AnimNotify_DeathEnd", &UEnemyAnimInstance::execAnimNotify_DeathEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimInstance, nullptr, "AnimNotify_Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimInstance, nullptr, "AnimNotify_AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnemyAnimInstance, nullptr, "AnimNotify_DeathEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEnemyAnimInstance_NoRegister()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_OnGround_MetaData[];
#endif
		static void NewProp_m_OnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_OnGround;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_AnimType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_AnimType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_AttackType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AttackType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_AttackType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SogangUniv,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEnemyAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_Attack, "AnimNotify_Attack" }, // 1127523835
		{ &Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_AttackEnd, "AnimNotify_AttackEnd" }, // 844250703
		{ &Z_Construct_UFunction_UEnemyAnimInstance_AnimNotify_DeathEnd, "AnimNotify_DeathEnd" }, // 2490557227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Enemy/EnemyAnimInstance.h" },
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_OnGround_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_OnGround_SetBit(void* Obj)
	{
		((UEnemyAnimInstance*)Obj)->m_OnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_OnGround = { "m_OnGround", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEnemyAnimInstance), &Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_OnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_OnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_OnGround_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AnimType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AnimType = { "m_AnimType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, m_AnimType), Z_Construct_UEnum_SogangUniv_EEnemyAnimType, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AnimType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AttackType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AttackType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemyAnimInstance" },
		{ "ModuleRelativePath", "Enemy/EnemyAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AttackType = { "m_AttackType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEnemyAnimInstance, m_AttackType), Z_Construct_UEnum_SogangUniv_EEnemyAttackType, METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AttackType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AttackType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_OnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AnimType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AnimType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AttackType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnemyAnimInstance_Statics::NewProp_m_AttackType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams = {
		&UEnemyAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyAnimInstance, 4093799611);
	template<> SOGANGUNIV_API UClass* StaticClass<UEnemyAnimInstance>()
	{
		return UEnemyAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyAnimInstance(Z_Construct_UClass_UEnemyAnimInstance, &UEnemyAnimInstance::StaticClass, TEXT("/Script/SogangUniv"), TEXT("UEnemyAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
