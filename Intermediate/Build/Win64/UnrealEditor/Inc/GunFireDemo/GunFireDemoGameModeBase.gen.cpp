// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GunFireDemo/GunFireDemoGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGunFireDemoGameModeBase() {}
// Cross Module References
	GUNFIREDEMO_API UClass* Z_Construct_UClass_AGunFireDemoGameModeBase_NoRegister();
	GUNFIREDEMO_API UClass* Z_Construct_UClass_AGunFireDemoGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GunFireDemo();
// End Cross Module References
	void AGunFireDemoGameModeBase::StaticRegisterNativesAGunFireDemoGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGunFireDemoGameModeBase_NoRegister()
	{
		return AGunFireDemoGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGunFireDemoGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGunFireDemoGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GunFireDemo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGunFireDemoGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering LOD WorldPartition DataLayers Utilities|Transformation" },
		{ "IncludePath", "GunFireDemoGameModeBase.h" },
		{ "ModuleRelativePath", "GunFireDemoGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGunFireDemoGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGunFireDemoGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGunFireDemoGameModeBase_Statics::ClassParams = {
		&AGunFireDemoGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGunFireDemoGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGunFireDemoGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGunFireDemoGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UECodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGunFireDemoGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGunFireDemoGameModeBase, 1721660691);
	template<> GUNFIREDEMO_API UClass* StaticClass<AGunFireDemoGameModeBase>()
	{
		return AGunFireDemoGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGunFireDemoGameModeBase(Z_Construct_UClass_AGunFireDemoGameModeBase, &AGunFireDemoGameModeBase::StaticClass, TEXT("/Script/GunFireDemo"), TEXT("AGunFireDemoGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGunFireDemoGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
