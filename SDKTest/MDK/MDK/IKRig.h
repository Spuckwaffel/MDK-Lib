
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
	SMember(FName)                                     SourceChain                                                 OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     TargetChain                                                 OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FTargetChainSettings)                      Settings                                                    OFFSET(get<T>, {0x30, 168, 0, 0})
};

/// Class /Script/IKRig.RetargetRootSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class URetargetRootSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FTargetRootSettings)                       Settings                                                    OFFSET(get<T>, {0x28, 104, 0, 0})
};

/// Class /Script/IKRig.IKRetargetGlobalSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UIKRetargetGlobalSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRetargetGlobalSettings)                   Settings                                                    OFFSET(get<T>, {0x28, 28, 0, 0})
};

/// Class /Script/IKRig.IKRetargeter
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UIKRetargeter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TWeakObjectPtr<UIKRigDefinition*>)         SourceIKRigAsset                                            OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UIKRigDefinition*>)         TargetIKRigAsset                                            OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TArray<FRetargetChainMap>)                 ChainMapping                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<URetargetChainSettings*>)           ChainSettings                                               OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(URetargetRootSettings*)                    RootSettings                                                OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UIKRetargetGlobalSettings*)                GlobalSettings                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TMap<FName, FRetargetProfile>)             Profiles                                                    OFFSET(get<T>, {0x98, 80, 0, 0})
	SMember(FName)                                     CurrentProfile                                              OFFSET(get<T>, {0xE8, 4, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              SourceRetargetPoses                                         OFFSET(get<T>, {0xF0, 80, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              TargetRetargetPoses                                         OFFSET(get<T>, {0x140, 80, 0, 0})
	SMember(FName)                                     CurrentSourceRetargetPose                                   OFFSET(get<T>, {0x190, 4, 0, 0})
	SMember(FName)                                     CurrentTargetRetargetPose                                   OFFSET(get<T>, {0x194, 4, 0, 0})
	CMember(TMap<FName, FIKRetargetPose>)              RetargetPoses                                               OFFSET(get<T>, {0x198, 80, 0, 0})
	SMember(FName)                                     CurrentRetargetPose                                         OFFSET(get<T>, {0x1E8, 4, 0, 0})


	/// Functions
	// Function /Script/IKRig.IKRetargeter.SetRootSettingsInRetargetProfile
	// void SetRootSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetRootSettings& RootSettings);             // [0x7260060] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetGlobalSettingsInRetargetProfile
	// void SetGlobalSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FRetargetGlobalSettings& GlobalSettings);     // [0x725f520] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSpeedPlantSettingsInRetargetProfile
	// void SetChainSpeedPlantSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSpeedPlantSettings& SpeedPlantSettings, FName TargetChainName); // [0x725f2d8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainSettingsInRetargetProfile
	// void SetChainSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainSettings& ChainSettings, FName TargetChainName); // [0x725f0a4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainIKSettingsInRetargetProfile
	// void SetChainIKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainIKSettings& IKSettings, FName TargetChainName); // [0x725ee70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.SetChainFKSettingsInRetargetProfile
	// void SetChainFKSettingsInRetargetProfile(FRetargetProfile& RetargetProfile, FTargetChainFKSettings& FKSettings, FName TargetChainName); // [0x725ec20] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetProfile
	// FTargetRootSettings GetRootSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                               // [0x725eb0c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetRootSettingsFromRetargetAsset
	// void GetRootSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName OptionalProfileName, FTargetRootSettings& OutSettings); // [0x725e8f4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetProfile
	// FRetargetGlobalSettings GetGlobalSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile);                         // [0x725e818] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetGlobalSettingsFromRetargetAsset
	// void GetGlobalSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName OptionalProfileName, FRetargetGlobalSettings& OutSettings); // [0x725e67c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainUsingGoalFromRetargetAsset
	// FTargetChainSettings GetChainUsingGoalFromRetargetAsset(UIKRetargeter* RetargetAsset, FName IKGoalName);                 // [0x725e420] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetProfile
	// FTargetChainSettings GetChainSettingsFromRetargetProfile(FRetargetProfile& RetargetProfile, FName TargetChainName);      // [0x725e164] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/IKRig.IKRetargeter.GetChainSettingsFromRetargetAsset
	// FTargetChainSettings GetChainSettingsFromRetargetAsset(UIKRetargeter* RetargetAsset, FName TargetChainName, FName OptionalProfileName); // [0x725de7c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IKRig.IKRetargetProcessor
/// Size: 0x0338 (0x000028 - 0x000360)
class UIKRetargetProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UIKRigProcessor*)                          IKRigProcessor                                              OFFSET(get<T>, {0x170, 8, 0, 0})
};

/// Class /Script/IKRig.IKRigEffectorGoal
/// Size: 0x00D8 (0x000028 - 0x000100)
class UIKRigEffectorGoal : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FTransform)                                CurrentTransform                                            OFFSET(get<T>, {0x40, 96, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(get<T>, {0xA0, 96, 0, 0})
};

/// Class /Script/IKRig.IKRigDefinition
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UIKRigDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            PreviewSkeletalMesh                                         OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FIKRigSkeleton)                            Skeleton                                                    OFFSET(get<T>, {0x50, 112, 0, 0})
	CMember(TArray<UIKRigEffectorGoal*>)               Goals                                                       OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<UIKRigSolver*>)                     Solvers                                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FRetargetDefinition)                       RetargetDefinition                                          OFFSET(get<T>, {0xE0, 24, 0, 0})
};

