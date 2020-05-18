// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/MovingPlatform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_AMovingPlatform();
	TOLWI_API UClass* Z_Construct_UClass_ABasicInteractive();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
	TOLWI_API UFunction* Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent();
	TOLWI_API UFunction* Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged();
	TOLWI_API UFunction* Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_AMovingPlatform_OnPlatformMovingEvent = FName(TEXT("OnPlatformMovingEvent"));
	void AMovingPlatform::OnPlatformMovingEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMovingPlatform_OnPlatformMovingEvent),NULL);
	}
	static FName NAME_AMovingPlatform_ServerDoActivatedAction = FName(TEXT("ServerDoActivatedAction"));
	void AMovingPlatform::ServerDoActivatedAction()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMovingPlatform_ServerDoActivatedAction),NULL);
	}
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
		UClass* Class = AMovingPlatform::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_IsMovingChanged", &AMovingPlatform::execOnRep_IsMovingChanged },
			{ "ServerDoActivatedAction", &AMovingPlatform::execServerDoActivatedAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Event only implemented on a blueprint\n" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
		{ "ToolTip", "Event only implemented on a blueprint" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "OnPlatformMovingEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Event when bIsMovingChanges\n" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
		{ "ToolTip", "Event when bIsMovingChanges" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "OnRep_IsMovingChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMovingPlatform, nullptr, "ServerDoActivatedAction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsMoving_MetaData[];
#endif
		static void NewProp_bIsMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectToToggle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectToToggle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABasicInteractive,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMovingPlatform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMovingPlatform_OnPlatformMovingEvent, "OnPlatformMovingEvent" }, // 2386378358
		{ &Z_Construct_UFunction_AMovingPlatform_OnRep_IsMovingChanged, "OnRep_IsMovingChanged" }, // 2021274510
		{ &Z_Construct_UFunction_AMovingPlatform_ServerDoActivatedAction, "ServerDoActivatedAction" }, // 3228614844
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_bIsMoving_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	void Z_Construct_UClass_AMovingPlatform_Statics::NewProp_bIsMoving_SetBit(void* Obj)
	{
		((AMovingPlatform*)Obj)->bIsMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_bIsMoving = { "bIsMoving", "OnRep_IsMovingChanged", (EPropertyFlags)0x0020080100010021, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingPlatform), &Z_Construct_UClass_AMovingPlatform_Statics::NewProp_bIsMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_bIsMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_bIsMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_ObjectToToggle_MetaData[] = {
		{ "Category", "MovingPlatform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_ObjectToToggle = { "ObjectToToggle", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, ObjectToToggle), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_ObjectToToggle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_ObjectToToggle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_bIsMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_ObjectToToggle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
		&AMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMovingPlatform, 870194614);
	template<> TOLWI_API UClass* StaticClass<AMovingPlatform>()
	{
		return AMovingPlatform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMovingPlatform(Z_Construct_UClass_AMovingPlatform, &AMovingPlatform::StaticClass, TEXT("/Script/TOLWI"), TEXT("AMovingPlatform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
