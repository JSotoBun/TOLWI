// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/Interact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteract() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_UInteract_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_UInteract();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
// End Cross Module References
	void UInteract::StaticRegisterNativesUInteract()
	{
	}
	UClass* Z_Construct_UClass_UInteract_NoRegister()
	{
		return UInteract::StaticClass();
	}
	struct Z_Construct_UClass_UInteract_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteract_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interact.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteract_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteract>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteract_Statics::ClassParams = {
		&UInteract::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteract_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteract()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteract_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteract, 3578847444);
	template<> TOLWI_API UClass* StaticClass<UInteract>()
	{
		return UInteract::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteract(Z_Construct_UClass_UInteract, &UInteract::StaticClass, TEXT("/Script/TOLWI"), TEXT("UInteract"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteract);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
