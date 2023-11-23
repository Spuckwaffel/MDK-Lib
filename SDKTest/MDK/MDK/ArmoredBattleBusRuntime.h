
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
/// Size: 0x00C0 (0x0015F0 - 0x0016B0)
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5808;

public:
	SMember(FRotator)                                  PreviousVehicleRotator                                      OFFSET(getStruct<T>, {0x15E8, 24, 0, 0})
	DMember(float)                                     SmoothedVehicleYawRate                                      OFFSET(get<float>, {0x1600, 4, 0, 0})
	DMember(int32_t)                                   PawnSeat                                                    OFFSET(get<int32_t>, {0x1604, 4, 0, 0})
	DMember(bool)                                      bIsFrontTurretPassenger                                     OFFSET(get<bool>, {0x1608, 1, 0, 0})
	DMember(bool)                                      bIsRearTurretPassenger                                      OFFSET(get<bool>, {0x1609, 1, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x160C, 4, 0, 0})
	DMember(float)                                     YawDelta                                                    OFFSET(get<float>, {0x1610, 4, 0, 0})
	DMember(float)                                     TurretYaw                                                   OFFSET(get<float>, {0x1614, 4, 0, 0})
	DMember(float)                                     TurretPitch                                                 OFFSET(get<float>, {0x1618, 4, 0, 0})
	SMember(FRotator)                                  TurretYawRotator                                            OFFSET(getStruct<T>, {0x1620, 24, 0, 0})
	DMember(float)                                     SlopeRollDegreeAngle                                        OFFSET(get<float>, {0x1638, 4, 0, 0})
	DMember(float)                                     SlopePitchDegreeAngle                                       OFFSET(get<float>, {0x163C, 4, 0, 0})
	SMember(FVector)                                   HandAttachL                                                 OFFSET(getStruct<T>, {0x1640, 24, 0, 0})
	SMember(FVector)                                   HandAttachR                                                 OFFSET(getStruct<T>, {0x1658, 24, 0, 0})
	CMember(TEnumAsByte<ERelativeTransformSpace>)      TransformSpace                                              OFFSET(get<T>, {0x1670, 1, 0, 0})
	DMember(float)                                     UpdateYawDeltaSmoothedLerpRate                              OFFSET(get<float>, {0x1674, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerFront                                        OFFSET(get<int32_t>, {0x1678, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerRear                                         OFFSET(get<int32_t>, {0x167C, 4, 0, 0})
	SMember(FName)                                     FrontFootBoneName                                           OFFSET(getStruct<T>, {0x1680, 4, 0, 0})
	SMember(FName)                                     RearFootBoneName                                            OFFSET(getStruct<T>, {0x1684, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontLeft                             OFFSET(getStruct<T>, {0x1688, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearLeft                              OFFSET(getStruct<T>, {0x168C, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontRight                            OFFSET(getStruct<T>, {0x1690, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearRight                             OFFSET(getStruct<T>, {0x1694, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Front                                     OFFSET(getStruct<T>, {0x1698, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Rear                                      OFFSET(getStruct<T>, {0x169C, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMin                                           OFFSET(get<float>, {0x16A0, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMax                                           OFFSET(get<float>, {0x16A4, 4, 0, 0})
	DMember(float)                                     LocalPlayerTurretPitchEaseRate                              OFFSET(get<float>, {0x16A8, 4, 0, 0})


	/// Functions
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed
	// void UpdateYawDeltaSmoothed(AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator& NewRotation, float& SmoothedYawValue); // [0x9e232d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate
	// void UpdateSmoothedVehicleYawRate(AFortAthenaVehicle* VehicleActor);                                                     // [0x9e22d64] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues
	// void UpdateHandPositionsSlopeValues(USkeletalMeshComponent* BusMeshComponent);                                           // [0x9e22ce4] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation
	// FVector UnrotateHandAttachLocation(FVector& HandLocation, FVector& FootLocation, FRotator& FootRotation);                // [0x9e22b20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform
	// FTransform GetPassengerTransform(USkeletalMeshComponent* BusMeshComponent);                                              // [0x9e22848] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation
	// FVector GetHandAttachLocation(USkeletalMeshComponent* BusMeshComponent, FName FrontHandAttachBoneName, FName RearHandAttachBoneName); // [0x9e22738] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform
	// FTransform GetFootAttachTransform(USkeletalMeshComponent* BusMeshComponent);                                             // [0x9e2265c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain
	// void GenerateCharacterPitchAndYawForSlopedTerrain(AFortAthenaVehicle* VehicleActor, float& TurretYaw, float& TurretPitch, FRotator& PawnYawRotator); // [0x9e224f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
/// Size: 0x0090 (0x000600 - 0x000690)
class UFortArmoredBattleBusVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	DMember(float)                                     FrontTurretAimPitch                                         OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     RearTurretAimPitch                                          OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(float)                                     FrontYawDeltaSmoothed                                       OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     RearYawDeltaSmoothed                                        OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     SmoothedVehicleYawRate                                      OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     FrontYawDeltaSmoothedAlpha                                  OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(float)                                     RearYawDeltaSmoothedAlpha                                   OFFSET(get<float>, {0x610, 4, 0, 0})
	SMember(FRotator)                                  FrontWeaponYaw                                              OFFSET(getStruct<T>, {0x618, 24, 0, 0})
	SMember(FRotator)                                  RearWeaponYaw                                               OFFSET(getStruct<T>, {0x630, 24, 0, 0})
	SMember(FRotator)                                  PreviousVehicleRotator                                      OFFSET(getStruct<T>, {0x648, 24, 0, 0})
	DMember(bool)                                      bHasFrontTurretPassenger                                    OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bHasRearTurretPassenger                                     OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(float)                                     NetworkEaseRate                                             OFFSET(get<float>, {0x664, 4, 0, 0})
	DMember(float)                                     UpdateYawDeltaSmoothedLerpRate                              OFFSET(get<float>, {0x668, 4, 0, 0})
	DMember(int32_t)                                   FrontPassengerSeatIndex                                     OFFSET(get<int32_t>, {0x66C, 4, 0, 0})
	DMember(int32_t)                                   RearPassengerSeatIndex                                      OFFSET(get<int32_t>, {0x670, 4, 0, 0})
	DMember(float)                                     FrontPassengerYawOffset                                     OFFSET(get<float>, {0x674, 4, 0, 0})
	DMember(float)                                     RearPassengerYawOffset                                      OFFSET(get<float>, {0x678, 4, 0, 0})
	SMember(FName)                                     FrontPassengerBoneName                                      OFFSET(getStruct<T>, {0x67C, 4, 0, 0})
	SMember(FName)                                     RearPassengerBoneName                                       OFFSET(getStruct<T>, {0x680, 4, 0, 0})


	/// Functions
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateYawDeltaSmoothed
	// float UpdateYawDeltaSmoothed(AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator NewRotation, float SmoothedYawValue); // [0x9e23434] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw
	// void UpdateTurretAimPitchWeaponYaw(AFortAthenaVehicle* OwnerVehicle, AFortPlayerPawn* GunnerActor, FName SocketName, float YawOffset, float& TurretAimPitch, float& YawDeltaSmoothed, FRotator& WeaponYaw); // [0x9e2309c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate
	// float UpdateSmoothedVehicleYawRate(AFortAthenaVehicle* VehicleActor, FRotator PreviousRotator);                          // [0x9e22e6c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw
	// void GetPitchAndYaw(AFortAthenaVehicle* VehicleActor, AFortPlayerPawn* GunnerActor, float& AdjustedPitch, float& AdjustedYaw, bool& bIsLocalPlayerControlled, FRotator& YawRotator); // [0x9e22924] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

