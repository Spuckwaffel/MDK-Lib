/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AssetDependencies.

/// Class /Script/AssetDependencies.ActorMetricsSettings
/// Size: 0x0120 (0x000030 - 0x000150)
class UActorMetricsSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TArray<FName>)                             ExcludedPaths                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FName>)                             ExcludedPackages                                            ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<UClass*>)                           ClassIgnoreList                                             ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TSet<UClass*>)                             ClassIgnoreListSet                                          ___ OFFSET(get<T>, {0x100, 80, 0, 0})
};

