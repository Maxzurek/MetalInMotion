// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetalInMotion/MetalInMotionGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetalInMotionGameModeBase() {}
// Cross Module References
	METALINMOTION_API UClass* Z_Construct_UClass_AMetalInMotionGameModeBase_NoRegister();
	METALINMOTION_API UClass* Z_Construct_UClass_AMetalInMotionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MetalInMotion();
// End Cross Module References
	void AMetalInMotionGameModeBase::StaticRegisterNativesAMetalInMotionGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMetalInMotionGameModeBase_NoRegister()
	{
		return AMetalInMotionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMetalInMotionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMetalInMotionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MetalInMotion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMetalInMotionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MetalInMotionGameModeBase.h" },
		{ "ModuleRelativePath", "MetalInMotionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMetalInMotionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMetalInMotionGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMetalInMotionGameModeBase_Statics::ClassParams = {
		&AMetalInMotionGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMetalInMotionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMetalInMotionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMetalInMotionGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMetalInMotionGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMetalInMotionGameModeBase, 3908174113);
	template<> METALINMOTION_API UClass* StaticClass<AMetalInMotionGameModeBase>()
	{
		return AMetalInMotionGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMetalInMotionGameModeBase(Z_Construct_UClass_AMetalInMotionGameModeBase, &AMetalInMotionGameModeBase::StaticClass, TEXT("/Script/MetalInMotion"), TEXT("AMetalInMotionGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMetalInMotionGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
