
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint
/// Size: 0x0238 (0x000048 - 0x000280)
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FGameplayTag)                              GCEnergyDrain                                               ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FGameplayTag)                              GCSpeedLines                                                ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FGameplayTag)                              GCSprintEnd                                                 ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedMultiplier                                          ___ OFFSET(get<T>, {0x60, 40, 0, 0})
	SMember(FScalableFloat)                            JumpHeightMultiplier                                        ___ OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FGameplayTag)                              TutorialGameplayTag                                         ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialAdditionalSourceTag                                 ___ OFFSET(get<T>, {0xB8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialTargetTag                                           ___ OFFSET(get<T>, {0xD8, 32, 0, 0})
	SMember(FGameplayTag)                              TagPreventWeaponHolster                                     ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFail                                          ___ OFFSET(get<T>, {0x100, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFailLowEnergy                                 ___ OFFSET(get<T>, {0x120, 32, 0, 0})
	CMember(USoundBase*)                               OnEnergyFullyDrainedSound                                   ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(float)                                     MinSpeedForHolster                                          ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     HolsterTimeAttemptDelay                                     ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     MinEnergyToActivate                                         ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	SMember(FScalableFloat)                            MinEnergyToActivateRow                                      ___ OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnSlide                                        ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnStart                                        ___ OFFSET(get<T>, {0x1B0, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostPerSecond                                      ___ OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnJump                                         ___ OFFSET(get<T>, {0x200, 40, 0, 0})
	SMember(FGameplayTag)                              IgnoreJumpCostTag                                           ___ OFFSET(get<T>, {0x228, 4, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           ___ OFFSET(get<T>, {0x22C, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyUseIdentifier                                         ___ OFFSET(get<T>, {0x230, 4, 0, 0})
	CMember(USoundMix*)                                SprintStartedSoundMix                                       ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(USoundBase*)                               SprintStartedSound2D                                        ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FScalableFloat)                            HF_TacSprintEnabled                                         ___ OFFSET(get<T>, {0x248, 40, 0, 0})
	CMember(UClass*)                                   CameraMode                                                  ___ OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               ___ OFFSET(get<T>, {0x278, 4, 0, 0})
};

/// Class /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(UClass*)                                   MovementModeExtension                                       ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailedToSprint                                            ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(AFortPlayerPawn*)                          CurrentBoundPlayerPawn                                      ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bTacticalSprintEnabled                                      ___ OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bWantsToTacticalSprint                                      ___ OFFSET(get<bool>, {0xD8, 1, 1, 1})
	DMember(bool)                                      bHandlingMoveForward                                        ___ OFFSET(get<bool>, {0xD8, 1, 1, 2})
	DMember(bool)                                      bIsSprinting                                                ___ OFFSET(get<bool>, {0xD8, 1, 1, 3})
	DMember(bool)                                      bWasInBuildMode                                             ___ OFFSET(get<bool>, {0xD8, 1, 1, 4})
	DMember(bool)                                      bFireAnalyticsEventOnEndPlay                                ___ OFFSET(get<bool>, {0xD8, 1, 1, 5})
	SMember(FGameplayTag)                              TacticalSprintAbilityGameplayTag                            ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DisableTacticalSprintAbilityGameplayTag                     ___ OFFSET(get<T>, {0xE0, 4, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintEnabled                                       ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintToggleGracePeriod                             ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintStarted                                     ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintEnded                                       ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FTimerHandle)                              StopWantingToSprintTimerReceipt                             ___ OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
};

/// Struct /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
/// Size: 0x0018 (0x000010 - 0x000028)
class FFortMovementMode_TacSprintRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/TacticalSprintRuntime.ESprintLoggingVerbosityLevel
/// Size: 0x07
enum ESprintLoggingVerbosityLevel : uint8_t
{
	ESprintLoggingVerbosityLevel__Error0                                             = 0,
	ESprintLoggingVerbosityLevel__Warning1                                           = 1,
	ESprintLoggingVerbosityLevel__Display2                                           = 2,
	ESprintLoggingVerbosityLevel__Log3                                               = 3,
	ESprintLoggingVerbosityLevel__Verbose4                                           = 4,
	ESprintLoggingVerbosityLevel__VeryVerbose5                                       = 5,
	ESprintLoggingVerbosityLevel__ESprintLoggingVerbosityLevel_MAX6                  = 6
};

