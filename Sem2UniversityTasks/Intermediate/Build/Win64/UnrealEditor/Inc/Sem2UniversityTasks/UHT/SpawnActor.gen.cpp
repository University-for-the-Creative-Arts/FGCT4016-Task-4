// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Sem2UniversityTasks/SpawnActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSpawnActor() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_ASpawnActor();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_ASpawnActor_NoRegister();
SEM2UNIVERSITYTASKS_API UClass* Z_Construct_UClass_ATestActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Sem2UniversityTasks();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpawnActor **************************************************************
void ASpawnActor::StaticRegisterNativesASpawnActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASpawnActor;
UClass* ASpawnActor::GetPrivateStaticClass()
{
	using TClass = ASpawnActor;
	if (!Z_Registration_Info_UClass_ASpawnActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SpawnActor"),
			Z_Registration_Info_UClass_ASpawnActor.InnerSingleton,
			StaticRegisterNativesASpawnActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASpawnActor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpawnActor_NoRegister()
{
	return ASpawnActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnActor.h" },
		{ "ModuleRelativePath", "SpawnActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestActor_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "SpawnActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_TestActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnActor_Statics::NewProp_TestActor = { "TestActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnActor, TestActor), Z_Construct_UClass_UClass, Z_Construct_UClass_ATestActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestActor_MetaData), NewProp_TestActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnActor_Statics::NewProp_TestActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASpawnActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Sem2UniversityTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnActor_Statics::ClassParams = {
	&ASpawnActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASpawnActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASpawnActor()
{
	if (!Z_Registration_Info_UClass_ASpawnActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnActor.OuterSingleton, Z_Construct_UClass_ASpawnActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpawnActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnActor);
ASpawnActor::~ASpawnActor() {}
// ********** End Class ASpawnActor ****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_2_Sem2UniversityTasks_Source_Sem2UniversityTasks_SpawnActor_h__Script_Sem2UniversityTasks_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnActor, ASpawnActor::StaticClass, TEXT("ASpawnActor"), &Z_Registration_Info_UClass_ASpawnActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnActor), 3318968714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_2_Sem2UniversityTasks_Source_Sem2UniversityTasks_SpawnActor_h__Script_Sem2UniversityTasks_511209559(TEXT("/Script/Sem2UniversityTasks"),
	Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_2_Sem2UniversityTasks_Source_Sem2UniversityTasks_SpawnActor_h__Script_Sem2UniversityTasks_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_cpp_FGCT4016_Task_2_Sem2UniversityTasks_Source_Sem2UniversityTasks_SpawnActor_h__Script_Sem2UniversityTasks_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
