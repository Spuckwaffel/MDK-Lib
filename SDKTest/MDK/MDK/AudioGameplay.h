
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioGameplay.AudioComponentGroupExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioComponentGroupExtension : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioGameplay.AudioGameplayCondition
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioGameplayCondition : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioGameplay.AudioGameplayVolumeInteraction
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioGameplayVolumeInteraction : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioGameplay.AudioComponentGroup
/// Size: 0x01B0 (0x0002A0 - 0x000450)
class UAudioComponentGroup : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FMulticastInlineDelegate)                  OnStopped                                                   ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKilled                                                    ___ OFFSET(get<T>, {0x2B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVirtualized                                               ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnvirtualized                                             ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<UAudioComponent*>)                  Components                                                  ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<FAudioParameter>)                   ParamsToSet                                                 ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<FAudioParameter>)                   PersistentParams                                            ___ OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  Extensions                                                  ___ OFFSET(get<T>, {0x318, 16, 0, 0})
};

/// Class /Script/AudioGameplay.AudioGameplayComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UAudioGameplayComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/AudioGameplay.AudioRequirementPreset
/// Size: 0x0048 (0x000030 - 0x000078)
class UAudioRequirementPreset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagQuery)                         Query                                                       ___ OFFSET(get<T>, {0x30, 72, 0, 0})
};

/// Class /Script/AudioGameplay.AudioParameterComponent
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UAudioParameterComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<TWeakObjectPtr>)                    ActiveComponents                                            ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FAudioParameter>)                   Parameters                                                  ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Struct /Script/AudioGameplay.AudioGameplayRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
class FAudioGameplayRequirements : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UAudioRequirementPreset*)                  Preset                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagQuery)                         Custom                                                      ___ OFFSET(get<T>, {0x8, 72, 0, 0})
};

