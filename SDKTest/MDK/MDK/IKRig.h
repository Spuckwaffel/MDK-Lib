
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/IKRig.IKGoalCreatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UIKGoalCreatorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/IKRig.IKRigComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UIKRigComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/IKRig.RetargetChainSettings
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class URetargetChainSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     SourceChain                                                 ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     TargetChain                                                 ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FTargetChainSettings)                      Settings                                                    ___ OFFSET(get<T>, {0x30, 168, 0, 0})
};

/// Class /Script/IKRig.RetargetRootSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class URetargetRootSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FTargetRootSettings)                       Settings                                                    ___ OFFSET(get<T>, {0x28, 104, 0, 0})
};

/// Class /Script/IKRig.IKRetargetGlobalSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRetargetGlobalSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRetargetGlobalSettings)                   Settings                                                    ___ OFFSET(get<T>, {0x28, 28, 0, 0})
};

/// Class /Script/IKRig.IKRetargeter
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UIKRetargeter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TWeakObjectPtr<UIKRigDefinition*>)         SourceIKRigAsset                                            ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UIKRigDefinition*>)         TargetIKRigAsset                                            ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TArray<FRetargetChainMap>)                 ChainMapping                                                ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<URetargetChainSettings*>)           ChainSettings                                               ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(URetargetRootSettings*)                    RootSettings                                                ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UIKRetargetGlobalSettings*)                GlobalSettings                                              ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TMap<FName, FRetargetProfile>)             Profiles                                                    ___ OFFSET(get<T>, {0x98, 80, 0, 0})
	SMember(FName)                                     CurrentProfile                                              ___ OFFSET(get<T>, {0xE8, 4, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              SourceRetargetPoses                                         ___ OFFSET(get<T>, {0xF0, 80, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              TargetRetargetPoses                                         ___ OFFSET(get<T>, {0x140, 80, 0, 0})
	SMember(FName)                                     CurrentSourceRetargetPose                                   ___ OFFSET(get<T>, {0x190, 4, 0, 0})
	SMember(FName)                                     CurrentTargetRetargetPose                                   ___ OFFSET(get<T>, {0x194, 4, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              RetargetPoses                                               ___ OFFSET(get<T>, {0x198, 80, 0, 0})
	SMember(FName)                                     CurrentRetargetPose                                         ___ OFFSET(get<T>, {0x1E8, 4, 0, 0})
};

/// Class /Script/IKRig.IKRetargetProcessor
/// Size: 0x0338 (0x000028 - 0x000360)
class UIKRetargetProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UIKRigProcessor*)                          IKRigProcessor                                              ___ OFFSET(get<T>, {0x170, 8, 0, 0})
};

/// Class /Script/IKRig.IKRigEffectorGoal
/// Size: 0x00D8 (0x000028 - 0x000100)
class UIKRigEffectorGoal : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FTransform)                                CurrentTransform                                            ___ OFFSET(get<T>, {0x40, 96, 0, 0})
	SMember(FTransform)                                InitialTransform                                            ___ OFFSET(get<T>, {0xA0, 96, 0, 0})
};

/// Class /Script/IKRig.IKRigDefinition
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UIKRigDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FIKRigSkeleton)                            Skeleton                                                    ___ OFFSET(get<T>, {0x50, 112, 0, 0})
	CMember(TArray<UIKRigEffectorGoal*>)               Goals                                                       ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<UIKRigSolver*>)                     Solvers                                                     ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FRetargetDefinition)                       RetargetDefinition                                          ___ OFFSET(get<T>, {0xE0, 24, 0, 0})
};

/// Class /Script/IKRig.IKRigProcessor
/// Size: 0x0120 (0x000028 - 0x000148)
class UIKRigProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<UIKRigSolver*>)                     Solvers                                                     ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/IKRig.IKRigSolver
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRigSolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/IKRig.IKRig_BodyMoverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_BodyMoverEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     InfluenceMultiplier                                         ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_BodyMover
/// Size: 0x0048 (0x000030 - 0x000078)
class UIKRig_BodyMover : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     RootBone                                                    ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PositionPositiveX                                           ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     PositionNegativeX                                           ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     PositionPositiveY                                           ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PositionNegativeY                                           ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PositionPositiveZ                                           ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PositionNegativeZ                                           ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RotateXAlpha                                                ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RotateYAlpha                                                ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     RotateZAlpha                                                ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(TArray<UIKRig_BodyMoverEffector*>)         Effectors                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/IKRig.IKRig_LimbEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_LimbEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_LimbSolver
/// Size: 0x0058 (0x000030 - 0x000088)
class UIKRig_LimbSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     RootName                                                    ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(float)                                     ReachPrecision                                              ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bEnableLimit                                                ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     MinRotationAngle                                            ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bAveragePull                                                ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     PullDistribution                                            ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     ReachStepAlpha                                              ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bEnableTwistCorrection                                      ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        EndBoneForwardAxis                                          ___ OFFSET(get<T>, {0x55, 1, 0, 0})
	CMember(UIKRig_LimbEffector*)                      Effector                                                    ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/IKRig.IKRig_FBIKEffector
