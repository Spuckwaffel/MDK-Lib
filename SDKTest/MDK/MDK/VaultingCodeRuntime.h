
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
/// Size: 0x0078 (0x000048 - 0x0000C0)
class UFortMovementMode_ExtLogicHurdle : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     MontageStartSectionName                                     ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	CMember(UClass*)                                   CameraMode                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HurdleTag                                                   ___ OFFSET(get<T>, {0x78, 32, 0, 0})
	SMember(FGameplayTag)                              HurdleStartedTag                                            ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HurdleFinishedTag                                           ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
};

/// Class /Script/VaultingCodeRuntime.HurdleCameraMode
/// Size: 0x0200 (0x001B50 - 0x001D50)
class UHurdleCameraMode : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7504;

public:
	SMember(FVector)                                   StartCameraOriginInterpSpeed                                ___ OFFSET(get<T>, {0x1B50, 24, 0, 0})
	SMember(FVector)                                   ApexCameraOriginInterpSpeed                                 ___ OFFSET(get<T>, {0x1B68, 24, 0, 0})
	SMember(FVector)                                   EndCameraOriginInterpSpeed                                  ___ OFFSET(get<T>, {0x1B80, 24, 0, 0})
	DMember(float)                                     ConstantSpeedCameraTrackInterpolationExponent               ___ OFFSET(get<float>, {0x1B98, 4, 0, 0})
	DMember(float)                                     CameraOriginVerticalThreshold                               ___ OFFSET(get<float>, {0x1B9C, 4, 0, 0})
	DMember(float)                                     FallingVerticalInterpSpeed                                  ___ OFFSET(get<float>, {0x1BA0, 4, 0, 0})
	DMember(float)                                     FallSpeedThreshold                                          ___ OFFSET(get<float>, {0x1BA4, 4, 0, 0})
	DMember(float)                                     NonSprintFOV                                                ___ OFFSET(get<float>, {0x1BA8, 4, 0, 0})
	DMember(bool)                                      bOverrideSpectatorCamera                                    ___ OFFSET(get<bool>, {0x1BAC, 1, 0, 0})
	SMember(FHurdleTargetingData)                      HurdleTargetingData                                         ___ OFFSET(get<T>, {0x1BB0, 304, 0, 0})
};

/// Class /Script/VaultingCodeRuntime.HurdleComponent
/// Size: 0x0938 (0x0000A8 - 0x0009E0)
class UHurdleComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	SMember(FHurdleInputConfig)                        HurdleInputConfig                                           ___ OFFSET(get<T>, {0xB0, 1328, 0, 0})
	SMember(FHurdleInputConfigCache)                   HurdleInputConfigCache                                      ___ OFFSET(get<T>, {0x5E0, 140, 0, 0})
	CMember(UClass*)                                   MovementModeExtension                                       ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FScalableFloat)                            HurdleEnabled                                               ___ OFFSET(get<T>, {0x680, 40, 0, 0})
	SMember(FScalableFloat)                            AutoHurdleEnabled                                           ___ OFFSET(get<T>, {0x6A8, 40, 0, 0})
	SMember(FReplicatedHurdleTargetingData)            ReplayHurdleTargetingData                                   ___ OFFSET(get<T>, {0x808, 112, 0, 0})
	DMember(double)                                    LastTeleportTime                                            ___ OFFSET(get<double>, {0x878, 8, 0, 0})
	SMember(FHurdleTargetingData)                      ParallelTargetingData                                       ___ OFFSET(get<T>, {0x880, 304, 0, 0})
	CMember(EHurdleState)                              ReplicatedHurdleState                                       ___ OFFSET(get<T>, {0x9B1, 1, 0, 0})
};

