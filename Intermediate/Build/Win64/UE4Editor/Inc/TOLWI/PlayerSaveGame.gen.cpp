// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/PlayerSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSaveGame() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_UPlayerSaveGame_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_UPlayerSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
// End Cross Module References
	void UPlayerSaveGame::StaticRegisterNativesUPlayerSaveGame()
	{
	}
	UClass* Z_Construct_UClass_UPlayerSaveGame_NoRegister()
	{
		return UPlayerSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PlayerSaveGame.h" },
		{ "ModuleRelativePath", "PlayerSaveGame.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerSaveGame_Statics::ClassParams = {
		&UPlayerSaveGame::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerSaveGame, 2722819737);
	template<> TOLWI_API UClass* StaticClass<UPlayerSaveGame>()
	{
		return UPlayerSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerSaveGame(Z_Construct_UClass_UPlayerSaveGame, &UPlayerSaveGame::StaticClass, TEXT("/Script/TOLWI"), TEXT("UPlayerSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
