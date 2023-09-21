
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
/// Size: 0x00B8 (0x000990 - 0x000A48)
class AFortGameplayCueNotify_CrownWear : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2632;

public:
	SMember(FScalableFloat)                            IntroFXVisualVolume                                         OFFSET(get<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXTimelineRate                                         OFFSET(get<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXUpdatePrecision                                      OFFSET(get<T>, {0x9E0, 40, 0, 0})
	CMember(TArray<FScalableFloat>)                    IntroFXUpdateFrequencies                                    OFFSET(get<T>, {0xA08, 16, 0, 0})
	CMember(UCurveVector*)                             IntroFXCurve                                                OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(UTimelineComponent*)                       IntroFXTimeline                                             OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(UFXSystemComponent*)                       CrownParticleComponent                                      OFFSET(get<T>, {0xA28, 8, 0, 0})
};



	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.RemoveCrownWear
	// void RemoveCrownWear();                                                                                                  // [0x14e4958] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.OnIntroFXTimelineTick
	// void OnIntroFXTimelineTick(FVector CurveValue);                                                                          // [0x17b3040] Final|Native|Protected|HasDefaults 
	// Function /Script/VictoryCrownsRuntime.FortGameplayCueNotify_CrownWear.ApplyCrownWear
	// void ApplyCrownWear(TArray<UFXSystemComponent*>& ParticleComponents);                                                    // [0x21e5764] Final|Native|Protected|HasOutParms|BlueprintCallable 
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
};



	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonRoyalRoyale
	// void HandleOnHasWonRoyalRoyale();                                                                                        // [0x9e93238] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonCrownInMatch
	// void HandleOnHasWonCrownInMatch();                                                                                       // [0x9e93224] Final|Native|Private 
/// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
/// Size: 0x01C0 (0x0000A8 - 0x000268)
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FMulticastInlineDelegate)                  OnVictoryCrownStatusChanged                                 OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonCrownInMatch                                        OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonRoyalRoyale                                         OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) CrownInventoryItemClass                                     OFFSET(get<T>, {0x108, 32, 0, 0})
	DMember(bool)                                      bWonCrownInMatch                                            OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bWonRoyalRoyale                                             OFFSET(get<bool>, {0x129, 1, 0, 0})
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) RoyalRoyaleEmoteItemDefinition                        OFFSET(get<T>, {0x138, 32, 0, 0})
	CMember(UDataTable*)                               VictoryCrownPlaylistData                                    OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FGameplayTagContainer)                     SourceTagsForRoyalRoyale                                    OFFSET(get<T>, {0x160, 32, 0, 0})
	SMember(FVictoryCrownAccountData)                  VictoryCrownAccountData                                     OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FScalableFloat)                            InitialGrantDelay                                           OFFSET(get<T>, {0x190, 40, 0, 0})
	DMember(bool)                                      bKillFeedBroadcastReady                                     OFFSET(get<bool>, {0x260, 1, 0, 0})
};



	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
	// void OnRep_WonRoyalRoyale();                                                                                             // [0x9e93474] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
	// void OnRep_WonCrownInMatch();                                                                                            // [0x9e93440] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_VictoryCrownAccountData
	// void OnRep_VictoryCrownAccountData();                                                                                    // [0x9e93424] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
	// void OnAthenaProfileInitialized();                                                                                       // [0x2d79908] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
	// bool IsCrownInPlayerInventory();                                                                                         // [0x9e93400] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
	// bool HasWonRoyalRoyale();                                                                                                // [0x9e933e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
	// bool HasWonCrownInMatch();                                                                                               // [0x9e933d0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
	// void HandlePawnChanged(APawn* OldPawn, APawn* NewPawn);                                                                  // [0x9e9324c] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft
	// void HandleExitAircraft(AController* ExitingController);                                                                 // [0x9e93198] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
	// void HandleEnterAircraft();                                                                                              // [0x9e93184] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
	// int32_t GetVictoryCrownsBestowedCount();                                                                                 // [0x9e92fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
	// int32_t GetRoyalRoyaleAchievedCount();                                                                                   // [0x58cb67c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
	// UFortWorldItem* GetCrownInPlayerInventory();                                                                             // [0x9e92f8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
	// void DebugForceSetRoyalRoyaleAchievedCount(int32_t NewRoyalRoyaleCount);                                                 // [0x5cc6328] Final|Exec|Native|Public 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
	// void CacheAccountItemData();                                                                                             // [0x2d79908] Final|Native|Private 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
	// bool AuthoritySquadHasSeenCrownItem(UFortItem* CrownItem, bool bDropped);                                                // [0x9e92ec8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
	// bool AuthorityHasSquadHeldCrownItem(UFortItem* CrownItem);                                                               // [0x9e92e38] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
	// bool AuthorityHasSquadDroppedCrownItem(UFortItem* CrownItem);                                                            // [0x9e92da8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
	// bool AuthorityHasHeldCrownItem(UFortItem* CrownItem);                                                                    // [0x9e92d18] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
	// Function /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
	// bool AuthorityHasDroppedCrownItem(UFortItem* CrownItem);                                                                 // [0x9e92c88] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|Const 
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
	CMember(TArray<UFortControllerComponent_VictoryCrowns*>) CachedCrownComponents                                 OFFSET(get<T>, {0x90, 16, 0, 0})
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
	SMember(FText)                                     KillFeedFormat_Dropped                                      OFFSET(get<T>, {0xB0, 24, 0, 0})
	SMember(FText)                                     KillFeedFormat_PickedUp                                     OFFSET(get<T>, {0xC8, 24, 0, 0})
};



	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
	// void OnRep_CrownBearerPlayerStates();                                                                                    // [0x2e1fe88] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
	// bool IsCrownBearer(AFortPlayerStateAthena* FortPSA);                                                                     // [0x2d90998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
	// void HandleCrownStatusChanged(AFortPlayerControllerAthena* FortPlayerControllerAthena, UFortItem* CrownItem);            // [0x9e92fc8] Final|Native|Protected 
	// Function /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
	// void ClientKillFeedMessage(AFortPlayerStateAthena* FortPSA, bool bAdded);                                                // [0x1ea9180] Net|NetReliableNative|Event|NetMulticast|Public 
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
};



	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged
	// void PlaylistChanged();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bHasWonRoyalRoyale                                          OFFSET(get<bool>, {0xA0, 1, 0, 0})
};



	/// Functions
	// Function /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
	// bool GetWonRoyalRoyale();                                                                                                // [0x754416c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Struct /Script/VictoryCrownsRuntime.VictoryCrownPlaylistData
/// Size: 0x0008 (0x000008 - 0x000010)
class FVictoryCrownPlaylistData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxRankingForCrownAward                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

