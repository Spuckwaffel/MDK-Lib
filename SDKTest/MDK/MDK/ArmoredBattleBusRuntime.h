
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
/// Size: 0x00C0 (0x0015D0 - 0x001690)
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5776;

public:
	SMember(FRotator)                                  PreviousVehicleRotator                                      OFFSET(getStruct<T>, {0x15C8, 24, 0, 0})
	DMember(float)                                     SmoothedVehicleYawRate                                      OFFSET(get<float>, {0x15E0, 4, 0, 0})
	DMember(int32_t)                                   PawnSeat                                                    OFFSET(get<int32_t>, {0x15E4, 4, 0, 0})
	DMember(bool)                                      bIsFrontTurretPassenger                                     OFFSET(get<bool>, {0x15E8, 1, 0, 0})
	DMember(bool)                                      bIsRearTurretPassenger                                      OFFSET(get<bool>, {0x15E9, 1, 0, 0})
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x15EC, 4, 0, 0})
	DMember(float)                                     YawDelta                                                    OFFSET(get<float>, {0x15F0, 4, 0, 0})
	DMember(float)                                     TurretYaw                                                   OFFSET(get<float>, {0x15F4, 4, 0, 0})
	DMember(float)                                     TurretPitch                                                 OFFSET(get<float>, {0x15F8, 4, 0, 0})
	SMember(FRotator)                                  TurretYawRotator                                            OFFSET(getStruct<T>, {0x1600, 24, 0, 0})
	DMember(float)                                     SlopeRollDegreeAngle                                        OFFSET(get<float>, {0x1618, 4, 0, 0})
	DMember(float)                                     SlopePitchDegreeAngle                                       OFFSET(get<float>, {0x161C, 4, 0, 0})
	SMember(FVector)                                   HandAttachL                                                 OFFSET(getStruct<T>, {0x1620, 24, 0, 0})
	SMember(FVector)                                   HandAttachR                                                 OFFSET(getStruct<T>, {0x1638, 24, 0, 0})
	CMember(TEnumAsByte<ERelativeTransformSpace>)      TransformSpace                                              OFFSET(get<T>, {0x1650, 1, 0, 0})
	DMember(float)                                     UpdateYawDeltaSmoothedLerpRate                              OFFSET(get<float>, {0x1654, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerFront                                        OFFSET(get<int32_t>, {0x1658, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerRear                                         OFFSET(get<int32_t>, {0x165C, 4, 0, 0})
	SMember(FName)                                     FrontFootBoneName                                           OFFSET(getStruct<T>, {0x1660, 4, 0, 0})
	SMember(FName)                                     RearFootBoneName                                            OFFSET(getStruct<T>, {0x1664, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontLeft                             OFFSET(getStruct<T>, {0x1668, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearLeft                              OFFSET(getStruct<T>, {0x166C, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontRight                            OFFSET(getStruct<T>, {0x1670, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearRight                             OFFSET(getStruct<T>, {0x1674, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Front                                     OFFSET(getStruct<T>, {0x1678, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Rear                                      OFFSET(getStruct<T>, {0x167C, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMin                                           OFFSET(get<float>, {0x1680, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMax                                           OFFSET(get<float>, {0x1684, 4, 0, 0})
	DMember(float)                                     LocalPlayerTurretPitchEaseRate                              OFFSET(get<float>, {0x1688, 4, 0, 0})


	/// Functions
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed
	// void UpdateYawDeltaSmoothed(AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator& NewRotation, float& SmoothedYawValue); // [0x981f838] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate
	// void UpdateSmoothedVehicleYawRate(AFortAthenaVehicle* VehicleActor);                                                     // [0x981f2a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues
	// void UpdateHandPositionsSlopeValues(USkeletalMeshComponent* BusMeshComponent);                                           // [0x981f228] Final|Native|Public|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation
	// FVector UnrotateHandAttachLocation(FVector& HandLocation, FVector& FootLocation, FRotator& FootRotation);                // [0x981f01c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform
	// FTransform GetPassengerTransform(USkeletalMeshComponent* BusMeshComponent);                                              // [0x981ed44] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation
	// FVector GetHandAttachLocation(USkeletalMeshComponent* BusMeshComponent, FName FrontHandAttachBoneName, FName RearHandAttachBoneName); // [0x981ec34] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform
	// FTransform GetFootAttachTransform(USkeletalMeshComponent* BusMeshComponent);                                             // [0x981eb58] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain
	// void GenerateCharacterPitchAndYawForSlopedTerrain(AFortAthenaVehicle* VehicleActor, float& TurretYaw, float& TurretPitch, FRotator& PawnYawRotator); // [0x981e9ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
	// float UpdateYawDeltaSmoothed(AFortAthenaVehicle* VehicleActor, FName SocketName, FRotator NewRotation, float SmoothedYawValue); // [0x981f998] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateTurretAimPitchWeaponYaw
	// void UpdateTurretAimPitchWeaponYaw(AFortAthenaVehicle* OwnerVehicle, AFortPlayerPawn* GunnerActor, FName SocketName, float YawOffset, float& TurretAimPitch, float& YawDeltaSmoothed, FRotator& WeaponYaw); // [0x981f600] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.UpdateSmoothedVehicleYawRate
	// float UpdateSmoothedVehicleYawRate(AFortAthenaVehicle* VehicleActor, FRotator PreviousRotator);                          // [0x981f3b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance.GetPitchAndYaw
	// void GetPitchAndYaw(AFortAthenaVehicle* VehicleActor, AFortPlayerPawn* GunnerActor, float& AdjustedPitch, float& AdjustedYaw, bool& bIsLocalPlayerControlled, FRotator& YawRotator); // [0x981ee20] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

