// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/TOLWIPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOLWIPlayerController() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_ATOLWIPlayerController_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_ATOLWIPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
	TOLWI_API UFunction* Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_ATOLWIPlayerController_OnSpringLevelCompleted = FName(TEXT("OnSpringLevelCompleted"));
	void ATOLWIPlayerController::OnSpringLevelCompleted(APawn* InstigatorPawn)
	{
		TOLWIPlayerController_eventOnSpringLevelCompleted_Parms Parms;
		Parms.InstigatorPawn=InstigatorPawn;
		ProcessEvent(FindFunctionChecked(NAME_ATOLWIPlayerController_OnSpringLevelCompleted),&Parms);
	}
	void ATOLWIPlayerController::StaticRegisterNativesATOLWIPlayerController()
	{
	}
	struct Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::NewProp_InstigatorPawn = { "InstigatorPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TOLWIPlayerController_eventOnSpringLevelCompleted_Parms, InstigatorPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::NewProp_InstigatorPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Controller" },
		{ "ModuleRelativePath", "TOLWIPlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATOLWIPlayerController, nullptr, "OnSpringLevelCompleted", nullptr, nullptr, sizeof(TOLWIPlayerController_eventOnSpringLevelCompleted_Parms), Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATOLWIPlayerController_NoRegister()
	{
		return ATOLWIPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ATOLWIPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATOLWIPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATOLWIPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATOLWIPlayerController_OnSpringLevelCompleted, "OnSpringLevelCompleted" }, // 635581160
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATOLWIPlayerController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TOLWIPlayerController.h" },
		{ "ModuleRelativePath", "TOLWIPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATOLWIPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATOLWIPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATOLWIPlayerController_Statics::ClassParams = {
		&ATOLWIPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATOLWIPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATOLWIPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATOLWIPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATOLWIPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATOLWIPlayerController, 508775723);
	template<> TOLWI_API UClass* StaticClass<ATOLWIPlayerController>()
	{
		return ATOLWIPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATOLWIPlayerController(Z_Construct_UClass_ATOLWIPlayerController, &ATOLWIPlayerController::StaticClass, TEXT("/Script/TOLWI"), TEXT("ATOLWIPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATOLWIPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
