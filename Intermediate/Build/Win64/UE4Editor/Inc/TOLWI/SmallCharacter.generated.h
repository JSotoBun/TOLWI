// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOLWI_SmallCharacter_generated_h
#error "SmallCharacter.generated.h already included, missing '#pragma once' in SmallCharacter.h"
#endif
#define TOLWI_SmallCharacter_generated_h

#define TOLWI_Source_TOLWI_SmallCharacter_h_13_SPARSE_DATA
#define TOLWI_Source_TOLWI_SmallCharacter_h_13_RPC_WRAPPERS
#define TOLWI_Source_TOLWI_SmallCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TOLWI_Source_TOLWI_SmallCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASmallCharacter(); \
	friend struct Z_Construct_UClass_ASmallCharacter_Statics; \
public: \
	DECLARE_CLASS(ASmallCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ASmallCharacter)


#define TOLWI_Source_TOLWI_SmallCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesASmallCharacter(); \
	friend struct Z_Construct_UClass_ASmallCharacter_Statics; \
public: \
	DECLARE_CLASS(ASmallCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ASmallCharacter)


#define TOLWI_Source_TOLWI_SmallCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASmallCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASmallCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmallCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmallCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmallCharacter(ASmallCharacter&&); \
	NO_API ASmallCharacter(const ASmallCharacter&); \
public:


#define TOLWI_Source_TOLWI_SmallCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASmallCharacter(ASmallCharacter&&); \
	NO_API ASmallCharacter(const ASmallCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASmallCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASmallCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASmallCharacter)


#define TOLWI_Source_TOLWI_SmallCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ASmallCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ASmallCharacter, FollowCamera); }


#define TOLWI_Source_TOLWI_SmallCharacter_h_10_PROLOG
#define TOLWI_Source_TOLWI_SmallCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_SPARSE_DATA \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_INCLASS \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_SmallCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_SPARSE_DATA \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_INCLASS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_SmallCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class ASmallCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_SmallCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
