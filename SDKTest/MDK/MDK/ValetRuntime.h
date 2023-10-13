
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: IrisCore
/// dependency: ModularGameplay

/// Class /Script/ValetRuntime.FortValetMountedGunAnimInstance
/// Size: 0x0020 (0x000540 - 0x000560)
class UFortValetMountedGunAnimInstance : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(AFortDagwoodVehicle*)                      VehicleActor                                                OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(bool)                                      bIsUsingMountedGun                                          OFFSET(get<bool>, {0x540, 1, 0, 0})
	DMember(int32_t)                                   SeatIndexCached                                             OFFSET(get<int32_t>, {0x544, 4, 0, 0})
	DMember(float)                                     AimingYaw                                                   OFFSET(get<float>, {0x548, 4, 0, 0})
	DMember(float)                                     AimingPitch                                                 OFFSET(get<float>, {0x54C, 4, 0, 0})
	CMember(AFortWeaponRangedForVehicle*)              MountedWeapon                                               OFFSET(get<T>, {0x550, 8, 0, 0})
};

/// Class /Script/ValetRuntime.FortValetPassengerAnimInstance
/// Size: 0x0060 (0x000810 - 0x000870)
class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FCachedAnimRelevancyData)                  IntoVehicleCachedData                                       OFFSET(getStruct<T>, {0x810, 20, 0, 0})
	SMember(FCachedAnimRelevancyData)                  OutOfVehicleCachedData                                      OFFSET(getStruct<T>, {0x824, 20, 0, 0})
	CMember(TWeakObjectPtr<AFortDagwoodVehicle*>)      DagwoodVehicleInstance                                      OFFSET(get<T>, {0x838, 32, 0, 0})
	DMember(float)                                     TurnYaw                                                     OFFSET(get<float>, {0x858, 4, 0, 0})
	DMember(float)                                     InTime                                                      OFFSET(get<float>, {0x85C, 4, 0, 0})
	DMember(float)                                     OutTime                                                     OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(float)                                     NegativeTurnYaw                                             OFFSET(get<float>, {0x864, 4, 0, 0})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(bool)                                      bIsTargeting                                                OFFSET(get<bool>, {0x869, 1, 0, 0})
	DMember(bool)                                      bIsFiring                                                   OFFSET(get<bool>, {0x86A, 1, 0, 0})
	DMember(bool)                                      bIsUsingConsumable                                          OFFSET(get<bool>, {0x86B, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 OFFSET(get<bool>, {0x86C, 1, 0, 0})
	DMember(bool)                                      bIsPassengerBackLeft                                        OFFSET(get<bool>, {0x86D, 1, 0, 0})
	DMember(bool)                                      bIsThrowConsumable                                          OFFSET(get<bool>, {0x86E, 1, 0, 0})
	DMember(bool)                                      bIsTargetingOrThrowingConsumable                            OFFSET(get<bool>, {0x86F, 1, 0, 0})
};

/// Class /Script/ValetRuntime.FortValetSedanAnimInstance
/// Size: 0x0010 (0x000600 - 0x000610)
class UFortValetSedanAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	DMember(bool)                                      bHasTireMod                                                 OFFSET(get<bool>, {0x5FC, 1, 0, 0})
	DMember(float)                                     TrunkDamageAlpha                                            OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     MirrorLeftDamageAlpha                                       OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     MirrorRightDamageAlpha                                      OFFSET(get<float>, {0x608, 4, 0, 0})
};

/// Class /Script/ValetRuntime.DagwoodNetworkPhysicsComponent
/// Size: 0x0DB0 (0x0000A0 - 0x000E50)
class UDagwoodNetworkPhysicsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3664;

public:
	SMember(FNetworkPhysicsState)                      NetworkPhysicsState                                         OFFSET(getStruct<T>, {0xA0, 144, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGeneratedLocalInputCmd                                    OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FDagwoodManagedState)                      ReplicatedManagedState                                      OFFSET(getStruct<T>, {0x140, 1112, 0, 0})
	SMember(FDagwoodManagedState)                      InManagedState                                              OFFSET(getStruct<T>, {0x598, 1112, 0, 0})
	SMember(FDagwoodManagedState)                      OutManagedState                                             OFFSET(getStruct<T>, {0x9F0, 1112, 0, 0})


	/// Functions
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT
	// void SetState_GT(FDagwoodInPersistent& In);                                                                              // [0x99b42c0] Final|Native|Public|HasOutParms 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd
	// void SetPendingInputCmd(FFortDagwoodCmd& In);                                                                            // [0x99b3eac] Final|Native|Public|HasOutParms 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature
	// void OnGeneratedLocalInputCmd__DelegateSignature();                                                                      // [0x1d9241c] MulticastDelegate|Public|Delegate 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT
	// FDagwoodState_PT GetState_PT();                                                                                          // [0x99b3450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT
	// FDagwoodInPersistent GetState_GT();                                                                                      // [0x99b33e4] Final|Native|Public|Const 
	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd
	// FFortDagwoodCmd GetPendingInputCmd();                                                                                    // [0x99b33b0] Final|Native|Public|Const 
};

/// Class /Script/ValetRuntime.NetworkPhysicsManager
/// Size: 0x60E8 (0x000030 - 0x006118)
class UNetworkPhysicsManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 24856;

public:
};

/// Class /Script/ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
/// Size: 0x0050 (0x000338 - 0x000388)
class AFortAthenaMutator_OverrideValetVehicleParameters : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FScalableFloat)                            MinInitialVehicleFuelPercent                                OFFSET(getStruct<T>, {0x338, 40, 0, 0})
	SMember(FScalableFloat)                            MaxInitialVehicleFuelPercent                                OFFSET(getStruct<T>, {0x360, 40, 0, 0})


	/// Functions
	// Function /Script/ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded
	// void OnPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContainerTags);                                 // [0x7bafb98] Final|Native|Public|HasOutParms 
};

/// Class /Script/ValetRuntime.FortCameraMode_Dagwood
/// Size: 0x0040 (0x001B70 - 0x001BB0)
class UFortCameraMode_Dagwood : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7088;