/// Class /Script/IKRig.IKRigProcessor
/// Size: 0x0120 (0x000028 - 0x000148)
class UIKRigProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<UIKRigSolver*>)                     Solvers                                                     OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/IKRig.IKRigSolver
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRigSolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/IKRig.IKRig_BodyMoverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_BodyMoverEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     InfluenceMultiplier                                         OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_BodyMover
/// Size: 0x0048 (0x000030 - 0x000078)
class UIKRig_BodyMover : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PositionPositiveX                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     PositionNegativeX                                           OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     PositionPositiveY                                           OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PositionNegativeY                                           OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PositionPositiveZ                                           OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PositionNegativeZ                                           OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RotateXAlpha                                                OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RotateYAlpha                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     RotateZAlpha                                                OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(TArray<UIKRig_BodyMoverEffector*>)         Effectors                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/IKRig.IKRig_LimbEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_LimbEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_LimbSolver
/// Size: 0x0058 (0x000030 - 0x000088)
class UIKRig_LimbSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     RootName                                                    OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bEnableLimit                                                OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bAveragePull                                                OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     PullDistribution                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     ReachStepAlpha                                              OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bEnableTwistCorrection                                      OFFSET(get<bool>, {0x54, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        EndBoneForwardAxis                                          OFFSET(get<T>, {0x55, 1, 0, 0})
	CMember(UIKRig_LimbEffector*)                      Effector                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/IKRig.IKRig_FBIKEffector
/// Size: 0x0018 (0x000028 - 0x000040)
class UIKRig_FBIKEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     StrengthAlpha                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     PullChainAlpha                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PinRotation                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   IndexInSolver                                               OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_FBIKBoneSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UIKRig_FBIKBoneSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     bone                                                        OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(float)                                     RotationStiffness                                           OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     PositionStiffness                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(EPBIKLimitType)                            X                                                           OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     MinX                                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxX                                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EPBIKLimitType)                            Y                                                           OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     MinY                                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxY                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(EPBIKLimitType)                            Z                                                           OFFSET(get<T>, {0x4C, 1, 0, 0})
	DMember(float)                                     MinZ                                                        OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxZ                                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUsePreferredAngles                                         OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FVector)                                   PreferredAngles                                             OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/IKRig.IKRigFBIKSolver
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UIKRigFBIKSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     MassMultiplier                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bAllowStretch                                               OFFSET(get<bool>, {0x3C, 1, 0, 0})
	CMember(EPBIKRootBehavior)                         RootBehavior                                                OFFSET(get<T>, {0x3D, 1, 0, 0})
	SMember(FRootPrePullSettings)                      PrePullRootSettings                                         OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(float)                                     PullChainAlpha                                              OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MaxAngle                                                    OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     OverRelaxation                                              OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bStartSolveFromInputPose                                    OFFSET(get<bool>, {0x6C, 1, 0, 0})
	CMember(TArray<UIKRig_FBIKEffector*>)              Effectors                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<UIKRig_FBIKBoneSettings*>)          BoneSettings                                                OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/IKRig.IKRig_PoleSolverEffector
