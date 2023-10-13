
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/EmeraldGlass_DRuntime.SereneYardAnimInstanceProxy
/// Size: 0x0030 (0x0015E0 - 0x001610)
class USereneYardAnimInstanceProxy : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5648;

public:
	DMember(bool)                                      bIsUpperBody                                                OFFSET(get<bool>, {0x15D8, 1, 0, 0})
	DMember(bool)                                      bGrindRail                                                  OFFSET(get<bool>, {0x15D9, 1, 0, 0})
	DMember(bool)                                      bIsIceFireToSprint                                          OFFSET(get<bool>, {0x15DA, 1, 0, 0})
	DMember(bool)                                      bIsIceFireToIdle                                            OFFSET(get<bool>, {0x15DB, 1, 0, 0})
	DMember(bool)                                      bIsIceFireFallStart                                         OFFSET(get<bool>, {0x15DC, 1, 0, 0})
	DMember(bool)                                      bIsIceFireFallEnd                                           OFFSET(get<bool>, {0x15DD, 1, 0, 0})
	DMember(bool)                                      bIsIceFireFullBodyGround                                    OFFSET(get<bool>, {0x15DE, 1, 0, 0})
	DMember(bool)                                      bIsIceFire                                                  OFFSET(get<bool>, {0x15DF, 1, 0, 0})
	DMember(bool)                                      bIsIceFireUpperBody                                         OFFSET(get<bool>, {0x15E0, 1, 0, 0})
	DMember(bool)                                      bIsFromIceFireEndStates                                     OFFSET(get<bool>, {0x15E1, 1, 0, 0})
	DMember(bool)                                      bIsTrFromFireEndIdle                                        OFFSET(get<bool>, {0x15E2, 1, 0, 0})
	DMember(bool)                                      bIsTrFromFireEndLoco                                        OFFSET(get<bool>, {0x15E3, 1, 0, 0})
	DMember(bool)                                      bIsFireExitUnexpectedly                                     OFFSET(get<bool>, {0x15E4, 1, 0, 0})
	DMember(bool)                                      bIsFireEndExitUnexpectedly                                  OFFSET(get<bool>, {0x15E5, 1, 0, 0})
	SMember(FRotator)                                  UpperBodyTwistRotator                                       OFFSET(getStruct<T>, {0x15E8, 24, 0, 0})
	DMember(float)                                     TurnEndThreshold                                            OFFSET(get<float>, {0x1600, 4, 0, 0})
	DMember(float)                                     TurnEndLocoThreshold                                        OFFSET(get<float>, {0x1604, 4, 0, 0})
	DMember(float)                                     PawnVelocityZThreshold                                      OFFSET(get<float>, {0x1608, 4, 0, 0})
	DMember(float)                                     InterruptibleThreshold                                      OFFSET(get<float>, {0x160C, 4, 0, 0})
};

/// Class /Script/EmeraldGlass_DRuntime.EmeraldGlassIceWallChunk
/// Size: 0x0018 (0x000BB8 - 0x000BD0)
class AEmeraldGlassIceWallChunk : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	CMember(TWeakObjectPtr<AEmeraldGlassIceWallChunk*>) ParentChunk                                                OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    IceWallActorClassDenyList                                   OFFSET(get<T>, {0xBC0, 16, 0, 0})


	/// Functions
	// Function /Script/EmeraldGlass_DRuntime.EmeraldGlassIceWallChunk.IsIceWallAllowedToOverlapActor
	// bool IsIceWallAllowedToOverlapActor(AActor* Actor);                                                                      // [0x2a89328] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EmeraldGlass_DRuntime.EmeraldGlassIceWallChunk.FindSupportingActors
	// void FindSupportingActors(TArray<AActor*>& InOutSupportingActors, bool bAllowIceWallsAsSupportingActors, TArray<AEmeraldGlassIceWallChunk*>& ChunksInMyWall); // [0x9cf5964] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EmeraldGlass_DRuntime.EmeraldGlassIceWallChunk.AttachActors
	// void AttachActors(TArray<AEmeraldGlassIceWallChunk*>& ChunksInMyWall, TArray<AActor*>& SupportingActors, AActor* DirectBase); // [0x9cf5138] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/EmeraldGlass_DRuntime.FortControllerComponent_SereneYard
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortControllerComponent_SereneYard : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<TWeakObjectPtr>)                    TrackedInstances                                            OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/EmeraldGlass_DRuntime.FortControllerComponent_SereneYard.RemoveOldestTrackedInstance
	// void RemoveOldestTrackedInstance();                                                                                      // [0x9cf7e94] Final|Native|Public|BlueprintCallable 
	// Function /Script/EmeraldGlass_DRuntime.FortControllerComponent_SereneYard.GetTrackedInstanceCount
	// int32_t GetTrackedInstanceCount();                                                                                       // [0x570a7d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EmeraldGlass_DRuntime.FortControllerComponent_SereneYard.GetOldestTrackedInstance
	// ABuildingGameplayActor* GetOldestTrackedInstance();                                                                      // [0x9cf68d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EmeraldGlass_DRuntime.FortControllerComponent_SereneYard.AddTrackedInstance
	// void AddTrackedInstance(ABuildingGameplayActor* TrackedInstance);                                                        // [0x9cf5008] Final|Native|Public|BlueprintCallable 
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
class FSereneYardWeaponData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawnAthena*>)    Player                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortWeaponRangedDual*>)    Weapon                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bPreviewing                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     PreviewDistance                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MinDistance                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinDistFromIndestructible                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bEnableBlockedByIndestructibles                             OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     PlayerForwardVectorScale                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     InitialTracePullbackDist                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceNear                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceNearUp                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DownwardTraceDistanceFar                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bStopped                                                    OFFSET(get<bool>, {0x3C, 1, 0, 0})
	CMember(TArray<UClass*>)                           ClassesToIgnoreWhenTracing                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UClass*>)                           ClassesToIgnoreWhenTracingIfTooSmall                        OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     DebugDrawTime                                               OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(TArray<FTransform>)                        IceRelativeTransforms                                       OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     IceRelativeRightVectorScale                                 OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     GroundFindStartOffset                                       OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     GroundFindEndOffset                                         OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     GroundFindDistanceOffset                                    OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     MaxSpawnDistBelowPlayer                                     OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             PreviewMeshesTEMP                                           OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(UMaterialInterface*)                       IceMaterial                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UMaterialInterface*)                       IceMaterialBlocked                                          OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(float)                                     IceBlockPitch                                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     BlockingIndestructibleObjectDist                            OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MaxVerticalChunkSpacing                                     OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MinSupportingPropSize                                       OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightDistStep                                   OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   TooCloseForHeightMaxIterations                              OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMinHeightAbovePlayer                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMaxHeightAbovePlayer                       OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     TooCloseForHeightMinDistFromPlayer                          OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     SphereTraceRadius                                           OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(bool)                                      bAllowUnwalkableTargets                                     OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(float)                                     TryCloserOnInvalidTargetDist                                OFFSET(get<float>, {0xDC, 4, 0, 0})
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

