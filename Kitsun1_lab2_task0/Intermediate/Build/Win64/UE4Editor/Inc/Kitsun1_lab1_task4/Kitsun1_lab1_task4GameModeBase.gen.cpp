// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Kitsun1_lab1_task4/Kitsun1_lab1_task4GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKitsun1_lab1_task4GameModeBase() {}
// Cross Module References
	KITSUN1_LAB1_TASK4_API UClass* Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_NoRegister();
	KITSUN1_LAB1_TASK4_API UClass* Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Kitsun1_lab1_task4();
// End Cross Module References
	void AKitsun1_lab1_task4GameModeBase::StaticRegisterNativesAKitsun1_lab1_task4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_NoRegister()
	{
		return AKitsun1_lab1_task4GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Kitsun1_lab1_task4,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Kitsun1_lab1_task4GameModeBase.h" },
		{ "ModuleRelativePath", "Kitsun1_lab1_task4GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKitsun1_lab1_task4GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics::ClassParams = {
		&AKitsun1_lab1_task4GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKitsun1_lab1_task4GameModeBase, 337219627);
	template<> KITSUN1_LAB1_TASK4_API UClass* StaticClass<AKitsun1_lab1_task4GameModeBase>()
	{
		return AKitsun1_lab1_task4GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKitsun1_lab1_task4GameModeBase(Z_Construct_UClass_AKitsun1_lab1_task4GameModeBase, &AKitsun1_lab1_task4GameModeBase::StaticClass, TEXT("/Script/Kitsun1_lab1_task4"), TEXT("AKitsun1_lab1_task4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKitsun1_lab1_task4GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
