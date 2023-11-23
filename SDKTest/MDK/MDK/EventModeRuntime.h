
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode
/// Size: 0x0170 (0x0000A0 - 0x000210)
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TWeakObjectPtr<UFortWeaponItemDefinition*>) ActivatorAsset                                             OFFSET(get<T>, {0x100, 32, 0, 0})
	CMember(TArray<FUIExtension>)                      UIExtensions                                                OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr>)        TaggedUIExtensions                                          OFFSET(get<T>, {0x130, 80, 0, 0})
	CMember(TArray<FEventModeFocusActor>)              FocusActors                                                 OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(TArray<FEventModeWidgetCachedData>)        CachedWidgetData                                            OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CurrentlyFocusedActor                                       OFFSET(get<T>, {0x1B0, 32, 0, 0})


	/// Functions
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnPlayerPawnPossessed
	// void OnPlayerPawnPossessed(APawn* PossessedPawn);                                                                        // [0x551cb00] Final|Native|Private 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnExitVehicle
	// void OnExitVehicle();                                                                                                    // [0xa122518] Final|Native|Private 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.OnEnterVehicle
	// void OnEnterVehicle();                                                                                                   // [0xa122504] Final|Native|Private 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusing
	// bool GetIsFocusing();                                                                                                    // [0xa1224ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsFocusAvailable
	// bool GetIsFocusAvailable();                                                                                              // [0x2ec24d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode.GetIsEventModeActive
	// bool GetIsEventModeActive();                                                                                             // [0x2b5bba0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventModeRuntime.FortWeapon_EventMode
/// Size: 0x0000 (0x001318 - 0x001318)
class AFortWeapon_EventMode : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4888;

public:
};

/// Struct /Script/EventModeRuntime.EventModeFocusActor
/// Size: 0x0048 (0x000000 - 0x000048)
class FEventModeFocusActor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Offset                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(float)                                     FOV                                                         OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/EventModeRuntime.EventModeWidgetCachedData
/// Size: 0x000C (0x000000 - 0x00000C)
class FEventModeWidgetCachedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EUIExtensionSlot)                          Slot                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UUserWidget*>)              Widget                                                      OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Enum /Script/EventModeRuntime.EFortEventModeEmoteToPlay
/// Size: 0x06
enum EFortEventModeEmoteToPlay : uint8_t
{
	EFortEventModeEmoteToPlay__Emote10                                               = 0,
	EFortEventModeEmoteToPlay__Emote21                                               = 1,
	EFortEventModeEmoteToPlay__Emote32                                               = 2,
	EFortEventModeEmoteToPlay__RandomEmote3                                          = 3,
	EFortEventModeEmoteToPlay__QuickEmotes4                                          = 4,
	EFortEventModeEmoteToPlay__EFortEventModeEmoteToPlay_MAX5                        = 5
};

