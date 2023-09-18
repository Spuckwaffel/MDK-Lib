/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HeistBasesGameplayRuntime.

/// Struct /Script/HeistBasesGameplayRuntime.FortHeistDisplayCaseItemDataTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FFortHeistDisplayCaseItemDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortWorldItemDefinition*)                 WorldItemDefinition                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortGameStateComponent_HeistDisplayCaseItemManager : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnDisplayCaseItemManagerReady                               ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UFortWorldItemDefinition*>)         AllDisplayCaseItems                                         ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/HeistBasesGameplayRuntime.FortHeistDisplayCase
/// Size: 0x00D0 (0x000B80 - 0x000C50)
class AFortHeistDisplayCase : public ABuildingSMActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
	DMember(bool)                                      bReplicateLongInteractionDetails                            ___ OFFSET(get<bool>, {0xB88, 1, 0, 0})
	DMember(bool)                                      bCanBeMarked                                                ___ OFFSET(get<bool>, {0xB89, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               ___ OFFSET(get<bool>, {0xB89, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               ___ OFFSET(get<T>, {0xB90, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        ___ OFFSET(get<T>, {0xC38, 24, 0, 0})
};

