
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CustomizableObject.CustomizableInstancePrivateData
/// Size: 0x02A0 (0x000028 - 0x0002C8)
class UCustomizableInstancePrivateData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(TArray<FGeneratedMaterial>)                GeneratedMaterials                                          ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FGeneratedTexture>)                 GeneratedTextures                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             TextureReuseCache                                           ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FCustomizableInstanceComponentData>) ComponentsData                                             ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               ReferencedMaterials                                         ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<UPhysicsAsset*>)                    ClothingPhysicsAssets                                       ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TArray<UClass*>)                           GatheredAnimBPs                                             ___ OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FGameplayTagContainer)                     AnimBPGameplayTags                                          ___ OFFSET(get<T>, {0x220, 32, 0, 0})
	CMember(TMap<UClass*, FAnimBpGeneratedPhysicsAssets>) AnimBpPhysicsAssets                                      ___ OFFSET(get<T>, {0x240, 80, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableObjectExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagementBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableInstanceLODManagementBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableInstanceLODManagement
/// Size: 0x0058 (0x000028 - 0x000080)
class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/CustomizableObject.MutableMaskOutCache
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UMutableMaskOutCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FString, FString>)                    Materials                                                   ___ OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<FString, FMaskOutTexture>)            Textures                                                    ___ OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectBulk
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomizableObjectBulk : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FString>)                           BulkDataFileNames                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObject
/// Size: 0x0478 (0x000028 - 0x0004A0)
class UCustomizableObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(TArray<FMutableRefSkeletalMeshData>)       ReferenceSkeletalMeshesData                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedMaterials                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ReferencedMaterialSlotNames                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedSkeletons                                         ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ReferencedPassThroughTextures                               ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMutableLODSettings)                       LODSettings                                                 ___ OFFSET(get<T>, {0x78, 128, 0, 0})
	CMember(TArray<FMutableModelImageProperties>)      ImageProperties                                             ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FMorphTargetInfo>)                  ContributingMorphTargetsInfo                                ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<FMorphTargetVertexData>)            MorphTargetReconstructionData                               ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FCustomizableObjectClothConfigData>) ClothSharedConfigsData                                     ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FCustomizableObjectClothingAssetData>) ContributingClothingAssetsData                           ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<FCustomizableObjectMeshToMeshVertData>) ClothMeshToMeshVertData                                 ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<FMutableSkinWeightProfileInfo>)     SkinWeightProfilesInfo                                      ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(TArray<FCustomizableObjectExtensionData>)  AlwaysLoadedExtensionData                                   ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<FCustomizableObjectStreamedExtensionData>) StreamedExtensionData                                ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(int32_t)                                   NumMeshComponentsInRoot                                     ___ OFFSET(get<int32_t>, {0x188, 4, 0, 0})
	CMember(TArray<FMutableModelParameterProperties>)  ParameterProperties                                         ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TMap<FString, FParameterUIData>)           ParameterUIDataMap                                          ___ OFFSET(get<T>, {0x200, 80, 0, 0})
	CMember(TArray<FName>)                             LowPriorityTextures                                         ___ OFFSET(get<T>, {0x250, 16, 0, 0})
	CMember(TMap<FString, FParameterUIData>)           StateUIDataMap                                              ___ OFFSET(get<T>, {0x260, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             PhysicsAssetsMap                                            ___ OFFSET(get<T>, {0x2B0, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             AnimBPAssetsMap                                             ___ OFFSET(get<T>, {0x300, 80, 0, 0})
	CMember(TArray<FAnimBpOverridePhysicsAssetsInfo>)  AnimBpOverridePhysiscAssetsInfo                             ___ OFFSET(get<T>, {0x350, 16, 0, 0})
	CMember(TArray<FMutableRefSocket>)                 SocketArray                                                 ___ OFFSET(get<T>, {0x360, 16, 0, 0})
	CMember(TWeakObjectPtr<UMutableMaskOutCache*>)     MaskOutCache                                                ___ OFFSET(get<T>, {0x370, 32, 0, 0})
	CMember(TMap<uint64_t, FMutableStreamableBlock>)   HashToStreamableBlock                                       ___ OFFSET(get<T>, {0x390, 80, 0, 0})
	CMember(TArray<FString>)                           CustomizableObjectClassTags                                 ___ OFFSET(get<T>, {0x3E0, 16, 0, 0})
	CMember(TArray<FString>)                           PopulationClassTags                                         ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TMap<FString, FParameterTags>)             CustomizableObjectParametersTags                            ___ OFFSET(get<T>, {0x400, 80, 0, 0})
	CMember(TArray<FName>)                             BoneNames                                                   ___ OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UMutableMaskOutCache*)                     MaskOutCache_HardRef                                        ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FGuid)                                     CompilationGuid                                             ___ OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(UCustomizableObjectBulk*)                  BulkData                                                    ___ OFFSET(get<T>, {0x488, 8, 0, 0})
};

