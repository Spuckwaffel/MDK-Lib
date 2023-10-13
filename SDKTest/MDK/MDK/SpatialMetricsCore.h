
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorIndexerSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTrackerSubscriber
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMetricsActorTrackerSubscriber : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystemExtension
/// Size: 0x0058 (0x000028 - 0x000080)
class USpatialMetricsSubsystemExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetric
/// Size: 0x0018 (0x000028 - 0x000040)
class USpatialMetric : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorIndexer
/// Size: 0x0138 (0x000080 - 0x0001B8)
class USpatialMetricsActorIndexer : public USpatialMetricsSubsystemExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	DMember(int32_t)                                   IndexCacheSize                                              OFFSET(get<int32_t>, {0x1B4, 4, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsActorTracker
/// Size: 0x0070 (0x000080 - 0x0000F0)
class USpatialMetricsActorTracker : public USpatialMetricsSubsystemExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystem
/// Size: 0x0038 (0x000030 - 0x000068)
class USpatialMetricsSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<USpatialMetric*>)                   Metrics                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<USpatialMetricsSubsystemExtension*>) Extensions                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     UpdateRateInSeconds                                         OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Class /Script/SpatialMetricsCore.TestMetric
/// Size: 0x0078 (0x000040 - 0x0000B8)
class UTestMetric : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   SamplingDistance                                            OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	DMember(float)                                     WorldSamplingFactor                                         OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialValue
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntVector)                                Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricProperties
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpatialMetricProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     IdName                                                      OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinValue                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ThresholdValue                                              OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SpatialPrecision                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(EUnit)                                     Unit                                                        OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSample
/// Size: 0x0048 (0x000000 - 0x000048)
class FSpatialMetricSample : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(TArray<FSpatialValue>)                     Values                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FIntVector)                                BoundsMin                                                   OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FIntVector)                                BoundsMax                                                   OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	SMember(FDateTime)                                 Timestamp                                                   OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSampleImageProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialMetricSampleImageProperties : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   ImageSize                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinWorldUnitsPerPixel                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     WorldColorSaturation                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpatialValueAlpha                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

