// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef TOLWI_TOLWIPlayerController_generated_h
#error "TOLWIPlayerController.generated.h already included, missing '#pragma once' in TOLWIPlayerController.h"
#endif
#define TOLWI_TOLWIPlayerController_generated_h

#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_SPARSE_DATA
#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_RPC_WRAPPERS
#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_EVENT_PARMS \
	struct TOLWIPlayerController_eventOnSpringLevelCompleted_Parms \
	{ \
		APawn* InstigatorPawn; \
	};


#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_CALLBACK_WRAPPERS
#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATOLWIPlayerController(); \
	friend struct Z_Construct_UClass_ATOLWIPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATOLWIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ATOLWIPlayerController)


#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATOLWIPlayerController(); \
	friend struct Z_Construct_UClass_ATOLWIPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATOLWIPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ATOLWIPlayerController)


#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATOLWIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATOLWIPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATOLWIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATOLWIPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATOLWIPlayerController(ATOLWIPlayerController&&); \
	NO_API ATOLWIPlayerController(const ATOLWIPlayerController&); \
public:


#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATOLWIPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATOLWIPlayerController(ATOLWIPlayerController&&); \
	NO_API ATOLWIPlayerController(const ATOLWIPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATOLWIPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATOLWIPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATOLWIPlayerController)


#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_12_PROLOG \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_EVENT_PARMS


#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_SPARSE_DATA \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_CALLBACK_WRAPPERS \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_INCLASS \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_SPARSE_DATA \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_CALLBACK_WRAPPERS \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_TOLWIPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class ATOLWIPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_TOLWIPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
