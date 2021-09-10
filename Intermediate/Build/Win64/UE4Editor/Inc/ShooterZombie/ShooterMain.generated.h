// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SHOOTERZOMBIE_ShooterMain_generated_h
#error "ShooterMain.generated.h already included, missing '#pragma once' in ShooterMain.h"
#endif
#define SHOOTERZOMBIE_ShooterMain_generated_h

#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_SPARSE_DATA
#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_RPC_WRAPPERS
#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShooterMain(); \
	friend struct Z_Construct_UClass_AShooterMain_Statics; \
public: \
	DECLARE_CLASS(AShooterMain, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterZombie"), NO_API) \
	DECLARE_SERIALIZER(AShooterMain)


#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAShooterMain(); \
	friend struct Z_Construct_UClass_AShooterMain_Statics; \
public: \
	DECLARE_CLASS(AShooterMain, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterZombie"), NO_API) \
	DECLARE_SERIALIZER(AShooterMain)


#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShooterMain(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShooterMain) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterMain); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterMain(AShooterMain&&); \
	NO_API AShooterMain(const AShooterMain&); \
public:


#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShooterMain(AShooterMain&&); \
	NO_API AShooterMain(const AShooterMain&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShooterMain); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShooterMain); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShooterMain)


#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AShooterMain, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AShooterMain, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__Weapon() { return STRUCT_OFFSET(AShooterMain, Weapon); } \
	FORCEINLINE static uint32 __PPO__montage() { return STRUCT_OFFSET(AShooterMain, montage); }


#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_9_PROLOG
#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_SPARSE_DATA \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_RPC_WRAPPERS \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_INCLASS \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_SPARSE_DATA \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_INCLASS_NO_PURE_DECLS \
	ShooterZombie_Source_ShooterZombie_ShooterMain_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERZOMBIE_API UClass* StaticClass<class AShooterMain>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterZombie_Source_ShooterZombie_ShooterMain_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
