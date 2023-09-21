
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameFeatures

/// Class /Script/AudioWorldization.AudioWorldizationReflectionProbe
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AAudioWorldizationReflectionProbe : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(USubmixSendVolumeComponent*)               SubmixSends                                                 OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UAudioGameplayVolumeComponent*)            AGVComponent                                                OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/AudioWorldization.AudioWorldizationDefaultSettings
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UAudioWorldizationDefaultSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FAudioWorldizationGlobalSettings)          GlobalSettings                                              OFFSET(get<T>, {0x30, 48, 0, 0})
	SMember(FAudioWorldizationSettings)                DefaultSettings                                             OFFSET(get<T>, {0x60, 88, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   ModulationParameters                                        OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/AudioWorldization.AudioWorldizationSubsystem
/// Size: 0x0128 (0x000040 - 0x000168)
class UAudioWorldizationSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(USoundControlBus*)                         EnclosureBus                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(USoundControlBus*)                         WallDistanceBus                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(USoundControlBus*)                         ListenerAzimuthBus                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAudioWorldizationSettings)                CurrentSettings                                             OFFSET(get<T>, {0x88, 88, 0, 0})
	CMember(AAudioWorldizationReflectionProbe*)        VolumeActor                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UAudioWorldizationTracePolicyBase*)        TracePolicy                                                 OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UAudioWorldizationTraceDirectionPolicyBase*) TraceDirectionPolicy                                      OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FAudioWorldizationSettings>)        SettingsStack                                               OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<USoundControlBus*>)                 QuadrantEnclosureBuses                                      OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<USoundControlBus*>)                 QuadrantWallDistanceBuses                                   OFFSET(get<T>, {0x158, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetWorldizationSettings
	// void SetWorldizationSettings(FAudioWorldizationSettings& InSettings);                                                    // [0x74fa520] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0x74fa4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetDefaultSettings
	// void SetDefaultSettings();                                                                                               // [0x74fa48c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.RemoveWorldizationSettings
	// void RemoveWorldizationSettings(FName InIdentifier);                                                                     // [0x74fa40c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.GetTraceResults
	// TArray<FAudioSphereTraceResult> GetTraceResults();                                                                       // [0x74fa390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.GetEnclosureFactor
	// float GetEnclosureFactor();                                                                                              // [0x74fa378] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.GetAverageTraceDistance
	// float GetAverageTraceDistance();                                                                                         // [0x74fa360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	SMember(FAudioWorldizationSettings)                Settings                                                    OFFSET(get<T>, {0x28, 88, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationSend
/// Size: 0x0068 (0x000000 - 0x000068)
class FAudioWorldizationSend : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(USoundSubmix*)                             Submix                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TSet<USoundModulatorBase*>)                VolumeModulators                                            OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TArray<USoundEffectSubmixPreset*>)         EffectChain                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FAudioWorldizationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Identifier                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FAudioWorldizationSend>)            Sends                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     TraceRadius                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   TracePoints                                                 OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   TracesPerFrame                                              OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FVector)                                   TraceOrigin                                                 OFFSET(get<T>, {0x28, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(UClass*)                                   TracePolicy                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UClass*)                                   TraceDirectionPolicy                                        OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationQuadrantSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FAudioWorldizationQuadrantSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USoundControlBus*)                         WallDistanceBus                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USoundControlBus*)                         EnclosureBus                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationGlobalSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FAudioWorldizationGlobalSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     EffectCrossfadeTime                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(USoundControlBus*)                         EnclosureBus                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(USoundControlBus*)                         WallDistanceBus                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(USoundControlBus*)                         ListenerAzimuthBus                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<FAudioWorldizationQuadrantSettings>) Quadrants                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioSphereTraceResult
/// Size: 0x000C (0x000000 - 0x00000C)
class FAudioSphereTraceResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bBlocking                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
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

