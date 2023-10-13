
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SpatialMetricsCore

/// Class /Script/SpatialMetrics.ActorCountMetric
/// Size: 0x00B8 (0x000040 - 0x0000F8)
class UActorCountMetric : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/SpatialMetrics.ActorResourceSizeMetric
/// Size: 0x00E8 (0x000040 - 0x000128)
class UActorResourceSizeMetric : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(float)                                     UpdateTimeThresholdInMs                                     OFFSET(get<float>, {0x120, 4, 0, 0})
	CMember(EResourceSizeMemoryCategory)               MemoryCategoryFlags                                         OFFSET(get<T>, {0x124, 1, 0, 0})
};

/// Enum /Script/SpatialMetrics.EResourceSizeMemoryCategory
/// Size: 0x06
enum EResourceSizeMemoryCategory : uint8_t
{
	EResourceSizeMemoryCategory__None0                                               = 0,
	EResourceSizeMemoryCategory__System1                                             = 1,
	EResourceSizeMemoryCategory__Video2                                              = 2,
	EResourceSizeMemoryCategory__Other3                                              = 4,
	EResourceSizeMemoryCategory__All4                                                = 7,
	EResourceSizeMemoryCategory__EResourceSizeMemoryCategory_MAX5                    = 8
};

