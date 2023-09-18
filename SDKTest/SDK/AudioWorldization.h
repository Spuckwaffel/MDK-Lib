/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioWorldization.

/// Struct /Script/AudioWorldization.AudioWorldizationSend
/// Size: 0x0068 (0x000000 - 0x000068)
class FAudioWorldizationSend : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(USoundSubmix*)                             Submix                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TSet<USoundModulatorBase*>)                VolumeModulators                                            ___ OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TArray<USoundEffectSubmixPreset*>)         EffectChain                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FAudioWorldizationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Identifier                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FAudioWorldizationSend>)            Sends                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     TraceRadius                                                 ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TracePoints                                                 ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   TracesPerFrame                                              ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FVector)                                   TraceOrigin                                                 ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(UClass*)                                   TracePolicy                                                 ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UClass*)                                   TraceDirectionPolicy                                        ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationQuadrantSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FAudioWorldizationQuadrantSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USoundControlBus*)                         WallDistanceBus                                             ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USoundControlBus*)                         EnclosureBus                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationGlobalSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FAudioWorldizationGlobalSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     EffectCrossfadeTime                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(USoundControlBus*)                         EnclosureBus                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(USoundControlBus*)                         WallDistanceBus                                             ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(USoundControlBus*)                         ListenerAzimuthBus                                          ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<FAudioWorldizationQuadrantSettings>) Quadrants                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioSphereTraceResult
/// Size: 0x000C (0x000000 - 0x00000C)
class FAudioSphereTraceResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bBlocking                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Distance                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/AudioWorldization.AudioWorldizationReflectionProbe
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AAudioWorldizationReflectionProbe : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(USubmixSendVolumeComponent*)               SubmixSends                                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UAudioGameplayVolumeComponent*)            AGVComponent                                                ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/AudioWorldization.AudioWorldizationDefaultSettings
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UAudioWorldizationDefaultSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FAudioWorldizationGlobalSettings)          GlobalSettings                                              ___ OFFSET(get<T>, {0x30, 48, 0, 0})
	SMember(FAudioWorldizationSettings)                DefaultSettings                                             ___ OFFSET(get<T>, {0x60, 88, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   ModulationParameters                                        ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/AudioWorldization.AudioWorldizationSubsystem
/// Size: 0x0128 (0x000040 - 0x000168)
class UAudioWorldizationSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(USoundControlBus*)                         EnclosureBus                                                ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(USoundControlBus*)                         WallDistanceBus                                             ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(USoundControlBus*)                         ListenerAzimuthBus                                          ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAudioWorldizationSettings)                CurrentSettings                                             ___ OFFSET(get<T>, {0x88, 88, 0, 0})
	CMember(AAudioWorldizationReflectionProbe*)        VolumeActor                                                 ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UAudioWorldizationTracePolicyBase*)        TracePolicy                                                 ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UAudioWorldizationTraceDirectionPolicyBase*) TraceDirectionPolicy                                      ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FAudioWorldizationSettings>)        SettingsStack                                               ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<USoundControlBus*>)                 QuadrantEnclosureBuses                                      ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<USoundControlBus*>)                 QuadrantWallDistanceBuses                                   ___ OFFSET(get<T>, {0x158, 16, 0, 0})
};

/// Class /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioWorldizationTraceDirectionPolicyBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioWorldizationTraceDirectionPolicyDefault : public UAudioWorldizationTraceDirectionPolicyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioWorldization.AudioWorldizationTracePolicyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioWorldizationTracePolicyBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioWorldization.AudioWorldizationTracePolicyDefault
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioWorldizationTracePolicyDefault : public UAudioWorldizationTracePolicyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioWorldization.GameFeatureAction_SetAudioWorldizationSettings
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UGameFeatureAction_SetAudioWorldizationSettings : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FAudioWorldizationSettings)                Settings                                                    ___ OFFSET(get<T>, {0x28, 88, 0, 0})
};

/// Enum /Script/AudioWorldization.ETraceDirection
/// Size: 0x06
enum ETraceDirection : uint8_t
{
	ETraceDirection__N0                                                              = 0,
	ETraceDirection__E1                                                              = 1,
	ETraceDirection__S2                                                              = 2,
	ETraceDirection__W3                                                              = 3,
	ETraceDirection__None4                                                           = 4,
	ETraceDirection__ETraceDirection_MAX5                                            = 5
};

