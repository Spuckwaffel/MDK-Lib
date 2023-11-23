
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ContextualTraversalRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering
/// Size: 0x0060 (0x000110 - 0x000170)
class UFortMovementMode_ExtClambering : public UFortMovementMode_ExtLogicTraversalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(UClass*)                                   LedgeLaunchCameraMode                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ClamberingTag                                               OFFSET(getStruct<T>, {0x118, 32, 0, 0})
	SMember(FGameplayTag)                              ClamberingStartedTag                                        OFFSET(getStruct<T>, {0x138, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ClamberingFinishedTag                                       OFFSET(getStruct<T>, {0x140, 32, 0, 0})
	CMember(UCameraShakeBase*)                         CameraShake                                                 OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FName)                                     LedgeLaunchSyncPointName                                    OFFSET(getStruct<T>, {0x168, 4, 0, 0})
	DMember(float)                                     LedgeLaunchSyncPointInterpSpeed                             OFFSET(get<float>, {0x16C, 4, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering.IsContextualActionPrototypeActive
	// bool IsContextualActionPrototypeActive();                                                                                // [0x9f19be8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering.BP_GetClamberLocation
	// FVector BP_GetClamberLocation();                                                                                         // [0x2372760] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.FortMovementMode_ExtClambering.BP_GetAnimationMontageInformation
	// void BP_GetAnimationMontageInformation(FSynchedActionInfo& BaseSynchedActionInfo, bool bIsLedgeLaunch, bool bHasFutureLedge, FVector& FutureLedgeWarpPoint, UAnimMontage*& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // [0x101681c] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
};

/// Class /Script/ClamberingCodeRuntime.InstancedLedgeActor
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class AInstancedLedgeActor : public AFortStaticMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/ClamberingCodeRuntime.LedgeLaunchWorldSubsystem
/// Size: 0x00F0 (0x000030 - 0x000120)
class ULedgeLaunchWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TWeakObjectPtr<UPBWLedgeConfigurationData*>) ConfigurationData                                         OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(UPBWLedgeConfigurationData*)               CachedConfigurationData                                     OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TMap<UClass*, FLedgeLaunchConfigEntry>)    CachedLedgeLaunchMap                                        OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Class /Script/ClamberingCodeRuntime.LedgeMeshComponent
/// Size: 0x0000 (0x000640 - 0x000640)
class ULedgeMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
};

/// Class /Script/ClamberingCodeRuntime.PBWLedgeConfigurationData
/// Size: 0x0140 (0x000030 - 0x000170)
class UPBWLedgeConfigurationData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(TMap<EPlayerBuiltWallType, TWeakObjectPtr>) MetalWalls                                                 OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<EPlayerBuiltWallType, TWeakObjectPtr>) StoneWalls                                                 OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<EPlayerBuiltWallType, TWeakObjectPtr>) WoodWalls                                                  OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TMap<EPlayerBuiltWallType, FLedgeLaunchConfigEntry>) Transforms                                        OFFSET(get<T>, {0x120, 80, 0, 0})
};

/// Class /Script/ClamberingCodeRuntime.PBWLedgeMeshComponent
/// Size: 0x0020 (0x000640 - 0x000660)
class UPBWLedgeMeshComponent : public ULedgeMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	DMember(bool)                                      bIsFrontFace                                                OFFSET(get<bool>, {0x638, 1, 0, 0})
	SMember(FVector)                                   LocalOffset                                                 OFFSET(getStruct<T>, {0x640, 24, 0, 0})
};

/// Class /Script/ClamberingCodeRuntime.ClamberingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClamberingCodeRuntime.ClamberingComponent
/// Size: 0x0CA0 (0x0000A8 - 0x000D48)
class UClamberingComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3400;

