
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UFortFallTeleportSpawnerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PlayerPawnReceiverClass                                     ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(UClass*)                                   ComponentToAddClass                                         ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FScalableFloat)                            TeleportEnabled                                             ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            RemoveComponentRequestTimeOffset                            ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
};

/// Class /Script/FallTeleportationRuntime.FortFallTeleportCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortFallTeleportCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FallTeleportationRuntime.FortFallTeleportComponentBase
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UFortFallTeleportComponentBase : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FScalableFloat)                            TeleportEnabled                                             ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ContinuousTeleportUpdateEnabled                             ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            ForceTeleportZHeight                                        ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            SphereTraceRadius                                           ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	DMember(float)                                     WalkingLocationUpdateRate                                   ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     ZHeightThresholdCheckRate                                   ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     TeleportZModifier                                           ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     DistanceFromPawnToTraceLocation                             ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	CMember(TArray<UClass*>)                           TeleportOnBlocklist                                         ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FName)                                     NoTeleportActorTag                                          ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FVector)                                   SafeManualLocation                                          ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(UClass*)                                   TeleportGEClass                                             ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FVector)                                   TeleportLocation                                            ___ OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   FallbackLocation                                            ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	DMember(bool)                                      bValidFallbackLocation                                      ___ OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	DMember(bool)                                      bTeleporting                                                ___ OFFSET(get<bool>, {0x1B9, 1, 0, 0})
	DMember(int32_t)                                   TeleportLimitBeforeFail                                     ___ OFFSET(get<int32_t>, {0x1BC, 4, 0, 0})
	DMember(int32_t)                                   TeleportCount                                               ___ OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    OwningPawn                                                  ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
};

