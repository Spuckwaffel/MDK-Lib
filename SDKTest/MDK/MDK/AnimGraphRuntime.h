
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AnimGraphRuntime.BlendSpaceLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendSpaceLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.AnimationStateMachineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationStateMachineLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.AnimExecutionContextLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimExecutionContextLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotify
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Class /Script/AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     NotifyName                                                  OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/AnimGraphRuntime.AnimSequencerInstance
/// Size: 0x0000 (0x000350 - 0x000350)
class UAnimSequencerInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
};

/// Class /Script/AnimGraphRuntime.BlendListBaseLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendListBaseLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.BlendSpacePlayerLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlendSpacePlayerLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.LayeredBoneBlendLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULayeredBoneBlendLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.LinkedAnimGraphLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULinkedAnimGraphLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.PlayMontageCallbackProxy
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPlayMontageCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnCompleted                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendOut                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterrupted                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyBegin                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNotifyEnd                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyEndReceived
	// void OnNotifyEndReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                   // [0x5797ed4] Final|RequiredAPI|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnNotifyBeginReceived
	// void OnNotifyBeginReceived(FName NotifyName, FBranchingPointNotifyPayload& BranchingPointNotifyPayload);                 // [0x5797df4] Final|RequiredAPI|Native|Protected|HasOutParms 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageEnded
	// void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);                                                           // [0x5797d2c] Final|RequiredAPI|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.OnMontageBlendingOut
	// void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x5797c64] Final|RequiredAPI|Native|Protected 
	// Function /Script/AnimGraphRuntime.PlayMontageCallbackProxy.CreateProxyObjectForPlayMontage
	// UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection); // [0x277614c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AnimGraphRuntime.SequenceEvaluatorLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USequenceEvaluatorLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.SequencePlayerLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencePlayerLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.SequencerAnimationSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class USequencerAnimationSupport : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimGraphRuntime.SkeletalControlLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USkeletalControlLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraphBase
