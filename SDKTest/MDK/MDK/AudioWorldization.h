
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
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UAudioWorldizationDefaultSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FAudioWorldizationGlobalSettings)          GlobalSettings                                              OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FAudioWorldizationSettings)                DefaultSettings                                             OFFSET(getStruct<T>, {0x60, 120, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   ModulationParameters                                        OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/AudioWorldization.AudioWorldizationSubsystem
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UAudioWorldizationSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(USoundControlBus*)                         EnclosureBus                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(USoundControlBus*)                         WallDistanceBus                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(USoundControlBus*)                         ListenerAzimuthBus                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAudioWorldizationSettings)                CurrentSettings                                             OFFSET(getStruct<T>, {0x60, 120, 0, 0})
	CMember(AAudioWorldizationReflectionProbe*)        VolumeActor                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UAudioWorldizationTracePolicyBase*)        TracePolicy                                                 OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UAudioWorldizationTraceDirectionPolicyBase*) TraceDirectionPolicy                                      OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TArray<FAudioWorldizationSettings>)        SettingsStack                                               OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(TArray<USoundControlBus*>)                 QuadrantEnclosureBuses                                      OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<USoundControlBus*>)                 QuadrantWallDistanceBuses                                   OFFSET(get<T>, {0x1C0, 16, 0, 0})


	/// Functions
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetWorldizationSettings
	// void SetWorldizationSettings(FAudioWorldizationSettings& InSettings);                                                    // [0x7761cb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0x7761c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.SetDefaultSettings
	// void SetDefaultSettings();                                                                                               // [0x7761c1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.RemoveWorldizationSettings
	// void RemoveWorldizationSettings(FName InIdentifier);                                                                     // [0x7761b9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.GetWallDistanceRatio
	// float GetWallDistanceRatio();                                                                                            // [0x7761b74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioWorldization.AudioWorldizationSubsystem.GetEnclosureFactor
	// float GetEnclosureFactor();                                                                                              // [0x7761b4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioWorldizationTraceDirectionPolicyBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioWorldization.AudioWorldizationTraceDirectionPolicyDefault
/// Size: 0x0000 (0x000030 - 0x000030)
class UAudioWorldizationTraceDirectionPolicyDefault : public UAudioWorldizationTraceDirectionPolicyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

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
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGameFeatureAction_SetAudioWorldizationSettings : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FAudioWorldizationSettings)                Settings                                                    OFFSET(getStruct<T>, {0x28, 120, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationSend
/// Size: 0x0068 (0x000000 - 0x000068)
class FAudioWorldizationSend : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(USoundSubmix*)                             Submix                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TSet<USoundModulatorBase*>)                VolumeModulators                                            OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TArray<USoundEffectSubmixPreset*>)         EffectChain                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationSettings
/// Size: 0x0078 (0x000000 - 0x000078)
class FAudioWorldizationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     Identifier                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FAudioWorldizationSend>)            Sends                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     EnclosureSmoothSpeed                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     WallDistanceSmoothSpeed                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TraceRadius                                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   TracePoints                                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   TracesPerFrame                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     SideQuadrantDegrees                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     UpQuadrantDegrees                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FVector)                                   TraceOrigin                                                 OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ResponseChannels                                            OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UClass*)                                   TracePolicy                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   TraceDirectionPolicy                                        OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationQuadrantSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FAudioWorldizationQuadrantSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USoundControlBus*)                         WallDistanceBus                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USoundControlBus*)                         EnclosureBus                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioWorldizationGlobalSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FAudioWorldizationGlobalSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     EffectCrossfadeTime                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FName)                                     IgnoreTraceActorTag                                         OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(USoundControlBus*)                         EnclosureBus                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(USoundControlBus*)                         WallDistanceBus                                             OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(USoundControlBus*)                         ListenerAzimuthBus                                          OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<FAudioWorldizationQuadrantSettings>) Quadrants                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AudioWorldization.AudioSphereTraceResult
/// Size: 0x000C (0x000000 - 0x00000C)
class FAudioSphereTraceResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bBlocking                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Enum /Script/AudioWorldization.ETraceDirection
/// Size: 0x07
enum ETraceDirection : uint8_t
{
	ETraceDirection__N0                                                              = 0,
	ETraceDirection__E1                                                              = 1,
	ETraceDirection__S2                                                              = 2,
	ETraceDirection__W3                                                              = 3,
	ETraceDirection__Up4                                                             = 4,
	ETraceDirection__None5                                                           = 5,
	ETraceDirection__ETraceDirection_MAX6                                            = 6
};

