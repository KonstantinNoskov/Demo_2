// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_2_MyMovement_generated_h
#error "MyMovement.generated.h already included, missing '#pragma once' in MyMovement.h"
#endif
#define DEMO_2_MyMovement_generated_h

#define Demo_2_Source_Demo_2_MyMovement_h_15_SPARSE_DATA
#define Demo_2_Source_Demo_2_MyMovement_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSprintReleased); \
	DECLARE_FUNCTION(execSprintPressed);


#define Demo_2_Source_Demo_2_MyMovement_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSprintReleased); \
	DECLARE_FUNCTION(execSprintPressed);


#define Demo_2_Source_Demo_2_MyMovement_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyMovement(); \
	friend struct Z_Construct_UClass_UMyMovement_Statics; \
public: \
	DECLARE_CLASS(UMyMovement, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo_2"), NO_API) \
	DECLARE_SERIALIZER(UMyMovement)


#define Demo_2_Source_Demo_2_MyMovement_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyMovement(); \
	friend struct Z_Construct_UClass_UMyMovement_Statics; \
public: \
	DECLARE_CLASS(UMyMovement, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo_2"), NO_API) \
	DECLARE_SERIALIZER(UMyMovement)


#define Demo_2_Source_Demo_2_MyMovement_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyMovement(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyMovement) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyMovement); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyMovement(UMyMovement&&); \
	NO_API UMyMovement(const UMyMovement&); \
public:


#define Demo_2_Source_Demo_2_MyMovement_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyMovement(UMyMovement&&); \
	NO_API UMyMovement(const UMyMovement&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyMovement); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyMovement); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyMovement)


#define Demo_2_Source_Demo_2_MyMovement_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sprint_MaxWalkSpeed() { return STRUCT_OFFSET(UMyMovement, Sprint_MaxWalkSpeed); } \
	FORCEINLINE static uint32 __PPO__Walk_MaxWalkSpeed() { return STRUCT_OFFSET(UMyMovement, Walk_MaxWalkSpeed); }


#define Demo_2_Source_Demo_2_MyMovement_h_12_PROLOG
#define Demo_2_Source_Demo_2_MyMovement_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_2_Source_Demo_2_MyMovement_h_15_PRIVATE_PROPERTY_OFFSET \
	Demo_2_Source_Demo_2_MyMovement_h_15_SPARSE_DATA \
	Demo_2_Source_Demo_2_MyMovement_h_15_RPC_WRAPPERS \
	Demo_2_Source_Demo_2_MyMovement_h_15_INCLASS \
	Demo_2_Source_Demo_2_MyMovement_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo_2_Source_Demo_2_MyMovement_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_2_Source_Demo_2_MyMovement_h_15_PRIVATE_PROPERTY_OFFSET \
	Demo_2_Source_Demo_2_MyMovement_h_15_SPARSE_DATA \
	Demo_2_Source_Demo_2_MyMovement_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo_2_Source_Demo_2_MyMovement_h_15_INCLASS_NO_PURE_DECLS \
	Demo_2_Source_Demo_2_MyMovement_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_2_API UClass* StaticClass<class UMyMovement>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo_2_Source_Demo_2_MyMovement_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
