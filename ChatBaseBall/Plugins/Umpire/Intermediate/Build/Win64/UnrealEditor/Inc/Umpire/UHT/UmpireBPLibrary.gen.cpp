// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Umpire/Public/UmpireBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUmpireBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UMPIRE_API UClass* Z_Construct_UClass_UUmpireBPLibrary();
UMPIRE_API UClass* Z_Construct_UClass_UUmpireBPLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Umpire();
// End Cross Module References

// Begin Class UUmpireBPLibrary Function CalculateStrike
struct Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics
{
	struct UmpireBPLibrary_eventCalculateStrike_Parms
	{
		FString _input;
		TArray<int32> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Umpire" },
		{ "DisplayName", "CalculateStrike" },
		{ "ModuleRelativePath", "Public/UmpireBPLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp__input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::NewProp__input = { "_input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UmpireBPLibrary_eventCalculateStrike_Parms, _input), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UmpireBPLibrary_eventCalculateStrike_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::NewProp__input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUmpireBPLibrary, nullptr, "CalculateStrike", nullptr, nullptr, Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::UmpireBPLibrary_eventCalculateStrike_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::UmpireBPLibrary_eventCalculateStrike_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUmpireBPLibrary::execCalculateStrike)
{
	P_GET_PROPERTY(FStrProperty,Z_Param__input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<int32>*)Z_Param__Result=UUmpireBPLibrary::CalculateStrike(Z_Param__input);
	P_NATIVE_END;
}
// End Class UUmpireBPLibrary Function CalculateStrike

// Begin Class UUmpireBPLibrary
void UUmpireBPLibrary::StaticRegisterNativesUUmpireBPLibrary()
{
	UClass* Class = UUmpireBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateStrike", &UUmpireBPLibrary::execCalculateStrike },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUmpireBPLibrary);
UClass* Z_Construct_UClass_UUmpireBPLibrary_NoRegister()
{
	return UUmpireBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UUmpireBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "UmpireBPLibrary.h" },
		{ "ModuleRelativePath", "Public/UmpireBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUmpireBPLibrary_CalculateStrike, "CalculateStrike" }, // 513796139
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUmpireBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UUmpireBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Umpire,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUmpireBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUmpireBPLibrary_Statics::ClassParams = {
	&UUmpireBPLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUmpireBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UUmpireBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUmpireBPLibrary()
{
	if (!Z_Registration_Info_UClass_UUmpireBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUmpireBPLibrary.OuterSingleton, Z_Construct_UClass_UUmpireBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUmpireBPLibrary.OuterSingleton;
}
template<> UMPIRE_API UClass* StaticClass<UUmpireBPLibrary>()
{
	return UUmpireBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUmpireBPLibrary);
UUmpireBPLibrary::~UUmpireBPLibrary() {}
// End Class UUmpireBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUmpireBPLibrary, UUmpireBPLibrary::StaticClass, TEXT("UUmpireBPLibrary"), &Z_Registration_Info_UClass_UUmpireBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUmpireBPLibrary), 29756178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_1788394464(TEXT("/Script/Umpire"),
	Z_CompiledInDeferFile_FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_ChatBaseball_ChatBaseBall_Plugins_Umpire_Source_Umpire_Public_UmpireBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