/// Class /Script/CustomizableObject.DGGUI
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UDGGUI : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectInstance
/// Size: 0x0368 (0x000028 - 0x000390)
class UCustomizableObjectInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FMulticastInlineDelegate)                  BeginUpdateDelegate                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  UpdatedDelegate                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BeginDestroyDelegate                                        ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<USkeletalMesh*>)                    SkeletalMeshes                                              ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   SkeletalMeshStatus                                          ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FCustomizableObjectInstanceDescriptor)     Descriptor                                                  ___ OFFSET(get<T>, {0x158, 296, 0, 0})
	CMember(UCustomizableInstancePrivateData*)         PrivateData                                                 ___ OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(UCustomizableObject*)                      CustomizableObject                                          ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    ___ OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(TMap<FName, FMultilayerProjector>)         MultilayerProjectors                                        ___ OFFSET(get<T>, {0x338, 80, 0, 0})
};

/// Class /Script/CustomizableObject.MutableTextureMipDataProviderFactory
/// Size: 0x0028 (0x000028 - 0x000050)
class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UCustomizableObjectInstance*)              CustomizableObjectInstance                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableObjectExtensionDataContainer
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomizableObjectExtensionDataContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FCustomizableObjectExtensionData)          Data                                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableSystemImageProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UCustomizableSystemImageProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CustomizableObject.CustomizableObjectSystem
/// Size: 0x0140 (0x000028 - 0x000168)
class UCustomizableObjectSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TArray<FPendingReleaseSkeletalMeshInfo>)   PendingReleaseSkeletalMesh                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FPendingReleaseMaterialsInfo>)      PendingReleaseMaterials                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UDefaultImageProvider*)                    DefaultImageProvider                                        ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UCustomizableInstanceLODManagementBase*)   DefaultInstanceLODManagement                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UCustomizableInstanceLODManagementBase*)   CurrentInstanceLODManagement                                ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<UTexture2D*>)                       ProtectedCachedTextures                                     ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableSkeletalComponent
/// Size: 0x0040 (0x0002A0 - 0x0002E0)
class UCustomizableSkeletalComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	DMember(float)                                     SkippedLastRenderTime                                       ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	CMember(UCustomizableObjectInstance*)              CustomizableObjectInstance                                  ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int32_t)                                   ComponentIndex                                              ___ OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
};

