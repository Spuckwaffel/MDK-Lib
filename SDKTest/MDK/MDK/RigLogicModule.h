
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ControlRig
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: RigVM

/// Class /Script/RigLogicModule.DNAIndexMapping
/// Size: 0x0000 (0x000028 - 0x000028)
class UDNAIndexMapping : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RigLogicModule.DNAAsset
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDNAAsset : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FString)                                   DnaFileName                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/RigLogicModule.SkelMeshDNAUtils
/// Size: 0x0000 (0x000028 - 0x000028)
class USkelMeshDNAUtils : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/RigLogicModule.CoordinateSystem
/// Size: 0x0003 (0x000000 - 0x000003)
class FCoordinateSystem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EDirection)                                XAxis                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EDirection)                                YAxis                                                       ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EDirection)                                ZAxis                                                       ___ OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/RigLogicModule.MeshBlendShapeChannelMapping
/// Size: 0x0008 (0x000000 - 0x000008)
class FMeshBlendShapeChannelMapping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   MeshIndex                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   BlendShapeChannelIndex                                      ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.TextureCoordinate
/// Size: 0x0008 (0x000000 - 0x000008)
class FTextureCoordinate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     U                                                           ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     V                                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.VertexLayout
/// Size: 0x000C (0x000000 - 0x00000C)
class FVertexLayout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Position                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TextureCoordinate                                           ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Normal                                                      ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.AnimNode_RigLogic
/// Size: 0x0050 (0x000010 - 0x000060)
class FAnimNode_RigLogic : public FAnimNode_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FPoseLink)                                 AnimSequence                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_IntArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_RigLogic_IntArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           Values                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic_Data
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_RigLogic_Data : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SkelMeshComponent                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<int32_t>)                           InputCurveIndices                                           ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<int32_t>)                           NeuralNetMaskCurveIndices                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<int32_t>)                           HierarchyBoneIndices                                        ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        MorphTargetCurveIndices                                     ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        BlendShapeIndices                                           ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        CurveElementIndicesForAnimMaps                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FRigUnit_RigLogic_IntArray>)        RigLogicIndicesForAnimMaps                                  ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(uint32_t)                                  CurrentLOD                                                  ___ OFFSET(get<uint32_t>, {0x90, 4, 0, 0})
};

/// Struct /Script/RigLogicModule.RigUnit_RigLogic
/// Size: 0x00A0 (0x000160 - 0x000200)
class FRigUnit_RigLogic : public FRigUnitMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FRigUnit_RigLogic_Data)                    Data                                                        ___ OFFSET(get<T>, {0x160, 152, 0, 0})
	DMember(bool)                                      bIsInitialized                                              ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
};

/// Enum /Script/RigLogicModule.EArchetype
/// Size: 0x07
enum EArchetype : uint8_t
{
	EArchetype__Asian0                                                               = 0,
	EArchetype__Black1                                                               = 1,
	EArchetype__Caucasian2                                                           = 2,
	EArchetype__Hispanic3                                                            = 3,
	EArchetype__Alien4                                                               = 4,
	EArchetype__Other5                                                               = 5,
	EArchetype__EArchetype_MAX6                                                      = 6
};

/// Enum /Script/RigLogicModule.EGender
/// Size: 0x04
enum EGender : uint8_t
{
	EGender__Male0                                                                   = 0,
	EGender__Female1                                                                 = 1,
	EGender__Other2                                                                  = 2,
	EGender__EGender_MAX3                                                            = 3
};

/// Enum /Script/RigLogicModule.ETranslationUnit
/// Size: 0x03
enum ETranslationUnit : uint8_t
{
	ETranslationUnit__CM0                                                            = 0,
	ETranslationUnit__M1                                                             = 1,
	ETranslationUnit__ETranslationUnit_MAX2                                          = 2
};

/// Enum /Script/RigLogicModule.ERotationUnit
/// Size: 0x03
enum ERotationUnit : uint8_t
{
	ERotationUnit__Degrees0                                                          = 0,
	ERotationUnit__Radians1                                                          = 1,
	ERotationUnit__ERotationUnit_MAX2                                                = 2
};

/// Enum /Script/RigLogicModule.EDirection
/// Size: 0x07
enum EDirection : uint8_t
{
	EDirection__Left0                                                                = 0,
	EDirection__Right1                                                               = 1,
	EDirection__Up2                                                                  = 2,
	EDirection__Down3                                                                = 3,
	EDirection__Front4                                                               = 4,
	EDirection__Back5                                                                = 5,
	EDirection__EDirection_MAX6                                                      = 6
};

/// Enum /Script/RigLogicModule.EDNADataLayer
/// Size: 0x09
enum EDNADataLayer : uint8_t
{
	EDNADataLayer__None0                                                             = 0,
	EDNADataLayer__Descriptor1                                                       = 1,
	EDNADataLayer__Definition2                                                       = 3,
	EDNADataLayer__Behavior3                                                         = 7,
	EDNADataLayer__Geometry4                                                         = 11,
	EDNADataLayer__GeometryWithoutBlendShapes5                                       = 19,
	EDNADataLayer__MachineLearnedBehavior6                                           = 35,
	EDNADataLayer__All7                                                              = 47,
	EDNADataLayer__EDNADataLayer_MAX8                                                = 48
};

/// Enum /Script/RigLogicModule.EActivationFunction
/// Size: 0x06
enum EActivationFunction : uint8_t
{
	EActivationFunction__Linear0                                                     = 0,
	EActivationFunction__ReLU1                                                       = 1,
	EActivationFunction__LeakyReLU2                                                  = 2,
	EActivationFunction__Tanh3                                                       = 3,
	EActivationFunction__Sigmoid4                                                    = 4,
	EActivationFunction__EActivationFunction_MAX5                                    = 5
};

/// Enum /Script/RigLogicModule.ERigLogicCalculationType
/// Size: 0x04
enum ERigLogicCalculationType : uint8_t
{
	ERigLogicCalculationType__Scalar0                                                = 0,
	ERigLogicCalculationType__SSE1                                                   = 1,
	ERigLogicCalculationType__AVX2                                                   = 2,
	ERigLogicCalculationType__ERigLogicCalculationType_MAX3                          = 3
};

/// Enum /Script/RigLogicModule.ELodUpdateOption
/// Size: 0x04
enum ELodUpdateOption : uint8_t
{
	ELodUpdateOption__LOD0Only0                                                      = 0,
	ELodUpdateOption__LOD1AndHigher1                                                 = 1,
	ELodUpdateOption__All2                                                           = 2,
	ELodUpdateOption__ELodUpdateOption_MAX3                                          = 3
};

