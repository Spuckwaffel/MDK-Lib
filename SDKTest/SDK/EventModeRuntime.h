/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EventModeRuntime.

/// Struct /Script/EventModeRuntime.EventModeFocusActor
/// Size: 0x0048 (0x000000 - 0x000048)
class FEventModeFocusActor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(float)                                     Distance                                                    ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(float)                                     FOV                                                         ___ OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/EventModeRuntime.EventModeWidgetCachedData
/// Size: 0x000C (0x000000 - 0x00000C)
class FEventModeWidgetCachedData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EUIExtensionSlot)                          Slot                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<UUserWidget*>)              Widget                                                      ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Class /Script/EventModeRuntime.FortGameFrameworkComponent_EventMode
/// Size: 0x0170 (0x0000A0 - 0x000210)
class UFortGameFrameworkComponent_EventMode : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TWeakObjectPtr<UFortWeaponItemDefinition*>) ActivatorAsset                                             ___ OFFSET(get<T>, {0x100, 32, 0, 0})
	CMember(TArray<FUIExtension>)                      UIExtensions                                                ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr>)        TaggedUIExtensions                                          ___ OFFSET(get<T>, {0x130, 80, 0, 0})
	CMember(TArray<FEventModeFocusActor>)              FocusActors                                                 ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(TArray<FEventModeWidgetCachedData>)        CachedWidgetData                                            ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CurrentlyFocusedActor                                       ___ OFFSET(get<T>, {0x1B0, 32, 0, 0})
};

/// Class /Script/EventModeRuntime.FortWeapon_EventMode
/// Size: 0x0000 (0x0011F8 - 0x0011F8)
class AFortWeapon_EventMode : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4600;

public:
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

