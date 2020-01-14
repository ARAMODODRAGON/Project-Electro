// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Electro/Project_ElectroGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_ElectroGameMode() {}
// Cross Module References
	PROJECT_ELECTRO_API UClass* Z_Construct_UClass_AProject_ElectroGameMode_NoRegister();
	PROJECT_ELECTRO_API UClass* Z_Construct_UClass_AProject_ElectroGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_Electro();
// End Cross Module References
	void AProject_ElectroGameMode::StaticRegisterNativesAProject_ElectroGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProject_ElectroGameMode_NoRegister()
	{
		return AProject_ElectroGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_ElectroGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_ElectroGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Electro,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_ElectroGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Project_ElectroGameMode.h" },
		{ "ModuleRelativePath", "Project_ElectroGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_ElectroGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_ElectroGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProject_ElectroGameMode_Statics::ClassParams = {
		&AProject_ElectroGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AProject_ElectroGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProject_ElectroGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_ElectroGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProject_ElectroGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_ElectroGameMode, 405886879);
	template<> PROJECT_ELECTRO_API UClass* StaticClass<AProject_ElectroGameMode>()
	{
		return AProject_ElectroGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_ElectroGameMode(Z_Construct_UClass_AProject_ElectroGameMode, &AProject_ElectroGameMode::StaticClass, TEXT("/Script/Project_Electro"), TEXT("AProject_ElectroGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_ElectroGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