public:
	DMember(float)                                     HorizontalCameraSpaceOffsetWhileTurning                     OFFSET(get<float>, {0x1B68, 4, 0, 0})
	DMember(float)                                     SteeringAngleForMaxHorizontalOffset                         OFFSET(get<float>, {0x1B6C, 4, 0, 0})
	DMember(float)                                     InAirVerticalOffset                                         OFFSET(get<float>, {0x1B70, 4, 0, 0})
	DMember(float)                                     AirOffsetDampFactor                                         OFFSET(get<float>, {0x1B74, 4, 0, 0})
	DMember(float)                                     SpeedAlphaDampFactor                                        OFFSET(get<float>, {0x1B78, 4, 0, 0})
	DMember(float)                                     TimeInAirRequiredForVertOffset                              OFFSET(get<float>, {0x1B7C, 4, 0, 0})
	DMember(float)                                     VehicleBasePitch                                            OFFSET(get<float>, {0x1B80, 4, 0, 0})
	DMember(float)                                     HorizOffsetInterpSpeed                                      OFFSET(get<float>, {0x1B84, 4, 0, 0})
	DMember(float)                                     HorizOffsetInterpSpeedRecovery                              OFFSET(get<float>, {0x1B88, 4, 0, 0})
	DMember(float)                                     CurrentSpeedAlpha                                           OFFSET(get<float>, {0x1B8C, 4, 0, 0})
	DMember(float)                                     CurrentVerticalOffset                                       OFFSET(get<float>, {0x1B90, 4, 0, 0})
	DMember(float)                                     CurrentHorizontalOffset                                     OFFSET(get<float>, {0x1B94, 4, 0, 0})
	DMember(float)                                     TimeInAir                                                   OFFSET(get<float>, {0x1B98, 4, 0, 0})
	DMember(float)                                     PreviousSpeed                                               OFFSET(get<float>, {0x1B9C, 4, 0, 0})
	DMember(float)                                     AppliedPitch                                                OFFSET(get<float>, {0x1BA0, 4, 0, 0})
};

/// Class /Script/ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortContextualTutorial_VehicleValetLowFuel : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/ValetRuntime.FortDagwoodModsConfigs
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortDagwoodModsConfigs : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ValetRuntime.FortDagwoodVehicle
/// Size: 0x0650 (0x001BF0 - 0x002240)
class AFortDagwoodVehicle : public AFortAthenaSKMotorVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8768;

