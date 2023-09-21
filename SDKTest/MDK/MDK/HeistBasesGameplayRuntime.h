
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortGameStateComponent_HeistDisplayCaseItemManager : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnDisplayCaseItemManagerReady                               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UFortWorldItemDefinition*>)         AllDisplayCaseItems                                         OFFSET(get<T>, {0xB0, 16, 0, 0})
};



	/// Functions
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.IsDataReady
	// bool IsDataReady();                                                                                                      // [0x99bc648] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.HandlePlaylistDataReady
	// void HandlePlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x99bc52c] Final|Native|Private|HasOutParms 
	// Function /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.GetDisplayCaseItem
	// UFortWorldItemDefinition* GetDisplayCaseItem(FGameplayTag DisplayCaseGroupTag);                                          // [0x99bc3c8] Final|Native|Public|BlueprintCallable 
/// Class /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase
/// Size: 0x00D0 (0x000B80 - 0x000C50)
class AFortHeistDisplayCase : public ABuildingSMActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
	DMember(bool)                                      bReplicateLongInteractionDetails                            OFFSET(get<bool>, {0xB88, 1, 0, 0})
	DMember(bool)                                      bCanBeMarked                                                OFFSET(get<bool>, {0xB89, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               OFFSET(get<bool>, {0xB89, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(get<T>, {0xB90, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(get<T>, {0xC38, 24, 0, 0})
};



	/// Functions
	// Function /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyStartDisplayCaseLongUse
	// void OnServerNotifyStartDisplayCaseLongUse(AFortPlayerPawn* InteractingPawn);                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyEndDisplayCaseLongUse
	// void OnServerNotifyEndDisplayCaseLongUse(AFortPlayerPawn* InteractingPawn);                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Struct /Script/HeistBasesGameplayRuntime.FortHeistDisplayCaseItemDataTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FFortHeistDisplayCaseItemDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortWorldItemDefinition*)                 WorldItemDefinition                                         OFFSET(get<T>, {0x8, 8, 0, 0})
};

