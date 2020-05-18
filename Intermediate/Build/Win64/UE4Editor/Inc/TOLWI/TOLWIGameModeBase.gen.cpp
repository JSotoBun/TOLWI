// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/TOLWIGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOLWIGameModeBase() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_ATOLWIGameModeBase_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_ATOLWIGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
// End Cross Module References
	void ATOLWIGameModeBase::StaticRegisterNativesATOLWIGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATOLWIGameModeBase_NoRegister()
	{
		return ATOLWIGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATOLWIGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATOLWIGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATOLWIGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TOLWIGameModeBase.h" },
		{ "ModuleRelativePath", "TOLWIGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATOLWIGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATOLWIGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATOLWIGameModeBase_Statics::ClassParams = {
		&ATOLWIGameModeBase::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATOLWIGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATOLWIGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATOLWIGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATOLWIGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATOLWIGameModeBase, 26974270);
	template<> TOLWI_API UClass* StaticClass<ATOLWIGameModeBase>()
	{
		return ATOLWIGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATOLWIGameModeBase(Z_Construct_UClass_ATOLWIGameModeBase, &ATOLWIGameModeBase::StaticClass, TEXT("/Script/TOLWI"), TEXT("ATOLWIGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATOLWIGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
