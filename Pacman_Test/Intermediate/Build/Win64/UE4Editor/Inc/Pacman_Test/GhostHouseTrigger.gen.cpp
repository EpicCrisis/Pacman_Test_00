// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GhostHouseTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGhostHouseTrigger() {}
// Cross Module References
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostHouseTrigger_NoRegister();
	PACMAN_TEST_API UClass* Z_Construct_UClass_AGhostHouseTrigger();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Pacman_Test();
// End Cross Module References
	void AGhostHouseTrigger::StaticRegisterNativesAGhostHouseTrigger()
	{
	}
	UClass* Z_Construct_UClass_AGhostHouseTrigger_NoRegister()
	{
		return AGhostHouseTrigger::StaticClass();
	}
	UClass* Z_Construct_UClass_AGhostHouseTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_Pacman_Test,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "GhostHouseTrigger.h" },
				{ "ModuleRelativePath", "GhostHouseTrigger.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGhostHouseTrigger>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGhostHouseTrigger::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGhostHouseTrigger, 371960155);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGhostHouseTrigger(Z_Construct_UClass_AGhostHouseTrigger, &AGhostHouseTrigger::StaticClass, TEXT("/Script/Pacman_Test"), TEXT("AGhostHouseTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGhostHouseTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
