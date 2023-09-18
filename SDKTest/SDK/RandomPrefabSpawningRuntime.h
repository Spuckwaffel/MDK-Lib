/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package RandomPrefabSpawningRuntime.

/// Struct /Script/RandomPrefabSpawningRuntime.FortRandomPrefabData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortRandomPrefabData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   Prefab                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FScalableFloat)                            bEnabled                                                    ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Class /Script/RandomPrefabSpawningRuntime.FortPrefabSpawner
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AFortPrefabSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FGameplayTagContainer)                     RequiredProperties                                          ___ OFFSET(get<T>, {0x298, 32, 0, 0})
	DMember(bool)                                      bWorldReadyCalled                                           ___ OFFSET(get<bool>, {0x2B8, 1, 0, 0})
};

/// Class /Script/RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UFortRandomPrefabSpawnHelper : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FFortRandomPrefabData>)             AllPrefabs                                                  ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FFortRandomPrefabData>)             PrefabPool                                                  ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FScalableFloat)                            bAcceptDuplicatesWhenOutOfUniquePrefabs                     ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
};

