// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO_2_Demo_2Character_generated_h
#error "Demo_2Character.generated.h already included, missing '#pragma once' in Demo_2Character.h"
#endif
#define DEMO_2_Demo_2Character_generated_h

#define Demo_2_Source_Demo_2_Demo_2Character_h_15_SPARSE_DATA
#define Demo_2_Source_Demo_2_Demo_2Character_h_15_RPC_WRAPPERS
#define Demo_2_Source_Demo_2_Demo_2Character_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Demo_2_Source_Demo_2_Demo_2Character_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemo_2Character(); \
	friend struct Z_Construct_UClass_ADemo_2Character_Statics; \
public: \
	DECLARE_CLASS(ADemo_2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo_2"), NO_API) \
	DECLARE_SERIALIZER(ADemo_2Character)


#define Demo_2_Source_Demo_2_Demo_2Character_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADemo_2Character(); \
	friend struct Z_Construct_UClass_ADemo_2Character_Statics; \
public: \
	DECLARE_CLASS(ADemo_2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Demo_2"), NO_API) \
	DECLARE_SERIALIZER(ADemo_2Character)


#define Demo_2_Source_Demo_2_Demo_2Character_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemo_2Character(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemo_2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemo_2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemo_2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemo_2Character(ADemo_2Character&&); \
	NO_API ADemo_2Character(const ADemo_2Character&); \
public:


#define Demo_2_Source_Demo_2_Demo_2Character_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemo_2Character(ADemo_2Character&&); \
	NO_API ADemo_2Character(const ADemo_2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemo_2Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemo_2Character); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemo_2Character)


#define Demo_2_Source_Demo_2_Demo_2Character_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ADemo_2Character, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ADemo_2Character, FollowCamera); }


#define Demo_2_Source_Demo_2_Demo_2Character_h_12_PROLOG
#define Demo_2_Source_Demo_2_Demo_2Character_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_PRIVATE_PROPERTY_OFFSET \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_SPARSE_DATA \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_RPC_WRAPPERS \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_INCLASS \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo_2_Source_Demo_2_Demo_2Character_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_PRIVATE_PROPERTY_OFFSET \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_SPARSE_DATA \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_INCLASS_NO_PURE_DECLS \
	Demo_2_Source_Demo_2_Demo_2Character_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEMO_2_API UClass* StaticClass<class ADemo_2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo_2_Source_Demo_2_Demo_2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
