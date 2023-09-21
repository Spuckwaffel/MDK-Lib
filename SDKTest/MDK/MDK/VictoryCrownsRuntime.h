
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
	SMember(FScalableFloat)                            IntroFXVisualVolume                                         ___ OFFSET(get<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXTimelineRate                                         ___ OFFSET(get<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            IntroFXUpdatePrecision                                      ___ OFFSET(get<T>, {0x9E0, 40, 0, 0})
	CMember(TArray<FScalableFloat>)                    IntroFXUpdateFrequencies                                    ___ OFFSET(get<T>, {0xA08, 16, 0, 0})
	CMember(UCurveVector*)                             IntroFXCurve                                                ___ OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(UTimelineComponent*)                       IntroFXTimeline                                             ___ OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(UFXSystemComponent*)                       CrownParticleComponent                                      ___ OFFSET(get<T>, {0xA28, 8, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortVictoryCrownViewModel
/// Size: 0x0010 (0x000068 - 0x000078)
class UFortVictoryCrownViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   BestowedCount                                               ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bHasWonCrownInMatch                                         ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bHasWonRoyalRoyale                                          ___ OFFSET(get<bool>, {0x6D, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortControllerComponent_VictoryCrowns*>) BoundVictoryCrownsComponent                   ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns
/// Size: 0x01C0 (0x0000A8 - 0x000268)
class UFortControllerComponent_VictoryCrowns : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FMulticastInlineDelegate)                  OnVictoryCrownStatusChanged                                 ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonCrownInMatch                                        ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHasWonRoyalRoyale                                         ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) CrownInventoryItemClass                                     ___ OFFSET(get<T>, {0x108, 32, 0, 0})
	DMember(bool)                                      bWonCrownInMatch                                            ___ OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bWonRoyalRoyale                                             ___ OFFSET(get<bool>, {0x129, 1, 0, 0})
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortMontageItemDefinitionBase*>) RoyalRoyaleEmoteItemDefinition                        ___ OFFSET(get<T>, {0x138, 32, 0, 0})
	CMember(UDataTable*)                               VictoryCrownPlaylistData                                    ___ OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FGameplayTagContainer)                     SourceTagsForRoyalRoyale                                    ___ OFFSET(get<T>, {0x160, 32, 0, 0})
	SMember(FVictoryCrownAccountData)                  VictoryCrownAccountData                                     ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FScalableFloat)                            InitialGrantDelay                                           ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	DMember(bool)                                      bKillFeedBroadcastReady                                     ___ OFFSET(get<bool>, {0x260, 1, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_HasCrown
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_HasCrown : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_TotalRoyalRoyales
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UFortCosmeticStatObject_TotalRoyalRoyales : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<UFortControllerComponent_VictoryCrowns*>) CachedCrownComponents                                 ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortCosmeticStatObject_TotalVictoryCrowns
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortCosmeticStatObject_TotalVictoryCrowns : public UFortCosmeticStatObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UFortVictoryCrownAccountItemDefinition*)   VictoryCrownAccountItemDefinition                           ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortGameStateComponent_VictoryCrowns : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<AFortPlayerStateAthena*>)           CrownBearerPlayerStates                                     ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FText)                                     KillFeedFormat_Dropped                                      ___ OFFSET(get<T>, {0xB0, 24, 0, 0})
	SMember(FText)                                     KillFeedFormat_PickedUp                                     ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortPawnComponent_VictoryCrownsFrontEnd : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UDataTable*)                               VictoryCrownPlaylistData                                    ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(bool)                                      bInitializeSuccess                                          ___ OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bSelectedPlaylistSupportCrown                               ___ OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(UFortSocialParty*)                         PersistentParty                                             ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortPlayerStateComponent_VictoryCrowns : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bHasWonRoyalRoyale                                          ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/VictoryCrownsRuntime.VictoryCrownPlaylistData
/// Size: 0x0008 (0x000008 - 0x000010)
class FVictoryCrownPlaylistData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxRankingForCrownAward                                     ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