/// Size: 0x0050 (0x000010 - 0x000060)
class FAnimNode_BlendSpaceGraphBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(UBlendSpace*)                              BlendSpace                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<FPoseLink>)                         SamplePoseLinks                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceGraph
/// Size: 0x0000 (0x000060 - 0x000060)
class FAnimNode_BlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceSampleResult
/// Size: 0x0000 (0x000020 - 0x000020)
class FAnimNode_BlendSpaceSampleResult : public FAnimNode_Root
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SkeletalControlBase
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FAnimNode_SkeletalControlBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FComponentSpacePoseLink)                   ComponentPose                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     ActualAlpha                                                 OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x38, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x84, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyBone
/// Size: 0x0060 (0x0000C8 - 0x000128)
class FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        TranslationMode                                             OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        RotationMode                                                OFFSET(get<T>, {0x121, 1, 0, 0})
	CMember(TEnumAsByte<EBoneModificationMode>)        ScaleMode                                                   OFFSET(get<T>, {0x122, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TranslationSpace                                            OFFSET(get<T>, {0x123, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            RotationSpace                                               OFFSET(get<T>, {0x124, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ScaleSpace                                                  OFFSET(get<T>, {0x125, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RefPose
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimNode_RefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MeshSpaceRefPose
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationMultiplier
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
class FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    RotationAxisToRefer                                         OFFSET(get<T>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0xE5, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BlendSpaceReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendSpaceReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.RotationRetargetingInfo
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FRotationRetargetingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FTransform)                                Source                                                      OFFSET(getStruct<T>, {0x10, 96, 0, 0})
	SMember(FTransform)                                Target                                                      OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	CMember(ERotationComponent)                        RotationComponent                                           OFFSET(get<T>, {0xD0, 1, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	DMember(bool)                                      bUseAbsoluteAngle                                           OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(float)                                     SourceMinimum                                               OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     SourceMaximum                                               OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     TargetMinimum                                               OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     TargetMaximum                                               OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(EEasingFuncType)                           EasingType                                                  OFFSET(get<T>, {0x104, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        CustomCurve                                                 OFFSET(getStruct<T>, {0x108, 136, 0, 0})
	DMember(bool)                                      bFlipEasing                                                 OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(float)                                     EasingWeight                                                OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      bClamp                                                      OFFSET(get<bool>, {0x198, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PositionHistory
/// Size: 0x0030 (0x000000 - 0x000030)
class FPositionHistory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Range                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimationStateResultReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimationStateResultReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimationStateMachineReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FAnimationStateMachineReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayerBase
/// Size: 0x0030 (0x000038 - 0x000068)
class FAnimNode_BlendSpacePlayerBase : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UBlendSpace*)                              PreviousBlendSpace                                          OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer
/// Size: 0x0008 (0x000068 - 0x000070)
class FAnimNode_BlendSpacePlayer : public FAnimNode_BlendSpacePlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UBlendSpace*)                              BlendSpace                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AimOffsetLookAt
/// Size: 0x0150 (0x000070 - 0x0001C0)
class FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x140, 4, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x144, 4, 0, 0})
	SMember(FName)                                     PivotSocketName                                             OFFSET(getStruct<T>, {0x148, 4, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x150, 24, 0, 0})
	SMember(FVector)                                   SocketAxis                                                  OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x180, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyAdditive
/// Size: 0x00B8 (0x000010 - 0x0000C8)
class FAnimNode_ApplyAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FPoseLink)                                 base                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x40, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x8C, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0xC1, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.BlendBoneByChannelEntry
/// Size: 0x001C (0x000000 - 0x00001C)
class FBlendBoneByChannelEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(bool)                                      bBlendTranslation                                           OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bBlendRotation                                              OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bBlendScale                                                 OFFSET(get<bool>, {0x1A, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendBoneByChannel
/// Size: 0x0058 (0x000010 - 0x000068)
class FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<FBlendBoneByChannelEntry>)          BoneDefinitions                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            TransformsSpace                                             OFFSET(get<T>, {0x60, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListBase
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_BlendListBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPoseLink>)                         BlendPose                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByBool
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByEnum
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendListByInt
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
/// Size: 0x0008 (0x000070 - 0x000078)
class FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     NormalizedTime                                              OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bTeleportToNormalizedTime                                   OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer_Standalone
/// Size: 0x0028 (0x000068 - 0x000090)
class FAnimNode_BlendSpacePlayer_Standalone : public FAnimNode_BlendSpacePlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(EAnimSyncMethod)                           Method                                                      OFFSET(get<T>, {0x6D, 1, 0, 0})
	DMember(bool)                                      bIgnoreForRelevancyTest                                     OFFSET(get<bool>, {0x6E, 1, 0, 0})
	DMember(float)                                     X                                                           OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Y                                                           OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(bool)                                      bResetPlayTimeWhenBlendSpaceChanges                         OFFSET(get<bool>, {0x7D, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(UBlendSpace*)                              BlendSpace                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CallFunction
/// Size: 0x0028 (0x000010 - 0x000038)
class FAnimNode_CallFunction : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EAnimFunctionCallSite)                     CallSite                                                    OFFSET(get<T>, {0x34, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyPoseFromMesh
/// Size: 0x0140 (0x000010 - 0x000150)
class FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SourceMeshComponent                                         OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bUseAttachedParent                                          OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bCopyCurves                                                 OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bCopyCustomAttributes                                       OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bUseMeshPose                                                OFFSET(get<bool>, {0x1A, 1, 1, 0})
	SMember(FName)                                     RootBoneToCopy                                              OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CurveSource
/// Size: 0x0028 (0x000010 - 0x000038)
class FAnimNode_CurveSource : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     SourceBinding                                               OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   CurveSource                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LayeredBoneBlend
/// Size: 0x00E0 (0x000010 - 0x0000F0)
class FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPoseLink>)                         BlendPoses                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ELayeredBoneBlendMode)                     BlendMode                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<UBlendProfile*>)                    BlendMasks                                                  OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FInputBlendPose>)                   LayerSetup                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<float>)                             BlendWeights                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bMeshSpaceRotationBlend                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bMeshSpaceScaleBlend                                        OFFSET(get<bool>, {0x69, 1, 0, 0})
	CMember(TEnumAsByte<ECurveBlendOption>)            CurveBlendOption                                            OFFSET(get<T>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bBlendRootMotionBasedOnRootBone                             OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	CMember(TArray<FPerBoneBlendWeight>)               PerBoneBlendWeights                                         OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FGuid)                                     SkeletonGuid                                                OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FGuid)                                     VirtualBoneGuid                                             OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MakeDynamicAdditive
/// Size: 0x0028 (0x000010 - 0x000038)
class FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FPoseLink)                                 base                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 Additive                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bMeshSpaceAdditive                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MirrorBase
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_MirrorBase : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Mirror
/// Size: 0x0000 (0x000048 - 0x000048)
class FAnimNode_Mirror : public FAnimNode_MirrorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Mirror_Standalone
/// Size: 0x0018 (0x000048 - 0x000060)
class FAnimNode_Mirror_Standalone : public FAnimNode_MirrorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bMirror                                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(UMirrorDataTable*)                         MirrorDataTable                                             OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bResetChild                                                 OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bBoneMirroring                                              OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bCurveMirroring                                             OFFSET(get<bool>, {0x5E, 1, 0, 0})
	DMember(bool)                                      bAttributeMirroring                                         OFFSET(get<bool>, {0x5F, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ModifyCurve
/// Size: 0x0110 (0x000010 - 0x000120)
class FAnimNode_ModifyCurve : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TMap<FName, float>)                        CurveMap                                                    OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<float>)                             CurveValues                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(EModifyCurveApplyMode)                     ApplyMode                                                   OFFSET(get<T>, {0x11C, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_MultiWayBlend
/// Size: 0x0040 (0x000010 - 0x000050)
class FAnimNode_MultiWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FPoseLink>)                         Poses                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             DesiredAlphas                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bAdditiveNode                                               OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bNormalizeAlpha                                             OFFSET(get<bool>, {0x49, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseHandler
/// Size: 0x0060 (0x000038 - 0x000098)
class FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UPoseAsset*)                               PoseAsset                                                   OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
/// Size: 0x0038 (0x000098 - 0x0000D0)
class FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(EAlphaBlendOption)                         BlendOption                                                 OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(UCurveFloat*)                              CustomCurve                                                 OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseByName
/// Size: 0x0010 (0x000098 - 0x0000A8)
class FAnimNode_PoseByName : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FName)                                     PoseName                                                    OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	DMember(float)                                     PoseWeight                                                  OFFSET(get<float>, {0x9C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTransform
/// Size: 0x0030 (0x000000 - 0x000030)
class FPoseDriverTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   TargetTranslation                                           OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.PoseDriverTarget
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FPoseDriverTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPoseDriverTransform>)              BoneTransforms                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     TargetScale                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(ERBFFunctionType)                          FunctionType                                                OFFSET(get<T>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x2E, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x30, 128, 0, 0})
	SMember(FName)                                     DrivenName                                                  OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bIsHidden                                                   OFFSET(get<bool>, {0xBC, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseDriver
/// Size: 0x0100 (0x000098 - 0x000198)
class FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FPoseLink)                                 SourcePose                                                  OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	CMember(TArray<FBoneReference>)                    SourceBones                                                 OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FBoneReference)                            EvalSpaceBone                                               OFFSET(getStruct<T>, {0xB8, 12, 0, 0})
	DMember(bool)                                      bEvalFromRefPose                                            OFFSET(get<bool>, {0xC4, 1, 0, 0})
	CMember(TArray<FBoneReference>)                    OnlyDriveBones                                              OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FPoseDriverTarget>)                 PoseTargets                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FRBFParams)                                RBFParams                                                   OFFSET(getStruct<T>, {0xE8, 56, 0, 0})
	CMember(EPoseDriverSource)                         DriveSource                                                 OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(EPoseDriverOutput)                         DriveOutput                                                 OFFSET(get<T>, {0x121, 1, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x164, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RBFParams
/// Size: 0x0038 (0x000000 - 0x000038)
class FRBFParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   TargetDimensions                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(ERBFSolverType)                            SolverType                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bAutomaticRadius                                            OFFSET(get<bool>, {0xC, 1, 0, 0})
	CMember(ERBFFunctionType)                          Function                                                    OFFSET(get<T>, {0xD, 1, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0xE, 1, 0, 0})
	CMember(TEnumAsByte<EBoneAxis>)                    TwistAxis                                                   OFFSET(get<T>, {0xF, 1, 0, 0})
	DMember(float)                                     WeightThreshold                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(ERBFNormalizeMethod)                       NormalizeMethod                                             OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FVector)                                   MedianReference                                             OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(float)                                     MedianMin                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MedianMax                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_PoseSnapshot
/// Size: 0x0070 (0x000010 - 0x000080)
class FAnimNode_PoseSnapshot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     SnapshotName                                                OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FPoseSnapshot)                             Snapshot                                                    OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	CMember(ESnapshotSourceMode)                       Mode                                                        OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.RandomPlayerSequenceEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FRandomPlayerSequenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UAnimSequenceBase*)                        Sequence                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     ChanceToPlay                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinLoopCount                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxLoopCount                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(float)                                     MinPlayRate                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxPlayRate                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FAlphaBlend)                               BlendIn                                                     OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RandomPlayer
/// Size: 0x0068 (0x000010 - 0x000078)
class FAnimNode_RandomPlayer : public FAnimNode_AssetPlayerRelevancyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FRandomPlayerSequenceEntry>)        Entries                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(float)                                     BlendWeight                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bShuffleMode                                                OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotateRootBone
/// Size: 0x00A0 (0x000010 - 0x0000B0)
class FAnimNode_RotateRootBone : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Pitch                                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      PitchScaleBiasClamp                                         OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FInputScaleBiasClamp)                      YawScaleBiasClamp                                           OFFSET(getStruct<T>, {0x58, 48, 0, 0})
	SMember(FRotator)                                  MeshToComponent                                             OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(bool)                                      bRotateRootMotionAttribute                                  OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
/// Size: 0x00A8 (0x000070 - 0x000118)
class FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x88, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x90, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xDC, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x111, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RotationOffsetBlendSpaceGraph
/// Size: 0x00A8 (0x000060 - 0x000108)
class FAnimNode_RotationOffsetBlendSpaceGraph : public FAnimNode_BlendSpaceGraphBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FPoseLink)                                 BasePose                                                    OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x80, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0xCC, 48, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x100, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x101, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluatorBase
/// Size: 0x0008 (0x000038 - 0x000040)
class FAnimNode_SequenceEvaluatorBase : public FAnimNode_AssetPlayerBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator
/// Size: 0x0000 (0x000040 - 0x000040)
class FAnimNode_SequenceEvaluator : public FAnimNode_SequenceEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SequenceEvaluator_Standalone
/// Size: 0x0020 (0x000040 - 0x000060)
class FAnimNode_SequenceEvaluator_Standalone : public FAnimNode_SequenceEvaluatorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(EAnimSyncMethod)                           Method                                                      OFFSET(get<T>, {0x45, 1, 0, 0})
	DMember(bool)                                      bIgnoreForRelevancyTest                                     OFFSET(get<bool>, {0x46, 1, 0, 0})
	CMember(UAnimSequenceBase*)                        Sequence                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     ExplicitTime                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bShouldLoop                                                 OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(bool)                                      bTeleportToExplicitTime                                     OFFSET(get<bool>, {0x55, 1, 0, 0})
	CMember(TEnumAsByte<ESequenceEvalReinit>)          ReinitializationBehavior                                    OFFSET(get<T>, {0x56, 1, 0, 0})
	DMember(float)                                     StartPosition                                               OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Slot
/// Size: 0x0038 (0x000010 - 0x000048)
class FAnimNode_Slot : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(bool)                                      bAlwaysUpdateSourcePose                                     OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Sync
/// Size: 0x0018 (0x000010 - 0x000028)
class FAnimNode_Sync : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               GroupRole                                                   OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoWayBlend
/// Size: 0x00B0 (0x000010 - 0x0000C0)
class FAnimNode_TwoWayBlend : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FPoseLink)                                 A                                                           OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FPoseLink)                                 B                                                           OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x31, 1, 1, 0})
	DMember(bool)                                      bResetChildOnActivation                                     OFFSET(get<bool>, {0x31, 1, 1, 3})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x40, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x8C, 48, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimSequencerInstanceProxy
