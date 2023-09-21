
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay
/// dependency: NetCore

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM
/// Size: 0x0030 (0x000338 - 0x000368)
class AFortAthenaMutator_SpecialEventTODM : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TArray<FSpecialEventTODMPhaseData>)        PhaseDataArray                                              OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(ASpecialEventScript*)                      SpecialEventScript                                          OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(AFortTimeOfDayManager*)                    SpawnedTODM                                                 OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEventTODM.OnPhaseActivated
	// void OnPhaseActivated(ASpecialEventScript* InSpecialEventScript, ASpecialEventPhase* InSpecialEventPhase);               // [0x9debfe4] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_DestroyActorsAndComponents
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_DestroyActorsAndComponents : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents
/// Size: 0x0030 (0x000338 - 0x000368)
class AFortAthenaMutator_DestroyActorsAndComponents : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(TArray<FDestroyActorsAndComponentsMutator_ActorDefinition>) ActorDefinitions                           OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.SetActorDefinitionsEnabled
	// void SetActorDefinitionsEnabled(FGameplayTagContainer& InTags, bool bEnabled);                                           // [0x9de9ef8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.PermanentlyDisableActorDefinitions
	// void PermanentlyDisableActorDefinitions(FGameplayTagContainer& InTags);                                                  // [0x7637594] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnTrackedActorDestroyed
	// void OnTrackedActorDestroyed(AActor* DestroyedActor);                                                                    // [0x9dec5dc] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnRep_ActorDefinitions
	// void OnRep_ActorDefinitions(TArray<FDestroyActorsAndComponentsMutator_ActorDefinition>& OldActorDefinitions);            // [0x9dec2f4] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_DestroyActorsAndComponents.OnActorSpawned
	// void OnActorSpawned(AActor* Actor);                                                                                      // [0x9deb970] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_FakeKillRelevancy
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_FakeKillRelevancy : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy
/// Size: 0x0188 (0x0000A8 - 0x000230)
class UFortControllerComponent_FakeKillRelevancy : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FFakeKillRelevancyPlayerDataArray)         PlayerDataArray                                             OFFSET(getStruct<T>, {0xA8, 288, 0, 0})
	CMember(TMap<AFortPlayerStateAthena*, EFakeKillRelevancyPlayerKillStep>) ClientPlayerStateKillStepMap          OFFSET(get<T>, {0x1C8, 80, 0, 0})
	DMember(char)                                      ResetCounter                                                OFFSET(get<char>, {0x218, 1, 0, 0})
	CMember(TArray<AFortPlayerStateAthena*>)           DebugSupergroupPlayerStates                                 OFFSET(get<T>, {0x220, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.ResetRelevancy
	// void ResetRelevancy();                                                                                                   // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.PlayKillEffects
	// void PlayKillEffects(FFakeKillRelevancyPlayerDataEntry& FakeKillData, float RelevancyDelay);                             // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnRep_ResetCounter
	// void OnRep_ResetCounter();                                                                                               // [0x9dec510] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.OnKillEffectsPlayed
	// void OnKillEffectsPlayed(AFortPlayerStateAthena* PlayerState);                                                           // [0x9debbf0] Final|BlueprintCosmetic|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.GetDeathLocation
	// FVector GetDeathLocation(AFortPlayerStateAthena* PlayerState);                                                           // [0x9deb470] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnServer
	// void CancelKillEffectsOnServer();                                                                                        // [0x1ebf994] BlueprintAuthorityOnly|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_FakeKillRelevancy.CancelKillEffectsOnClient
	// void CancelKillEffectsOnClient(TArray<AFortPlayerStateAthena*>& PlayerStates);                                           // [0x1ebf994] BlueprintCosmetic|Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
/// Size: 0x0060 (0x000440 - 0x0004A0)
class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(UClass*)                                   FakeKillControllerComponentClass                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(TArray<FFakeKillRelevancyPhaseData>)       RelevancyPhaseDataArray                                     OFFSET(get<T>, {0x448, 16, 0, 0})
	DMember(int32_t)                                   PhaseNum                                                    OFFSET(get<int32_t>, {0x458, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.StartNextKillWave
	// void StartNextKillWave();                                                                                                // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.SetUpKillPhase
	// void SetUpKillPhase(int32_t MaxPlayersRemaining, FGameplayTag& Reason, int32_t NumWaves, float RelevancyDelay);          // [0x9ded7c8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.ResetRelevancy
	// void ResetRelevancy();                                                                                                   // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy.EndWave
	// void EndWave(int32_t EndPhaseNum, int32_t WaveNum);                                                                      // [0x5a0006c] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FString)                                   GameFeatureToLoad                                           OFFSET(getStruct<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature.OnPlaylistDataReady
	// void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x9dec0a8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TArray<FString>)                           AllowedGameFeatures                                         OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures.OnPlaylistDataReady
	// void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x9dec1d8] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCheatManager_SpecialEvent
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortCheatManager_SpecialEvent : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent
/// Size: 0x0470 (0x000338 - 0x0007A8)
class AFortAthenaMutator_SpecialEvent : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1960;

public:
	SMember(FMulticastInlineDelegate)                  TeleportAllPlayersFinished                                  OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPawnLoaded                                                OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInitController                                            OFFSET(getStruct<T>, {0x358, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResumeGame                                                OFFSET(getStruct<T>, {0x368, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialClientEvent                                        OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHandleLogout                                              OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClientInitialLoadingFinished                              OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	DMember(bool)                                      bPlayersAreInvincible                                       OFFSET(get<bool>, {0x410, 1, 0, 0})
	DMember(int32_t)                                   MinimumScoreBumpForAutomadeGoal                             OFFSET(get<int32_t>, {0x438, 4, 0, 0})
	CMember(TArray<float>)                             ScoreBrackets                                               OFFSET(get<T>, {0x440, 16, 0, 0})
	DMember(bool)                                      bEnforceInfiniteSafeZonePhase                               OFFSET(get<bool>, {0x450, 1, 0, 0})
	SMember(FName)                                     WarmupIslandPlayerStartTag                                  OFFSET(getStruct<T>, {0x454, 4, 0, 0})
	DMember(bool)                                      bAllowInventoryOpen                                         OFFSET(get<bool>, {0x458, 1, 0, 0})
	SMember(FScalableFloat)                            bAllowFullScreenMap                                         OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	DMember(bool)                                      bShouldClearFrontEndMapMarkers                              OFFSET(get<bool>, {0x488, 1, 0, 0})
	DMember(bool)                                      bBlockTeamIndicators                                        OFFSET(get<bool>, {0x489, 1, 0, 0})
	DMember(int32_t)                                   ForceDisplaySquadInfoDuringGamePhases                       OFFSET(get<int32_t>, {0x48C, 4, 0, 0})
	DMember(bool)                                      bAllowSquadListLocalPlayerInSplitscreen                     OFFSET(get<bool>, {0x490, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UIToHideDuringSpecialEvent                                  OFFSET(getStruct<T>, {0x498, 32, 0, 0})
	SMember(FGameplayTagContainer)                     UIToHideWhenInInfiniteWarmup                                OFFSET(getStruct<T>, {0x4B8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ClientEventsThatUnhideHiddenWhileLoadingHUDElements         OFFSET(getStruct<T>, {0x4D8, 32, 0, 0})
	DMember(bool)                                      bForceGarbageCollectionAfterUnloadOnServer                  OFFSET(get<bool>, {0x4F8, 1, 0, 0})
	DMember(bool)                                      bForceGarbageCollectionAfterUnloadOnClient                  OFFSET(get<bool>, {0x4F9, 1, 0, 0})
	DMember(bool)                                      bFullPurgeGC                                                OFFSET(get<bool>, {0x4FA, 1, 0, 0})
	CMember(AFortAthenaAircraft*)                      EventAircraft                                               OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(FAircraftFlightInfo)                       EventAircraftInfo                                           OFFSET(getStruct<T>, {0x508, 72, 0, 0})
	CMember(UClass*)                                   EventAircraftClass                                          OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(ASpecialEventScript*)                      ScriptActor                                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(bool)                                      bDisableHUD                                                 OFFSET(get<bool>, {0x560, 1, 0, 0})
	DMember(char)                                      GameResumed                                                 OFFSET(get<char>, {0x561, 1, 0, 0})
	SMember(FVector)                                   AdditionalViewpoint                                         OFFSET(getStruct<T>, {0x568, 24, 0, 0})
	DMember(bool)                                      bParachutesDisabled                                         OFFSET(get<bool>, {0x580, 1, 0, 0})
	SMember(FString)                                   LastCSVEventName                                            OFFSET(getStruct<T>, {0x588, 16, 0, 0})
	DMember(bool)                                      bCanStreamBuildingFoundationsIn                             OFFSET(get<bool>, {0x598, 1, 0, 0})
	DMember(int32_t)                                   AllPlayerTeleportedCount                                    OFFSET(get<int32_t>, {0x59C, 4, 0, 0})
	SMember(FFortDelayRTMMData)                        DelayPlayersFromReturningToLobbyData                        OFFSET(getStruct<T>, {0x5A0, 16, 0, 0})
	SMember(FName)                                     NamedWeightForContainerLootRoll                             OFFSET(getStruct<T>, {0x5B0, 4, 0, 0})
	DMember(float)                                     WeightForContainerLootRoll                                  OFFSET(get<float>, {0x5B4, 4, 0, 0})
	CMember(TArray<FFortSpecialEventEmoteData>)        SpecialEventEmoteData                                       OFFSET(get<T>, {0x5E8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     BlockedNativeActions                                        OFFSET(getStruct<T>, {0x5F8, 32, 0, 0})
	CMember(EFortItemType)                             DesiredQuickbarItemTypeAfterRemove                          OFFSET(get<T>, {0x618, 1, 0, 0})
	CMember(UInputComponent*)                          SpecialEventsInputComponent                                 OFFSET(get<T>, {0x620, 8, 0, 0})
	DMember(bool)                                      bLockingOnFocalPoint                                        OFFSET(get<bool>, {0x628, 1, 0, 0})
	CMember(TArray<FFortSpecialEventOverrideParts>)    SpecialEventOverrideParts                                   OFFSET(get<T>, {0x630, 16, 0, 0})
	SMember(FFortSpecialEventGEData)                   GameplayEffectToApplyOnSwapToDefault                        OFFSET(getStruct<T>, {0x640, 16, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, int32_t>)           OverridePartsArrayIndexMap                                  OFFSET(get<T>, {0x650, 80, 0, 0})
	CMember(TArray<FFortSpecialEventGEData>)           GameplayEffectsToApplyOnLogin                               OFFSET(get<T>, {0x6A0, 16, 0, 0})
	CMember(TArray<FSpecialEventMapData>)              TerrainMapsToUnload                                         OFFSET(get<T>, {0x6B0, 16, 0, 0})
	CMember(TArray<AFortPlayerControllerAthena*>)      UnhandledPlayerControllers                                  OFFSET(get<T>, {0x6D0, 16, 0, 0})
	CMember(TArray<FName>)                             HLODActorsToHideNames                                       OFFSET(get<T>, {0x6E0, 16, 0, 0})
	DMember(bool)                                      bForceAllowCloth                                            OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bManageBackfill                                             OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(int32_t)                                   PlayerCountToTriggerBackfill                                OFFSET(get<int32_t>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bWaitForPlayerCountToTriggerBackfill                        OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     UpdateBackfillStatusTime                                    OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(bool)                                      bServerHasBackfillActive                                    OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bCanToggleCursorModeInStasis                                OFFSET(get<bool>, {0x711, 1, 0, 0})
	SMember(FScalableFloat)                            MannequinRecentlyRenderedCheckToleranceValue                OFFSET(getStruct<T>, {0x718, 40, 0, 0})
	CMember(TArray<ASpecialEventPlayerMannequin*>)     SpecialEventMannequins                                      OFFSET(get<T>, {0x740, 16, 0, 0})
	CMember(TArray<UClass*>)                           ActorSpawnDelegateClasses                                   OFFSET(get<T>, {0x750, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.WarmUpIslandUpdated
	// void WarmUpIslandUpdated();                                                                                              // [0x9dee264] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UpdateBackfillStatus
	// void UpdateBackfillStatus();                                                                                             // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.UnloadTerrainMaps
	// void UnloadTerrainMaps(FGameplayTag& MapTag);                                                                            // [0x9dee1d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleHUDs
	// void ToggleHUDs(bool bHide);                                                                                             // [0x9dee158] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableWeapons
	// void ToggleDisableWeapons(bool bDisableWeapons);                                                                         // [0x9dee070] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleDisableParachutes
	// void ToggleDisableParachutes(bool bDisable);                                                                             // [0x9dedff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ToggleAllPlayersInvincibility
	// void ToggleAllPlayersInvincibility(bool bInvincible);                                                                    // [0x9dedf70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.TeleportAllPlayers
	// void TeleportAllPlayers(FGameplayTagContainer EventTags, int32_t TeleportsPerFrame, int32_t SafeZoneIndex);              // [0x9dedbc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SwapBodyParts
	// void SwapBodyParts(int32_t ArrayIndex, AFortPlayerController* FortPC);                                                   // [0x9dedb04] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.StartSafeZoneOverrideForEvent
	// void StartSafeZoneOverrideForEvent(int32_t SafeZoneIndexForEvent);                                                       // [0x9deda84] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ShrinkSafeZone
	// void ShrinkSafeZone();                                                                                                   // [0x9deda2c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetWeightForContainerLootRoll
	// void SetWeightForContainerLootRoll(float Weight);                                                                        // [0x9ded9ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetReturnToMainMenuDelay
	// void SetReturnToMainMenuDelay(float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu);                           // [0x9ded704] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetNamedWeightForContainerLootRoll
	// void SetNamedWeightForContainerLootRoll(FName WeightName);                                                               // [0x9ded608] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetMatchTime
	// void SetMatchTime(int32_t NewMatchTime);                                                                                 // [0x9ded538] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetLockingOnFocalPoint
	// void SetLockingOnFocalPoint(bool bInLockingOnFocalPoint);                                                                // [0x9ded470] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetIsSimulatingDamage
	// void SetIsSimulatingDamage(bool bIsSimulating);                                                                          // [0x9ded3f0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetDestroyVehiclesInStorm
	// void SetDestroyVehiclesInStorm(bool bDestroyVehiclesInStorm);                                                            // [0x9ded360] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetCanStreamBuildingFoundationsIn
	// void SetCanStreamBuildingFoundationsIn(bool bEnable);                                                                    // [0x9ded298] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SetAdditionalViewpoint
	// void SetAdditionalViewpoint(FVector WorldLocation);                                                                      // [0x9decdcc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.SendToNightNight
	// void SendToNightNight();                                                                                                 // [0x2d79908] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResumeWinCondition
	// void ResumeWinCondition();                                                                                               // [0x9decd5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinConditionProgressToZero
	// void ResetWinConditionProgressToZero();                                                                                  // [0x9decd48] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetWinCondition
	// void ResetWinCondition();                                                                                                // [0x9deccd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSpecialEventAircraft
	// void ResetSpecialEventAircraft();                                                                                        // [0x9decc9c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetSafeZoneOverrideAfterEvent
	// void ResetSafeZoneOverrideAfterEvent(int32_t MinResetSafeZoneIndex, float MinDelayReturnToMainMenu, float MaxDelayReturnToMainMenu); // [0x9decba4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ResetMatchTimeToPrevious
	// void ResetMatchTimeToPrevious();                                                                                         // [0x9decb50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.RemoveFromBlockedNativeActions
	// void RemoveFromBlockedNativeActions(FGameplayTagContainer& Actions);                                                     // [0x7637594] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PushSpecialEventEmoteInputComponent
	// void PushSpecialEventEmoteInputComponent();                                                                              // [0x9decb3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PopSpecialEventEmoteInputComponent
	// void PopSpecialEventEmoteInputComponent();                                                                               // [0x9decb28] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PlacePlayersInAircraft
	// void PlacePlayersInAircraft();                                                                                           // [0x9decb14] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseWinCondition
	// void PauseWinCondition(bool bLockScores);                                                                                // [0x9deca38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseSupplyDrops
	// void PauseSupplyDrops(bool bPause);                                                                                      // [0x9dec960] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormProgression
	// void PauseStormProgression(bool bPause);                                                                                 // [0x9dec8e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.PauseStormDamage
	// void PauseStormDamage(bool bPause);                                                                                      // [0x9dec818] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnWarmUpTeleportComplete
	// void OnWarmUpTeleportComplete(AFortPlayerPawn* PlayerPawn);                                                              // [0x9dec688] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_TerrainMapsToUnload
	// void OnRep_TerrainMapsToUnload();                                                                                        // [0x9dec524] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_LastCSVEventName
	// void OnRep_LastCSVEventName();                                                                                           // [0x9dec4e0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_GameResumed
	// void OnRep_GameResumed();                                                                                                // [0x9dec4cc] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_DelayPlayersFromReturningToLobbyData
	// void OnRep_DelayPlayersFromReturningToLobbyData();                                                                       // [0x9dec474] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bPlayersAreInvincible
	// void OnRep_bPlayersAreInvincible();                                                                                      // [0x9dec5c8] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bLockingOnFocalPoint
	// void OnRep_bLockingOnFocalPoint();                                                                                       // [0x9dec5b4] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bDisableHUD
	// void OnRep_bDisableHUD();                                                                                                // [0x9dec5a0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_bCanStreamBuildingFoundationsIn
	// void OnRep_bCanStreamBuildingFoundationsIn();                                                                            // [0x9dec58c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AllPlayerTeleportedCount
	// void OnRep_AllPlayerTeleportedCount();                                                                                   // [0x5ccc994] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_Aircraft
	// void OnRep_Aircraft();                                                                                                   // [0x9dec3a0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnRep_AdditionalViewpoint
	// void OnRep_AdditionalViewpoint();                                                                                        // [0x9dec38c] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnGameViewportActivationChanged
	// void OnGameViewportActivationChanged(bool bHasFocus);                                                                    // [0x9debb70] Final|Native|Public  
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftFlightEnded
	// void OnAircraftFlightEnded(AFortAthenaAircraft* FortAthenaAircraft);                                                     // [0x9debaf0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftExitedDropZone
	// void OnAircraftExitedDropZone(AFortAthenaAircraft* FortAthenaAircraft);                                                  // [0x9deba70] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnAircraftEnteredDropZone
	// void OnAircraftEnteredDropZone(AFortAthenaAircraft* FortAthenaAircraft);                                                 // [0x9deb9f0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorSpawned
	// void OnActorSpawned(AActor* Actor);                                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.OnActorPreSpawnInitialization
	// void OnActorPreSpawnInitialization(AActor* Actor);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NotifyClientsGameResumed
	// void NotifyClientsGameResumed();                                                                                         // [0x9deb934] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.NetMulticast_CheatClearSpecialEventGameUserSettings
	// void NetMulticast_CheatClearSpecialEventGameUserSettings();                                                              // [0x7ab0334] Net|NetReliableNative|Event|NetMulticast|Public 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.JumpToSafeZonePhase
	// void JumpToSafeZonePhase(FVector PawnSpawnCenterLocation, float PawnSpawnMinDistance, float PawnSpawnMaxDistance);       // [0x9deb5a8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.HandleSpecialEventMannequinDestroyed
	// void HandleSpecialEventMannequinDestroyed(AActor* MannequinActor);                                                       // [0x9deb528] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetScript
	// ASpecialEventScript* GetScript();                                                                                        // [0x9deb510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.GetHasInfiniteSafeZonePhase
	// bool GetHasInfiniteSafeZonePhase();                                                                                      // [0x85df6a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ForceSafeZoneFinalLocation
	// void ForceSafeZoneFinalLocation(FVector NewFinalLocation, float DefaultAircraftOffsetFromMidLine, float MinDefaultMidlineAngle, float MaxDefaultMidlineAngle); // [0x9deafd4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.FlushUnhandledPlayerControllers
	// void FlushUnhandledPlayerControllers();                                                                                  // [0x9deafc0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.CloseParachutes
	// void CloseParachutes();                                                                                                  // [0x9dea0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearBlockedNativeActions
	// void ClearBlockedNativeActions();                                                                                        // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ClearAdditionalViewpoint
	// void ClearAdditionalViewpoint();                                                                                         // [0x9dea0cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.ChangeWinCondition
	// void ChangeWinCondition(float NewGoalScore);                                                                             // [0x9dea04c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AutobalanceTargetScore
	// void AutobalanceTargetScore();                                                                                           // [0x9dea038] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddToBlockedNativeActions
	// void AddToBlockedNativeActions(FGameplayTagContainer& Actions, bool bCancelAbilities);                                   // [0x9de9ef8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddCSVEvent
	// void AddCSVEvent(FString CSVEventName, bool bShouldRepToClient);                                                         // [0x9de9158] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortAthenaMutator_SpecialEvent.AddClientCSVEvent
	// void AddClientCSVEvent(FString CSVEventName);                                                                            // [0x9de9850] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
/// Size: 0x0000 (0x001B60 - 0x001B60)
class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7008;

public:


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP
	// void UpdateCameraBP(AActor* ViewTarget, float DeltaTime, FTViewTarget& OutVT);                                           // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.SetOverrideTransitionTime
	// void SetOverrideTransitionTime(float InTransitionTime);                                                                  // [0x9ded684] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP
	// void OnBecomeInactiveBP(AActor* ViewTarget);                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP
	// void OnBecomeActiveBP(AActor* ViewTarget);                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
/// Size: 0x0880 (0x0000A0 - 0x000920)
class UFortCharacterMovementMutatorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	CMember(ACharacter*)                               CharacterOwner                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UFortMovementComp_CharacterAthena*)        MovementComponent                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UFortMovementComp_CharacterAthena*)        CDOMovementComponent                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMoveToBoxSpeed                                 OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRelativeVelocityInterpSpeed                    OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesLocationInterpSpeed                            OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRotationInterpSpeed                            OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeX                                   OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeX                                   OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeY                                   OFFSET(getStruct<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeY                                   OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeZ                                   OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeZ                                   OFFSET(getStruct<T>, {0x230, 40, 0, 0})
	SMember(FRotator)                                  BuffetBubblesRotationRate                                   OFFSET(getStruct<T>, {0x258, 24, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxAcceleration                                OFFSET(getStruct<T>, {0x270, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeSpeed                               OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRelativeDeceleration                           OFFSET(getStruct<T>, {0x2C0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesSphereRadius                                   OFFSET(getStruct<T>, {0x2E8, 40, 0, 0})
	CMember(AActor*)                                   BuffetBubblesFollowActor                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FVector)                                   BuffetBubblesInitialFollowBoxOffsetPercent                  OFFSET(getStruct<T>, {0x318, 24, 0, 0})
	SMember(FBuffetBubblesReplicatedData)              BuffetBubblesReplicatedData                                 OFFSET(getStruct<T>, {0x410, 128, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesIntroSpeed                                     OFFSET(getStruct<T>, {0x710, 40, 0, 0})
	SMember(FTransform)                                BuffetBubblesIntroTargetTransform                           OFFSET(getStruct<T>, {0x740, 96, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingMaxPitchDegrees                                 OFFSET(getStruct<T>, {0x7A0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingMaxSpeed                                        OFFSET(getStruct<T>, {0x7C8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingVelocityDirectionInterpSpeed                    OFFSET(getStruct<T>, {0x7F0, 40, 0, 0})
	SMember(FRotator)                                  BuffetFlyingRotationRate                                    OFFSET(getStruct<T>, {0x818, 24, 0, 0})
	DMember(float)                                     BuffetFlyingMaxSpeedOverride                                OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(float)                                     BuffetFlyingMaxSpeedInterpSpeed                             OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(float)                                     BuffetFlyingVelocityDirectionInterpSpeedOverride            OFFSET(get<float>, {0x83C, 4, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetSphereSize                              OFFSET(getStruct<T>, {0x840, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetRotationDuration                        OFFSET(getStruct<T>, {0x868, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetControlRotationInterpSpeed              OFFSET(getStruct<T>, {0x890, 40, 0, 0})
	SMember(FBuffetFlyingRicochetReplicatedData)       BuffetFlyingRicochetReplicatedData                          OFFSET(getStruct<T>, {0x900, 32, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesIntroTargetTransform
	// void SetBuffetBubblesIntroTargetTransform(FTransform& Transform);                                                        // [0x9ded160] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesInitialFollowBoxOffsetPercent
	// void SetBuffetBubblesInitialFollowBoxOffsetPercent(FVector BoxOffsetPercent);                                            // [0x9decfbc] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.SetBuffetBubblesFollowActor
	// void SetBuffetBubblesFollowActor(AActor* Actor);                                                                         // [0x9decf34] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingVelocityDirectionInterpSpeed
	// void OverrideBuffetFlyingVelocityDirectionInterpSpeed(float Value, bool bAsMultiplier);                                  // [0x88a1450] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OverrideBuffetFlyingMaxSpeed
	// void OverrideBuffetFlyingMaxSpeed(float Value, bool bAsMultiplier, float InterpSpeed);                                   // [0x9dec734] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetFlyingRicochetReplicatedData
	// void OnRep_BuffetFlyingRicochetReplicatedData();                                                                         // [0x9dec40c] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnRep_BuffetBubblesFollowActor
	// void OnRep_BuffetBubblesFollowActor();                                                                                   // [0x9dec3f8] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent.OnMovementModeChanged
	// void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x9debc70] Final|Native|Private 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortCharacterMovementMutator : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UClass*)                                   MovementMutatorComponentClass                               OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator.OnFortPawnChanged
	// void OnFortPawnChanged(AFortPawn* NewPawn);                                                                              // [0x56ba1a4] Final|Native|Protected 
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  BP_OnStartGameplayOutro                                     OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnGameplayIntroFinished                                  OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bIsReadyForGameplay                                         OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ShowCinematicWidget
	// void ShowCinematicWidget(FName WidgetName);                                                                              // [0x9e541e8] Final|BlueprintCosmetic|Exec|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.SetReadyForGameplay
	// void SetReadyForGameplay(bool bIsReady);                                                                                 // [0x56acda8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.ServerOnGameplayIntroFinished
	// void ServerOnGameplayIntroFinished();                                                                                    // [0x77d3b90] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.OnRep_bIsReadyForGameplay
	// void OnRep_bIsReadyForGameplay();                                                                                        // [0x9e525b0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic.HideHUDElementsForLoadingScreen
	// void HideHUDElementsForLoadingScreen(bool bHideElements);                                                                // [0x9e51634] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortAthenaMutator_SpecialEvent*>) SpecialEventMutator                                  OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.ServerHandleSpecialClientEvent
	// void ServerHandleSpecialClientEvent(FGameplayTag EventTag, int32_t Count);                                               // [0x9e52e18] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent.SendSpecialClientEvent
	// void SendSpecialClientEvent(FGameplayTag EventTag, int32_t Count);                                                       // [0x9e52ba4] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.FortCustomTickComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UFortCustomTickComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(EFortCustomTickComponentCondition)         Condition                                                   OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FGameplayTag)                              AuthorityQualitySettingsTag                                 OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	SMember(FGameplayTag)                              DefaultClientQualitySettingsTag                             OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	CMember(TMap<ECommonPlatformType, FGameplayTag>)   ClientPlatformQualitySettingsTagMap                         OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FCustomTickComonentQualitySettings>) QualitySettingsMap                             OFFSET(get<T>, {0x100, 80, 0, 0})
	DMember(float)                                     WasRecentlyRenderedTolerance                                OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCustomTick                                                OFFSET(getStruct<T>, {0x158, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortSpecialRelevancyActorSpawner
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class AFortSpecialRelevancyActorSpawner : public AFortActorSpawner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class USpecialEventAudioAnalysisBaseComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     CurrentTime                                                 OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(ULoudnessNRT*)                             LoudnessNRT                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UOnsetNRT*)                                OnsetNRT                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UConstantQNRT*)                            ConstantQNRT                                                OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateTime
	// void UpdateTime(float NewTime);                                                                                          // [0x9d3d2b8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateOnset
	// void UpdateOnset(float Time);                                                                                            // [0x986e5f4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateLoudness
	// void UpdateLoudness(float Time);                                                                                         // [0x64a9e38] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.UpdateConstantQ
	// void UpdateConstantQ(float Time);                                                                                        // [0x64a9ebc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetOnsetNRT
	// UOnsetNRT* GetOnsetNRT();                                                                                                // [0x29f7474] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetLoudnessNRT
	// ULoudnessNRT* GetLoudnessNRT();                                                                                          // [0x597bd64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetCurrentNormalizedLoudness
	// float GetCurrentNormalizedLoudness();                                                                                    // [0x8d808f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioAnalysisBaseComponent.GetConstantQNRT
	// UConstantQNRT* GetConstantQNRT();                                                                                        // [0x826c3bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
/// Size: 0x0028 (0x0000C0 - 0x0000E8)
class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FSpecialEventAudioHapticsAction>)   HapticsActions                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bStartHapticsOnBeginPlay                                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(float)                                     IntensityMultiplier                                         OFFSET(get<float>, {0xD4, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StopHaptics
	// void StopHaptics();                                                                                                      // [0x9e5474c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.StartHaptics
	// void StartHaptics();                                                                                                     // [0x9e54738] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent.AreHapticsActive
	// bool AreHapticsActive();                                                                                                 // [0x9e4d9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCinematicCameraMode
/// Size: 0x0000 (0x000068 - 0x000068)
class USpecialEventCinematicCameraMode : public UFortCinematicCamera
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorInstigatorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventCursorInstigatorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent
/// Size: 0x0308 (0x0000A0 - 0x0003A8)
class USpecialEventCursorPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	SMember(FMulticastInlineDelegate)                  OnDesiredVisibilityChanged                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bAllowOnNonOwningClients                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(APawn*)                                    OwningPawn                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(AFortPlayerController*)                    OwningController                                            OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCursorModeChanged                                         OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FGameplayTag)                              DefaultCursorModeTag                                        OFFSET(getStruct<T>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bDefaultCursorModeAutoActivate                              OFFSET(get<bool>, {0xF4, 1, 0, 0})
	CMember(TMap<FGameplayTag, FSpecialEventCursorMode>) CursorModes                                               OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TArray<FSpecialEventCursorStackEntry>)     CursorStack                                                 OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FSpecialEventCursorStackEntry)             ReplicatedCursorStackEntry                                  OFFSET(getStruct<T>, {0x158, 12, 0, 0})
	CMember(UClass*)                                   InputHelperClass                                            OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bUseGamepadLookInput                                        OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(bool)                                      bUseGamepadMoveInput                                        OFFSET(get<bool>, {0x171, 1, 0, 0})
	DMember(bool)                                      bUseGyroInput                                               OFFSET(get<bool>, {0x172, 1, 0, 0})
	DMember(bool)                                      bObeyInvertedPitchUserSetting                               OFFSET(get<bool>, {0x173, 1, 0, 0})
	CMember(UCommonInputSubsystem*)                    CommonInputSubsystem                                        OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(USpecialEventInputHelperComponent*)        InputHelperComponent                                        OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnViewportLocationChanged                                   OFFSET(getStruct<T>, {0x1C0, 16, 0, 0})
	SMember(FScalableFloat)                            NonOwningInterpSpeed                                        OFFSET(getStruct<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDeltaToSendWorldLocationToServer                         OFFSET(getStruct<T>, {0x1F8, 40, 0, 0})
	SMember(FVector)                                   ReplicatedWorldLocation                                     OFFSET(getStruct<T>, {0x228, 24, 0, 0})
	CMember(TArray<UUserWidget*>)                      Widgets                                                     OFFSET(get<T>, {0x290, 16, 0, 0})
	DMember(bool)                                      bAdditiveRotationAllowedByDefault                           OFFSET(get<bool>, {0x389, 1, 0, 0})
	DMember(bool)                                      bZoomAllowedByDefault                                       OFFSET(get<bool>, {0x38B, 1, 0, 0})
	SMember(FName)                                     ZoomActionName                                              OFFSET(getStruct<T>, {0x38C, 4, 0, 0})
	CMember(UCameraComponent*)                         AdditiveOffsetCameraComponent                               OFFSET(get<T>, {0x398, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetZoomAllowed
	// void SetZoomAllowed(bool bInZoomAllowed);                                                                                // [0x9e54168] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAllowOnNonOwningClients
	// void SetAllowOnNonOwningClients(bool bAllow);                                                                            // [0x9e53268] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.SetAdditiveRotationAllowed
	// void SetAdditiveRotationAllowed(bool bInAdditiveRotationAllowed);                                                        // [0x9e531e8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ServerOnWorldLocationChanged
	// void ServerOnWorldLocationChanged(FVector WorldLocation);                                                                // [0x9e53094] Final|Net|Native|Event|Private|NetServer|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PushCursor
	// void PushCursor(FGameplayTag& CursorModeTag, UObject* InstigatingObject, bool bActivate);                                // [0x9e529b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopCursor
	// void PopCursor(FGameplayTag& CursorModeTag, UObject* InstigatingObject, bool bDeactivateIfStackEmpty);                   // [0x9e527e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.PopAllCursorsForObject
	// void PopAllCursorsForObject(UObject* InstigatingObject, bool bDeactivateIfStackEmpty);                                   // [0x9e52718] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedWorldLocation
	// void OnRep_ReplicatedWorldLocation();                                                                                    // [0x9e52470] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_ReplicatedCursorStackEntry
	// void OnRep_ReplicatedCursorStackEntry(FSpecialEventCursorStackEntry& OldCursorStackEntry);                               // [0x9e523dc] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnRep_bAllowOnNonOwningClients
	// void OnRep_bAllowOnNonOwningClients();                                                                                   // [0x9e5259c] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnLocallyControlledCursorVisibilityChanged
	// void OnLocallyControlledCursorVisibilityChanged(USpecialEventCursorPawnComponent* CursorPawnComponent, FGameplayTag& CursorModeTag, bool bShouldBeVisible); // [0x9e5202c] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                   // [0x9e51fac] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.OnHUDPostRender
	// void OnHUDPostRender(AHUD* HUD, UCanvas* Canvas);                                                                        // [0x5fd7ee0] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.MoveInputUpdate
	// void MoveInputUpdate(FVector& InInputVector);                                                                            // [0x9e51a74] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.LookInputUpdate
	// void LookInputUpdate(FVector& InInputVector);                                                                            // [0x9e518a0] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsZoomAllowed
	// bool IsZoomAllowed();                                                                                                    // [0x68dcf58] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0x9e51888] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.IsAdditiveRotationAllowed
	// bool IsAdditiveRotationAllowed();                                                                                        // [0x9e51870] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.InputPressed
	// void InputPressed(FName& ActionName, bool bPressed);                                                                     // [0x9e51724] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GyroInputUpdate
	// void GyroInputUpdate(FVector& InInputVector);                                                                            // [0x9e514cc] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetWorldLocationAndDirection
	// bool GetWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection);                                // [0x9e51314] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportSize
	// bool GetViewportSize(FVector2D& OutViewportSize);                                                                        // [0x9e51280] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportLocation
	// bool GetViewportLocation(FVector2D& OutViewportLocation);                                                                // [0x9e511e0] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetViewportCenter
	// bool GetViewportCenter(FVector2D& OutViewportCenter);                                                                    // [0x9e5111c] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetSpecialEventCursorPawnComponent
	// USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponent(APawn* Pawn, FGameplayTag& CursorModeTag, bool bMustBeActive); // [0x9e507ac] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetNormalizedLocation
	// FVector2D GetNormalizedLocation();                                                                                       // [0x9e50790] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetLocalController
	// APlayerController* GetLocalController();                                                                                 // [0x9e506ac] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetInputType
	// ECommonInputType GetInputType();                                                                                         // [0x8652970] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCursorModeTagsForWidget
	// FGameplayTagContainer GetCursorModeTagsForWidget(UUserWidget* Widget);                                                   // [0x9e4fca0] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentWidget
	// UUserWidget* GetCurrentWidget();                                                                                         // [0x9e4fc48] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentHitResult
	// bool GetCurrentHitResult(FHitResult& OutHitResult);                                                                      // [0x9e4fa78] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCurrentCursorModeTag
	// FGameplayTag GetCurrentCursorModeTag();                                                                                  // [0x5a6c2a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCenteredWidgetLocation
	// FVector2D GetCenteredWidgetLocation(UUserWidget* Widget, FVector2D& ViewportLocation);                                   // [0x9e4f8a8] Final|RequiredAPI|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.GetCameraComponent
	// UCameraComponent* GetCameraComponent();                                                                                  // [0x9e4f884] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToViewportLocation
	// bool ConvertWorldToViewportLocation(FVector2D& OutViewportLocation, FVector& WorldLocation);                             // [0x9e4e5f8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertWorldToNormalizedLocation
	// bool ConvertWorldToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector& WorldLocation);                         // [0x9e4e4a8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToWorldLocationAndDirection
	// bool ConvertViewportToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& ViewportLocation); // [0x9e4e2b0] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertViewportToNormalizedLocation
	// bool ConvertViewportToNormalizedLocation(FVector2D& OutNormalizedLocation, FVector2D& ViewportLocation);                 // [0x9e4e1c0] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToWorldLocationAndDirection
	// bool ConvertNormalizedToWorldLocationAndDirection(FVector& OutWorldLocation, FVector& OutWorldDirection, FVector2D& NormalizedLocation); // [0x9e4dfc8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.ConvertNormalizedToViewportLocation
	// bool ConvertNormalizedToViewportLocation(FVector2D& OutViewportLocation, FVector2D& NormalizedLocation);                 // [0x9e4ded8] Final|BlueprintCosmetic|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorPawnComponent.CanBeVisible
	// bool CanBeVisible();                                                                                                     // [0x9e4de64] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class USpecialEventCursorWeaponComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnCursorPawnComponentSet                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(UClass*)                                   CursorPawnComponentClass                                    OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FGameplayTag)                              CursorModeTag                                               OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAlignFXToCursor                                            OFFSET(get<bool>, {0xC4, 1, 0, 0})
	CMember(AFortWeapon*)                              OwningWeapon                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          Pawn                                                        OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(USpecialEventCursorPawnComponent*)         CursorPawnComponent                                         OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnUnEquip
	// void OnUnEquip(AFortWeapon* Weapon);                                                                                     // [0x9e52698] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnRep_CursorPawnComponent
	// void OnRep_CursorPawnComponent();                                                                                        // [0x9e52334] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnPlayImpactFX
	// void OnPlayImpactFX(AFortWeapon* Weapon, FHitResult& HitResult, UFXSystemComponent* FXSystemComponent);                  // [0x9e521a4] Final|Native|Private|HasOutParms 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnGetAimRotOverride
	// void OnGetAimRotOverride(AFortWeapon* Weapon, EFortAbilityTargetingSource TargetingSource, FRotator& OutOverride, bool& bOutExecutionResult); // [0x9e51e48] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnEquip
	// void OnEquip(AFortWeapon* Weapon);                                                                                       // [0x9e51dc8] Final|Native|Private 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.OnBeamFired
	// void OnBeamFired(AFortWeapon* Weapon, bool bUsePersistentBeam, UFXSystemComponent* PSC, FVector& BeamOrigin, FVector& HitLocation); // [0x9e51b5c] Final|Native|Private|HasOutParms|HasDefaults 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForWeapon
	// USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForWeapon(AFortWeapon* Weapon);                      // [0x9e509ac] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetSpecialEventCursorPawnComponentForCurrentWeapon
	// USpecialEventCursorPawnComponent* GetSpecialEventCursorPawnComponentForCurrentWeapon(AFortPlayerPawn* Pawn);             // [0x9e5091c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCursorPawnComponent
	// USpecialEventCursorPawnComponent* GetCursorPawnComponent();                                                              // [0x82ba034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentSpecialEventCursorWeaponComponent
	// USpecialEventCursorWeaponComponent* GetCurrentSpecialEventCursorWeaponComponent(AFortPlayerPawn* Pawn);                  // [0x9e4fbc8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent.GetCurrentHitResult
	// bool GetCurrentHitResult(FHitResult& OutHitResult);                                                                      // [0x9e4fb20] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameplayGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventGameplayGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameplayLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USpecialEventGameplayLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAsyncAction_GameplayCinematicComponentReady : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastInlineDelegate)                  OnReady                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAsyncAction_GameplayCinematicComponentReady.FindGameplayCinematicComponentAsync
	// UFortAsyncAction_GameplayCinematicComponentReady* FindGameplayCinematicComponentAsync(AController* Conroller);           // [0x9e4ec00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class USpecialEventGameUserSettingsControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnLoaded                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   Version                                                     OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     MinTimeBetweenSaves                                         OFFSET(get<float>, {0xC0, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ToggleDebug
	// void SpecialEventGameUserSettings_ToggleDebug();                                                                         // [0x2d79908] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_SetData
	// void SpecialEventGameUserSettings_SetData(FString Data);                                                                 // [0x5ea2948] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_LogData
	// void SpecialEventGameUserSettings_LogData();                                                                             // [0x2d79908] Final|BlueprintCosmetic|Exec|Native|Public|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SpecialEventGameUserSettings_ClearData
	// void SpecialEventGameUserSettings_ClearData();                                                                           // [0x9e54680] Final|BlueprintCosmetic|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetSavingBlocked
	// void SetSavingBlocked(bool bBlocked);                                                                                    // [0x9e540e8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.SetData
	// void SetData(FString Data, bool bAllowSave, bool bSaveNow);                                                              // [0x9e532e8] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.ParseLoadedData
	// void ParseLoadedData(FString Data);                                                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetSpecialEventGameUserSettingsControllerComponent
	// USpecialEventGameUserSettingsControllerComponent* GetSpecialEventGameUserSettingsControllerComponent(UObject* WorldContextObject); // [0x9e50a2c] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent.GetData
	// void GetData(ESpecialEventGameUserSettingsResult& OutResult, FString& OutData);                                          // [0x9e4fd48] Final|BlueprintCosmetic|Native|Public|HasOutParms|BlueprintCallable|Const 
};

/// Class /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAsyncAction_SpecialEventGameUserSettingsReady : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastInlineDelegate)                  OnReady                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady.SpecialEventGameUserSettingsReadyAsync
	// UFortAsyncAction_SpecialEventGameUserSettingsReady* SpecialEventGameUserSettingsReadyAsync(UObject* WorldContextObject); // [0x9e5452c] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPhase
/// Size: 0x00A0 (0x000290 - 0x000330)
class ASpecialEventPhase : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayTag)                              PhaseTag                                                    OFFSET(getStruct<T>, {0x2A8, 4, 0, 0})
	DMember(bool)                                      bApplyGameplayEffects                                       OFFSET(get<bool>, {0x2AC, 1, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectsToApply                                      OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) ControllerComponentsToApplyInfoList                    OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) PawnComponentsToApplyInfoList                          OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UClass*)                                   CameraModifierToApply                                       OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      bRemoveModifierOnPhaseDeactivation                          OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bRemoveGameplayEffects                                      OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectsToRemove                                     OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) ControllerComponentsToRemoveInfoList                   OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) PawnComponentsToRemoveInfoList                         OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UCameraModifier*)                          AppliedCameraModifier                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(ESpecialEventPhaseState)                   PhaseState                                                  OFFSET(get<T>, {0x328, 1, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.SetHUDElementVisibility
	// void SetHUDElementVisibility(FGameplayTagContainer& HUDElementTags, bool bHideElements);                                 // [0x9e53a0c] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.PrePhaseActivation_Server
	// void PrePhaseActivation_Server();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnRep_PhaseState
	// void OnRep_PhaseState();                                                                                                 // [0x9e523a0] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseFinished
	// void OnPhaseFinished();                                                                                                  // [0x9e52190] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Server
	// void OnPhaseDeactivation_Server();                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseDeactivation_Client
	// void OnPhaseDeactivation_Client();                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Server
	// void OnPhaseActivation_Server();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.OnPhaseActivation_Client
	// void OnPhaseActivation_Client();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.GetPhaseTag
	// FGameplayTag GetPhaseTag();                                                                                              // [0x98907a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPhase.DebugActivatePhase
	// void DebugActivatePhase();                                                                                               // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
/// Size: 0x0008 (0x000618 - 0x000620)
class ASpecialEventPlayerMannequin : public AFortPlayerMannequin
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	DMember(bool)                                      bDisableCollisionOnBeginPlay                                OFFSET(get<bool>, {0x618, 1, 1, 0})
	DMember(bool)                                      bDisableComponentsTickOnServer                              OFFSET(get<bool>, {0x618, 1, 1, 1})
	DMember(bool)                                      bRegisterWithSpecialEventMutatorOnClient                    OFFSET(get<bool>, {0x618, 1, 1, 2})
	DMember(bool)                                      bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization OFFSET(get<bool>, {0x618, 1, 1, 3})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.RegisterWithSpecialEventMutator
	// void RegisterWithSpecialEventMutator();                                                                                  // [0x9e52b90] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.HandleOnMutatorAdded
	// void HandleOnMutatorAdded(AFortGameplayMutator* NewMutator);                                                             // [0x9e515b4] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin.DestroyUnusedSkeletalMeshComponents
	// void DestroyUnusedSkeletalMeshComponents();                                                                              // [0x9e4e8ac] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class USpecialEventRewindComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     MaxRecordingDuration                                        OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LocalRecordingFPS                                           OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     ReplicatedRecordingFPS                                      OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bAutoStartRecording                                         OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(float)                                     RewindLerpTime                                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     DefaultRewindDuration                                       OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     DefaultRewindPlaybackSpeed                                  OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FSpecialEventRewindComponentStateData)     StateData                                                   OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	DMember(float)                                     ReplicatedRewindDuration                                    OFFSET(get<float>, {0xC4, 4, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.TryStartRewinding
	// bool TryStartRewinding(float Duration, float PlaybackSpeed);                                                             // [0x9e547d0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent.OnRep_StateData
	// void OnRep_StateData(FSpecialEventRewindComponentStateData& OldStateData);                                               // [0x9e52508] Final|Native|Private|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
/// Size: 0x02C0 (0x0000C8 - 0x000388)
class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      bStartServerRecordingOnLastGroundFrame                      OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FSpecialEventRewindComponentRecording_PlayerPawn) ReplicatedRecording                                  OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	SMember(FSpecialEventRewindComponentRecordingFastArray_PlayerPawn) ReplicatedRecordingFastArray                OFFSET(getStruct<T>, {0x228, 280, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn.OnServerLanded
	// void OnServerLanded(FHitResult& Hit);                                                                                    // [0x9e52600] Final|Native|Private|HasOutParms 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScript
/// Size: 0x0080 (0x000290 - 0x000310)
class ASpecialEventScript : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnSpecialEventPhaseActivated                                OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialEventPhaseDeactivated                              OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FPhaseInfo>)                        PhaseInfoArray                                              OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(ALevelSequenceActor*)                      MasterSequence                                              OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(float)                                     DropDeadWindowSizeInSeconds                                 OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     DelayAfterConentLoad                                        OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     DelayAfterWarmup                                            OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     ForceReturnToMainMenuTime                                   OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     ForceReturnToMainMenuTimeRandomness                         OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     MinDelayReturnToMainMenu                                    OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     MaxDelayReturnToMainMenu                                    OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bPreloadAllLevelsOnServer                                   OFFSET(get<bool>, {0x2E4, 1, 0, 0})
	DMember(bool)                                      bAllowGarbageCollectionAfterUnload                          OFFSET(get<bool>, {0x2E5, 1, 0, 0})
	DMember(bool)                                      bFullPurgeGC                                                OFFSET(get<bool>, {0x2E6, 1, 0, 0})
	DMember(int32_t)                                   ReplicatedActivePhaseIndex                                  OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	CMember(UMeshNetworkComponent*)                    MeshNetworkComponent                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.UpdateMasterSequence
	// void UpdateMasterSequence(float Time);                                                                                   // [0x56b9e24] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.StartEventAtIndex
	// void StartEventAtIndex(int32_t InStartingIndex);                                                                         // [0x9e546b8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.SetLocalPlayersSignificantForSpecialEventSequence
	// void SetLocalPlayersSignificantForSpecialEventSequence(bool bIsSignificant);                                             // [0x9e53c74] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.OnRep_ReplicatedActivePhaseIndex
	// void OnRep_ReplicatedActivePhaseIndex();                                                                                 // [0x9e523c4] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.GetActivePhaseIndex
	// int32_t GetActivePhaseIndex();                                                                                           // [0x8f1afc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptReady
	// void BP_OnScriptReady();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.BP_OnScriptFinished
	// void BP_OnScriptFinished();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptStartNextPhase
	// void AttemptStartNextPhase(FGameplayTag CurrentPhaseTag);                                                                // [0x9e4dd10] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScript.AttemptFinishPhase
	// void AttemptFinishPhase(FGameplayTag PhaseTag);                                                                          // [0x9e4dbbc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ASpecialEventScriptMeshActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FDateTime)                                 RootStartTime                                               OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	SMember(FString)                                   CalendarEventName                                           OFFSET(getStruct<T>, {0x298, 16, 0, 0})
	DMember(float)                                     CalenderEventOffsetInSeconds                                OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     EncryptionKeyDeliveryTimeOffset                             OFFSET(get<float>, {0x2AC, 4, 0, 0})
	CMember(UMeshNetworkComponent*)                    MeshNetworkComponent                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.OnRep_RootStartTime
	// void OnRep_RootStartTime();                                                                                              // [0x9e52488] Final|Native|Protected 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartEvent
	// void MeshRootStartEvent();                                                                                               // [0x9e51a60] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimerOnly
	// void MeshRootStartCalendarTimerOnly();                                                                                   // [0x9e519d8] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootStartCalendarTimer
	// void MeshRootStartCalendarTimer();                                                                                       // [0x9e519c4] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootResetEvent
	// void MeshRootResetEvent();                                                                                               // [0x9e519b0] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootLogCalendarTimer
	// void MeshRootLogCalendarTimer();                                                                                         // [0x9e5199c] Final|Exec|Native|Public 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor.MeshRootClearCalendarTimer
	// void MeshRootClearCalendarTimer();                                                                                       // [0x9e51988] Final|Exec|Native|Public 
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class USpecialEventStatComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FMulticastInlineDelegate)                  OnValueChangedDelegate                                      OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FSpecialEventStatDefinition>)       StatDefinitions                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FSpecialEventStatArray)                    StatFastArray                                               OFFSET(getStruct<T>, {0xC0, 288, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat
	// FSpecialEventStatArrayEntry GetStat(bool& bOutValid, FGameplayTag LookupTag);                                            // [0x9e50f68] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat
	// FSpecialEventStatArrayEntry GetSpecialEventStat(bool& bOutValid, AActor* Actor, FGameplayTag LookupTag);                 // [0x9e50d18] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustStat
	// bool AdjustStat(FGameplayTag LookupTag, float Adjustment, bool bLogError);                                               // [0x9e4d60c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat
	// void AdjustSpecialEventStat(AActor* Actor, FGameplayTag LookupTag, float Adjustment);                                    // [0x9e4d364] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/SpecialEventGameplayRuntime.DamageRecordEntry
/// Size: 0x0120 (0x000028 - 0x000148)
class UDamageRecordEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     DamageTotal                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     EndReplicationTime                                          OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FGameplayCueParameters)                    GameplayCueParams                                           OFFSET(getStruct<T>, {0x68, 208, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.DamageRecordEntry.OnRep_DamageTotal
	// void OnRep_DamageTotal();                                                                                                // [0x9e52348] Final|Native|Public  
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FScalableFloat)                            RelevancyDeathTimeLength                                    OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bSetLifespanOnLastRelevancyDeath                            OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(float)                                     OwnerMaxHealthCached                                        OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(TArray<UDamageRecordEntry*>)               ReplicatedDamageRecords                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialRelevancyDeath                                     OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialRelevancyDamage                                    OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	CMember(AFortAthenaMutator_SpecialRelevancy*)      CachedMutator                                               OFFSET(get<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnKilled
	// void OnKilled(AFortPlayerState* KillingPlayerState, int32_t RelevancyGroupIndex);                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.OnDamaged
	// void OnDamaged(AFortPlayerState* DamagingPlayerState, int32_t RelevancyGroupIndex, float DealtDamage, float ActualDealtDamage, float TotalDamage, float DealtDamagePercent, float ActualDealtDamagePercent, float TotalDamagePercent, float MaxHealth, bool bKilled); // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercentFromRelevancyIndex
	// float GetHealthPercentFromRelevancyIndex(int32_t Index);                                                                 // [0x9e5061c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthPercent
	// float GetHealthPercent(AActor* RelevancyActor);                                                                          // [0x9e504d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealthFromRelevancyIndex
	// float GetHealthFromRelevancyIndex(int32_t Index);                                                                        // [0x9e5058c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.GetHealth
	// float GetHealth(AActor* RelevancyActor);                                                                                 // [0x9e504d4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealthPercent
	// float ClientGetHealthPercent();                                                                                          // [0x9e4deb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent.ClientGetHealth
	// float ClientGetHealth();                                                                                                 // [0x9e4de88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialClientEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpecialClientEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AFortPlayerControllerAthena*)              PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TimeSeconds                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
/// Size: 0x0034 (0x00000C - 0x000040)
class FSpecialEventStatArrayEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USpecialEventStatComponent*)               StatComponent                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(AActor*)                                   Owner                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   StatDefinitionIndex                                         OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FSpecialEventStatDefinition)               StatDefinitionCopy                                          OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpecialEventStatDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              LookupTag                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     min                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     max                                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpecialEventTODMSubphaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PhaseTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESpecialEventTODMModifyType)               ModifyType                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(UClass*)                                   SpawnClass                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TimeOfDay                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SpeedFactor                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventTODMPhaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              PhaseTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FSpecialEventTODMSubphaseData>)     SubphaseDataArray                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMathEaseData
/// Size: 0x000C (0x000000 - 0x00000C)
class FSpecialEventMathEaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TEnumAsByte<EEasingFunc>)                  EasingFunc                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     BlendExp                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Steps                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FDestroyActorsAndComponentsMutator_ComponentDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EDestroyActorsAndComponentsMutator_ComponentNameComparisonType) NameComparisonType                     OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bDestroyOnServer                                            OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bDestroyOnClient                                            OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bPromoteChildrenOfDestroyedComponents                       OFFSET(get<bool>, {0x13, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
class FDestroyActorsAndComponentsMutator_ActorDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftActorClass                                              OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bDestroyActorOnServer                                       OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bDestroyActorOnClient                                       OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bNetForceOnActorDestroy                                     OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bShouldModifyLevelOnActorDestroy                            OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(TArray<FDestroyActorsAndComponentsMutator_ComponentDefinition>) ComponentDefinitions                   OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bCurrentlyEnabled                                           OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bPermanentlyDisabled                                        OFFSET(get<bool>, {0x59, 1, 0, 0})
	CMember(TArray<AActor*>)                           ActorsToProcess                                             OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyVictim
/// Size: 0x0020 (0x000000 - 0x000020)
class FFakeKillRelevancyVictim : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AFortPlayerStateAthena*)                   PlayerState                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   DeathLocation                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
/// Size: 0x002C (0x00000C - 0x000038)
class FFakeKillRelevancyPlayerDataEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFakeKillRelevancyVictim>)          Victims                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayTag)                              Reason                                                      OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   PhaseNum                                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   WaveNum                                                     OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     RelevancyDelay                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RelevancyChangeServerWorldTime                              OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FFakeKillRelevancyPlayerDataArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FFakeKillRelevancyPlayerDataEntry>) Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UFortControllerComponent_FakeKillRelevancy*) ControllerComponent                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFakeKillRelevancyPhaseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              Reason                                                      OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NumWavesExpected                                            OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   WaveNum                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     RelevancyDelay                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyBucket
/// Size: 0x0010 (0x000000 - 0x000010)
class FFakeKillRelevancyBucket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
/// Size: 0x0020 (0x000000 - 0x000020)
class FFakeKillRelevancySupergroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FFakeKillRelevancyTestParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMapData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventMapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              MapTag                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             MapNames                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bReplicatedHasBeenUnloaded                                  OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bHasBeenUnloaded                                            OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortDelayRTMMData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortDelayRTMMData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bDelayRTTM                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinRTTMDelay                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxRTTMDelay                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventGEData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortSpecialEventGEData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   GameplayEffect                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortSpecialEventOverrideParts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<UCustomCharacterPart*>)             OverrideParts                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFortSpecialEventGEData)                   GameplayEffectToApplyOnSwap                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
/// Size: 0x0080 (0x000000 - 0x000080)
class FBuffetBubblesReplicatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   RelativeVelocity                                            OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesDebugData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FBuffetBubblesDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
/// Size: 0x0020 (0x000000 - 0x000020)
class FBuffetFlyingRicochetReplicatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FCustomTickComonentQualitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumFramesToSkipBetweenEvaluations                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinFramesToSkipBetweenCustomTicks                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxFramesToSkipBetweenCustomTicks                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     InnerDistance                                               OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     OuterDistance                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventAudioHapticsAction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     LoudnessFloor                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LoudnessCeiling                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     HapticsIntensity                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bAffectsLeftLarge                                           OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bAffectsLeftSmall                                           OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bAffectsRightLarge                                          OFFSET(get<bool>, {0x10, 1, 1, 2})
	DMember(bool)                                      bAffectsRightSmall                                          OFFSET(get<bool>, {0x10, 1, 1, 3})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorMode
/// Size: 0x0298 (0x000000 - 0x000298)
class FSpecialEventCursorMode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UClass*)                                   WidgetClass                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAllowDebugCursorDrawing                                    OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FSpecialEventMathEaseData)                 GamepadMoveEaseData                                         OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FScalableFloat)                            GamepadMoveSpeed                                            OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	SMember(FSpecialEventMathEaseData)                 TouchMoveEaseData                                           OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FScalableFloat)                            TouchMoveSpeed                                              OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	DMember(float)                                     TouchDeadzoneTreshold                                       OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TouchAttenuator                                             OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FScalableFloat)                            MinCursorPercentForAdditiveRotationPitch                    OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            MinCursorPercentForAdditiveRotationYaw                      OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAdditiveRotationPitch                                    OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAdditiveRotationYaw                                      OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            AdditiveRotationInterpSpeed                                 OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomInInterpSpeed                                           OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomOutInterpSpeed                                          OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomAdditiveFOV                                             OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            GamepadZoomMoveSpeed                                        OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            TouchZoomMoveSpeed                                          OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	DMember(bool)                                      bAllowTrace                                                 OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                OFFSET(get<T>, {0x211, 1, 0, 0})
	SMember(FScalableFloat)                            SweepRadius                                                 OFFSET(getStruct<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            TraceDistance                                               OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            bTraceComplex                                               OFFSET(getStruct<T>, {0x268, 40, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FSpecialEventCursorStackEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              CursorModeTag                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  InstigatingObject                                           OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpecialEventPhaseComponentNetModeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESpecialEventPhaseComponentNetModeType)    NetModeType                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UClass*)                                   ComponentClass                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSpecialEventRewindComponentStateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ESpecialEventRewindComponentState)         State                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      StateChangedCount                                           OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(float)                                     ServerWorldTime                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
/// Size: 0x0004 (0x00000C - 0x000010)
class FSpecialEventRewindComponentFrame : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     ServerWorldTime                                             OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventRewindComponentRecording : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USpecialEventRewindComponent*)             RewindComponent                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   StartFrameIndex                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   EndFrameIndex                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
/// Size: 0x0020 (0x000010 - 0x000030)
class FSpecialEventRewindComponentFrame_PlayerPawn : public FSpecialEventRewindComponentFrame
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector_NetQuantize)                       Location                                                    OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(char)                                      CompressedYaw                                               OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(char)                                      CompressedControlRotationPitch                              OFFSET(get<char>, {0x29, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
/// Size: 0x0010 (0x000108 - 0x000118)
class FSpecialEventRewindComponentRecordingFastArray_PlayerPawn : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FSpecialEventRewindComponentFrame_PlayerPawn>) Frames                                           OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
/// Size: 0x0000 (0x000020 - 0x000020)
class FSpecialEventRewindComponentRecording_PlayerPawn : public FSpecialEventRewindComponentRecording
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntryBase
/// Size: 0x0060 (0x000000 - 0x000060)
class FPhaseLevelEntryBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bLoadLevelOnScriptStart                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bLevelStartsVisible                                         OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bUnloadLevelOnPhaseEnd                                      OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bMakeVisibleOnPhaseStart                                    OFFSET(get<bool>, {0xB, 1, 0, 0})
	SMember(FGameplayTagContainer)                     MakeVisibleAtPhaseTags                                      OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FGameplayTagContainer)                     UnloadLevelAtPhaseTags                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntry
/// Size: 0x0070 (0x000060 - 0x0000D0)
class FPhaseLevelEntry : public FPhaseLevelEntryBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   LevelToLoad                                                 OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FString)                                   LevelName                                                   OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bExcludeFromServerPreload                                   OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	CMember(ULevelStreamingDynamic*)                   LevelInstance                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseDataLayerEntry
/// Size: 0x0020 (0x000060 - 0x000080)
class FPhaseDataLayerEntry : public FPhaseLevelEntryBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UDataLayerAsset*)                          DataLayerAsset                                              OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bIsRecursive                                                OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FPhaseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UClass*)                                   PhaseActorClass                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              PhaseTag                                                    OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(float)                                     SequenceTime                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bSetRelevancyMode                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(ESpecialRelevancyMode)                     RelevancyMode                                               OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   NumOfSquadsInRelevancyGroup                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FGameplayTagContainer)                     RequireLevelsFromPhaseTags                                  OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	DMember(bool)                                      bStartNextPhaseOnPhaseFinished                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bGarbageCollectAtPhaseStartOnServer                         OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bGarbageCollectAtPhaseStartOnClient                         OFFSET(get<bool>, {0x3A, 1, 0, 0})
	CMember(ASpecialEventPhase*)                       PhaseActor                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TArray<FPhaseLevelEntry>)                  Levels                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FPhaseDataLayerEntry>)              DataLayers                                                  OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FSpecialEventStatArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FSpecialEventStatArrayEntry>)       Stats                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(USpecialEventStatComponent*)               StatComponent                                               OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventTODMModifyType
/// Size: 0x06
enum ESpecialEventTODMModifyType : uint8_t
{
	ESpecialEventTODMModifyType__Keep0                                               = 0,
	ESpecialEventTODMModifyType__Hide1                                               = 1,
	ESpecialEventTODMModifyType__Show2                                               = 2,
	ESpecialEventTODMModifyType__Spawn3                                              = 3,
	ESpecialEventTODMModifyType__Persistent4                                         = 4,
	ESpecialEventTODMModifyType__ESpecialEventTODMModifyType_MAX5                    = 5
};

/// Enum /Script/SpecialEventGameplayRuntime.EDestroyActorsAndComponentsMutator_ComponentNameComparisonType
/// Size: 0x07
enum EDestroyActorsAndComponentsMutator_ComponentNameComparisonType : uint8_t
{
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameEquals0      = 0,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameStartsWith1  = 1,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__NameContains2    = 2,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameEquals3 = 3,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameStartsWith4 = 4,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__AdditionalStatNameContains5 = 5,
	EDestroyActorsAndComponentsMutator_ComponentNameComparisonType__EDestroyActorsAndComponentsMutator_MAX6 = 6
};

/// Enum /Script/SpecialEventGameplayRuntime.EFakeKillRelevancyPlayerKillStep
/// Size: 0x04
enum EFakeKillRelevancyPlayerKillStep : uint8_t
{
	EFakeKillRelevancyPlayerKillStep__Initiated0                                     = 0,
	EFakeKillRelevancyPlayerKillStep__BlueprintNotified1                             = 1,
	EFakeKillRelevancyPlayerKillStep__VisualsPerformed2                              = 2,
	EFakeKillRelevancyPlayerKillStep__EFakeKillRelevancyPlayerKillStep_MAX3          = 3
};

/// Enum /Script/SpecialEventGameplayRuntime.EMutatorMovementMode
/// Size: 0x07
enum EMutatorMovementMode : uint8_t
{
	EMutatorMovementMode__None0                                                      = 0,
	EMutatorMovementMode__BuffetBubbles1                                             = 25,
	EMutatorMovementMode__BuffetBubblesIntro2                                        = 26,
	EMutatorMovementMode__BuffetFlying3                                              = 27,
	EMutatorMovementMode__BuffetFlyingRicochet4                                      = 28,
	EMutatorMovementMode__Rewind5                                                    = 29,
	EMutatorMovementMode__EMutatorMovementMode_MAX6                                  = 30
};

/// Enum /Script/SpecialEventGameplayRuntime.EFortCustomTickComponentCondition
/// Size: 0x05
enum EFortCustomTickComponentCondition : uint8_t
{
	EFortCustomTickComponentCondition__WasRecentlyRendered0                          = 0,
	EFortCustomTickComponentCondition__CameraDistance1                               = 1,
	EFortCustomTickComponentCondition__LocalPlayerDistance2                          = 2,
	EFortCustomTickComponentCondition__Count3                                        = 3,
	EFortCustomTickComponentCondition__EFortCustomTickComponentCondition_MAX4        = 4
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventGameUserSettingsResult
/// Size: 0x03
enum ESpecialEventGameUserSettingsResult : uint8_t
{
	ESpecialEventGameUserSettingsResult__Success0                                    = 0,
	ESpecialEventGameUserSettingsResult__Failure1                                    = 1,
	ESpecialEventGameUserSettingsResult__ESpecialEventGameUserSettingsResult_MAX2    = 2
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseState
/// Size: 0x05
enum ESpecialEventPhaseState : uint8_t
{
	ESpecialEventPhaseState__Unregistered0                                           = 0,
	ESpecialEventPhaseState__Inactive1                                               = 1,
	ESpecialEventPhaseState__Active2                                                 = 2,
	ESpecialEventPhaseState__Deactivated3                                            = 3,
	ESpecialEventPhaseState__ESpecialEventPhaseState_MAX4                            = 4
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventPhaseComponentNetModeType
/// Size: 0x04
enum ESpecialEventPhaseComponentNetModeType : uint8_t
{
	ESpecialEventPhaseComponentNetModeType__ClientControlled0                        = 0,
	ESpecialEventPhaseComponentNetModeType__Client1                                  = 1,
	ESpecialEventPhaseComponentNetModeType__DedicatedServer2                         = 2,
	ESpecialEventPhaseComponentNetModeType__ESpecialEventPhaseComponentNetModeType_MAX3 = 3
};

/// Enum /Script/SpecialEventGameplayRuntime.ESpecialEventRewindComponentState
/// Size: 0x04
enum ESpecialEventRewindComponentState : uint8_t
{
	ESpecialEventRewindComponentState__Stop0                                         = 0,
	ESpecialEventRewindComponentState__Record1                                       = 1,
	ESpecialEventRewindComponentState__Rewind2                                       = 2,
	ESpecialEventRewindComponentState__ESpecialEventRewindComponentState_MAX3        = 3
};

