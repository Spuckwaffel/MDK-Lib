
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidmatchRiftPoiCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor
/// Size: 0x00D8 (0x000290 - 0x000368)
class AMidMatchRiftPoiManagerActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	DMember(bool)                                      bCanBeMarked                                                OFFSET(get<bool>, {0x298, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               OFFSET(get<bool>, {0x298, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(get<T>, {0x2A0, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(get<T>, {0x348, 24, 0, 0})
	DMember(bool)                                      bDynamicLandBrushApplied                                    OFFSET(get<bool>, {0x360, 1, 0, 0})
};



	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor.SetDynamicLandBrush
	// void SetDynamicLandBrush(FSlateBrush& LandIcon);                                                                         // [0x2969674] Final|BlueprintCosmetic|Native|Protected|HasOutParms|BlueprintCallable 
/// Class /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator
/// Size: 0x00D8 (0x000290 - 0x000368)
class AMidmatchRiftPoiSpawnIndicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	DMember(bool)                                      bCanBeMarked                                                OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	DMember(bool)                                      bBlockMarking                                               OFFSET(get<bool>, {0x2A0, 1, 1, 1})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               OFFSET(get<T>, {0x2A8, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        OFFSET(get<T>, {0x350, 24, 0, 0})
};



	/// Functions
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.TeleportVehicleActor
	// void TeleportVehicleActor(AActor* VehicleActor, FVector& TeleportLocation);                                              // [0x847c6a8] Final|BlueprintAuthorityOnly|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.IsActorInDataLayerInstance
	// bool IsActorInDataLayerInstance(AActor* Actor, UDataLayerInstance* DataLayerInstance);                                   // [0x8bf901c] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable|BlueprintPure|Const 
