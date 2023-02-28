// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Demo_2/MyMovement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMovement() {}
// Cross Module References
	DEMO_2_API UClass* Z_Construct_UClass_UMyMovement_NoRegister();
	DEMO_2_API UClass* Z_Construct_UClass_UMyMovement();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_Demo_2();
// End Cross Module References
	DEFINE_FUNCTION(UMyMovement::execSprintReleased)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprintReleased();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMyMovement::execSprintPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SprintPressed();
		P_NATIVE_END;
	}
	void UMyMovement::StaticRegisterNativesUMyMovement()
	{
		UClass* Class = UMyMovement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SprintPressed", &UMyMovement::execSprintPressed },
			{ "SprintReleased", &UMyMovement::execSprintReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyMovement_SprintPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMovement_SprintPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMovement_SprintPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMovement, nullptr, "SprintPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyMovement_SprintPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMovement_SprintPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyMovement_SprintPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyMovement_SprintPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyMovement_SprintReleased_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyMovement_SprintReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyMovement_SprintReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyMovement, nullptr, "SprintReleased", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyMovement_SprintReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyMovement_SprintReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyMovement_SprintReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyMovement_SprintReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyMovement_NoRegister()
	{
		return UMyMovement::StaticClass();
	}
	struct Z_Construct_UClass_UMyMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprint_MaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Sprint_MaxWalkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Walk_MaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Walk_MaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Demo_2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyMovement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyMovement_SprintPressed, "SprintPressed" }, // 2244968739
		{ &Z_Construct_UFunction_UMyMovement_SprintReleased, "SprintReleased" }, // 3214416078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMovement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyMovement.h" },
		{ "ModuleRelativePath", "MyMovement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMovement_Statics::NewProp_Sprint_MaxWalkSpeed_MetaData[] = {
		{ "Category", "MyMovement" },
		{ "ModuleRelativePath", "MyMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyMovement_Statics::NewProp_Sprint_MaxWalkSpeed = { "Sprint_MaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMovement, Sprint_MaxWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UMyMovement_Statics::NewProp_Sprint_MaxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMovement_Statics::NewProp_Sprint_MaxWalkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyMovement_Statics::NewProp_Walk_MaxWalkSpeed_MetaData[] = {
		{ "Category", "MyMovement" },
		{ "ModuleRelativePath", "MyMovement.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyMovement_Statics::NewProp_Walk_MaxWalkSpeed = { "Walk_MaxWalkSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyMovement, Walk_MaxWalkSpeed), METADATA_PARAMS(Z_Construct_UClass_UMyMovement_Statics::NewProp_Walk_MaxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMovement_Statics::NewProp_Walk_MaxWalkSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMovement_Statics::NewProp_Sprint_MaxWalkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyMovement_Statics::NewProp_Walk_MaxWalkSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyMovement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyMovement_Statics::ClassParams = {
		&UMyMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyMovement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyMovement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyMovement, 2129581020);
	template<> DEMO_2_API UClass* StaticClass<UMyMovement>()
	{
		return UMyMovement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyMovement(Z_Construct_UClass_UMyMovement, &UMyMovement::StaticClass, TEXT("/Script/Demo_2"), TEXT("UMyMovement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyMovement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
