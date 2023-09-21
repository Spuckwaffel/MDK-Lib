
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: CustomizableObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: McpProfileSys

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_CompileCustomizableObjects : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
/// Size: 0x0010 (0x000028 - 0x000038)
class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams : public UFortCosmeticItemAdditionalData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FName>)                             MaterialOnlyParameterNames                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_HandleGeneratedMesh : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_PlaceComponent
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_PlaceComponent : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsApparelItemDefinition
/// Size: 0x0028 (0x000770 - 0x000798)
class UMeshCosmeticsApparelItemDefinition : public UFortApparelItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1944;

public:
	SMember(FCosmeticSlotSelector)                     SlotValidWithin                                             OFFSET(get<T>, {0x770, 2, 0, 0})
	SMember(FApparelCustomizableItemReference)         Parameter                                                   OFFSET(get<T>, {0x778, 32, 0, 0})
};

/// Class /Script/MeshCosmetics.FortCustomizableObjectParameterVariant
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortCustomizableObjectParameterVariant : public UFortCosmeticVariantBackedByArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FCustomizableObjectParamsVariantDef>) ParameterOptions                                          OFFSET(get<T>, {0x70, 16, 0, 0})
};



	/// Functions
	// Function /Script/MeshCosmetics.FortCustomizableObjectParameterVariant.ApplyVariants
	// void ApplyVariants(AActor* Actor, FFortAthenaLoadout& Loadout);                                                          // [0x9c03488] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
