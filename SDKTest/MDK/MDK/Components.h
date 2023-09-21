
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EventModeRuntime
/// dependency: FortniteGame
/// dependency: ModularGameplay
/// dependency: RidingCodeRuntime
/// dependency: SrirachaRanch
/// dependency: SrirachaRanchValet

/// Class /RidingContent/Components/RidingGeneric_Interafce.RidingGeneric_Interafce_C
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingGeneric_Interafce_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C
/// Size: 0x001A (0x0000A0 - 0x0000BA)
class UCreatureBaseNonRidableComponent_C : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 186;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(double)                                    Jump_Attach_Ground_Height_Min                               ___ OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(double)                                    Jump_Attach_Ground_Height_Buffer                            ___ OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      Uses_Alt_Riding_Message                                     ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      KillOnRideAttempt                                           ___ OFFSET(get<bool>, {0xB9, 1, 0, 0})
};

/// Class /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
/// Size: 0x06D0 (0x0006B0 - 0x000D80)
class UCreatureBaseRidableComponent_C : public UControllableRidableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3456;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_CreatureIsBeingRidden                                     ___ OFFSET(get<T>, {0x6B8, 32, 0, 0})
	CMember(UClass*)                                   GE_CreatureIsBeingRidden                                    ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UClass*)                                   GE_CreatureIsBeingRidden_Passive                            ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	DMember(bool)                                      bDebugDisplay                                               ___ OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(double)                                    DebugTickRate                                               ___ OFFSET(get<double>, {0x6F0, 8, 0, 0})
	SMember(FVector)                                   DebugServerRiderLocation                                    ___ OFFSET(get<T>, {0x6F8, 24, 0, 0})
	DMember(double)                                    CapsuleRadiusOffset                                         ___ OFFSET(get<double>, {0x710, 8, 0, 0})
	DMember(double)                                    CapsuleHalfHeightOffset                                     ___ OFFSET(get<double>, {0x718, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_RidingSpecialAbility                                      ___ OFFSET(get<T>, {0x720, 32, 0, 0})
	CMember(UAnimSequence*)                            IdleAnim_Add                                                ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UAnimSequence*)                            RunAnim_Add                                                 ___ OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UBlendSpace*)                              TurnBS                                                      ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	DMember(double)                                    MinSpeedToRun                                               ___ OFFSET(get<double>, {0x758, 8, 0, 0})
	DMember(double)                                    Run_RampIntoSpeed                                           ___ OFFSET(get<double>, {0x760, 8, 0, 0})
	DMember(double)                                    Run_RampIntoSpeed_ADS                                       ___ OFFSET(get<double>, {0x768, 8, 0, 0})
	DMember(double)                                    Run_PlayRate                                                ___ OFFSET(get<double>, {0x770, 8, 0, 0})
	DMember(double)                                    Run_PlayRate_ADS                                            ___ OFFSET(get<double>, {0x778, 8, 0, 0})
	DMember(double)                                    SpringAlpha                                                 ___ OFFSET(get<double>, {0x780, 8, 0, 0})
	DMember(double)                                    SpringAlpha_ADS                                             ___ OFFSET(get<double>, {0x788, 8, 0, 0})
	DMember(double)                                    Idle_Alpha                                                  ___ OFFSET(get<double>, {0x790, 8, 0, 0})
	DMember(double)                                    Idle_Alpha_ADS                                              ___ OFFSET(get<double>, {0x798, 8, 0, 0})
	DMember(double)                                    Run_Alpha                                                   ___ OFFSET(get<double>, {0x7A0, 8, 0, 0})
	DMember(double)                                    Run_Alpha_ADS                                               ___ OFFSET(get<double>, {0x7A8, 8, 0, 0})
	DMember(double)                                    Turn_Alpha                                                  ___ OFFSET(get<double>, {0x7B0, 8, 0, 0})
	DMember(double)                                    Turn_Alpha_ADS                                              ___ OFFSET(get<double>, {0x7B8, 8, 0, 0})
	CMember(UAnimSequence*)                            Clamp_AnimPose_LastResort                                   ___ OFFSET(get<T>, {0x7C0, 8, 0, 0})
	SMember(FRotator)                                  Clamp_Foot_R_Adjust                                         ___ OFFSET(get<T>, {0x7C8, 24, 0, 0})
	SMember(FRotator)                                  Clamp_Foot_L_Adjust                                         ___ OFFSET(get<T>, {0x7E0, 24, 0, 0})
	DMember(double)                                    CapsuleRadiusOffset_Emote                                   ___ OFFSET(get<double>, {0x7F8, 8, 0, 0})
	DMember(double)                                    CapsuleHalfHeightOffset_Emote                               ___ OFFSET(get<double>, {0x800, 8, 0, 0})
	SMember(FVector)                                   Clamp_Location_Offset                                       ___ OFFSET(get<T>, {0x808, 24, 0, 0})
	SMember(FRotator)                                  Clamp_Rotation_Offset                                       ___ OFFSET(get<T>, {0x820, 24, 0, 0})
	SMember(FVector)                                   Clamp_ScaleAdjust                                           ___ OFFSET(get<T>, {0x838, 24, 0, 0})
	SMember(FName)                                     RidableSocketName                                           ___ OFFSET(get<T>, {0x850, 4, 0, 0})
	DMember(double)                                    RidableSocket_Alpha                                         ___ OFFSET(get<double>, {0x858, 8, 0, 0})
	CMember(UClass*)                                   GE_CooldownOverride                                         ___ OFFSET(get<T>, {0x860, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_CreatureOverrideCooldown                                  ___ OFFSET(get<T>, {0x868, 32, 0, 0})
	CMember(TMap<TEnumAsByte, TEnumAsByte>)            OriginalCollisionResponseMap                                ___ OFFSET(get<T>, {0x888, 80, 0, 0})
	SMember(FSoundIndicatorIconPicker)                 RidingSoundIndicatorIconOverride                            ___ OFFSET(get<T>, {0x8D8, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  AudioOnJump                                                 ___ OFFSET(get<T>, {0x900, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AudioOnJumpApex                                             ___ OFFSET(get<T>, {0x910, 16, 0, 0})
	DMember(char)                                      MovementMode                                                ___ OFFSET(get<char>, {0x920, 1, 0, 0})
	DMember(bool)                                      bFalling                                                    ___ OFFSET(get<bool>, {0x921, 1, 0, 0})
	SMember(FScalableFloat)                            RidingAbilityEnable_HF                                      ___ OFFSET(get<T>, {0x928, 40, 0, 0})
	DMember(double)                                    JumpAttach_GroundHeightMin                                  ___ OFFSET(get<double>, {0x950, 8, 0, 0})
	DMember(double)                                    JumpAttach_GroundHeightBuffer                               ___ OFFSET(get<double>, {0x958, 8, 0, 0})
	DMember(bool)                                      UseAltRidingMessage                                         ___ OFFSET(get<bool>, {0x960, 1, 0, 0})
	SMember(FText)                                     Riding_Interaction_Text                                     ___ OFFSET(get<T>, {0x968, 24, 0, 0})
	DMember(double)                                    currentEnergyValue                                          ___ OFFSET(get<double>, {0x980, 8, 0, 0})
	CMember(UPlayerRiderComponent_C*)                  PlayerRiderComponentRef                                     ___ OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(ANPC_Pawn_Wildlife_Parent_C*)              NPCPawnWildlifeRef                                          ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	DMember(double)                                    previousTimeTracked                                         ___ OFFSET(get<double>, {0x998, 8, 0, 0})
	DMember(double)                                    energyTrackingDeltaTime                                     ___ OFFSET(get<double>, {0x9A0, 8, 0, 0})
	DMember(bool)                                      ShouldHaveEnergy                                            ___ OFFSET(get<bool>, {0x9A8, 1, 0, 0})
	DMember(double)                                    EnergyRateOfDecayStopped                                    ___ OFFSET(get<double>, {0x9B0, 8, 0, 0})
	DMember(bool)                                      allowUpdateEnergyTrackingTick                               ___ OFFSET(get<bool>, {0x9B8, 1, 0, 0})
	DMember(bool)                                      lastBeingRiddenState                                        ___ OFFSET(get<bool>, {0x9B9, 1, 0, 0})
	SMember(FCurveTableRowHandle)                      EnergyRateOfDecayMoving                                     ___ OFFSET(get<T>, {0x9C0, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      EnergyRateOfDecaySprinting                                  ___ OFFSET(get<T>, {0x9D0, 16, 0, 0})
	DMember(double)                                    CurrentEnergyRateOfRecharge                                 ___ OFFSET(get<double>, {0x9E0, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      ExhaustedEnergyRateOfRecharge                               ___ OFFSET(get<T>, {0x9E8, 16, 0, 0})
	DMember(double)                                    EnergyWarningThreshold                                      ___ OFFSET(get<double>, {0x9F8, 8, 0, 0})
	DMember(double)                                    EnergyCriticalThreshold                                     ___ OFFSET(get<double>, {0xA00, 8, 0, 0})
	DMember(bool)                                      energyWarningActive                                         ___ OFFSET(get<bool>, {0xA08, 1, 0, 0})
	DMember(bool)                                      energyCriticalActive                                        ___ OFFSET(get<bool>, {0xA09, 1, 0, 0})
	DMember(double)                                    minMovementSpeedTreshold                                    ___ OFFSET(get<double>, {0xA10, 8, 0, 0})
	DMember(bool)                                      IsJumping                                                   ___ OFFSET(get<bool>, {0xA18, 1, 0, 0})
	DMember(double)                                    EnergyRegenThreshold                                        ___ OFFSET(get<double>, {0xA20, 8, 0, 0})
	DMember(bool)                                      AlwaysRegenWhenNotRidden                                    ___ OFFSET(get<bool>, {0xA28, 1, 0, 0})
	CMember(UClass*)                                   GE_EnergyWarning                                            ___ OFFSET(get<T>, {0xA30, 8, 0, 0})
	CMember(UClass*)                                   GE_EnergyCritical                                           ___ OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(UClass*)                                   GE_EnergyDepleted                                           ___ OFFSET(get<T>, {0xA40, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_EnergyWarning                                             ___ OFFSET(get<T>, {0xA48, 32, 0, 0})
	SMember(FGameplayTagContainer)                     T_EnergyCritical                                            ___ OFFSET(get<T>, {0xA68, 32, 0, 0})
	SMember(FGameplayTagContainer)                     T_EnergyDepleted                                            ___ OFFSET(get<T>, {0xA88, 32, 0, 0})
	SMember(FGameplayTagContainer)                     T_CannotRideBucket                                          ___ OFFSET(get<T>, {0xAA8, 32, 0, 0})
	CMember(UClass*)                                   Gameplay_Effect                                             ___ OFFSET(get<T>, {0xAC8, 8, 0, 0})
	SMember(FGameplayTag)                              SprintingAbilityTag                                         ___ OFFSET(get<T>, {0xAD0, 4, 0, 0})
	CMember(UClass*)                                   GE_EatToRefuel                                              ___ OFFSET(get<T>, {0xAD8, 8, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   ___ OFFSET(get<T>, {0xAE0, 192, 0, 0})
	CMember(UClass*)                                   GE_Creature_Sprint                                          ___ OFFSET(get<T>, {0xBA0, 8, 0, 0})
	CMember(USoundLibrary*)                            RidingFoleySoundLibrary                                     ___ OFFSET(get<T>, {0xBA8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagsPreventSprinting                                        ___ OFFSET(get<T>, {0xBB0, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  RidableUIStart                                              ___ OFFSET(get<T>, {0xBD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RidableUIUpdateEnergy                                       ___ OFFSET(get<T>, {0xBE0, 16, 0, 0})
	SMember(FGameplayTag)                              OutOfEnergySoundLibTag                                      ___ OFFSET(get<T>, {0xBF0, 4, 0, 0})
	SMember(FGameplayTag)                              SprintStartSoundLibTag                                      ___ OFFSET(get<T>, {0xBF4, 4, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             Riding_Interaction_Type                                     ___ OFFSET(get<T>, {0xBF8, 1, 0, 0})
	DMember(double)                                    StartInAirTimestamp                                         ___ OFFSET(get<double>, {0xC00, 8, 0, 0})
	SMember(FTimerHandle)                              RetryJumpExitTimerHandle                                    ___ OFFSET(get<T>, {0xC08, 8, 0, 0})
	DMember(double)                                    JumpExitBufferStartTimeStamp                                ___ OFFSET(get<double>, {0xC10, 8, 0, 0})
	SMember(FScalableFloat)                            JumpExitBufferTime                                          ___ OFFSET(get<T>, {0xC18, 40, 0, 0})
	SMember(FTimerHandle)                              JumpExitBufferTimerHandle                                   ___ OFFSET(get<T>, {0xC40, 8, 0, 0})
	SMember(FGameplayTag)                              MountLandedCueTag                                           ___ OFFSET(get<T>, {0xC48, 4, 0, 0})
	CMember(UClass*)                                   GE_BlockCreatureAttackOnDismount                            ___ OFFSET(get<T>, {0xC50, 8, 0, 0})
	DMember(bool)                                      EnergyRegenActive                                           ___ OFFSET(get<bool>, {0xC58, 1, 0, 0})
	SMember(FGameplayTagContainer)                     BlockPetting_TagContainer                                   ___ OFFSET(get<T>, {0xC60, 32, 0, 0})
	DMember(bool)                                      infiniteStaminaBuffEnabled                                  ___ OFFSET(get<bool>, {0xC80, 1, 0, 0})
	SMember(FGameplayTag)                              InfiniteStaminaEffect_GameplayCueTag                        ___ OFFSET(get<T>, {0xC84, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Cannot_Ride_Rider_Bucket                                    ___ OFFSET(get<T>, {0xC88, 32, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_Enabled                                         ___ OFFSET(get<T>, {0xCA8, 40, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_ApplyFatigueMinJumpCount                        ___ OFFSET(get<T>, {0xCD0, 40, 0, 0})
	CMember(UClass*)                                   JumpFatigueGameplayEffect                                   ___ OFFSET(get<T>, {0xCF8, 8, 0, 0})
	DMember(bool)                                      JumpFatigueDebugEnabled                                     ___ OFFSET(get<bool>, {0xD00, 1, 0, 0})
	DMember(int32_t)                                   JumpFatigueJumpCount                                        ___ OFFSET(get<int32_t>, {0xD04, 4, 0, 0})
	DMember(double)                                    JumpFatigue_LastLandingTimeStamp                            ___ OFFSET(get<double>, {0xD08, 8, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_ResetCounterDelay                               ___ OFFSET(get<T>, {0xD10, 40, 0, 0})
	DMember(bool)                                      JumpFatigue_ShouldTimeStampNextLanding                      ___ OFFSET(get<bool>, {0xD38, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               JumpFatigue_GEHandle                                        ___ OFFSET(get<T>, {0xD3C, 8, 0, 0})
	SMember(FTimerHandle)                              JumpFatigue_RemovalTimerHandle                              ___ OFFSET(get<T>, {0xD48, 8, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_GeDurationPostLanding                           ___ OFFSET(get<T>, {0xD50, 40, 0, 0})
	CMember(UClass*)                                   GE_NotPetable_IsBeingRidden                                 ___ OFFSET(get<T>, {0xD78, 8, 0, 0})
};

/// Class /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C
/// Size: 0x0110 (0x0006C8 - 0x0007D8)
class UPlayerRiderComponent_C : public UControllingRiderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_PlayerIsRiding                                            ___ OFFSET(get<T>, {0x6D0, 32, 0, 0})
	CMember(UClass*)                                   GE_PlayerIsRiding                                           ___ OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerRef                                               ___ OFFSET(get<T>, {0x6F8, 8, 0, 0})
	DMember(double)                                    JumpOnMountDistanceCheck                                    ___ OFFSET(get<double>, {0x700, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUINewStats                                             ___ OFFSET(get<T>, {0x708, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUIEnd                                                  ___ OFFSET(get<T>, {0x718, 16, 0, 0})
	DMember(double)                                    targetEnergy                                                ___ OFFSET(get<double>, {0x728, 8, 0, 0})
	DMember(double)                                    targetHealth                                                ___ OFFSET(get<double>, {0x730, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_CannotRideBucket                                          ___ OFFSET(get<T>, {0x738, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUIUpdateEnergy                                         ___ OFFSET(get<T>, {0x758, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUIUpdateHealth                                         ___ OFFSET(get<T>, {0x768, 16, 0, 0})
	CMember(AActor*)                                   CachedRidableActor                                          ___ OFFSET(get<T>, {0x778, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Cannot_Ride_Rider_Bucket                                    ___ OFFSET(get<T>, {0x780, 32, 0, 0})
	SMember(FGameplayTag)                              JumpOnCreature_Cue_Tag                                      ___ OFFSET(get<T>, {0x7A0, 4, 0, 0})
	CMember(UClass*)                                   GE_PlayerPetting                                            ___ OFFSET(get<T>, {0x7A8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Tag_Quests_Wildlife_Pet                                     ___ OFFSET(get<T>, {0x7B0, 32, 0, 0})
	CMember(UAbilityAsync_WaitGameplayTagAdded*)       ActiveRidableBlockRidingGameplayTagAsyncAction              ___ OFFSET(get<T>, {0x7D0, 8, 0, 0})
};

/// Class /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C
/// Size: 0x0044 (0x000D80 - 0x000DC4)
class UBoarRidableComponent_C : public UCreatureBaseRidableComponent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3524;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xD80, 8, 0, 0})
	CMember(USoundBase*)                               BurtChargeStartSound                                        ___ OFFSET(get<T>, {0xD88, 8, 0, 0})
	CMember(UAudioComponent*)                          ChargeSoundComp                                             ___ OFFSET(get<T>, {0xD90, 8, 0, 0})
	DMember(double)                                    SprintCooldDownTime                                         ___ OFFSET(get<double>, {0xD98, 8, 0, 0})
	CMember(UClass*)                                   GESprintImpactPawn                                          ___ OFFSET(get<T>, {0xDA0, 8, 0, 0})
	SMember(FGameplayTag)                              SprintImpactGameplayCueTag                                  ___ OFFSET(get<T>, {0xDA8, 4, 0, 0})
	CMember(UClass*)                                   GESprintImpactVehicle                                       ___ OFFSET(get<T>, {0xDB0, 8, 0, 0})
	SMember(FGameplayTag)                              SprintChargeImpact_Default_CueTag                           ___ OFFSET(get<T>, {0xDB8, 4, 0, 0})
	SMember(FGameplayTag)                              SprintChargeImpact_Pawn_CueTag                              ___ OFFSET(get<T>, {0xDBC, 4, 0, 0})
	SMember(FGameplayTag)                              SprintChargeImpact_DestroyBuild_CueTag                      ___ OFFSET(get<T>, {0xDC0, 4, 0, 0})
};

/// Class /RidingContent/Components/WolfRidableComponent.WolfRidableComponent_C
/// Size: 0x0000 (0x000D80 - 0x000D80)
class UWolfRidableComponent_C : public UCreatureBaseRidableComponent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3456;

public:
};

/// Class /EventMode/Components/EventMode_Activator_Component.EventMode_Activator_Component_C
/// Size: 0x0000 (0x000210 - 0x000210)
class UEventMode_Activator_Component_C : public UFortGameFrameworkComponent_EventMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C
/// Size: 0x0008 (0x000478 - 0x000480)
class USR_Valet_C : public UStreamingRadioPlayerComponent_Valet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x478, 8, 0, 0})
};

/// Class /NPCLibrary/Components/BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C
/// Size: 0x0000 (0x000108 - 0x000108)
class UBP_PlayerStateCustomFeedMessages_C : public UFortPlayerStateComponent_CustomFeedMessage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

