
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MotionWarping.AnimNotifyState_MotionWarping
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotifyState_MotionWarping : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(URootMotionModifier*)                      RootMotionModifier                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MotionWarping.MotionWarpingUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MotionWarping.MotionWarpingComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UMotionWarpingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bSearchForWindowsInAnimsWithinMontages                      ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreUpdate                                                 ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TWeakObjectPtr<ACharacter*>)               CharacterOwner                                              ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<URootMotionModifier*>)              Modifiers                                                   ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FMotionWarpingTarget>)              WarpTargets                                                 ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class URootMotionModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<UAnimSequenceBase*>)        Animation                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EndTime                                                     ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PreviousPosition                                            ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     CurrentPosition                                             ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FTransform)                                StartTransform                                              ___ OFFSET(get<T>, {0x50, 96, 0, 0})
	DMember(float)                                     ActualStartTime                                             ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FDelegateProperty)                         OnActivateDelegate                                          ___ OFFSET(get<T>, {0xB4, 12, 0, 0})
	SMember(FDelegateProperty)                         OnUpdateDelegate                                            ___ OFFSET(get<T>, {0xC0, 12, 0, 0})
	SMember(FDelegateProperty)                         OnDeactivateDelegate                                        ___ OFFSET(get<T>, {0xCC, 12, 0, 0})
	CMember(ERootMotionModifierState)                  State                                                       ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_Warp
/// Size: 0x0160 (0x0000E0 - 0x000240)
class URootMotionModifier_Warp : public URootMotionModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FName)                                     WarpTargetName                                              ___ OFFSET(get<T>, {0xE0, 4, 0, 0})
	CMember(EWarpPointAnimProvider)                    WarpPointAnimProvider                                       ___ OFFSET(get<T>, {0xE4, 1, 0, 0})
	SMember(FTransform)                                WarpPointAnimTransform                                      ___ OFFSET(get<T>, {0xF0, 96, 0, 0})
	SMember(FName)                                     WarpPointAnimBoneName                                       ___ OFFSET(get<T>, {0x150, 4, 0, 0})
	DMember(bool)                                      bWarpTranslation                                            ___ OFFSET(get<bool>, {0x154, 1, 0, 0})
	DMember(bool)                                      bIgnoreZAxis                                                ___ OFFSET(get<bool>, {0x155, 1, 0, 0})
	CMember(EAlphaBlendOption)                         AddTranslationEasingFunc                                    ___ OFFSET(get<T>, {0x156, 1, 0, 0})
	CMember(UCurveFloat*)                              AddTranslationEasingCurve                                   ___ OFFSET(get<T>, {0x158, 8, 0, 0})
	DMember(bool)                                      bWarpRotation                                               ___ OFFSET(get<bool>, {0x160, 1, 0, 0})
	CMember(EMotionWarpRotationType)                   RotationType                                                ___ OFFSET(get<T>, {0x161, 1, 0, 0})
	CMember(EMotionWarpRotationMethod)                 RotationMethod                                              ___ OFFSET(get<T>, {0x162, 1, 0, 0})
	DMember(float)                                     WarpRotationTimeMultiplier                                  ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     WarpMaxRotationRate                                         ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FTransform)                                CachedTargetTransform                                       ___ OFFSET(get<T>, {0x170, 96, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_SimpleWarp
/// Size: 0x0000 (0x000240 - 0x000240)
class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Script/MotionWarping.RootMotionModifier_Scale
/// Size: 0x0020 (0x0000E0 - 0x000100)
class URootMotionModifier_Scale : public URootMotionModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0xE0, 24, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_AdjustmentBlendWarp
/// Size: 0x0160 (0x000240 - 0x0003A0)
class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(bool)                                      bWarpIKBones                                                ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	CMember(TArray<FName>)                             IKBones                                                     ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	SMember(FTransform)                                CachedMeshTransform                                         ___ OFFSET(get<T>, {0x260, 96, 0, 0})
	SMember(FTransform)                                CachedMeshRelativeTransform                                 ___ OFFSET(get<T>, {0x2C0, 96, 0, 0})
	SMember(FTransform)                                CachedRootMotion                                            ___ OFFSET(get<T>, {0x320, 96, 0, 0})
	SMember(FAnimSequenceTrackContainer)               Result                                                      ___ OFFSET(get<T>, {0x380, 32, 0, 0})
};

/// Class /Script/MotionWarping.RootMotionModifier_SkewWarp
/// Size: 0x0000 (0x000240 - 0x000240)
class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Struct /Script/MotionWarping.MotionWarpingWindowData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMotionWarpingWindowData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UAnimNotifyState_MotionWarping*)           AnimNotify                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndTime                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/MotionWarping.MotionWarpingUpdateContext
/// Size: 0x001C (0x000000 - 0x00001C)
class FMotionWarpingUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<UAnimSequenceBase*>)        Animation                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PreviousPosition                                            ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentPosition                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     DeltaSeconds                                                ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MotionWarping.MotionWarpingTarget
/// Size: 0x0048 (0x000000 - 0x000048)
class FMotionWarpingTarget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     BoneName                                                    ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bFollowComponent                                            ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
};

/// Struct /Script/MotionWarping.MotionDeltaTrack
/// Size: 0x0060 (0x000000 - 0x000060)
class FMotionDeltaTrack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FTransform>)                        BoneTransformTrack                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           DeltaTranslationTrack                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRotator>)                          DeltaRotationTrack                                          ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector)                                   TotalTranslation                                            ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FRotator)                                  TotalRotation                                               ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/MotionWarping.MotionDeltaTrackContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FMotionDeltaTrackContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMotionDeltaTrack>)                 Tracks                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/MotionWarping.ERootMotionModifierState
/// Size: 0x05
enum ERootMotionModifierState : uint8_t
{
	ERootMotionModifierState__Waiting0                                               = 0,
	ERootMotionModifierState__Active1                                                = 1,
	ERootMotionModifierState__MarkedForRemoval2                                      = 2,
	ERootMotionModifierState__Disabled3                                              = 3,
	ERootMotionModifierState__ERootMotionModifierState_MAX4                          = 4
};

/// Enum /Script/MotionWarping.EMotionWarpRotationType
/// Size: 0x03
enum EMotionWarpRotationType : uint8_t
{
	EMotionWarpRotationType__Default0                                                = 0,
	EMotionWarpRotationType__Facing1                                                 = 1,
	EMotionWarpRotationType__EMotionWarpRotationType_MAX2                            = 2
};

/// Enum /Script/MotionWarping.EMotionWarpRotationMethod
/// Size: 0x04
enum EMotionWarpRotationMethod : uint8_t
{
	EMotionWarpRotationMethod__Slerp0                                                = 0,
	EMotionWarpRotationMethod__SlerpWithClampedRate1                                 = 1,
	EMotionWarpRotationMethod__ConstantRate2                                         = 2,
	EMotionWarpRotationMethod__EMotionWarpRotationMethod_MAX3                        = 3
};

/// Enum /Script/MotionWarping.EWarpPointAnimProvider
/// Size: 0x04
enum EWarpPointAnimProvider : uint8_t
{
	EWarpPointAnimProvider__None0                                                    = 0,
	EWarpPointAnimProvider__Static1                                                  = 1,
	EWarpPointAnimProvider__Bone2                                                    = 2,
	EWarpPointAnimProvider__EWarpPointAnimProvider_MAX3                              = 3
};

