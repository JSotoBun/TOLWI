// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/Mechanism.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMechanism() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_AMechanism_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_AMechanism();
	TOLWI_API UClass* Z_Construct_UClass_ABasicInteractive();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
	TOLWI_API UFunction* Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent();
	TOLWI_API UFunction* Z_Construct_UFunction_AMechanism_ServerDoActivatedAction();
// End Cross Module References
	static FName NAME_AMechanism_onMechanismActivatedEvent = FName(TEXT("onMechanismActivatedEvent"));
	void AMechanism::onMechanismActivatedEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMechanism_onMechanismActivatedEvent),NULL);
	}
	static FName NAME_AMechanism_ServerDoActivatedAction = FName(TEXT("ServerDoActivatedAction"));
	void AMechanism::ServerDoActivatedAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMechanism_ServerDoActivatedAction),NULL);
	}
	void AMechanism::StaticRegisterNativesAMechanism()
	{
		UClass* Class = AMechanism::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ServerDoActivatedAction", &AMechanism::execServerDoActivatedAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mechanism.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechanism, nullptr, "onMechanismActivatedEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMechanism_ServerDoActivatedAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMechanism_ServerDoActivatedAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Mechanism.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMechanism_ServerDoActivatedAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMechanism, nullptr, "ServerDoActivatedAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMechanism_ServerDoActivatedAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMechanism_ServerDoActivatedAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMechanism_ServerDoActivatedAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMechanism_ServerDoActivatedAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMechanism_NoRegister()
	{
		return AMechanism::StaticClass();
	}
	struct Z_Construct_UClass_AMechanism_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActivated_MetaData[];
#endif
		static void NewProp_bIsActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActivated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMechanism_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicInteractive,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMechanism_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMechanism_onMechanismActivatedEvent, "onMechanismActivatedEvent" }, // 1684137698
		{ &Z_Construct_UFunction_AMechanism_ServerDoActivatedAction, "ServerDoActivatedAction" }, // 4254787229
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanism_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Mechanism.h" },
		{ "ModuleRelativePath", "Mechanism.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMechanism_Statics::NewProp_bIsActivated_MetaData[] = {
		{ "Category", "Mechanism" },
		{ "ModuleRelativePath", "Mechanism.h" },
	};
#endif
	void Z_Construct_UClass_AMechanism_Statics::NewProp_bIsActivated_SetBit(void* Obj)
	{
		((AMechanism*)Obj)->bIsActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMechanism_Statics::NewProp_bIsActivated = { "bIsActivated", nullptr, (EPropertyFlags)0x0020080000010021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMechanism), &Z_Construct_UClass_AMechanism_Statics::NewProp_bIsActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMechanism_Statics::NewProp_bIsActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanism_Statics::NewProp_bIsActivated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMechanism_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMechanism_Statics::NewProp_bIsActivated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMechanism_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMechanism>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMechanism_Statics::ClassParams = {
		&AMechanism::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMechanism_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMechanism_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMechanism_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMechanism_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMechanism()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMechanism_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMechanism, 1988121040);
	template<> TOLWI_API UClass* StaticClass<AMechanism>()
	{
		return AMechanism::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMechanism(Z_Construct_UClass_AMechanism, &AMechanism::StaticClass, TEXT("/Script/TOLWI"), TEXT("AMechanism"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMechanism);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
