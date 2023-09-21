
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
	CMember(TArray<FSpecialEventTODMPhaseData>)        PhaseDataArray                                              ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(ASpecialEventScript*)                      SpecialEventScript                                          ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(AFortTimeOfDayManager*)                    SpawnedTODM                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
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
	CMember(TArray<FDestroyActorsAndComponentsMutator_ActorDefinition>) ActorDefinitions                           ___ OFFSET(get<T>, {0x338, 16, 0, 0})
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
	SMember(FFakeKillRelevancyPlayerDataArray)         PlayerDataArray                                             ___ OFFSET(get<T>, {0xA8, 288, 0, 0})
	CMember(TMap<AFortPlayerStateAthena*, EFakeKillRelevancyPlayerKillStep>) ClientPlayerStateKillStepMap          ___ OFFSET(get<T>, {0x1C8, 80, 0, 0})
	DMember(char)                                      ResetCounter                                                ___ OFFSET(get<char>, {0x218, 1, 0, 0})
	CMember(TArray<AFortPlayerStateAthena*>)           DebugSupergroupPlayerStates                                 ___ OFFSET(get<T>, {0x220, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_FakeKillRelevancy
/// Size: 0x0060 (0x000440 - 0x0004A0)
class AFortAthenaMutator_FakeKillRelevancy : public AFortAthenaMutator_SpecialRelevancy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(UClass*)                                   FakeKillControllerComponentClass                            ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(TArray<FFakeKillRelevancyPhaseData>)       RelevancyPhaseDataArray                                     ___ OFFSET(get<T>, {0x448, 16, 0, 0})
	DMember(int32_t)                                   PhaseNum                                                    ___ OFFSET(get<int32_t>, {0x458, 4, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_LoadGameFeature
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_LoadGameFeature : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FString)                                   GameFeatureToLoad                                           ___ OFFSET(get<T>, {0x338, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortAthenaMutator_RemoveGameFeatures
/// Size: 0x0010 (0x000338 - 0x000348)
class AFortAthenaMutator_RemoveGameFeatures : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TArray<FString>)                           AllowedGameFeatures                                         ___ OFFSET(get<T>, {0x338, 16, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  TeleportAllPlayersFinished                                  ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPawnLoaded                                                ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInitController                                            ___ OFFSET(get<T>, {0x358, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResumeGame                                                ___ OFFSET(get<T>, {0x368, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialClientEvent                                        ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHandleLogout                                              ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClientInitialLoadingFinished                              ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	DMember(bool)                                      bPlayersAreInvincible                                       ___ OFFSET(get<bool>, {0x410, 1, 0, 0})
	DMember(int32_t)                                   MinimumScoreBumpForAutomadeGoal                             ___ OFFSET(get<int32_t>, {0x438, 4, 0, 0})
	CMember(TArray<float>)                             ScoreBrackets                                               ___ OFFSET(get<T>, {0x440, 16, 0, 0})
	DMember(bool)                                      bEnforceInfiniteSafeZonePhase                               ___ OFFSET(get<bool>, {0x450, 1, 0, 0})
	SMember(FName)                                     WarmupIslandPlayerStartTag                                  ___ OFFSET(get<T>, {0x454, 4, 0, 0})
	DMember(bool)                                      bAllowInventoryOpen                                         ___ OFFSET(get<bool>, {0x458, 1, 0, 0})
	SMember(FScalableFloat)                            bAllowFullScreenMap                                         ___ OFFSET(get<T>, {0x460, 40, 0, 0})
	DMember(bool)                                      bShouldClearFrontEndMapMarkers                              ___ OFFSET(get<bool>, {0x488, 1, 0, 0})
	DMember(bool)                                      bBlockTeamIndicators                                        ___ OFFSET(get<bool>, {0x489, 1, 0, 0})
	DMember(int32_t)                                   ForceDisplaySquadInfoDuringGamePhases                       ___ OFFSET(get<int32_t>, {0x48C, 4, 0, 0})
	DMember(bool)                                      bAllowSquadListLocalPlayerInSplitscreen                     ___ OFFSET(get<bool>, {0x490, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UIToHideDuringSpecialEvent                                  ___ OFFSET(get<T>, {0x498, 32, 0, 0})
	SMember(FGameplayTagContainer)                     UIToHideWhenInInfiniteWarmup                                ___ OFFSET(get<T>, {0x4B8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ClientEventsThatUnhideHiddenWhileLoadingHUDElements         ___ OFFSET(get<T>, {0x4D8, 32, 0, 0})
	DMember(bool)                                      bForceGarbageCollectionAfterUnloadOnServer                  ___ OFFSET(get<bool>, {0x4F8, 1, 0, 0})
	DMember(bool)                                      bForceGarbageCollectionAfterUnloadOnClient                  ___ OFFSET(get<bool>, {0x4F9, 1, 0, 0})
	DMember(bool)                                      bFullPurgeGC                                                ___ OFFSET(get<bool>, {0x4FA, 1, 0, 0})
	CMember(AFortAthenaAircraft*)                      EventAircraft                                               ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(FAircraftFlightInfo)                       EventAircraftInfo                                           ___ OFFSET(get<T>, {0x508, 72, 0, 0})
	CMember(UClass*)                                   EventAircraftClass                                          ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(ASpecialEventScript*)                      ScriptActor                                                 ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(bool)                                      bDisableHUD                                                 ___ OFFSET(get<bool>, {0x560, 1, 0, 0})
	DMember(char)                                      GameResumed                                                 ___ OFFSET(get<char>, {0x561, 1, 0, 0})
	SMember(FVector)                                   AdditionalViewpoint                                         ___ OFFSET(get<T>, {0x568, 24, 0, 0})
	DMember(bool)                                      bParachutesDisabled                                         ___ OFFSET(get<bool>, {0x580, 1, 0, 0})
	SMember(FString)                                   LastCSVEventName                                            ___ OFFSET(get<T>, {0x588, 16, 0, 0})
	DMember(bool)                                      bCanStreamBuildingFoundationsIn                             ___ OFFSET(get<bool>, {0x598, 1, 0, 0})
	DMember(int32_t)                                   AllPlayerTeleportedCount                                    ___ OFFSET(get<int32_t>, {0x59C, 4, 0, 0})
	SMember(FFortDelayRTMMData)                        DelayPlayersFromReturningToLobbyData                        ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FName)                                     NamedWeightForContainerLootRoll                             ___ OFFSET(get<T>, {0x5B0, 4, 0, 0})
	DMember(float)                                     WeightForContainerLootRoll                                  ___ OFFSET(get<float>, {0x5B4, 4, 0, 0})
	CMember(TArray<FFortSpecialEventEmoteData>)        SpecialEventEmoteData                                       ___ OFFSET(get<T>, {0x5E8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     BlockedNativeActions                                        ___ OFFSET(get<T>, {0x5F8, 32, 0, 0})
	CMember(EFortItemType)                             DesiredQuickbarItemTypeAfterRemove                          ___ OFFSET(get<T>, {0x618, 1, 0, 0})
	CMember(UInputComponent*)                          SpecialEventsInputComponent                                 ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	DMember(bool)                                      bLockingOnFocalPoint                                        ___ OFFSET(get<bool>, {0x628, 1, 0, 0})
	CMember(TArray<FFortSpecialEventOverrideParts>)    SpecialEventOverrideParts                                   ___ OFFSET(get<T>, {0x630, 16, 0, 0})
	SMember(FFortSpecialEventGEData)                   GameplayEffectToApplyOnSwapToDefault                        ___ OFFSET(get<T>, {0x640, 16, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, int32_t>)           OverridePartsArrayIndexMap                                  ___ OFFSET(get<T>, {0x650, 80, 0, 0})
	CMember(TArray<FFortSpecialEventGEData>)           GameplayEffectsToApplyOnLogin                               ___ OFFSET(get<T>, {0x6A0, 16, 0, 0})
	CMember(TArray<FSpecialEventMapData>)              TerrainMapsToUnload                                         ___ OFFSET(get<T>, {0x6B0, 16, 0, 0})
	CMember(TArray<AFortPlayerControllerAthena*>)      UnhandledPlayerControllers                                  ___ OFFSET(get<T>, {0x6D0, 16, 0, 0})
	CMember(TArray<FName>)                             HLODActorsToHideNames                                       ___ OFFSET(get<T>, {0x6E0, 16, 0, 0})
	DMember(bool)                                      bForceAllowCloth                                            ___ OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bManageBackfill                                             ___ OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(int32_t)                                   PlayerCountToTriggerBackfill                                ___ OFFSET(get<int32_t>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bWaitForPlayerCountToTriggerBackfill                        ___ OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     UpdateBackfillStatusTime                                    ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(bool)                                      bServerHasBackfillActive                                    ___ OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bCanToggleCursorModeInStasis                                ___ OFFSET(get<bool>, {0x711, 1, 0, 0})
	SMember(FScalableFloat)                            MannequinRecentlyRenderedCheckToleranceValue                ___ OFFSET(get<T>, {0x718, 40, 0, 0})
	CMember(TArray<ASpecialEventPlayerMannequin*>)     SpecialEventMannequins                                      ___ OFFSET(get<T>, {0x740, 16, 0, 0})
	CMember(TArray<UClass*>)                           ActorSpawnDelegateClasses                                   ___ OFFSET(get<T>, {0x750, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
/// Size: 0x0000 (0x001B60 - 0x001B60)
class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7008;

public:
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutatorComponent
/// Size: 0x0880 (0x0000A0 - 0x000920)
class UFortCharacterMovementMutatorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	CMember(ACharacter*)                               CharacterOwner                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UFortMovementComp_CharacterAthena*)        MovementComponent                                           ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UFortMovementComp_CharacterAthena*)        CDOMovementComponent                                        ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMoveToBoxSpeed                                 ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRelativeVelocityInterpSpeed                    ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesLocationInterpSpeed                            ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRotationInterpSpeed                            ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeX                                   ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeX                                   ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeY                                   ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeY                                   ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMinRelativeZ                                   ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeZ                                   ___ OFFSET(get<T>, {0x230, 40, 0, 0})
	SMember(FRotator)                                  BuffetBubblesRotationRate                                   ___ OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxAcceleration                                ___ OFFSET(get<T>, {0x270, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesMaxRelativeSpeed                               ___ OFFSET(get<T>, {0x298, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesRelativeDeceleration                           ___ OFFSET(get<T>, {0x2C0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesSphereRadius                                   ___ OFFSET(get<T>, {0x2E8, 40, 0, 0})
	CMember(AActor*)                                   BuffetBubblesFollowActor                                    ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FVector)                                   BuffetBubblesInitialFollowBoxOffsetPercent                  ___ OFFSET(get<T>, {0x318, 24, 0, 0})
	SMember(FBuffetBubblesReplicatedData)              BuffetBubblesReplicatedData                                 ___ OFFSET(get<T>, {0x410, 128, 0, 0})
	SMember(FScalableFloat)                            BuffetBubblesIntroSpeed                                     ___ OFFSET(get<T>, {0x710, 40, 0, 0})
	SMember(FTransform)                                BuffetBubblesIntroTargetTransform                           ___ OFFSET(get<T>, {0x740, 96, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingMaxPitchDegrees                                 ___ OFFSET(get<T>, {0x7A0, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingMaxSpeed                                        ___ OFFSET(get<T>, {0x7C8, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingVelocityDirectionInterpSpeed                    ___ OFFSET(get<T>, {0x7F0, 40, 0, 0})
	SMember(FRotator)                                  BuffetFlyingRotationRate                                    ___ OFFSET(get<T>, {0x818, 24, 0, 0})
	DMember(float)                                     BuffetFlyingMaxSpeedOverride                                ___ OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(float)                                     BuffetFlyingMaxSpeedInterpSpeed                             ___ OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(float)                                     BuffetFlyingVelocityDirectionInterpSpeedOverride            ___ OFFSET(get<float>, {0x83C, 4, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetSphereSize                              ___ OFFSET(get<T>, {0x840, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetRotationDuration                        ___ OFFSET(get<T>, {0x868, 40, 0, 0})
	SMember(FScalableFloat)                            BuffetFlyingRicochetControlRotationInterpSpeed              ___ OFFSET(get<T>, {0x890, 40, 0, 0})
	SMember(FBuffetFlyingRicochetReplicatedData)       BuffetFlyingRicochetReplicatedData                          ___ OFFSET(get<T>, {0x900, 32, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortCharacterMovementMutator
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortCharacterMovementMutator : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UClass*)                                   MovementMutatorComponentClass                               ___ OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_GameplayCinematic
/// Size: 0x0058 (0x0000A8 - 0x000100)
class UFortControllerComponent_GameplayCinematic : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  BP_OnStartGameplayOutro                                     ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnGameplayIntroFinished                                  ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bIsReadyForGameplay                                         ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortControllerComponent_SpecialEvent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortControllerComponent_SpecialEvent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortAthenaMutator_SpecialEvent*>) SpecialEventMutator                                  ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortCustomTickComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UFortCustomTickComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(EFortCustomTickComponentCondition)         Condition                                                   ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FGameplayTag)                              AuthorityQualitySettingsTag                                 ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	SMember(FGameplayTag)                              DefaultClientQualitySettingsTag                             ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(TMap<ECommonPlatformType, FGameplayTag>)   ClientPlatformQualitySettingsTagMap                         ___ OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FCustomTickComonentQualitySettings>) QualitySettingsMap                             ___ OFFSET(get<T>, {0x100, 80, 0, 0})
	DMember(float)                                     WasRecentlyRenderedTolerance                                ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCustomTick                                                ___ OFFSET(get<T>, {0x158, 16, 0, 0})
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
	DMember(float)                                     CurrentTime                                                 ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(ULoudnessNRT*)                             LoudnessNRT                                                 ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UOnsetNRT*)                                OnsetNRT                                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UConstantQNRT*)                            ConstantQNRT                                                ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsComponent
/// Size: 0x0028 (0x0000C0 - 0x0000E8)
class USpecialEventAudioHapticsComponent : public USpecialEventAudioAnalysisBaseComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FSpecialEventAudioHapticsAction>)   HapticsActions                                              ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(bool)                                      bStartHapticsOnBeginPlay                                    ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(float)                                     IntensityMultiplier                                         ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  OnDesiredVisibilityChanged                                  ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bAllowOnNonOwningClients                                    ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(APawn*)                                    OwningPawn                                                  ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(AFortPlayerController*)                    OwningController                                            ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCursorModeChanged                                         ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FGameplayTag)                              DefaultCursorModeTag                                        ___ OFFSET(get<T>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bDefaultCursorModeAutoActivate                              ___ OFFSET(get<bool>, {0xF4, 1, 0, 0})
	CMember(TMap<FGameplayTag, FSpecialEventCursorMode>) CursorModes                                               ___ OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TArray<FSpecialEventCursorStackEntry>)     CursorStack                                                 ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FSpecialEventCursorStackEntry)             ReplicatedCursorStackEntry                                  ___ OFFSET(get<T>, {0x158, 12, 0, 0})
	CMember(UClass*)                                   InputHelperClass                                            ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bUseGamepadLookInput                                        ___ OFFSET(get<bool>, {0x170, 1, 0, 0})
	DMember(bool)                                      bUseGamepadMoveInput                                        ___ OFFSET(get<bool>, {0x171, 1, 0, 0})
	DMember(bool)                                      bUseGyroInput                                               ___ OFFSET(get<bool>, {0x172, 1, 0, 0})
	DMember(bool)                                      bObeyInvertedPitchUserSetting                               ___ OFFSET(get<bool>, {0x173, 1, 0, 0})
	CMember(UCommonInputSubsystem*)                    CommonInputSubsystem                                        ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(USpecialEventInputHelperComponent*)        InputHelperComponent                                        ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnViewportLocationChanged                                   ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FScalableFloat)                            NonOwningInterpSpeed                                        ___ OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDeltaToSendWorldLocationToServer                         ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FVector)                                   ReplicatedWorldLocation                                     ___ OFFSET(get<T>, {0x228, 24, 0, 0})
	CMember(TArray<UUserWidget*>)                      Widgets                                                     ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	DMember(bool)                                      bAdditiveRotationAllowedByDefault                           ___ OFFSET(get<bool>, {0x389, 1, 0, 0})
	DMember(bool)                                      bZoomAllowedByDefault                                       ___ OFFSET(get<bool>, {0x38B, 1, 0, 0})
	SMember(FName)                                     ZoomActionName                                              ___ OFFSET(get<T>, {0x38C, 4, 0, 0})
	CMember(UCameraComponent*)                         AdditiveOffsetCameraComponent                               ___ OFFSET(get<T>, {0x398, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventCursorWeaponComponent
/// Size: 0x0098 (0x0000A0 - 0x000138)
class USpecialEventCursorWeaponComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnCursorPawnComponentSet                                    ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(UClass*)                                   CursorPawnComponentClass                                    ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FGameplayTag)                              CursorModeTag                                               ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAlignFXToCursor                                            ___ OFFSET(get<bool>, {0xC4, 1, 0, 0})
	CMember(AFortWeapon*)                              OwningWeapon                                                ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          Pawn                                                        ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(USpecialEventCursorPawnComponent*)         CursorPawnComponent                                         ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  OnReady                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventGameUserSettingsControllerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class USpecialEventGameUserSettingsControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnLoaded                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   Version                                                     ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     MinTimeBetweenSaves                                         ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.FortAsyncAction_SpecialEventGameUserSettingsReady
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAsyncAction_SpecialEventGameUserSettingsReady : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMulticastInlineDelegate)                  OnReady                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPhase
/// Size: 0x00A0 (0x000290 - 0x000330)
class ASpecialEventPhase : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayTag)                              PhaseTag                                                    ___ OFFSET(get<T>, {0x2A8, 4, 0, 0})
	DMember(bool)                                      bApplyGameplayEffects                                       ___ OFFSET(get<bool>, {0x2AC, 1, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectsToApply                                      ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) ControllerComponentsToApplyInfoList                    ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) PawnComponentsToApplyInfoList                          ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UClass*)                                   CameraModifierToApply                                       ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      bRemoveModifierOnPhaseDeactivation                          ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bRemoveGameplayEffects                                      ___ OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectsToRemove                                     ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) ControllerComponentsToRemoveInfoList                   ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(TArray<FSpecialEventPhaseComponentNetModeInfo>) PawnComponentsToRemoveInfoList                         ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UCameraModifier*)                          AppliedCameraModifier                                       ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(ESpecialEventPhaseState)                   PhaseState                                                  ___ OFFSET(get<T>, {0x328, 1, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventPlayerMannequin
/// Size: 0x0008 (0x000618 - 0x000620)
class ASpecialEventPlayerMannequin : public AFortPlayerMannequin
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	DMember(bool)                                      bDisableCollisionOnBeginPlay                                ___ OFFSET(get<bool>, {0x618, 1, 1, 0})
	DMember(bool)                                      bDisableComponentsTickOnServer                              ___ OFFSET(get<bool>, {0x618, 1, 1, 1})
	DMember(bool)                                      bRegisterWithSpecialEventMutatorOnClient                    ___ OFFSET(get<bool>, {0x618, 1, 1, 2})
	DMember(bool)                                      bDestroyUnusedSkeletalMeshComponentsOnClientFirstInitialization ___ OFFSET(get<bool>, {0x618, 1, 1, 3})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class USpecialEventRewindComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     MaxRecordingDuration                                        ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LocalRecordingFPS                                           ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     ReplicatedRecordingFPS                                      ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bAutoStartRecording                                         ___ OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(float)                                     RewindLerpTime                                              ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     DefaultRewindDuration                                       ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     DefaultRewindPlaybackSpeed                                  ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FSpecialEventRewindComponentStateData)     StateData                                                   ___ OFFSET(get<T>, {0xBC, 8, 0, 0})
	DMember(float)                                     ReplicatedRewindDuration                                    ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponent_PlayerPawn
/// Size: 0x02C0 (0x0000C8 - 0x000388)
class USpecialEventRewindComponent_PlayerPawn : public USpecialEventRewindComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      bStartServerRecordingOnLastGroundFrame                      ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
	SMember(FSpecialEventRewindComponentRecording_PlayerPawn) ReplicatedRecording                                  ___ OFFSET(get<T>, {0xF0, 32, 0, 0})
	SMember(FSpecialEventRewindComponentRecordingFastArray_PlayerPawn) ReplicatedRecordingFastArray                ___ OFFSET(get<T>, {0x228, 280, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScript
/// Size: 0x0080 (0x000290 - 0x000310)
class ASpecialEventScript : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnSpecialEventPhaseActivated                                ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialEventPhaseDeactivated                              ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FPhaseInfo>)                        PhaseInfoArray                                              ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(ALevelSequenceActor*)                      MasterSequence                                              ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(float)                                     DropDeadWindowSizeInSeconds                                 ___ OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     DelayAfterConentLoad                                        ___ OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     DelayAfterWarmup                                            ___ OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     ForceReturnToMainMenuTime                                   ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     ForceReturnToMainMenuTimeRandomness                         ___ OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     MinDelayReturnToMainMenu                                    ___ OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     MaxDelayReturnToMainMenu                                    ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bPreloadAllLevelsOnServer                                   ___ OFFSET(get<bool>, {0x2E4, 1, 0, 0})
	DMember(bool)                                      bAllowGarbageCollectionAfterUnload                          ___ OFFSET(get<bool>, {0x2E5, 1, 0, 0})
	DMember(bool)                                      bFullPurgeGC                                                ___ OFFSET(get<bool>, {0x2E6, 1, 0, 0})
	DMember(int32_t)                                   ReplicatedActivePhaseIndex                                  ___ OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	CMember(UMeshNetworkComponent*)                    MeshNetworkComponent                                        ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventScriptMeshActor
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ASpecialEventScriptMeshActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FDateTime)                                 RootStartTime                                               ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FString)                                   CalendarEventName                                           ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	DMember(float)                                     CalenderEventOffsetInSeconds                                ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     EncryptionKeyDeliveryTimeOffset                             ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	CMember(UMeshNetworkComponent*)                    MeshNetworkComponent                                        ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class USpecialEventStatComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FMulticastInlineDelegate)                  OnValueChangedDelegate                                      ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FSpecialEventStatDefinition>)       StatDefinitions                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FSpecialEventStatArray)                    StatFastArray                                               ___ OFFSET(get<T>, {0xC0, 288, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.DamageRecordEntry
/// Size: 0x0120 (0x000028 - 0x000148)
class UDamageRecordEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     DamageTotal                                                 ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     EndReplicationTime                                          ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FGameplayCueParameters)                    GameplayCueParams                                           ___ OFFSET(get<T>, {0x68, 208, 0, 0})
};

/// Class /Script/SpecialEventGameplayRuntime.SpecialRelevancyHealthComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class USpecialRelevancyHealthComponent : public USpecialRelevancyComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FScalableFloat)                            RelevancyDeathTimeLength                                    ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bSetLifespanOnLastRelevancyDeath                            ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(float)                                     OwnerMaxHealthCached                                        ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(TArray<UDamageRecordEntry*>)               ReplicatedDamageRecords                                     ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialRelevancyDeath                                     ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpecialRelevancyDamage                                    ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(AFortAthenaMutator_SpecialRelevancy*)      CachedMutator                                               ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialClientEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpecialClientEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AFortPlayerControllerAthena*)              PlayerController                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TimeSeconds                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              EventTag                                                    ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArrayEntry
/// Size: 0x0034 (0x00000C - 0x000040)
class FSpecialEventStatArrayEntry : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USpecialEventStatComponent*)               StatComponent                                               ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(AActor*)                                   Owner                                                       ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   StatDefinitionIndex                                         ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FSpecialEventStatDefinition)               StatDefinitionCopy                                          ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpecialEventStatDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              LookupTag                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     min                                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     max                                                         ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DefaultValue                                                ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMSubphaseData
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpecialEventTODMSubphaseData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PhaseTime                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESpecialEventTODMModifyType)               ModifyType                                                  ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(UClass*)                                   SpawnClass                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TimeOfDay                                                   ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SpeedFactor                                                 ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventTODMPhaseData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventTODMPhaseData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              PhaseTag                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FSpecialEventTODMSubphaseData>)     SubphaseDataArray                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMathEaseData
/// Size: 0x000C (0x000000 - 0x00000C)
class FSpecialEventMathEaseData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TEnumAsByte<EEasingFunc>)                  EasingFunc                                                  ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     BlendExp                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Steps                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ComponentDefinition
/// Size: 0x0018 (0x000000 - 0x000018)
class FDestroyActorsAndComponentsMutator_ComponentDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ComponentName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EDestroyActorsAndComponentsMutator_ComponentNameComparisonType) NameComparisonType                     ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(bool)                                      bDestroyOnServer                                            ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bDestroyOnClient                                            ___ OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bPromoteChildrenOfDestroyedComponents                       ___ OFFSET(get<bool>, {0x13, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.DestroyActorsAndComponentsMutator_ActorDefinition
/// Size: 0x0070 (0x000000 - 0x000070)
class FDestroyActorsAndComponentsMutator_ActorDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftActorClass                                              ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      bStartEnabled                                               ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bDestroyActorOnServer                                       ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bDestroyActorOnClient                                       ___ OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bNetForceOnActorDestroy                                     ___ OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bShouldModifyLevelOnActorDestroy                            ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(TArray<FDestroyActorsAndComponentsMutator_ComponentDefinition>) ComponentDefinitions                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bCurrentlyEnabled                                           ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bPermanentlyDisabled                                        ___ OFFSET(get<bool>, {0x59, 1, 0, 0})
	CMember(TArray<AActor*>)                           ActorsToProcess                                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyVictim
/// Size: 0x0020 (0x000000 - 0x000020)
class FFakeKillRelevancyVictim : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AFortPlayerStateAthena*)                   PlayerState                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   DeathLocation                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataEntry
/// Size: 0x002C (0x00000C - 0x000038)
class FFakeKillRelevancyPlayerDataEntry : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFakeKillRelevancyVictim>)          Victims                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayTag)                              Reason                                                      ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   PhaseNum                                                    ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   WaveNum                                                     ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     RelevancyDelay                                              ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RelevancyChangeServerWorldTime                              ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPlayerDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FFakeKillRelevancyPlayerDataArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FFakeKillRelevancyPlayerDataEntry>) Entries                                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UFortControllerComponent_FakeKillRelevancy*) ControllerComponent                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyPhaseData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFakeKillRelevancyPhaseData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              Reason                                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NumWavesExpected                                            ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   WaveNum                                                     ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     RelevancyDelay                                              ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyBucket
/// Size: 0x0010 (0x000000 - 0x000010)
class FFakeKillRelevancyBucket : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancySupergroup
/// Size: 0x0020 (0x000000 - 0x000020)
class FFakeKillRelevancySupergroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.FakeKillRelevancyTestParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FFakeKillRelevancyTestParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventMapData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventMapData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              MapTag                                                      ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             MapNames                                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bReplicatedHasBeenUnloaded                                  ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bHasBeenUnloaded                                            ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortDelayRTMMData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortDelayRTMMData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bDelayRTTM                                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinRTTMDelay                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxRTTMDelay                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Timestamp                                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventGEData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortSpecialEventGEData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   GameplayEffect                                              ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.FortSpecialEventOverrideParts
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortSpecialEventOverrideParts : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<UCustomCharacterPart*>)             OverrideParts                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFortSpecialEventGEData)                   GameplayEffectToApplyOnSwap                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesReplicatedData
/// Size: 0x0080 (0x000000 - 0x000080)
class FBuffetBubblesReplicatedData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                RelativeTransform                                           ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   RelativeVelocity                                            ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetBubblesDebugData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FBuffetBubblesDebugData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.BuffetFlyingRicochetReplicatedData
/// Size: 0x0020 (0x000000 - 0x000020)
class FBuffetFlyingRicochetReplicatedData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.CustomTickComonentQualitySettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FCustomTickComonentQualitySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumFramesToSkipBetweenEvaluations                           ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinFramesToSkipBetweenCustomTicks                           ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxFramesToSkipBetweenCustomTicks                           ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     InnerDistance                                               ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     OuterDistance                                               ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventAudioHapticsAction
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventAudioHapticsAction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     LoudnessFloor                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LoudnessCeiling                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     HapticsIntensity                                            ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(bool)                                      bAffectsLeftLarge                                           ___ OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bAffectsLeftSmall                                           ___ OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bAffectsRightLarge                                          ___ OFFSET(get<bool>, {0x10, 1, 1, 2})
	DMember(bool)                                      bAffectsRightSmall                                          ___ OFFSET(get<bool>, {0x10, 1, 1, 3})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorMode
/// Size: 0x0298 (0x000000 - 0x000298)
class FSpecialEventCursorMode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UClass*)                                   WidgetClass                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAllowDebugCursorDrawing                                    ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FSpecialEventMathEaseData)                 GamepadMoveEaseData                                         ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FScalableFloat)                            GamepadMoveSpeed                                            ___ OFFSET(get<T>, {0x18, 40, 0, 0})
	SMember(FSpecialEventMathEaseData)                 TouchMoveEaseData                                           ___ OFFSET(get<T>, {0x40, 12, 0, 0})
	SMember(FScalableFloat)                            TouchMoveSpeed                                              ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	DMember(float)                                     TouchDeadzoneTreshold                                       ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     TouchAttenuator                                             ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FScalableFloat)                            MinCursorPercentForAdditiveRotationPitch                    ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            MinCursorPercentForAdditiveRotationYaw                      ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAdditiveRotationPitch                                    ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAdditiveRotationYaw                                      ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            AdditiveRotationInterpSpeed                                 ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomInInterpSpeed                                           ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomOutInterpSpeed                                          ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            ZoomAdditiveFOV                                             ___ OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            GamepadZoomMoveSpeed                                        ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            TouchZoomMoveSpeed                                          ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
	DMember(bool)                                      bAllowTrace                                                 ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                ___ OFFSET(get<T>, {0x211, 1, 0, 0})
	SMember(FScalableFloat)                            SweepRadius                                                 ___ OFFSET(get<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            TraceDistance                                               ___ OFFSET(get<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            bTraceComplex                                               ___ OFFSET(get<T>, {0x268, 40, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventCursorStackEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FSpecialEventCursorStackEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              CursorModeTag                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  InstigatingObject                                           ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventPhaseComponentNetModeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpecialEventPhaseComponentNetModeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESpecialEventPhaseComponentNetModeType)    NetModeType                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UClass*)                                   ComponentClass                                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentStateData
/// Size: 0x0008 (0x000000 - 0x000008)
class FSpecialEventRewindComponentStateData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ESpecialEventRewindComponentState)         State                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(char)                                      StateChangedCount                                           ___ OFFSET(get<char>, {0x1, 1, 0, 0})
	DMember(float)                                     ServerWorldTime                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame
/// Size: 0x0004 (0x00000C - 0x000010)
class FSpecialEventRewindComponentFrame : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     ServerWorldTime                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording
/// Size: 0x0020 (0x000000 - 0x000020)
class FSpecialEventRewindComponentRecording : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USpecialEventRewindComponent*)             RewindComponent                                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   StartFrameIndex                                             ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   EndFrameIndex                                               ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentFrame_PlayerPawn
/// Size: 0x0020 (0x000010 - 0x000030)
class FSpecialEventRewindComponentFrame_PlayerPawn : public FSpecialEventRewindComponentFrame
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector_NetQuantize)                       Location                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(char)                                      CompressedYaw                                               ___ OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(char)                                      CompressedControlRotationPitch                              ___ OFFSET(get<char>, {0x29, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecordingFastArray_PlayerPawn
/// Size: 0x0010 (0x000108 - 0x000118)
class FSpecialEventRewindComponentRecordingFastArray_PlayerPawn : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FSpecialEventRewindComponentFrame_PlayerPawn>) Frames                                           ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventRewindComponentRecording_PlayerPawn
/// Size: 0x0000 (0x000020 - 0x000020)
class FSpecialEventRewindComponentRecording_PlayerPawn : public FSpecialEventRewindComponentRecording
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntryBase
/// Size: 0x0060 (0x000000 - 0x000060)
class FPhaseLevelEntryBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bLoadLevelOnScriptStart                                     ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bLevelStartsVisible                                         ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bUnloadLevelOnPhaseEnd                                      ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bMakeVisibleOnPhaseStart                                    ___ OFFSET(get<bool>, {0xB, 1, 0, 0})
	SMember(FGameplayTagContainer)                     MakeVisibleAtPhaseTags                                      ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FGameplayTagContainer)                     UnloadLevelAtPhaseTags                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseLevelEntry
