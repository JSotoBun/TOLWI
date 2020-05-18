// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/TOLWIGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOLWIGameMode() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_ATOLWIGameMode_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_ATOLWIGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
// End Cross Module References
	void ATOLWIGameMode::StaticRegisterNativesATOLWIGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATOLWIGameMode_NoRegister()
	{
		return ATOLWIGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATOLWIGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATOLWIGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATOLWIGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TOLWIGameMode.h" },
		{ "ModuleRelativePath", "TOLWIGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATOLWIGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATOLWIGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATOLWIGameMode_Statics::ClassParams = {
		&ATOLWIGameMode::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATOLWIGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATOLWIGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATOLWIGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATOLWIGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATOLWIGameMode, 3567974549);
	template<> TOLWI_API UClass* StaticClass<ATOLWIGameMode>()
	{
		return ATOLWIGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATOLWIGameMode(Z_Construct_UClass_ATOLWIGameMode, &ATOLWIGameMode::StaticClass, TEXT("/Script/TOLWI"), TEXT("ATOLWIGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATOLWIGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
