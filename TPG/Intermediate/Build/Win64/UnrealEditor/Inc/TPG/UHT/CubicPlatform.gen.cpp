// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TPG/CubicPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubicPlatform() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	TPG_API UClass* Z_Construct_UClass_ACubicPlatform();
	TPG_API UClass* Z_Construct_UClass_ACubicPlatform_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TPG();
// End Cross Module References
	void ACubicPlatform::StaticRegisterNativesACubicPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACubicPlatform);
	UClass* Z_Construct_UClass_ACubicPlatform_NoRegister()
	{
		return ACubicPlatform::StaticClass();
	}
	struct Z_Construct_UClass_ACubicPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubicPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TPG,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubicPlatform_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubicPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CubicPlatform.h" },
		{ "ModuleRelativePath", "CubicPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubicPlatform_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubicPlatform.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubicPlatform_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACubicPlatform, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubicPlatform_Statics::NewProp_StaticMesh_MetaData), Z_Construct_UClass_ACubicPlatform_Statics::NewProp_StaticMesh_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubicPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubicPlatform_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubicPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubicPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACubicPlatform_Statics::ClassParams = {
		&ACubicPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubicPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubicPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACubicPlatform_Statics::Class_MetaDataParams), Z_Construct_UClass_ACubicPlatform_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACubicPlatform_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACubicPlatform()
	{
		if (!Z_Registration_Info_UClass_ACubicPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACubicPlatform.OuterSingleton, Z_Construct_UClass_ACubicPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACubicPlatform.OuterSingleton;
	}
	template<> TPG_API UClass* StaticClass<ACubicPlatform>()
	{
		return ACubicPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubicPlatform);
	ACubicPlatform::~ACubicPlatform() {}
	struct Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_CubicPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_CubicPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACubicPlatform, ACubicPlatform::StaticClass, TEXT("ACubicPlatform"), &Z_Registration_Info_UClass_ACubicPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACubicPlatform), 3192893361U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_CubicPlatform_h_1114297407(TEXT("/Script/TPG"),
		Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_CubicPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_UE_GIT_BunnyHopper_TPG_Source_TPG_CubicPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
