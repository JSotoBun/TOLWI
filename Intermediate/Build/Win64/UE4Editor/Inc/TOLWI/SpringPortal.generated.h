// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TOLWI_SpringPortal_generated_h
#error "SpringPortal.generated.h already included, missing '#pragma once' in SpringPortal.h"
#endif
#define TOLWI_SpringPortal_generated_h

#define TOLWI_Source_TOLWI_SpringPortal_h_12_SPARSE_DATA
#define TOLWI_Source_TOLWI_SpringPortal_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_SpringPortal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->HandleOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define TOLWI_Source_TOLWI_SpringPortal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpringPortal(); \
	friend struct Z_Construct_UClass_ASpringPortal_Statics; \
public: \
	DECLARE_CLASS(ASpringPortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ASpringPortal) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define TOLWI_Source_TOLWI_SpringPortal_h_12_INCLASS \
private: \
	static void StaticRegisterNativesASpringPortal(); \
	friend struct Z_Construct_UClass_ASpringPortal_Statics; \
public: \
	DECLARE_CLASS(ASpringPortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TOLWI"), NO_API) \
	DECLARE_SERIALIZER(ASpringPortal) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define TOLWI_Source_TOLWI_SpringPortal_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpringPortal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpringPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpringPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpringPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpringPortal(ASpringPortal&&); \
	NO_API ASpringPortal(const ASpringPortal&); \
public:


#define TOLWI_Source_TOLWI_SpringPortal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpringPortal(ASpringPortal&&); \
	NO_API ASpringPortal(const ASpringPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpringPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpringPortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASpringPortal)


#define TOLWI_Source_TOLWI_SpringPortal_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RootScene() { return STRUCT_OFFSET(ASpringPortal, RootScene); } \
	FORCEINLINE static uint32 __PPO__Collision() { return STRUCT_OFFSET(ASpringPortal, Collision); } \
	FORCEINLINE static uint32 __PPO__PlayerCount() { return STRUCT_OFFSET(ASpringPortal, PlayerCount); }


#define TOLWI_Source_TOLWI_SpringPortal_h_9_PROLOG
#define TOLWI_Source_TOLWI_SpringPortal_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_SpringPortal_h_12_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_SpringPortal_h_12_SPARSE_DATA \
	TOLWI_Source_TOLWI_SpringPortal_h_12_RPC_WRAPPERS \
	TOLWI_Source_TOLWI_SpringPortal_h_12_INCLASS \
	TOLWI_Source_TOLWI_SpringPortal_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TOLWI_Source_TOLWI_SpringPortal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TOLWI_Source_TOLWI_SpringPortal_h_12_PRIVATE_PROPERTY_OFFSET \
	TOLWI_Source_TOLWI_SpringPortal_h_12_SPARSE_DATA \
	TOLWI_Source_TOLWI_SpringPortal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_SpringPortal_h_12_INCLASS_NO_PURE_DECLS \
	TOLWI_Source_TOLWI_SpringPortal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TOLWI_API UClass* StaticClass<class ASpringPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TOLWI_Source_TOLWI_SpringPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
