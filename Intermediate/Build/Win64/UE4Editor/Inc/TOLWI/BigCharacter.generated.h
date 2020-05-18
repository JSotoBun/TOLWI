// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOLWI_BigCharacter_generated_h
#error "BigCharacter.generated.h already included, missing '#pragma once' in BigCharacter.h"
#endif
#define TOLWI_BigCharacter_generated_h

#define TOLWI_Source_TOLWI_BigCharacter_h_14_SPARSE_DATA
#define TOLWI_Source_TOLWI_BigCharacter_h_14_RPC_WRAPPERS
#define TOLWI_Source_TOLWI_BigCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define TOLWI_Source_TOLWI_BigCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABigCharacter(); \
	friend struct Z_Construct_UClass_ABigCharacter_Statics; \
public: \
	DECLARE_CLASS(ABigCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ABigCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABigCharacter*>(this); }


#define TOLWI_Source_TOLWI_BigCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABigCharacter(); \
	friend struct Z_Construct_UClass_ABigCharacter_Statics; \
public: \
	DECLARE_CLASS(ABigCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ABigCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABigCharacter*>(this); }


#define TOLWI_Source_TOLWI_BigCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABigCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABigCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigCharacter(ABigCharacter&&); \
	NO_API ABigCharacter(const ABigCharacter&); \
public:


#define TOLWI_Source_TOLWI_BigCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABigCharacter(ABigCharacter&&); \
	NO_API ABigCharacter(const ABigCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABigCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABigCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABigCharacter)


#define TOLWI_Source_TOLWI_BigCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABigCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABigCharacter, FollowCamera); }


#define TOLWI_Source_TOLWI_BigCharacter_h_11_PROLOG
#define TOLWI_Source_TOLWI_BigCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_BigCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_BigCharacter_h_14_SPARSE_DATA \
	TOLWI_Source_TOLWI_BigCharacter_h_14_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_BigCharacter_h_14_INCLASS \
	TOLWI_Source_TOLWI_BigCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_BigCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_BigCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_BigCharacter_h_14_SPARSE_DATA \
	TOLWI_Source_TOLWI_BigCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_BigCharacter_h_14_INCLASS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_BigCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class ABigCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_BigCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
