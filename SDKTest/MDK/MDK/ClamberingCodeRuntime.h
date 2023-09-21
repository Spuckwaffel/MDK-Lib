
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/ClamberingCodeRuntime.ClamberingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClamberingCodeRuntime.ClamberingComponent
/// Size: 0x0B18 (0x0000A8 - 0x000BC0)
class UClamberingComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	CMember(EClamberingState)                          LocalClamberingState                                        ___ OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(EClamberingState)                          ReplicatedClamberingState                                   ___ OFFSET(get<T>, {0xB1, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LockedTargetingData                                         ___ OFFSET(get<T>, {0xB8, 208, 0, 0})
	SMember(FReplicatedClamberingTargetingData_SimClient) ReplicatedTargetingData                                  ___ OFFSET(get<T>, {0x188, 56, 0, 0})
	SMember(FScalableFloat)                            ClamberingEnabled                                           ___ OFFSET(get<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberIndicatorEnabled                                     ___ OFFSET(get<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberStartMaxFallingDamageFraction                        ___ OFFSET(get<T>, {0x218, 40, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileWalking                               ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileSwimming                              ___ OFFSET(get<bool>, {0x241, 1, 0, 0})
	SMember(FScalableFloat)                            ServerFailDelay                                             ___ OFFSET(get<T>, {0x248, 40, 0, 0})
	SMember(FScalableFloat)                            ServerValidatePlayerMaxDistance                             ___ OFFSET(get<T>, {0x270, 40, 0, 0})
	SMember(FClamberingInputConfig)                    InputConfig                                                 ___ OFFSET(get<T>, {0x298, 528, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge)          TargetingConfig_Ledge                                       ___ OFFSET(get<T>, {0x4A8, 888, 0, 0})
	SMember(FClamberingInputConfig_CachedValues)       InputConfigCachedValues                                     ___ OFFSET(get<T>, {0x820, 56, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge_CachedContextualValues) TargetingConfig_Ledge_CachedContextualValues  ___ OFFSET(get<T>, {0x858, 96, 0, 0})
	SMember(FClamberingMovementConfig_Ledge)           MoveConfig_Ledge                                            ___ OFFSET(get<T>, {0x8B8, 80, 0, 0})
	SMember(FScalableFloat)                            ClamberSyncTargetLedgeOffset                                ___ OFFSET(get<T>, {0x908, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberingMaxAnalyticsEvents                                ___ OFFSET(get<T>, {0x930, 40, 0, 0})
	SMember(FScalableFloat)                            SynchedActionFailDelay                                      ___ OFFSET(get<T>, {0x958, 40, 0, 0})
	CMember(UDataTable*)                               ClamberingAnimations                                        ___ OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UDataTable*)                               PrototypeClamberingAnimations                               ___ OFFSET(get<T>, {0x988, 8, 0, 0})
	DMember(double)                                    LastTeleportTime                                            ___ OFFSET(get<double>, {0x990, 8, 0, 0})
	DMember(bool)                                      bTutorialModeEnabled                                        ___ OFFSET(get<bool>, {0x998, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LocalTargetingData                                          ___ OFFSET(get<T>, {0x9A0, 208, 0, 0})
	SMember(FClamberingTargetingData)                  ParallelTargetingData                                       ___ OFFSET(get<T>, {0xA70, 208, 0, 0})
	DMember(float)                                     QueuedInputTimer                                            ___ OFFSET(get<float>, {0xB40, 4, 0, 0})
	DMember(float)                                     InputEnabledTimer                                           ___ OFFSET(get<float>, {0xB44, 4, 0, 0})
	DMember(bool)                                      bJumpInputPressed                                           ___ OFFSET(get<bool>, {0xB48, 1, 0, 0})
	DMember(float)                                     JumpHeldInAirTime                                           ___ OFFSET(get<float>, {0xB4C, 4, 0, 0})
	SMember(FGameplayTag)                              Tag_DisableClambering                                       ___ OFFSET(get<T>, {0xBB8, 4, 0, 0})
};

/// Class /Script/ClamberingCodeRuntime.ClamberingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig
/// Size: 0x0210 (0x000000 - 0x000210)
class FClamberingInputConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FScalableFloat)                            ClamberActivationHorizontalRange                            ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberActivationVerticalRange                              ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            EnableInputDelay                                            ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            QueuedInputWindow                                           ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HeldInputDuration                                           ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	CMember(EClamberingActivationMode)                 ActivationMode                                              ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FScalableFloat)                            AutoStartMovementThreshold                                  ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartLookAtThreshold                                    ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckCastRadius                                ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckHorizontalRange                           ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckLookAtThresholdMultiplier                 ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            TargetInvalidateDistance                                    ___ OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            TargetAimInvalidateAngle                                    ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetActorMovementInvalidateDistance                       ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
/// Size: 0x0378 (0x000000 - 0x000378)
class FClamberingTargetingConfig_Ledge : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FScalableFloat)                            ForwardCastDistance                                         ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastRadius                                           ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            FowardCast2D                                                ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            VerticalSurfaceThreshold                                    ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HorizontalSurfaceThreshold                                  ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardDistanceCapsuleHeightMultiplier                       ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardStartDistanceCapsuleHeightMultiplier                  ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardDistanceCapsuleHeightMultiplier                     ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeight                                          ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeightWater                                     ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            FallingSpeedThreshold                                       ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingHeight                                   ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingWaterHeight                              ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardSphereCastRadius                                     ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSphereCastRadius                                    ___ OFFSET(get<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            AllowNonWalkableSurfaces                                    ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationEnabled                                     ___ OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleRadiusModifier                       ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleHalfHeightModifier                   ___ OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleBottomVerticalOffset                 ___ OFFSET(get<T>, {0x2F8, 40, 0, 0})
	SMember(FFortReleaseVersion)                       ContextualActionPrototypeVersion                            ___ OFFSET(get<T>, {0x320, 4, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeDepth                                           ___ OFFSET(get<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSweepOffset                                         ___ OFFSET(get<T>, {0x350, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
/// Size: 0x0038 (0x000000 - 0x000038)
class FClamberingInputConfig_CachedValues : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
/// Size: 0x0060 (0x000000 - 0x000060)
class FClamberingTargetingConfig_Ledge_CachedContextualValues : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingTargetingDebugDrawData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
/// Size: 0x0028 (0x000028 - 0x000050)
class FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
/// Size: 0x0018 (0x000028 - 0x000040)
class FClamberingTargetingDebugDrawData_Line : public FClamberingTargetingDebugDrawData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
/// Size: 0x0008 (0x000028 - 0x000030)
class FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
/// Size: 0x0020 (0x000028 - 0x000048)
class FClamberingTargetingDebugDrawData_DirectionalArrow : public FClamberingTargetingDebugDrawData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
/// Size: 0x0020 (0x000050 - 0x000070)
class FClamberingTargetingDebugDrawData_CapsuleCast : public FClamberingTargetingDebugDrawData_Capsule
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
/// Size: 0x0018 (0x000030 - 0x000048)
class FClamberingTargetingDebugDrawData_SphereCast : public FClamberingTargetingDebugDrawData_Sphere
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
class FClamberingTargetingDebugData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
/// Size: 0x0000 (0x000001 - 0x000001)
class FClamberingTargetingDebugData_Ledge : public FClamberingTargetingDebugData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingData
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FClamberingTargetingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(EClamberingType)                           Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bCanStandOnLedge                                            ___ OFFSET(get<bool>, {0x1, 1, 1, 1})
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   SourceAim                                                   ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   WallLocation                                                ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   WallNormal                                                  ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   TargetNormal                                                ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UActorComponent*)                          TargetActorComponent                                        ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FVector)                                   TargetActorComponentLocation                                ___ OFFSET(get<T>, {0xB0, 24, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData
/// Size: 0x0078 (0x000000 - 0x000078)
class FReplicatedClamberingTargetingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EClamberingType)                           Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector_NetQuantize10)                     SourceLocation                                              ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantize100)                    WallLocation                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      ___ OFFSET(get<uint16_t>, {0x38, 2, 0, 0})
	DMember(uint16_t)                                  WallNormalPitchQuantized                                    ___ OFFSET(get<uint16_t>, {0x3A, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(uint16_t)                                  TargetNormalYawQuantized                                    ___ OFFSET(get<uint16_t>, {0x58, 2, 0, 0})
	DMember(uint16_t)                                  TargetNormalPitchQuantized                                  ___ OFFSET(get<uint16_t>, {0x5A, 2, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UActorComponent*)                          TargetActorComponent                                        ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	DMember(int8_t)                                    AnimationIndex                                              ___ OFFSET(get<int8_t>, {0x74, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
/// Size: 0x0038 (0x000000 - 0x000038)
class FReplicatedClamberingTargetingData_SimClient : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EClamberingType)                           Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(UActorComponent*)                          TargetActorComponent                                        ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(int8_t)                                    AnimationIndex                                              ___ OFFSET(get<int8_t>, {0x34, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
/// Size: 0x0050 (0x000000 - 0x000050)
class FClamberingMovementConfig_Ledge : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            Duration                                                    ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            BlockCheckTickRate                                          ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingAnalytics_ClamberEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   MatchTime                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EClamberingType)                           ClamberType                                                 ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FVector)                                   ClamberLocation                                             ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(EClamberingFailedReason)                   FailureReason                                               ___ OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnimationEntry
/// Size: 0x0010 (0x000008 - 0x000018)
class FClamberingAnimationEntry : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UAnimMontage*)                             Montage                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     MinClamberHeight                                            ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bLedgeLaunch                                                ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingType
/// Size: 0x04
enum EClamberingType : uint8_t
{
	EClamberingType__Invalid0                                                        = 0,
	EClamberingType__Ledge1                                                          = 1,
	EClamberingType__Window2                                                         = 2,
	EClamberingType__EClamberingType_MAX3                                            = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingState
/// Size: 0x07
enum EClamberingState : uint8_t
{
	EClamberingState__Inactive0                                                      = 0,
	EClamberingState__Targeting1                                                     = 1,
	EClamberingState__Ledge_Moving2                                                  = 2,
	EClamberingState__Ledge_Failed3                                                  = 3,
	EClamberingState__Window_Moving4                                                 = 4,
	EClamberingState__Window_Failed5                                                 = 5,
	EClamberingState__EClamberingState_MAX6                                          = 6
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingFailedReason
/// Size: 0x14
enum EClamberingFailedReason : uint8_t
{
	EClamberingFailedReason__None0                                                   = 0,
	EClamberingFailedReason__Unknown1                                                = 1,
	EClamberingFailedReason__DebugForced2                                            = 2,
	EClamberingFailedReason__OwnerDied3                                              = 3,
	EClamberingFailedReason__OwnerDBNO4                                              = 4,
	EClamberingFailedReason__OwnerLaunched5                                          = 5,
	EClamberingFailedReason__SynchedActionNotStarted6                                = 6,
	EClamberingFailedReason__OwnerTeleported7                                        = 7,
	EClamberingFailedReason__Ledge_PlayerTooFar8                                     = 8,
	EClamberingFailedReason__Ledge_TargetLocationInvalid9                            = 9,
	EClamberingFailedReason__Ledge_TargetActorInvalid10                              = 10,
	EClamberingFailedReason__Ledge_TargetActorDestroyed11                            = 11,
	EClamberingFailedReason__Ledge_BlockerEncountered12                              = 12,
	EClamberingFailedReason__EClamberingFailedReason_MAX13                           = 13
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingActivationMode
/// Size: 0x04
enum EClamberingActivationMode : uint8_t
{
	EClamberingActivationMode__ClientPreference0                                     = 0,
	EClamberingActivationMode__ForceAutoClambering1                                  = 1,
	EClamberingActivationMode__ForceManualClambering2                                = 2,
	EClamberingActivationMode__EClamberingActivationMode_MAX3                        = 3
};

/// Enum /Script/ClamberingCodeRuntime.EClamberingDebugTextAlign
/// Size: 0x04
enum EClamberingDebugTextAlign : uint8_t
{
	EClamberingDebugTextAlign__Left0                                                 = 0,
	EClamberingDebugTextAlign__Right1                                                = 1,
	EClamberingDebugTextAlign__Center2                                               = 2,
	EClamberingDebugTextAlign__EClamberingDebugTextAlign_MAX3                        = 3
};