public:
	SMember(FMulticastInlineDelegate)                  OnStartHandbrakeDelegate                                    OFFSET(getStruct<T>, {0x1BF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStopHandbrakeDelegate                                     OFFSET(getStruct<T>, {0x1C00, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartHandBrakeCatchupForceDelegate                        OFFSET(getStruct<T>, {0x1C10, 16, 0, 0})
	CMember(UClass*)                                   HardLandingCameraShake                                      OFFSET(get<T>, {0x1C20, 8, 0, 0})
	CMember(UClass*)                                   DriverCamShakeClass                                         OFFSET(get<T>, {0x1C28, 8, 0, 0})
	CMember(UClass*)                                   HandBrakeCamShakeClass                                      OFFSET(get<T>, {0x1C30, 8, 0, 0})
	CMember(EVehicleClass)                             VehicleClass                                                OFFSET(get<T>, {0x1C38, 1, 0, 0})
	DMember(float)                                     FadeDelay                                                   OFFSET(get<float>, {0x1C3C, 4, 0, 0})
	DMember(float)                                     FadeDuration                                                OFFSET(get<float>, {0x1C40, 4, 0, 0})
	DMember(float)                                     MinBrakeForceForSkid                                        OFFSET(get<float>, {0x1C44, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedForSkid                                      OFFSET(get<float>, {0x1C48, 4, 0, 0})
	SMember(FGameplayTag)                              SpeedLinesCueTag                                            OFFSET(getStruct<T>, {0x1C4C, 4, 0, 0})
	DMember(float)                                     FadeStartTime                                               OFFSET(get<float>, {0x1C50, 4, 0, 0})
	CMember(UDagwoodNetworkPhysicsComponent*)          NetworkPhysicsComponent                                     OFFSET(get<T>, {0x1C58, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTireModHealthChanged                                      OFFSET(getStruct<T>, {0x1CD8, 16, 0, 0})
	DMember(float)                                     RechargeableBoostPercent                                    OFFSET(get<float>, {0x1CE8, 4, 0, 0})
	CMember(UFortSplatterSourceComponent*)             SplatterSourceComp                                          OFFSET(get<T>, {0x1CF0, 8, 0, 0})
	DMember(bool)                                      bEnableNativizedTick                                        OFFSET(get<bool>, {0x1CF8, 1, 0, 0})
	CMember(TArray<FName>)                             PassengerLeanSockets                                        OFFSET(get<T>, {0x1D00, 16, 0, 0})
	CMember(TArray<FVector>)                           PassngerLeanRelativeOffsets                                 OFFSET(get<T>, {0x1D10, 16, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClass                                    OFFSET(get<T>, {0x1D20, 8, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClass_ADS                                OFFSET(get<T>, {0x1D28, 8, 0, 0})
	CMember(TArray<FName>)                             WheelSocketNames                                            OFFSET(get<T>, {0x1D30, 16, 0, 0})
	CMember(UFortDagwoodVehicleConfigs*)               FortDagwoodVehicleConfigs                                   OFFSET(get<T>, {0x1D40, 8, 0, 0})
	CMember(TArray<int32_t>)                           RearShocks                                                  OFFSET(get<T>, {0x1D48, 16, 0, 0})
	SMember(FGameplayTagContainer)                     OffroadEnvironmentDamageTags                                OFFSET(getStruct<T>, {0x1D58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     FireDamageTags                                              OFFSET(getStruct<T>, {0x1D78, 32, 0, 0})
	SMember(FVector)                                   NativeWheelScaleRear                                        OFFSET(getStruct<T>, {0x1D98, 24, 0, 0})
	SMember(FVector)                                   NativeWheelScaleFront                                       OFFSET(getStruct<T>, {0x1DB0, 24, 0, 0})
	SMember(FVector)                                   NativeTireScaleRear                                         OFFSET(getStruct<T>, {0x1DC8, 24, 0, 0})
	SMember(FVector)                                   NativeTireScaleFront                                        OFFSET(getStruct<T>, {0x1DE0, 24, 0, 0})
	DMember(bool)                                      bTireSmokeActive                                            OFFSET(get<bool>, {0x1DF8, 1, 0, 0})
	DMember(bool)                                      bBoostFailed                                                OFFSET(get<bool>, {0x1DF9, 1, 0, 0})
	DMember(bool)                                      bCanBoostPitch                                              OFFSET(get<bool>, {0x1DFA, 1, 0, 0})
	DMember(uint64_t)                                  AccelForceFeedbackHandle                                    OFFSET(get<uint64_t>, {0x1E00, 8, 0, 0})
	DMember(uint64_t)                                  SkidForceFeedbackHandle                                     OFFSET(get<uint64_t>, {0x1E08, 8, 0, 0})
	DMember(uint64_t)                                  BrakeForceFeedbackHandle                                    OFFSET(get<uint64_t>, {0x1E10, 8, 0, 0})
	DMember(uint64_t)                                  HandBrakeForceFeedbackHandle                                OFFSET(get<uint64_t>, {0x1E18, 8, 0, 0})
	DMember(bool)                                      bSpeedLinesActive                                           OFFSET(get<bool>, {0x1E20, 1, 0, 0})
	SMember(FDagwoodRuntimeModifiers)                  DagwoodRuntimeModifiedProperties                            OFFSET(getStruct<T>, {0x1E40, 112, 0, 0})
	CMember(TArray<FAttachedWheel>)                    ServerRepWheelData                                          OFFSET(get<T>, {0x1EB0, 16, 0, 0})
	SMember(FVector)                                   FlipYawForwardTargetDirection                               OFFSET(getStruct<T>, {0x1F10, 24, 0, 0})
	SMember(FVector)                                   FlipYawOriginalForward                                      OFFSET(getStruct<T>, {0x1F28, 24, 0, 0})
	CMember(ETireLocations)                            LastPoppedTire                                              OFFSET(get<T>, {0x1F40, 1, 0, 0})
	DMember(float)                                     RoadTopSpeedMultiplier                                      OFFSET(get<float>, {0x1F44, 4, 0, 0})
	DMember(float)                                     CurrentBumpiness                                            OFFSET(get<float>, {0x1F48, 4, 0, 0})
	DMember(float)                                     CurrentForwardAcceleration                                  OFFSET(get<float>, {0x1F4C, 4, 0, 0})
	DMember(float)                                     PreviousTurnAlpha                                           OFFSET(get<float>, {0x1F50, 4, 0, 0})
	DMember(float)                                     CurrentCameraAssistStrength                                 OFFSET(get<float>, {0x1F54, 4, 0, 0})
	DMember(float)                                     LostGripTime                                                OFFSET(get<float>, {0x1F58, 4, 0, 0})
	DMember(float)                                     LostGripRightAlpha                                          OFFSET(get<float>, {0x1F5C, 4, 0, 0})
	DMember(float)                                     HandbrakeTime                                               OFFSET(get<float>, {0x1F60, 4, 0, 0})
	DMember(float)                                     HandbrakeStartTime                                          OFFSET(get<float>, {0x1F64, 4, 0, 0})
	DMember(float)                                     HandbrakeEndTime                                            OFFSET(get<float>, {0x1F68, 4, 0, 0})
	DMember(float)                                     FlipYawMult                                                 OFFSET(get<float>, {0x1F6C, 4, 0, 0})
	DMember(float)                                     FlipTimer                                                   OFFSET(get<float>, {0x1F70, 4, 0, 0})
	DMember(float)                                     FlipExplodeTimer                                            OFFSET(get<float>, {0x1F74, 4, 0, 0})
	DMember(float)                                     FlipPushForceTimer                                          OFFSET(get<float>, {0x1F78, 4, 0, 0})
	DMember(float)                                     FlipAirTimer                                                OFFSET(get<float>, {0x1F7C, 4, 0, 0})
	DMember(float)                                     FlipLanding                                                 OFFSET(get<float>, {0x1F80, 4, 0, 0})
	DMember(float)                                     FlipStartTime                                               OFFSET(get<float>, {0x1F84, 4, 0, 0})
	DMember(float)                                     LastFlipDamageTime                                          OFFSET(get<float>, {0x1F88, 4, 0, 0})
	DMember(float)                                     PreFlipControlLossTimer                                     OFFSET(get<float>, {0x1F8C, 4, 0, 0})
	DMember(bool)                                      bDidCinematicFlip                                           OFFSET(get<bool>, {0x1F90, 1, 0, 0})
	DMember(bool)                                      bCanCinematicFlip                                           OFFSET(get<bool>, {0x1F91, 1, 0, 0})
	DMember(bool)                                      bInPopTireVeer                                              OFFSET(get<bool>, {0x1F92, 1, 0, 0})
	DMember(bool)                                      bInFlipRecovery                                             OFFSET(get<bool>, {0x1F93, 1, 0, 0})
	DMember(bool)                                      bExplodeAfterFlip                                           OFFSET(get<bool>, {0x1F94, 1, 0, 0})
	DMember(bool)                                      bLostGrip                                                   OFFSET(get<bool>, {0x1F95, 1, 0, 0})
	DMember(bool)                                      bApplyHandbrakeCatchupForce                                 OFFSET(get<bool>, {0x1F96, 1, 0, 0})
	DMember(bool)                                      bDidHandbrakeCatchup                                        OFFSET(get<bool>, {0x1F97, 1, 0, 0})
	DMember(bool)                                      bInFlipRoll                                                 OFFSET(get<bool>, {0x1F98, 1, 0, 0})
	DMember(bool)                                      bInFlipYaw                                                  OFFSET(get<bool>, {0x1F99, 1, 0, 0})
	DMember(bool)                                      bInFlipPitch                                                OFFSET(get<bool>, {0x1F9A, 1, 0, 0})
	DMember(bool)                                      bFlipDidLeaveGround                                         OFFSET(get<bool>, {0x1F9B, 1, 0, 0})
	DMember(bool)                                      bBreakBuildingsIfBlockingLeaningPassenger                   OFFSET(get<bool>, {0x1F9C, 1, 0, 0})
	DMember(float)                                     LeanBreakTimeAccumulator                                    OFFSET(get<float>, {0x1FA0, 4, 0, 0})
	DMember(float)                                     LeanBreakCheckInterval                                      OFFSET(get<float>, {0x1FA4, 4, 0, 0})
	CMember(TArray<FName>)                             SeatToWindowShapeNames                                      OFFSET(get<T>, {0x1FA8, 16, 0, 0})
	CMember(ULegacyCameraShake*)                       OffroadCameraShakeInstance                                  OFFSET(get<T>, {0x1FB8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       DriverCameraShakeInstance                                   OFFSET(get<T>, {0x1FC0, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       AccelCameraShakeInstance                                    OFFSET(get<T>, {0x1FC8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       HandBrakeCameraShakeInstance                                OFFSET(get<T>, {0x1FD0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_RoadAndExhaust                                   OFFSET(get<T>, {0x1FD8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_TireSkid                                         OFFSET(get<T>, {0x1FE0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_Damage                                           OFFSET(get<T>, {0x1FE8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_SpeedLines                                       OFFSET(get<T>, {0x1FF0, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_TireExhaust                                       OFFSET(get<T>, {0x1FF8, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_SpeedLines                                        OFFSET(get<T>, {0x2000, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_TireSkid                                          OFFSET(get<T>, {0x2008, 8, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RoadAndExhaustSurfaceTypeArrayForFX                         OFFSET(get<T>, {0x2010, 16, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutColorIndexName                         OFFSET(getStruct<T>, {0x2020, 4, 0, 0})
	SMember(FName)                                     BrakeLightsName                                             OFFSET(getStruct<T>, {0x2024, 4, 0, 0})
	CMember(TArray<ETireStates>)                       FakeTireStates                                              OFFSET(get<T>, {0x2040, 16, 0, 0})
	CMember(EPoppedTireReactionStates)                 ActivePoppedTireReaction                                    OFFSET(get<T>, {0x2050, 1, 0, 0})
	CMember(EPoppedTireReactionStates)                 ReplicatedPoppedTireReaction                                OFFSET(get<T>, {0x2051, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortValetAudioController*>) ValetAudio                                                 OFFSET(get<T>, {0x2054, 8, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             TireMeshes                                                  OFFSET(get<T>, {0x2060, 16, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             FakeTireMeshes                                              OFFSET(get<T>, {0x2070, 16, 0, 0})
	DMember(bool)                                      bIsInoperable                                               OFFSET(get<bool>, {0x2084, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x2088, 4, 0, 0})
	SMember(FRandomStream)                             RandStream                                                  OFFSET(getStruct<T>, {0x208C, 8, 0, 0})
	DMember(bool)                                      bHasTraction                                                OFFSET(get<bool>, {0x2094, 1, 0, 0})
	DMember(bool)                                      bStartHandBrakeCatchupForce                                 OFFSET(get<bool>, {0x2095, 1, 0, 0})
	DMember(bool)                                      bSelfDestructEnabled                                        OFFSET(get<bool>, {0x21A0, 1, 1, 0})
	DMember(bool)                                      bClientUsesSelfDestructTimer                                OFFSET(get<bool>, {0x21A0, 1, 1, 1})
	CMember(UStaticMesh*)                              TireBootMesh                                                OFFSET(get<T>, {0x21A8, 8, 0, 0})
	CMember(TMap<int32_t, FDagwoodActionDefForUI>)     MapSelfDestructActionDefForUI                               OFFSET(get<T>, {0x21B0, 80, 0, 0})
	DMember(float)                                     MinimumTimeBetweenSelfDestructPromptChanges                 OFFSET(get<float>, {0x2200, 4, 0, 0})


	/// Functions
	// Function /Script/ValetRuntime.FortDagwoodVehicle.StartFade
	// void StartFade();                                                                                                        // [0x99b4488] Final|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetValetAudioController
	// void SetValetAudioController(AFortValetAudioController* ValetAudio);                                                     // [0x99b4388] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeSpringsInfoOnServer
	// void SetRuntimeSpringsInfoOnServer(FRuntimeSpringsInfo& SpringsInfo);                                                    // [0x99b4224] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeGravityOnServer
	// void SetRuntimeGravityOnServer(float GravMult);                                                                          // [0x99b4194] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeFuelInfoOnServer
	// void SetRuntimeFuelInfoOnServer(FRuntimeFuelInfo& FuelInfo);                                                             // [0x99b40e4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeDriveInfoOnServer
	// void SetRuntimeDriveInfoOnServer(float MaxIncline, float MaxTilt);                                                       // [0x99b4008] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetRuntimeBoostInfoOnServer
	// void SetRuntimeBoostInfoOnServer(FRuntimeBoostInfo& BoostInfo);                                                          // [0x99b3f54] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SetDamageInfoOnServer
	// void SetDamageInfoOnServer(bool bInDamageFriendlyVehicles, bool bInDamageOtherVehicles, bool bInDamageOwnVehicle, bool bInDamageAllowedFromOtherVehicle); // [0x99b3d44] Final|BlueprintAuthorityOnly|Native|Protected|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSetFadeDuration
	// void ServerSetFadeDuration(float NewFadeDuration);                                                                       // [0x5a9f240] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated
	// void ServerSelfDestructActivated();                                                                                      // [0x87f22d0] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup
	// void SelfDestructCleanup();                                                                                              // [0x99b3d30] Final|Native|Public  
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnTickAudioFade
	// void OnTickAudioFade(float FadeParam);                                                                                   // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnTickAudioController
	// void OnTickAudioController(float DeltaTime);                                                                             // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnStopHandbrake
	// void OnStopHandbrake();                                                                                                  // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnStartHandbrake
	// void OnStartHandbrake();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnServerAltInteract
	// void OnServerAltInteract(AFortPawn* Pawn);                                                                               // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_ServerRepWheelData
	// void OnRep_ServerRepWheelData(TArray<FAttachedWheel>& PrevWheelData);                                                    // [0x1909b14] Final|Native|Private|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed
	// void OnRep_RandSeed();                                                                                                   // [0x2dfdd20] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction
	// void OnRep_PoppedTireReaction();                                                                                         // [0x99b3a2c] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable
	// void OnRep_IsInoperable();                                                                                               // [0x99b3a18] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires
	// void OnRep_FakeTires(TArray<ETireStates>& PrevTireStates);                                                               // [0x2d82fa0] Final|Native|Private|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers
	// void OnRep_DagwoodRuntimeModifiers(FDagwoodRuntimeModifiers& PrevMods);                                                  // [0x24818e8] Final|Native|Private|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnInoperableChanged
	// void OnInoperableChanged(bool bInoperable);                                                                              // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped
	// void OnHoldSelfDestructStopped(AFortPawn* DriverPawn);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted
	// void OnHoldSelfDestructStarted(AFortPawn* DriverPawn, float ExitDuration);                                               // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage
	// void OnFlipImpactDamage();                                                                                               // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision
	// void OnDestroyedPropFromCollision(ABuildingActor* BuildingHitActor);                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract
	// void OnClientBeginAltInteract(AFortPawn* Pawn);                                                                          // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity
	// float NativeCalculateAccelRumbleIntensity(float MaxIntensity);                                                           // [0x99b398c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.MakeOperable
	// void MakeOperable(bool bAddGas);                                                                                         // [0x56ae764] Final|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.MakeInoperable
	// void MakeInoperable();                                                                                                   // [0x99b396c] Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsTireSkidding
	// bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking);            // [0x99b3828] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsOnLandscape
	// bool IsOnLandscape();                                                                                                    // [0x99b3810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled
	// bool IsNativeBPTickEnabled();                                                                                            // [0x2c6cedc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.HandleCurrentPlaylistLoaded
	// void HandleCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                        // [0x99b3618] Final|Native|Protected|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetTireSurface
	// ETireSurfaces GetTireSurface(ETireLocations TireIndex);                                                                  // [0x99b358c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent
	// float GetTireHealthPercent(ETireLocations TireIndex);                                                                    // [0x99b34f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust
	// float GetMiddleAxleForwardAdjust();                                                                                      // [0x2953164] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties
	// FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties();                                                           // [0x99b3394] Final|Native|Protected|BlueprintCallable 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.GetBumpiness
	// float GetBumpiness();                                                                                                    // [0x99b337c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed
	// bool ForwardOrReverseInputPressed();                                                                                     // [0x99b3358] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX
	// void CleanupLoopingPooledFX();                                                                                           // [0x88bdc94] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.ApplyRuntimeModifiers
	// void ApplyRuntimeModifiers();                                                                                            // [0x99b3244] Final|Native|Private 
	// Function /Script/ValetRuntime.FortDagwoodVehicle.AddRuntimeGearsInfoOnServer
	// void AddRuntimeGearsInfoOnServer(FRuntimeGearInfo& GearInfo);                                                            // [0x99b31b0] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleAnimInstance
/// Size: 0x0060 (0x000600 - 0x000660)
class UFortDagwoodVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	CMember(AFortDagwoodVehicle*)                      Dagwood                                                     OFFSET(get<T>, {0x5F8, 8, 0, 0})
	SMember(FVector)                                   GlassScale_FR                                               OFFSET(getStruct<T>, {0x600, 24, 0, 0})
	SMember(FVector)                                   GlassScale_FL                                               OFFSET(getStruct<T>, {0x618, 24, 0, 0})
	SMember(FVector)                                   GlassScale_BR                                               OFFSET(getStruct<T>, {0x630, 24, 0, 0})
	SMember(FVector)                                   GlassScale_BL                                               OFFSET(getStruct<T>, {0x648, 24, 0, 0})
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleConfigs
/// Size: 0x0240 (0x0008B0 - 0x000AF0)
class UFortDagwoodVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	DMember(float)                                     BoostMinPushForce                                           OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedForceMultiplier                                OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(float)                                     BoostWaterMultiplier                                        OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     VehiclePowerSlideFrontMultiplier                            OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     VehiclePowerSlideRearMultiplier                             OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     IceVehiclePowerSlideFrontMultiplier                         OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     IceVehiclePowerSlideRearMultiplier                          OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     MudVehiclePowerSlideFrontMultiplier                         OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     MudVehiclePowerSlideRearMultiplier                          OFFSET(get<float>, {0x8D4, 4, 0, 0})
	DMember(bool)                                      bUseAccelerationLean                                        OFFSET(get<bool>, {0x8D8, 1, 0, 0})
	DMember(float)                                     HandbrakeGripAngle                                          OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(float)                                     HandbrakeGripAngleRecovery                                  OFFSET(get<float>, {0x8E0, 4, 0, 0})
	DMember(float)                                     HandbrakeSpeedForGripLoss                                   OFFSET(get<float>, {0x8E4, 4, 0, 0})
	DMember(float)                                     MinSlipDuration                                             OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     HandbrakeLateralFriction                                    OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     HandbrakeSteeringMultiplier                                 OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(float)                                     HandbrakeFrictionDampFactor                                 OFFSET(get<float>, {0x8F4, 4, 0, 0})
	DMember(float)                                     RestoreTractionDampFactor                                   OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     HandBrakeForce                                              OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     HandbrakeForceNoAccel                                       OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(bool)                                      bUseHandbrakeToDrift                                        OFFSET(get<bool>, {0x904, 1, 0, 0})
	DMember(float)                                     DriftMinSpeedSteeringAngle                                  OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     DriftMaxSpeedSteeringAngle                                  OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     DriftFrontLateralFrictionMultiplier                         OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     DriftRearLateralFrictionMultiplier                          OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplier                                     OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     DirtRoadTopSpeedMultiplier                                  OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     DirtRoadFrontLateralFriction                                OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     DirtRoadRearLateralFriction                                 OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(float)                                     DirtRoadAccelForceMultiplier                                OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     OffRoadTopSpeedMultiplier                                   OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     OffRoadFrontLateralFriction                                 OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     OffRoadRearLateralFriction                                  OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     OffRoadPushForceMultiplier                                  OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     OffroadDamageImpactForceMin                                 OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     OffroadDamageImpactForceMax                                 OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     OffroadImpactDamageMin                                      OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     OffroadImpactDamageMax                                      OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     MinSpeedForOffroadHandling                                  OFFSET(get<float>, {0x94C, 4, 0, 0})
	DMember(float)                                     SnowFrontLateralFriction                                    OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     SnowRearLateralFriction                                     OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     IceFrontLateralFriction                                     OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     IceRearLateralFriction                                      OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     MudFrontLateralFriction                                     OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     MudRearLateralFriction                                      OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     IcePushForceMultiplier                                      OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     IceBrakeForceMultiplier                                     OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     FireHealthPercentThreshold                                  OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     OffroadRumbleIntensity                                      OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     DirtRoadRumbleIntensity                                     OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     OffroadDamageScaleExponent                                  OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     HardLandingThresholdMin                                     OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     HardLandingThresholdMax                                     OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     HardLandingShakeZAmplitudeMin                               OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     HardLandingShakeZAmplitudeMax                               OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     SpeedLinesThreshold                                         OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     PropDestructionImpulse                                      OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(float)                                     DestructionAngle                                            OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     UpNormalMinProtected                                        OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     UpForwardMinProtected                                       OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     NonCameraSteeringAngleMultiplier                            OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthMax                                     OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthMin                                     OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthRecovery                                OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     CameraAssistInterpSpeed                                     OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     ReverseChangeDirectionBrakeForceMultiplier                  OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     ReverseChangeDirectionSpeedThreshold                        OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     DriftExitPushForce                                          OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     DriftExitCatchupSpeed                                       OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     HandbrakeDurationRequiredForCatchup                         OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     ImpactMagnitudeToEndCatchup                                 OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringLength                                      OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringStiff                                       OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringDamp                                        OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     PoppedTireScrapeFrictionMultiplier                          OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     RimScrapeFlipRollMagnitude                                  OFFSET(get<float>, {0x9E0, 4, 0, 0})
	DMember(float)                                     RimScrapeFlipPitchMagnitude                                 OFFSET(get<float>, {0x9E4, 4, 0, 0})
	DMember(float)                                     SpeedForRimFlip                                             OFFSET(get<float>, {0x9E8, 4, 0, 0})
	DMember(float)                                     HealthPercentForFlip                                        OFFSET(get<float>, {0x9EC, 4, 0, 0})
	DMember(float)                                     FlipYawDuration                                             OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     FlipRollDuration                                            OFFSET(get<float>, {0x9F4, 4, 0, 0})
	DMember(float)                                     FlipPitchDuration                                           OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     FlipExplodeDuration_Yaw                                     OFFSET(get<float>, {0x9FC, 4, 0, 0})
	DMember(float)                                     FlipExplodeDuration_Pitch                                   OFFSET(get<float>, {0xA00, 4, 0, 0})
	DMember(float)                                     FlipPushForceDuration_Yaw                                   OFFSET(get<float>, {0xA04, 4, 0, 0})
	DMember(float)                                     FlipPushForceDuration_Pitch                                 OFFSET(get<float>, {0xA08, 4, 0, 0})
	DMember(float)                                     FlipPushForcMultiplier                                      OFFSET(get<float>, {0xA0C, 4, 0, 0})
	DMember(float)                                     FlipPushForce_UpComponentPitch                              OFFSET(get<float>, {0xA10, 4, 0, 0})
	DMember(float)                                     FlipPushForce_UpComponentRoll                               OFFSET(get<float>, {0xA14, 4, 0, 0})
	DMember(float)                                     MinTimeInAirRequiredForExplodeLanding                       OFFSET(get<float>, {0xA18, 4, 0, 0})
	DMember(float)                                     FlipYawSpringStiff                                          OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(float)                                     FlipYawSpringDamp                                           OFFSET(get<float>, {0xA20, 4, 0, 0})
	DMember(float)                                     FlipYawSpringMaxAccel                                       OFFSET(get<float>, {0xA24, 4, 0, 0})
	DMember(float)                                     HealthPercentForExplode                                     OFFSET(get<float>, {0xA28, 4, 0, 0})
	DMember(float)                                     FlipRecoveryTime                                            OFFSET(get<float>, {0xA2C, 4, 0, 0})
	DMember(float)                                     FlipMaxDuration                                             OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     FlipWiggleDuration                                          OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(float)                                     PoppedTireVeerDuration                                      OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(float)                                     PoppedTireVeerSteeringAngle                                 OFFSET(get<float>, {0xA3C, 4, 0, 0})
	DMember(float)                                     FlipWiggleFrequency                                         OFFSET(get<float>, {0xA40, 4, 0, 0})
	DMember(float)                                     FlipWiggleSteeringAngle                                     OFFSET(get<float>, {0xA44, 4, 0, 0})
	DMember(float)                                     FlipYawAngleThreshold                                       OFFSET(get<float>, {0xA48, 4, 0, 0})
	DMember(bool)                                      bUsesBoost                                                  OFFSET(get<bool>, {0xA4C, 1, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfUse                                  OFFSET(get<float>, {0xA50, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfRegen                                OFFSET(get<float>, {0xA54, 4, 0, 0})
	DMember(float)                                     BoostRateOfRegenMinMultiplier                               OFFSET(get<float>, {0xA58, 4, 0, 0})
	DMember(float)                                     BoostRateOfRegenMaxMultiplier                               OFFSET(get<float>, {0xA5C, 4, 0, 0})
	DMember(float)                                     BoostRegenMaxMultiplyTime                                   OFFSET(get<float>, {0xA60, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRequiredPercentToActivate                  OFFSET(get<float>, {0xA64, 4, 0, 0})
	DMember(float)                                     RechargeableBoostMaxPercent                                 OFFSET(get<float>, {0xA68, 4, 0, 0})
	DMember(float)                                     RechargeableBoostMinPercent                                 OFFSET(get<float>, {0xA6C, 4, 0, 0})
	DMember(float)                                     AnalogDriftStickThreshold                                   OFFSET(get<float>, {0xA70, 4, 0, 0})
	SMember(FName)                                     TireBootRightSocketName                                     OFFSET(getStruct<T>, {0xA74, 4, 0, 0})
	SMember(FName)                                     TireBootLeftSocketName                                      OFFSET(getStruct<T>, {0xA78, 4, 0, 0})
	DMember(float)                                     TireBootRelativeDistance                                    OFFSET(get<float>, {0xA7C, 4, 0, 0})
	DMember(float)                                     BoostForceInAir                                             OFFSET(get<float>, {0xA80, 4, 0, 0})
	DMember(float)                                     BoostAirMaxSpeed                                            OFFSET(get<float>, {0xA84, 4, 0, 0})
	CMember(TArray<FName>)                             TireSocketNames                                             OFFSET(get<T>, {0xA88, 16, 0, 0})
	CMember(TArray<FName>)                             TireBoneNames                                               OFFSET(get<T>, {0xA98, 16, 0, 0})
	CMember(TArray<int32_t>)                           RearTireIndices                                             OFFSET(get<T>, {0xAA8, 16, 0, 0})
	CMember(TArray<int32_t>)                           RightSideTires                                              OFFSET(get<T>, {0xAB8, 16, 0, 0})
	CMember(TArray<int32_t>)                           FakeTireIndices                                             OFFSET(get<T>, {0xAC8, 16, 0, 0})
	DMember(bool)                                      bNoWheels                                                   OFFSET(get<bool>, {0xAD8, 1, 0, 0})
	DMember(float)                                     NoWheelsSpringLenMult                                       OFFSET(get<float>, {0xADC, 4, 0, 0})
	CMember(TArray<FName>)                             NoWheelsBonesToHide                                         OFFSET(get<T>, {0xAE0, 16, 0, 0})
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleManager
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortDagwoodVehicleManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bHasUpdatedPropReplacement                                  OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(int32_t)                                   NumVehiclesSpawnedWithTireMod                               OFFSET(get<int32_t>, {0xA4, 4, 0, 0})


	/// Functions
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement
	// void UpdatePropReplacement();                                                                                            // [0x2cf4738] Final|Native|Public  
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated
	// void OnVehicleSpawnsUpdated(UFortVehicleItemDefinition* VehicleItemDef, TArray<AActor*>& SpawnedVehicles, int32_t NewVehicleCount); // [0x99b3b9c] Final|Native|Public|HasOutParms 
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned
	// void OnVehicleSpawned(AFortAthenaVehicle* Vehicle);                                                                      // [0x99b3b20] Final|Native|Public  
	// Function /Script/ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor
	// void CustomHandleActorStreamedInEditor(AActor* SourceActor);                                                             // [0x56bcb00] Final|Native|Public  
};

/// Class /Script/ValetRuntime.FortValetAudioController
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AFortValetAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnEngineLoadChanged                                         OFFSET(getStruct<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnShiftGearCompleted                                        OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnShiftGearDelegate                                         OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	DMember(float)                                     RPMResetTime_Native                                         OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     JitterAmount_Native                                         OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     ShiftTimeThreshold_Native                                   OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     TimeSinceShift_Native                                       OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     EngineRPMInterp_Native                                      OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     EngineRPMLinear_Native                                      OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     MinRPMRange_Native                                          OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     MaxRPMRange_Native                                          OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(bool)                                      bCurrentlyShifting_Native                                   OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(float)                                     CurrentAccelRateGearModifier_Native                         OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     CurrentAccelRate_Native                                     OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear_Native                                          OFFSET(get<int32_t>, {0x2EC, 4, 0, 0})
	DMember(int32_t)                                   MaxGear_Native                                              OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	DMember(float)                                     DefaultAccelRateScalar_Native                               OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(float)                                     GearAttackInterpSpeed_Native                                OFFSET(get<float>, {0x2F8, 4, 0, 0})
	DMember(float)                                     GearReleaseInterpSpeed_Native                               OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     AccelRateScalarFirstGear_Native                             OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     AccelRateScalarMinGear_Native                               OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     AccelRateScalarMaxGear_Native                               OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     ShiftToRPMStart_Native                                      OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(float)                                     ShiftToRPMEnd_Native                                        OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     ShiftFromRPMStart_Native                                    OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     ShiftFromRPMEnd_Native                                      OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     MaxRPMSawtoothDecrement_Native                              OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     MaxRPMSawtoothRepeatTime_Native                             OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     DownhillAccelScalar_Native                                  OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     UphillAccelScalar_Native                                    OFFSET(get<float>, {0x328, 4, 0, 0})
	CMember(UCurveFloat*)                              RPMFloatCurveMapping                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(float)                                     NormalizedSpeed_Native                                      OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     SuspValue_Native                                            OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(bool)                                      bIsHandbraking_Native                                       OFFSET(get<bool>, {0x340, 1, 0, 0})
	DMember(float)                                     MotoSynthVolume_Native                                      OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     MotoSynthInitialFadeInTime_Native                           OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     MotoSynthLogRPM_Native                                      OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(bool)                                      bHasFuel_Native                                             OFFSET(get<bool>, {0x354, 1, 0, 0})
	DMember(bool)                                      bIsInWater_Native                                           OFFSET(get<bool>, {0x355, 1, 0, 0})
	DMember(bool)                                      bLocalPlayerInVehicle_Native                                OFFSET(get<bool>, {0x356, 1, 0, 0})
	DMember(float)                                     TimeLocalPlayerEnteredVehicle_Native                        OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(bool)                                      bAttemptingDirectionChange_Native                           OFFSET(get<bool>, {0x35C, 1, 0, 0})
	DMember(bool)                                      bPreDestroy_Native                                          OFFSET(get<bool>, {0x35D, 1, 0, 0})
	DMember(bool)                                      bEngineLoad_Native                                          OFFSET(get<bool>, {0x35E, 1, 0, 0})
	DMember(float)                                     SkidAmount_Native                                           OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     TimeSinceAwoken_Native                                      OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(bool)                                      bDestroyed_Native                                           OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(float)                                     TimeSinceSurfaceChange_Native                               OFFSET(get<float>, {0x36C, 4, 0, 0})
	CMember(USoundBase*)                               OnInitialSuspensionSound                                    OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     AngleForSkidding_Native                                     OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     SpringCompressionMultiplier                                 OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(float)                                     MotoSynthMaxVolume_Native                                   OFFSET(get<float>, {0x380, 4, 0, 0})
	SMember(FVector2D)                                 MotoSynthTimeInVehicleTimeRange                             OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FVector2D)                                 MotoSynthTimeInVehicleVolumeRange                           OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortDagwoodVehicle*>)      ValetVehicle                                                OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               Engine_Native                                               OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostAudioComponent_Native                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(USynthComponentMoto*)                      SynthComponentMoto_Native                                   OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UFortCollisionAudioComponent*)             SuspensionCollisionComponent_Native                         OFFSET(get<T>, {0x3C8, 8, 0, 0})


	/// Functions
	// Function /Script/ValetRuntime.FortValetAudioController.Update_Native
	// void Update_Native();                                                                                                    // [0x99b44b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ValetRuntime.FortValetAudioController.OnTireModApplied
	// void OnTireModApplied(FTireInfo& AppliedTireMod);                                                                        // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native
	// void OnSuspensionCollision_Native(bool& OutResult, float& OutMagnitude);                                                 // [0x99b3a48] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ValetRuntime.FortValetAudioController.CacheValetVehicle
	// void CacheValetVehicle(AFortDagwoodVehicle* InVehicle);                                                                  // [0x99b3258] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ValetRuntime.FortValetGameFeatureData
/// Size: 0x0078 (0x000498 - 0x000510)
class UFortValetGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(TMap<TWeakObjectPtr, FVehiclePropReplacementData>) PropReplacements                                    OFFSET(get<T>, {0x498, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   VehicleSpawnerClass                                         OFFSET(get<T>, {0x4E8, 32, 0, 0})
	CMember(ESpawnActorCollisionHandlingMethod)        SpawnActorCollisionHandlingMethod                           OFFSET(get<T>, {0x508, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.FortDagwoodCmd
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortDagwoodCmd : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     ForwardAlpha                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RightAlpha                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AccelerationAlpha                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector_NetQuantize100)                    MovementDir                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bBoost                                                      OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bHandbrake                                                  OFFSET(get<bool>, {0x28, 1, 1, 1})
};

/// Struct /Script/ValetRuntime.DagwoodInPersistent
/// Size: 0x00C0 (0x000188 - 0x000248)
class FDagwoodInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	CMember(UFortDagwoodVehicleConfigs*)               FortDagwoodVehicleConfigs                                   OFFSET(get<T>, {0x188, 8, 0, 0})
	SMember(FDagwoodRuntimeModifiers)                  DagwoodRuntimeModifiedProperties                            OFFSET(getStruct<T>, {0x190, 112, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodRuntimeModifiers
/// Size: 0x0070 (0x000000 - 0x000070)
class FDagwoodRuntimeModifiers : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FRuntimeBoostInfo)                         BoostInfo                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FRuntimeFuelInfo)                          FuelInfo                                                    OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FRuntimeSpringsInfo)                       SpringsInfo                                                 OFFSET(getStruct<T>, {0x24, 32, 0, 0})
	DMember(bool)                                      bDamageFriendlyVehicles                                     OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bDamageOtherVehicles                                        OFFSET(get<bool>, {0x45, 1, 0, 0})
	DMember(bool)                                      bDamageOwnVehicle                                           OFFSET(get<bool>, {0x46, 1, 0, 0})
	DMember(bool)                                      bDamageAllowedFromOtherVehicle                              OFFSET(get<bool>, {0x47, 1, 0, 0})
	DMember(float)                                     GravityMultiplier                                           OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxInclineAngle                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     MaxTiltAngle                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(TArray<FRuntimeGearInfo>)                  GearInfos                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FGameplayTag)                              TireModTag                                                  OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(char)                                      TireModVersion                                              OFFSET(get<char>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bTireModAdjustsPosition                                     OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(char)                                      DataVersion                                                 OFFSET(get<char>, {0x6E, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.RuntimeGearInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FRuntimeGearInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   GearIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     TopSpeed                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PushForce                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.RuntimeFuelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FRuntimeFuelInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MaxFuel                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FuelPerSecondDriving                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FuelPerSecondBoosting                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.RuntimeBoostInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FRuntimeBoostInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bCanBoost                                                   OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bUsesRechargeableBoost                                      OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(float)                                     BoostPushForce                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedForceMultiplier                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfRegen                                OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfUse                                  OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodState_PT
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FDagwoodState_PT : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FDagwoodInternal)                          Internal                                                    OFFSET(getStruct<T>, {0x0, 312, 0, 0})
	SMember(FDagwoodOutPersistent)                     OutPersistent                                               OFFSET(getStruct<T>, {0x138, 48, 0, 0})
	SMember(FDagwoodOutContinuous)                     OutContinuous                                               OFFSET(getStruct<T>, {0x168, 72, 0, 0})
	DMember(bool)                                      bOutValid                                                   OFFSET(get<bool>, {0x1B0, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodOutContinuous
/// Size: 0x0010 (0x000038 - 0x000048)
class FDagwoodOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ValetRuntime.DagwoodOutPersistent
/// Size: 0x0008 (0x000028 - 0x000030)
class FDagwoodOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bHasTraction                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bStartHandBrakeCatchupForce                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodInternal
/// Size: 0x00B8 (0x000080 - 0x000138)
class FDagwoodInternal : public FFortVehicleInternalPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/ValetRuntime.DagwoodManagedState
/// Size: 0x0458 (0x000000 - 0x000458)
class FDagwoodManagedState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	DMember(int32_t)                                   Frame                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FFortDagwoodCmd)                           InputCmd                                                    OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FDagwoodInPersistent)                      GT_State                                                    OFFSET(getStruct<T>, {0x38, 584, 0, 0})
	SMember(FDagwoodState_PT)                          PT_State                                                    OFFSET(getStruct<T>, {0x280, 440, 0, 0})
	CMember(APlayerController*)                        PC                                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TArray<FDagwoodFutureClientInput>)         FutureInputs                                                OFFSET(get<T>, {0x448, 16, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodFutureClientInput
/// Size: 0x0038 (0x000000 - 0x000038)
class FDagwoodFutureClientInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Frame                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FFortDagwoodCmd)                           InputCmd                                                    OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsState
/// Size: 0x0090 (0x000000 - 0x000090)
class FNetworkPhysicsState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerState
/// Size: 0x0080 (0x000000 - 0x000080)
class FNetworkPhysicsStateNetSerializerState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	DMember(int32_t)                                   NetworkHandle                                               OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   Frame                                                       OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(char)                                      ObjectState                                                 OFFSET(get<char>, {0x78, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugData
/// Size: 0x0060 (0x000000 - 0x000060)
class FNetworkPhysicsStateNetSerializerDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Force                                                       OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Torque                                                      OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   LinearImpulse                                               OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   AngularImpulse                                              OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugState
/// Size: 0x0120 (0x000000 - 0x000120)
class FNetworkPhysicsStateNetSerializerDebugState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FNetworkPhysicsStateNetSerializerDebugData) DebugData                                                  OFFSET(getStruct<T>, {0x0, 288, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FNetworkPhysicsStateNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ValetRuntime.VehicleAttachment
/// Size: 0x0010 (0x000000 - 0x000010)
class FVehicleAttachment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ModName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	CMember(USkeletalMesh*)                            SkeletalMesh                                                OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodActionDefForUI
/// Size: 0x0010 (0x000000 - 0x000010)
class FDagwoodActionDefForUI : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FActionDefForUI>)                   ActionDefForUI                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ValetRuntime.TireSimulationRuntimeData
/// Size: 0x0020 (0x000000 - 0x000020)
class FTireSimulationRuntimeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRuntimeTerrainHandlingInfo)               HandlingInfo                                                OFFSET(getStruct<T>, {0x0, 20, 0, 0})
	DMember(float)                                     PoppedTireSpringLength                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringStiff                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringDamp                                        OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.ValetUpdateContext
/// Size: 0x0018 (0x000000 - 0x000018)
class FValetUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ValetRuntime.VehiclePropReplacementData
/// Size: 0x0050 (0x000000 - 0x000050)
class FVehiclePropReplacementData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UFortVehicleItemDefinition*>) FortVehicleItemDefinition                                 OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   TransOffset                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FRotator)                                  RotOffset                                                   OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Enum /Script/ValetRuntime.EFortDagwoodSimEvent
/// Size: 0x09
enum EFortDagwoodSimEvent : uint8_t
{
	EFortDagwoodSimEvent__EnterLandscape0                                            = 0,
	EFortDagwoodSimEvent__ExitLandscape1                                             = 1,
	EFortDagwoodSimEvent__EnterRoad2                                                 = 2,
	EFortDagwoodSimEvent__ExitRoad3                                                  = 3,
	EFortDagwoodSimEvent__Explode4                                                   = 4,
	EFortDagwoodSimEvent__FlipImpact5                                                = 5,
	EFortDagwoodSimEvent__StartBoost6                                                = 6,
	EFortDagwoodSimEvent__FinishBoost7                                               = 7,
	EFortDagwoodSimEvent__EFortDagwoodSimEvent_MAX8                                  = 8
};

/// Enum /Script/ValetRuntime.EControlsPrototypes
/// Size: 0x05
enum EControlsPrototypes : uint8_t
{
	EControlsPrototypes__CameraSteering0                                             = 0,
	EControlsPrototypes__NonCameraSteering1                                          = 1,
	EControlsPrototypes__HybridCameraSteering2                                       = 2,
	EControlsPrototypes__MaxCount3                                                   = 3,
	EControlsPrototypes__EControlsPrototypes_MAX4                                    = 4
};

/// Enum /Script/ValetRuntime.EPoppedTireReactionStates
/// Size: 0x08
enum EPoppedTireReactionStates : uint8_t
{
	EPoppedTireReactionStates__None0                                                 = 0,
	EPoppedTireReactionStates__VeerLeft1                                             = 1,
	EPoppedTireReactionStates__VeerRight2                                            = 2,
	EPoppedTireReactionStates__Wiggle3                                               = 3,
	EPoppedTireReactionStates__Yaw904                                                = 4,
	EPoppedTireReactionStates__FlipPitch5                                            = 5,
	EPoppedTireReactionStates__FlipRoll6                                             = 6,
	EPoppedTireReactionStates__EPoppedTireReactionStates_MAX7                        = 7
};

/// Enum /Script/ValetRuntime.ETireLocations
/// Size: 0x05
enum ETireLocations : uint8_t
{
	ETireLocations__FrontRight0                                                      = 0,
	ETireLocations__FrontLeft1                                                       = 1,
	ETireLocations__BackRight2                                                       = 2,
	ETireLocations__BackLeft3                                                        = 3,
	ETireLocations__ETireLocations_MAX4                                              = 4
};

/// Enum /Script/ValetRuntime.EVehicleClass
/// Size: 0x05
enum EVehicleClass : uint8_t
{
	EVehicleClass__Sedan0                                                            = 0,
	EVehicleClass__Sport1                                                            = 1,
	EVehicleClass__PickupTruck2                                                      = 2,
	EVehicleClass__SemiTruck3                                                        = 3,
	EVehicleClass__EVehicleClass_MAX4                                                = 4
};