public:
	CMember(EClamberingState)                          LocalClamberingState                                        OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(EClamberingState)                          ReplicatedClamberingState                                   OFFSET(get<T>, {0xB1, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LockedTargetingData                                         OFFSET(getStruct<T>, {0xB8, 232, 0, 0})
	SMember(FReplicatedClamberingTargetingData_SimClient) ReplicatedTargetingData                                  OFFSET(getStruct<T>, {0x1A0, 56, 0, 0})
	SMember(FScalableFloat)                            ClamberingEnabled                                           OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberIndicatorEnabled                                     OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberStartMaxFallingDamageFraction                        OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileWalking                               OFFSET(get<bool>, {0x258, 1, 0, 0})
	DMember(bool)                                      bPerformTargetingWhileSwimming                              OFFSET(get<bool>, {0x259, 1, 0, 0})
	SMember(FScalableFloat)                            ServerFailDelay                                             OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            ServerValidatePlayerMaxDistance                             OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FClamberingInputConfig)                    InputConfig                                                 OFFSET(getStruct<T>, {0x2B0, 728, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge)          TargetingConfig_Ledge                                       OFFSET(getStruct<T>, {0x588, 968, 0, 0})
	SMember(FClamberingInputConfig_CachedValues)       InputConfigCachedValues                                     OFFSET(getStruct<T>, {0x950, 80, 0, 0})
	SMember(FClamberingTargetingConfig_Ledge_CachedContextualValues) TargetingConfig_Ledge_CachedContextualValues  OFFSET(getStruct<T>, {0x9A0, 104, 0, 0})
	SMember(FClamberingMovementConfig_Ledge)           MoveConfig_Ledge                                            OFFSET(getStruct<T>, {0xA08, 80, 0, 0})
	SMember(FScalableFloat)                            ClamberSyncTargetLedgeOffset                                OFFSET(getStruct<T>, {0xA58, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberingMaxAnalyticsEvents                                OFFSET(getStruct<T>, {0xA80, 40, 0, 0})
	SMember(FScalableFloat)                            SynchedActionFailDelay                                      OFFSET(getStruct<T>, {0xAA8, 40, 0, 0})
	CMember(UDataTable*)                               ClamberingAnimations                                        OFFSET(get<T>, {0xAD0, 8, 0, 0})
	CMember(UDataTable*)                               PrototypeClamberingAnimations                               OFFSET(get<T>, {0xAD8, 8, 0, 0})
	CMember(UClass*)                                   MovementModeExtension                                       OFFSET(get<T>, {0xAE0, 8, 0, 0})
	DMember(double)                                    LastTeleportTime                                            OFFSET(get<double>, {0xAE8, 8, 0, 0})
	DMember(bool)                                      bTutorialModeEnabled                                        OFFSET(get<bool>, {0xAF0, 1, 0, 0})
	SMember(FClamberingTargetingData)                  LocalTargetingData                                          OFFSET(getStruct<T>, {0xAF8, 232, 0, 0})
	SMember(FClamberingTargetingData)                  ParallelTargetingData                                       OFFSET(getStruct<T>, {0xBE0, 232, 0, 0})
	DMember(float)                                     QueuedInputTimer                                            OFFSET(get<float>, {0xCC8, 4, 0, 0})
	DMember(float)                                     InputEnabledTimer                                           OFFSET(get<float>, {0xCCC, 4, 0, 0})
	DMember(bool)                                      bJumpInputPressed                                           OFFSET(get<bool>, {0xCD0, 1, 0, 0})
	DMember(float)                                     JumpHeldInAirTime                                           OFFSET(get<float>, {0xCD4, 4, 0, 0})
	SMember(FGameplayTag)                              Tag_DisableClambering                                       OFFSET(getStruct<T>, {0xD40, 4, 0, 0})


	/// Functions
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.UnregisterMutatorUpdatedDelegate
	// void UnregisterMutatorUpdatedDelegate();                                                                                 // [0x9f1a314] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ShouldShowClamberIndicator
	// bool ShouldShowClamberIndicator();                                                                                       // [0x9f1a2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.SetTutorialModeEnabled
	// void SetTutorialModeEnabled(bool bEnabled);                                                                              // [0x9f1a270] Final|Native|Public|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.ServerStartClambering
	// void ServerStartClambering(FReplicatedClamberingTargetingData InReplicatedTargetingData, double ClientLastTeleportTime); // [0x9f19fd4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(APawn* AffectedPawn);                                                                // [0x9f19e04] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedTargetingData
	// void OnRep_ReplicatedTargetingData();                                                                                    // [0x9f19d0c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedLastTeleportTime
	// void OnRep_ReplicatedLastTeleportTime();                                                                                 // [0x18af9f8] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnRep_ReplicatedClamberingState
	// void OnRep_ReplicatedClamberingState();                                                                                  // [0x2b0a8d0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                         // [0x2d0dac0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x9f19cf8] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.NetMulticast_ClamberingLedgeFailed
	// void NetMulticast_ClamberingLedgeFailed(EClamberingFailedReason FailedReason, EClamberingState FailedState);             // [0x9f19c30] Net|NetReliableNative|Event|NetMulticast|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsTutorialModeEnabled
	// bool IsTutorialModeEnabled();                                                                                            // [0x9f19c0c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsClamberingEnabled
	// bool IsClamberingEnabled();                                                                                              // [0x9f19bc4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.IsAutoClamberingEnabled
	// bool IsAutoClamberingEnabled();                                                                                          // [0x9f19ba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataValid
	// void HandleTargetingDataValid(FClamberingTargetingData& TargetingData);                                                  // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetingDataInvalid
	// void HandleTargetingDataInvalid();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorHealthChanged
	// void HandleTargetActorHealthChanged();                                                                                   // [0x9f19b8c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleTargetActorDestroyed
	// void HandleTargetActorDestroyed(AActor* Actor);                                                                          // [0x9f19b0c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerTeleported
	// void HandleOwnerTeleported(AFortPawn* TeleportedOwner);                                                                  // [0x2d3fdd8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerMovementModeChanged
	// void HandleOwnerMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x1678f80] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                                // [0x9f19a8c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDied
	// void HandleOwnerDied(AFortPawn* DeadPawn);                                                                               // [0x9f19a0c] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerDBNO
	// void HandleOwnerDBNO();                                                                                                  // [0x18afa98] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInvalidated
	// void HandleOwnerASCInvalidated();                                                                                        // [0x18afac0] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleOwnerASCInitialized
	// void HandleOwnerASCInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* AffectedPawn);      // [0x18473ec] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetOutOfActivationRange
	// void HandleClamberingTargetOutOfActivationRange();                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.HandleClamberingTargetInActivationRange
	// void HandleClamberingTargetInActivationRange();                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.GetAnimMontage
	// UAnimMontage* GetAnimMontage(float& OutPlayRate);                                                                        // [0x9f19970] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.DrawDebugHUD
	// void DrawDebugHUD(AHUD* HUD, UCanvas* Canvas);                                                                           // [0x5ead474] Final|Native|Protected 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeEnabled
	// void BP_TutorialModeEnabled();                                                                                           // [0x101681c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_TutorialModeDisabled
	// void BP_TutorialModeDisabled();                                                                                          // [0x101681c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_IsValidTargetActor
	// void BP_IsValidTargetActor(AActor* TargetActor, bool& bIsValidTargetActor);                                              // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleSynchedActionStarted
	// void BP_HandleSynchedActionStarted(FSynchedActionInfo& SynchedActionInfo);                                               // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_HandleClamberingStateChanged
	// void BP_HandleClamberingStateChanged(EClamberingState OldClamberingState, EClamberingState NewClamberingState);          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartTargeting
	// void BP_CanStartTargeting(bool& bCanStartTargeting);                                                                     // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/ClamberingCodeRuntime.ClamberingComponent.BP_CanStartClambering
	// void BP_CanStartClambering(bool& bCanStartClambering);                                                                   // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/ClamberingCodeRuntime.ClamberingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UClamberingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingRuntimeData
/// Size: 0x00B0 (0x0000D0 - 0x000180)
class FFortMovementMode_ClamberingRuntimeData : public FFortMovementMode_TraversalBaseRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Struct /Script/ClamberingCodeRuntime.FortMovementMode_ClamberingCreationData
/// Size: 0x00B0 (0x000130 - 0x0001E0)
class FFortMovementMode_ClamberingCreationData : public FFortMovementMode_TraversalBaseCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FSynchedActionWarpPointInfo_Replicated)    LedgeLaunchWarpPointInfo                                    OFFSET(getStruct<T>, {0x130, 160, 0, 0})
	DMember(bool)                                      bCanStandOnLedge                                            OFFSET(get<bool>, {0x1D0, 1, 0, 0})
	DMember(bool)                                      bHasFixedLedgeLaunchWarpPoint                               OFFSET(get<bool>, {0x1D1, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.LedgeLaunchConfigEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FLedgeLaunchConfigEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTransform>)                        LedgeTransforms                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig
/// Size: 0x02D8 (0x000000 - 0x0002D8)
class FClamberingInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FScalableFloat)                            ClamberActivationHorizontalRange                            OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ClamberActivationVerticalRange                              OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            EnableInputDelay                                            OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            QueuedInputWindow                                           OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HeldInputDuration                                           OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	CMember(EClamberingActivationMode)                 ActivationMode                                              OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FScalableFloat)                            AutoStartMovementThreshold                                  OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartLookAtThreshold                                    OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckCastRadius                                OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckHorizontalRange                           OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AutoStartWallCheckLookAtThresholdMultiplier                 OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            TargetInvalidateDistance                                    OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            TargetAimInvalidateAngle                                    OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetActorMovementInvalidateDistance                       OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDirectionalLedgeLaunchAngle                              OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            PBWLedgeLaunchMaxHorizontalTranslation                      OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultLedgeLaunchVerticalTranslation                       OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            PBWLedgeLaunchVerticalTranslation                           OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            PBWNextLedgeLaunchVerticalTranslation                       OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge
/// Size: 0x03C8 (0x000000 - 0x0003C8)
class FClamberingTargetingConfig_Ledge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FScalableFloat)                            ForwardCastDistance                                         OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastRadius                                           OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            FowardCast2D                                                OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            VerticalSurfaceThreshold                                    OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HorizontalSurfaceThreshold                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardDistanceCapsuleHeightMultiplier                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            UpwardStartDistanceCapsuleHeightMultiplier                  OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardDistanceCapsuleHeightMultiplier                     OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeight                                          OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeHeightWater                                     OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            FallingSpeedThreshold                                       OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingHeight                                   OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeFallingWaterHeight                              OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardSphereCastRadius                                     OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSphereCastRadius                                    OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            AllowNonWalkableSurfaces                                    OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationEnabled                                     OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleRadiusModifier                       OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleHalfHeightModifier                   OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetValidationCapsuleBottomVerticalOffset                 OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FFortReleaseVersion)                       ContextualActionPrototypeVersion                            OFFSET(getStruct<T>, {0x320, 4, 0, 0})
	SMember(FScalableFloat)                            MinimumLedgeDepth                                           OFFSET(getStruct<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            DownwardSweepOffset                                         OFFSET(getStruct<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            FutureLedgeLaunchMaxVerticalDetectionRange                  OFFSET(getStruct<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            FutureLedgeLaunchMaxHorizontalDetectionRange                OFFSET(getStruct<T>, {0x3A0, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingInputConfig_CachedValues
/// Size: 0x0050 (0x000000 - 0x000050)
class FClamberingInputConfig_CachedValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingConfig_Ledge_CachedContextualValues
/// Size: 0x0068 (0x000000 - 0x000068)
class FClamberingTargetingConfig_Ledge_CachedContextualValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingTargetingDebugDrawData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Capsule
/// Size: 0x0028 (0x000028 - 0x000050)
class FClamberingTargetingDebugDrawData_Capsule : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Line
/// Size: 0x0018 (0x000028 - 0x000040)
class FClamberingTargetingDebugDrawData_Line : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_Sphere
/// Size: 0x0008 (0x000028 - 0x000030)
class FClamberingTargetingDebugDrawData_Sphere : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_DirectionalArrow
/// Size: 0x0020 (0x000028 - 0x000048)
class FClamberingTargetingDebugDrawData_DirectionalArrow : public FClamberingTargetingDebugDrawData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_CapsuleCast
/// Size: 0x0020 (0x000050 - 0x000070)
class FClamberingTargetingDebugDrawData_CapsuleCast : public FClamberingTargetingDebugDrawData_Capsule
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugDrawData_SphereCast
/// Size: 0x0018 (0x000030 - 0x000048)
class FClamberingTargetingDebugDrawData_SphereCast : public FClamberingTargetingDebugDrawData_Sphere
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
class FClamberingTargetingDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingDebugData_Ledge
/// Size: 0x0000 (0x000001 - 0x000001)
class FClamberingTargetingDebugData_Ledge : public FClamberingTargetingDebugData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingTargetingData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FClamberingTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bCanStandOnLedge                                            OFFSET(get<bool>, {0x1, 1, 1, 1})
	CMember(AActor*)                                   SourceActor                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   SourceAim                                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   WallLocation                                                OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   WallNormal                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   TargetNormal                                                OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TargetActorComponent                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FVector)                                   TargetActorComponentLocation                                OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bHasNextLedgeLaunchTarget                                   OFFSET(get<bool>, {0xCC, 1, 0, 0})
	SMember(FVector)                                   NextLedgeLaunchWarpPoint                                    OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData
/// Size: 0x0078 (0x000000 - 0x000078)
class FReplicatedClamberingTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector_NetQuantize10)                     SourceLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantize100)                    WallLocation                                                OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      OFFSET(get<uint16_t>, {0x38, 2, 0, 0})
	DMember(uint16_t)                                  WallNormalPitchQuantized                                    OFFSET(get<uint16_t>, {0x3A, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(uint16_t)                                  TargetNormalYawQuantized                                    OFFSET(get<uint16_t>, {0x58, 2, 0, 0})
	DMember(uint16_t)                                  TargetNormalPitchQuantized                                  OFFSET(get<uint16_t>, {0x5A, 2, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TargetActorComponent                                        OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(int8_t)                                    AnimationIndex                                              OFFSET(get<int8_t>, {0x74, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ReplicatedClamberingTargetingData_SimClient
/// Size: 0x0038 (0x000000 - 0x000038)
class FReplicatedClamberingTargetingData_SimClient : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EClamberingType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  WallNormalYawQuantized                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FVector_NetQuantize100)                    TargetLocation                                              OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      TargetActorComponent                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	DMember(int8_t)                                    AnimationIndex                                              OFFSET(get<int8_t>, {0x34, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingMovementConfig_Ledge
/// Size: 0x0050 (0x000000 - 0x000050)
class FClamberingMovementConfig_Ledge : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            duration                                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            BlockCheckTickRate                                          OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnalytics_ClamberEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FClamberingAnalytics_ClamberEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   MatchTime                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EClamberingType)                           ClamberType                                                 OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FVector)                                   ClamberLocation                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EClamberingFailedReason)                   FailureReason                                               OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ClamberingCodeRuntime.ClamberingAnimationEntry
/// Size: 0x0010 (0x000008 - 0x000018)
class FClamberingAnimationEntry : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UAnimMontage*)                             Montage                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     MinClamberHeight                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bLedgeLaunch                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Enum /Script/ClamberingCodeRuntime.EPlayerBuiltWallType
/// Size: 0x11
enum EPlayerBuiltWallType : uint8_t
{
	EPlayerBuiltWallType__Solid0                                                     = 0,
	EPlayerBuiltWallType__Windows1                                                   = 1,
	EPlayerBuiltWallType__WindowC2                                                   = 2,
	EPlayerBuiltWallType__WindowSide3                                                = 3,
	EPlayerBuiltWallType__DoorC4                                                     = 4,
	EPlayerBuiltWallType__DoorS5                                                     = 5,
	EPlayerBuiltWallType__DoorSide6                                                  = 6,
	EPlayerBuiltWallType__Archway7                                                   = 7,
	EPlayerBuiltWallType__ArchwayLarge8                                              = 8,
	EPlayerBuiltWallType__ArchwayLargeSupport9                                       = 9,
	EPlayerBuiltWallType__EPlayerBuiltWallType_MAX10                                 = 10
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

