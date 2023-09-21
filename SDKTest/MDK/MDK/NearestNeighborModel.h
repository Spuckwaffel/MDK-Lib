
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ComputeFramework
/// dependency: CoreUObject
/// dependency: MLDeformerFramework
/// dependency: OptimusCore

/// Class /Script/NearestNeighborModel.NearestNeighborModelVizSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UNearestNeighborModelVizSettings : public UMLDeformerMorphModelVizSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNearestNeighborNetworkLayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   NumInputs                                                   OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FNearestNeighborNetworkParameter>)  Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborNetworkLayer.AddParameter
	// void AddParameter(TArray<float>& Values, TArray<int32_t>& Shape);                                                        // [0x9cd4f00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm_Prelu : public UNearestNeighborNetworkLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
/// Size: 0x0000 (0x000040 - 0x000040)
class UNearestNeighborNetworkLayer_Gemm : public UNearestNeighborNetworkLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork
/// Size: 0x0010 (0x000028 - 0x000038)
class UNearestNeighborOptimizedNetwork : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UNearestNeighborNetworkLayer*>)     Layers                                                      OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork.Empty
	// void Empty();                                                                                                            // [0x128ea78] Native|Public|BlueprintCallable 
	// Function /Script/NearestNeighborModel.NearestNeighborOptimizedNetwork.AddLayer
	// UNearestNeighborNetworkLayer* AddLayer(int32_t LayerType);                                                               // [0x9cd4e2c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
/// Size: 0x0048 (0x000028 - 0x000070)
class UNearestNeighborOptimizedNetworkInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UNearestNeighborOptimizedNetwork*)         Network                                                     OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
/// Size: 0x0008 (0x000028 - 0x000030)
class UNearestNeighborOptimizedNetworkLoader : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/NearestNeighborModel.NearestNeighborModel
/// Size: 0x0060 (0x000188 - 0x0001E8)
class UNearestNeighborModel : public UMLDeformerMorphModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	DMember(bool)                                      bUseInputMultipliers                                        OFFSET(get<bool>, {0x188, 1, 0, 0})
	CMember(TArray<FVector3f>)                         InputMultipliers                                            OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<FClothPartData>)                    ClothPartData                                               OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TArray<float>)                             InputsMin                                                   OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<float>)                             InputsMax                                                   OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     DecayFactor                                                 OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     NearestNeighborOffsetWeight                                 OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(UNearestNeighborOptimizedNetwork*)         OptimizedNetwork                                            OFFSET(get<T>, {0x1D8, 8, 0, 0})
	DMember(bool)                                      bUseOptimizedNetwork                                        OFFSET(get<bool>, {0x1E0, 1, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModel.VertexMean
	// TArray<float> VertexMean(int32_t PartId);                                                                                // [0x9cd5ae0] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetVertexMean
	// void SetVertexMean(int32_t PartId, TArray<float>& VertexMean);                                                           // [0x9cd59e8] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetPCABasis
	// void SetPCABasis(int32_t PartId, TArray<float>& PCABasis);                                                               // [0x9cd58f0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetNumNeighbors
	// void SetNumNeighbors(int32_t PartId, int32_t InNumNeighbors);                                                            // [0x9cd5824] Final|Native|Private|BlueprintCallable 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetNeighborOffsets
	// void SetNeighborOffsets(int32_t PartId, TArray<float>& NeighborOffsets);                                                 // [0x9cd572c] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.SetNeighborCoeffs
	// void SetNeighborCoeffs(int32_t PartId, TArray<float>& NeighborCoeffs);                                                   // [0x9cd5634] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.PCABasis
	// TArray<float> PCABasis(int32_t PartId);                                                                                  // [0x9cd5594] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.NeighborOffsets
	// TArray<float> NeighborOffsets(int32_t PartId);                                                                           // [0x9cd54f4] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.NeighborCoeffs
	// TArray<float> NeighborCoeffs(int32_t PartId);                                                                            // [0x9cd5454] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffStart
	// int32_t GetPCACoeffStart(int32_t PartId);                                                                                // [0x9cd5324] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPCACoeffNum
	// int32_t GetPCACoeffNum(int32_t PartId);                                                                                  // [0x9cd528c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetPartNumVerts
	// int32_t GetPartNumVerts(int32_t PartId);                                                                                 // [0x9cd53bc] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetNumParts
	// int32_t GetNumParts();                                                                                                   // [0x597e60c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.GetNumNeighbors
	// int32_t GetNumNeighbors(int32_t PartId);                                                                                 // [0x9cd51f4] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NearestNeighborModel.NearestNeighborModel.ClipInputs
	// TArray<float> ClipInputs(TArray<float>& Input);                                                                          // [0x9cd5014] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInputInfo
/// Size: 0x0010 (0x000068 - 0x000078)
class UNearestNeighborModelInputInfo : public UMLDeformerMorphModelInputInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FQuat>)                             RefBoneRotations                                            OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInstance
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UNearestNeighborModelInstance : public UMLDeformerMorphModelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UNearestNeighborOptimizedNetworkInstance*) OptimizedNetworkInstance                                    OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Script/NearestNeighborModel.NearestNeighborModelInstance.Eval
	// TArray<float> Eval(TArray<float>& InputData);                                                                            // [0x9cd512c] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UOptimusSkeletonWithQuatsDataInterface : public UOptimusComputeDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
/// Size: 0x0008 (0x000028 - 0x000030)
class UOptimusSkeletonWithQuatsDataProvider : public UComputeDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/NearestNeighborModel.NearestNeighborNetworkParameter
/// Size: 0x0020 (0x000000 - 0x000020)
class FNearestNeighborNetworkParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Shape                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/NearestNeighborModel.SkeletonCachePair
/// Size: 0x0010 (0x000000 - 0x000010)
class FSkeletonCachePair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UAnimSequence*)                            Skeletons                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGeometryCache*)                           Cache                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/NearestNeighborModel.ClothPartEditorData
/// Size: 0x0020 (0x000000 - 0x000020)
class FClothPartEditorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   PCACoeffNum                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   VertexMapPath                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   MeshIndex                                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/NearestNeighborModel.ClothPartData
/// Size: 0x0060 (0x000000 - 0x000060)
class FClothPartData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   PCACoeffNum                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  PCACoeffStart                                               OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumVertices                                                 OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  NumNeighbors                                                OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	CMember(TArray<uint32_t>)                          VertexMap                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             PCABasis                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             VertexMean                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             NeighborCoeffs                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<float>)                             NeighborOffsets                                             OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Enum /Script/NearestNeighborModel.ENearestNeighborNetworkLayerType
/// Size: 0x04
enum ENearestNeighborNetworkLayerType : uint8_t
{
	ENearestNeighborNetworkLayerType__None0                                          = 0,
	ENearestNeighborNetworkLayerType__Gemm_Prelu1                                    = 1,
	ENearestNeighborNetworkLayerType__Gemm2                                          = 2,
	ENearestNeighborNetworkLayerType__ENearestNeighborNetworkLayerType_MAX3          = 3
};

