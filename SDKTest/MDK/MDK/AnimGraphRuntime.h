
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimGraphRuntime.AnimCustomInstance
/// Size: 0x0000 (0x000360 - 0x000360)
class UAnimCustomInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x38, 8, 0, 0})
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0000 (0x000360 - 0x000360)
class UAnimSequencerInstance : public UAnimCustomInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK
	// void K2_TwoBoneIK(FVector& RootPos, FVector& JointPos, FVector& EndPos, FVector& JointTarget, FVector& Effector, FVector& OutJointPos, FVector& OutEndPos, bool bAllowStretching, float StartStretchRatio, float MaxStretchScale); // [0x1d25df0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt
	// FTransform K2_LookAt(FTransform& CurrentTransform, FVector& TargetPosition, FVector LookAtVector, bool bUseUpVector, FVector UpVector, float ClampConeInDegree); // [0x1d25b70] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x00E8 (0x000028 - 0x000110)
class UPlayMontageCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(UMulticastDelegate)                        OnCompleted                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnBlendOut                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnInterrupted                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnNotifyBegin                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnNotifyEnd                                                 OFFSET(get<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x1d263a0] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x1d262c0] Final|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);                                                           // [0x1d261f0] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x1d26120] Final|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x1d259f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00E8 (0x000030 - 0x000118)
class FAnimNode_SkeletalControlBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FComponentSpacePoseLink)                   ComponentPose                                               OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x68, 88, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xC8, 60, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x00D0 (0x000058 - 0x000128)
class FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Z                                                           OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(UBlendSpaceBase*)                          BlendSpace                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bResetPlayTimeWhenBlendSpaceChanges                         OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FBlendFilter)                              BlendFilter                                                 OFFSET(getStruct<T>, {0x80, 144, 0, 0})
	CMember(TArray<FBlendSampleData>)                  BlendSampleDataCache                                        OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(UBlendSpaceBase*)                          PreviousBlendSpace                                          OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x00E8 (0x000128 - 0x000210)
class FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(bool)                                      bIsLODEnabled                                               OFFSET(get<bool>, {0x144, 1, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x148, 12, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x158, 8, 0, 0})
	SMember(FName)                                     PivotSocketName                                             OFFSET(getStruct<T>, {0x160, 8, 0, 0})
	SMember(FVector)                                   SocketAxis                                                  OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x174, 4, 0, 0})
	SMember(FBoneReference)                            SocketBoneReference                                         OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FTransform)                                SocketLocalTransform                                        OFFSET(getStruct<T>, {0x190, 48, 0, 0})
	SMember(FBoneReference)                            PivotSocketBoneReference                                    OFFSET(getStruct<T>, {0x1C0, 24, 0, 0})
	SMember(FTransform)                                PivotSocketLocalTransform                                   OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0268 (0x000118 - 0x000380)
class FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(AnimPhysSimSpaceType)                      SimulationSpace                                             OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FBoneReference)                            RelativeSpaceBone                                           OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	DMember(bool)                                      bChain                                                      OFFSET(get<bool>, {0x138, 1, 0, 0})
	SMember(FBoneReference)                            BoundBone                                                   OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	SMember(FBoneReference)                            ChainEnd                                                    OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	SMember(FVector)                                   BoxExtents                                                  OFFSET(getStruct<T>, {0x170, 12, 0, 0})
	SMember(FVector)                                   LocalJointOffset                                            OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bLinearSpring                                               OFFSET(get<bool>, {0x18C, 1, 0, 0})
	DMember(bool)                                      bAngularSpring                                              OFFSET(get<bool>, {0x18D, 1, 0, 0})
	DMember(float)                                     LinearSpringConstant                                        OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     AngularSpringConstant                                       OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      bEnableWind                                                 OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(bool)                                      bWindWasEnabled                                             OFFSET(get<bool>, {0x199, 1, 0, 0})
	DMember(float)                                     WindScale                                                   OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(bool)                                      bOverrideLinearDamping                                      OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(float)                                     LinearDampingOverride                                       OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bOverrideAngularDamping                                     OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(float)                                     AngularDampingOverride                                      OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(bool)                                      bOverrideAngularBias                                        OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	DMember(float)                                     AngularBiasOverride                                         OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(bool)                                      bDoUpdate                                                   OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	DMember(bool)                                      bDoEval                                                     OFFSET(get<bool>, {0x1B9, 1, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPreUpdate                                OFFSET(get<int32_t>, {0x1BC, 4, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPostUpdate                               OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	SMember(FAnimPhysConstraintSetup)                  ConstraintSetup                                             OFFSET(getStruct<T>, {0x1C4, 92, 0, 0})
	DMember(bool)                                      bUsePlanarLimit                                             OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(TArray<FAnimPhysPlanarLimit>)              PlanarLimits                                                OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(bool)                                      bUseSphericalLimits                                         OFFSET(get<bool>, {0x238, 1, 0, 0})
	CMember(TArray<FAnimPhysSphericalLimit>)           SphericalLimits                                             OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(AnimPhysCollisionType)                     CollisionType                                               OFFSET(get<T>, {0x250, 1, 0, 0})
	DMember(float)                                     SphereCollisionRadius                                       OFFSET(get<float>, {0x254, 4, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x258, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0030 (0x000000 - 0x000030)
class FAnimPhysSphericalLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   SphereLocalOffset                                           OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     LimitRadius                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(ESphericalLimitType)                       LimitType                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0050 (0x000000 - 0x000050)
class FAnimPhysPlanarLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                PlaneTransform                                              OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x005C (0x000000 - 0x00005C)
class FAnimPhysConstraintSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 92;

public:
	CMember(AnimPhysLinearConstraintType)              LinearXLimitType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearYLimitType                                            OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearZLimitType                                            OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector)                                   LinearAxesMin                                               OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   LinearAxesMax                                               OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(AnimPhysAngularConstraintType)             AngularConstraintType                                       OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(AnimPhysTwistAxis)                         TwistAxis                                                   OFFSET(get<T>, {0x1D, 1, 0, 0})
	DMember(float)                                     ConeAngle                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     AngularXAngle                                               OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     AngularYAngle                                               OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     AngularZAngle                                               OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector)                                   AngularLimitsMin                                            OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   AngularLimitsMax                                            OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	CMember(AnimPhysTwistAxis)                         AngularTargetAxis                                           OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FVector)                                   AngularTarget                                               OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	DMember(bool)                                      bLinearFullyLocked                                          OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00E8 (0x000030 - 0x000118)
class FAnimNode_ApplyAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FPoseLink)                                 Base                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x64, 8, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x74, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x75, 1, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x78, 88, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xD8, 60, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (0x000118 - 0x000138)
class FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TArray<FAngularRangeLimit>)                AngularRangeLimits                                          OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FVector>)                           AngularOffsets                                              OFFSET(get<T>, {0x128, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0030 (0x000000 - 0x000030)
class FAngularRangeLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   LimitMin                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   LimitMax                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FBoneReference)                            Bone                                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0070 (0x000030 - 0x0000A0)
class FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x64, 8, 0, 0})
	CMember(TArray<FBlendBoneByChannelEntry>)          BoneDefinitions                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TransformsSpace                                             OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(float)                                     InternalBlendAlpha                                          OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bBIsRelevant                                                OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(TArray<FBlendBoneByChannelEntry>)          ValidBoneEntries                                            OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FBlendBoneByChannelEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(bool)                                      bBlendTranslation                                           OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bBlendRotation                                              OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bBlendScale                                                 OFFSET(get<bool>, {0x32, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0098 (0x000030 - 0x0000C8)
class FAnimNode_BlendListBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FPoseLink>)                         BlendPose                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             BlendTime                                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(EAlphaBlendOption)                         BlendType                                                   OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(UCurveFloat*)                              CustomBlendCurve                                            OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UBlendProfile*)                            BlendProfile                                                OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TArray<FAlphaBlend>)                       Blends                                                      OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<float>)                             BlendWeights                                                OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<float>)                             RemainingBlendTimes                                         OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   LastActiveChildIndex                                        OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	CMember(TArray<FBlendSampleData>)                  PerBoneSampleData                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bResetChildOnActivation                                     OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bActiveValue                                                OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<int32_t>)                           EnumToPoseIndex                                             OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(unsigned char)                             ActiveEnumValue                                             OFFSET(get<unsigned char>, {0xD8, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(int32_t)                                   ActiveChildIndex                                            OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (0x000128 - 0x000130)
class FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(float)                                     NormalizedTime                                              OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0078 (0x000118 - 0x000190)
class FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	CMember(TEnumAsByte<EComponentType>)               SourceComponent                                             OFFSET(get<T>, {0x130, 1, 0, 0})
	CMember(UCurveFloat*)                              DrivingCurve                                                OFFSET(get<T>, {0x138, 8, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bUseRange                                                   OFFSET(get<bool>, {0x144, 1, 0, 0})
	DMember(float)                                     RangeMin                                                    OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     RangeMax                                                    OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     RemappedMin                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     RemappedMax                                                 OFFSET(get<float>, {0x154, 4, 0, 0})
	CMember(EDrivenDestinationMode)                    DestinationMode                                             OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x160, 8, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	CMember(TEnumAsByte<EComponentType>)               TargetComponent                                             OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(bool)                                      bAffectTargetTranslationX                                   OFFSET(get<bool>, {0x184, 1, 1, 0})
	DMember(bool)                                      bAffectTargetTranslationY                                   OFFSET(get<bool>, {0x184, 1, 1, 1})
	DMember(bool)                                      bAffectTargetTranslationZ                                   OFFSET(get<bool>, {0x184, 1, 1, 2})
	DMember(bool)                                      bAffectTargetRotationX                                      OFFSET(get<bool>, {0x184, 1, 1, 3})
	DMember(bool)                                      bAffectTargetRotationY                                      OFFSET(get<bool>, {0x184, 1, 1, 4})
	DMember(bool)                                      bAffectTargetRotationZ                                      OFFSET(get<bool>, {0x184, 1, 1, 5})
	DMember(bool)                                      bAffectTargetScaleX                                         OFFSET(get<bool>, {0x184, 1, 1, 6})
	DMember(bool)                                      bAffectTargetScaleY                                         OFFSET(get<bool>, {0x184, 1, 1, 7})
	DMember(bool)                                      bAffectTargetScaleZ                                         OFFSET(get<bool>, {0x185, 1, 1, 0})
	CMember(EDrivenBoneModificationMode)               ModificationMode                                            OFFSET(get<T>, {0x188, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0048 (0x000118 - 0x000160)
class FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	CMember(TArray<FConstraint>)                       ConstraintSetup                                             OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<float>)                             ConstraintWeights                                           OFFSET(get<T>, {0x140, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x0028 (0x000000 - 0x000028)
class FConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EConstraintOffsetOption)                   OffsetOption                                                OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(ETransformConstraintType)                  TransformType                                               OFFSET(get<T>, {0x19, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      PerAxis                                                     OFFSET(getStruct<T>, {0x1A, 3, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0038 (0x000118 - 0x000150)
class FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0x14A, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ControlSpace                                                OFFSET(get<T>, {0x14B, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0040 (0x000118 - 0x000158)
class FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0x14A, 1, 0, 0})
	CMember(CopyBoneDeltaMode)                         CopyMode                                                    OFFSET(get<T>, {0x14B, 1, 0, 0})
	DMember(float)                                     TranslationMultiplier                                       OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     RotationMultiplier                                          OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0x154, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bCopyCurves                                                 OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0038 (0x000030 - 0x000068)
class FAnimNode_CurveSource : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FName)                                     SourceBinding                                               OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   CurveSource                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x0108 (0x000118 - 0x000220)
class FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorTransformSpace                                      OFFSET(get<T>, {0x150, 1, 0, 0})
	SMember(FBoneReference)                            EffectorTransformBone                                       OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0x170, 96, 0, 0})
	CMember(TEnumAsByte<EBoneRotationSource>)          EffectorRotationSource                                      OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FBoneReference)                            TipBone                                                     OFFSET(getStruct<T>, {0x1D8, 24, 0, 0})
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0x1F0, 24, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x208, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x20C, 4, 0, 0})
	DMember(bool)                                      bEnableDebugDraw                                            OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BoneSocketTarget
/// Size: 0x0060 (0x000000 - 0x000060)
class FBoneSocketTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bUseSocket                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FBoneReference)                            BoneReference                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FSocketReference)                          SocketReference                                             OFFSET(getStruct<T>, {0x20, 64, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.SocketReference
/// Size: 0x0040 (0x000000 - 0x000040)
class FSocketReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0078 (0x000118 - 0x000190)
class FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FBoneReference)                            RightHandFK                                                 OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FBoneReference)                            LeftHandFK                                                  OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FBoneReference)                            RightHandIK                                                 OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	SMember(FBoneReference)                            LeftHandIK                                                  OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	CMember(TArray<FBoneReference>)                    IKBonesToMove                                               OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(float)                                     HandFKWeight                                                OFFSET(get<float>, {0x188, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TArray<FPoseLink>)                         BlendPoses                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FInputBlendPose>)                   LayerSetup                                                  OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<float>)                             BlendWeights                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bMeshSpaceRotationBlend                                     OFFSET(get<bool>, {0x78, 1, 0, 0})
	CMember(TEnumAsByte<ECurveBlendOption>)            CurveBlendOption                                            OFFSET(get<T>, {0x79, 1, 0, 0})
	DMember(bool)                                      bBlendRootMotionBasedOnRootBone                             OFFSET(get<bool>, {0x7A, 1, 0, 0})
	DMember(bool)                                      bHasRelevantPoses                                           OFFSET(get<bool>, {0x7B, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	CMember(TArray<FPerBoneBlendWeight>)               PerBoneBlendWeights                                         OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FGuid)                                     SkeletonGuid                                                OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FGuid)                                     VirtualBoneGuid                                             OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (0x000118 - 0x000148)
class FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	CMember(TArray<FAnimLegIKDefinition>)              LegsDefinition                                              OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FAnimLegIKData>)                    LegsData                                                    OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FAnimLegIKData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x0040 (0x000000 - 0x000040)
class FAnimLegIKDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        FootBoneForwardAxis                                         OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x35, 1, 0, 0})
	DMember(bool)                                      bEnableRotationLimit                                        OFFSET(get<bool>, {0x36, 1, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bEnableKneeTwistCorrection                                  OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0040 (0x000000 - 0x000040)
class FIKChain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x0040 (0x000000 - 0x000040)
class FIKChainLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x0128 (0x000118 - 0x000240)
class FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FBoneReference)                            LookAtBone                                                  OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FName)                                     LookAtSocket                                                OFFSET(getStruct<T>, {0x148, 8, 0, 0})
	SMember(FBoneSocketTarget)                         LookAtTarget                                                OFFSET(getStruct<T>, {0x150, 96, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x1B0, 12, 0, 0})
	CMember(TEnumAsByte<EAxisOption>)                  LookAtAxis                                                  OFFSET(get<T>, {0x1BC, 1, 0, 0})
	SMember(FVector)                                   CustomLookAtAxis                                            OFFSET(getStruct<T>, {0x1C0, 12, 0, 0})
	SMember(FAxis)                                     LookAt_Axis                                                 OFFSET(getStruct<T>, {0x1CC, 16, 0, 0})
	DMember(bool)                                      bUseLookUpAxis                                              OFFSET(get<bool>, {0x1DC, 1, 0, 0})
	CMember(TEnumAsByte<EAxisOption>)                  LookUpAxis                                                  OFFSET(get<T>, {0x1DD, 1, 0, 0})
	SMember(FVector)                                   CustomLookUpAxis                                            OFFSET(getStruct<T>, {0x1E0, 12, 0, 0})
	SMember(FAxis)                                     LookUp_Axis                                                 OFFSET(getStruct<T>, {0x1EC, 16, 0, 0})
	DMember(float)                                     LookAtClamp                                                 OFFSET(get<float>, {0x1FC, 4, 0, 0})
	CMember(TEnumAsByte<EInterpolationBlend>)          InterpolationType                                           OFFSET(get<T>, {0x200, 1, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x204, 4, 0, 0})
	DMember(float)                                     InterpolationTriggerThreashold                              OFFSET(get<float>, {0x208, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0038 (0x000030 - 0x000068)
class FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPoseLink)                                 Base                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bMeshSpaceAdditive                                          OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0048 (0x000118 - 0x000160)
class FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x130, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x13C, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x148, 12, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        TranslationMode                                             OFFSET(get<T>, {0x154, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        RotationMode                                                OFFSET(get<T>, {0x155, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        ScaleMode                                                   OFFSET(get<T>, {0x156, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TranslationSpace                                            OFFSET(get<T>, {0x157, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            RotationSpace                                               OFFSET(get<T>, {0x158, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ScaleSpace                                                  OFFSET(get<T>, {0x159, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0048 (0x000030 - 0x000078)
class FAnimNode_ModifyCurve : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(EModifyCurveApplyMode)                     ApplyMode                                                   OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TArray<float>)                             CurveValues                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (0x000030 - 0x000070)
class FAnimNode_MultiWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FPoseLink>)                         Poses                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             DesiredAlphas                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bAdditiveNode                                               OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bNormalizeAlpha                                             OFFSET(get<bool>, {0x51, 1, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x54, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0040 (0x000118 - 0x000158)
class FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FBoneReference)                            BoneToObserve                                               OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            DisplaySpace                                                OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(bool)                                      bRelativeToRefPose                                          OFFSET(get<bool>, {0x131, 1, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x134, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x140, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x14C, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0048 (0x000058 - 0x0000A0)
class FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UPoseAsset*)                               PoseAsset                                                   OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(UCurveFloat*)                              CustomCurve                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class FAnimNode_PoseByName : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     PoseName                                                    OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     PoseWeight                                                  OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x00D8 (0x0000A0 - 0x000178)
class FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	CMember(TArray<FBoneReference>)                    SourceBones                                                 OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bOnlyDriveSelectedBones                                     OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(TArray<FBoneReference>)                    OnlyDriveBones                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FBoneReference)                            EvalSpaceBone                                               OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	SMember(FRBFParams)                                RBFParams                                                   OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	CMember(EPoseDriverSource)                         DriveSource                                                 OFFSET(get<T>, {0x108, 1, 0, 0})
	CMember(EPoseDriverOutput)                         DriveOutput                                                 OFFSET(get<T>, {0x109, 1, 0, 0})
	CMember(TArray<FPoseDriverTarget>)                 PoseTargets                                                 OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    TwistAxis                                                   OFFSET(get<T>, {0x138, 1, 0, 0})
	CMember(EPoseDriverType)                           Type                                                        OFFSET(get<T>, {0x139, 1, 0, 0})
	DMember(float)                                     RadialScaling                                               OFFSET(get<float>, {0x13C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FPoseDriverTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FPoseDriverTransform>)              BoneTransforms                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     TargetScale                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x28, 112, 0, 0})
	SMember(FName)                                     DrivenName                                                  OFFSET(getStruct<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0018 (0x000000 - 0x000018)
class FPoseDriverTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   TargetTranslation                                           OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0xC, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FRBFParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   TargetDimensions                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ERBFFunctionType)                          Function                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    TwistAxis                                                   OFFSET(get<T>, {0xA, 1, 0, 0})
	DMember(float)                                     WeightThreshold                                             OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x0080 (0x000030 - 0x0000B0)
class FAnimNode_PoseSnapshot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(ESnapshotSourceMode)                       Mode                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FName)                                     SnapshotName                                                OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FPoseSnapshot)                             Snapshot                                                    OFFSET(getStruct<T>, {0x40, 56, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0060 (0x000030 - 0x000090)
class FAnimNode_RandomPlayer : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bShuffleMode                                                OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TArray<FRandomPlayerSequenceEntry>)        Entries                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FRandomPlayerSequenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UAnimSequence*)                            Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     ChanceToPlay                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinLoopCount                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxLoopCount                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     MinPlayRate                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxPlayRate                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     OFFSET(getStruct<T>, {0x20, 56, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0x000030 - 0x000030)
class FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0008 (0x000030 - 0x000038)
class FAnimNode_RefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TEnumAsByte<ERefPoseType>)                 RefPoseType                                                 OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Root
/// Size: 0x0018 (0x000030 - 0x000048)
class FAnimNode_Root : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPoseLink)                                 Result                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class FAnimNode_RotateRootBone : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Pitch                                                       OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      PitchScaleBiasClamp                                         OFFSET(getStruct<T>, {0x50, 60, 0, 0})
	SMember(FInputScaleBiasClamp)                      YawScaleBiasClamp                                           OFFSET(getStruct<T>, {0x8C, 60, 0, 0})
	SMember(FRotator)                                  MeshToComponent                                             OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(float)                                     ActualPitch                                                 OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     ActualYaw                                                   OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0038 (0x000118 - 0x000150)
class FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    RotationAxisToRefer                                         OFFSET(get<T>, {0x14C, 1, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0x14D, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00D8 (0x000128 - 0x000200)
class FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	DMember(bool)                                      bIsLODEnabled                                               OFFSET(get<bool>, {0x144, 1, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x145, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x148, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x14C, 8, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x158, 1, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x160, 88, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x1C0, 60, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0088 (0x000030 - 0x0000B8)
class FAnimNode_ScaleChainLength : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     DefaultChainLength                                          OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FBoneReference)                            ChainStartBone                                              OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FBoneReference)                            ChainEndBone                                                OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	CMember(EScaleChainInitialLength)                  ChainInitialLength                                          OFFSET(get<T>, {0x80, 1, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x84, 12, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bBoneIndicesCached                                          OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0018 (0x000058 - 0x000070)
class FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UAnimSequenceBase*)                        Sequence                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     ExplicitTime                                                OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bShouldLoop                                                 OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      bTeleportToExplicitTime                                     OFFSET(get<bool>, {0x65, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x68, 4, 0, 0})
	CMember(TEnumAsByte<ESequenceEvalReinit>)          ReinitializationBehavior                                    OFFSET(get<T>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bReinitialized                                              OFFSET(get<bool>, {0x6D, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0040 (0x000030 - 0x000070)
class FAnimNode_Slot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bAlwaysUpdateSourcePose                                     OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01A0 (0x000118 - 0x0002B8)
class FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FBoneReference)                            StartBone                                                   OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FBoneReference)                            EndBone                                                     OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	CMember(ESplineBoneAxis)                           BoneAxis                                                    OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(bool)                                      bAutoCalculateSpline                                        OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(int32_t)                                   PointCount                                                  OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	CMember(TArray<FTransform>)                        ControlPoints                                               OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     TwistStart                                                  OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     TwistEnd                                                    OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FAlphaBlend)                               TwistBlend                                                  OFFSET(getStruct<T>, {0x170, 56, 0, 0})
	DMember(float)                                     Stretch                                                     OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x1AC, 4, 0, 0})
	SMember(FSplineCurves)                             BoneSpline                                                  OFFSET(getStruct<T>, {0x220, 96, 0, 0})
	DMember(float)                                     OriginalSplineLength                                        OFFSET(get<float>, {0x280, 4, 0, 0})
	CMember(TArray<FSplineIKCachedBoneData>)           CachedBoneReferences                                        OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<float>)                             CachedBoneLengths                                           OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<FQuat>)                             CachedOffsetRotations                                       OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSplineIKCachedBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FBoneReference)                            Bone                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(int32_t)                                   RefSkeletonIndex                                            OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x0068 (0x000118 - 0x000180)
class FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FBoneReference)                            SpringBone                                                  OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	DMember(bool)                                      bLimitDisplacement                                          OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(float)                                     MaxDisplacement                                             OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     SpringStiffness                                             OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     SpringDamping                                               OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     ErrorResetThresh                                            OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bNoZSpring                                                  OFFSET(get<bool>, {0x144, 1, 0, 0})
	DMember(bool)                                      bTranslateX                                                 OFFSET(get<bool>, {0x145, 1, 0, 0})
	DMember(bool)                                      bTranslateY                                                 OFFSET(get<bool>, {0x146, 1, 0, 0})
	DMember(bool)                                      bTranslateZ                                                 OFFSET(get<bool>, {0x147, 1, 0, 0})
	DMember(bool)                                      bRotateX                                                    OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bRotateY                                                    OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(bool)                                      bRotateZ                                                    OFFSET(get<bool>, {0x14A, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x0178 (0x000118 - 0x000290)
class FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FBoneReference)                            TrailBone                                                   OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	DMember(int32_t)                                   ChainLength                                                 OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        ChainBoneAxis                                               OFFSET(get<T>, {0x134, 1, 0, 0})
	DMember(bool)                                      bInvertChainBoneAxis                                        OFFSET(get<bool>, {0x135, 1, 0, 0})
	DMember(float)                                     TrailRelaxation                                             OFFSET(get<float>, {0x138, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        TrailRelaxationSpeed                                        OFFSET(getStruct<T>, {0x140, 120, 0, 0})
	DMember(float)                                     RelaxationSpeedScale                                        OFFSET(get<float>, {0x1B8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      RelaxationSpeedScaleInputProcessor                          OFFSET(getStruct<T>, {0x1BC, 60, 0, 0})
	DMember(bool)                                      bLimitStretch                                               OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(float)                                     StretchLimit                                                OFFSET(get<float>, {0x1FC, 4, 0, 0})
	SMember(FVector)                                   FakeVelocity                                                OFFSET(getStruct<T>, {0x200, 12, 0, 0})
	DMember(bool)                                      bActorSpaceFakeVel                                          OFFSET(get<bool>, {0x20C, 1, 0, 0})
	SMember(FBoneReference)                            BaseJoint                                                   OFFSET(getStruct<T>, {0x210, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0088 (0x000118 - 0x0001A0)
class FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FReferenceBoneFrame)                       BaseFrame                                                   OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FReferenceBoneFrame)                       TwistFrame                                                  OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FAxis)                                     TwistPlaneNormalAxis                                        OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	DMember(float)                                     RangeMax                                                    OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     RemappedMin                                                 OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     RemappedMax                                                 OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FAnimCurveParam)                           Curve                                                       OFFSET(getStruct<T>, {0x188, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0028 (0x000000 - 0x000028)
class FReferenceBoneFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FBoneReference)                            Bone                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FAxis)                                     Axis                                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0158 (0x000118 - 0x000270)
class FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FBoneReference)                            IKBone                                                      OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	DMember(bool)                                      bAllowStretching                                            OFFSET(get<bool>, {0x130, 1, 1, 0})
	DMember(float)                                     StartStretchRatio                                           OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MaxStretchScale                                             OFFSET(get<float>, {0x138, 4, 0, 0})
	SMember(FVector2D)                                 StretchLimits                                               OFFSET(getStruct<T>, {0x13C, 8, 0, 0})
	DMember(bool)                                      bTakeRotationFromEffectorSpace                              OFFSET(get<bool>, {0x144, 1, 1, 0})
	DMember(bool)                                      bMaintainEffectorRelRot                                     OFFSET(get<bool>, {0x144, 1, 1, 1})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorLocationSpace                                       OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FName)                                     EffectorSpaceBoneName                                       OFFSET(getStruct<T>, {0x150, 8, 0, 0})
	SMember(FVector)                                   EffectorLocation                                            OFFSET(getStruct<T>, {0x158, 12, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0x170, 96, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            JointTargetLocationSpace                                    OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FVector)                                   JointTargetLocation                                         OFFSET(getStruct<T>, {0x1D4, 12, 0, 0})
	SMember(FName)                                     JointTargetSpaceBoneName                                    OFFSET(getStruct<T>, {0x1E0, 8, 0, 0})
	SMember(FBoneSocketTarget)                         JointTarget                                                 OFFSET(getStruct<T>, {0x1F0, 96, 0, 0})
	DMember(bool)                                      bAllowTwist                                                 OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FAxis)                                     TwistAxis                                                   OFFSET(getStruct<T>, {0x254, 16, 0, 0})
	DMember(bool)                                      bNoTwist                                                    OFFSET(get<bool>, {0x264, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00F0 (0x000030 - 0x000120)
class FAnimNode_TwoWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x70, 1, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x78, 88, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xD8, 60, 0, 0})
	DMember(float)                                     InternalBlendAlpha                                          OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(bool)                                      bAIsRelevant                                                OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bBIsRelevant                                                OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(bool)                                      bResetChildOnActivation                                     OFFSET(get<bool>, {0x11A, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x0250 (0x0005E0 - 0x000830)
class FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Struct /Script/AnimGraphRuntime.RBFEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FRBFEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFTarget
/// Size: 0x0078 (0x000010 - 0x000088)
class FRBFTarget : public FRBFEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     ScaleFactor                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x18, 112, 0, 0})
};

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x03
enum ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner0                                                      = 0,
	ESphericalLimitType__Outer1                                                      = 1,
	ESphericalLimitType__ESphericalLimitType_MAX2                                    = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysSimSpaceType
/// Size: 0x06
enum AnimPhysSimSpaceType : uint8_t
{
	AnimPhysSimSpaceType__Component0                                                 = 0,
	AnimPhysSimSpaceType__Actor1                                                     = 1,
	AnimPhysSimSpaceType__World2                                                     = 2,
	AnimPhysSimSpaceType__RootRelative3                                              = 3,
	AnimPhysSimSpaceType__BoneRelative4                                              = 4,
	AnimPhysSimSpaceType__AnimPhysSimSpaceType_MAX5                                  = 5
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x03
enum AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free0                                              = 0,
	AnimPhysLinearConstraintType__Limited1                                           = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX2                  = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x03
enum AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular0                                          = 0,
	AnimPhysAngularConstraintType__Cone1                                             = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX2                = 2
};

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x04
enum EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone0                                                    = 0,
	EDrivenDestinationMode__MorphTarget1                                             = 1,
	EDrivenDestinationMode__MaterialParameter2                                       = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX3                              = 3
};

/// Enum /Script/AnimGraphRuntime.EDrivenBoneModificationMode
/// Size: 0x04
enum EDrivenBoneModificationMode : uint8_t
{
	EDrivenBoneModificationMode__AddToInput0                                         = 0,
	EDrivenBoneModificationMode__ReplaceComponent1                                   = 1,
	EDrivenBoneModificationMode__AddToRefPose2                                       = 2,
	EDrivenBoneModificationMode__EDrivenBoneModificationMode_MAX3                    = 3
};

/// Enum /Script/AnimGraphRuntime.EConstraintOffsetOption
/// Size: 0x03
enum EConstraintOffsetOption : uint8_t
{
	EConstraintOffsetOption__None0                                                   = 0,
	EConstraintOffsetOption__Offset_RefPose1                                         = 1,
	EConstraintOffsetOption__EConstraintOffsetOption_MAX2                            = 2
};

/// Enum /Script/AnimGraphRuntime.CopyBoneDeltaMode
/// Size: 0x03
enum CopyBoneDeltaMode : uint8_t
{
	CopyBoneDeltaMode__Accumulate0                                                   = 0,
	CopyBoneDeltaMode__Copy1                                                         = 1,
	CopyBoneDeltaMode__CopyBoneDeltaMode_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EInterpolationBlend
/// Size: 0x08
enum EInterpolationBlend : uint8_t
{
	EInterpolationBlend__Linear0                                                     = 0,
	EInterpolationBlend__Cubic1                                                      = 1,
	EInterpolationBlend__Sinusoidal2                                                 = 2,
	EInterpolationBlend__EaseInOutExponent23                                         = 3,
	EInterpolationBlend__EaseInOutExponent34                                         = 4,
	EInterpolationBlend__EaseInOutExponent45                                         = 5,
	EInterpolationBlend__EaseInOutExponent56                                         = 6,
	EInterpolationBlend__MAX7                                                        = 7
};

/// Enum /Script/AnimGraphRuntime.EBoneModificationMode
/// Size: 0x04
enum EBoneModificationMode : uint8_t
{
	BMM_Ignore0                                                                      = 0,
	BMM_Replace1                                                                     = 1,
	BMM_Additive2                                                                    = 2,
	BMM_MAX3                                                                         = 3
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x04
enum EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add0                                                      = 0,
	EModifyCurveApplyMode__Scale1                                                    = 1,
	EModifyCurveApplyMode__Blend2                                                    = 2,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX3                                = 3
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x03
enum EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses0                                                   = 0,
	EPoseDriverOutput__DriveCurves1                                                  = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x03
enum EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation0                                                     = 0,
	EPoseDriverSource__Translation1                                                  = 1,
	EPoseDriverSource__EPoseDriverSource_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverType
/// Size: 0x04
enum EPoseDriverType : uint8_t
{
	EPoseDriverType__SwingAndTwist0                                                  = 0,
	EPoseDriverType__SwingOnly1                                                      = 1,
	EPoseDriverType__Translation2                                                    = 2,
	EPoseDriverType__EPoseDriverType_MAX3                                            = 3
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x03
enum ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot0                                              = 0,
	ESnapshotSourceMode__SnapshotPin1                                                = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX2                                    = 2
};

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x03
enum ERefPoseType : uint8_t
{
	EIT_LocalSpace0                                                                  = 0,
	EIT_Additive1                                                                    = 1,
	EIT_MAX2                                                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EScaleChainInitialLength
/// Size: 0x04
enum EScaleChainInitialLength : uint8_t
{
	EScaleChainInitialLength__FixedDefaultLengthValue0                               = 0,
	EScaleChainInitialLength__Distance1                                              = 1,
	EScaleChainInitialLength__ChainLength2                                           = 2,
	EScaleChainInitialLength__EScaleChainInitialLength_MAX3                          = 3
};

/// Enum /Script/AnimGraphRuntime.ESequenceEvalReinit
/// Size: 0x04
enum ESequenceEvalReinit : uint8_t
{
	ESequenceEvalReinit__NoReset0                                                    = 0,
	ESequenceEvalReinit__StartPosition1                                              = 1,
	ESequenceEvalReinit__ExplicitTime2                                               = 2,
	ESequenceEvalReinit__ESequenceEvalReinit_MAX3                                    = 3
};

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x04
enum ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__X0                                                              = 1,
	ESplineBoneAxis__Y1                                                              = 2,
	ESplineBoneAxis__Z2                                                              = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX3                                            = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x04
enum ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean0                                                   = 0,
	ERBFDistanceMethod__Quaternion1                                                  = 1,
	ERBFDistanceMethod__SwingAngle2                                                  = 2,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX3                                      = 3
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x06
enum ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian0                                                      = 0,
	ERBFFunctionType__Exponential1                                                   = 1,
	ERBFFunctionType__Linear2                                                        = 2,
	ERBFFunctionType__Cubic3                                                         = 3,
	ERBFFunctionType__Quintic4                                                       = 4,
	ERBFFunctionType__ERBFFunctionType_MAX5                                          = 5
};

