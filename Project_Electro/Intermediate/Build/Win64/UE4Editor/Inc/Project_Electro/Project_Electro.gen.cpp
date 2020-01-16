// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Electro/Project_Electro.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_Electro() {}
// Cross Module References
	PROJECT_ELECTRO_API UEnum* Z_Construct_UEnum_Project_Electro_EPowerType();
	UPackage* Z_Construct_UPackage__Script_Project_Electro();
	PROJECT_ELECTRO_API UScriptStruct* Z_Construct_UScriptStruct_FPowerTypeValue();
// End Cross Module References
	static UEnum* EPowerType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Project_Electro_EPowerType, Z_Construct_UPackage__Script_Project_Electro(), TEXT("EPowerType"));
		}
		return Singleton;
	}
	template<> PROJECT_ELECTRO_API UEnum* StaticEnum<EPowerType>()
	{
		return EPowerType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPowerType(EPowerType_StaticEnum, TEXT("/Script/Project_Electro"), TEXT("EPowerType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Project_Electro_EPowerType_Hash() { return 224394843U; }
	UEnum* Z_Construct_UEnum_Project_Electro_EPowerType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Electro();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPowerType"), 0, Get_Z_Construct_UEnum_Project_Electro_EPowerType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPowerType::Red", (int64)EPowerType::Red },
				{ "EPowerType::Blue", (int64)EPowerType::Blue },
				{ "EPowerType::Green", (int64)EPowerType::Green },
				{ "EPowerType::Grey", (int64)EPowerType::Grey },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Project_Electro.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Project_Electro,
				nullptr,
				"EPowerType",
				"EPowerType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPowerTypeValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROJECT_ELECTRO_API uint32 Get_Z_Construct_UScriptStruct_FPowerTypeValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPowerTypeValue, Z_Construct_UPackage__Script_Project_Electro(), TEXT("PowerTypeValue"), sizeof(FPowerTypeValue), Get_Z_Construct_UScriptStruct_FPowerTypeValue_Hash());
	}
	return Singleton;
}
template<> PROJECT_ELECTRO_API UScriptStruct* StaticStruct<FPowerTypeValue>()
{
	return FPowerTypeValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPowerTypeValue(FPowerTypeValue::StaticStruct, TEXT("/Script/Project_Electro"), TEXT("PowerTypeValue"), false, nullptr, nullptr);
static struct FScriptStruct_Project_Electro_StaticRegisterNativesFPowerTypeValue
{
	FScriptStruct_Project_Electro_StaticRegisterNativesFPowerTypeValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PowerTypeValue")),new UScriptStruct::TCppStructOps<FPowerTypeValue>);
	}
} ScriptStruct_Project_Electro_StaticRegisterNativesFPowerTypeValue;
	struct Z_Construct_UScriptStruct_FPowerTypeValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerTypeValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Project_Electro.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPowerTypeValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_value_MetaData[] = {
		{ "Category", "PowerTypeValue" },
		{ "ModuleRelativePath", "Project_Electro.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerTypeValue, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_value_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_type_MetaData[] = {
		{ "Category", "PowerTypeValue" },
		{ "ModuleRelativePath", "Project_Electro.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPowerTypeValue, type), Z_Construct_UEnum_Project_Electro_EPowerType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_type_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPowerTypeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPowerTypeValue_Statics::NewProp_type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPowerTypeValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Electro,
		nullptr,
		&NewStructOps,
		"PowerTypeValue",
		sizeof(FPowerTypeValue),
		alignof(FPowerTypeValue),
		Z_Construct_UScriptStruct_FPowerTypeValue_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerTypeValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPowerTypeValue_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPowerTypeValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPowerTypeValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPowerTypeValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Project_Electro();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PowerTypeValue"), sizeof(FPowerTypeValue), Get_Z_Construct_UScriptStruct_FPowerTypeValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPowerTypeValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPowerTypeValue_Hash() { return 1979350184U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
