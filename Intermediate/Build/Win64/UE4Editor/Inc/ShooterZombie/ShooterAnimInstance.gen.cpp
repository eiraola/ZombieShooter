// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterZombie/ShooterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterAnimInstance() {}
// Cross Module References
	SHOOTERZOMBIE_API UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister();
	SHOOTERZOMBIE_API UClass* Z_Construct_UClass_UShooterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_ShooterZombie();
	SHOOTERZOMBIE_API UClass* Z_Construct_UClass_AShooterMain_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UShooterAnimInstance::execUpdateAnimationProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateAnimationProperties();
		P_NATIVE_END;
	}
	void UShooterAnimInstance::StaticRegisterNativesUShooterAnimInstance()
	{
		UClass* Class = UShooterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateAnimationProperties", &UShooterAnimInstance::execUpdateAnimationProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UShooterAnimInstance, nullptr, "UpdateAnimationProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UShooterAnimInstance_NoRegister()
	{
		return UShooterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UShooterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasWeapon_MetaData[];
#endif
		static void NewProp_bHasWeapon_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsAccelerating_MetaData[];
#endif
		static void NewProp_bIsAccelerating_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAccelerating;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInAir_MetaData[];
#endif
		static void NewProp_bIsInAir_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInAir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_speed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShooterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterZombie,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UShooterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UShooterAnimInstance_UpdateAnimationProperties, "UpdateAnimationProperties" }, // 4212487319
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ShooterAnimInstance.h" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bHasWeapon_MetaData[] = {
		{ "Category", "ShooterAnimInstance" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bHasWeapon_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->bHasWeapon = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bHasWeapon = { "bHasWeapon", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bHasWeapon_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bHasWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bHasWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData[] = {
		{ "Category", "ShooterAnimInstance" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->bIsAccelerating = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating = { "bIsAccelerating", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_MetaData[] = {
		{ "Category", "ShooterAnimInstance" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_SetBit(void* Obj)
	{
		((UShooterAnimInstance*)Obj)->bIsInAir = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir = { "bIsInAir", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UShooterAnimInstance), &Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_SetBit, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed_MetaData[] = {
		{ "Category", "ShooterAnimInstance" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed = { "speed", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterAnimInstance, speed), METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Character_MetaData[] = {
		{ "Category", "ShooterAnimInstance" },
		{ "ModuleRelativePath", "ShooterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShooterAnimInstance, Character), Z_Construct_UClass_AShooterMain_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bHasWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsAccelerating,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_bIsInAir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_speed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShooterAnimInstance_Statics::NewProp_Character,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShooterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShooterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams = {
		&UShooterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShooterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShooterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShooterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShooterAnimInstance, 2061968608);
	template<> SHOOTERZOMBIE_API UClass* StaticClass<UShooterAnimInstance>()
	{
		return UShooterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShooterAnimInstance(Z_Construct_UClass_UShooterAnimInstance, &UShooterAnimInstance::StaticClass, TEXT("/Script/ShooterZombie"), TEXT("UShooterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShooterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
