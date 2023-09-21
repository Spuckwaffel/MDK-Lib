
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ControlRig
/// dependency: RigVM

/// Struct /Script/FullBodyIK.FBIKBoneLimit
/// Size: 0x0020 (0x000000 - 0x000020)
class FFBIKBoneLimit : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EFBIKBoneLimitType)                        LimitType_X                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFBIKBoneLimitType)                        LimitType_Y                                                 ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(EFBIKBoneLimitType)                        LimitType_Z                                                 ___ OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector)                                   Limit                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/FullBodyIK.FBIKConstraintOption
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFBIKConstraintOption : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bUseStiffness                                               ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	SMember(FVector)                                   LinearStiffness                                             ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   AngularStiffness                                            ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bUseAngularLimit                                            ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FFBIKBoneLimit)                            AngularLimit                                                ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	DMember(bool)                                      bUsePoleVector                                              ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(EPoleVectorOption)                         PoleVectorOption                                            ___ OFFSET(get<T>, {0x69, 1, 0, 0})
	SMember(FVector)                                   PoleVector                                                  ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FRotator)                                  OffsetRotation                                              ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/FullBodyIK.MotionProcessInput
/// Size: 0x0002 (0x000000 - 0x000002)
class FMotionProcessInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bForceEffectorRotationTarget                                ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bOnlyApplyWhenReachedToTarget                               ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/FullBodyIK.FBIKDebugOption
/// Size: 0x0080 (0x000000 - 0x000080)
class FFBIKDebugOption : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bDrawDebugHierarchy                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bColorAngularMotionStrength                                 ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bColorLinearMotionStrength                                  ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bDrawDebugAxes                                              ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bDrawDebugEffector                                          ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bDrawDebugConstraints                                       ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	DMember(float)                                     DrawSize                                                    ___ OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Struct /Script/FullBodyIK.SolverInput
/// Size: 0x0024 (0x000000 - 0x000024)
class FSolverInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     LinearMotionStrength                                        ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinLinearMotionStrength                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AngularMotionStrength                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinAngularMotionStrength                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DefaultTargetClamp                                          ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Damping                                                     ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bUseJacobianTranspose                                       ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FullBodyIK.FBIKEndEffector
/// Size: 0x0060 (0x000000 - 0x000060)
class FFBIKEndEffector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FRigElementKey)                            Item                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     PositionAlpha                                               ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   PositionDepth                                               ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   RotationDepth                                               ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(float)                                     Pull                                                        ___ OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK_WorkData
/// Size: 0x0198 (0x000000 - 0x000198)
class FRigUnit_FullbodyIK_WorkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
};

/// Struct /Script/FullBodyIK.RigUnit_FullbodyIK
/// Size: 0x0270 (0x000160 - 0x0003D0)
class FRigUnit_FullbodyIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FRigElementKey)                            Root                                                        ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<FFBIKEndEffector>)                  Effectors                                                   ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	CMember(TArray<FFBIKConstraintOption>)             Constraints                                                 ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FSolverInput)                              SolverProperty                                              ___ OFFSET(get<T>, {0x188, 36, 0, 0})
	SMember(FMotionProcessInput)                       MotionProperty                                              ___ OFFSET(get<T>, {0x1AC, 2, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        ___ OFFSET(get<bool>, {0x1AE, 1, 0, 0})
	SMember(FFBIKDebugOption)                          DebugOption                                                 ___ OFFSET(get<T>, {0x1B0, 128, 0, 0})
	SMember(FRigUnit_FullbodyIK_WorkData)              WorkData                                                    ___ OFFSET(get<T>, {0x230, 408, 0, 0})
};

/// Enum /Script/FullBodyIK.EFBIKBoneLimitType
/// Size: 0x04
enum EFBIKBoneLimitType : uint8_t
{
	EFBIKBoneLimitType__Free0                                                        = 0,
	EFBIKBoneLimitType__Limit1                                                       = 1,
	EFBIKBoneLimitType__Locked2                                                      = 2,
	EFBIKBoneLimitType__EFBIKBoneLimitType_MAX3                                      = 3
};

/// Enum /Script/FullBodyIK.EPoleVectorOption
/// Size: 0x03
enum EPoleVectorOption : uint8_t
{
	EPoleVectorOption__Direction0                                                    = 0,
	EPoleVectorOption__Location1                                                     = 1,
	EPoleVectorOption__EPoleVectorOption_MAX2                                        = 2
};

