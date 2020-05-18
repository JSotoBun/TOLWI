// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOLWI_MovingPlatform_generated_h
#error "MovingPlatform.generated.h already included, missing '#pragma once' in MovingPlatform.h"
#endif
#define TOLWI_MovingPlatform_generated_h

#define TOLWI_Source_TOLWI_MovingPlatform_h_15_SPARSE_DATA
#define TOLWI_Source_TOLWI_MovingPlatform_h_15_RPC_WRAPPERS \
	virtual bool ServerDoActivatedAction_Validate(); \
	virtual void ServerDoActivatedAction_Implementation(); \
 \
	DECLARE_FUNCTION(execServerDoActivatedAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDoActivatedAction_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDoActivatedAction_Validate")); \
			return; \
		} \
		P_THIS->ServerDoActivatedAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsMovingChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsMovingChanged(); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerDoActivatedAction_Validate(); \
	virtual void ServerDoActivatedAction_Implementation(); \
 \
	DECLARE_FUNCTION(execServerDoActivatedAction) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerDoActivatedAction_Validate()) \
		{ \
			RPC_ValidateFailed(TEXT("ServerDoActivatedAction_Validate")); \
			return; \
		} \
		P_THIS->ServerDoActivatedAction_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_IsMovingChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_IsMovingChanged(); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_EVENT_PARMS
#define TOLWI_Source_TOLWI_MovingPlatform_h_15_CALLBACK_WRAPPERS
#define TOLWI_Source_TOLWI_MovingPlatform_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMovingPlatform(); \
	friend struct Z_Construct_UClass_AMovingPlatform_Statics; \
public: \
	DECLARE_CLASS(AMovingPlatform, ABasicInteractive, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(AMovingPlatform) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMovingPlatform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMovingPlatform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public:


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMovingPlatform(AMovingPlatform&&); \
	NO_API AMovingPlatform(const AMovingPlatform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMovingPlatform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMovingPlatform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMovingPlatform)


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ObjectToToggle() { return STRUCT_OFFSET(AMovingPlatform, ObjectToToggle); } \
	FORCEINLINE static uint32 __PPO__bIsMoving() { return STRUCT_OFFSET(AMovingPlatform, bIsMoving); }


#define TOLWI_Source_TOLWI_MovingPlatform_h_12_PROLOG \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_EVENT_PARMS


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_SPARSE_DATA \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_CALLBACK_WRAPPERS \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_INCLASS \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_MovingPlatform_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_SPARSE_DATA \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_CALLBACK_WRAPPERS \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_INCLASS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_MovingPlatform_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class AMovingPlatform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_MovingPlatform_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
