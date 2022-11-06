// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstacleAssault/MovingPlatform.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovingPlatform() {}
// Cross Module References
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform_NoRegister();
	OBSTACLEASSAULT_API UClass* Z_Construct_UClass_AMovingPlatform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ObstacleAssault();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void AMovingPlatform::StaticRegisterNativesAMovingPlatform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMovingPlatform);
	UClass* Z_Construct_UClass_AMovingPlatform_NoRegister()
	{
		return AMovingPlatform::StaticClass();
	}
	struct Z_Construct_UClass_AMovingPlatform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MoveVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotateVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableMoveVector_MetaData[];
#endif
		static void NewProp_EnableMoveVector_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableMoveVector;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableRotate_MetaData[];
#endif
		static void NewProp_EnableRotate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableRotate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMovingPlatform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ObstacleAssault,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MovingPlatform.h" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveVelocity_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "Comment", "//\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\x86\x8d\xec\x84\xb1, \xea\xb7\xb8\xeb\x9f\xb0\xeb\x8d\xb0 \xec\x97\xac\xea\xb8\xb8\xea\xb1\xb4\xeb\x93\xa4\xeb\xa9\xb4(ex.\xec\x9d\xb4\xeb\xa6\x84\xeb\xb0\x94\xea\xbe\xb8\xea\xb8\xb0 \xeb\x93\xb1) ue\xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c \xea\xb0\x92\xec\x9d\xb4 \xec\x82\xac\xeb\x9d\xbc\xec\xa7\x80\xeb\x8a\x94\xeb\x8d\xb0, \xea\xb1\xb0\xea\xb8\xb4 \xec\x95\x88\xea\xb1\xb4\xeb\x93\xa4\xea\xb3\xa0 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0\xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xeb\xb0\xa9\xeb\xb2\x95 \xec\x97\x86\xeb\x82\x98?\n" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
		{ "ToolTip", "\xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xec\x86\x8d\xec\x84\xb1, \xea\xb7\xb8\xeb\x9f\xb0\xeb\x8d\xb0 \xec\x97\xac\xea\xb8\xb8\xea\xb1\xb4\xeb\x93\xa4\xeb\xa9\xb4(ex.\xec\x9d\xb4\xeb\xa6\x84\xeb\xb0\x94\xea\xbe\xb8\xea\xb8\xb0 \xeb\x93\xb1) ue\xec\x97\x90\xeb\x94\x94\xed\x84\xb0\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\x9c \xea\xb0\x92\xec\x9d\xb4 \xec\x82\xac\xeb\x9d\xbc\xec\xa7\x80\xeb\x8a\x94\xeb\x8d\xb0, \xea\xb1\xb0\xea\xb8\xb4 \xec\x95\x88\xea\xb1\xb4\xeb\x93\xa4\xea\xb3\xa0 \xec\x88\x98\xec\xa0\x95\xed\x95\xa0\xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xeb\xb0\xa9\xeb\xb2\x95 \xec\x97\x86\xeb\x82\x98?" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveVelocity = { "MoveVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, MoveVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveDistance_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveDistance = { "MoveDistance", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, MoveDistance), METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotateVelocity_MetaData[] = {
		{ "Category", "Moving Platform" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotateVelocity = { "RotateVelocity", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMovingPlatform, RotateVelocity), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotateVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotateVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableMoveVector_MetaData[] = {
		{ "Category", "Enable MovingFunc" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	void Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableMoveVector_SetBit(void* Obj)
	{
		((AMovingPlatform*)Obj)->EnableMoveVector = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableMoveVector = { "EnableMoveVector", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingPlatform), &Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableMoveVector_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableMoveVector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableMoveVector_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableRotate_MetaData[] = {
		{ "Category", "Enable MovingFunc" },
		{ "ModuleRelativePath", "MovingPlatform.h" },
	};
#endif
	void Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableRotate_SetBit(void* Obj)
	{
		((AMovingPlatform*)Obj)->EnableRotate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableRotate = { "EnableRotate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMovingPlatform), &Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableRotate_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableRotate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMovingPlatform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_MoveDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_RotateVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableMoveVector,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMovingPlatform_Statics::NewProp_EnableRotate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMovingPlatform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMovingPlatform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMovingPlatform_Statics::ClassParams = {
		&AMovingPlatform::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMovingPlatform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMovingPlatform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMovingPlatform()
	{
		if (!Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton, Z_Construct_UClass_AMovingPlatform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMovingPlatform.OuterSingleton;
	}
	template<> OBSTACLEASSAULT_API UClass* StaticClass<AMovingPlatform>()
	{
		return AMovingPlatform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMovingPlatform);
	struct Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMovingPlatform, AMovingPlatform::StaticClass, TEXT("AMovingPlatform"), &Z_Registration_Info_UClass_AMovingPlatform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMovingPlatform), 1395056238U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_2037039208(TEXT("/Script/ObstacleAssault"),
		Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstacleAssault_Source_ObstacleAssault_MovingPlatform_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
