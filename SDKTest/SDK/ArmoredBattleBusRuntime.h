/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ArmoredBattleBusRuntime.

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
/// Size: 0x00C0 (0x0015D0 - 0x001690)
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5776;

public:
	SMember(FRotator)                                  PreviousVehicleRotator                                      ___ OFFSET(get<T>, {0x15C8, 24, 0, 0})
	DMember(float)                                     SmoothedVehicleYawRate                                      ___ OFFSET(get<float>, {0x15E0, 4, 0, 0})
	DMember(int32_t)                                   PawnSeat                                                    ___ OFFSET(get<int32_t>, {0x15E4, 4, 0, 0})
	DMember(bool)                                      bIsFrontTurretPassenger                                     ___ OFFSET(get<bool>, {0x15E8, 1, 0, 0})
	DMember(bool)                                      bIsRearTurretPassenger                                      ___ OFFSET(get<bool>, {0x15E9, 1, 0, 0})
	DMember(float)                                     Speed                                                       ___ OFFSET(get<float>, {0x15EC, 4, 0, 0})
	DMember(float)                                     YawDelta                                                    ___ OFFSET(get<float>, {0x15F0, 4, 0, 0})
	DMember(float)                                     TurretYaw                                                   ___ OFFSET(get<float>, {0x15F4, 4, 0, 0})
	DMember(float)                                     TurretPitch                                                 ___ OFFSET(get<float>, {0x15F8, 4, 0, 0})
	SMember(FRotator)                                  TurretYawRotator                                            ___ OFFSET(get<T>, {0x1600, 24, 0, 0})
	DMember(float)                                     SlopeRollDegreeAngle                                        ___ OFFSET(get<float>, {0x1618, 4, 0, 0})
	DMember(float)                                     SlopePitchDegreeAngle                                       ___ OFFSET(get<float>, {0x161C, 4, 0, 0})
	SMember(FVector)                                   HandAttachL                                                 ___ OFFSET(get<T>, {0x1620, 24, 0, 0})
	SMember(FVector)                                   HandAttachR                                                 ___ OFFSET(get<T>, {0x1638, 24, 0, 0})
	CMember(TEnumAsByte<ERelativeTransformSpace>)      TransformSpace                                              ___ OFFSET(get<T>, {0x1650, 1, 0, 0})
	DMember(float)                                     UpdateYawDeltaSmoothedLerpRate                              ___ OFFSET(get<float>, {0x1654, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerFront                                        ___ OFFSET(get<int32_t>, {0x1658, 4, 0, 0})
	DMember(int32_t)                                   TurretPassengerRear                                         ___ OFFSET(get<int32_t>, {0x165C, 4, 0, 0})
	SMember(FName)                                     FrontFootBoneName                                           ___ OFFSET(get<T>, {0x1660, 4, 0, 0})
	SMember(FName)                                     RearFootBoneName                                            ___ OFFSET(get<T>, {0x1664, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontLeft                             ___ OFFSET(get<T>, {0x1668, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearLeft                              ___ OFFSET(get<T>, {0x166C, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_FrontRight                            ___ OFFSET(get<T>, {0x1670, 4, 0, 0})
	SMember(FName)                                     GunHandAttachBoneName_RearRight                             ___ OFFSET(get<T>, {0x1674, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Front                                     ___ OFFSET(get<T>, {0x1678, 4, 0, 0})
	SMember(FName)                                     PassengerBoneName_Rear                                      ___ OFFSET(get<T>, {0x167C, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMin                                           ___ OFFSET(get<float>, {0x1680, 4, 0, 0})
	DMember(float)                                     TurretPitchDegMax                                           ___ OFFSET(get<float>, {0x1684, 4, 0, 0})
	DMember(float)                                     LocalPlayerTurretPitchEaseRate                              ___ OFFSET(get<float>, {0x1688, 4, 0, 0})
};

/// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusVehicleAnimInstance
/// Size: 0x0090 (0x000600 - 0x000690)
class UFortArmoredBattleBusVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	DMember(float)                                     FrontTurretAimPitch                                         ___ OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(float)                                     RearTurretAimPitch                                          ___ OFFSET(get<float>, {0x5FC, 4, 0, 0})
	DMember(float)                                     FrontYawDeltaSmoothed                                       ___ OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     RearYawDeltaSmoothed                                        ___ OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     SmoothedVehicleYawRate                                      ___ OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     FrontYawDeltaSmoothedAlpha                                  ___ OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(float)                                     RearYawDeltaSmoothedAlpha                                   ___ OFFSET(get<float>, {0x610, 4, 0, 0})
	SMember(FRotator)                                  FrontWeaponYaw                                              ___ OFFSET(get<T>, {0x618, 24, 0, 0})
	SMember(FRotator)                                  RearWeaponYaw                                               ___ OFFSET(get<T>, {0x630, 24, 0, 0})
	SMember(FRotator)                                  PreviousVehicleRotator                                      ___ OFFSET(get<T>, {0x648, 24, 0, 0})
	DMember(bool)                                      bHasFrontTurretPassenger                                    ___ OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bHasRearTurretPassenger                                     ___ OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(float)                                     NetworkEaseRate                                             ___ OFFSET(get<float>, {0x664, 4, 0, 0})
	DMember(float)                                     UpdateYawDeltaSmoothedLerpRate                              ___ OFFSET(get<float>, {0x668, 4, 0, 0})
	DMember(int32_t)                                   FrontPassengerSeatIndex                                     ___ OFFSET(get<int32_t>, {0x66C, 4, 0, 0})
	DMember(int32_t)                                   RearPassengerSeatIndex                                      ___ OFFSET(get<int32_t>, {0x670, 4, 0, 0})
	DMember(float)                                     FrontPassengerYawOffset                                     ___ OFFSET(get<float>, {0x674, 4, 0, 0})
	DMember(float)                                     RearPassengerYawOffset                                      ___ OFFSET(get<float>, {0x678, 4, 0, 0})
	SMember(FName)                                     FrontPassengerBoneName                                      ___ OFFSET(get<T>, {0x67C, 4, 0, 0})
	SMember(FName)                                     RearPassengerBoneName                                       ___ OFFSET(get<T>, {0x680, 4, 0, 0})
};

