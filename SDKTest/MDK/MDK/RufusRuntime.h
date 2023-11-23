
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/RufusRuntime.FortPOIInjector
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AFortPOIInjector : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(UDataTable*)                               ChallengeMapPoiDataToAdd                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	DMember(bool)                                      bStartPOIsDiscovered                                        OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bNullifyPOIQuestReferences                                  OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	DMember(bool)                                      bWaitForCanRecordPlayerVisits                               OFFSET(get<bool>, {0x2BA, 1, 0, 0})
	CMember(UMaterialInterface*)                       StencilMaterialToUse                                        OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/RufusRuntime.FortPOIInjector.HandleControllerComponentAttached
	// void HandleControllerComponentAttached(AFortPlayerController* FortPlayerController, UFortControllerComponent* ControllerComponent); // [0xa2125d8] Final|Native|Protected 
	// Function /Script/RufusRuntime.FortPOIInjector.HandleActorSpawned
	// void HandleActorSpawned(AActor* SpawnedActor);                                                                           // [0xa212558] Final|Native|Protected 
	// Function /Script/RufusRuntime.FortPOIInjector.FortPlayerControllerEndingPlay
	// void FortPlayerControllerEndingPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                           // [0xa212494] Final|Native|Protected 
};

/// Class /Script/RufusRuntime.RufusWeeklyMapUpdater
/// Size: 0x0078 (0x000290 - 0x000308)
class ARufusWeeklyMapUpdater : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TArray<FRufusWeeklyMapUpdaterInfo>)        WeeklyMapTextureInfo                                        OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(UMaterialInterface*)                       StencilMaterial                                             OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/RufusRuntime.RufusWeeklyMapUpdater.SetActiveWeekByIndex
	// void SetActiveWeekByIndex(int32_t InWeekIndex);                                                                          // [0x2a30588] Final|Native|Public|BlueprintCallable 
	// Function /Script/RufusRuntime.RufusWeeklyMapUpdater.OverrideDiscoverabilityTexture
	// void OverrideDiscoverabilityTexture(UMaterialInstanceDynamic* InStencilMID);                                             // [0xa21269c] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/RufusRuntime.RufusWeeklyMapUpdaterInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FRufusWeeklyMapUpdaterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               MapTexture                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               MapOpacityTexture                                           OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               MapDiscoveryTexture                                         OFFSET(get<T>, {0x40, 32, 0, 0})
};

