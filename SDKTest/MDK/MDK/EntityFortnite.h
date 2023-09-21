
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore

/// Class /Script/EntityFortnite.EntityFortniteInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEntityFortniteInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EntityFortnite.EntityFortnitePlayerComponent
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UEntityFortnitePlayerComponent : public UEntityActorPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/EntityFortnite.EntityFortniteStormControllerComponent
/// Size: 0x0010 (0x000058 - 0x000068)
class UEntityFortniteStormControllerComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UClass*)                                   StormSpawnerClass                                           ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(AEntityFortniteStormSpawner*)              StormSpawner                                                ___ OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/EntityFortnite.EntityFortniteStormSpawner
/// Size: 0x0008 (0x000290 - 0x000298)
class AEntityFortniteStormSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(USceneComponent*)                          SceneComponent                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/EntityFortnite.EntityFortniteStormPhase
/// Size: 0x0050 (0x000000 - 0x000050)
class FEntityFortniteStormPhase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     WaitTime                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ShrinkTime                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndRadius                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndRadiusPercentage                                         ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   DamageIndex                                                 ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bMoves                                                      ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     MinMovementDistance                                         ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxMovementDistance                                         ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinMovementDistancePercentage                               ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxMovementDistancePercentage                               ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector4)                                  EndLocation                                                 ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

