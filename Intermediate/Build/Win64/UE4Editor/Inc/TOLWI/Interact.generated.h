// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TOLWI_Interact_generated_h
#error "Interact.generated.h already included, missing '#pragma once' in Interact.h"
#endif
#define TOLWI_Interact_generated_h

#define TOLWI_Source_TOLWI_Interact_h_13_SPARSE_DATA
#define TOLWI_Source_TOLWI_Interact_h_13_RPC_WRAPPERS
#define TOLWI_Source_TOLWI_Interact_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define TOLWI_Source_TOLWI_Interact_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOLWI_API UInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOLWI_API, UInteract); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOLWI_API UInteract(UInteract&&); \
	TOLWI_API UInteract(const UInteract&); \
public:


#define TOLWI_Source_TOLWI_Interact_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TOLWI_API UInteract(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TOLWI_API UInteract(UInteract&&); \
	TOLWI_API UInteract(const UInteract&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TOLWI_API, UInteract); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteract); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteract)


#define TOLWI_Source_TOLWI_Interact_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteract(); \
	friend struct Z_Construct_UClass_UInteract_Statics; \
public: \
	DECLARE_CLASS(UInteract, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TOLWI"), TOLWI_API) \
	DECLARE_SERIALIZER(UInteract)


#define TOLWI_Source_TOLWI_Interact_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TOLWI_Source_TOLWI_Interact_h_13_GENERATED_UINTERFACE_BODY() \
	TOLWI_Source_TOLWI_Interact_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_Interact_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	TOLWI_Source_TOLWI_Interact_h_13_GENERATED_UINTERFACE_BODY() \
	TOLWI_Source_TOLWI_Interact_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteract() {} \
public: \
	typedef UInteract UClassType; \
	typedef IInteract ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TOLWI_Source_TOLWI_Interact_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteract() {} \
public: \
	typedef UInteract UClassType; \
	typedef IInteract ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define TOLWI_Source_TOLWI_Interact_h_10_PROLOG
#define TOLWI_Source_TOLWI_Interact_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_Interact_h_13_SPARSE_DATA \
	TOLWI_Source_TOLWI_Interact_h_13_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_Interact_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_Interact_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_Interact_h_13_SPARSE_DATA \
	TOLWI_Source_TOLWI_Interact_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_Interact_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class UInteract>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_Interact_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