/// Size: 0x0450 (0x000700 - 0x000B50)
class FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
};

/// Struct /Script/AnimGraphRuntime.BlendListBaseReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendListBaseReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.BlendSpacePlayerReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FBlendSpacePlayerReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimPhysConstraintSetup
/// Size: 0x0088 (0x000000 - 0x000088)
class FAnimPhysConstraintSetup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(AnimPhysLinearConstraintType)              LinearXLimitType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearYLimitType                                            OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(AnimPhysLinearConstraintType)              LinearZLimitType                                            OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FVector)                                   LinearAxesMin                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   LinearAxesMax                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(AnimPhysAngularConstraintType)             AngularConstraintType                                       OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(AnimPhysTwistAxis)                         TwistAxis                                                   OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(AnimPhysTwistAxis)                         AngularTargetAxis                                           OFFSET(get<T>, {0x3A, 1, 0, 0})
	DMember(float)                                     ConeAngle                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FVector)                                   AngularLimitsMin                                            OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   AngularLimitsMax                                            OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   AngularTarget                                               OFFSET(getStruct<T>, {0x70, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysPlanarLimit
/// Size: 0x0070 (0x000000 - 0x000070)
class FAnimPhysPlanarLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FTransform)                                PlaneTransform                                              OFFSET(getStruct<T>, {0x10, 96, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysSphericalLimit
/// Size: 0x0030 (0x000000 - 0x000030)
class FAnimPhysSphericalLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FBoneReference)                            DrivingBone                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   SphereLocalOffset                                           OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(float)                                     LimitRadius                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(ESphericalLimitType)                       LimitType                                                   OFFSET(get<T>, {0x2C, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimPhysBodyDefinition
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FAnimPhysBodyDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FBoneReference)                            BoundBone                                                   OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   BoxExtents                                                  OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   LocalJointOffset                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FAnimPhysConstraintSetup)                  ConstraintSetup                                             OFFSET(getStruct<T>, {0x40, 136, 0, 0})
	CMember(AnimPhysCollisionType)                     CollisionType                                               OFFSET(get<T>, {0xC8, 1, 0, 0})
	DMember(float)                                     SphereCollisionRadius                                       OFFSET(get<float>, {0xCC, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_AnimDynamics
/// Size: 0x0448 (0x0000C8 - 0x000510)
class FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	DMember(float)                                     LinearDampingOverride                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     AngularDampingOverride                                      OFFSET(get<float>, {0xCC, 4, 0, 0})
	SMember(FBoneReference)                            RelativeSpaceBone                                           OFFSET(getStruct<T>, {0x190, 12, 0, 0})
	SMember(FBoneReference)                            BoundBone                                                   OFFSET(getStruct<T>, {0x19C, 12, 0, 0})
	SMember(FBoneReference)                            ChainEnd                                                    OFFSET(getStruct<T>, {0x1A8, 12, 0, 0})
	CMember(TArray<FAnimPhysBodyDefinition>)           PhysicsBodyDefinitions                                      OFFSET(get<T>, {0x1B8, 16, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x1C8, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0x1D0, 24, 0, 0})
	DMember(float)                                     LinearSpringConstant                                        OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(float)                                     AngularSpringConstant                                       OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     WindScale                                                   OFFSET(get<float>, {0x1F0, 4, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	DMember(float)                                     AngularBiasOverride                                         OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPreUpdate                                OFFSET(get<int32_t>, {0x244, 4, 0, 0})
	DMember(int32_t)                                   NumSolverIterationsPostUpdate                               OFFSET(get<int32_t>, {0x248, 4, 0, 0})
	CMember(TArray<FAnimPhysSphericalLimit>)           SphericalLimits                                             OFFSET(get<T>, {0x250, 16, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x260, 24, 0, 0})
	CMember(TArray<FAnimPhysPlanarLimit>)              PlanarLimits                                                OFFSET(get<T>, {0x278, 16, 0, 0})
	CMember(AnimPhysSimSpaceType)                      SimulationSpace                                             OFFSET(get<T>, {0x288, 1, 0, 0})
	DMember(bool)                                      bUseSphericalLimits                                         OFFSET(get<bool>, {0x28B, 1, 1, 0})
	DMember(bool)                                      bUsePlanarLimit                                             OFFSET(get<bool>, {0x28B, 1, 1, 1})
	DMember(bool)                                      bDoUpdate                                                   OFFSET(get<bool>, {0x28B, 1, 1, 2})
	DMember(bool)                                      bDoEval                                                     OFFSET(get<bool>, {0x28B, 1, 1, 3})
	DMember(bool)                                      bOverrideLinearDamping                                      OFFSET(get<bool>, {0x28B, 1, 1, 4})
	DMember(bool)                                      bOverrideAngularBias                                        OFFSET(get<bool>, {0x28B, 1, 1, 5})
	DMember(bool)                                      bOverrideAngularDamping                                     OFFSET(get<bool>, {0x28B, 1, 1, 6})
	DMember(bool)                                      bEnableWind                                                 OFFSET(get<bool>, {0x28B, 1, 1, 7})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0x28C, 1, 1, 1})
	DMember(bool)                                      bGravityOverrideInSimSpace                                  OFFSET(get<bool>, {0x28C, 1, 1, 2})
	DMember(bool)                                      bLinearSpring                                               OFFSET(get<bool>, {0x28C, 1, 1, 3})
	DMember(bool)                                      bAngularSpring                                              OFFSET(get<bool>, {0x28C, 1, 1, 4})
	DMember(bool)                                      bChain                                                      OFFSET(get<bool>, {0x28C, 1, 1, 5})
	SMember(FRotationRetargetingInfo)                  RetargetingSettings                                         OFFSET(getStruct<T>, {0x290, 416, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AngularRangeLimit
/// Size: 0x0040 (0x000000 - 0x000040)
class FAngularRangeLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   LimitMin                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LimitMax                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x30, 12, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ApplyLimits
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
class FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FAngularRangeLimit>)                AngularRangeLimits                                          OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FVector>)                           AngularOffsets                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_BoneDrivenController
/// Size: 0x0058 (0x0000C8 - 0x000120)
class FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	CMember(UCurveFloat*)                              DrivingCurve                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     Multiplier                                                  OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(double)                                    RangeMin                                                    OFFSET(get<double>, {0xE8, 8, 0, 0})
	DMember(double)                                    RangeMax                                                    OFFSET(get<double>, {0xF0, 8, 0, 0})
	DMember(double)                                    RemappedMin                                                 OFFSET(get<double>, {0xF8, 8, 0, 0})
	DMember(double)                                    RemappedMax                                                 OFFSET(get<double>, {0x100, 8, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	CMember(EDrivenDestinationMode)                    DestinationMode                                             OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EDrivenBoneModificationMode)               ModificationMode                                            OFFSET(get<T>, {0x119, 1, 0, 0})
	CMember(TEnumAsByte<EComponentType>)               SourceComponent                                             OFFSET(get<T>, {0x11A, 1, 0, 0})
	DMember(bool)                                      bUseRange                                                   OFFSET(get<bool>, {0x11B, 1, 1, 0})
	DMember(bool)                                      bAffectTargetTranslationX                                   OFFSET(get<bool>, {0x11B, 1, 1, 1})
	DMember(bool)                                      bAffectTargetTranslationY                                   OFFSET(get<bool>, {0x11B, 1, 1, 2})
	DMember(bool)                                      bAffectTargetTranslationZ                                   OFFSET(get<bool>, {0x11B, 1, 1, 3})
	DMember(bool)                                      bAffectTargetRotationX                                      OFFSET(get<bool>, {0x11B, 1, 1, 4})
	DMember(bool)                                      bAffectTargetRotationY                                      OFFSET(get<bool>, {0x11B, 1, 1, 5})
	DMember(bool)                                      bAffectTargetRotationZ                                      OFFSET(get<bool>, {0x11B, 1, 1, 6})
	DMember(bool)                                      bAffectTargetScaleX                                         OFFSET(get<bool>, {0x11B, 1, 1, 7})
	DMember(bool)                                      bAffectTargetScaleY                                         OFFSET(get<bool>, {0x11C, 1, 1, 0})
	DMember(bool)                                      bAffectTargetScaleZ                                         OFFSET(get<bool>, {0x11C, 1, 1, 1})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CCDIK
/// Size: 0x00E8 (0x0000C8 - 0x0001B0)
class FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FVector)                                   EffectorLocation                                            OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorLocationSpace                                       OFFSET(get<T>, {0xE0, 1, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0xF0, 128, 0, 0})
	SMember(FBoneReference)                            TipBone                                                     OFFSET(getStruct<T>, {0x170, 12, 0, 0})
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bEnableRotationLimit                                        OFFSET(get<bool>, {0x191, 1, 0, 0})
	CMember(TArray<float>)                             RotationLimitPerJoints                                      OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.Constraint
/// Size: 0x0018 (0x000000 - 0x000018)
class FConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(EConstraintOffsetOption)                   OffsetOption                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(ETransformConstraintType)                  TransformType                                               OFFSET(get<T>, {0xD, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      PerAxis                                                     OFFSET(getStruct<T>, {0xE, 3, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Constraint
/// Size: 0x0040 (0x0000C8 - 0x000108)
class FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	CMember(TArray<FConstraint>)                       ConstraintSetup                                             OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<float>)                             ConstraintWeights                                           OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBone
/// Size: 0x0020 (0x0000C8 - 0x0000E8)
class FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0xE2, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            ControlSpace                                                OFFSET(get<T>, {0xE3, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_CopyBoneDelta
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
class FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FBoneReference)                            SourceBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            TargetBone                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	DMember(bool)                                      bCopyTranslation                                            OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bCopyRotation                                               OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bCopyScale                                                  OFFSET(get<bool>, {0xE2, 1, 0, 0})
	CMember(CopyBoneDeltaMode)                         CopyMode                                                    OFFSET(get<T>, {0xE3, 1, 0, 0})
	DMember(float)                                     TranslationMultiplier                                       OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     RotationMultiplier                                          OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     ScaleMultiplier                                             OFFSET(get<float>, {0xEC, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Fabrik
/// Size: 0x0118 (0x0000C8 - 0x0001E0)
class FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0x130, 128, 0, 0})
	SMember(FBoneReference)                            TipBone                                                     OFFSET(getStruct<T>, {0x1B0, 12, 0, 0})
	SMember(FBoneReference)                            RootBone                                                    OFFSET(getStruct<T>, {0x1BC, 12, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x1CC, 4, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorTransformSpace                                      OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(TEnumAsByte<EBoneRotationSource>)          EffectorRotationSource                                      OFFSET(get<T>, {0x1D1, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
/// Size: 0x0048 (0x0000C8 - 0x000110)
class FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FBoneReference)                            RightHandFK                                                 OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            LeftHandFK                                                  OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	SMember(FBoneReference)                            RightHandIK                                                 OFFSET(getStruct<T>, {0xE0, 12, 0, 0})
	SMember(FBoneReference)                            LeftHandIK                                                  OFFSET(getStruct<T>, {0xEC, 12, 0, 0})
	CMember(TArray<FBoneReference>)                    IKBonesToMove                                               OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(float)                                     HandFKWeight                                                OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.IKChainLink
/// Size: 0x0070 (0x000000 - 0x000070)
class FIKChainLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/AnimGraphRuntime.IKChain
/// Size: 0x0050 (0x000000 - 0x000050)
class FIKChain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FAnimLegIKDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FBoneReference)                            IKFootBone                                                  OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FBoneReference)                            FKFootBone                                                  OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(int32_t)                                   NumBonesInLimb                                              OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     MinRotationAngle                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        FootBoneForwardAxis                                         OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        HingeRotationAxis                                           OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(bool)                                      bEnableRotationLimit                                        OFFSET(get<bool>, {0x22, 1, 0, 0})
	DMember(bool)                                      bEnableKneeTwistCorrection                                  OFFSET(get<bool>, {0x23, 1, 0, 0})
	SMember(FName)                                     TwistOffsetCurveName                                        OFFSET(getStruct<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimLegIKData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FAnimLegIKData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LegIK
/// Size: 0x0030 (0x0000C8 - 0x0000F8)
class FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(float)                                     ReachPrecision                                              OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	CMember(TArray<FAnimLegIKDefinition>)              LegsDefinition                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_LookAt
/// Size: 0x0178 (0x0000C8 - 0x000240)
class FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FBoneReference)                            BoneToModify                                                OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneSocketTarget)                         LookAtTarget                                                OFFSET(getStruct<T>, {0xE0, 128, 0, 0})
	SMember(FVector)                                   LookAtLocation                                              OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FAxis)                                     LookAt_Axis                                                 OFFSET(getStruct<T>, {0x178, 32, 0, 0})
	DMember(bool)                                      bUseLookUpAxis                                              OFFSET(get<bool>, {0x198, 1, 0, 0})
	CMember(TEnumAsByte<EInterpolationBlend>)          InterpolationType                                           OFFSET(get<T>, {0x199, 1, 0, 0})
	SMember(FAxis)                                     LookUp_Axis                                                 OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	DMember(float)                                     LookAtClamp                                                 OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     InterpolationTriggerThreashold                              OFFSET(get<float>, {0x1C8, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ObserveBone
/// Size: 0x0058 (0x0000C8 - 0x000120)
class FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FBoneReference)                            BoneToObserve                                               OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            DisplaySpace                                                OFFSET(get<T>, {0xD4, 1, 0, 0})
	DMember(bool)                                      bRelativeToRefPose                                          OFFSET(get<bool>, {0xD5, 1, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x108, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ResetRoot
/// Size: 0x0010 (0x0000C8 - 0x0000D8)
class FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Struct /Script/AnimGraphRuntime.SimSpaceSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FSimSpaceSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     WorldAlpha                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     VelocityScaleZ                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxLinearVelocity                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxAngularVelocity                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxLinearAcceleration                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxAngularAcceleration                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FVector)                                   ExternalLinearDragV                                         OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   ExternalLinearVelocity                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   ExternalAngularVelocity                                     OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_RigidBody
/// Size: 0x0888 (0x0000C8 - 0x000950)
class FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2384;

public:
	CMember(UPhysicsAsset*)                            OverridePhysicsAsset                                        OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FVector)                                   OverrideWorldGravity                                        OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   ExternalForce                                               OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearAccScale                                     OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	SMember(FVector)                                   ComponentLinearVelScale                                     OFFSET(getStruct<T>, {0x240, 24, 0, 0})
	SMember(FVector)                                   ComponentAppliedLinearAccClamp                              OFFSET(getStruct<T>, {0x258, 24, 0, 0})
	SMember(FSimSpaceSettings)                         SimSpaceSettings                                            OFFSET(getStruct<T>, {0x270, 96, 0, 0})
	DMember(float)                                     CachedBoundsScale                                           OFFSET(get<float>, {0x2D0, 4, 0, 0})
	SMember(FBoneReference)                            BaseBoneRef                                                 OFFSET(getStruct<T>, {0x2D4, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x2E0, 1, 0, 0})
	CMember(ESimulationSpace)                          SimulationSpace                                             OFFSET(get<T>, {0x2E1, 1, 0, 0})
	DMember(bool)                                      bForceDisableCollisionBetweenConstraintBodies               OFFSET(get<bool>, {0x2E2, 1, 0, 0})
	DMember(bool)                                      bUseExternalClothCollision                                  OFFSET(get<bool>, {0x2E3, 1, 0, 0})
	DMember(bool)                                      bEnableWorldGeometry                                        OFFSET(get<bool>, {0x2E5, 1, 1, 0})
	DMember(bool)                                      bOverrideWorldGravity                                       OFFSET(get<bool>, {0x2E5, 1, 1, 1})
	DMember(bool)                                      bTransferBoneVelocities                                     OFFSET(get<bool>, {0x2E5, 1, 1, 2})
	DMember(bool)                                      bFreezeIncomingPoseOnStart                                  OFFSET(get<bool>, {0x2E5, 1, 1, 3})
	DMember(bool)                                      bClampLinearTranslationLimitToRefPose                       OFFSET(get<bool>, {0x2E5, 1, 1, 4})
	DMember(float)                                     WorldSpaceMinimumScale                                      OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     EvaluationResetTime                                         OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(ESimulationTiming)                         SimulationTiming                                            OFFSET(get<T>, {0x2F1, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_ScaleChainLength
/// Size: 0x0070 (0x000010 - 0x000080)
class FAnimNode_ScaleChainLength : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     DefaultChainLength                                          OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FBoneReference)                            ChainStartBone                                              OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FBoneReference)                            ChainEndBone                                                OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	CMember(EScaleChainInitialLength)                  ChainInitialLength                                          OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.SplineIKCachedBoneData
/// Size: 0x0010 (0x000000 - 0x000010)
class FSplineIKCachedBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   RefSkeletonIndex                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SplineIK
/// Size: 0x01A0 (0x0000C8 - 0x000268)
class FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FBoneReference)                            StartBone                                                   OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	SMember(FBoneReference)                            EndBone                                                     OFFSET(getStruct<T>, {0xD4, 12, 0, 0})
	CMember(ESplineBoneAxis)                           BoneAxis                                                    OFFSET(get<T>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bAutoCalculateSpline                                        OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(int32_t)                                   PointCount                                                  OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	CMember(TArray<FTransform>)                        ControlPoints                                               OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     Roll                                                        OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     TwistStart                                                  OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     TwistEnd                                                    OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FAlphaBlend)                               TwistBlend                                                  OFFSET(getStruct<T>, {0x108, 48, 0, 0})
	DMember(float)                                     Stretch                                                     OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x13C, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_SpringBone
/// Size: 0x00A0 (0x0000C8 - 0x000168)
class FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FBoneReference)                            SpringBone                                                  OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(double)                                    MaxDisplacement                                             OFFSET(get<double>, {0xD8, 8, 0, 0})
	DMember(double)                                    SpringStiffness                                             OFFSET(get<double>, {0xE0, 8, 0, 0})
	DMember(double)                                    SpringDamping                                               OFFSET(get<double>, {0xE8, 8, 0, 0})
	DMember(double)                                    ErrorResetThresh                                            OFFSET(get<double>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bLimitDisplacement                                          OFFSET(get<bool>, {0x164, 1, 1, 0})
	DMember(bool)                                      bTranslateX                                                 OFFSET(get<bool>, {0x164, 1, 1, 1})
	DMember(bool)                                      bTranslateY                                                 OFFSET(get<bool>, {0x164, 1, 1, 2})
	DMember(bool)                                      bTranslateZ                                                 OFFSET(get<bool>, {0x164, 1, 1, 3})
	DMember(bool)                                      bRotateX                                                    OFFSET(get<bool>, {0x164, 1, 1, 4})
	DMember(bool)                                      bRotateY                                                    OFFSET(get<bool>, {0x164, 1, 1, 5})
	DMember(bool)                                      bRotateZ                                                    OFFSET(get<bool>, {0x164, 1, 1, 6})
};

/// Struct /Script/AnimGraphRuntime.RotationLimit
/// Size: 0x0030 (0x000000 - 0x000030)
class FRotationLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   LimitMin                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LimitMax                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_Trail
/// Size: 0x01D8 (0x0000C8 - 0x0002A0)
class FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FBoneReference)                            TrailBone                                                   OFFSET(getStruct<T>, {0x130, 12, 0, 0})
	DMember(int32_t)                                   ChainLength                                                 OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        ChainBoneAxis                                               OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(bool)                                      bInvertChainBoneAxis                                        OFFSET(get<bool>, {0x141, 1, 1, 0})
	DMember(bool)                                      bLimitStretch                                               OFFSET(get<bool>, {0x141, 1, 1, 1})
	DMember(bool)                                      bLimitRotation                                              OFFSET(get<bool>, {0x141, 1, 1, 2})
	DMember(bool)                                      bUsePlanarLimit                                             OFFSET(get<bool>, {0x141, 1, 1, 3})
	DMember(bool)                                      bActorSpaceFakeVel                                          OFFSET(get<bool>, {0x141, 1, 1, 4})
	DMember(bool)                                      bReorientParentToChild                                      OFFSET(get<bool>, {0x141, 1, 1, 5})
	DMember(float)                                     MaxDeltaTime                                                OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     RelaxationSpeedScale                                        OFFSET(get<float>, {0x148, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        TrailRelaxationSpeed                                        OFFSET(getStruct<T>, {0x150, 136, 0, 0})
	SMember(FInputScaleBiasClamp)                      RelaxationSpeedScaleInputProcessor                          OFFSET(getStruct<T>, {0x1D8, 48, 0, 0})
	CMember(TArray<FRotationLimit>)                    RotationLimits                                              OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(TArray<FVector>)                           RotationOffsets                                             OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FAnimPhysPlanarLimit>)              PlanarLimits                                                OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(float)                                     StretchLimit                                                OFFSET(get<float>, {0x238, 4, 0, 0})
	SMember(FVector)                                   FakeVelocity                                                OFFSET(getStruct<T>, {0x240, 24, 0, 0})
	SMember(FBoneReference)                            BaseJoint                                                   OFFSET(getStruct<T>, {0x258, 12, 0, 0})
	DMember(float)                                     LastBoneRotationAnimAlphaBlend                              OFFSET(get<float>, {0x264, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.ReferenceBoneFrame
/// Size: 0x0030 (0x000000 - 0x000030)
class FReferenceBoneFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FBoneReference)                            bone                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FAxis)                                     Axis                                                        OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwistCorrectiveNode
/// Size: 0x0098 (0x0000C8 - 0x000160)
class FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FReferenceBoneFrame)                       BaseFrame                                                   OFFSET(getStruct<T>, {0xC8, 48, 0, 0})
	SMember(FReferenceBoneFrame)                       TwistFrame                                                  OFFSET(getStruct<T>, {0xF8, 48, 0, 0})
	SMember(FAxis)                                     TwistPlaneNormalAxis                                        OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	DMember(float)                                     RangeMax                                                    OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     RemappedMin                                                 OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     RemappedMax                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FName)                                     CurveName                                                   OFFSET(getStruct<T>, {0x154, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.AnimNode_TwoBoneIK
/// Size: 0x0198 (0x0000C8 - 0x000260)
class FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FBoneReference)                            IKBone                                                      OFFSET(getStruct<T>, {0xC8, 12, 0, 0})
	DMember(double)                                    StartStretchRatio                                           OFFSET(get<double>, {0xD8, 8, 0, 0})
	DMember(double)                                    MaxStretchScale                                             OFFSET(get<double>, {0xE0, 8, 0, 0})
	SMember(FVector)                                   EffectorLocation                                            OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FBoneSocketTarget)                         EffectorTarget                                              OFFSET(getStruct<T>, {0x110, 128, 0, 0})
	SMember(FVector)                                   JointTargetLocation                                         OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FBoneSocketTarget)                         JointTarget                                                 OFFSET(getStruct<T>, {0x1B0, 128, 0, 0})
	SMember(FAxis)                                     TwistAxis                                                   OFFSET(getStruct<T>, {0x230, 32, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            EffectorLocationSpace                                       OFFSET(get<T>, {0x250, 1, 0, 0})
	CMember(TEnumAsByte<EBoneControlSpace>)            JointTargetLocationSpace                                    OFFSET(get<T>, {0x251, 1, 0, 0})
	DMember(bool)                                      bAllowStretching                                            OFFSET(get<bool>, {0x252, 1, 1, 0})
	DMember(bool)                                      bTakeRotationFromEffectorSpace                              OFFSET(get<bool>, {0x252, 1, 1, 1})
	DMember(bool)                                      bMaintainEffectorRelRot                                     OFFSET(get<bool>, {0x252, 1, 1, 2})
	DMember(bool)                                      bAllowTwist                                                 OFFSET(get<bool>, {0x252, 1, 1, 3})
};

/// Struct /Script/AnimGraphRuntime.IKFootPelvisPullDownSolver
/// Size: 0x0080 (0x000000 - 0x000080)
class FIKFootPelvisPullDownSolver : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVectorRK4SpringInterpolator)              PelvisAdjustmentInterp                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(double)                                    PelvisAdjustmentInterpAlpha                                 OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    PelvisAdjustmentMaxDistance                                 OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(double)                                    PelvisAdjustmentErrorTolerance                              OFFSET(get<double>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   PelvisAdjustmentMaxIter                                     OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.WarpingVectorValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FWarpingVectorValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EWarpingVectorMode)                        Mode                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.LayeredBoneBlendReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FLayeredBoneBlendReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.LinkedAnimGraphReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FLinkedAnimGraphReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

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
/// Size: 0x0090 (0x000010 - 0x0000A0)
class FRBFTarget : public FRBFEntry
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     ScaleFactor                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bApplyCustomCurve                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRichCurve)                                CustomCurve                                                 OFFSET(getStruct<T>, {0x18, 128, 0, 0})
	CMember(ERBFDistanceMethod)                        DistanceMethod                                              OFFSET(get<T>, {0x98, 1, 0, 0})
	CMember(ERBFFunctionType)                          FunctionType                                                OFFSET(get<T>, {0x99, 1, 0, 0})
};

/// Struct /Script/AnimGraphRuntime.SequenceEvaluatorReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FSequenceEvaluatorReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.SequencePlayerReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FSequencePlayerReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/AnimGraphRuntime.SkeletalControlReference
/// Size: 0x0000 (0x000010 - 0x000010)
class FSkeletalControlReference : public FAnimNodeReference
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
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

/// Enum /Script/AnimGraphRuntime.ERefPoseType
/// Size: 0x03
enum ERefPoseType : uint8_t
{
	EIT_LocalSpace0                                                                  = 0,
	EIT_Additive1                                                                    = 1,
	EIT_MAX2                                                                         = 2
};

/// Enum /Script/AnimGraphRuntime.EEasingFuncType
/// Size: 0x16
enum EEasingFuncType : uint8_t
{
	EEasingFuncType__Linear0                                                         = 0,
	EEasingFuncType__Sinusoidal1                                                     = 1,
	EEasingFuncType__Cubic2                                                          = 2,
	EEasingFuncType__QuadraticInOut3                                                 = 3,
	EEasingFuncType__CubicInOut4                                                     = 4,
	EEasingFuncType__HermiteCubic5                                                   = 5,
	EEasingFuncType__QuarticInOut6                                                   = 6,
	EEasingFuncType__QuinticInOut7                                                   = 7,
	EEasingFuncType__CircularIn8                                                     = 8,
	EEasingFuncType__CircularOut9                                                    = 9,
	EEasingFuncType__CircularInOut10                                                 = 10,
	EEasingFuncType__ExpIn11                                                         = 11,
	EEasingFuncType__ExpOut12                                                        = 12,
	EEasingFuncType__ExpInOut13                                                      = 13,
	EEasingFuncType__CustomCurve14                                                   = 14,
	EEasingFuncType__EEasingFuncType_MAX15                                           = 15
};

/// Enum /Script/AnimGraphRuntime.ERotationComponent
/// Size: 0x07
enum ERotationComponent : uint8_t
{
	ERotationComponent__EulerX0                                                      = 0,
	ERotationComponent__EulerY1                                                      = 1,
	ERotationComponent__EulerZ2                                                      = 2,
	ERotationComponent__QuaternionAngle3                                             = 3,
	ERotationComponent__SwingAngle4                                                  = 4,
	ERotationComponent__TwistAngle5                                                  = 5,
	ERotationComponent__ERotationComponent_MAX6                                      = 6
};

/// Enum /Script/AnimGraphRuntime.EBlendListTransitionType
/// Size: 0x03
enum EBlendListTransitionType : uint8_t
{
	EBlendListTransitionType__StandardBlend0                                         = 0,
	EBlendListTransitionType__Inertialization1                                       = 1,
	EBlendListTransitionType__EBlendListTransitionType_MAX2                          = 2
};

/// Enum /Script/AnimGraphRuntime.EAnimFunctionCallSite
/// Size: 0x13
enum EAnimFunctionCallSite : uint8_t
{
	EAnimFunctionCallSite__OnInitialize0                                             = 0,
	EAnimFunctionCallSite__OnUpdate1                                                 = 1,
	EAnimFunctionCallSite__OnBecomeRelevant2                                         = 2,
	EAnimFunctionCallSite__OnEvaluate3                                               = 3,
	EAnimFunctionCallSite__OnInitializePostRecursion4                                = 4,
	EAnimFunctionCallSite__OnUpdatePostRecursion5                                    = 5,
	EAnimFunctionCallSite__OnBecomeRelevantPostRecursion6                            = 6,
	EAnimFunctionCallSite__OnEvaluatePostRecursion7                                  = 7,
	EAnimFunctionCallSite__OnStartedBlendingOut8                                     = 8,
	EAnimFunctionCallSite__OnStartedBlendingIn9                                      = 9,
	EAnimFunctionCallSite__OnFinishedBlendingOut10                                   = 10,
	EAnimFunctionCallSite__OnFinishedBlendingIn11                                    = 11,
	EAnimFunctionCallSite__EAnimFunctionCallSite_MAX12                               = 12
};

/// Enum /Script/AnimGraphRuntime.ELayeredBoneBlendMode
/// Size: 0x03
enum ELayeredBoneBlendMode : uint8_t
{
	ELayeredBoneBlendMode__BranchFilter0                                             = 0,
	ELayeredBoneBlendMode__BlendMask1                                                = 1,
	ELayeredBoneBlendMode__ELayeredBoneBlendMode_MAX2                                = 2
};

/// Enum /Script/AnimGraphRuntime.EModifyCurveApplyMode
/// Size: 0x06
enum EModifyCurveApplyMode : uint8_t
{
	EModifyCurveApplyMode__Add0                                                      = 0,
	EModifyCurveApplyMode__Scale1                                                    = 1,
	EModifyCurveApplyMode__Blend2                                                    = 2,
	EModifyCurveApplyMode__WeightedMovingAverage3                                    = 3,
	EModifyCurveApplyMode__RemapCurve4                                               = 4,
	EModifyCurveApplyMode__EModifyCurveApplyMode_MAX5                                = 5
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

/// Enum /Script/AnimGraphRuntime.EPoseDriverSource
/// Size: 0x03
enum EPoseDriverSource : uint8_t
{
	EPoseDriverSource__Rotation0                                                     = 0,
	EPoseDriverSource__Translation1                                                  = 1,
	EPoseDriverSource__EPoseDriverSource_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.EPoseDriverOutput
/// Size: 0x03
enum EPoseDriverOutput : uint8_t
{
	EPoseDriverOutput__DrivePoses0                                                   = 0,
	EPoseDriverOutput__DriveCurves1                                                  = 1,
	EPoseDriverOutput__EPoseDriverOutput_MAX2                                        = 2
};

/// Enum /Script/AnimGraphRuntime.ESnapshotSourceMode
/// Size: 0x03
enum ESnapshotSourceMode : uint8_t
{
	ESnapshotSourceMode__NamedSnapshot0                                              = 0,
	ESnapshotSourceMode__SnapshotPin1                                                = 1,
	ESnapshotSourceMode__ESnapshotSourceMode_MAX2                                    = 2
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

/// Enum /Script/AnimGraphRuntime.ESwapRootBone
/// Size: 0x04
enum ESwapRootBone : uint8_t
{
	ESwapRootBone__SwapRootBone_Component0                                           = 0,
	ESwapRootBone__SwapRootBone_Actor1                                               = 1,
	ESwapRootBone__SwapRootBone_None2                                                = 2,
	ESwapRootBone__SwapRootBone_MAX3                                                 = 3
};

/// Enum /Script/AnimGraphRuntime.AnimPhysAngularConstraintType
/// Size: 0x03
enum AnimPhysAngularConstraintType : uint8_t
{
	AnimPhysAngularConstraintType__Angular0                                          = 0,
	AnimPhysAngularConstraintType__Cone1                                             = 1,
	AnimPhysAngularConstraintType__AnimPhysAngularConstraintType_MAX2                = 2
};

/// Enum /Script/AnimGraphRuntime.AnimPhysLinearConstraintType
/// Size: 0x03
enum AnimPhysLinearConstraintType : uint8_t
{
	AnimPhysLinearConstraintType__Free0                                              = 0,
	AnimPhysLinearConstraintType__Limited1                                           = 1,
	AnimPhysLinearConstraintType__AnimPhysLinearConstraintType_MAX2                  = 2
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

/// Enum /Script/AnimGraphRuntime.ESphericalLimitType
/// Size: 0x03
enum ESphericalLimitType : uint8_t
{
	ESphericalLimitType__Inner0                                                      = 0,
	ESphericalLimitType__Outer1                                                      = 1,
	ESphericalLimitType__ESphericalLimitType_MAX2                                    = 2
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

/// Enum /Script/AnimGraphRuntime.EDrivenDestinationMode
/// Size: 0x04
enum EDrivenDestinationMode : uint8_t
{
	EDrivenDestinationMode__Bone0                                                    = 0,
	EDrivenDestinationMode__MorphTarget1                                             = 1,
	EDrivenDestinationMode__MaterialParameter2                                       = 2,
	EDrivenDestinationMode__EDrivenDestinationMode_MAX3                              = 3
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

/// Enum /Script/AnimGraphRuntime.ESimulationSpace
/// Size: 0x04
enum ESimulationSpace : uint8_t
{
	ESimulationSpace__ComponentSpace0                                                = 0,
	ESimulationSpace__WorldSpace1                                                    = 1,
	ESimulationSpace__BaseBoneSpace2                                                 = 2,
	ESimulationSpace__ESimulationSpace_MAX3                                          = 3
};

/// Enum /Script/AnimGraphRuntime.ESimulationTiming
/// Size: 0x04
enum ESimulationTiming : uint8_t
{
	ESimulationTiming__Default0                                                      = 0,
	ESimulationTiming__Synchronous1                                                  = 1,
	ESimulationTiming__Deferred2                                                     = 2,
	ESimulationTiming__ESimulationTiming_MAX3                                        = 3
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

/// Enum /Script/AnimGraphRuntime.ESplineBoneAxis
/// Size: 0x05
enum ESplineBoneAxis : uint8_t
{
	ESplineBoneAxis__None0                                                           = 0,
	ESplineBoneAxis__X1                                                              = 1,
	ESplineBoneAxis__Y2                                                              = 2,
	ESplineBoneAxis__Z3                                                              = 3,
	ESplineBoneAxis__ESplineBoneAxis_MAX4                                            = 4
};

/// Enum /Script/AnimGraphRuntime.EWarpingEvaluationMode
/// Size: 0x03
enum EWarpingEvaluationMode : uint8_t
{
	EWarpingEvaluationMode__Manual0                                                  = 0,
	EWarpingEvaluationMode__Graph1                                                   = 1,
	EWarpingEvaluationMode__EWarpingEvaluationMode_MAX2                              = 2
};

/// Enum /Script/AnimGraphRuntime.EWarpingVectorMode
/// Size: 0x05
enum EWarpingVectorMode : uint8_t
{
	EWarpingVectorMode__ComponentSpaceVector0                                        = 0,
	EWarpingVectorMode__ActorSpaceVector1                                            = 1,
	EWarpingVectorMode__WorldSpaceVector2                                            = 2,
	EWarpingVectorMode__IKFootRootLocalSpaceVector3                                  = 3,
	EWarpingVectorMode__EWarpingVectorMode_MAX4                                      = 4
};

/// Enum /Script/AnimGraphRuntime.ERBFSolverType
/// Size: 0x03
enum ERBFSolverType : uint8_t
{
	ERBFSolverType__Additive0                                                        = 0,
	ERBFSolverType__Interpolative1                                                   = 1,
	ERBFSolverType__ERBFSolverType_MAX2                                              = 2
};

/// Enum /Script/AnimGraphRuntime.ERBFFunctionType
/// Size: 0x07
enum ERBFFunctionType : uint8_t
{
	ERBFFunctionType__Gaussian0                                                      = 0,
	ERBFFunctionType__Exponential1                                                   = 1,
	ERBFFunctionType__Linear2                                                        = 2,
	ERBFFunctionType__Cubic3                                                         = 3,
	ERBFFunctionType__Quintic4                                                       = 4,
	ERBFFunctionType__DefaultFunction5                                               = 5,
	ERBFFunctionType__ERBFFunctionType_MAX6                                          = 6
};

/// Enum /Script/AnimGraphRuntime.ERBFDistanceMethod
/// Size: 0x06
enum ERBFDistanceMethod : uint8_t
{
	ERBFDistanceMethod__Euclidean0                                                   = 0,
	ERBFDistanceMethod__Quaternion1                                                  = 1,
	ERBFDistanceMethod__SwingAngle2                                                  = 2,
	ERBFDistanceMethod__TwistAngle3                                                  = 3,
	ERBFDistanceMethod__DefaultMethod4                                               = 4,
	ERBFDistanceMethod__ERBFDistanceMethod_MAX5                                      = 5
};

/// Enum /Script/AnimGraphRuntime.ERBFNormalizeMethod
/// Size: 0x05
enum ERBFNormalizeMethod : uint8_t
{
	ERBFNormalizeMethod__OnlyNormalizeAboveOne0                                      = 0,
	ERBFNormalizeMethod__AlwaysNormalize1                                            = 1,
	ERBFNormalizeMethod__NormalizeWithinMedian2                                      = 2,
	ERBFNormalizeMethod__NoNormalization3                                            = 3,
	ERBFNormalizeMethod__ERBFNormalizeMethod_MAX4                                    = 4
};