/// Class /Script/VaultingCodeRuntime.HurdleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHurdleLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData
/// Size: 0x0080 (0x000010 - 0x000090)
class FFortMovementMode_HurdleRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UAnimMontage*)                             HurdleMontage                                               ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     MontageStartSectionName                                     ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     MontageMiddleSectionName                                    ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(EHurdleType)                               Type                                                        ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FSynchedActionWarpPointInfo_Replicated)    SynchedActionWarpPointInfo                                  ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleCreationData
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FFortMovementMode_HurdleCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSynchedActionInfo)                        SynchedActionInfo                                           ___ OFFSET(get<T>, {0x8, 48, 0, 0})
	CMember(EHurdleType)                               Type                                                        ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FSynchedActionWarpPointInfo_Replicated)    SynchedActionWarpPointInfo                                  ___ OFFSET(get<T>, {0x40, 80, 0, 0})
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   RefActor                                                    ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<UActorComponent*>)          RefActorComponent                                           ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     RefActorBoneName                                            ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             ___ OFFSET(get<T>, {0xD4, 1, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfig
/// Size: 0x0530 (0x000000 - 0x000530)
class FHurdleInputConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FScalableFloat)                            CastRadius                                                  ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedFallDistance                                      ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastIndicatorDistance_Phase1                         ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1                                  ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1_HurdleFromJog                    ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1_ManualHurdle                     ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_WallAngleToleranceFlat                               ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_SweepGroundBufferHeight                              ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_SweepGroundMaxHeight                                 ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_Floor_WallOffset                                     ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_Floor_MinHeightForHurlde                             ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            Phase2_UpAngleTolerance                                     ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase2_Floor_MaxHeightForHurlde                             ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_CapsuleOffset                                        ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_ClearanceCapsuleSize                                 ___ OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_ForwardCastDistance                                  ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_MinTopClearanceForHurdleOn                           ___ OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_MaxDownDistance                                      ___ OFFSET(get<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_UpAngleTolerance                                     ___ OFFSET(get<T>, {0x320, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_HurdleOnZTolerance                                   ___ OFFSET(get<T>, {0x348, 40, 0, 0})
	SMember(FScalableFloat)                            Phase5_CapsuleOffset                                        ___ OFFSET(get<T>, {0x370, 40, 0, 0})
	SMember(FScalableFloat)                            Phase5_ClearanceCapsuleSize                                 ___ OFFSET(get<T>, {0x398, 40, 0, 0})
	SMember(FScalableFloat)                            FinalResult_GroundAimOffset                                 ___ OFFSET(get<T>, {0x3C0, 40, 0, 0})
	SMember(FScalableFloat)                            SlideBufferTime                                             ___ OFFSET(get<T>, {0x3E8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumSpeedToHurdle                                        ___ OFFSET(get<T>, {0x410, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumForwardStickDeflection                               ___ OFFSET(get<T>, {0x438, 40, 0, 0})
	SMember(FScalableFloat)                            RangeToIgnoreMinimumSpeedThreshold                          ___ OFFSET(get<T>, {0x460, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumCapsuleRadius                                        ___ OFFSET(get<T>, {0x488, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumCapsuleHalfHeight                                    ___ OFFSET(get<T>, {0x4B0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_HorizontalSweepBreadth                               ___ OFFSET(get<T>, {0x4D8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_HorizontalSweepHeight                                ___ OFFSET(get<T>, {0x500, 40, 0, 0})
	SMember(FFortReleaseVersion)                       ContextualActionPrototypeVersion                            ___ OFFSET(get<T>, {0x528, 4, 0, 0})
	SMember(FFortReleaseVersion)                       MovementModeExtensionVersion                                ___ OFFSET(get<T>, {0x52C, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfigCache
/// Size: 0x008C (0x000000 - 0x00008C)
class FHurdleInputConfigCache : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 140;

public:
	DMember(float)                                     CastRadius                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxAllowedFallDistance                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForwardCastIndicatorDistance_Phase1                         ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1_HurdleFromJog                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1_ManualHurdle                     ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Phase1_WallAngleToleranceFlat                               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Phase1_SweepGroundBufferHeight                              ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Phase1_SweepGroundMaxHeight                                 ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_WallOffset                                     ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_MinHeightForHurlde                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_MaxFloorSearchHeight                           ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Phase2_UpAngleTolerance                                     ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Phase2_Floor_MaxHeightForHurlde                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Phase2_Floor_HeightCorrectionMinFloorAngle                  ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Phase3_CapsuleOffset                                        ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Phase3_ClearanceCapsuleSize                                 ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Phase3_ForwardCastDistance                                  ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Phase3_MinTopClearanceForHurdleOn                           ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Phase4_MaxDownDistance                                      ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     Phase4_UpAngleTolerance                                     ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Phase4_HurdleOnZTolerance                                   ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Phase5_CapsuleOffset                                        ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Phase5_ClearanceCapsuleSize                                 ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     FinalResult_GroundAimOffset                                 ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     SlideBufferTime                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MinimumSpeedToHurdle                                        ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MinimumForwardStickDeflection                               ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RangeToIgnoreMinimumSpeedThreshold                          ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaximumCapsuleRadius                                        ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     MaximumCapsuleHalfHeight                                    ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     Phase0_HorizontalSweepBreadth                               ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     Phase0_HorizontalSweepHeight                                ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FFortReleaseVersion)                       ContextualActionPrototypeVersion                            ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FFortReleaseVersion)                       MovementModeExtensionVersion                                ___ OFFSET(get<T>, {0x88, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleTargetingData
/// Size: 0x0130 (0x000000 - 0x000130)
class FHurdleTargetingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EHurdleType)                               Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      bInRange                                                    ___ OFFSET(get<bool>, {0x2, 1, 1, 1})
	DMember(bool)                                      bIsNarrowOpening                                            ___ OFFSET(get<bool>, {0x2, 1, 1, 2})
	SMember(FVector)                                   FacingCornerLocation                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   FacingCornerNormal                                          ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   BackCornerLocation                                          ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   FinalLandingPosition                                        ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   SourceAim                                                   ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   WallLocation                                                ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FVector)                                   WallNormal                                                  ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   TargetNormal                                                ___ OFFSET(get<T>, {0xE8, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<UActorComponent*>)          TargetActorComponent                                        ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FVector)                                   TargetActorComponentLocation                                ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         ___ OFFSET(get<T>, {0x128, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.ReplicatedHurdleTargetingData
/// Size: 0x0070 (0x000000 - 0x000070)
class FReplicatedHurdleTargetingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EHurdleType)                               Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FVector_NetQuantize10)                     FacingCornerLocation                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     FacingCornerNormal                                          ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     BackCornerLocation                                          ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     FinalLandingPosition                                        ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(bool)                                      bValid                                                      ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Enum /Script/VaultingCodeRuntime.EHurdleType
/// Size: 0x04
enum EHurdleType : uint8_t
{
	EHurdleType__Invalid0                                                            = 0,
	EHurdleType__HurdleOver1                                                         = 1,
	EHurdleType__HurdleOnTop2                                                        = 2,
	EHurdleType__EHurdleType_MAX3                                                    = 3
};

/// Enum /Script/VaultingCodeRuntime.EHurdleState
/// Size: 0x05
enum EHurdleState : uint8_t
{
	EHurdleState__Inactive0                                                          = 0,
	EHurdleState__Targeting1                                                         = 1,
	EHurdleState__HurdleOver2                                                        = 2,
	EHurdleState__HurdleOn3                                                          = 3,
	EHurdleState__EHurdleState_MAX4                                                  = 4
};

