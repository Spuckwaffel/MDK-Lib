/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NeuralMorphModel.

/// Struct /Script/NeuralMorphModel.NeuralMorphBoneGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FNeuralMorphBoneGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     GroupName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBoneReference>)                    BoneNames                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NeuralMorphModel.NeuralMorphCurveGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FNeuralMorphCurveGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     GroupName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMLDeformerCurveReference>)         CurveNames                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NeuralMorphModel.NeuralMorphMaskInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNeuralMorphMaskInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             BoneNames                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphInputInfo
/// Size: 0x0020 (0x000068 - 0x000088)
class UNeuralMorphInputInfo : public UMLDeformerMorphModelInputInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FNeuralMorphBoneGroup>)             BoneGroups                                                  ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FNeuralMorphCurveGroup>)            CurveGroups                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphModelInstance
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UNeuralMorphModelInstance : public UMLDeformerMorphModelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UNeuralMorphNetworkInstance*)              NetworkInstance                                             ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphModelVizSettings
/// Size: 0x0008 (0x000038 - 0x000040)
class UNeuralMorphModelVizSettings : public UMLDeformerMorphModelVizSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENeuralMorphMaskVizMode)                   MaskVizMode                                                 ___ OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphMLPLayer
/// Size: 0x0030 (0x000028 - 0x000058)
class UNeuralMorphMLPLayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   NumInputs                                                   ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Depth                                                       ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<float>)                             Weights                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<float>)                             Biases                                                      ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphMLP
/// Size: 0x0010 (0x000028 - 0x000038)
class UNeuralMorphMLP : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UNeuralMorphMLPLayer*>)             Layers                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphNetwork
/// Size: 0x0050 (0x000028 - 0x000078)
class UNeuralMorphNetwork : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UNeuralMorphMLP*)                          MainMLP                                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UNeuralMorphMLP*)                          GroupMLP                                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<float>)                             InputMeans                                                  ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<float>)                             InputStd                                                    ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(ENeuralMorphMode)                          Mode                                                        ___ OFFSET(get<T>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   NumMorphsPerBone                                            ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   NumBones                                                    ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   NumCurves                                                   ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   NumFloatsPerCurve                                           ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   NumGroups                                                   ___ OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   NumItemsPerGroup                                            ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphNetworkInstance
/// Size: 0x0058 (0x000028 - 0x000080)
class UNeuralMorphNetworkInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UNeuralMorphNetwork*)                      Network                                                     ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/NeuralMorphModel.NeuralMorphModel
/// Size: 0x0100 (0x000188 - 0x000288)
class UNeuralMorphModel : public UMLDeformerMorphModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(TArray<FNeuralMorphBoneGroup>)             BoneGroups                                                  ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<FNeuralMorphCurveGroup>)            CurveGroups                                                 ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TMap<FName, FNeuralMorphMaskInfo>)         BoneMaskInfos                                               ___ OFFSET(get<T>, {0x1A8, 80, 0, 0})
	CMember(TMap<FName, FNeuralMorphMaskInfo>)         BoneGroupMaskInfos                                          ___ OFFSET(get<T>, {0x1F8, 80, 0, 0})
	CMember(ENeuralMorphMode)                          Mode                                                        ___ OFFSET(get<T>, {0x248, 1, 0, 0})
	DMember(int32_t)                                   LocalNumMorphTargetsPerBone                                 ___ OFFSET(get<int32_t>, {0x24C, 4, 0, 0})
	DMember(int32_t)                                   GlobalNumMorphTargets                                       ___ OFFSET(get<int32_t>, {0x250, 4, 0, 0})
	DMember(int32_t)                                   NumIterations                                               ___ OFFSET(get<int32_t>, {0x254, 4, 0, 0})
	DMember(int32_t)                                   LocalNumHiddenLayers                                        ___ OFFSET(get<int32_t>, {0x258, 4, 0, 0})
	DMember(int32_t)                                   LocalNumNeuronsPerLayer                                     ___ OFFSET(get<int32_t>, {0x25C, 4, 0, 0})
	DMember(int32_t)                                   GlobalNumHiddenLayers                                       ___ OFFSET(get<int32_t>, {0x260, 4, 0, 0})
	DMember(int32_t)                                   GlobalNumNeuronsPerLayer                                    ___ OFFSET(get<int32_t>, {0x264, 4, 0, 0})
	DMember(int32_t)                                   BatchSize                                                   ___ OFFSET(get<int32_t>, {0x268, 4, 0, 0})
	DMember(float)                                     LearningRate                                                ___ OFFSET(get<float>, {0x26C, 4, 0, 0})
	DMember(float)                                     RegularizationFactor                                        ___ OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(bool)                                      bEnableBoneMasks                                            ___ OFFSET(get<bool>, {0x274, 1, 0, 0})
	DMember(float)                                     SmoothLossBeta                                              ___ OFFSET(get<float>, {0x278, 4, 0, 0})
	CMember(UNeuralMorphNetwork*)                      NeuralMorphNetwork                                          ___ OFFSET(get<T>, {0x280, 8, 0, 0})
};

/// Enum /Script/NeuralMorphModel.ENeuralMorphMode
/// Size: 0x03
enum ENeuralMorphMode : uint8_t
{
	ENeuralMorphMode__Local0                                                         = 0,
	ENeuralMorphMode__Global1                                                        = 1,
	ENeuralMorphMode__ENeuralMorphMode_MAX2                                          = 2
};

/// Enum /Script/NeuralMorphModel.ENeuralMorphMaskVizMode
/// Size: 0x04
enum ENeuralMorphMaskVizMode : uint8_t
{
	ENeuralMorphMaskVizMode__Off0                                                    = 0,
	ENeuralMorphMaskVizMode__WhenInFocus1                                            = 1,
	ENeuralMorphMaskVizMode__Always2                                                 = 2,
	ENeuralMorphMaskVizMode__ENeuralMorphMaskVizMode_MAX3                            = 3
};

