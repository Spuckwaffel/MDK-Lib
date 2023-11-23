
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

/// Class /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C
/// Size: 0x0008 (0x000478 - 0x000480)
class USR_Valet_C : public UStreamingRadioPlayerComponent_Valet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.CanApplyHolster
	// bool CanApplyHolster(FName& HolsterId);                                                                                  // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.On Source Played
	// void On Source Played(UStreamingRadioPlayerComponent* Component, FAthenaRadioStation AffectedSource);                    // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.On Source Stopped
	// void On Source Stopped(UStreamingRadioPlayerComponent* Component, FAthenaRadioStation AffectedSource);                   // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /SrirachaRanchValet/Components/SR_Valet.SR_Valet_C.ExecuteUbergraph_SR_Valet
	// void ExecuteUbergraph_SR_Valet(int32_t EntryPoint);                                                                      // [0x101681c] Final|HasDefaults    
};

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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	DMember(double)                                    Jump_Attach_Ground_Height_Min                               OFFSET(get<double>, {0xA8, 8, 0, 0})
	DMember(double)                                    Jump_Attach_Ground_Height_Buffer                            OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      Uses_Alt_Riding_Message                                     OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      KillOnRideAttempt                                           OFFSET(get<bool>, {0xB9, 1, 0, 0})


	/// Functions
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.GetRidingInfoFromTarget
	// void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ToggleRidingAlternative
	// void ToggleRidingAlternative();                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.AlternateRidingEvent
	// void AlternateRidingEvent();                                                                                             // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseNonRidableComponent.CreatureBaseNonRidableComponent_C.ExecuteUbergraph_CreatureBaseNonRidableComponent
	// void ExecuteUbergraph_CreatureBaseNonRidableComponent(int32_t EntryPoint);                                               // [0x101681c] Final                
};

