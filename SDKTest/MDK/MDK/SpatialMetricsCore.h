
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SpatialMetricsCore.SpatialMetric
/// Size: 0x0018 (0x000028 - 0x000040)
class USpatialMetric : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(get<T>, {0x28, 20, 0, 0})
};

/// Class /Script/SpatialMetricsCore.SpatialMetricsSubsystem
/// Size: 0x0028 (0x000030 - 0x000058)
class USpatialMetricsSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<USpatialMetric*>)                   Metrics                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     UpdateRateInSeconds                                         OFFSET(get<float>, {0x50, 4, 0, 0})
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
class FSpatialValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntVector)                                Location                                                    OFFSET(get<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricProperties
/// Size: 0x0014 (0x000000 - 0x000014)
class FSpatialMetricProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     IdName                                                      OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinValue                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ThresholdValue                                              OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SpatialPrecision                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSample
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpatialMetricSample : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FSpatialMetricProperties)                  Properties                                                  OFFSET(get<T>, {0x0, 20, 0, 0})
	CMember(TArray<FSpatialValue>)                     Values                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FIntVector)                                BoundsMin                                                   OFFSET(get<T>, {0x28, 12, 0, 0})
	SMember(FIntVector)                                BoundsMax                                                   OFFSET(get<T>, {0x34, 12, 0, 0})
};

/// Struct /Script/SpatialMetricsCore.SpatialMetricSampleImageProperties
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialMetricSampleImageProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   ImageSize                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinWorldUnitsPerPixel                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     WorldColorSaturation                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpatialValueAlpha                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

