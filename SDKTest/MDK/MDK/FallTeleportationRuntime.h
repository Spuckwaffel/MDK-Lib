
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
	CMember(TWeakObjectPtr<UClass*>)                   PlayerPawnReceiverClass                                     OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(UClass*)                                   ComponentToAddClass                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FScalableFloat)                            TeleportEnabled                                             OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            RemoveComponentRequestTimeOffset                            OFFSET(get<T>, {0xF0, 40, 0, 0})


	/// Functions
	// Function /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleWarmupCountdownEndTimeUpdated
	// void HandleWarmupCountdownEndTimeUpdated(float NewEndTime);                                                              // [0x9b9645c] Final|Native|Protected 
	// Function /Script/FallTeleportationRuntime.FortFallTeleportSpawnerComponent.HandleGamePhaseChanged
	// void HandleGamePhaseChanged(FFortGamePhaseUpdatedEvent& Event);                                                          // [0x9b963d0] Final|Native|Protected|HasOutParms 
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
	SMember(FScalableFloat)                            TeleportEnabled                                             OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ContinuousTeleportUpdateEnabled                             OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            ForceTeleportZHeight                                        OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            SphereTraceRadius                                           OFFSET(get<T>, {0x118, 40, 0, 0})
	DMember(float)                                     WalkingLocationUpdateRate                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     ZHeightThresholdCheckRate                                   OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     TeleportZModifier                                           OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     DistanceFromPawnToTraceLocation                             OFFSET(get<float>, {0x14C, 4, 0, 0})
	CMember(TArray<UClass*>)                           TeleportOnBlocklist                                         OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FName)                                     NoTeleportActorTag                                          OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FVector)                                   SafeManualLocation                                          OFFSET(get<T>, {0x168, 24, 0, 0})
	CMember(UClass*)                                   TeleportGEClass                                             OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FVector)                                   TeleportLocation                                            OFFSET(get<T>, {0x188, 24, 0, 0})
	SMember(FVector)                                   FallbackLocation                                            OFFSET(get<T>, {0x1A0, 24, 0, 0})
	DMember(bool)                                      bValidFallbackLocation                                      OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	DMember(bool)                                      bTeleporting                                                OFFSET(get<bool>, {0x1B9, 1, 0, 0})
	DMember(int32_t)                                   TeleportLimitBeforeFail                                     OFFSET(get<int32_t>, {0x1BC, 4, 0, 0})
	DMember(int32_t)                                   TeleportCount                                               OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    OwningPawn                                                  OFFSET(get<T>, {0x1C8, 8, 0, 0})


	/// Functions
	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.UpdateLastGroundLocation
	// void UpdateLastGroundLocation(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x9b966e0] Final|Native|Protected 
	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.IsValidActorToTeleportOn
	// bool IsValidActorToTeleportOn(AActor* ActorToTeleportOn);                                                                // [0x9b965d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FallTeleportationRuntime.FortFallTeleportComponentBase.IsTeleportLocationValid
	// bool IsTeleportLocationValid(FVector& LocationToTest);                                                                   // [0x9b964d8] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