/// Size: 0x0070 (0x000060 - 0x0000D0)
class FPhaseLevelEntry : public FPhaseLevelEntryBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   LevelToLoad                                                 ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FString)                                   LevelName                                                   ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bExcludeFromServerPreload                                   ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x98, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0xB0, 24, 0, 0})
	CMember(ULevelStreamingDynamic*)                   LevelInstance                                               ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseDataLayerEntry
/// Size: 0x0020 (0x000060 - 0x000080)
class FPhaseDataLayerEntry : public FPhaseLevelEntryBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UDataLayerAsset*)                          DataLayerAsset                                              ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bIsRecursive                                                ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.PhaseInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FPhaseInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UClass*)                                   PhaseActorClass                                             ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              PhaseTag                                                    ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(float)                                     SequenceTime                                                ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bSetRelevancyMode                                           ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(ESpecialRelevancyMode)                     RelevancyMode                                               ___ OFFSET(get<T>, {0x11, 1, 0, 0})
	DMember(int32_t)                                   NumOfSquadsInRelevancyGroup                                 ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	SMember(FGameplayTagContainer)                     RequireLevelsFromPhaseTags                                  ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	DMember(bool)                                      bStartNextPhaseOnPhaseFinished                              ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bGarbageCollectAtPhaseStartOnServer                         ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(bool)                                      bGarbageCollectAtPhaseStartOnClient                         ___ OFFSET(get<bool>, {0x3A, 1, 0, 0})
	CMember(ASpecialEventPhase*)                       PhaseActor                                                  ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TArray<FPhaseLevelEntry>)                  Levels                                                      ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FPhaseDataLayerEntry>)              DataLayers                                                  ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/SpecialEventGameplayRuntime.SpecialEventStatArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FSpecialEventStatArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FSpecialEventStatArrayEntry>)       Stats                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(USpecialEventStatComponent*)               StatComponent                                               ___ OFFSET(get<T>, {0x118, 8, 0, 0})
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

