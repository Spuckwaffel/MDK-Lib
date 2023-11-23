
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModelViewViewModel
/// dependency: ModularGameplay

/// Class /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear
/// Size: 0x00B8 (0x0009B0 - 0x000A68)
class AFortGameplayCueNotify_CrownWear : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
	SMember(FScalableFloat)                            IntroFXVisualVolume                                         OFFSET(getStruct<T>, {0x9B0, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXTimelineRate                                         OFFSET(getStruct<T>, {0x9D8, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXUpdatePrecision                                      OFFSET(getStruct<T>, {0xA00, 40, 0, 0})
	CMember(TArray<FScalableFloat>)                    IntroFXUpdateFrequencies                                    OFFSET(get<T>, {0xA28, 16, 0, 0})
	CMember(UCurveVector*)                             IntroFXCurve                                                OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(UTimelineComponent*)                       IntroFXTimeline                                             OFFSET(get<T>, {0xA40, 8, 0, 0})
	CMember(UFXSystemComponent*)                       CrownParticleComponent                                      OFFSET(get<T>, {0xA48, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.RemoveCrownWear
	// void RemoveCrownWear();                                                                                                  // [0x27ebaa8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.OnIntroFXTimelineTick
	// void OnIntroFXTimelineTick(FVector CurveValue);                                                                          // [0x10892b0] Final|Native|Protected|HasDefaults 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.ApplyCrownWear
	// void ApplyCrownWear(TArray<UFXSystemComponent*>& ParticleComponents);                                                    // [0x24efd70] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UFortVictoryCrownViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   BestowedCount                                               OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bHasWonCrownInMatch                                         OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bHasWonRoyalRoyale                                          OFFSET(get<bool>, {0x6D, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortControllerComponent_VictoryCrowns*>) BoundVictoryCrownsComponent                   OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonRoyalRoyale
	// void HandleOnHasWonRoyalRoyale();                                                                                        // [0xa2ec780] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonCrownInMatch
	// void HandleOnHasWonCrownInMatch();                                                                                       // [0xa2ec76c] Final|Native|Private 
};

/// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
/// Size: 0x01C0 (0x0000A8 - 0x000268)
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FMulticastInlineDelegate)                  OnVictoryCrownStatusChanged                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonCrownInMatch                                        OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonRoyalRoyale                                         OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) CrownInventoryItemClass                                     OFFSET(get<T>, {0x108, 32, 0, 0})
	DMember(bool)                                      bWonCrownInMatch                                            OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bWonRoyalRoyale                                             OFFSET(get<bool>, {0x129, 1, 0, 0})
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) RoyalRoyaleEmoteItemDefinition                        OFFSET(get<T>, {0x138, 32, 0, 0})
	CMember(UDataTable*)                               VictoryCrownPlaylistData                                    OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FGameplayTagContainer)                     SourceTagsForRoyalRoyale                                    OFFSET(getStruct<T>, {0x160, 32, 0, 0})
	SMember(FVictoryCrownAccountData)                  VictoryCrownAccountData                                     OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FScalableFloat)                            InitialGrantDelay                                           OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	DMember(bool)                                      bKillFeedBroadcastReady                                     OFFSET(get<bool>, {0x260, 1, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
	// void OnRep_WonRoyalRoyale();                                                                                             // [0xa2eca14] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
	// void OnRep_WonCrownInMatch();                                                                                            // [0xa2ec9e0] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_VictoryCrownAccountData
	// void OnRep_VictoryCrownAccountData();                                                                                    // [0xa2ec9c4] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnEnterAircraft
	// void OnEnterAircraft(AController* EnteringController);                                                                   // [0xa2ec948] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
	// void OnAthenaProfileInitialized();                                                                                       // [0x2b7b1c8] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
	// bool IsCrownInPlayerInventory();                                                                                         // [0xa2ec924] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
	// bool HasWonRoyalRoyale();                                                                                                // [0xa2ec90c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
	// bool HasWonCrownInMatch();                                                                                               // [0x708cf04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
	// void HandlePawnChanged(APawn* OldPawn, APawn* NewPawn);                                                                  // [0xa2ec794] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft
	// void HandleExitAircraft(AController* ExitingController);                                                                 // [0xa2ec6e0] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
	// void HandleEnterAircraft();                                                                                              // [0xa2ec6cc] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
	// int32_t GetVictoryCrownsBestowedCount();                                                                                 // [0xa2ec4cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
	// int32_t GetRoyalRoyaleAchievedCount();                                                                                   // [0x5756384] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
	// UFortWorldItem* GetCrownInPlayerInventory();                                                                             // [0xa2ec4a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
	// void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount);                                                 // [0x5b804e4] Final|Exec|Native|Public 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
	// void CacheAccountItemData();                                                                                             // [0x2b7b1c8] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
	// bool AuthoritySquadHasSeenCrownItem(UFortItem* CrownItem, bool bDropped);                                                // [0xa2ec3e4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
	// bool AuthorityHasSquadHeldCrownItem(UFortItem* CrownItem);                                                               // [0xa2ec354] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
	// bool AuthorityHasSquadDroppedCrownItem(UFortItem* CrownItem);                                                            // [0xa2ec2c4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
	// bool AuthorityHasHeldCrownItem(UFortItem* CrownItem);                                                                    // [0xa2ec234] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
	// bool AuthorityHasDroppedCrownItem(UFortItem* CrownItem);                                                                 // [0xa2ec1a4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_HasCrown
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_TotalRoyalRoyales
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    CachedCrownComponents                                       OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_TotalVictoryCrowns
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<AFortPlayerStateAthena*>)           CrownBearerPlayerStates                                     OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FText)                                     KillFeedFormat_Dropped                                      OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FText)                                     KillFeedFormat_PickedUp                                     OFFSET(getStruct<T>, {0xC8, 24, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
	// void OnRep_CrownBearerPlayerStates();                                                                                    // [0x2b45e08] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
	// bool IsCrownBearer(AFortPlayerStateAthena* FortPSA);                                                                     // [0x2b7b1d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
	// void HandleCrownStatusChanged(AFortPlayerControllerAthena* FortPlayerControllerAthena, UFortItem* CrownItem);            // [0xa2ec4e4] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
	// void ClientKillFeedMessage(AFortPlayerStateAthena* FortPSA, bool bAdded);                                                // [0x2b99260] Net|NetReliableNative|Event|NetMulticast|Public 
};

/// Class /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UDataTable*)                               VictoryCrownPlaylistData                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bInitializeSuccess                                          OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bSelectedPlaylistSupportCrown                               OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(UFortSocialParty*)                         PersistentParty                                             OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged
	// void PlaylistChanged();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bHasWonRoyalRoyale                                          OFFSET(get<bool>, {0xA0, 1, 0, 0})


	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
	// bool GetWonRoyalRoyale();                                                                                                // [0x77a44bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/VictoryCrownsRuntime.VictoryCrownPlaylistData
/// Size: 0x0008 (0x000008 - 0x000010)
class FVictoryCrownPlaylistData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxRankingForCrownAward                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

