
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/EpicCMS.DownloadCacheEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FDownloadCacheEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   FilePath                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SourceUrl                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FDateTime)                                 LastAccessTime                                              ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/EpicCMS.DownloadCache
/// Size: 0x0058 (0x000000 - 0x000058)
class FDownloadCache : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Version                                                     ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TMap<FString, FDownloadCacheEntry>)        Cache                                                       ___ OFFSET(get<T>, {0x8, 80, 0, 0})
};

