/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CRD_GameStreamRuntime.

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCreativeGameStreamDeviceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastSparseDelegate)                  OnTriggered                                                 ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortMinigameLogicComponent*>) MinigameLogicComponent                                   ___ OFFSET(get<T>, {0xA4, 8, 0, 0})
};

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<TWeakObjectPtr>)                    EndGameCreativeGameStreamDeviceComponentQueue               ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortMinigame*>)            Minigame                                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
};

