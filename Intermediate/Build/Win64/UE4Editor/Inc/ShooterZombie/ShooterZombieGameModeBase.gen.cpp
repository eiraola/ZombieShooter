// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShooterZombie/ShooterZombieGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShooterZombieGameModeBase() {}
// Cross Module References
	SHOOTERZOMBIE_API UClass* Z_Construct_UClass_AShooterZombieGameModeBase_NoRegister();
	SHOOTERZOMBIE_API UClass* Z_Construct_UClass_AShooterZombieGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShooterZombie();
// End Cross Module References
	void AShooterZombieGameModeBase::StaticRegisterNativesAShooterZombieGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AShooterZombieGameModeBase_NoRegister()
	{
		return AShooterZombieGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AShooterZombieGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShooterZombieGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShooterZombie,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShooterZombieGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShooterZombieGameModeBase.h" },
		{ "ModuleRelativePath", "ShooterZombieGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShooterZombieGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShooterZombieGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShooterZombieGameModeBase_Statics::ClassParams = {
		&AShooterZombieGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShooterZombieGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShooterZombieGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShooterZombieGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShooterZombieGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShooterZombieGameModeBase, 3919907930);
	template<> SHOOTERZOMBIE_API UClass* StaticClass<AShooterZombieGameModeBase>()
	{
		return AShooterZombieGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShooterZombieGameModeBase(Z_Construct_UClass_AShooterZombieGameModeBase, &AShooterZombieGameModeBase::StaticClass, TEXT("/Script/ShooterZombie"), TEXT("AShooterZombieGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShooterZombieGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
