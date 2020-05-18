// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TOLWI/TOLWIGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTOLWIGameInstance() {}
// Cross Module References
	TOLWI_API UClass* Z_Construct_UClass_UTOLWIGameInstance_NoRegister();
	TOLWI_API UClass* Z_Construct_UClass_UTOLWIGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_TOLWI();
	TOLWI_API UFunction* Z_Construct_UFunction_UTOLWIGameInstance_Host();
	TOLWI_API UFunction* Z_Construct_UFunction_UTOLWIGameInstance_Join();
	TOLWI_API UFunction* Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget();
	TOLWI_API UClass* Z_Construct_UClass_UMenuInterface_NoRegister();
// End Cross Module References
	void UTOLWIGameInstance::StaticRegisterNativesUTOLWIGameInstance()
	{
		UClass* Class = UTOLWIGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Host", &UTOLWIGameInstance::execHost },
			{ "Join", &UTOLWIGameInstance::execJoin },
			{ "LoadMenuWidget", &UTOLWIGameInstance::execLoadMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics
	{
		struct TOLWIGameInstance_eventHost_Parms
		{
			FString ServerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TOLWIGameInstance_eventHost_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::NewProp_ServerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TOLWIGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTOLWIGameInstance, nullptr, "Host", nullptr, nullptr, sizeof(TOLWIGameInstance_eventHost_Parms), Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTOLWIGameInstance_Host()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTOLWIGameInstance_Host_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics
	{
		struct TOLWIGameInstance_eventJoin_Parms
		{
			uint32 Index;
		};
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TOLWIGameInstance_eventJoin_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TOLWIGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTOLWIGameInstance, nullptr, "Join", nullptr, nullptr, sizeof(TOLWIGameInstance_eventJoin_Parms), Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTOLWIGameInstance_Join()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTOLWIGameInstance_Join_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TOLWIGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTOLWIGameInstance, nullptr, "LoadMenuWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTOLWIGameInstance_NoRegister()
	{
		return UTOLWIGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTOLWIGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTOLWIGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_TOLWI,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTOLWIGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTOLWIGameInstance_Host, "Host" }, // 820167413
		{ &Z_Construct_UFunction_UTOLWIGameInstance_Join, "Join" }, // 3458352520
		{ &Z_Construct_UFunction_UTOLWIGameInstance_LoadMenuWidget, "LoadMenuWidget" }, // 4278343898
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTOLWIGameInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TOLWIGameInstance.h" },
		{ "ModuleRelativePath", "TOLWIGameInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTOLWIGameInstance_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMenuInterface_NoRegister, (int32)VTABLE_OFFSET(UTOLWIGameInstance, IMenuInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTOLWIGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTOLWIGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTOLWIGameInstance_Statics::ClassParams = {
		&UTOLWIGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTOLWIGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTOLWIGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTOLWIGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTOLWIGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTOLWIGameInstance, 1620439699);
	template<> TOLWI_API UClass* StaticClass<UTOLWIGameInstance>()
	{
		return UTOLWIGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTOLWIGameInstance(Z_Construct_UClass_UTOLWIGameInstance, &UTOLWIGameInstance::StaticClass, TEXT("/Script/TOLWI"), TEXT("UTOLWIGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTOLWIGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
