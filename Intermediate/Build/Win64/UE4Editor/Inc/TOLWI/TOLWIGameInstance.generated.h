// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOLWI_TOLWIGameInstance_generated_h
#error "TOLWIGameInstance.generated.h already included, missing '#pragma once' in TOLWIGameInstance.h"
#endif
#define TOLWI_TOLWIGameInstance_generated_h

#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_SPARSE_DATA
#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJoin) \
	{ \
		P_GET_PROPERTY(UUInt32Property,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Join(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHost) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Host(Z_Param_ServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadMenuWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadMenuWidget(); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTOLWIGameInstance(); \
	friend struct Z_Construct_UClass_UTOLWIGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTOLWIGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(UTOLWIGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UTOLWIGameInstance*>(this); }


#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUTOLWIGameInstance(); \
	friend struct Z_Construct_UClass_UTOLWIGameInstance_Statics; \
public: \
	DECLARE_CLASS(UTOLWIGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(UTOLWIGameInstance) \
	virtual UObject* _getUObject() const override { return const_cast<UTOLWIGameInstance*>(this); }


#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTOLWIGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTOLWIGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOLWIGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOLWIGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTOLWIGameInstance(UTOLWIGameInstance&&); \
	NO_API UTOLWIGameInstance(const UTOLWIGameInstance&); \
public:


#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTOLWIGameInstance(UTOLWIGameInstance&&); \
	NO_API UTOLWIGameInstance(const UTOLWIGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTOLWIGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTOLWIGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTOLWIGameInstance)


#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_PRIVATE_PROPERTY_OFFSET
#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_16_PROLOG
#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_SPARSE_DATA \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_INCLASS \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_SPARSE_DATA \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_INCLASS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_TOLWIGameInstance_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class UTOLWIGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_TOLWIGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
