
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OptimusCore

/// Class /Script/MLDeformerFramework.MLDeformerAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UMLDeformerAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UMLDeformerModel*)                         Model                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerVizSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerVizSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGeomCacheVizSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelVizSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     MorphTargetDeltaThreshold                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MorphTargetNumber                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bDrawMorphTargets                                           OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UMLDeformerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UMLDeformerAsset*)                         DeformerAsset                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   QualityLevel                                                OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	CMember(UMLDeformerModelInstance*)                 ModelInstance                                               OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/MLDeformerFramework.MLDeformerComponent.UpdateSkeletalMeshComponent
	// void UpdateSkeletalMeshComponent();                                                                                      // [0xa6a77e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetWeight
	// void SetWeight(float NormalizedWeightValue);                                                                             // [0x64ae638] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetQualityLevel
	// void SetQualityLevel(int32_t InQualityLevel);                                                                            // [0xa6a7764] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.SetDeformerAsset
	// void SetDeformerAsset(UMLDeformerAsset* InDeformerAsset);                                                                // [0x5ea4560] Final|Native|Public|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetWeight
	// float GetWeight();                                                                                                       // [0x7dfb8e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetSkeletalMeshComponent
	// USkeletalMeshComponent* GetSkeletalMeshComponent();                                                                      // [0x5819da4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetQualityLevel
	// int32_t GetQualityLevel();                                                                                               // [0x9037fa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.GetDeformerAsset
	// UMLDeformerAsset* GetDeformerAsset();                                                                                    // [0x8372c20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MLDeformerFramework.MLDeformerComponent.FindSkeletalMeshComponent
	// USkeletalMeshComponent* FindSkeletalMeshComponent(UMLDeformerAsset* Asset);                                              // [0xa6a7198] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MLDeformerFramework.MLDeformerComponentSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerComponentSource : public UOptimusComponentSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerModel
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UMLDeformerModel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(int32_t)                                   NumBaseMeshVerts                                            OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   NumTargetMeshVerts                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	CMember(UMLDeformerInputInfo*)                     InputInfo                                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TArray<int32_t>)                           VertexMap                                                   OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(USkeletalMesh*)                            SkeletalMesh                                                OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerGeomCacheModel
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UMLDeformerGeomCacheModel : public UMLDeformerModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGraphDebugDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMLDeformerGraphDebugDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerGraphDebugDataProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UMLDeformerGraphDebugDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UMLDeformerComponent*)                     DeformerComponent                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UMLDeformerAsset*)                         DeformerAsset                                               OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerInputInfo
/// Size: 0x0040 (0x000028 - 0x000068)
class UMLDeformerInputInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FSoftObjectPath)                           SkeletalMesh                                                OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   NumBaseMeshVertices                                         OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   NumTargetMeshVertices                                       OFFSET(get<int32_t>, {0x64, 4, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerModelInstance
/// Size: 0x0060 (0x000028 - 0x000088)
class UMLDeformerModelInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UMLDeformerModel*)                         Model                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModel
/// Size: 0x00A8 (0x0000E8 - 0x000190)
class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(bool)                                      bClampMorphWeights                                          OFFSET(get<bool>, {0xF8, 1, 0, 0})
	CMember(TArray<FVector3f>)                         MorphTargetDeltas                                           OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(int32_t)                                   NumMorphTargets                                             OFFSET(get<int32_t>, {0x110, 4, 0, 0})
	DMember(uint64_t)                                  CompressedMorphDataSizeInBytes                              OFFSET(get<uint64_t>, {0x118, 8, 0, 0})
	DMember(uint64_t)                                  UncompressedMorphDataSizeInBytes                            OFFSET(get<uint64_t>, {0x120, 8, 0, 0})
	CMember(TArray<int32_t>)                           MorphTargetErrorOrder                                       OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<float>)                             MorphTargetErrors                                           OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<float>)                             MaxMorphWeights                                             OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<FFloatInterval>)                    MorphTargetsMinMaxWeights                                   OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(TArray<FMLDeformerMorphModelQualityLevel>) QualityLevels                                               OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(bool)                                      bIncludeNormals                                             OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(float)                                     MorphDeltaZeroThreshold                                     OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MorphCompressionLevel                                       OFFSET(get<float>, {0x180, 4, 0, 0})
	CMember(EMLDeformerMaskChannel)                    MaskChannel                                                 OFFSET(get<T>, {0x184, 1, 0, 0})
	DMember(bool)                                      bInvertMaskChannel                                          OFFSET(get<bool>, {0x185, 1, 0, 0})


	/// Functions
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMinMaxWeights
	// void SetMorphTargetsMinMaxWeights(TArray<float>& MinValues, TArray<float>& MaxValues);                                   // [0xa6a75d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMaxWeights
	// void SetMorphTargetsMaxWeights(TArray<float>& MaxWeights);                                                               // [0x7dfe644] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsErrorOrder
	// void SetMorphTargetsErrorOrder(TArray<int32_t>& MorphTargetOrder, TArray<float>& ErrorValues);                           // [0xa6a7474] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltas
	// void SetMorphTargetDeltas(TArray<FVector3f>& Deltas);                                                                    // [0xa6a73d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltaFloats
	// void SetMorphTargetDeltaFloats(TArray<float>& Deltas);                                                                   // [0xa6a72f4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelInputInfo
/// Size: 0x0000 (0x000068 - 0x000068)
class UMLDeformerMorphModelInputInfo : public UMLDeformerInputInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MLDeformerFramework.MLDeformerMorphModelInstance
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Struct /Script/MLDeformerFramework.MLDeformerCurveReference
/// Size: 0x0004 (0x000000 - 0x000004)
class FMLDeformerCurveReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     CurveName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/MLDeformerFramework.MLDeformerTrainingInputAnim
/// Size: 0x0008 (0x000000 - 0x000008)
class FMLDeformerTrainingInputAnim : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MLDeformerFramework.MLDeformerGeomCacheTrainingInputAnim
/// Size: 0x0000 (0x000008 - 0x000008)
class FMLDeformerGeomCacheTrainingInputAnim : public FMLDeformerTrainingInputAnim
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MLDeformerFramework.MLDeformerMorphModelQualityLevel
/// Size: 0x0004 (0x000000 - 0x000004)
class FMLDeformerMorphModelQualityLevel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   MaxActiveMorphs                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MLDeformerFramework.MLDeformerCompareActor
/// Size: 0x0028 (0x000000 - 0x000028)
class FMLDeformerCompareActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UMLDeformerAsset*>)         DeformerAsset                                               OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Enum /Script/MLDeformerFramework.EMLDeformerVizMode
/// Size: 0x03
enum EMLDeformerVizMode : uint8_t
{
	EMLDeformerVizMode__TrainingData0                                                = 0,
	EMLDeformerVizMode__TestData1                                                    = 1,
	EMLDeformerVizMode__EMLDeformerVizMode_MAX2                                      = 2
};

/// Enum /Script/MLDeformerFramework.EMLDeformerHeatMapMode
/// Size: 0x03
enum EMLDeformerHeatMapMode : uint8_t
{
	EMLDeformerHeatMapMode__Activations0                                             = 0,
	EMLDeformerHeatMapMode__GroundTruth1                                             = 1,
	EMLDeformerHeatMapMode__EMLDeformerHeatMapMode_MAX2                              = 2
};

/// Enum /Script/MLDeformerFramework.EMLDeformerMaskChannel
/// Size: 0x06
enum EMLDeformerMaskChannel : uint8_t
{
	EMLDeformerMaskChannel__Disabled0                                                = 0,
	EMLDeformerMaskChannel__VertexColorRed1                                          = 1,
	EMLDeformerMaskChannel__VertexColorGreen2                                        = 2,
	EMLDeformerMaskChannel__VertexColorBlue3                                         = 3,
	EMLDeformerMaskChannel__VertexColorAlpha4                                        = 4,
	EMLDeformerMaskChannel__EMLDeformerMaskChannel_MAX5                              = 5
};