/// Class /Script/CustomizableObject.CustomizableSkeletalMeshActor
/// Size: 0x0028 (0x000310 - 0x000338)
class ACustomizableSkeletalMeshActor : public ASkeletalMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(TArray<UCustomizableSkeletalComponent*>)   CustomizableSkeletalComponents                              ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMeshComponents                                      ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UCustomizableSkeletalComponent*)           CustomizableSkeletalComponent                               ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/CustomizableObject.DefaultImageProvider
/// Size: 0x0050 (0x000028 - 0x000078)
class UDefaultImageProvider : public UCustomizableSystemImageProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, UTexture2D*>)                  Textures                                                    ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.UpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EUpdateResult)                             UpdateResult                                                ___ OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedTexture
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeneratedTexture : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(UTexture*)                                 Texture                                                     ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.GeneratedMaterial
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeneratedMaterial : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGeneratedTexture>)                 Textures                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedPhysicsAssets
/// Size: 0x0040 (0x000000 - 0x000040)
class FReferencedPhysicsAssets : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UPhysicsAsset*>)                    PhysicsAssetsToMerge                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UPhysicsAsset*>)                    AdditionalPhysicsAssets                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ReferencedSkeletons
/// Size: 0x0028 (0x000000 - 0x000028)
class FReferencedSkeletons : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(USkeleton*)                                Skeleton                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<uint16_t>)                          SkeletonIds                                                 ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<USkeleton*>)                        SkeletonsToMerge                                            ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableInstanceComponentData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FCustomizableInstanceComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TMap<FName, TWeakObjectPtr>)               AnimSlotToBP                                                ___ OFFSET(get<T>, {0x8, 80, 0, 0})
	SMember(FReferencedSkeletons)                      Skeletons                                                   ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FReferencedPhysicsAssets)                  PhysicsAssets                                               ___ OFFSET(get<T>, {0x80, 64, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimInstanceOverridePhysicsAsset
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimInstanceOverridePhysicsAsset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   PropertyIndex                                               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UPhysicsAsset*)                            PhysicsAsset                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpGeneratedPhysicsAssets
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimBpGeneratedPhysicsAssets : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAnimInstanceOverridePhysicsAsset>) AnimInstancePropertyIndexAndPhysicsAssets                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothConfigData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectClothConfigData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ClassPath                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ConfigName                                                  ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(TArray<char>)                              ConfigBytes                                                 ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectClothingAssetData
/// Size: 0x0080 (0x000000 - 0x000080)
class FCustomizableObjectClothingAssetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FClothLODDataCommon>)               LodData                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           LodMap                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FCustomizableObjectClothConfigData>) ConfigsData                                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   PhysicsAssetPath                                            ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	SMember(FGuid)                                     OriginalAssetGuid                                           ___ OFFSET(get<T>, {0x6C, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectExtensionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCustomizableObjectExtensionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedStruct)                          Data                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectBoolParameterValue
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectBoolParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   ParameterName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      ParameterValue                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FString)                                   UID                                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIntParameterValue
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectIntParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ParameterName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ParameterValueName                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   UID                                                         ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           ParameterRangeValueNames                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectFloatParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectFloatParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ParameterValue                                              ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   UID                                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<float>)                             ParameterRangeValues                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectTextureParameterValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectTextureParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ParameterName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     ParameterValue                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FString)                                   UID                                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             ParameterRangeValues                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectVectorParameterValue
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectVectorParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ParameterName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              ParameterValue                                              ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   UID                                                         ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjector
/// Size: 0x0038 (0x000000 - 0x000038)
class FCustomizableObjectProjector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3f)                                 Position                                                    ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 Direction                                                   ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FVector3f)                                 Up                                                          ___ OFFSET(get<T>, {0x18, 12, 0, 0})
	SMember(FVector3f)                                 Scale                                                       ___ OFFSET(get<T>, {0x24, 12, 0, 0})
	CMember(ECustomizableObjectProjectorType)          ProjectionType                                              ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectProjectorParameterValue
/// Size: 0x0068 (0x000000 - 0x000068)
class FCustomizableObjectProjectorParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ParameterName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCustomizableObjectProjector)              Value                                                       ___ OFFSET(get<T>, {0x10, 56, 0, 0})
	SMember(FString)                                   UID                                                         ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjector>)      RangeValues                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableParamUIMetadata
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMutableParamUIMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   ObjectFriendlyName                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UISectionName                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   UIOrder                                                     ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               UIThumbnail                                                 ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TMap<FString, FString>)                    ExtraInformation                                            ___ OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             ExtraAssets                                                 ___ OFFSET(get<T>, {0x98, 80, 0, 0})
	DMember(float)                                     MinimumValue                                                ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.IntegerParameterUIData
