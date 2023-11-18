// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPG/RoundPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoundPlatform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TPG_API UClass* Z_Construct_UClass_ARoundPlatform();
	TPG_API UClass* Z_Construct_UClass_ARoundPlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPG();
// End Cross Module References
	void ARoundPlatform::StaticRegisterNativesARoundPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoundPlatform);
	UClass* Z_Construct_UClass_ARoundPlatform_NoRegister()
	{
		return ARoundPlatform::StaticClass();
	}
	struct Z_Construct_UClass_ARoundPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRoot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SceneRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARoundPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlatform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RoundPlatform.h" },
		{ "ModuleRelativePath", "RoundPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlatform_Statics::NewProp_SceneRoot_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoundPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundPlatform_Statics::NewProp_SceneRoot = { "SceneRoot", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundPlatform, SceneRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlatform_Statics::NewProp_SceneRoot_MetaData), Z_Construct_UClass_ARoundPlatform_Statics::NewProp_SceneRoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoundPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundPlatform, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh2_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RoundPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh2 = { "StaticMesh2", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoundPlatform, StaticMesh2), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh2_MetaData), Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh2_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoundPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlatform_Statics::NewProp_SceneRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoundPlatform_Statics::NewProp_StaticMesh2,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARoundPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoundPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoundPlatform_Statics::ClassParams = {
		&ARoundPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARoundPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoundPlatform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoundPlatform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ARoundPlatform()
	{
		if (!Z_Registration_Info_UClass_ARoundPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoundPlatform.OuterSingleton, Z_Construct_UClass_ARoundPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARoundPlatform.OuterSingleton;
	}
	template<> TPG_API UClass* StaticClass<ARoundPlatform>()
	{
		return ARoundPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARoundPlatform);
	ARoundPlatform::~ARoundPlatform() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_RoundPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_RoundPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARoundPlatform, ARoundPlatform::StaticClass, TEXT("ARoundPlatform"), &Z_Registration_Info_UClass_ARoundPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoundPlatform), 406718768U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_RoundPlatform_h_434161157(TEXT("/Script/TPG"),
		Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_RoundPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_RoundPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
