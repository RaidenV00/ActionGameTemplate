// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WindowsGamingInput/Public/WindowsGamingInputBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWindowsGamingInputBPLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_WindowsGamingInput();
WINDOWSGAMINGINPUT_API UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary();
WINDOWSGAMINGINPUT_API UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary_NoRegister();
// End Cross Module References

// Begin Class UWindowsGamingInputBPLibrary Function ApplyVibration
struct Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics
{
	struct WindowsGamingInputBPLibrary_eventApplyVibration_Parms
	{
		int32 ControllerIndex;
		float LeftTrigger;
		float RightTrigger;
		float LeftMotor;
		float RightMotor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsGamingInput" },
		{ "DisplayName", "Apply vibration" },
		{ "Keywords", "vibration impulse triggers" },
		{ "ModuleRelativePath", "Public/WindowsGamingInputBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Applies vibration to controller" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightTrigger;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LeftMotor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightMotor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ControllerIndex = { "ControllerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, ControllerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftTrigger = { "LeftTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, LeftTrigger), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightTrigger = { "RightTrigger", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, RightTrigger), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftMotor = { "LeftMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, LeftMotor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightMotor = { "RightMotor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WindowsGamingInputBPLibrary_eventApplyVibration_Parms, RightMotor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsGamingInputBPLibrary_eventApplyVibration_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsGamingInputBPLibrary_eventApplyVibration_Parms), &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ControllerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightTrigger,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_LeftMotor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_RightMotor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsGamingInputBPLibrary, nullptr, "ApplyVibration", nullptr, nullptr, Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::WindowsGamingInputBPLibrary_eventApplyVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::WindowsGamingInputBPLibrary_eventApplyVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsGamingInputBPLibrary::execApplyVibration)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LeftTrigger);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RightTrigger);
	P_GET_PROPERTY(FFloatProperty,Z_Param_LeftMotor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RightMotor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsGamingInputBPLibrary::ApplyVibration(Z_Param_ControllerIndex,Z_Param_LeftTrigger,Z_Param_RightTrigger,Z_Param_LeftMotor,Z_Param_RightMotor);
	P_NATIVE_END;
}
// End Class UWindowsGamingInputBPLibrary Function ApplyVibration

// Begin Class UWindowsGamingInputBPLibrary Function Compatibility
struct Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics
{
	struct WindowsGamingInputBPLibrary_eventCompatibility_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WindowsGamingInput" },
		{ "DisplayName", "Compatibility Check" },
		{ "Keywords", "check windows version" },
		{ "ModuleRelativePath", "Public/WindowsGamingInputBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks Windows version for compatibility" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((WindowsGamingInputBPLibrary_eventCompatibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WindowsGamingInputBPLibrary_eventCompatibility_Parms), &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWindowsGamingInputBPLibrary, nullptr, "Compatibility", nullptr, nullptr, Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::WindowsGamingInputBPLibrary_eventCompatibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::WindowsGamingInputBPLibrary_eventCompatibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWindowsGamingInputBPLibrary::execCompatibility)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UWindowsGamingInputBPLibrary::Compatibility();
	P_NATIVE_END;
}
// End Class UWindowsGamingInputBPLibrary Function Compatibility

// Begin Class UWindowsGamingInputBPLibrary
void UWindowsGamingInputBPLibrary::StaticRegisterNativesUWindowsGamingInputBPLibrary()
{
	UClass* Class = UWindowsGamingInputBPLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyVibration", &UWindowsGamingInputBPLibrary::execApplyVibration },
		{ "Compatibility", &UWindowsGamingInputBPLibrary::execCompatibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWindowsGamingInputBPLibrary);
UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary_NoRegister()
{
	return UWindowsGamingInputBPLibrary::StaticClass();
}
struct Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
#endif
		{ "IncludePath", "WindowsGamingInputBPLibrary.h" },
		{ "ModuleRelativePath", "Public/WindowsGamingInputBPLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_ApplyVibration, "ApplyVibration" }, // 3995383150
		{ &Z_Construct_UFunction_UWindowsGamingInputBPLibrary_Compatibility, "Compatibility" }, // 2373307408
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWindowsGamingInputBPLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_WindowsGamingInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::ClassParams = {
	&UWindowsGamingInputBPLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWindowsGamingInputBPLibrary()
{
	if (!Z_Registration_Info_UClass_UWindowsGamingInputBPLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWindowsGamingInputBPLibrary.OuterSingleton, Z_Construct_UClass_UWindowsGamingInputBPLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWindowsGamingInputBPLibrary.OuterSingleton;
}
template<> WINDOWSGAMINGINPUT_API UClass* StaticClass<UWindowsGamingInputBPLibrary>()
{
	return UWindowsGamingInputBPLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWindowsGamingInputBPLibrary);
UWindowsGamingInputBPLibrary::~UWindowsGamingInputBPLibrary() {}
// End Class UWindowsGamingInputBPLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_ACTGameTemplate_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWindowsGamingInputBPLibrary, UWindowsGamingInputBPLibrary::StaticClass, TEXT("UWindowsGamingInputBPLibrary"), &Z_Registration_Info_UClass_UWindowsGamingInputBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWindowsGamingInputBPLibrary), 1908478023U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_ACTGameTemplate_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_4146813969(TEXT("/Script/WindowsGamingInput"),
	Z_CompiledInDeferFile_FID_UnrealProjects_ACTGameTemplate_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_ACTGameTemplate_Plugins_WindowsGamingInput_Source_WindowsGamingInput_Public_WindowsGamingInputBPLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
