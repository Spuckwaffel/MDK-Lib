
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCreativeGameStreamDeviceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastSparseDelegate)                  OnTriggered                                                 OFFSET(getStruct<T>, {0xA0, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortMinigameLogicComponent*>) MinigameLogicComponent                                   OFFSET(get<T>, {0xA4, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.RemoveFromEndGameQueue
	// void RemoveFromEndGameQueue();                                                                                           // [0x2b7b1c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState);                               // [0x7cf1260] Final|Native|Private 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.IsWithinPublishedPlayspace
	// bool IsWithinPublishedPlayspace();                                                                                       // [0x29d4b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.Init
	// void Init(UFortMinigameLogicComponent* InMinigameLogicComponent);                                                        // [0x551cb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.CreativeGameStreamDeviceComponentSignature__DelegateSignature
	// void CreativeGameStreamDeviceComponentSignature__DelegateSignature(UCreativeGameStreamDeviceComponent* CreativeGameStreamDeviceComponent); // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceComponent.AddToEndGameQueue
	// void AddToEndGameQueue();                                                                                                // [0x2b7b1c8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<TWeakObjectPtr>)                    EndGameCreativeGameStreamDeviceComponentQueue               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortMinigame*>)            Minigame                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged
	// void OnMinigameStateChanged(AFortMinigame* InMinigame, EFortMinigameState NewMinigameState);                             // [0x7cf1260] Final|Native|Private 
};