/// Class /Script/MeshCosmetics.FortCustomizableObjectSprayVariant
/// Size: 0x0238 (0x000070 - 0x0002A8)
class UFortCustomizableObjectSprayVariant : public UFortCosmeticVariant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FGameplayTag)                              ActiveSelectionTag                                          OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FString)                                   EnabledParamName                                            OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   ProjectorParamName                                          OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   TextureParamName                                            OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   SaturationParamName                                         OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   WearParamName                                               OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   ScaleParamName                                              OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters OFFSET(get<T>, {0xD8, 72, 0, 0})
	SMember(FCustomizableObjectSprayVariantFixedProperties) FixedSprayLocation                                     OFFSET(get<T>, {0x120, 104, 0, 0})
	SMember(FCustomizableObjectSprayVariantSelectablePayload) DefaultSprayCustomization                            OFFSET(get<T>, {0x188, 152, 0, 0})
	SMember(FCustomizableObjectSprayVariantPayloadClamps) SprayNumericConstraints                                  OFFSET(get<T>, {0x220, 48, 0, 0})
	DMember(float)                                     TextureBaseScale                                            OFFSET(get<float>, {0x250, 4, 0, 0})
	SMember(FCustomizableObjectSprayVariantSlotImageProperties) SpraySlotImageProperties                           OFFSET(get<T>, {0x258, 64, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_ComponentRemoval : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshCosmeticsOption_ApplyAssembledMeshSchema : public UFortCosmeticFlowOption
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshCosmeticsOption_ApplyCustomizableObject : public UFortCosmeticFlowOption
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ApplyParameters : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_CompileObjects
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_CompileObjects : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ManageComponents
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ManageComponents : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsVariance_ProcessVariantAssets : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_ChooseParameters
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_ChooseParameters : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
/// Size: 0x0000 (0x000058 - 0x000058)
class UMeshCosmeticsStep_CommitChosenParams : public UFortCosmeticStep
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticTagInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMeshCosmeticTagInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshCosmetics.FortCustomizableInstanceLODManagement
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MeshCosmetics.MeshCosmeticsLayoutSchema
/// Size: 0x00A0 (0x000378 - 0x000418)
class UMeshCosmeticsLayoutSchema : public UFortApparelLayoutItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(TMap<FCosmeticSlotSelector, FCosmeticsLayoutSlot>) SlotDataConfig                                      OFFSET(get<T>, {0x378, 80, 0, 0})
	CMember(TMap<FCosmeticSlotSelector, TWeakObjectPtr>) SlottedCustomizableObjects                                OFFSET(get<T>, {0x3C8, 80, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsAppliedSchemaData
/// Size: 0x0020 (0x000028 - 0x000048)
class UMeshCosmeticsAppliedSchemaData : public UFortCosmeticItemAdditionalData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UMeshCosmeticsLayoutSchema*>) SchemaAsset                                               OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/MeshCosmetics.MeshCosmeticsSupportedSchemaData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMeshCosmeticsSupportedSchemaData : public UFortCosmeticItemAdditionalData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<TWeakObjectPtr>)                    SupportedSchemas                                            OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.PartHandleControllers
/// Size: 0x0020 (0x000000 - 0x000020)
class FPartHandleControllers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MeshCosmetics.ApparelCustomizableItemReference
/// Size: 0x0020 (0x000000 - 0x000020)
class FApparelCustomizableItemReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   GroupName                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ValueName                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantFixedProperties
/// Size: 0x0068 (0x000000 - 0x000068)
class FCustomizableObjectSprayVariantFixedProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   Position                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   UpDirection                                                 OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   BaseScale                                                   OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     BaseRotation                                                OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantSelectablePayload
/// Size: 0x0018 (0x000080 - 0x000098)
class FCustomizableObjectSprayVariantSelectablePayload : public FBaseVariantDef
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FPrimaryAssetId)                           TextureSource                                               OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(float)                                     Saturation                                                  OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     Wear                                                        OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantMCPPayload
/// Size: 0x0010 (0x000000 - 0x000010)
class FCustomizableObjectSprayVariantMCPPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPrimaryAssetId)                           TextureAssetID                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  CompactSaturation                                           OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  CompactWear                                                 OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  CompactScale                                                OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantPayloadClamps
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectSprayVariantPayloadClamps : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FFloatRange)                               Saturation                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFloatRange)                               Wear                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FFloatRange)                               Scale                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectSprayVariantSlotImageProperties
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectSprayVariantSlotImageProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               SprayNotAssignedImage                                       OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SprayAssignedImage                                          OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectParamVariantBase
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomizableObjectParamVariantBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UCustomizableObject*>)      ObjectToModify                                              OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectValueBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FCustomizableObjectValueBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ParameterName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   RangeIndex                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectIntValue
/// Size: 0x0018 (0x000018 - 0x000030)
class FCustomizableObjectIntValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   NumericValue                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FString)                                   NamedValue                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectFloatValue
/// Size: 0x0008 (0x000018 - 0x000020)
class FCustomizableObjectFloatValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectBoolValue
/// Size: 0x0008 (0x000018 - 0x000020)
class FCustomizableObjectBoolValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectVectorValue
/// Size: 0x0010 (0x000018 - 0x000028)
class FCustomizableObjectVectorValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Value                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectTextureValue
/// Size: 0x0008 (0x000018 - 0x000020)
class FCustomizableObjectTextureValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UTexture2D*)                               Value                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectProjectorValue
/// Size: 0x0068 (0x000018 - 0x000080)
class FCustomizableObjectProjectorValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Position                                                    OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   UpDirection                                                 OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(get<T>, {0x60, 24, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectStateValue
/// Size: 0x0010 (0x000018 - 0x000028)
class FCustomizableObjectStateValue : public FCustomizableObjectValueBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   NewState                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectIntParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectIntParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectIntValue>)       Parameters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectFloatParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectFloatParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectFloatValue>)     Parameters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectBoolParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectBoolParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectBoolValue>)      Parameters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectVectorParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectVectorParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectVectorValue>)    Parameters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectTextureParamVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectTextureParamVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectTextureValue>)   Parameters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectProjectorVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectProjectorVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectProjectorValue>) Parameters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectsVirtualLayer
/// Size: 0x0090 (0x000000 - 0x000090)
class FCustomizableObjectMultilayerProjectsVirtualLayer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bModifyEnabled                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bModifyProjection                                           OFFSET(get<bool>, {0x2, 1, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   UpDirection                                                 OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bModifyImage                                                OFFSET(get<bool>, {0x6C, 1, 0, 0})
	SMember(FString)                                   Image                                                       OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bModifyOpacity                                              OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     Opacity                                                     OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bModifyOrder                                                OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   Order                                                       OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectors
/// Size: 0x0050 (0x000000 - 0x000050)
class FCustomizableObjectMultilayerProjectors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FCustomizableObjectMultilayerProjectsVirtualLayer>) VirtualLayers                          OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectMultilayerProjectorVariant
/// Size: 0x0050 (0x000020 - 0x000070)
class FCustomizableObjectMultilayerProjectorVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TMap<FName, FCustomizableObjectMultilayerProjectors>) MultilayerProjectors                             OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectStateVariant
/// Size: 0x0010 (0x000020 - 0x000030)
class FCustomizableObjectStateVariant : public FCustomizableObjectParamVariantBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCustomizableObjectStateValue>)     States                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.CustomizableObjectParamsVariantDef
/// Size: 0x0080 (0x000080 - 0x000100)
class FCustomizableObjectParamsVariantDef : public FBaseVariantDef
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FCustomizableObjectIntParamVariant>) IntParams                                                  OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParamVariant>) FloatParams                                              OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParamVariant>) BoolParams                                                OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParamVariant>) VectorParams                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParamVariant>) TextureParams                                          OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorVariant>) ProjectorParams                                           OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectMultilayerProjectorVariant>) MultilayerProjectorParams                       OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectStateVariant>)   StateVariants                                               OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizationPerSlotData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMeshCosmeticsCustomizationPerSlotData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizableObjectEntry
/// Size: 0x02A0 (0x000000 - 0x0002A0)
class FMeshCosmeticsCustomizableObjectEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsCustomizationCCV2Data
/// Size: 0x0020 (0x000000 - 0x000020)
class FMeshCosmeticsCustomizationCCV2Data : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsImageProviderWrapper
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshCosmeticsImageProviderWrapper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UDefaultImageProvider*)                    ImageProvider                                               OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MeshCosmetics.PendingCustomizationComponentsList
/// Size: 0x0030 (0x000000 - 0x000030)
class FPendingCustomizationComponentsList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/MeshCosmetics.LoadedAthenaCosmeticAssets
/// Size: 0x0020 (0x000000 - 0x000020)
class FLoadedAthenaCosmeticAssets : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MeshCosmetics.PendingVariantAssetsToLoad
/// Size: 0x0058 (0x000000 - 0x000058)
class FPendingVariantAssetsToLoad : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/MeshCosmetics.SkeletalComponentData
/// Size: 0x0018 (0x000000 - 0x000018)
class FSkeletalComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UMeshCosmeticsLayoutSchema*)               LayoutSchema                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCosmeticSlotSelector)                     Slot                                                        OFFSET(get<T>, {0x8, 2, 0, 0})
	CMember(UCustomizableObject*)                      CustomizableObject                                          OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/MeshCosmetics.CosmeticSlotSelector
