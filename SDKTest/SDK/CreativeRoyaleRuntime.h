/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CreativeRoyaleRuntime.

/// Struct /Script/CreativeRoyaleRuntime.AttachedBuildingActorGuids
/// Size: 0x0010 (0x000000 - 0x000010)
class FAttachedBuildingActorGuids : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGuid>)                             AttachedBuildingActorGuids                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeRoyaleRuntime.SpawnBuildingActorParameters
/// Size: 0x0070 (0x000000 - 0x000070)
class FSpawnBuildingActorParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UClass*)                                   SpawnClass                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<ULevel*>)                   SpawnLevel                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FTransform)                                SpawnTransform                                              ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyaleIslandPlayspace
/// Size: 0x0078 (0x000698 - 0x000710)
class ACreativeRoyaleIslandPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	CMember(UFortProjectEditComponent_CreativeRoyale*) ProjectEditComponent                                        ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UPlayspaceComponent_PlayStopPauseManager*) PlayStopPauseManager                                        ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeLoadingStateProxy*) CreativeLoadingStateProxy                              ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UPlayspaceComponent_SpatialGameplay*)      SpatialGameplayComponent                                    ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UPlayspaceComponent_DeviceTracking*)       DeviceTrackerComponent                                      ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeModifyEmotes*) CreativeModifyEmotesComponent                               ___ OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(UFortPlayspaceComponent_WorldTimeOfDayOverride*) WorldTimeOfDayOverrideComponent                       ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UCreativeRoyalePlayspaceComponent_LoadingScreen*) LoadingScreenComponent                               ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UPlayspaceComponent_ActorMemoryTracker*)   ActorMemoryTracker                                          ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UFortPoiSwapManager*)                      FortPoiSwapManager                                          ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(TArray<AActor*>)                           FoundActors                                                 ___ OFFSET(get<T>, {0x6F0, 16, 0, 0})
	DMember(int32_t)                                   IslandMemoryBudget                                          ___ OFFSET(get<int32_t>, {0x700, 4, 0, 0})
	DMember(float)                                     MaxMemorySamplingHeight                                     ___ OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     MaxMemorySamplingCellSize                                   ___ OFFSET(get<float>, {0x708, 4, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.FortPoiSwapManager
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UFortPoiSwapManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayspaceLoadedContentDelegate                            ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayspaceUnloadedContentDelegate                          ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPrePlayspaceContentUnloadDelegate                         ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortMcpProfileCreative*>)  CachedIslandOwnerProfile                                    ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FVector)                                   PoiPlotLocationOffset                                       ___ OFFSET(get<T>, {0x128, 24, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.FortPoiSwapPlayspace
/// Size: 0x00B0 (0x000698 - 0x000748)
class AFortPoiSwapPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FMulticastInlineDelegate)                  OnContentStateChangedDelegate                               ___ OFFSET(get<T>, {0x698, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreContentUnloadDelegate                                  ___ OFFSET(get<T>, {0x6A8, 16, 0, 0})
	CMember(USceneComponent*)                          SceneComponent                                              ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UFortLevelSaveComponent*)                  LevelSaveComponent                                          ___ OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(UPlaysetLevelStreamComponent*)             PlaysetLevelStreamComponent                                 ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPoiVolume*>)           PoiToReplace                                                ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCreativeRealEstatePlotItem*>) PlotToLoad                                           ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCreativeRealEstatePlotItem*>) LoadedPlot                                           ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(FOnlineLinkId)                             LinkCodeToLoad                                              ___ OFFSET(get<T>, {0x6E8, 24, 0, 0})
	CMember(TArray<AActor*>)                           SpawnedActors                                               ___ OFFSET(get<T>, {0x700, 16, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.AthenaAIServicePlayerBots_CreativeRoyale
/// Size: 0x0070 (0x001310 - 0x001380)
class UAthenaAIServicePlayerBots_CreativeRoyale : public UAthenaAIServiceCreativePlayerBots
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4992;

public:
	SMember(FScalableFloat)                            PlayerBotsEnabled                                           ___ OFFSET(get<T>, {0x1308, 40, 0, 0})
	SMember(FScalableFloat)                            BotsAllowedOnHumanTeam                                      ___ OFFSET(get<T>, {0x1330, 40, 0, 0})
	SMember(FScalableFloat)                            ForceAllPlayerBotsToOneTeam                                 ___ OFFSET(get<T>, {0x1358, 40, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LevelReset
/// Size: 0x0180 (0x0000A0 - 0x000220)
class UCreativeRoyalePlayspaceComponent_LevelReset : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TWeakObjectPtr<ULevelSaveRecord*>)         CachedLevelSaveRecord                                       ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bSpawnFromGameplay                                          ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SavedFoundActors                                            ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TMap<TWeakObjectPtr, FSpawnBuildingActorParameters>) SavedDeadActors                                   ___ OFFSET(get<T>, {0xC0, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SavedDamagedActors                                          ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    FoundActorsDied                                             ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FGuid>)                             FoundActorsDiedGuid                                         ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TMap<FGuid, FAttachedBuildingActorGuids>)  SavedParentWithAttachedBuildings                            ___ OFFSET(get<T>, {0x140, 80, 0, 0})
	CMember(TMap<FGuid, TWeakObjectPtr>)               CurrentActorForBuildingGuid                                 ___ OFFSET(get<T>, {0x190, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    FoundActorsDamaged                                          ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<FGuid>)                             FoundActorsDamagedGuid                                      ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortPoiSwapManager*>)      CachedPoiSwapManager                                        ___ OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_LoadingScreen
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UCreativeRoyalePlayspaceComponent_LoadingScreen : public UPlayspaceComponent_LoadingScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bShouldDisplayLoadingScreenDuringPostGame                   ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FText)                                     PlotNotFinishedLoadingContext                               ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     MinigameResetContext                                        ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FScalableFloat)                            FailsafeTimeoutLength                                       ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_PlayerSpawning
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UCreativeRoyalePlayspaceComponent_PlayerSpawning : public UFortPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyalePlayspaceComponent_RemoveItems
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UCreativeRoyalePlayspaceComponent_RemoveItems : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bSpawnFromGameplay                                          ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.CreativeRoyaleRootPlayspace
/// Size: 0x0038 (0x000698 - 0x0006D0)
class ACreativeRoyaleRootPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	CMember(AFortPlayerControllerAthena*)              EditorIslandOwnerPlayerController                           ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	DMember(bool)                                      bHasPlotLoaded                                              ___ OFFSET(get<bool>, {0x6C0, 1, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.FortAthenaMutator_CreativeRoyaleSafeZoneOverride
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CreativeRoyaleSafeZoneOverride : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Script/CreativeRoyaleRuntime.FortCheatManager_CreativeRoyale
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortCheatManager_CreativeRoyale : public UFortCheatManager_Coupled
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UFortCreativeRealEstatePlotItemDefinition*) CreativeRoyaleEditPlotDefinition                           ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayTag)                              CreativeRoyaleVolumeTag                                     ___ OFFSET(get<T>, {0x40, 4, 0, 0})
};

/// Class /Script/CreativeRoyaleRuntime.FortProjectEditComponent_CreativeRoyale
/// Size: 0x0010 (0x000500 - 0x000510)
class UFortProjectEditComponent_CreativeRoyale : public UFortProjectEditComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(UFortCreativeRealEstatePlotItemDefinition*) CreativeRoyaleEditPlotDefinition                           ___ OFFSET(get<T>, {0x508, 8, 0, 0})
};

/// Enum /Script/CreativeRoyaleRuntime.EFortPoiSwapUserContentState
/// Size: 0x05
enum EFortPoiSwapUserContentState : uint8_t
{
	EFortPoiSwapUserContentState__Unloaded0                                          = 0,
	EFortPoiSwapUserContentState__Loading1                                           = 1,
	EFortPoiSwapUserContentState__Loaded2                                            = 2,
	EFortPoiSwapUserContentState__Unloading3                                         = 3,
	EFortPoiSwapUserContentState__EFortPoiSwapUserContentState_MAX4                  = 4
};

