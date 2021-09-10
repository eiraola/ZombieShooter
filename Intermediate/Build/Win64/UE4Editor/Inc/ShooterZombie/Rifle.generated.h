// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SHOOTERZOMBIE_Rifle_generated_h
#error "Rifle.generated.h already included, missing '#pragma once' in Rifle.h"
#endif
#define SHOOTERZOMBIE_Rifle_generated_h

#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_SPARSE_DATA
#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShoot); \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterZombie"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShooterZombie"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public:


#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARifle)


#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_PRIVATE_PROPERTY_OFFSET
#define ShooterZombie_Source_ShooterZombie_Rifle_h_9_PROLOG
#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_SPARSE_DATA \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_RPC_WRAPPERS \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_INCLASS \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShooterZombie_Source_ShooterZombie_Rifle_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_PRIVATE_PROPERTY_OFFSET \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_SPARSE_DATA \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_INCLASS_NO_PURE_DECLS \
	ShooterZombie_Source_ShooterZombie_Rifle_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTERZOMBIE_API UClass* StaticClass<class ARifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShooterZombie_Source_ShooterZombie_Rifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