/// Size: 0x0100 (0x000000 - 0x000100)
class FIntegerParameterUIData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             ___ OFFSET(get<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterUIData
/// Size: 0x0170 (0x000000 - 0x000170)
class FParameterUIData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMutableParamUIMetadata)                   ParamUIMetadata                                             ___ OFFSET(get<T>, {0x10, 240, 0, 0})
	CMember(EMutableParameterType)                     Type                                                        ___ OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(TArray<FIntegerParameterUIData>)           ArrayIntegerParameterOption                                 ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(ECustomizableObjectGroupType)              IntegerParameterGroupType                                   ___ OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(ETextureCompressionStrategy)               TextureCompressionStrategy                                  ___ OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(bool)                                      bLiveUpdateMode                                             ___ OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bReuseInstanceTextures                                      ___ OFFSET(get<bool>, {0x11B, 1, 0, 0})
	CMember(TMap<FString, FString>)                    ForcedParameterValues                                       ___ OFFSET(get<T>, {0x120, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.FParameterOptionsTags
/// Size: 0x0010 (0x000000 - 0x000010)
class FFParameterOptionsTags : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Tags                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.ParameterTags
/// Size: 0x0060 (0x000000 - 0x000060)
class FParameterTags : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FString>)                           Tags                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FFParameterOptionsTags>)     ParameterOptions                                            ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.ProfileParameterDat
/// Size: 0x0070 (0x000000 - 0x000070)
class FProfileParameterDat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   ProfileName                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CompilationOptions
/// Size: 0x0030 (0x000000 - 0x000030)
class FCompilationOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bTextureCompression                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   OptimizationLevel                                           ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bUseDiskCompilation                                         ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelImageProperties
/// Size: 0x0020 (0x000000 - 0x000020)
class FMutableModelImageProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   TextureParameterName                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                Filter                                                      ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      SRGB                                                        ___ OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(bool)                                      FlipGreenChannel                                            ___ OFFSET(get<bool>, {0x14, 1, 1, 1})
	DMember(int32_t)                                   LODBias                                                     ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TEnumAsByte<TextureGroup>)                 LODGroup                                                    ___ OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressX                                                    ___ OFFSET(get<T>, {0x1D, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressY                                                    ___ OFFSET(get<T>, {0x1E, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelParameterValue
/// Size: 0x0018 (0x000000 - 0x000018)
class FMutableModelParameterValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableModelParameterProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FMutableModelParameterProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EMutableParameterType)                     Type                                                        ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FMutableModelParameterValue>)       PossibleValues                                              ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MaskOutTexture
/// Size: 0x0018 (0x000000 - 0x000018)
class FMaskOutTexture : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SizeX                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<uint32_t>)                          Data                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.AnimBpOverridePhysicsAssetsInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FAnimBpOverridePhysicsAssetsInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UClass*>)                   AnimInstanceClass                                           ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            SourceAsset                                                 ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(int32_t)                                   PropertyIndex                                               ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MorphTargetInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMorphTargetInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LodNum                                                      ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MorphTargetVertexData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMorphTargetVertexData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector3f)                                 PositionDelta                                               ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FVector3f)                                 TangentZDelta                                               ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   MorphIndex                                                  ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectMeshToMeshVertData
/// Size: 0x0040 (0x000000 - 0x000040)
class FCustomizableObjectMeshToMeshVertData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     PositionBaryCoordsAndDist                                   ___ OFFSET(get<float>, {0x0, 16, 0, 0})
	DMember(float)                                     NormalBaryCoordsAndDist                                     ___ OFFSET(get<float>, {0x10, 16, 0, 0})
	DMember(float)                                     TangentBaryCoordsAndDist                                    ___ OFFSET(get<float>, {0x20, 16, 0, 0})
	DMember(uint16_t)                                  SourceMeshVertIndices                                       ___ OFFSET(get<uint16_t>, {0x30, 8, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int16_t)                                   SourceAssetIndex                                            ___ OFFSET(get<int16_t>, {0x3C, 2, 0, 0})
	DMember(int16_t)                                   SourceAssetLodIndex                                         ___ OFFSET(get<int16_t>, {0x3E, 2, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableSkinWeightProfileInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableSkinWeightProfileInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      DefaultProfile                                              ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int8_t)                                    DefaultProfileFromLODIndex                                  ___ OFFSET(get<int8_t>, {0x5, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableStreamableBlock
/// Size: 0x0018 (0x000000 - 0x000018)
class FMutableStreamableBlock : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  FileIndex                                                   ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint64_t)                                  Offset                                                      ___ OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
	DMember(uint32_t)                                  Size                                                        ___ OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMutableRefLODInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ScreenSize                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LODHysteresis                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSupportUniformlyDistributedSampling                        ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bAllowCPUAccess                                             ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODRenderData
/// Size: 0x0002 (0x000000 - 0x000002)
class FMutableRefLODRenderData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bIsLODOptional                                              ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bStreamedDataInlined                                        ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefLODData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMutableRefLODData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMutableRefLODInfo)                        LODInfo                                                     ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FMutableRefLODRenderData)                  RenderData                                                  ___ OFFSET(get<T>, {0xC, 2, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSocket
/// Size: 0x0058 (0x000000 - 0x000058)
class FMutableRefSocket : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FVector)                                   RelativeLocation                                            ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  RelativeRotation                                            ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   RelativeScale                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bForceAlwaysAnimated                                        ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefSkeletalMeshSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bEnablePerPolyCollision                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     DefaultUVChannelDensity                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefAssetUserData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMutableRefAssetUserData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UAssetUserData*)                           AssetUserData                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableRefSkeletalMeshData
/// Size: 0x0110 (0x000000 - 0x000110)
class FMutableRefSkeletalMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(USkeletalMesh*)                            SkeletalMesh                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSoftObjectPath)                           SkeletalMeshAssetPath                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<FMutableRefLODData>)                LodData                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FMutableRefSocket>)                 Sockets                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      ___ OFFSET(get<T>, {0x40, 56, 0, 0})
	SMember(FMutableRefSkeletalMeshSettings)           Settings                                                    ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeleton*>)                Skeleton                                                    ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAsset                                                ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PostProcessAnimInst                                         ___ OFFSET(get<T>, {0xC0, 32, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            ShadowPhysicsAsset                                          ___ OFFSET(get<T>, {0xE0, 32, 0, 0})
	CMember(TArray<FMutableRefAssetUserData>)          AssetUserData                                               ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.MutableLODSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FMutableLODSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPerPlatformInt)                           MinLOD                                                      ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       MinQualityLevelLOD                                          ___ OFFSET(get<T>, {0x8, 104, 0, 0})
	DMember(int32_t)                                   NumLODsInRoot                                               ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   FirstLODAvailable                                           ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bLODStreamingEnabled                                        ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(uint32_t)                                  NumLODsToStream                                             ___ OFFSET(get<uint32_t>, {0x7C, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdPair
/// Size: 0x0020 (0x000000 - 0x000020)
class FCustomizableObjectIdPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
class FCustomizableObjectIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   CustomizableObjectGroupName                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   CustomizableObjectName                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Guid                                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CustomizableObject.CustomizableObjectInstanceDescriptor
/// Size: 0x0128 (0x000000 - 0x000128)
class FCustomizableObjectInstanceDescriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UCustomizableObject*)                      CustomizableObject                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FCustomizableObjectBoolParameterValue>) BoolParameters                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCustomizableObjectIntParameterValue>) IntParameters                                            ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCustomizableObjectFloatParameterValue>) FloatParameters                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FCustomizableObjectTextureParameterValue>) TextureParameters                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCustomizableObjectVectorParameterValue>) VectorParameters                                      ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCustomizableObjectProjectorParameterValue>) ProjectorParameters                                ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TMap<FName, FMultilayerProjector>)         MultilayerProjectors                                        ___ OFFSET(get<T>, {0xD8, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjector
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FMultilayerProjector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     ParamName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersMapping                                        ___ OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, int32_t>)                      VirtualLayersOrder                                          ___ OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FName, FMultilayerProjectorLayer>)    DisableVirtualLayers                                        ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjectorLayer
/// Size: 0x0080 (0x000000 - 0x000080)
class FMultilayerProjectorLayer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/CustomizableObject.CustomizableObjectStreamedExtensionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCustomizableObjectStreamedExtensionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UCustomizableObjectExtensionDataContainer*>) ContainerPath                              ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(UCustomizableObjectExtensionDataContainer*) Container                                                  ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseSkeletalMeshInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPendingReleaseSkeletalMeshInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USkeletalMesh*)                            SkeletalMesh                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    Timestamp                                                   ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/CustomizableObject.PendingReleaseMaterialsInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FPendingReleaseMaterialsInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<UMaterialInterface*>)               Materials                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TicksUntilRelease                                           ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CustomizableObject.MultilayerProjectorVirtualLayer
/// Size: 0x0008 (0x000080 - 0x000088)
class FMultilayerProjectorVirtualLayer : public FMultilayerProjectorLayer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Enum /Script/CustomizableObject.EUpdateResult
/// Size: 0x06
enum EUpdateResult : uint8_t
{
	EUpdateResult__Success0                                                          = 0,
	EUpdateResult__Error1                                                            = 1,
	EUpdateResult__ErrorOptimized2                                                   = 2,
	EUpdateResult__ErrorReplaced3                                                    = 3,
	EUpdateResult__ErrorDiscarded4                                                   = 4,
	EUpdateResult__EUpdateResult_MAX5                                                = 5
};

