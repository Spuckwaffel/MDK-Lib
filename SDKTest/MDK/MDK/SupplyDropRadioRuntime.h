
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio
/// Size: 0x01E0 (0x000978 - 0x000B58)
class ABuildingGameplayActorSupplyDropRadio : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	DMember(float)                                     MinimumMovingSpeedThresholdSq                               OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     BalloonClosedGroundedFallSpeed                              OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(bool)                                      bAutoOpen                                                   OFFSET(get<bool>, {0x980, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ForceOpenActorTags                                          OFFSET(getStruct<T>, {0x988, 32, 0, 0})
	SMember(FGameplayTagQuery)                         IgnoreMovingCollisionWithActorTagQuery                      OFFSET(getStruct<T>, {0x9A8, 72, 0, 0})
	DMember(float)                                     InterpRateToBalloonOpenedFallSpeed                          OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     DistanceFromOriginalSpawnLocForBalloonOpen                  OFFSET(get<float>, {0x9F4, 4, 0, 0})
	CMember(ESupplyDropRadioBalloonState)              BalloonState                                                OFFSET(get<T>, {0x9F8, 1, 0, 0})
	SMember(FHitResult)                                WaterHitResult                                              OFFSET(getStruct<T>, {0xA00, 224, 0, 0})
	DMember(bool)                                      bMoving                                                     OFFSET(get<bool>, {0xAE0, 1, 0, 0})
	DMember(float)                                     FallSpeed                                                   OFFSET(get<float>, {0xAE4, 4, 0, 0})
	DMember(float)                                     BalloonOpenedFallSpeed                                      OFFSET(get<float>, {0xAE8, 4, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0xAEC, 4, 0, 0})
	SMember(FVector)                                   ServerLocation                                              OFFSET(getStruct<T>, {0xAF0, 24, 0, 0})
	DMember(float)                                     ClientLocationCorrectionMaxDistSqWhenBalloonDisabled        OFFSET(get<float>, {0xB08, 4, 0, 0})
	DMember(float)                                     ClientLocationCorrectionMaxDistSqWhenBalloonEnabled         OFFSET(get<float>, {0xB0C, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xB10, 24, 0, 0})
	SMember(FVector)                                   PreviousFrameVelocity                                       OFFSET(getStruct<T>, {0xB28, 24, 0, 0})
	SMember(FVector)                                   OriginalServerSpawnLocation                                 OFFSET(getStruct<T>, {0xB40, 24, 0, 0})


	/// Functions
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.UpdateGroundInfo
	// void UpdateGroundInfo(bool bValidBlock, FHitResult& MovementHitResult);                                                  // [0x1d9241c] BlueprintAuthorityOnly|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetGravityMultiplier
	// void SetGravityMultiplier(float InGravityMultiplier);                                                                    // [0x5a9f240] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.SetBalloonState
	// void SetBalloonState(ESupplyDropRadioBalloonState InBalloonState);                                                       // [0x7597a2c] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OpenSupplyDrop
	// void OpenSupplyDrop();                                                                                                   // [0x1d9241c] BlueprintAuthorityOnly|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_DistanceFromOriginalSpawnLocForBalloonOpen
	// void OnRep_DistanceFromOriginalSpawnLocForBalloonOpen();                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.OnRep_BalloonState
	// void OnRep_BalloonState();                                                                                               // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsMoving
	// bool IsMoving();                                                                                                         // [0x9c030ac] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.IsGrounded
	// bool IsGrounded();                                                                                                       // [0x1d9241c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.HandleMoveIgnoredActorEndPlay
	// void HandleMoveIgnoredActorEndPlay(AActor* EndPlayActor, TEnumAsByte<EEndPlayReason> Reason);                            // [0x9c02fe8] Final|Native|Protected 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetRootCollisionComponent
	// UBoxComponent* GetRootCollisionComponent();                                                                              // [0x1d9241c] Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetHighestAttachParent
	// AActor* GetHighestAttachParent(AActor* InActor);                                                                         // [0x9c02f54] Final|Native|Protected|BlueprintCallable|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetGravityZ
	// float GetGravityZ();                                                                                                     // [0x9c02f2c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SupplyDropRadioRuntime.BuildingGameplayActorSupplyDropRadio.GetBalloonState
	// ESupplyDropRadioBalloonState GetBalloonState();                                                                          // [0x9c02f14] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioAttachActorComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortSupplyDropRadioAttachActorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/SupplyDropRadioRuntime.FortSupplyDropRadioBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortSupplyDropRadioBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/SupplyDropRadioRuntime.ESupplyDropRadioBalloonState
/// Size: 0x05
enum ESupplyDropRadioBalloonState : uint8_t
{
	ESupplyDropRadioBalloonState__Invalid0                                           = 0,
	ESupplyDropRadioBalloonState__Closed1                                            = 1,
	ESupplyDropRadioBalloonState__Opened2                                            = 2,
	ESupplyDropRadioBalloonState__Destroyed3                                         = 3,
	ESupplyDropRadioBalloonState__ESupplyDropRadioBalloonState_MAX4                  = 4
};

