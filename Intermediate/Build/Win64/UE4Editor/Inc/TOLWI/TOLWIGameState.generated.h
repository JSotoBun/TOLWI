// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef TOLWI_TOLWIGameState_generated_h
#error "TOLWIGameState.generated.h already included, missing '#pragma once' in TOLWIGameState.h"
#endif
#define TOLWI_TOLWIGameState_generated_h

#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_SPARSE_DATA
#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_RPC_WRAPPERS \
	virtual void MulticastOnSpringPortal_Implementation(APawn* InstigatorPawn); \
 \
	DECLARE_FUNCTION(execMulticastOnSpringPortal) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastOnSpringPortal_Implementation(Z_Param_InstigatorPawn); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void MulticastOnSpringPortal_Implementation(APawn* InstigatorPawn); \
 \
	DECLARE_FUNCTION(execMulticastOnSpringPortal) \
	{ \
		P_GET_OBJECT(APawn,Z_Param_InstigatorPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MulticastOnSpringPortal_Implementation(Z_Param_InstigatorPawn); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_EVENT_PARMS \
	struct TOLWIGameState_eventMulticastOnSpringPortal_Parms \
	{ \
		APawn* InstigatorPawn; \
	};


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_CALLBACK_WRAPPERS
#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATOLWIGameState(); \
	friend struct Z_Construct_UClass_ATOLWIGameState_Statics; \
public: \
	DECLARE_CLASS(ATOLWIGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ATOLWIGameState)


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATOLWIGameState(); \
	friend struct Z_Construct_UClass_ATOLWIGameState_Statics; \
public: \
	DECLARE_CLASS(ATOLWIGameState, AGameState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ATOLWIGameState)


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATOLWIGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATOLWIGameState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATOLWIGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATOLWIGameState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATOLWIGameState(ATOLWIGameState&&); \
	NO_API ATOLWIGameState(const ATOLWIGameState&); \
public:


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATOLWIGameState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATOLWIGameState(ATOLWIGameState&&); \
	NO_API ATOLWIGameState(const ATOLWIGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATOLWIGameState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATOLWIGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATOLWIGameState)


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_PRIVATE_PROPERTY_OFFSET
#define TOLWI_Source_TOLWI_TOLWIGameState_h_14_PROLOG \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_EVENT_PARMS


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_SPARSE_DATA \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_CALLBACK_WRAPPERS \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_INCLASS \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_TOLWIGameState_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_SPARSE_DATA \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_CALLBACK_WRAPPERS \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_INCLASS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_TOLWIGameState_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class ATOLWIGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_TOLWIGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