/// Size: 0x0002 (0x000000 - 0x000002)
class FCosmeticSlotSelector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(TEnumAsByte<EFortCustomPartType>)          LegacyPartType                                              OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EAthenaCustomizationCategory)              SourceCategory                                              OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/MeshCosmetics.MeshCosmeticsPassDataCommon
/// Size: 0x0110 (0x000000 - 0x000110)
class FMeshCosmeticsPassDataCommon : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TMap<FCosmeticSlotSelector, FCosmeticsLayoutSlot>) AllSlotDataConfigs                                  OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FCosmeticSlotSelector, UMeshCosmeticsLayoutSchema*>) ProvidedSlotsToSchemaData                    OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<UAthenaCosmeticItemDefinition*>)    MeshCosmeticsItemDefs                                       OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UObject*>)                          KeepLoadedObjects                                           OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TMap<UCustomizableSkeletalComponent*, FSkeletalComponentData>) SkeletalComponentData                   OFFSET(get<T>, {0xC0, 80, 0, 0})
};

/// Struct /Script/MeshCosmetics.CosmeticsLayoutSlot
/// Size: 0x0098 (0x000000 - 0x000098)
class FCosmeticsLayoutSlot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TWeakObjectPtr<UCustomizableObject*>)      SlottedObject                                               OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   ComponentIndex                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FCosmeticSlotSelector)                     RequiredCosmeticPart                                        OFFSET(get<T>, {0x24, 2, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ProportionalLayerAnimBP                                     OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TMap<int32_t, FName>)                      LinkedAnimGraphTag                                          OFFSET(get<T>, {0x48, 80, 0, 0})
};