/// Size: 0x0010 (0x000028 - 0x000038)
class UIKRig_PoleSolverEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     GoalName                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_PoleSolver
/// Size: 0x0030 (0x000030 - 0x000060)
class UIKRig_PoleSolver : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     RootName                                                    OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     EndName                                                     OFFSET(get<T>, {0x34, 4, 0, 0})
	CMember(UIKRig_PoleSolverEffector*)                Effector                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/IKRig.IKRig_SetTransformEffector
/// Size: 0x0008 (0x000028 - 0x000030)
class UIKRig_SetTransformEffector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnablePosition                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableRotation                                             OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/IKRig.IKRig_SetTransform
/// Size: 0x0018 (0x000030 - 0x000048)
class UIKRig_SetTransform : public UIKRigSolver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     Goal                                                        OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FName)                                     RootBone                                                    OFFSET(get<T>, {0x34, 4, 0, 0})
	CMember(UIKRig_SetTransformEffector*)              Effector                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/IKRig.RetargetProfile
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FRetargetProfile : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bApplyTargetRetargetPose                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     TargetRetargetPoseName                                      OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bApplySourceRetargetPose                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FName)                                     SourceRetargetPoseName                                      OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bApplyChainSettings                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(TMap<FName, FTargetChainSettings>)         ChainSettings                                               OFFSET(get<T>, {0x18, 80, 0, 0})
	DMember(bool)                                      bApplyRootSettings                                          OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FTargetRootSettings)                       RootSettings                                                OFFSET(get<T>, {0x70, 104, 0, 0})
	DMember(bool)                                      bApplyGlobalSettings                                        OFFSET(get<bool>, {0xD8, 1, 0, 0})
	SMember(FRetargetGlobalSettings)                   GlobalSettings                                              OFFSET(get<T>, {0xDC, 28, 0, 0})
};

/// Struct /Script/IKRig.RetargetGlobalSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FRetargetGlobalSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bEnableRoot                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bEnableFK                                                   OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bEnableIK                                                   OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bWarping                                                    OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(EWarpingDirectionSource)                   DirectionSource                                             OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(EBasicAxis)                                ForwardDirection                                            OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     DirectionChain                                              OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(float)                                     WarpForwards                                                OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SidewaysOffset                                              OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     WarpSplay                                                   OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetRootSettings
/// Size: 0x0068 (0x000000 - 0x000068)
class FTargetRootSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TranslationAlpha                                            OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BlendToSource                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   BlendToSourceWeights                                        OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(float)                                     ScaleHorizontal                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     ScaleVertical                                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   TranslationOffset                                           OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     AffectIKHorizontal                                          OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     AffectIKVertical                                            OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetChainSettings
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FTargetChainSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FTargetChainFKSettings)                    FK                                                          OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTargetChainIKSettings)                    IK                                                          OFFSET(get<T>, {0x18, 120, 0, 0})
	SMember(FTargetChainSpeedPlantSettings)            SpeedPlanting                                               OFFSET(get<T>, {0x90, 20, 0, 0})
};

