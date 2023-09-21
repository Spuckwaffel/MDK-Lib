
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: InterchangeCore

/// Class /Script/InterchangePipelines.InterchangeGenericCommonMeshesProperties
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UInterchangeGenericCommonMeshesProperties : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(EInterchangeForceMeshType)                 ForceAllMeshAsType                                          OFFSET(get<T>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bImportLods                                                 OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bBakeMeshes                                                 OFFSET(get<bool>, {0xEA, 1, 0, 0})
	CMember(EInterchangeVertexColorImportOption)       VertexColorImportOption                                     OFFSET(get<T>, {0xEB, 1, 0, 0})
	SMember(FColor)                                    VertexOverrideColor                                         OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	DMember(bool)                                      bRecomputeNormals                                           OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(bool)                                      bRecomputeTangents                                          OFFSET(get<bool>, {0xF1, 1, 0, 0})
	DMember(bool)                                      bUseMikkTSpace                                              OFFSET(get<bool>, {0xF2, 1, 0, 0})
	DMember(bool)                                      bComputeWeightedNormals                                     OFFSET(get<bool>, {0xF3, 1, 0, 0})
	DMember(bool)                                      bUseHighPrecisionTangentBasis                               OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bUseFullPrecisionUVs                                        OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(bool)                                      bUseBackwardsCompatibleF16TruncUVs                          OFFSET(get<bool>, {0xF6, 1, 0, 0})
	DMember(bool)                                      bRemoveDegenerates                                          OFFSET(get<bool>, {0xF7, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericCommonSkeletalMeshesAndAnimationsProperties
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bImportOnlyAnimations                                       OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(TWeakObjectPtr<USkeleton*>)                Skeleton                                                    OFFSET(get<T>, {0xEC, 8, 0, 0})
	DMember(bool)                                      bImportMeshesInBoneHierarchy                                OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bUseT0AsRefPose                                             OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(bool)                                      bConvertStaticsWithMorphTargetsToSkeletals                  OFFSET(get<bool>, {0xF6, 1, 0, 0})
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
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UInterchangeGLTFPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bUseGLTFMaterialInstanceLibrary                             OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.MaterialXPipelineSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UMaterialXPipelineSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<EInterchangeMaterialXShaders, FSoftObjectPath>) PredefinedSurfaceShaders                          OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeMaterialXPipeline
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UInterchangeMaterialXPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/InterchangePipelines.InterchangeGenericAnimationPipeline
/// Size: 0x0070 (0x0000E8 - 0x000158)
class UInterchangeGenericAnimationPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*>) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*>) CommonMeshesProperties                     OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bImportAnimations                                           OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bImportBoneTracks                                           OFFSET(get<bool>, {0xF9, 1, 0, 0})
	CMember(EInterchangeAnimationRange)                AnimationRange                                              OFFSET(get<T>, {0xFA, 1, 0, 0})
	SMember(FInt32Interval)                            FrameImportRange                                            OFFSET(getStruct<T>, {0xFC, 8, 0, 0})
	DMember(bool)                                      bUse30HzToBakeBoneAnimation                                 OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(int32_t)                                   CustomBoneAnimationSampleRate                               OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(bool)                                      bSnapToClosestFrameBoundary                                 OFFSET(get<bool>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bImportCustomAttribute                                      OFFSET(get<bool>, {0x10D, 1, 0, 0})
	DMember(bool)                                      bAddCurveMetadataToSkeleton                                 OFFSET(get<bool>, {0x10E, 1, 0, 0})
	DMember(bool)                                      bSetMaterialDriveParameterOnCustomAttribute                 OFFSET(get<bool>, {0x10F, 1, 0, 0})
	CMember(TArray<FString>)                           MaterialCurveSuffixes                                       OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      bRemoveCurveRedundantKeys                                   OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bDoNotImportCurveWithZero                                   OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingNonCurveCustomAttributes                     OFFSET(get<bool>, {0x122, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingCustomAttributeCurves                        OFFSET(get<bool>, {0x123, 1, 0, 0})
	DMember(bool)                                      bDeleteExistingMorphTargetCurves                            OFFSET(get<bool>, {0x124, 1, 0, 0})
	SMember(FString)                                   SourceAnimationName                                         OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	DMember(bool)                                      bSceneImport                                                OFFSET(get<bool>, {0x138, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericAssetsPipeline
/// Size: 0x0090 (0x0000E8 - 0x000178)
class UInterchangeGenericAssetsPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(EReimportStrategyFlags)                    ReimportStrategy                                            OFFSET(get<T>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bUseSourceNameForAsset                                      OFFSET(get<bool>, {0xE9, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FVector)                                   ImportOffsetTranslation                                     OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FRotator)                                  ImportOffsetRotation                                        OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	DMember(float)                                     ImportOffsetUniformScale                                    OFFSET(get<float>, {0x130, 4, 0, 0})
	CMember(UInterchangeGenericCommonMeshesProperties*) CommonMeshesProperties                                     OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(UInterchangeGenericMeshPipeline*)          MeshPipeline                                                OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(UInterchangeGenericAnimationPipeline*)     AnimationPipeline                                           OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(UInterchangeGenericMaterialPipeline*)      MaterialPipeline                                            OFFSET(get<T>, {0x158, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericMaterialPipeline
/// Size: 0x0090 (0x0000E8 - 0x000178)
class UInterchangeGenericMaterialPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(bool)                                      bImportMaterials                                            OFFSET(get<bool>, {0xE8, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	CMember(EInterchangeMaterialImportOption)          MaterialImport                                              OFFSET(get<T>, {0x100, 1, 0, 0})
	SMember(FSoftObjectPath)                           ParentMaterial                                              OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	CMember(UInterchangeGenericTexturePipeline*)       TexturePipeline                                             OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            BaseNodeContainer                                           OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericMeshPipeline
/// Size: 0x00D0 (0x0000E8 - 0x0001B8)
class UInterchangeGenericMeshPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TWeakObjectPtr<UInterchangeGenericCommonMeshesProperties*>) CommonMeshesProperties                     OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TWeakObjectPtr<UInterchangeGenericCommonSkeletalMeshesAndAnimationsProperties*>) CommonSkeletalMeshesAndAnimationsProperties OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bImportStaticMeshes                                         OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bCombineStaticMeshes                                        OFFSET(get<bool>, {0xF9, 1, 0, 0})
	SMember(FName)                                     LODGroup                                                    OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	DMember(bool)                                      bImportCollision                                            OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bImportCollisionAccordingToMeshName                         OFFSET(get<bool>, {0x101, 1, 0, 0})
	DMember(bool)                                      bOneConvexHullPerUCX                                        OFFSET(get<bool>, {0x102, 1, 0, 0})
	DMember(bool)                                      bBuildNanite                                                OFFSET(get<bool>, {0x103, 1, 0, 0})
	DMember(bool)                                      bBuildReversedIndexBuffer                                   OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bGenerateLightmapUVs                                        OFFSET(get<bool>, {0x105, 1, 0, 0})
	DMember(bool)                                      bGenerateDistanceFieldAsIfTwoSided                          OFFSET(get<bool>, {0x106, 1, 0, 0})
	DMember(bool)                                      bSupportFaceRemap                                           OFFSET(get<bool>, {0x107, 1, 0, 0})
	DMember(int32_t)                                   MinLightmapResolution                                       OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(int32_t)                                   SrcLightmapIndex                                            OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	DMember(int32_t)                                   DstLightmapIndex                                            OFFSET(get<int32_t>, {0x110, 4, 0, 0})
	SMember(FVector)                                   BuildScale3D                                                OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	DMember(float)                                     DistanceFieldResolutionScale                                OFFSET(get<float>, {0x130, 4, 0, 0})
	CMember(TWeakObjectPtr<UStaticMesh*>)              DistanceFieldReplacementMesh                                OFFSET(get<T>, {0x134, 8, 0, 0})
	DMember(int32_t)                                   MaxLumenMeshCards                                           OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(bool)                                      bImportSkeletalMeshes                                       OFFSET(get<bool>, {0x140, 1, 0, 0})
	CMember(EInterchangeSkeletalMeshContentType)       SkeletalMeshImportContentType                               OFFSET(get<T>, {0x141, 1, 0, 0})
	CMember(EInterchangeSkeletalMeshContentType)       LastSkeletalMeshImportContentType                           OFFSET(get<T>, {0x142, 1, 0, 0})
	DMember(bool)                                      bCombineSkeletalMeshes                                      OFFSET(get<bool>, {0x143, 1, 0, 0})
	DMember(bool)                                      bImportMorphTargets                                         OFFSET(get<bool>, {0x144, 1, 0, 0})
	DMember(bool)                                      bUpdateSkeletonReferencePose                                OFFSET(get<bool>, {0x145, 1, 0, 0})
	DMember(bool)                                      bCreatePhysicsAsset                                         OFFSET(get<bool>, {0x146, 1, 0, 0})
	CMember(TWeakObjectPtr<UPhysicsAsset*>)            PhysicsAsset                                                OFFSET(get<T>, {0x148, 8, 0, 0})
	DMember(bool)                                      bUseHighPrecisionSkinWeights                                OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(float)                                     ThresholdPosition                                           OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     ThresholdTangentNormal                                      OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     ThresholdUV                                                 OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     MorphThresholdPosition                                      OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(int32_t)                                   BoneInfluenceLimit                                          OFFSET(get<int32_t>, {0x164, 4, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericLevelPipeline
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class UInterchangeGenericLevelPipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(EReimportStrategyFlags)                    ReimportPropertyStrategy                                    OFFSET(get<T>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bDeleteMissingActors                                        OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bForceReimportDeletedActors                                 OFFSET(get<bool>, {0xEA, 1, 0, 0})
	DMember(bool)                                      bForceReimportDeletedAssets                                 OFFSET(get<bool>, {0xEB, 1, 0, 0})
	DMember(bool)                                      bDeleteMissingAssets                                        OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(bool)                                      bUsePhysicalInsteadOfStandardPerspectiveCamera              OFFSET(get<bool>, {0xED, 1, 0, 0})
};

/// Class /Script/InterchangePipelines.InterchangeGenericTexturePipeline
/// Size: 0x0058 (0x0000E8 - 0x000140)
class UInterchangeGenericTexturePipeline : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(bool)                                      bImportTextures                                             OFFSET(get<bool>, {0xE8, 1, 0, 0})
	SMember(FString)                                   AssetName                                                   OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bAllowNonPowerOfTwo                                         OFFSET(get<bool>, {0x100, 1, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            BaseNodeContainer                                           OFFSET(get<T>, {0x108, 8, 0, 0})
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
/// Size: 0x06
enum EInterchangeMaterialXShaders : uint8_t
{
	EInterchangeMaterialXShaders__StandardSurface0                                   = 0,
	EInterchangeMaterialXShaders__StandardSurfaceTransmission1                       = 1,
	EInterchangeMaterialXShaders__SurfaceUnlit2                                      = 2,
	EInterchangeMaterialXShaders__UsdPreviewSurface3                                 = 3,
	EInterchangeMaterialXShaders__MaxShaderCount4                                    = 4,
	EInterchangeMaterialXShaders__EInterchangeMaterialXShaders_MAX5                  = 5
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

