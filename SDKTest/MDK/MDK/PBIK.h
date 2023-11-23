
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ControlRig
/// dependency: RigVM

/// Struct /Script/PBIK.PBIKBoneSetting
/// Size: 0x0050 (0x000000 - 0x000050)
class FPBIKBoneSetting : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     RotationStiffness                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PositionStiffness                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EPBIKLimitType)                            X                                                           OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     MinX                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxX                                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(EPBIKLimitType)                            Y                                                           OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(float)                                     MinY                                                        OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MaxY                                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(EPBIKLimitType)                            Z                                                           OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(float)                                     MinZ                                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxZ                                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bUsePreferredAngles                                         OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FVector)                                   PreferredAngles                                             OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Struct /Script/PBIK.RootPrePullSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FRootPrePullSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RotationAlphaX                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RotationAlphaY                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RotationAlphaZ                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PositionAlphaX                                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PositionAlphaY                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PositionAlphaZ                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/PBIK.PBIKSolverSettings
/// Size: 0x003C (0x000000 - 0x00003C)
class FPBIKSolverSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MassMultiplier                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAllowStretch                                               OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(EPBIKRootBehavior)                         RootBehavior                                                OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FRootPrePullSettings)                      PrePullRootSettings                                         OFFSET(getStruct<T>, {0xC, 32, 0, 0})
	DMember(float)                                     GlobalPullChainAlpha                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaxAngle                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     OverRelaxation                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bStartSolveFromInputPose                                    OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/PBIK.PBIKSolver
/// Size: 0x0068 (0x000000 - 0x000068)
class FPBIKSolver : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/PBIK.PBIKDebug
/// Size: 0x0008 (0x000000 - 0x000008)
class FPBIKDebug : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     DrawScale                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/PBIK.PBIKEffector
/// Size: 0x0090 (0x000000 - 0x000090)
class FPBIKEffector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     StrengthAlpha                                               OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     PullChainAlpha                                              OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     PinRotation                                                 OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Struct /Script/PBIK.PBIKWorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FPBIKWorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bNeedsInit                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  HashInitializedWith                                         OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	CMember(TArray<int32_t>)                           BoneSettingToSolverBoneIndex                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           SolverBoneToElementIndex                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FPBIKSolver)                               Solver                                                      OFFSET(getStruct<T>, {0x28, 104, 0, 0})
};

/// Struct /Script/PBIK.RigUnit_PBIK
/// Size: 0x0120 (0x000180 - 0x0002A0)
class FRigUnit_PBIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FName)                                     Root                                                        OFFSET(getStruct<T>, {0x180, 4, 0, 0})
	CMember(TArray<FPBIKEffector>)                     Effectors                                                   OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<int32_t>)                           EffectorSolverIndices                                       OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TArray<FPBIKBoneSetting>)                  BoneSettings                                                OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedBones                                               OFFSET(get<T>, {0x1B8, 16, 0, 0})
	SMember(FPBIKSolverSettings)                       Settings                                                    OFFSET(getStruct<T>, {0x1C8, 60, 0, 0})
	SMember(FPBIKDebug)                                Debug                                                       OFFSET(getStruct<T>, {0x204, 8, 0, 0})
	SMember(FPBIKWorkData)                             WorkData                                                    OFFSET(getStruct<T>, {0x210, 144, 0, 0})
};

/// Enum /Script/PBIK.EPBIKLimitType
/// Size: 0x04
enum EPBIKLimitType : uint8_t
{
	EPBIKLimitType__Free0                                                            = 0,
	EPBIKLimitType__Limited1                                                         = 1,
	EPBIKLimitType__Locked2                                                          = 2,
	EPBIKLimitType__EPBIKLimitType_MAX3                                              = 3
};

/// Enum /Script/PBIK.EPBIKRootBehavior
/// Size: 0x04
enum EPBIKRootBehavior : uint8_t
{
	EPBIKRootBehavior__PrePull0                                                      = 0,
	EPBIKRootBehavior__PinToInput1                                                   = 1,
	EPBIKRootBehavior__Free2                                                         = 2,
	EPBIKRootBehavior__EPBIKRootBehavior_MAX3                                        = 3
};

