
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/EmeraldGlass_DRuntime.EmeraldGlassIceWallChunk
/// Size: 0x0018 (0x000BB8 - 0x000BD0)
class AEmeraldGlassIceWallChunk : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	CMember(TWeakObjectPtr<AEmeraldGlassIceWallChunk*>) ParentChunk                                                ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    IceWallActorClassDenyList                                   ___ OFFSET(get<T>, {0xBC0, 16, 0, 0})
};

/// Class /Script/EmeraldGlass_DRuntime.FortControllerComponent_SereneYard
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortControllerComponent_SereneYard : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<TWeakObjectPtr>)                    TrackedInstances                                            ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/EmeraldGlass_DRuntime.SereneYardFunctionLibraryNative
/// Size: 0x0000 (0x000028 - 0x000028)
class USereneYardFunctionLibraryNative : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/EmeraldGlass_DRuntime.SereneYardWeaponData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FSereneYardWeaponData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawnAthena*>)    Player                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortWeaponRangedDual*>)    Weapon                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bPreviewing                                                 ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     PreviewDistance                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MinDistance                                                 ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinDistFromIndestructible                                   ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bEnableBlockedByIndestructibles                             ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     PlayerForwardVectorScale                                    ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     InitialTracePullbackDist                                    ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceNear                                   ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceNearUp                                 ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceFar                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bStopped                                                    ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	CMember(TArray<UClass*>)                           ClassesToIgnoreWhenTracing                                  ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UClass*>)                           ClassesToIgnoreWhenTracingIfTooSmall                        ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     DebugDrawTime                                               ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(TArray<FTransform>)                        IceRelativeTransforms                                       ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     IceRelativeRightVectorScale                                 ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     GroundFindStartOffset                                       ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     GroundFindEndOffset                                         ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     GroundFindDistanceOffset                                    ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     MaxSpawnDistBelowPlayer                                     ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             PreviewMeshesTEMP                                           ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(UMaterialInterface*)                       IceMaterial                                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UMaterialInterface*)                       IceMaterialBlocked                                          ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(float)                                     IceBlockPitch                                               ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     BlockingIndestructibleObjectDist                            ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MaxVerticalChunkSpacing                                     ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MinSupportingPropSize                                       ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightDistStep                                   ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   TooCloseForHeightMaxIterations                              ___ OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMinHeightAbovePlayer                       ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMaxHeightAbovePlayer                       ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMinDistFromPlayer                          ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     SphereTraceRadius                                           ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bAllowUnwalkableTargets                                     ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(float)                                     TryCloserOnInvalidTargetDist                                ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
};

/// Enum /Script/EmeraldGlass_DRuntime.ESereneYardTargetingFailedReason
/// Size: 0x11
enum ESereneYardTargetingFailedReason : uint8_t
{
	ESereneYardTargetingFailedReason__None0                                          = 0,
	ESereneYardTargetingFailedReason__TooHigh1                                       = 1,
	ESereneYardTargetingFailedReason__TooClose2                                      = 2,
	ESereneYardTargetingFailedReason__Obstructed3                                    = 3,
	ESereneYardTargetingFailedReason__TargetNotWalkable4                             = 4,
	ESereneYardTargetingFailedReason__TargetBlocksSpawn5                             = 5,
	ESereneYardTargetingFailedReason__TooCloseForHeight6                             = 6,
	ESereneYardTargetingFailedReason__InvalidIndestructible7                         = 7,
	ESereneYardTargetingFailedReason__NoValidTargetsFound8                           = 8,
	ESereneYardTargetingFailedReason__Unknown9                                       = 9,
	ESereneYardTargetingFailedReason__ESereneYardTargetingFailedReason_MAX10         = 10
};

/// Enum /Script/EmeraldGlass_DRuntime.ESereneYardChunkLocation
/// Size: 0x06
enum ESereneYardChunkLocation : uint8_t
{
	ESereneYardChunkLocation__Left0                                                  = 0,
	ESereneYardChunkLocation__CenterLeft1                                            = 1,
	ESereneYardChunkLocation__Center2                                                = 2,
	ESereneYardChunkLocation__CenterRight3                                           = 3,
	ESereneYardChunkLocation__Right4                                                 = 4,
	ESereneYardChunkLocation__ESereneYardChunkLocation_MAX5                          = 5
};