/// Enum /Script/CustomizableObject.EMutableParameterType
/// Size: 0x08
enum EMutableParameterType : uint8_t
{
	EMutableParameterType__None0                                                     = 0,
	EMutableParameterType__Bool1                                                     = 1,
	EMutableParameterType__Int2                                                      = 2,
	EMutableParameterType__Float3                                                    = 3,
	EMutableParameterType__Color4                                                    = 4,
	EMutableParameterType__Projector5                                                = 5,
	EMutableParameterType__Texture6                                                  = 6,
	EMutableParameterType__EMutableParameterType_MAX7                                = 7
};

/// Enum /Script/CustomizableObject.ECustomizableObjectGroupType
/// Size: 0x05
enum ECustomizableObjectGroupType : uint8_t
{
	ECustomizableObjectGroupType__COGT_TOGGLE0                                       = 0,
	ECustomizableObjectGroupType__COGT_ALL1                                          = 1,
	ECustomizableObjectGroupType__COGT_ONE2                                          = 2,
	ECustomizableObjectGroupType__COGT_ONE_OR_NONE3                                  = 3,
	ECustomizableObjectGroupType__COGT_MAX4                                          = 4
};

/// Enum /Script/CustomizableObject.EMutableCompileMeshType
/// Size: 0x06
enum EMutableCompileMeshType : uint8_t
{
	EMutableCompileMeshType__Full0                                                   = 0,
	EMutableCompileMeshType__Local1                                                  = 1,
	EMutableCompileMeshType__LocalAndChildren2                                       = 2,
	EMutableCompileMeshType__AddWorkingSetNoChildren3                                = 3,
	EMutableCompileMeshType__AddWorkingSetAndChildren4                               = 4,
	EMutableCompileMeshType__EMutableCompileMeshType_MAX5                            = 5
};

