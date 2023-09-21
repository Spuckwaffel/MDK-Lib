
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeMutator
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioGameplayVolumeMutator : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xA8, 4, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayVolume.AudioGameplayVolumeMutator.SetPriority
	// void SetPriority(int32_t InPriority);                                                                                    // [0x72e7e34] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.AttenuationVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UAttenuationVolumeComponent : public UAudioGameplayVolumeMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     ExteriorVolume                                              OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     ExteriorTime                                                OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     InteriorVolume                                              OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     InteriorTime                                                OFFSET(get<float>, {0xBC, 4, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayVolume.AttenuationVolumeComponent.SetInteriorVolume
	// void SetInteriorVolume(float Volume, float InterpolateTime);                                                             // [0x72e7d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayVolume.AttenuationVolumeComponent.SetExteriorVolume
	// void SetExteriorVolume(float Volume, float InterpolateTime);                                                             // [0x72e7c8c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolume
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class AAudioGameplayVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UAudioGameplayVolumeComponent*)            AGVComponent                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnListenerEnterEvent                                        OFFSET(get<T>, {0x2D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnListenerExitEvent                                         OFFSET(get<T>, {0x2E8, 16, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.SetEnabled
	// void SetEnabled(bool bEnable);                                                                                           // [0x72e7bf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnRep_bEnabled
	// void OnRep_bEnabled();                                                                                                   // [0x2154680] Native|Protected     
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnListenerExit
	// void OnListenerExit();                                                                                                   // [0x2bb5594] Native|Event|Public|BlueprintEvent 
	// Function /Script/AudioGameplayVolume.AudioGameplayVolume.OnListenerEnter
	// void OnListenerEnter();                                                                                                  // [0x2c813d4] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeComponent
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UAudioGameplayVolumeComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FMulticastInlineDelegate)                  OnProxyEnter                                                OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProxyExit                                                 OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UAudioGameplayVolumeProxy*)                Proxy                                                       OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeComponentBase
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioGameplayVolumeComponentBase : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeProxy
/// Size: 0x0020 (0x000028 - 0x000048)
class UAudioGameplayVolumeProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AudioGameplayVolume.AGVPrimitiveComponentProxy
/// Size: 0x0008 (0x000048 - 0x000050)
class UAGVPrimitiveComponentProxy : public UAudioGameplayVolumeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/AudioGameplayVolume.AGVConditionProxy
/// Size: 0x0008 (0x000048 - 0x000050)
class UAGVConditionProxy : public UAudioGameplayVolumeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/AudioGameplayVolume.AudioGameplayVolumeSubsystem
/// Size: 0x0128 (0x000030 - 0x000158)
class UAudioGameplayVolumeSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TMap<uint32_t, UAudioGameplayVolumeComponent*>) AGVComponents                                          OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Class /Script/AudioGameplayVolume.FilterVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UFilterVolumeComponent : public UAudioGameplayVolumeMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     ExteriorLPF                                                 OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     ExteriorLPFTime                                             OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     InteriorLPF                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     InteriorLPFTime                                             OFFSET(get<float>, {0xBC, 4, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayVolume.FilterVolumeComponent.SetInteriorLPF
	// void SetInteriorLPF(float Volume, float InterpolateTime);                                                                // [0x72e7d60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioGameplayVolume.FilterVolumeComponent.SetExteriorLPF
	// void SetExteriorLPF(float Volume, float InterpolateTime);                                                                // [0x72e7c8c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.ReverbVolumeComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UReverbVolumeComponent : public UAudioGameplayVolumeMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FReverbSettings)                           ReverbSettings                                              OFFSET(get<T>, {0xB0, 32, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayVolume.ReverbVolumeComponent.SetReverbSettings
	// void SetReverbSettings(FReverbSettings& NewReverbSettings);                                                              // [0x72e7ec0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.SubmixOverrideVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class USubmixOverrideVolumeComponent : public UAudioGameplayVolumeMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FAudioVolumeSubmixOverrideSettings>) SubmixOverrideSettings                                     OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayVolume.SubmixOverrideVolumeComponent.SetSubmixOverrideSettings
	// void SetSubmixOverrideSettings(TArray<FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings);                   // [0x72e7f78] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioGameplayVolume.SubmixSendVolumeComponent
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class USubmixSendVolumeComponent : public UAudioGameplayVolumeMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FAudioVolumeSubmixSendSettings>)    SubmixSendSettings                                          OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/AudioGameplayVolume.SubmixSendVolumeComponent.SetSubmixSendSettings
	// void SetSubmixSendSettings(TArray<FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings);                               // [0x72e8044] Final|Native|Public|HasOutParms|BlueprintCallable 
};