/// Size: 0x0018 (0x000028 - 0x000040)
class UIKRig_FBIKEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     StrengthAlpha                                               ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     PullChainAlpha                                              ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PinRotation                                                 ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   IndexInSolver                                               ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_FBIKBoneSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UIKRig_FBIKBoneSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     bone                                                        ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(float)                                     RotationStiffness                                           ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     PositionStiffness                                           ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(EPBIKLimitType)                            X                                                           ___ OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     MinX                                                        ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxX                                                        ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EPBIKLimitType)                            Y                                                           ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     MinY                                                        ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxY                                                        ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(EPBIKLimitType)                            Z                                                           ___ OFFSET(get<T>, {0x4C, 1, 0, 0})
	DMember(float)                                     MinZ                                                        ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxZ                                                        ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUsePreferredAngles                                         ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FVector)                                   PreferredAngles                                             ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/IKRig.IKRigFBIKSolver
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UIKRigFBIKSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     RootBone                                                    ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Iterations                                                  ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     MassMultiplier                                              ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bAllowStretch                                               ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	CMember(EPBIKRootBehavior)                         RootBehavior                                                ___ OFFSET(get<T>, {0x3D, 1, 0, 0})
	SMember(FRootPrePullSettings)                      PrePullRootSettings                                         ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(float)                                     PullChainAlpha                                              ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MaxAngle                                                    ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     OverRelaxation                                              ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bStartSolveFromInputPose                                    ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	CMember(TArray<UIKRig_FBIKEffector*>)              Effectors                                                   ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<UIKRig_FBIKBoneSettings*>)          BoneSettings                                                ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/IKRig.IKRig_PoleSolverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_PoleSolverEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     GoalName                                                    ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     Alpha                                                       ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_PoleSolver
/// Size: 0x0030 (0x000030 - 0x000060)
class UIKRig_PoleSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     RootName                                                    ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     EndName                                                     ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	CMember(UIKRig_PoleSolverEffector*)                Effector                                                    ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/IKRig.IKRig_SetTransformEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_SetTransformEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnablePosition                                             ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableRotation                                             ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(float)                                     Alpha                                                       ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_SetTransform
/// Size: 0x0018 (0x000030 - 0x000048)
class UIKRig_SetTransform : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     Goal                                                        ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     RootBone                                                    ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	CMember(UIKRig_SetTransformEffector*)              Effector                                                    ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/IKRig.RetargetProfile
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FRetargetProfile : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bApplyTargetRetargetPose                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     TargetRetargetPoseName                                      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bApplySourceRetargetPose                                    ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FName)                                     SourceRetargetPoseName                                      ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bApplyChainSettings                                         ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TMap<FName, FTargetChainSettings>)         ChainSettings                                               ___ OFFSET(get<T>, {0x18, 80, 0, 0})
	DMember(bool)                                      bApplyRootSettings                                          ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FTargetRootSettings)                       RootSettings                                                ___ OFFSET(get<T>, {0x70, 104, 0, 0})
	DMember(bool)                                      bApplyGlobalSettings                                        ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FRetargetGlobalSettings)                   GlobalSettings                                              ___ OFFSET(get<T>, {0xDC, 28, 0, 0})
};

