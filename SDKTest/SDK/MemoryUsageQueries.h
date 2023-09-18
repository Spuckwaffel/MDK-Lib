/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MemoryUsageQueries.

/// Struct /Script/MemoryUsageQueries.CollectionInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FCollectionInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Includes                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Excludes                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(float)                                     BudgetMB                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/MemoryUsageQueries.MemoryUsageQueriesConfig
/// Size: 0x0060 (0x000028 - 0x000088)
class UMemoryUsageQueriesConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FCollectionInfo>)                   Collections                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<FString, FString>)                    SavingsPresets                                              ___ OFFSET(get<T>, {0x38, 80, 0, 0})
};

