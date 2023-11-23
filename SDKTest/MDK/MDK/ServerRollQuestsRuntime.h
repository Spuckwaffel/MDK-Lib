
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFortGameStateComponent_ServerRollQuests : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FDataRegistryType)                         DataRegistryType_ServerRollQuests                           OFFSET(getStruct<T>, {0xB8, 4, 0, 0})


	/// Functions
	// Function /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests.PopulateMap
	// void PopulateMap(UDataRegistry* ServerRollQuestsRegistry, FGameplayTagContainer& PlaylistContextTags);                   // [0xa1c5924] Final|Native|Private|HasOutParms 
	// Function /Script/ServerRollQuestsRuntime.FortGameStateComponent_ServerRollQuests.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& GameplayTags); // [0x7d3d7bc] Final|Native|Private|HasOutParms 
};

/// Struct /Script/ServerRollQuestsRuntime.ServerRollQuestTableRow
/// Size: 0x0060 (0x000008 - 0x000068)
class FServerRollQuestTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TScriptInterface<Class>)                   Quest                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTag)                              Bucket                                                      OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FGameplayTagQuery)                         PlaylistQuery                                               OFFSET(getStruct<T>, {0x20, 72, 0, 0})
};

