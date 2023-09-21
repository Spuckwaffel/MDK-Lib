
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/DaySequence.DaySequenceModifierComponent
/// Size: 0x0140 (0x0005B0 - 0x0006F0)
class UDaySequenceModifierComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	CMember(ADaySequenceActor*)                        TargetActor                                                 ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	SMember(FComponentReference)                       VolumeShapeComponent                                        ___ OFFSET(get<T>, {0x5B8, 40, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ExternalVolumeBlendTarget                                   ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UDaySequence*)                             UserDaySequence                                             ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UDaySequence*)                             ProceduralDaySequence                                       ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(TMap<FName, FDaySequenceModifierNamedSequence>) AdditionalNamedDaySequences                            ___ OFFSET(get<T>, {0x5F8, 80, 0, 0})
	DMember(int32_t)                                   Bias                                                        ___ OFFSET(get<int32_t>, {0x650, 4, 0, 0})
	DMember(float)                                     DayNightCycleTime                                           ___ OFFSET(get<float>, {0x654, 4, 0, 0})
	DMember(float)                                     BlendAmount                                                 ___ OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(float)                                     CustomVolumeBlendWeight                                     ___ OFFSET(get<float>, {0x660, 4, 0, 0})
	CMember(EDayNightCycleMode)                        DayNightCycle                                               ___ OFFSET(get<T>, {0x664, 1, 0, 0})
	CMember(EDaySequenceModifierBlendMode)             BlendMode                                                   ___ OFFSET(get<T>, {0x665, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostReinitializeSubSequences                              ___ OFFSET(get<T>, {0x668, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostEnableModifier                                        ___ OFFSET(get<T>, {0x678, 16, 0, 0})
	DMember(bool)                                      bIgnoreBias                                                 ___ OFFSET(get<bool>, {0x688, 1, 1, 0})
	DMember(bool)                                      bUseVolume                                                  ___ OFFSET(get<bool>, {0x688, 1, 1, 1})
	DMember(bool)                                      bIsComponentEnabled                                         ___ OFFSET(get<bool>, {0x688, 1, 1, 2})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x688, 1, 1, 3})
	DMember(bool)                                      bPreview                                                    ___ OFFSET(get<bool>, {0x688, 1, 1, 4})
};

/// Class /Script/DaySequence.DaySequence
/// Size: 0x00C8 (0x000068 - 0x000130)
class UDaySequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UMovieScene*)                              MovieScene                                                  ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FDaySequenceBindingReferences)             BindingReferences                                           ___ OFFSET(get<T>, {0x78, 160, 0, 0})
	CMember(UClass*)                                   DirectorClass                                               ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               ___ OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceActor
/// Size: 0x0140 (0x000290 - 0x0003D0)
class ADaySequenceActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(UDaySequencePlayer*)                       SequencePlayer                                              ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UCurveFloat*)                              DayInterpCurve                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TMap<FName, FDaySequenceAssetData>)        DaySequences                                                ___ OFFSET(get<T>, {0x2B0, 80, 0, 0})
	CMember(UMovieSceneBindingOverrides*)              BindingOverrides                                            ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bReplicatePlayback                                          ___ OFFSET(get<bool>, {0x308, 1, 1, 0})
	CMember(UDaySequence*)                             RootSequence                                                ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(bool)                                      bRunDayCycle                                                ___ OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(bool)                                      bUseInterpCurve                                             ___ OFFSET(get<bool>, {0x319, 1, 0, 0})
	SMember(FTimecode)                                 DayLength                                                   ___ OFFSET(get<T>, {0x31C, 20, 0, 0})
	SMember(FTimecode)                                 TimePerCycle                                                ___ OFFSET(get<T>, {0x330, 20, 0, 0})
	SMember(FTimecode)                                 InitialTimeOfDay                                            ___ OFFSET(get<T>, {0x344, 20, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class UDaySequenceDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UDaySequencePlayer*)                       Player                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   SubSequenceID                                               ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MovieScenePlayerIndex                                       ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/DaySequence.DaySequencePlayer
/// Size: 0x0008 (0x0004C8 - 0x0004D0)
class UDaySequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
};

/// Class /Script/DaySequence.DaySequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class UDaySequenceProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bDefaultLockEngineToDisplayRate                             ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   DefaultDisplayRate                                          ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultTickResolution                                       ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(EUpdateClockSource)                        DefaultClockSource                                          ___ OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceProvider
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ADaySequenceProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TArray<UDaySequence*>)                     DaySequenceAssets                                           ___ OFFSET(get<T>, {0x290, 16, 0, 0})
};

/// Class /Script/DaySequence.DaySequenceSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UDaySequenceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/DaySequence.DaySequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UDaySequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/DaySequence.EnvironmentLightingActor
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class AEnvironmentLightingActor : public ADaySequenceProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(USkyAtmosphereComponent*)                  SkyAtmosphereComponent                                      ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightComponent                                           ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USceneComponent*)                          SunRootComponent                                            ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               SunComponent                                                ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UExponentialHeightFogComponent*)           ExponentialHeightFogComponent                               ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UVolumetricCloudComponent*)                VolumetricCloudComponent                                    ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceModifierNamedSequence
/// Size: 0x0010 (0x000000 - 0x000010)
class FDaySequenceModifierNamedSequence : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UDaySequence*)                             Sequence                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   BiasOffset                                                  ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceAssetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FDaySequenceAssetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UDaySequence*)                             Sequence                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Bias                                                        ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bMuted                                                      ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReference
/// Size: 0x0030 (0x000000 - 0x000030)
class FDaySequenceBindingReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UObject*>)                  ExternalObjectPath                                          ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FString)                                   ObjectPath                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FDaySequenceBindingReferenceArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FDaySequenceBindingReference>)      References                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/DaySequence.DaySequenceBindingReferences
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FDaySequenceBindingReferences : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FGuid, FDaySequenceBindingReferenceArray>) BindingIdToReferences                                  ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FGuid>)                               AnimSequenceInstances                                       ___ OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Enum /Script/DaySequence.EDayNightCycleMode
/// Size: 0x06
enum EDayNightCycleMode : uint8_t
{
	EDayNightCycleMode__Default0                                                     = 0,
	EDayNightCycleMode__FixedTime1                                                   = 1,
	EDayNightCycleMode__StartAtSpecifiedTime2                                        = 2,
	EDayNightCycleMode__RandomFixedTime3                                             = 3,
	EDayNightCycleMode__RandomStartTime4                                             = 4,
	EDayNightCycleMode__EDayNightCycleMode_MAX5                                      = 5
};

/// Enum /Script/DaySequence.EDaySequenceModifierBlendMode
/// Size: 0x03
enum EDaySequenceModifierBlendMode : uint8_t
{
	EDaySequenceModifierBlendMode__None0                                             = 0,
	EDaySequenceModifierBlendMode__Distance1                                         = 1,
	EDaySequenceModifierBlendMode__EDaySequenceModifierBlendMode_MAX2                = 2
};

