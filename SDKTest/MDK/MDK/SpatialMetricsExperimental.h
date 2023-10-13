
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SpatialMetricsCore

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyARDiskSizeMetric_Archive
/// Size: 0x0350 (0x000040 - 0x000390)
class UActorPackageDependencyARDiskSizeMetric_Archive : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyCountMetric_Archive
/// Size: 0x0348 (0x000040 - 0x000388)
class UActorPackageDependencyCountMetric_Archive : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyIoDispatcherSizeMetric_Archive
/// Size: 0x0358 (0x000040 - 0x000398)
class UActorPackageDependencyIoDispatcherSizeMetric_Archive : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(EIoDispatcherChunkTypeFlags)               ChunkTypeFlags                                              OFFSET(get<T>, {0x390, 4, 0, 0})
};

/// Class /Script/SpatialMetricsExperimental.ActorPackageDependencyResourceSizeMetric_Archive
/// Size: 0x0358 (0x000040 - 0x000398)
class UActorPackageDependencyResourceSizeMetric_Archive : public USpatialMetric
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(EResourceSizeMemoryCategory)               MemoryCategoryFlags                                         OFFSET(get<T>, {0x390, 1, 0, 0})
};

/// Enum /Script/SpatialMetricsExperimental.EIoDispatcherChunkTypeFlags
/// Size: 0x17
enum EIoDispatcherChunkTypeFlags : uint32_t
{
	EIoDispatcherChunkTypeFlags__ExportBundleData0                                   = 1,
	EIoDispatcherChunkTypeFlags__BulkData1                                           = 2,
	EIoDispatcherChunkTypeFlags__OptionalBulkData2                                   = 4,
	EIoDispatcherChunkTypeFlags__MemoryMappedBulkData3                               = 8,
	EIoDispatcherChunkTypeFlags__ScriptObjects4                                      = 16,
	EIoDispatcherChunkTypeFlags__ContainerHeader5                                    = 32,
	EIoDispatcherChunkTypeFlags__ExternalFile6                                       = 64,
	EIoDispatcherChunkTypeFlags__ShaderCodeLibrary7                                  = 128,
	EIoDispatcherChunkTypeFlags__ShaderCode8                                         = 256,
	EIoDispatcherChunkTypeFlags__PackageStoreEntry9                                  = 512,
	EIoDispatcherChunkTypeFlags__DerivedData10                                       = 1024,
	EIoDispatcherChunkTypeFlags__EditorDerivedData11                                 = 2048,
	EIoDispatcherChunkTypeFlags__PackageResource12                                   = 4096,
	EIoDispatcherChunkTypeFlags__None13                                              = 0,
	EIoDispatcherChunkTypeFlags__Default14                                           = 15,
	EIoDispatcherChunkTypeFlags__All15                                               = 8191,
	EIoDispatcherChunkTypeFlags__EIoDispatcherChunkTypeFlags_MAX16                   = 8192
};