/// Class /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C
/// Size: 0x0110 (0x0006C8 - 0x0007D8)
class UPlayerRiderComponent_C : public UControllingRiderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x6C8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_PlayerIsRiding                                            OFFSET(getStruct<T>, {0x6D0, 32, 0, 0})
	CMember(UClass*)                                   GE_PlayerIsRiding                                           OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerRef                                               OFFSET(get<T>, {0x6F8, 8, 0, 0})
	DMember(double)                                    JumpOnMountDistanceCheck                                    OFFSET(get<double>, {0x700, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUINewStats                                             OFFSET(getStruct<T>, {0x708, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUIEnd                                                  OFFSET(getStruct<T>, {0x718, 16, 0, 0})
	DMember(double)                                    targetEnergy                                                OFFSET(get<double>, {0x728, 8, 0, 0})
	DMember(double)                                    targetHealth                                                OFFSET(get<double>, {0x730, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_CannotRideBucket                                          OFFSET(getStruct<T>, {0x738, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUIUpdateEnergy                                         OFFSET(getStruct<T>, {0x758, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RiderUIUpdateHealth                                         OFFSET(getStruct<T>, {0x768, 16, 0, 0})
	CMember(AActor*)                                   CachedRidableActor                                          OFFSET(get<T>, {0x778, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Cannot_Ride_Rider_Bucket                                    OFFSET(getStruct<T>, {0x780, 32, 0, 0})
	SMember(FGameplayTag)                              JumpOnCreature_Cue_Tag                                      OFFSET(getStruct<T>, {0x7A0, 4, 0, 0})
	CMember(UClass*)                                   GE_PlayerPetting                                            OFFSET(get<T>, {0x7A8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Tag_Quests_Wildlife_Pet                                     OFFSET(getStruct<T>, {0x7B0, 32, 0, 0})
	CMember(UAbilityAsync_WaitGameplayTagAdded*)       ActiveRidableBlockRidingGameplayTagAsyncAction              OFFSET(get<T>, {0x7D0, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.GetRidingInfoFromTarget
	// void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetHealth
	// void OnRep_targetHealth();                                                                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetEnergy
	// void OnRep_targetEnergy();                                                                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.GetJumpInfo
	// void GetJumpInfo(AActor* TargetActor, UActorComponent*& TargetActorComponent, double& JumpAttach_GroundHeightMin, double& JumpAttach_GroundHeightBuffer, bool& UseAltRidingMessage); // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.TestIfValidForRidingAttempt
	// void TestIfValidForRidingAttempt(UObject* Object, bool& Success, UObject*& TargetObject, bool& UseAltRidingMessage);     // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRiding
	// void ToggleRiding(AActor* PlayerPawn, AActor* Target, bool ShouldRide, bool& bChangedRiding);                            // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_E5B5FB5340DB5660002329825657B406
	// void EventReceived_E5B5FB5340DB5660002329825657B406(FGameplayEventData Payload);                                         // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_42EF586645CCFF06FFA4D9A5D59B1298
	// void Added_42EF586645CCFF06FFA4D9A5D59B1298();                                                                           // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_A83C775344FE0F6BDAAC4B971F57425E
	// void Added_A83C775344FE0F6BDAAC4B971F57425E();                                                                           // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6
	// void EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6(FGameplayEventData Payload);                                         // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_D3DFE4374EED456A4C597E95375A2028
	// void Added_D3DFE4374EED456A4C597E95375A2028();                                                                           // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingAlternative
	// void ToggleRidingAlternative();                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleStartedRiding
	// void HandleStartedRiding(URidableComponent* Ridable);                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleStoppedRiding
	// void HandleStoppedRiding(URidableComponent* Ridable);                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingOnServer
	// void ToggleRidingOnServer(UObject* TargetObject, bool UseAltRidingMessage);                                              // [0x101681c] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.SetTargetHealth
	// void SetTargetHealth(double targetHealth);                                                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIStartClient
	// void RiderUIStartClient(FText Name, FSlateBrush Icon, AActor* Ridable);                                                  // [0x101681c] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEndClient
	// void RiderUIEndClient(AActor* Ridable);                                                                                  // [0x101681c] Net|NetClient|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.MovementModeChanged
	// void MovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode);   // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.MountLanded
	// void MountLanded(FHitResult& Hit);                                                                                       // [0x101681c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStart
	// void HandleRequestPettingStart();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStop
	// void HandleRequestPettingStop();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRidableFound
	// void HandleRidableFound(FHitResult& HitResult);                                                                          // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ExecuteUbergraph_PlayerRiderComponent
	// void ExecuteUbergraph_PlayerRiderComponent(int32_t EntryPoint);                                                          // [0x101681c] Final|HasDefaults    
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateHealth__DelegateSignature
	// void RiderUIUpdateHealth__DelegateSignature(double Health);                                                              // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateEnergy__DelegateSignature
	// void RiderUIUpdateEnergy__DelegateSignature(double Energy);                                                              // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEnd__DelegateSignature
	// void RiderUIEnd__DelegateSignature(AActor* RidableActor);                                                                // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUINewStats__DelegateSignature
	// void RiderUINewStats__DelegateSignature(FText Name, FSlateBrush Icon, AActor* RidableActor);                             // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
/// Size: 0x06D0 (0x000700 - 0x000DD0)
class UCreatureBaseRidableComponent_C : public UControllableRidableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3536;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x700, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_CreatureIsBeingRidden                                     OFFSET(getStruct<T>, {0x708, 32, 0, 0})
	CMember(UClass*)                                   GE_CreatureIsBeingRidden                                    OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UClass*)                                   GE_CreatureIsBeingRidden_Passive                            OFFSET(get<T>, {0x730, 8, 0, 0})
	DMember(bool)                                      bDebugDisplay                                               OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(double)                                    DebugTickRate                                               OFFSET(get<double>, {0x740, 8, 0, 0})
	SMember(FVector)                                   DebugServerRiderLocation                                    OFFSET(getStruct<T>, {0x748, 24, 0, 0})
	DMember(double)                                    CapsuleRadiusOffset                                         OFFSET(get<double>, {0x760, 8, 0, 0})
	DMember(double)                                    CapsuleHalfHeightOffset                                     OFFSET(get<double>, {0x768, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_RidingSpecialAbility                                      OFFSET(getStruct<T>, {0x770, 32, 0, 0})
	CMember(UAnimSequence*)                            IdleAnim_Add                                                OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UAnimSequence*)                            RunAnim_Add                                                 OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UBlendSpace*)                              TurnBS                                                      OFFSET(get<T>, {0x7A0, 8, 0, 0})
	DMember(double)                                    MinSpeedToRun                                               OFFSET(get<double>, {0x7A8, 8, 0, 0})
	DMember(double)                                    Run_RampIntoSpeed                                           OFFSET(get<double>, {0x7B0, 8, 0, 0})
	DMember(double)                                    Run_RampIntoSpeed_ADS                                       OFFSET(get<double>, {0x7B8, 8, 0, 0})
	DMember(double)                                    Run_PlayRate                                                OFFSET(get<double>, {0x7C0, 8, 0, 0})
	DMember(double)                                    Run_PlayRate_ADS                                            OFFSET(get<double>, {0x7C8, 8, 0, 0})
	DMember(double)                                    SpringAlpha                                                 OFFSET(get<double>, {0x7D0, 8, 0, 0})
	DMember(double)                                    SpringAlpha_ADS                                             OFFSET(get<double>, {0x7D8, 8, 0, 0})
	DMember(double)                                    Idle_Alpha                                                  OFFSET(get<double>, {0x7E0, 8, 0, 0})
	DMember(double)                                    Idle_Alpha_ADS                                              OFFSET(get<double>, {0x7E8, 8, 0, 0})
	DMember(double)                                    Run_Alpha                                                   OFFSET(get<double>, {0x7F0, 8, 0, 0})
	DMember(double)                                    Run_Alpha_ADS                                               OFFSET(get<double>, {0x7F8, 8, 0, 0})
	DMember(double)                                    Turn_Alpha                                                  OFFSET(get<double>, {0x800, 8, 0, 0})
	DMember(double)                                    Turn_Alpha_ADS                                              OFFSET(get<double>, {0x808, 8, 0, 0})
	CMember(UAnimSequence*)                            Clamp_AnimPose_LastResort                                   OFFSET(get<T>, {0x810, 8, 0, 0})
	SMember(FRotator)                                  Clamp_Foot_R_Adjust                                         OFFSET(getStruct<T>, {0x818, 24, 0, 0})
	SMember(FRotator)                                  Clamp_Foot_L_Adjust                                         OFFSET(getStruct<T>, {0x830, 24, 0, 0})
	DMember(double)                                    CapsuleRadiusOffset_Emote                                   OFFSET(get<double>, {0x848, 8, 0, 0})
	DMember(double)                                    CapsuleHalfHeightOffset_Emote                               OFFSET(get<double>, {0x850, 8, 0, 0})
	SMember(FVector)                                   Clamp_Location_Offset                                       OFFSET(getStruct<T>, {0x858, 24, 0, 0})
	SMember(FRotator)                                  Clamp_Rotation_Offset                                       OFFSET(getStruct<T>, {0x870, 24, 0, 0})
	SMember(FVector)                                   Clamp_ScaleAdjust                                           OFFSET(getStruct<T>, {0x888, 24, 0, 0})
	SMember(FName)                                     RidableSocketName                                           OFFSET(getStruct<T>, {0x8A0, 4, 0, 0})
	DMember(double)                                    RidableSocket_Alpha                                         OFFSET(get<double>, {0x8A8, 8, 0, 0})
	CMember(UClass*)                                   GE_CooldownOverride                                         OFFSET(get<T>, {0x8B0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_CreatureOverrideCooldown                                  OFFSET(getStruct<T>, {0x8B8, 32, 0, 0})
	CMember(TMap<TEnumAsByte, TEnumAsByte>)            OriginalCollisionResponseMap                                OFFSET(get<T>, {0x8D8, 80, 0, 0})
	SMember(FSoundIndicatorIconPicker)                 RidingSoundIndicatorIconOverride                            OFFSET(getStruct<T>, {0x928, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  AudioOnJump                                                 OFFSET(getStruct<T>, {0x950, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AudioOnJumpApex                                             OFFSET(getStruct<T>, {0x960, 16, 0, 0})
	DMember(char)                                      MovementMode                                                OFFSET(get<char>, {0x970, 1, 0, 0})
	DMember(bool)                                      bFalling                                                    OFFSET(get<bool>, {0x971, 1, 0, 0})
	SMember(FScalableFloat)                            RidingAbilityEnable_HF                                      OFFSET(getStruct<T>, {0x978, 40, 0, 0})
	DMember(double)                                    JumpAttach_GroundHeightMin                                  OFFSET(get<double>, {0x9A0, 8, 0, 0})
	DMember(double)                                    JumpAttach_GroundHeightBuffer                               OFFSET(get<double>, {0x9A8, 8, 0, 0})
	DMember(bool)                                      UseAltRidingMessage                                         OFFSET(get<bool>, {0x9B0, 1, 0, 0})
	SMember(FText)                                     Riding_Interaction_Text                                     OFFSET(getStruct<T>, {0x9B8, 24, 0, 0})
	DMember(double)                                    currentEnergyValue                                          OFFSET(get<double>, {0x9D0, 8, 0, 0})
	CMember(UPlayerRiderComponent_C*)                  PlayerRiderComponentRef                                     OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(ANPC_Pawn_Wildlife_Parent_C*)              NPCPawnWildlifeRef                                          OFFSET(get<T>, {0x9E0, 8, 0, 0})
	DMember(double)                                    previousTimeTracked                                         OFFSET(get<double>, {0x9E8, 8, 0, 0})
	DMember(double)                                    energyTrackingDeltaTime                                     OFFSET(get<double>, {0x9F0, 8, 0, 0})
	DMember(bool)                                      ShouldHaveEnergy                                            OFFSET(get<bool>, {0x9F8, 1, 0, 0})
	DMember(double)                                    EnergyRateOfDecayStopped                                    OFFSET(get<double>, {0xA00, 8, 0, 0})
	DMember(bool)                                      allowUpdateEnergyTrackingTick                               OFFSET(get<bool>, {0xA08, 1, 0, 0})
	DMember(bool)                                      lastBeingRiddenState                                        OFFSET(get<bool>, {0xA09, 1, 0, 0})
	SMember(FCurveTableRowHandle)                      EnergyRateOfDecayMoving                                     OFFSET(getStruct<T>, {0xA10, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      EnergyRateOfDecaySprinting                                  OFFSET(getStruct<T>, {0xA20, 16, 0, 0})
	DMember(double)                                    CurrentEnergyRateOfRecharge                                 OFFSET(get<double>, {0xA30, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      ExhaustedEnergyRateOfRecharge                               OFFSET(getStruct<T>, {0xA38, 16, 0, 0})
	DMember(double)                                    EnergyWarningThreshold                                      OFFSET(get<double>, {0xA48, 8, 0, 0})
	DMember(double)                                    EnergyCriticalThreshold                                     OFFSET(get<double>, {0xA50, 8, 0, 0})
	DMember(bool)                                      energyWarningActive                                         OFFSET(get<bool>, {0xA58, 1, 0, 0})
	DMember(bool)                                      energyCriticalActive                                        OFFSET(get<bool>, {0xA59, 1, 0, 0})
	DMember(double)                                    minMovementSpeedTreshold                                    OFFSET(get<double>, {0xA60, 8, 0, 0})
	DMember(bool)                                      IsJumping                                                   OFFSET(get<bool>, {0xA68, 1, 0, 0})
	DMember(double)                                    EnergyRegenThreshold                                        OFFSET(get<double>, {0xA70, 8, 0, 0})
	DMember(bool)                                      AlwaysRegenWhenNotRidden                                    OFFSET(get<bool>, {0xA78, 1, 0, 0})
	CMember(UClass*)                                   GE_EnergyWarning                                            OFFSET(get<T>, {0xA80, 8, 0, 0})
	CMember(UClass*)                                   GE_EnergyCritical                                           OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(UClass*)                                   GE_EnergyDepleted                                           OFFSET(get<T>, {0xA90, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_EnergyWarning                                             OFFSET(getStruct<T>, {0xA98, 32, 0, 0})
	SMember(FGameplayTagContainer)                     T_EnergyCritical                                            OFFSET(getStruct<T>, {0xAB8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     T_EnergyDepleted                                            OFFSET(getStruct<T>, {0xAD8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     T_CannotRideBucket                                          OFFSET(getStruct<T>, {0xAF8, 32, 0, 0})
	CMember(UClass*)                                   Gameplay_Effect                                             OFFSET(get<T>, {0xB18, 8, 0, 0})
	SMember(FGameplayTag)                              SprintingAbilityTag                                         OFFSET(getStruct<T>, {0xB20, 4, 0, 0})
	CMember(UClass*)                                   GE_EatToRefuel                                              OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   OFFSET(getStruct<T>, {0xB30, 192, 0, 0})
	CMember(UClass*)                                   GE_Creature_Sprint                                          OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(USoundLibrary*)                            RidingFoleySoundLibrary                                     OFFSET(get<T>, {0xBF8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagsPreventSprinting                                        OFFSET(getStruct<T>, {0xC00, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  RidableUIStart                                              OFFSET(getStruct<T>, {0xC20, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RidableUIUpdateEnergy                                       OFFSET(getStruct<T>, {0xC30, 16, 0, 0})
	SMember(FGameplayTag)                              OutOfEnergySoundLibTag                                      OFFSET(getStruct<T>, {0xC40, 4, 0, 0})
	SMember(FGameplayTag)                              SprintStartSoundLibTag                                      OFFSET(getStruct<T>, {0xC44, 4, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             Riding_Interaction_Type                                     OFFSET(get<T>, {0xC48, 1, 0, 0})
	DMember(double)                                    StartInAirTimestamp                                         OFFSET(get<double>, {0xC50, 8, 0, 0})
	SMember(FTimerHandle)                              RetryJumpExitTimerHandle                                    OFFSET(getStruct<T>, {0xC58, 8, 0, 0})
	DMember(double)                                    JumpExitBufferStartTimeStamp                                OFFSET(get<double>, {0xC60, 8, 0, 0})
	SMember(FScalableFloat)                            JumpExitBufferTime                                          OFFSET(getStruct<T>, {0xC68, 40, 0, 0})
	SMember(FTimerHandle)                              JumpExitBufferTimerHandle                                   OFFSET(getStruct<T>, {0xC90, 8, 0, 0})
	SMember(FGameplayTag)                              MountLandedCueTag                                           OFFSET(getStruct<T>, {0xC98, 4, 0, 0})
	CMember(UClass*)                                   GE_BlockCreatureAttackOnDismount                            OFFSET(get<T>, {0xCA0, 8, 0, 0})
	DMember(bool)                                      EnergyRegenActive                                           OFFSET(get<bool>, {0xCA8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     BlockPetting_TagContainer                                   OFFSET(getStruct<T>, {0xCB0, 32, 0, 0})
	DMember(bool)                                      infiniteStaminaBuffEnabled                                  OFFSET(get<bool>, {0xCD0, 1, 0, 0})
	SMember(FGameplayTag)                              InfiniteStaminaEffect_GameplayCueTag                        OFFSET(getStruct<T>, {0xCD4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Cannot_Ride_Rider_Bucket                                    OFFSET(getStruct<T>, {0xCD8, 32, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_Enabled                                         OFFSET(getStruct<T>, {0xCF8, 40, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_ApplyFatigueMinJumpCount                        OFFSET(getStruct<T>, {0xD20, 40, 0, 0})
	CMember(UClass*)                                   JumpFatigueGameplayEffect                                   OFFSET(get<T>, {0xD48, 8, 0, 0})
	DMember(bool)                                      JumpFatigueDebugEnabled                                     OFFSET(get<bool>, {0xD50, 1, 0, 0})
	DMember(int32_t)                                   JumpFatigueJumpCount                                        OFFSET(get<int32_t>, {0xD54, 4, 0, 0})
	DMember(double)                                    JumpFatigue_LastLandingTimeStamp                            OFFSET(get<double>, {0xD58, 8, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_ResetCounterDelay                               OFFSET(getStruct<T>, {0xD60, 40, 0, 0})
	DMember(bool)                                      JumpFatigue_ShouldTimeStampNextLanding                      OFFSET(get<bool>, {0xD88, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               JumpFatigue_GEHandle                                        OFFSET(getStruct<T>, {0xD8C, 8, 0, 0})
	SMember(FTimerHandle)                              JumpFatigue_RemovalTimerHandle                              OFFSET(getStruct<T>, {0xD98, 8, 0, 0})
	SMember(FScalableFloat)                            JumpFatigue_GeDurationPostLanding                           OFFSET(getStruct<T>, {0xDA0, 40, 0, 0})
	CMember(UClass*)                                   GE_NotPetable_IsBeingRidden                                 OFFSET(get<T>, {0xDC8, 8, 0, 0})


	/// Functions
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingInfoFromTarget
	// void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_LandTimeStamp
	// void JumpFatigue_LandTimeStamp();                                                                                        // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CheckApplyFatigue
	// void JumpFatigue_CheckApplyFatigue();                                                                                    // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_CountJumps
	// void JumpFatigue_CountJumps();                                                                                           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_RemoveFatigue
	// void JumpFatigue_RemoveFatigue();                                                                                        // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.JumpFatigue_Landed
	// void JumpFatigue_Landed();                                                                                               // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Should Convert Jump Exit to Jump
	// void Should Convert Jump Exit to Jump(bool& Out);                                                                        // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldBufferJumpExitToRetryJump
	// void ShouldBufferJumpExitToRetryJump(bool& Output);                                                                      // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetInfiniteStaminaBuff
	// void SetInfiniteStaminaBuff(bool Enabled);                                                                               // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanBePet
	// bool CanBePet(URiderComponent* Rider);                                                                                   // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanJumpExit
	// void CanJumpExit(bool& CanJumpExit);                                                                                     // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateLootAnimalGlow
	// void UpdateLootAnimalGlow(double Scale);                                                                                 // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_currentEnergyValue
	// void OnRep_currentEnergyValue();                                                                                         // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Propagate Immunity Fall Damage
	// void Propagate Immunity Fall Damage();                                                                                   // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanRiderPlayEmote
	// bool CanRiderPlayEmote(URiderComponent* Rider);                                                                          // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleEnemyFoleySoundLibrary
	// void HandleEnemyFoleySoundLibrary(UActorComponent* Rider, bool bIsRiding);                                               // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnMovementModeChanged
	// void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.IsSwimming
	// void IsSwimming(bool& IsSwimming);                                                                                       // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.StopSprinting
	// void StopSprinting();                                                                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RemoveGEByTag
	// void RemoveGEByTag(FGameplayTagContainer Tags);                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyGEToSelf
	// void ApplyGEToSelf(UClass* GameplayEffectClass, bool& IsValidClass);                                                     // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.KickRiderOffSelf
	// void KickRiderOffSelf();                                                                                                 // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.DetermineRateOfChange
	// void DetermineRateOfChange(double& rateOfChange);                                                                        // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CommitEnergyCosts
	// void CommitEnergyCosts(bool RequireAllEnergy, double EnergyCost, bool& Success);                                         // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TestThreshold
	// void TestThreshold(bool isDecaying, double CurrentValue, double testTreshold, bool PreviousState, bool& crossedThreshold); // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetWildlifeHealth
	// void SetWildlifeHealth();                                                                                                // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateValue
	// void UpdateValue(double TargetValue, double rateOfChange, double DeltaTime, double& updatedValue, bool& EnergyDepleted); // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRiding
	// void ToggleRiding(AActor* PlayerPawn, AActor* Target, bool ShouldRide, bool& bChangedRiding);                            // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ForceTaming
	// void ForceTaming(AActor* PlayerPawn, AActor* CreaturePawn, bool& IsTamingEnabled);                                       // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RestoreCollisionResponses
	// void RestoreCollisionResponses();                                                                                        // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyCollisionResponse
	// void ApplyCollisionResponse(TArray<TEnumAsByte>& Channels, TEnumAsByte<ECollisionResponse> Response);                    // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldCameraFocusOnRidable
	// bool ShouldCameraFocusOnRidable(URiderComponent* Rider);                                                                 // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateAnimInputBool
	// void UpdateAnimInputBool(AFortPawn* FortPawn, bool IsBeingRidden);                                                       // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderCapsuleSize
	// void GetRiderCapsuleSize(URiderComponent* Rider, double& RiderCapsuleRadius, double& RiderCapsuleHH);                    // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingEmoteCapsuleSize
	// void GetRidingEmoteCapsuleSize(URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingCapsuleSize
	// void GetRidingCapsuleSize(URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_IdleAnim_Add
	// void OnRep_IdleAnim_Add();                                                                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldSetAsViewTarget
	// bool ShouldSetAsViewTarget(URiderComponent* Rider);                                                                      // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderLocation
	// void GetRiderLocation(FVector& Location);                                                                                // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_AD51144144164FD235EE5BA4F6E87456
	// void Removed_AD51144144164FD235EE5BA4F6E87456();                                                                         // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Added_FBD936634BCC61A726DA279226E2F4BE
	// void Added_FBD936634BCC61A726DA279226E2F4BE();                                                                           // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_C4C6E29B4217C014B9DE0E80B7134D6E
	// void Removed_C4C6E29B4217C014B9DE0E80B7134D6E();                                                                         // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRidingAlternative
	// void ToggleRidingAlternative();                                                                                          // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStartedRiding
	// void HandleRiderStartedRiding(URiderComponent* Rider);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStoppedRiding
	// void HandleRiderStoppedRiding(URiderComponent* Rider);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateDebug
	// void UpdateDebug();                                                                                                      // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityHeld
	// void HandleAbilityHeld();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStarted
	// void HandleAbilityStarted();                                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStopped
	// void HandleAbilityStopped();                                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStarted
	// void HandleJumpStarted();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumping
	// void OnJumping(double JumpPitchInterpSpeed);                                                                             // [0x101681c] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumpingApex
	// void OnJumpingApex();                                                                                                    // [0x101681c] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.NPCPawnInteractWithDispatcher_Event
	// void NPCPawnInteractWithDispatcher_Event(AActor* AIPawn, AFortPlayerPawn* InteractingPlayerPawn);                        // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStart
	// void EnergyTrackingStart();                                                                                              // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStop
	// void EnergyTrackingStop();                                                                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateEnergy
	// void UpdateEnergy();                                                                                                     // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ConvertedDispatcher_Event
	// void ConvertedDispatcher_Event(bool Converted, AFortPawn* InstigatorPawn);                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnPawnHealthChanged_Event
	// void OnPawnHealthChanged_Event();                                                                                        // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UseEnergyAmountServer
	// void UseEnergyAmountServer(double EnergyCost);                                                                           // [0x101681c] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleCancelSprint
	// void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel);                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CheatSetStaminaPercent
	// void CheatSetStaminaPercent(float StaminaPercent);                                                                       // [0x101681c] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyUpdate
	// void OnEnergyUpdate(double Energy, bool bWarningActive);                                                                 // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyDepletedClient
	// void OnEnergyDepletedClient();                                                                                           // [0x101681c] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnSprintStarted
	// void OnSprintStarted();                                                                                                  // [0x101681c] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEatToRefuel
	// void OnEatToRefuel(double EnergyCost);                                                                                   // [0x101681c] Net|NetServer|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReTryJumpExit
	// void ReTryJumpExit();                                                                                                    // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ManualEnergyDepleted
	// void ManualEnergyDepleted();                                                                                             // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Stopped Riding
	// void Check Regen on Stopped Riding();                                                                                    // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Started Riding
	// void Check Regen on Started Riding();                                                                                    // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Activate Regen
	// void Activate Regen();                                                                                                   // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Deactivate Regen
	// void Deactivate Regen();                                                                                                 // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStopped
	// void HandleJumpStopped();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteBufferedJumpExit
	// void ExecuteBufferedJumpExit();                                                                                          // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CancelJumpExitAndJump
	// void CancelJumpExitAndJump();                                                                                            // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedClient
	// void MountLandedClient(FHitResult& Hit);                                                                                 // [0x101681c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TryConvertBufferedJumpExitToJump
	// void TryConvertBufferedJumpExitToJump();                                                                                 // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.MountLandedServer_JumpFatigue
	// void MountLandedServer_JumpFatigue(FHitResult& Hit);                                                                     // [0x101681c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteUbergraph_CreatureBaseRidableComponent
	// void ExecuteUbergraph_CreatureBaseRidableComponent(int32_t EntryPoint);                                                  // [0x101681c] Final|HasDefaults    
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIUpdateEnergy__DelegateSignature
	// void RidableUIUpdateEnergy__DelegateSignature(double Energy, bool bIsResting);                                           // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIStart__DelegateSignature
	// void RidableUIStart__DelegateSignature(FText Name, FSlateBrush Icon);                                                    // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJumpApex__DelegateSignature
	// void AudioOnJumpApex__DelegateSignature();                                                                               // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJump__DelegateSignature
	// void AudioOnJump__DelegateSignature(double JumpPitchInterpSpeed);                                                        // [0x101681c] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /RidingContent/Components/WolfRidableComponent.WolfRidableComponent_C
/// Size: 0x0000 (0x000DD0 - 0x000DD0)
class UWolfRidableComponent_C : public UCreatureBaseRidableComponent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3536;

public:
};

/// Class /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C
/// Size: 0x0044 (0x000DD0 - 0x000E14)
class UBoarRidableComponent_C : public UCreatureBaseRidableComponent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3604;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xDD0, 8, 0, 0})
	CMember(USoundBase*)                               BurtChargeStartSound                                        OFFSET(get<T>, {0xDD8, 8, 0, 0})
	CMember(UAudioComponent*)                          ChargeSoundComp                                             OFFSET(get<T>, {0xDE0, 8, 0, 0})
	DMember(double)                                    SprintCooldDownTime                                         OFFSET(get<double>, {0xDE8, 8, 0, 0})
	CMember(UClass*)                                   GESprintImpactPawn                                          OFFSET(get<T>, {0xDF0, 8, 0, 0})
	SMember(FGameplayTag)                              SprintImpactGameplayCueTag                                  OFFSET(getStruct<T>, {0xDF8, 4, 0, 0})
	CMember(UClass*)                                   GESprintImpactVehicle                                       OFFSET(get<T>, {0xE00, 8, 0, 0})
	SMember(FGameplayTag)                              SprintChargeImpact_Default_CueTag                           OFFSET(getStruct<T>, {0xE08, 4, 0, 0})
	SMember(FGameplayTag)                              SprintChargeImpact_Pawn_CueTag                              OFFSET(getStruct<T>, {0xE0C, 4, 0, 0})
	SMember(FGameplayTag)                              SprintChargeImpact_DestroyBuild_CueTag                      OFFSET(getStruct<T>, {0xE10, 4, 0, 0})


	/// Functions
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.OnReaction
	// void OnReaction(UObject* Object, FHitResult HitResult);                                                                  // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleRiderStoppedRiding
	// void HandleRiderStoppedRiding(URiderComponent* Rider);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleRiderStartedRiding
	// void HandleRiderStartedRiding(URiderComponent* Rider);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleAbilityStarted
	// void HandleAbilityStarted();                                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.OnReactionEvent
	// void OnReactionEvent(AActor* HitActor, bool bFromAsyncSweepBox, FCollisionReactionType CollisionReactionType, bool bIsFirstContinuousReactionOnDelayableActor, FHitResult& HitResult); // [0x101681c] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ExecuteUbergraph_BoarRidableComponent
	// void ExecuteUbergraph_BoarRidableComponent(int32_t EntryPoint);                                                          // [0x101681c] Final|HasDefaults    
};

/// Class /EventMode/Components/EventMode_Activator_Component.EventMode_Activator_Component_C
/// Size: 0x0000 (0x000210 - 0x000210)
class UEventMode_Activator_Component_C : public UFortGameFrameworkComponent_EventMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /NPCLibrary/Components/BP_PlayerStateCustomFeedMessages.BP_PlayerStateCustomFeedMessages_C
/// Size: 0x0000 (0x000108 - 0x000108)
class UBP_PlayerStateCustomFeedMessages_C : public UFortPlayerStateComponent_CustomFeedMessage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

