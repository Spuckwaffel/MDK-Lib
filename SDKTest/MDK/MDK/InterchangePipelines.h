
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: InterchangeCore

/// Class /Script/InterchangePipelines.InterchangeGenericCommonMeshesProperties
/// Size: 0x0018 (0x0000F8 - 0x000110)
class UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(EInterchangeForceMeshType)                 ForceAllMeshAsType                                          OFFSET(get<T>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bAutoDetectMeshType                                         OFFSET(get<bool>, {0xF9, 1, 0, 0})
	DMember(bool)                                      bImportLods                                                 OFFSET(get<bool>, {0xFA, 1, 0, 0})
	DMember(bool)                                      bBakeMeshes                                                 OFFSET(get<bool>, {0xFB, 1, 0, 0})
	CMember(EInterchangeVertexColorImportOption)       VertexColorImportOption                                     OFFSET(get<T>, {0xFC, 1, 0, 0})
	SMember(FColor)                                    VertexOverrideColor                                         OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	DMember(bool)                                      bRecomputeNormals                                           OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bRecomputeTangents                                          OFFSET(get<bool>, {0x105, 1, 0, 0})
	DMember(bool)                                      bUseMikkTSpace                                              OFFSET(get<bool>, {0x106, 1, 0, 0})
	DMember(bool)                                      bComputeWeightedNormals                                     OFFSET(get<bool>, {0x107, 1, 0, 0})
	DMember(bool)                                      bUseHighPrecisionTangentBasis                               OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bUseFullPrecisionUVs                                        OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bUseBackwardsCompatibleF16TruncUVs                          OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bRemoveDegenerates                                          OFFSET(get<bool>, {0x10B, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bImportOnlyAnimations                                       OFFSET(get<bool>, {0xF8, 1, 0, 0})
	CMember(TWeakObjectPtr<USkeleton*>)                Skeleton                                                    OFFSET(get<T>, {0xFC, 8, 0, 0})
	DMember(bool)                                      bImportMeshesInBoneHierarchy                                OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bUseT0AsRefPose                                             OFFSET(get<bool>, {0x105, 1, 0, 0})
	DMember(bool)                                      bConvertStaticsWithMorphTargetsToSkeletals                  OFFSET(get<bool>, {0x106, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.GLTFPipelineSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UGLTFPipelineSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TMap<FString, FSoftObjectPath>)            MaterialParents                                             OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGLTFPipeline
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UInterchangeGLTFPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bUseGLTFMaterialInstanceLibrary                             OFFSET(get<bool>, {0x100, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.MaterialXPipelineSettings
/// Size: 0x0140 (0x000030 - 0x000170)
class UMaterialXPipelineSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(TMap<EInterchangeMaterialXShaders, FSoftObjectPath>) PredefinedSurfaceShaders                          OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<EInterchangeMaterialXBSDF, FSoftObjectPath>) PredefinedBSDF                                       OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<EInterchangeMaterialXEDF, FSoftObjectPath>) PredefinedEDF                                         OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TMap<EInterchangeMaterialXVDF, FSoftObjectPath>) PredefinedVDF                                         OFFSET(get<T>, {0x120, 80, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeMaterialXPipeline
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UInterchangeMaterialXPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/InterchangePipelines.InterchangeGenericAnimationPipeline
/// Size: 0x0070 (0x0000F8 - 0x000168)
class UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*>) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*>) CommonMeshesProperties                     OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bImportAnimations                                           OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bImportBoneTracks                                           OFFSET(get<bool>, {0x109, 1, 0, 0})
	CMember(EInterchangeAnimationRange)                AnimationRange                                              OFFSET(get<T>, {0x10A, 1, 0, 0})
	SMember(FInt32Interval)                            FrameImportRange                                            OFFSET(getStruct<T>, {0x10C, 8, 0, 0})
	DMember(bool)                                      bUse30HzToBakeBoneAnimation                                 OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(int32_t)                                   CustomBoneAnimationSampleRate                               OFFSET(get<int32_t>, {0x118, 4, 0, 0})
	DMember(bool)                                      bSnapToClosestFrameBoundary                                 OFFSET(get<bool>, {0x11C, 1, 0, 0})
	DMember(bool)                                      bImportCustomAttribute                                      OFFSET(get<bool>, {0x11D, 1, 0, 0})
	DMember(bool)                                      bAddCurveMetadataToSkeleton                                 OFFSET(get<bool>, {0x11E, 1, 0, 0})
	DMember(bool)                                      bSetMaterialDriveParameterOnCustomAttribute                 OFFSET(get<bool>, {0x11F, 1, 0, 0})
	CMember(TArray<FString>)                           MaterialCurveSuffixes                                       OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(bool)                                      bRemoveCurveRedundantKeys                                   OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(bool)                                      bDoNotImportCurveWithZero                                   OFFSET(get<bool>, {0x131, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingNonCurveCustomAttributes                     OFFSET(get<bool>, {0x132, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingCustomAttributeCurves                        OFFSET(get<bool>, {0x133, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingMorphTargetCurves                            OFFSET(get<bool>, {0x134, 1, 0, 0})
	SMember(FString)                                   SourceAnimationName                                         OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	DMember(bool)                                      bSceneImport                                                OFFSET(get<bool>, {0x148, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericAssetsPipeline
/// Size: 0x0090 (0x0000F8 - 0x000188)
class UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(EReimportStrategyFlags)                    ReimportStrategy                                            OFFSET(get<T>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bUseSourceNameForAsset                                      OFFSET(get<bool>, {0xF9, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FVector)                                   ImportOffsetTranslation                                     OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	SMember(FRotator)                                  ImportOffsetRotation                                        OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	DMember(float)                                     ImportOffsetUniformScale                                    OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(UInterchangeGenericCommonMeshesProperties*) CommonMeshesProperties                                     OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(UInterchangeGenericMeshPipeline*)          MeshPipeline                                                OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(UInterchangeGenericAnimationPipeline*)     AnimationPipeline                                           OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(UInterchangeGenericMaterialPipeline*)      MaterialPipeline                                            OFFSET(get<T>, {0x168, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericMaterialPipeline
/// Size: 0x0098 (0x0000F8 - 0x000190)
class UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(bool)                                      bImportMaterials                                            OFFSET(get<bool>, {0xF8, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(EInterchangeMaterialImportOption)          MaterialImport                                              OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(bool)                                      bIdentifyDuplicateMaterials                                 OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bCreateMaterialInstanceForParent                            OFFSET(get<bool>, {0x112, 1, 0, 0})
	SMember(FSoftObjectPath)                           ParentMaterial                                              OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	CMember(UInterchangeGenericTexturePipeline*)       TexturePipeline                                             OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            BaseNodeContainer                                           OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericMeshPipeline
/// Size: 0x00D0 (0x0000F8 - 0x0001C8)
class UInterchangeGenericMeshPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*>) CommonMeshesProperties                     OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*>) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bImportStaticMeshes                                         OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bCombineStaticMeshes                                        OFFSET(get<bool>, {0x109, 1, 0, 0})
	SMember(FName)                                     LODGroup                                                    OFFSET(getStruct<T>, {0x10C, 4, 0, 0})
	DMember(bool)                                      bImportCollision                                            OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bImportCollisionAccordingToMeshName                         OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bOneConvexHullPerUCX                                        OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(bool)                                      bBuildNanite                                                OFFSET(get<bool>, {0x113, 1, 0, 0})
	DMember(bool)                                      bBuildReversedIndexBuffer                                   OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x115, 1, 0, 0})
	DMember(bool)                                      bGenerateDistanceFieldAsIfTwoSided                          OFFSET(get<bool>, {0x116, 1, 0, 0})
	DMember(bool)                                      bSupportFaceRemap                                           OFFSET(get<bool>, {0x117, 1, 0, 0})
	DMember(int32_t)                                   MinLightmapResolution                                       OFFSET(get<int32_t>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   SrcLightmapIndex                                            OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(int32_t)                                   DstLightmapIndex                                            OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	SMember(FVector)                                   BuildScale3D                                                OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	DMember(float)                                     DistanceFieldResolutionScale                                OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              DistanceFieldReplacementMesh                                OFFSET(get<T>, {0x144, 8, 0, 0})
	DMember(int32_t)                                   MaxLumenMeshCards                                           OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	DMember(bool)                                      bImportSkeletalMeshes                                       OFFSET(get<bool>, {0x150, 1, 0, 0})
	CMember(EInterchangeSkeletalMeshContentType)       SkeletalMeshImportContentType                               OFFSET(get<T>, {0x151, 1, 0, 0})
	CMember(EInterchangeSkeletalMeshContentType)       LastSkeletalMeshImportContentType                           OFFSET(get<T>, {0x152, 1, 0, 0})
	DMember(bool)                                      bCombineSkeletalMeshes                                      OFFSET(get<bool>, {0x153, 1, 0, 0})
	DMember(bool)                                      bImportMorphTargets                                         OFFSET(get<bool>, {0x154, 1, 0, 0})
	DMember(bool)                                      bImportVertexAttributes                                     OFFSET(get<bool>, {0x155, 1, 0, 0})
	DMember(bool)                                      bUpdateSkeletonReferencePose                                OFFSET(get<bool>, {0x156, 1, 0, 0})
	DMember(bool)                                      bCreatePhysicsAsset                                         OFFSET(get<bool>, {0x157, 1, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAsset                                                OFFSET(get<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      bUseHighPrecisionSkinWeights                                OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(float)                                     ThresholdPosition                                           OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     ThresholdTangentNormal                                      OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     ThresholdUV                                                 OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     MorphThresholdPosition                                      OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   BoneInfluenceLimit                                          OFFSET(get<int32_t>, {0x174, 4, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericLevelPipeline
/// Size: 0x0010 (0x0000F8 - 0x000108)
class UInterchangeGenericLevelPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(EReimportStrategyFlags)                    ReimportPropertyStrategy                                    OFFSET(get<T>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bDeleteMissingActors                                        OFFSET(get<bool>, {0xF9, 1, 0, 0})
	DMember(bool)                                      bForceReimportDeletedActors                                 OFFSET(get<bool>, {0xFA, 1, 0, 0})
	DMember(bool)                                      bForceReimportDeletedAssets                                 OFFSET(get<bool>, {0xFB, 1, 0, 0})
	DMember(bool)                                      bDeleteMissingAssets                                        OFFSET(get<bool>, {0xFC, 1, 0, 0})
	DMember(bool)                                      bUsePhysicalInsteadOfStandardPerspectiveCamera              OFFSET(get<bool>, {0xFD, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericTexturePipeline
/// Size: 0x0058 (0x0000F8 - 0x000150)
class UInterchangeGenericTexturePipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(bool)                                      bImportTextures                                             OFFSET(get<bool>, {0xF8, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bAllowNonPowerOfTwo                                         OFFSET(get<bool>, {0x110, 1, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            BaseNodeContainer                                           OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangePipelineMeshesUtilities
/// Size: 0x0100 (0x000028 - 0x000128)
class UInterchangePipelineMeshesUtilities : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Struct /Script/InterchangePipelines.InterchangeLodSceneNodeContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FInterchangeLodSceneNodeContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UInterchangeSceneNode*>)            SceneNodes                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/InterchangePipelines.InterchangeMeshInstance
/// Size: 0x0080 (0x000000 - 0x000080)
class FInterchangeMeshInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FString)                                   MeshInstanceUid                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(UInterchangeSceneNode*)                    LodGroupNode                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bReferenceSkinnedMesh                                       OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bReferenceMorphTarget                                       OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bHasMorphTargets                                            OFFSET(get<bool>, {0x1A, 1, 0, 0})
	CMember(TMap<int32_t, FInterchangeLodSceneNodeContainer>) SceneNodePerLodIndex                                 OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<FString>)                           ReferencingMeshGeometryUids                                 OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/InterchangePipelines.InterchangeMeshGeometry
/// Size: 0x0038 (0x000000 - 0x000038)
class FInterchangeMeshGeometry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   MeshUid                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(UInterchangeMeshNode*)                     MeshNode                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TArray<FString>)                           ReferencingMeshInstanceUids                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FString>)                           AttachedSocketUids                                          OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/InterchangePipelines.InterchangePipelineMeshesUtilitiesContext
/// Size: 0x0005 (0x000000 - 0x000005)
class FInterchangePipelineMeshesUtilitiesContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      bConvertStaticMeshToSkeletalMesh                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bConvertSkeletalMeshToStaticMesh                            OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bConvertStaticsWithMorphTargetsToSkeletals                  OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bImportMeshesInBoneHierarchy                                OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bQueryGeometryOnlyIfNoInstance                              OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Enum /Script/InterchangePipelines.EInterchangeForceMeshType
/// Size: 0x04
enum EInterchangeForceMeshType : uint8_t
{
	EInterchangeForceMeshType__IFMT_None0                                            = 0,
	EInterchangeForceMeshType__IFMT_StaticMesh1                                      = 1,
	EInterchangeForceMeshType__IFMT_SkeletalMesh2                                    = 2,
	EInterchangeForceMeshType__IFMT_MAX3                                             = 3
};

/// Enum /Script/InterchangePipelines.EInterchangeVertexColorImportOption
/// Size: 0x04
enum EInterchangeVertexColorImportOption : uint8_t
{
	EInterchangeVertexColorImportOption__IVCIO_Replace0                              = 0,
	EInterchangeVertexColorImportOption__IVCIO_Ignore1                               = 1,
	EInterchangeVertexColorImportOption__IVCIO_Override2                             = 2,
	EInterchangeVertexColorImportOption__IVCIO_MAX3                                  = 3
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialXShaders
/// Size: 0x07
enum EInterchangeMaterialXShaders : uint8_t
{
	EInterchangeMaterialXShaders__StandardSurface0                                   = 0,
	EInterchangeMaterialXShaders__StandardSurfaceTransmission1                       = 1,
	EInterchangeMaterialXShaders__SurfaceUnlit2                                      = 2,
	EInterchangeMaterialXShaders__UsdPreviewSurface3                                 = 3,
	EInterchangeMaterialXShaders__Surface4                                           = 4,
	EInterchangeMaterialXShaders__MaxShaderCount5                                    = 5,
	EInterchangeMaterialXShaders__EInterchangeMaterialXShaders_MAX6                  = 6
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialXBSDF
/// Size: 0x11
enum EInterchangeMaterialXBSDF : uint8_t
{
	EInterchangeMaterialXBSDF__OrenNayarDiffuse0                                     = 0,
	EInterchangeMaterialXBSDF__BurleyDiffuse1                                        = 1,
	EInterchangeMaterialXBSDF__Translucent2                                          = 2,
	EInterchangeMaterialXBSDF__Dielectric3                                           = 3,
	EInterchangeMaterialXBSDF__Conductor4                                            = 4,
	EInterchangeMaterialXBSDF__GeneralizedSchlick5                                   = 5,
	EInterchangeMaterialXBSDF__Subsurface6                                           = 6,
	EInterchangeMaterialXBSDF__Sheen7                                                = 7,
	EInterchangeMaterialXBSDF__ThinFilm8                                             = 8,
	EInterchangeMaterialXBSDF__MaxBSDFCount9                                         = 9,
	EInterchangeMaterialXBSDF__EInterchangeMaterialXBSDF_MAX10                       = 10
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialXEDF
/// Size: 0x05
enum EInterchangeMaterialXEDF : uint8_t
{
	EInterchangeMaterialXEDF__Uniform0                                               = 0,
	EInterchangeMaterialXEDF__Conical1                                               = 1,
	EInterchangeMaterialXEDF__Measured2                                              = 2,
	EInterchangeMaterialXEDF__MaxEDFCount3                                           = 3,
	EInterchangeMaterialXEDF__EInterchangeMaterialXEDF_MAX4                          = 4
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialXVDF
/// Size: 0x04
enum EInterchangeMaterialXVDF : uint8_t
{
	EInterchangeMaterialXVDF__Absorption0                                            = 0,
	EInterchangeMaterialXVDF__Anisotropic1                                           = 1,
	EInterchangeMaterialXVDF__MaxVDFCount2                                           = 2,
	EInterchangeMaterialXVDF__EInterchangeMaterialXVDF_MAX3                          = 3
};

/// Enum /Script/InterchangePipelines.EInterchangeAnimationRange
/// Size: 0x04
enum EInterchangeAnimationRange : uint8_t
{
	EInterchangeAnimationRange__Timeline0                                            = 0,
	EInterchangeAnimationRange__Animated1                                            = 1,
	EInterchangeAnimationRange__SetRange2                                            = 2,
	EInterchangeAnimationRange__MAX3                                                 = 3
};

/// Enum /Script/InterchangePipelines.EInterchangeMaterialImportOption
/// Size: 0x03
enum EInterchangeMaterialImportOption : uint8_t
{
	EInterchangeMaterialImportOption__ImportAsMaterials0                             = 0,
	EInterchangeMaterialImportOption__ImportAsMaterialInstances1                     = 1,
	EInterchangeMaterialImportOption__EInterchangeMaterialImportOption_MAX2          = 2
};