/// Struct /Script/IKRig.RetargetGlobalSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FRetargetGlobalSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bEnableRoot                                                 ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableFK                                                   ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bEnableIK                                                   ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bWarping                                                    ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(EWarpingDirectionSource)                   DirectionSource                                             ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(EBasicAxis)                                ForwardDirection                                            ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     DirectionChain                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(float)                                     WarpForwards                                                ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SidewaysOffset                                              ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WarpSplay                                                   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetRootSettings
/// Size: 0x0068 (0x000000 - 0x000068)
class FTargetRootSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TranslationAlpha                                            ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BlendToSource                                               ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   BlendToSourceWeights                                        ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(float)                                     ScaleHorizontal                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     ScaleVertical                                               ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   TranslationOffset                                           ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     AffectIKHorizontal                                          ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     AffectIKVertical                                            ___ OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetChainSettings
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FTargetChainSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FTargetChainFKSettings)                    FK                                                          ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTargetChainIKSettings)                    IK                                                          ___ OFFSET(get<T>, {0x18, 120, 0, 0})
	SMember(FTargetChainSpeedPlantSettings)            SpeedPlanting                                               ___ OFFSET(get<T>, {0x90, 20, 0, 0})
};

/// Struct /Script/IKRig.TargetChainSpeedPlantSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FTargetChainSpeedPlantSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      EnableSpeedPlanting                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     SpeedCurveName                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     SpeedThreshold                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     UnplantStiffness                                            ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     UnplantCriticalDamping                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetChainIKSettings
/// Size: 0x0078 (0x000000 - 0x000078)
class FTargetChainIKSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      EnableIK                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BlendToSource                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   BlendToSourceWeights                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   StaticOffset                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   StaticLocalOffset                                           ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  StaticRotationOffset                                        ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     ScaleVertical                                               ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Extension                                                   ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAffectedByIKWarping                                        ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/IKRig.TargetChainFKSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FTargetChainFKSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      EnableFK                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ERetargetRotationMode)                     RotationMode                                                ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ERetargetTranslationMode)                  TranslationMode                                             ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     TranslationAlpha                                            ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PoleVectorMatching                                          ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PoleVectorOffset                                            ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/IKRig.AnimNode_IKRig
/// Size: 0x0188 (0x000058 - 0x0001E0)
class FAnimNode_IKRig : public FAnimNode_CustomProperty
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPoseLink)                                 Source                                                      ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UIKRigDefinition*)                         RigDefinitionAsset                                          ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<FIKRigGoal>)                        Goals                                                       ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bStartFromRefPose                                           ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              ___ OFFSET(get<T>, {0x81, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           ___ OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(float)                                     Alpha                                                       ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              ___ OFFSET(get<T>, {0x90, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              ___ OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         ___ OFFSET(get<T>, {0xDC, 48, 0, 0})
	CMember(UIKRigProcessor*)                          IKRigProcessor                                              ___ OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     ActualAlpha                                                 ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
};

/// Struct /Script/IKRig.IKRigGoal
/// Size: 0x0090 (0x000000 - 0x000090)
class FIKRigGoal : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EIKRigGoalTransformSource)                 TransformSource                                             ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     PositionAlpha                                               ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EIKRigGoalSpace)                           PositionSpace                                               ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(EIKRigGoalSpace)                           RotationSpace                                               ___ OFFSET(get<T>, {0x51, 1, 0, 0})
	SMember(FVector)                                   FinalBlendedPosition                                        ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FQuat)                                     FinalBlendedRotation                                        ___ OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/IKRig.AnimNode_RetargetPoseFromMesh
/// Size: 0x01B8 (0x000010 - 0x0001C8)
class FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(UIKRetargeter*)                            IKRetargeterAsset                                           ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FRetargetProfile)                          CustomRetargetProfile                                       ___ OFFSET(get<T>, {0x28, 248, 0, 0})
	DMember(bool)                                      bSuppressWarnings                                           ___ OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bCopyCurves                                                 ___ OFFSET(get<bool>, {0x121, 1, 0, 0})
	CMember(UIKRetargetProcessor*)                     Processor                                                   ___ OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Struct /Script/IKRig.RetargetChainMap
/// Size: 0x0008 (0x000000 - 0x000008)
class FRetargetChainMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SourceChain                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetChain                                                 ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/IKRig.IKRetargetPose
/// Size: 0x0068 (0x000000 - 0x000068)
class FIKRetargetPose : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   RootTranslationOffset                                       ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(TMap<FName, FQuat>)                        BoneRotationOffsets                                         ___ OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/IKRig.IKRigGoalContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FIKRigGoalContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/IKRig.BoneChain
/// Size: 0x0020 (0x000000 - 0x000020)
class FBoneChain : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     ChainName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FBoneReference)                            StartBone                                                   ___ OFFSET(get<T>, {0x4, 12, 0, 0})
	SMember(FBoneReference)                            EndBone                                                     ___ OFFSET(get<T>, {0x10, 12, 0, 0})
	SMember(FName)                                     IKGoalName                                                  ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/IKRig.RetargetDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FRetargetDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     RootBone                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBoneChain>)                        BoneChains                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/IKRig.GoalBone