/// Struct /Script/IKRig.TargetChainSpeedPlantSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FTargetChainSpeedPlantSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      EnableSpeedPlanting                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     SpeedCurveName                                              OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     UnplantStiffness                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     UnplantCriticalDamping                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/IKRig.TargetChainIKSettings
/// Size: 0x0078 (0x000000 - 0x000078)
class FTargetChainIKSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      EnableIK                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BlendToSource                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   BlendToSourceWeights                                        OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   StaticOffset                                                OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   StaticLocalOffset                                           OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FRotator)                                  StaticRotationOffset                                        OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     ScaleVertical                                               OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Extension                                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAffectedByIKWarping                                        OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/IKRig.TargetChainFKSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FTargetChainFKSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      EnableFK                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(ERetargetRotationMode)                     RotationMode                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ERetargetTranslationMode)                  TranslationMode                                             OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     TranslationAlpha                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PoleVectorMatching                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PoleVectorOffset                                            OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/IKRig.AnimNode_IKRig
/// Size: 0x0188 (0x000058 - 0x0001E0)
class FAnimNode_IKRig : public FAnimNode_CustomProperty
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UIKRigDefinition*)                         RigDefinitionAsset                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<FIKRigGoal>)                        Goals                                                       OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bStartFromRefPose                                           OFFSET(get<bool>, {0x80, 1, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x81, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(get<T>, {0x90, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(get<T>, {0xDC, 48, 0, 0})
	CMember(UIKRigProcessor*)                          IKRigProcessor                                              OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x1D8, 4, 0, 0})
};

/// Struct /Script/IKRig.IKRigGoal
/// Size: 0x0090 (0x000000 - 0x000090)
class FIKRigGoal : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EIKRigGoalTransformSource)                 TransformSource                                             OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     PositionAlpha                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     RotationAlpha                                               OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EIKRigGoalSpace)                           PositionSpace                                               OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(EIKRigGoalSpace)                           RotationSpace                                               OFFSET(get<T>, {0x51, 1, 0, 0})
	SMember(FVector)                                   FinalBlendedPosition                                        OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FQuat)                                     FinalBlendedRotation                                        OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/IKRig.AnimNode_RetargetPoseFromMesh
/// Size: 0x01B8 (0x000010 - 0x0001C8)
class FAnimNode_RetargetPoseFromMesh : public FAnimNode_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(UIKRetargeter*)                            IKRetargeterAsset                                           OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FRetargetProfile)                          CustomRetargetProfile                                       OFFSET(get<T>, {0x28, 248, 0, 0})
	DMember(bool)                                      bSuppressWarnings                                           OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bCopyCurves                                                 OFFSET(get<bool>, {0x121, 1, 0, 0})
	CMember(UIKRetargetProcessor*)                     Processor                                                   OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Struct /Script/IKRig.RetargetChainMap
/// Size: 0x0008 (0x000000 - 0x000008)
class FRetargetChainMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SourceChain                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     TargetChain                                                 OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/IKRig.IKRetargetPose
/// Size: 0x0068 (0x000000 - 0x000068)
class FIKRetargetPose : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   RootTranslationOffset                                       OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(TMap<FName, FQuat>)                        BoneRotationOffsets                                         OFFSET(get<T>, {0x18, 80, 0, 0})
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
	SMember(FName)                                     ChainName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FBoneReference)                            StartBone                                                   OFFSET(get<T>, {0x4, 12, 0, 0})
	SMember(FBoneReference)                            EndBone                                                     OFFSET(get<T>, {0x10, 12, 0, 0})
	SMember(FName)                                     IKGoalName                                                  OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/IKRig.RetargetDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FRetargetDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBoneChain>)                        BoneChains                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
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
	CMember(TArray<FName>)                             BoneNames                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedBones                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FTransform>)                        CurrentPoseGlobal                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        CurrentPoseLocal                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FTransform>)                        RefPoseGlobal                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/IKRig.LimbSolverSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FLimbSolverSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnableLimit                                                OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bAveragePull                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     PullDistribution                                            OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ReachStepAlpha                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bEnableTwistCorrection                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        EndBoneForwardAxis                                          OFFSET(get<T>, {0x21, 1, 0, 0})
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

