// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UmpireBPLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UMPIRE_UmpireBPLibrary_generated_h
#error "UmpireBPLibrary.generated.h already included, missing '#pragma once' in UmpireBPLibrary.h"
#endif
#define UMPIRE_UmpireBPLibrary_generated_h

#define FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_28_RPC_WRAPPERS \
	DECLARE_FUNCTION(execCalculateStrike);


#define FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_28_INCLASS \
private: \
	static void StaticRegisterNativesUUmpireBPLibrary(); \
	friend struct Z_Construct_UClass_UUmpireBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UUmpireBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Umpire"), NO_API) \
	DECLARE_SERIALIZER(UUmpireBPLibrary)


#define FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_28_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUmpireBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUmpireBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUmpireBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUmpireBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UUmpireBPLibrary(UUmpireBPLibrary&&); \
	UUmpireBPLibrary(const UUmpireBPLibrary&); \
public: \
	NO_API virtual ~UUmpireBPLibrary();


#define FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_25_PROLOG
#define FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_28_RPC_WRAPPERS \
	FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_28_INCLASS \
	FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_28_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMPIRE_API UClass* StaticClass<class UUmpireBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