/// Size: 0x000C (0x000000 - 0x00000C)
class FGoalBone : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/IKRig.IKRigInputSkeleton
/// Size: 0x0038 (0x000000 - 0x000038)
class FIKRigInputSkeleton : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/IKRig.IKRigSkeleton
/// Size: 0x0070 (0x000000 - 0x000070)
class FIKRigSkeleton : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FName>)                             BoneNames                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedBones                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FTransform>)                        CurrentPoseGlobal                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        CurrentPoseLocal                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FTransform>)                        RefPoseGlobal                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/IKRig.LimbSolverSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FLimbSolverSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     ReachPrecision                                              ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnableLimit                                                ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     MinRotationAngle                                            ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bAveragePull                                                ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     PullDistribution                                            ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ReachStepAlpha                                              ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bEnableTwistCorrection                                      ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        EndBoneForwardAxis                                          ___ OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/IKRig.LimbLink
/// Size: 0x0068 (0x000000 - 0x000068)
class FLimbLink : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/IKRig.LimbSolver
/// Size: 0x0018 (0x000000 - 0x000018)
class FLimbSolver : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/IKRig.ERetargetSourceOrTarget
/// Size: 0x03
enum ERetargetSourceOrTarget : uint8_t
{
	ERetargetSourceOrTarget__Source0                                                 = 0,
	ERetargetSourceOrTarget__Target1                                                 = 1,
	ERetargetSourceOrTarget__ERetargetSourceOrTarget_MAX2                            = 2
};

/// Enum /Script/IKRig.ERetargetTranslationMode
/// Size: 0x04
enum ERetargetTranslationMode : uint8_t
{
	ERetargetTranslationMode__None0                                                  = 0,
	ERetargetTranslationMode__GloballyScaled1                                        = 1,
	ERetargetTranslationMode__Absolute2                                              = 2,
	ERetargetTranslationMode__ERetargetTranslationMode_MAX3                          = 3
};

/// Enum /Script/IKRig.ERetargetRotationMode
/// Size: 0x05
enum ERetargetRotationMode : uint8_t
{
	ERetargetRotationMode__Interpolated0                                             = 0,
	ERetargetRotationMode__OneToOne1                                                 = 1,
	ERetargetRotationMode__OneToOneReversed2                                         = 2,
	ERetargetRotationMode__None3                                                     = 3,
	ERetargetRotationMode__ERetargetRotationMode_MAX4                                = 4
};

/// Enum /Script/IKRig.EBasicAxis
/// Size: 0x07
enum EBasicAxis : uint8_t
{
	EBasicAxis__X0                                                                   = 0,
	EBasicAxis__Y1                                                                   = 1,
	EBasicAxis__Z2                                                                   = 2,
	EBasicAxis__NegX3                                                                = 3,
	EBasicAxis__NegY4                                                                = 4,
	EBasicAxis__NegZ5                                                                = 5,
	EBasicAxis__EBasicAxis_MAX6                                                      = 6
};

/// Enum /Script/IKRig.EWarpingDirectionSource
/// Size: 0x03
enum EWarpingDirectionSource : uint8_t
{
	EWarpingDirectionSource__Goals0                                                  = 0,
	EWarpingDirectionSource__Chain1                                                  = 1,
	EWarpingDirectionSource__EWarpingDirectionSource_MAX2                            = 2
};

/// Enum /Script/IKRig.EIKRigGoalSpace
/// Size: 0x04
enum EIKRigGoalSpace : uint8_t
{
	EIKRigGoalSpace__Component0                                                      = 0,
	EIKRigGoalSpace__Additive1                                                       = 1,
	EIKRigGoalSpace__World2                                                          = 2,
	EIKRigGoalSpace__EIKRigGoalSpace_MAX3                                            = 3
};

/// Enum /Script/IKRig.EIKRigGoalTransformSource
/// Size: 0x04
enum EIKRigGoalTransformSource : uint8_t
{
	EIKRigGoalTransformSource__Manual0                                               = 0,
	EIKRigGoalTransformSource__Bone1                                                 = 1,
	EIKRigGoalTransformSource__ActorComponent2                                       = 2,
	EIKRigGoalTransformSource__EIKRigGoalTransformSource_MAX3                        = 3
};

