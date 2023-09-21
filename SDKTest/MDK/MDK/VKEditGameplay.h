
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/VKEditGameplay.VKEditGameplayAssetsToCook
/// Size: 0x0010 (0x000030 - 0x000040)
class UVKEditGameplayAssetsToCook : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr>)                    Assets                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_PlaysetRootSpawner
/// Size: 0x0018 (0x0000F8 - 0x000110)
class UPlayspaceComponent_PlaysetRootSpawner : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
/// Size: 0x0000 (0x0001E8 - 0x0001E8)
class UPlayspaceComponent_VKEditCreativeToolsPermission : public UPlayspaceComponent_CreativeToolsPermission
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Class /Script/VKEditGameplay.VKEditPlayspace
/// Size: 0x00F0 (0x000698 - 0x000788)
class AVKEditPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1928;

public:
	CMember(TWeakObjectPtr<UClass*>)                   EditorOnlyMinigameSettingsMachineClassToSpawn               OFFSET(get<T>, {0x6B8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EditorOnlyWorldManagerClassToSpawn                          OFFSET(get<T>, {0x6D8, 32, 0, 0})
	CMember(UFortLevelStreamComponent*)                LevelStreamComponent                                        OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(UFortProjectEditComponent*)                ProjectEditComponent                                        OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(UPlayspaceComponent_PlayStopPauseManager*) PlayStopPauseManager                                        OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UPlayspaceComponent_EditConnectionManager*) EditConnectionManager                                      OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UPlayspaceComponent_LiveEdit*)             LiveEditComponent                                           OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UPlayspaceComponent_VKEditCreativeToolsPermission*) CreativeToolsPermission                            OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeLoadingStateProxy*) CreativeLoadingStateProxy                              OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UPlayspaceComponent_SpatialGameplay*)      SpatialGameplayComponent                                    OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UFortVolumeObjectTrackingComponent*)       ObjectTrackingComponent                                     OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UPlayspaceComponent_DeviceTracking*)       DeviceTrackerComponent                                      OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeInventory*)    CreativeInventoryComponent                                  OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UPlayspaceComponent_ActorMemoryTracker*)   ActorMemoryTrackerComponent                                 OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UFortCreativeDynamicXpComponent*)          FortCreativeDynamicXp                                       OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeModifyEmotes*) CreativeModifyEmotesComponent                               OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UFortPlayspaceComponent_WorldTimeOfDayOverride*) WorldTimeOfDayOverrideComponent                       OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UFortPlayspaceComponent_NaniteSettingsOverride*) NaniteSettingsOverrideComponent                       OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UPlayspaceComponent_PlaysetRootSpawner*)   PlaysetRootSpawnerComponent                                 OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UPlayspaceComponent_PlayerPawnOverrides*)  PlayerPawnOverridesComponent                                OFFSET(get<T>, {0x780, 8, 0, 0})


	/// Functions
	// Function /Script/VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
	// void OnClientActivatedContent(FUniqueNetIdRepl& ClientNetId);                                                            // [0x9ead510] Final|Native|Private|HasOutParms|Const 
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager
/// Size: 0x0088 (0x0000F8 - 0x000180)
class UPlayspaceComponent_EditConnectionManager : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(int32_t)                                   EditConnections                                             OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	CMember(EVkEditStatus)                             VkEditStatus                                                OFFSET(get<T>, {0x15C, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UITagsToHide                                                OFFSET(get<T>, {0x160, 32, 0, 0})


	/// Functions
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus
	// void OnRep_VkEditStatus();                                                                                               // [0x9ead64c] Final|Native|Protected|Const 
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections
	// void OnRep_EditConnections();                                                                                            // [0x9ead5e0] Final|Native|Protected|Const 
};