/// Enum /Script/CustomizableObject.ECustomizableObjectProjectorType
/// Size: 0x04
enum ECustomizableObjectProjectorType : uint8_t
{
	ECustomizableObjectProjectorType__Planar0                                        = 0,
	ECustomizableObjectProjectorType__Cylindrical1                                   = 1,
	ECustomizableObjectProjectorType__Wrapping2                                      = 2,
	ECustomizableObjectProjectorType__ECustomizableObjectProjectorType_MAX3          = 3
};

/// Enum /Script/CustomizableObject.ECustomizableObjectRelevancy
/// Size: 0x03
enum ECustomizableObjectRelevancy : uint8_t
{
	ECustomizableObjectRelevancy__All0                                               = 0,
	ECustomizableObjectRelevancy__ClientOnly1                                        = 1,
	ECustomizableObjectRelevancy__ECustomizableObjectRelevancy_MAX2                  = 2
};

/// Enum /Script/CustomizableObject.ECustomizableObjectNumBoneInfluences
/// Size: 0x04
enum ECustomizableObjectNumBoneInfluences : uint8_t
{
	ECustomizableObjectNumBoneInfluences__Four0                                      = 4,
	ECustomizableObjectNumBoneInfluences__Eight1                                     = 8,
	ECustomizableObjectNumBoneInfluences__Twelve2                                    = 12,
	ECustomizableObjectNumBoneInfluences__ECustomizableObjectNumBoneInfluences_MAX3  = 13
};

/// Enum /Script/CustomizableObject.ECustomizableObjectCompilationState
/// Size: 0x05
enum ECustomizableObjectCompilationState : uint8_t
{
	ECustomizableObjectCompilationState__None0                                       = 0,
	ECustomizableObjectCompilationState__InProgress1                                 = 1,
	ECustomizableObjectCompilationState__Completed2                                  = 2,
	ECustomizableObjectCompilationState__Failed3                                     = 3,
	ECustomizableObjectCompilationState__ECustomizableObjectCompilationState_MAX4    = 4
};

