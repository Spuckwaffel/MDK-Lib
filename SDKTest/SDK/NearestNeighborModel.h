/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NearestNeighborModel.

/// Struct /Script/NearestNeighborModel.NearestNeighborNetworkParameter
/// Size: 0x0020 (0x000000 - 0x000020)
class FNearestNeighborNetworkParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Values                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Shape                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/NearestNeighborModel.SkeletonCachePair
/// Size: 0x0010 (0x000000 - 0x000010)
class FSkeletonCachePair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UAnimSequence*)                            Skeletons                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGeometryCache*)                           Cache                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/NearestNeighborModel.ClothPartEditorData
/// Size: 0x0020 (0x000000 - 0x000020)
class FClothPartEditorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   PCACoeffNum                                                 ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   VertexMapPath                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   MeshIndex                                                   ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/NearestNeighborModel.ClothPartData
/// Size: 0x0060 (0x000000 - 0x000060)
class FClothPartData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   PCACoeffNum                                                 ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  PCACoeffStart                                               ___ OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  NumVertices                                                 ___ OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
	DMember(uint32_t)                                  NumNeighbors                                                ___ OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
	CMember(TArray<uint32_t>)                          VertexMap                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             PCABasis                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             VertexMean                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             NeighborCoeffs                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<float>)                             NeighborOffsets                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

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
	DMember(int32_t)                                   NumInputs                                                   ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FNearestNeighborNetworkParameter>)  Parameters                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
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
	CMember(TArray<UNearestNeighborNetworkLayer*>)     Layers                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
/// Size: 0x0048 (0x000028 - 0x000070)
class UNearestNeighborOptimizedNetworkInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UNearestNeighborOptimizedNetwork*)         Network                                                     ___ OFFSET(get<T>, {0x68, 8, 0, 0})
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
	DMember(bool)                                      bUseInputMultipliers                                        ___ OFFSET(get<bool>, {0x188, 1, 0, 0})
	CMember(TArray<FVector3f>)                         InputMultipliers                                            ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<FClothPartData>)                    ClothPartData                                               ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TArray<float>)                             InputsMin                                                   ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<float>)                             InputsMax                                                   ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	DMember(float)                                     DecayFactor                                                 ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     NearestNeighborOffsetWeight                                 ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(UNearestNeighborOptimizedNetwork*)         OptimizedNetwork                                            ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	DMember(bool)                                      bUseOptimizedNetwork                                        ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInputInfo
/// Size: 0x0010 (0x000068 - 0x000078)
class UNearestNeighborModelInputInfo : public UMLDeformerMorphModelInputInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FQuat>)                             RefBoneRotations                                            ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/NearestNeighborModel.NearestNeighborModelInstance
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UNearestNeighborModelInstance : public UMLDeformerMorphModelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UNearestNeighborOptimizedNetworkInstance*) OptimizedNetworkInstance                                    ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
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
	CMember(USkinnedMeshComponent*)                    SkinnedMesh                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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

