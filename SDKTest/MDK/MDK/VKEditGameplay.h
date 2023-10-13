
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
/// Size: 0x0038 (0x0000F8 - 0x000130)
class UPlayspaceComponent_PlaysetRootSpawner : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_VKEditCreativeToolsPermission
/// Size: 0x0000 (0x000208 - 0x000208)
class UPlayspaceComponent_VKEditCreativeToolsPermission : public UPlayspaceComponent_CreativeToolsPermission
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
};

/// Class /Script/VKEditGameplay.VKEditPlayspace
/// Size: 0x0110 (0x000698 - 0x0007A8)
class AVKEditPlayspace : public AFortPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1960;

public:
	CMember(TWeakObjectPtr<UClass*>)                   EditorOnlyMinigameSettingsMachineClassToSpawn               OFFSET(get<T>, {0x6D8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EditorOnlyWorldManagerClassToSpawn                          OFFSET(get<T>, {0x6F8, 32, 0, 0})
	CMember(UFortLevelStreamComponent*)                LevelStreamComponent                                        OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UFortProjectEditComponent*)                ProjectEditComponent                                        OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UPlayspaceComponent_PlayStopPauseManager*) PlayStopPauseManager                                        OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UPlayspaceComponent_EditConnectionManager*) EditConnectionManager                                      OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UPlayspaceComponent_LiveEdit*)             LiveEditComponent                                           OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UPlayspaceComponent_VKEditCreativeToolsPermission*) CreativeToolsPermission                            OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeLoadingStateProxy*) CreativeLoadingStateProxy                              OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UPlayspaceComponent_SpatialGameplay*)      SpatialGameplayComponent                                    OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UFortVolumeObjectTrackingComponent*)       ObjectTrackingComponent                                     OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UPlayspaceComponent_DeviceTracking*)       DeviceTrackerComponent                                      OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeInventory*)    CreativeInventoryComponent                                  OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UPlayspaceComponent_ActorMemoryTracker*)   ActorMemoryTrackerComponent                                 OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UFortCreativeDynamicXpComponent*)          FortCreativeDynamicXp                                       OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UPlayspaceComponent_CreativeModifyEmotes*) CreativeModifyEmotesComponent                               OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UFortPlayspaceComponent_WorldTimeOfDayOverride*) WorldTimeOfDayOverrideComponent                       OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UFortPlayspaceComponent_NaniteSettingsOverride*) NaniteSettingsOverrideComponent                       OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UPlayspaceComponent_PlaysetRootSpawner*)   PlaysetRootSpawnerComponent                                 OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UPlayspaceComponent_PlayerPawnOverrides*)  PlayerPawnOverridesComponent                                OFFSET(get<T>, {0x7A0, 8, 0, 0})


	/// Functions
	// Function /Script/VKEditGameplay.VKEditPlayspace.OnClientActivatedContent
	// void OnClientActivatedContent(FUniqueNetIdRepl& ClientNetId);                                                            // [0xa02ef54] Final|Native|Private|HasOutParms|Const 
};

/// Class /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager
/// Size: 0x00C8 (0x0000F8 - 0x0001C0)
class UPlayspaceComponent_EditConnectionManager : public UFortPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	DMember(int32_t)                                   EditConnections                                             OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	CMember(EVkEditStatus)                             VkEditStatus                                                OFFSET(get<T>, {0x19C, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UITagsToHide                                                OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})


	/// Functions
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_VkEditStatus
	// void OnRep_VkEditStatus();                                                                                               // [0xa02f068] Final|Native|Protected|Const 
	// Function /Script/VKEditGameplay.PlayspaceComponent_EditConnectionManager.OnRep_EditConnections
	// void OnRep_EditConnections();                                                                                            // [0xa02f024] Final|Native|Protected|Const 
};

