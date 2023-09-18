/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ValetRuntime.

/// Struct /Script/ValetRuntime.FortDagwoodCmd
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortDagwoodCmd : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     ForwardAlpha                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RightAlpha                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AccelerationAlpha                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector_NetQuantize100)                    MovementDir                                                 ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bBoost                                                      ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bHandbrake                                                  ___ OFFSET(get<bool>, {0x28, 1, 1, 1})
};

/// Struct /Script/ValetRuntime.DagwoodInPersistent
/// Size: 0x00C0 (0x000188 - 0x000248)
class FDagwoodInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	CMember(UFortDagwoodVehicleConfigs*)               FortDagwoodVehicleConfigs                                   ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	SMember(FDagwoodRuntimeModifiers)                  DagwoodRuntimeModifiedProperties                            ___ OFFSET(get<T>, {0x190, 112, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodRuntimeModifiers
/// Size: 0x0070 (0x000000 - 0x000070)
class FDagwoodRuntimeModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FRuntimeBoostInfo)                         BoostInfo                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FRuntimeFuelInfo)                          FuelInfo                                                    ___ OFFSET(get<T>, {0x18, 12, 0, 0})
	SMember(FRuntimeSpringsInfo)                       SpringsInfo                                                 ___ OFFSET(get<T>, {0x24, 32, 0, 0})
	DMember(bool)                                      bDamageFriendlyVehicles                                     ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bDamageOtherVehicles                                        ___ OFFSET(get<bool>, {0x45, 1, 0, 0})
	DMember(bool)                                      bDamageOwnVehicle                                           ___ OFFSET(get<bool>, {0x46, 1, 0, 0})
	DMember(bool)                                      bDamageAllowedFromOtherVehicle                              ___ OFFSET(get<bool>, {0x47, 1, 0, 0})
	DMember(float)                                     GravityMultiplier                                           ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxInclineAngle                                             ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     MaxTiltAngle                                                ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(TArray<FRuntimeGearInfo>)                  GearInfos                                                   ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FGameplayTag)                              TireModTag                                                  ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(char)                                      TireModVersion                                              ___ OFFSET(get<char>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bTireModAdjustsPosition                                     ___ OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(char)                                      DataVersion                                                 ___ OFFSET(get<char>, {0x6E, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.RuntimeGearInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FRuntimeGearInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   GearIndex                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     TopSpeed                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PushForce                                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.RuntimeFuelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FRuntimeFuelInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MaxFuel                                                     ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FuelPerSecondDriving                                        ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FuelPerSecondBoosting                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.RuntimeBoostInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FRuntimeBoostInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bCanBoost                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bUsesRechargeableBoost                                      ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(float)                                     BoostPushForce                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedForceMultiplier                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfRegen                                ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfUse                                  ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodState_PT
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FDagwoodState_PT : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FDagwoodInternal)                          Internal                                                    ___ OFFSET(get<T>, {0x0, 312, 0, 0})
	SMember(FDagwoodOutPersistent)                     OutPersistent                                               ___ OFFSET(get<T>, {0x138, 48, 0, 0})
	SMember(FDagwoodOutContinuous)                     OutContinuous                                               ___ OFFSET(get<T>, {0x168, 72, 0, 0})
	DMember(bool)                                      bOutValid                                                   ___ OFFSET(get<bool>, {0x1B0, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodOutContinuous
/// Size: 0x0010 (0x000038 - 0x000048)
class FDagwoodOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ValetRuntime.DagwoodOutPersistent
/// Size: 0x0008 (0x000028 - 0x000030)
class FDagwoodOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bHasTraction                                                ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bStartHandBrakeCatchupForce                                 ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodInternal
/// Size: 0x00B8 (0x000080 - 0x000138)
class FDagwoodInternal : public FFortVehicleInternalPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/ValetRuntime.DagwoodManagedState
/// Size: 0x0458 (0x000000 - 0x000458)
class FDagwoodManagedState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	DMember(int32_t)                                   Frame                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FFortDagwoodCmd)                           InputCmd                                                    ___ OFFSET(get<T>, {0x8, 48, 0, 0})
	SMember(FDagwoodInPersistent)                      GT_State                                                    ___ OFFSET(get<T>, {0x38, 584, 0, 0})
	SMember(FDagwoodState_PT)                          PT_State                                                    ___ OFFSET(get<T>, {0x280, 440, 0, 0})
	CMember(APlayerController*)                        PC                                                          ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TArray<FDagwoodFutureClientInput>)         FutureInputs                                                ___ OFFSET(get<T>, {0x448, 16, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodFutureClientInput
/// Size: 0x0038 (0x000000 - 0x000038)
class FDagwoodFutureClientInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Frame                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FFortDagwoodCmd)                           InputCmd                                                    ___ OFFSET(get<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsState
/// Size: 0x0090 (0x000000 - 0x000090)
class FNetworkPhysicsState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerState
/// Size: 0x0080 (0x000000 - 0x000080)
class FNetworkPhysicsStateNetSerializerState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	DMember(int32_t)                                   NetworkHandle                                               ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   Frame                                                       ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(char)                                      ObjectState                                                 ___ OFFSET(get<char>, {0x78, 1, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugData
/// Size: 0x0060 (0x000000 - 0x000060)
class FNetworkPhysicsStateNetSerializerDebugData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Force                                                       ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Torque                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   LinearImpulse                                               ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   AngularImpulse                                              ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerDebugState
/// Size: 0x0120 (0x000000 - 0x000120)
class FNetworkPhysicsStateNetSerializerDebugState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FNetworkPhysicsStateNetSerializerDebugData) DebugData                                                  ___ OFFSET(get<T>, {0x0, 288, 0, 0})
};

/// Struct /Script/ValetRuntime.NetworkPhysicsStateNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FNetworkPhysicsStateNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ValetRuntime.VehicleAttachment
/// Size: 0x0010 (0x000000 - 0x000010)
class FVehicleAttachment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ModName                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(USkeletalMesh*)                            SkeletalMesh                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ValetRuntime.DagwoodActionDefForUI
/// Size: 0x0010 (0x000000 - 0x000010)
class FDagwoodActionDefForUI : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FActionDefForUI>)                   ActionDefForUI                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ValetRuntime.TireSimulationRuntimeData
/// Size: 0x0020 (0x000000 - 0x000020)
class FTireSimulationRuntimeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRuntimeTerrainHandlingInfo)               HandlingInfo                                                ___ OFFSET(get<T>, {0x0, 20, 0, 0})
	DMember(float)                                     PoppedTireSpringLength                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringStiff                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringDamp                                        ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ValetRuntime.ValetUpdateContext
/// Size: 0x0018 (0x000000 - 0x000018)
class FValetUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ValetRuntime.VehiclePropReplacementData
/// Size: 0x0050 (0x000000 - 0x000050)
class FVehiclePropReplacementData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UFortVehicleItemDefinition*>) FortVehicleItemDefinition                                 ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   TransOffset                                                 ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FRotator)                                  RotOffset                                                   ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Class /Script/ValetRuntime.FortValetMountedGunAnimInstance
/// Size: 0x0020 (0x000540 - 0x000560)
class UFortValetMountedGunAnimInstance : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(AFortDagwoodVehicle*)                      VehicleActor                                                ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(bool)                                      bIsUsingMountedGun                                          ___ OFFSET(get<bool>, {0x540, 1, 0, 0})
	DMember(int32_t)                                   SeatIndexCached                                             ___ OFFSET(get<int32_t>, {0x544, 4, 0, 0})
	DMember(float)                                     AimingYaw                                                   ___ OFFSET(get<float>, {0x548, 4, 0, 0})
	DMember(float)                                     AimingPitch                                                 ___ OFFSET(get<float>, {0x54C, 4, 0, 0})
	CMember(AFortWeaponRangedForVehicle*)              MountedWeapon                                               ___ OFFSET(get<T>, {0x550, 8, 0, 0})
};

/// Class /Script/ValetRuntime.FortValetPassengerAnimInstance
/// Size: 0x0060 (0x000810 - 0x000870)
class UFortValetPassengerAnimInstance : public UFortVehicleOccupantAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FCachedAnimRelevancyData)                  IntoVehicleCachedData                                       ___ OFFSET(get<T>, {0x810, 20, 0, 0})
	SMember(FCachedAnimRelevancyData)                  OutOfVehicleCachedData                                      ___ OFFSET(get<T>, {0x824, 20, 0, 0})
	CMember(TWeakObjectPtr<AFortDagwoodVehicle*>)      DagwoodVehicleInstance                                      ___ OFFSET(get<T>, {0x838, 32, 0, 0})
	DMember(float)                                     TurnYaw                                                     ___ OFFSET(get<float>, {0x858, 4, 0, 0})
	DMember(float)                                     InTime                                                      ___ OFFSET(get<float>, {0x85C, 4, 0, 0})
	DMember(float)                                     OutTime                                                     ___ OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(float)                                     NegativeTurnYaw                                             ___ OFFSET(get<float>, {0x864, 4, 0, 0})
	DMember(bool)                                      bIsReloading                                                ___ OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(bool)                                      bIsTargeting                                                ___ OFFSET(get<bool>, {0x869, 1, 0, 0})
	DMember(bool)                                      bIsFiring                                                   ___ OFFSET(get<bool>, {0x86A, 1, 0, 0})
	DMember(bool)                                      bIsUsingConsumable                                          ___ OFFSET(get<bool>, {0x86B, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 ___ OFFSET(get<bool>, {0x86C, 1, 0, 0})
	DMember(bool)                                      bIsPassengerBackLeft                                        ___ OFFSET(get<bool>, {0x86D, 1, 0, 0})
	DMember(bool)                                      bIsThrowConsumable                                          ___ OFFSET(get<bool>, {0x86E, 1, 0, 0})
	DMember(bool)                                      bIsTargetingOrThrowingConsumable                            ___ OFFSET(get<bool>, {0x86F, 1, 0, 0})
};

/// Class /Script/ValetRuntime.FortValetSedanAnimInstance
/// Size: 0x0010 (0x000600 - 0x000610)
class UFortValetSedanAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	DMember(bool)                                      bHasTireMod                                                 ___ OFFSET(get<bool>, {0x5FC, 1, 0, 0})
	DMember(float)                                     TrunkDamageAlpha                                            ___ OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     MirrorLeftDamageAlpha                                       ___ OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     MirrorRightDamageAlpha                                      ___ OFFSET(get<float>, {0x608, 4, 0, 0})
};

/// Class /Script/ValetRuntime.DagwoodNetworkPhysicsComponent
/// Size: 0x0DB0 (0x0000A0 - 0x000E50)
class UDagwoodNetworkPhysicsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3664;

public:
	SMember(FNetworkPhysicsState)                      NetworkPhysicsState                                         ___ OFFSET(get<T>, {0xA0, 144, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGeneratedLocalInputCmd                                    ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FDagwoodManagedState)                      ReplicatedManagedState                                      ___ OFFSET(get<T>, {0x140, 1112, 0, 0})
	SMember(FDagwoodManagedState)                      InManagedState                                              ___ OFFSET(get<T>, {0x598, 1112, 0, 0})
	SMember(FDagwoodManagedState)                      OutManagedState                                             ___ OFFSET(get<T>, {0x9F0, 1112, 0, 0})
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
	SMember(FScalableFloat)                            MinInitialVehicleFuelPercent                                ___ OFFSET(get<T>, {0x338, 40, 0, 0})
	SMember(FScalableFloat)                            MaxInitialVehicleFuelPercent                                ___ OFFSET(get<T>, {0x360, 40, 0, 0})
};

/// Class /Script/ValetRuntime.FortCameraMode_Dagwood
/// Size: 0x0040 (0x001B70 - 0x001BB0)
class UFortCameraMode_Dagwood : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7088;

public:
	DMember(float)                                     HorizontalCameraSpaceOffsetWhileTurning                     ___ OFFSET(get<float>, {0x1B68, 4, 0, 0})
	DMember(float)                                     SteeringAngleForMaxHorizontalOffset                         ___ OFFSET(get<float>, {0x1B6C, 4, 0, 0})
	DMember(float)                                     InAirVerticalOffset                                         ___ OFFSET(get<float>, {0x1B70, 4, 0, 0})
	DMember(float)                                     AirOffsetDampFactor                                         ___ OFFSET(get<float>, {0x1B74, 4, 0, 0})
	DMember(float)                                     SpeedAlphaDampFactor                                        ___ OFFSET(get<float>, {0x1B78, 4, 0, 0})
	DMember(float)                                     TimeInAirRequiredForVertOffset                              ___ OFFSET(get<float>, {0x1B7C, 4, 0, 0})
	DMember(float)                                     VehicleBasePitch                                            ___ OFFSET(get<float>, {0x1B80, 4, 0, 0})
	DMember(float)                                     HorizOffsetInterpSpeed                                      ___ OFFSET(get<float>, {0x1B84, 4, 0, 0})
	DMember(float)                                     HorizOffsetInterpSpeedRecovery                              ___ OFFSET(get<float>, {0x1B88, 4, 0, 0})
	DMember(float)                                     CurrentSpeedAlpha                                           ___ OFFSET(get<float>, {0x1B8C, 4, 0, 0})
	DMember(float)                                     CurrentVerticalOffset                                       ___ OFFSET(get<float>, {0x1B90, 4, 0, 0})
	DMember(float)                                     CurrentHorizontalOffset                                     ___ OFFSET(get<float>, {0x1B94, 4, 0, 0})
	DMember(float)                                     TimeInAir                                                   ___ OFFSET(get<float>, {0x1B98, 4, 0, 0})
	DMember(float)                                     PreviousSpeed                                               ___ OFFSET(get<float>, {0x1B9C, 4, 0, 0})
	DMember(float)                                     AppliedPitch                                                ___ OFFSET(get<float>, {0x1BA0, 4, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  OnStartHandbrakeDelegate                                    ___ OFFSET(get<T>, {0x1BF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStopHandbrakeDelegate                                     ___ OFFSET(get<T>, {0x1C00, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartHandBrakeCatchupForceDelegate                        ___ OFFSET(get<T>, {0x1C10, 16, 0, 0})
	CMember(UClass*)                                   HardLandingCameraShake                                      ___ OFFSET(get<T>, {0x1C20, 8, 0, 0})
	CMember(UClass*)                                   DriverCamShakeClass                                         ___ OFFSET(get<T>, {0x1C28, 8, 0, 0})
	CMember(UClass*)                                   HandBrakeCamShakeClass                                      ___ OFFSET(get<T>, {0x1C30, 8, 0, 0})
	CMember(EVehicleClass)                             VehicleClass                                                ___ OFFSET(get<T>, {0x1C38, 1, 0, 0})
	DMember(float)                                     FadeDelay                                                   ___ OFFSET(get<float>, {0x1C3C, 4, 0, 0})
	DMember(float)                                     FadeDuration                                                ___ OFFSET(get<float>, {0x1C40, 4, 0, 0})
	DMember(float)                                     MinBrakeForceForSkid                                        ___ OFFSET(get<float>, {0x1C44, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedForSkid                                      ___ OFFSET(get<float>, {0x1C48, 4, 0, 0})
	SMember(FGameplayTag)                              SpeedLinesCueTag                                            ___ OFFSET(get<T>, {0x1C4C, 4, 0, 0})
	DMember(float)                                     FadeStartTime                                               ___ OFFSET(get<float>, {0x1C50, 4, 0, 0})
	CMember(UDagwoodNetworkPhysicsComponent*)          NetworkPhysicsComponent                                     ___ OFFSET(get<T>, {0x1C58, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTireModHealthChanged                                      ___ OFFSET(get<T>, {0x1CD8, 16, 0, 0})
	DMember(float)                                     RechargeableBoostPercent                                    ___ OFFSET(get<float>, {0x1CE8, 4, 0, 0})
	CMember(UFortSplatterSourceComponent*)             SplatterSourceComp                                          ___ OFFSET(get<T>, {0x1CF0, 8, 0, 0})
	DMember(bool)                                      bEnableNativizedTick                                        ___ OFFSET(get<bool>, {0x1CF8, 1, 0, 0})
	CMember(TArray<FName>)                             PassengerLeanSockets                                        ___ OFFSET(get<T>, {0x1D00, 16, 0, 0})
	CMember(TArray<FVector>)                           PassngerLeanRelativeOffsets                                 ___ OFFSET(get<T>, {0x1D10, 16, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClass                                    ___ OFFSET(get<T>, {0x1D20, 8, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClass_ADS                                ___ OFFSET(get<T>, {0x1D28, 8, 0, 0})
	CMember(TArray<FName>)                             WheelSocketNames                                            ___ OFFSET(get<T>, {0x1D30, 16, 0, 0})
	CMember(UFortDagwoodVehicleConfigs*)               FortDagwoodVehicleConfigs                                   ___ OFFSET(get<T>, {0x1D40, 8, 0, 0})
	CMember(TArray<int32_t>)                           RearShocks                                                  ___ OFFSET(get<T>, {0x1D48, 16, 0, 0})
	SMember(FGameplayTagContainer)                     OffroadEnvironmentDamageTags                                ___ OFFSET(get<T>, {0x1D58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     FireDamageTags                                              ___ OFFSET(get<T>, {0x1D78, 32, 0, 0})
	SMember(FVector)                                   NativeWheelScaleRear                                        ___ OFFSET(get<T>, {0x1D98, 24, 0, 0})
	SMember(FVector)                                   NativeWheelScaleFront                                       ___ OFFSET(get<T>, {0x1DB0, 24, 0, 0})
	SMember(FVector)                                   NativeTireScaleRear                                         ___ OFFSET(get<T>, {0x1DC8, 24, 0, 0})
	SMember(FVector)                                   NativeTireScaleFront                                        ___ OFFSET(get<T>, {0x1DE0, 24, 0, 0})
	DMember(bool)                                      bTireSmokeActive                                            ___ OFFSET(get<bool>, {0x1DF8, 1, 0, 0})
	DMember(bool)                                      bBoostFailed                                                ___ OFFSET(get<bool>, {0x1DF9, 1, 0, 0})
	DMember(bool)                                      bCanBoostPitch                                              ___ OFFSET(get<bool>, {0x1DFA, 1, 0, 0})
	DMember(uint64_t)                                  AccelForceFeedbackHandle                                    ___ OFFSET(get<uint64_t>, {0x1E00, 8, 0, 0})
	DMember(uint64_t)                                  SkidForceFeedbackHandle                                     ___ OFFSET(get<uint64_t>, {0x1E08, 8, 0, 0})
	DMember(uint64_t)                                  BrakeForceFeedbackHandle                                    ___ OFFSET(get<uint64_t>, {0x1E10, 8, 0, 0})
	DMember(uint64_t)                                  HandBrakeForceFeedbackHandle                                ___ OFFSET(get<uint64_t>, {0x1E18, 8, 0, 0})
	DMember(bool)                                      bSpeedLinesActive                                           ___ OFFSET(get<bool>, {0x1E20, 1, 0, 0})
	SMember(FDagwoodRuntimeModifiers)                  DagwoodRuntimeModifiedProperties                            ___ OFFSET(get<T>, {0x1E40, 112, 0, 0})
	CMember(TArray<FAttachedWheel>)                    ServerRepWheelData                                          ___ OFFSET(get<T>, {0x1EB0, 16, 0, 0})
	SMember(FVector)                                   FlipYawForwardTargetDirection                               ___ OFFSET(get<T>, {0x1F10, 24, 0, 0})
	SMember(FVector)                                   FlipYawOriginalForward                                      ___ OFFSET(get<T>, {0x1F28, 24, 0, 0})
	CMember(ETireLocations)                            LastPoppedTire                                              ___ OFFSET(get<T>, {0x1F40, 1, 0, 0})
	DMember(float)                                     RoadTopSpeedMultiplier                                      ___ OFFSET(get<float>, {0x1F44, 4, 0, 0})
	DMember(float)                                     CurrentBumpiness                                            ___ OFFSET(get<float>, {0x1F48, 4, 0, 0})
	DMember(float)                                     CurrentForwardAcceleration                                  ___ OFFSET(get<float>, {0x1F4C, 4, 0, 0})
	DMember(float)                                     PreviousTurnAlpha                                           ___ OFFSET(get<float>, {0x1F50, 4, 0, 0})
	DMember(float)                                     CurrentCameraAssistStrength                                 ___ OFFSET(get<float>, {0x1F54, 4, 0, 0})
	DMember(float)                                     LostGripTime                                                ___ OFFSET(get<float>, {0x1F58, 4, 0, 0})
	DMember(float)                                     LostGripRightAlpha                                          ___ OFFSET(get<float>, {0x1F5C, 4, 0, 0})
	DMember(float)                                     HandbrakeTime                                               ___ OFFSET(get<float>, {0x1F60, 4, 0, 0})
	DMember(float)                                     HandbrakeStartTime                                          ___ OFFSET(get<float>, {0x1F64, 4, 0, 0})
	DMember(float)                                     HandbrakeEndTime                                            ___ OFFSET(get<float>, {0x1F68, 4, 0, 0})
	DMember(float)                                     FlipYawMult                                                 ___ OFFSET(get<float>, {0x1F6C, 4, 0, 0})
	DMember(float)                                     FlipTimer                                                   ___ OFFSET(get<float>, {0x1F70, 4, 0, 0})
	DMember(float)                                     FlipExplodeTimer                                            ___ OFFSET(get<float>, {0x1F74, 4, 0, 0})
	DMember(float)                                     FlipPushForceTimer                                          ___ OFFSET(get<float>, {0x1F78, 4, 0, 0})
	DMember(float)                                     FlipAirTimer                                                ___ OFFSET(get<float>, {0x1F7C, 4, 0, 0})
	DMember(float)                                     FlipLanding                                                 ___ OFFSET(get<float>, {0x1F80, 4, 0, 0})
	DMember(float)                                     FlipStartTime                                               ___ OFFSET(get<float>, {0x1F84, 4, 0, 0})
	DMember(float)                                     LastFlipDamageTime                                          ___ OFFSET(get<float>, {0x1F88, 4, 0, 0})
	DMember(float)                                     PreFlipControlLossTimer                                     ___ OFFSET(get<float>, {0x1F8C, 4, 0, 0})
	DMember(bool)                                      bDidCinematicFlip                                           ___ OFFSET(get<bool>, {0x1F90, 1, 0, 0})
	DMember(bool)                                      bCanCinematicFlip                                           ___ OFFSET(get<bool>, {0x1F91, 1, 0, 0})
	DMember(bool)                                      bInPopTireVeer                                              ___ OFFSET(get<bool>, {0x1F92, 1, 0, 0})
	DMember(bool)                                      bInFlipRecovery                                             ___ OFFSET(get<bool>, {0x1F93, 1, 0, 0})
	DMember(bool)                                      bExplodeAfterFlip                                           ___ OFFSET(get<bool>, {0x1F94, 1, 0, 0})
	DMember(bool)                                      bLostGrip                                                   ___ OFFSET(get<bool>, {0x1F95, 1, 0, 0})
	DMember(bool)                                      bApplyHandbrakeCatchupForce                                 ___ OFFSET(get<bool>, {0x1F96, 1, 0, 0})
	DMember(bool)                                      bDidHandbrakeCatchup                                        ___ OFFSET(get<bool>, {0x1F97, 1, 0, 0})
	DMember(bool)                                      bInFlipRoll                                                 ___ OFFSET(get<bool>, {0x1F98, 1, 0, 0})
	DMember(bool)                                      bInFlipYaw                                                  ___ OFFSET(get<bool>, {0x1F99, 1, 0, 0})
	DMember(bool)                                      bInFlipPitch                                                ___ OFFSET(get<bool>, {0x1F9A, 1, 0, 0})
	DMember(bool)                                      bFlipDidLeaveGround                                         ___ OFFSET(get<bool>, {0x1F9B, 1, 0, 0})
	DMember(bool)                                      bBreakBuildingsIfBlockingLeaningPassenger                   ___ OFFSET(get<bool>, {0x1F9C, 1, 0, 0})
	DMember(float)                                     LeanBreakTimeAccumulator                                    ___ OFFSET(get<float>, {0x1FA0, 4, 0, 0})
	DMember(float)                                     LeanBreakCheckInterval                                      ___ OFFSET(get<float>, {0x1FA4, 4, 0, 0})
	CMember(TArray<FName>)                             SeatToWindowShapeNames                                      ___ OFFSET(get<T>, {0x1FA8, 16, 0, 0})
	CMember(ULegacyCameraShake*)                       OffroadCameraShakeInstance                                  ___ OFFSET(get<T>, {0x1FB8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       DriverCameraShakeInstance                                   ___ OFFSET(get<T>, {0x1FC0, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       AccelCameraShakeInstance                                    ___ OFFSET(get<T>, {0x1FC8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       HandBrakeCameraShakeInstance                                ___ OFFSET(get<T>, {0x1FD0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_RoadAndExhaust                                   ___ OFFSET(get<T>, {0x1FD8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_TireSkid                                         ___ OFFSET(get<T>, {0x1FE0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_Damage                                           ___ OFFSET(get<T>, {0x1FE8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_SpeedLines                                       ___ OFFSET(get<T>, {0x1FF0, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_TireExhaust                                       ___ OFFSET(get<T>, {0x1FF8, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_SpeedLines                                        ___ OFFSET(get<T>, {0x2000, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_TireSkid                                          ___ OFFSET(get<T>, {0x2008, 8, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RoadAndExhaustSurfaceTypeArrayForFX                         ___ OFFSET(get<T>, {0x2010, 16, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutColorIndexName                         ___ OFFSET(get<T>, {0x2020, 4, 0, 0})
	SMember(FName)                                     BrakeLightsName                                             ___ OFFSET(get<T>, {0x2024, 4, 0, 0})
	CMember(TArray<ETireStates>)                       FakeTireStates                                              ___ OFFSET(get<T>, {0x2040, 16, 0, 0})
	CMember(EPoppedTireReactionStates)                 ActivePoppedTireReaction                                    ___ OFFSET(get<T>, {0x2050, 1, 0, 0})
	CMember(EPoppedTireReactionStates)                 ReplicatedPoppedTireReaction                                ___ OFFSET(get<T>, {0x2051, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortValetAudioController*>) ValetAudio                                                 ___ OFFSET(get<T>, {0x2054, 8, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             TireMeshes                                                  ___ OFFSET(get<T>, {0x2060, 16, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             FakeTireMeshes                                              ___ OFFSET(get<T>, {0x2070, 16, 0, 0})
	DMember(bool)                                      bIsInoperable                                               ___ OFFSET(get<bool>, {0x2084, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x2088, 4, 0, 0})
	SMember(FRandomStream)                             RandStream                                                  ___ OFFSET(get<T>, {0x208C, 8, 0, 0})
	DMember(bool)                                      bHasTraction                                                ___ OFFSET(get<bool>, {0x2094, 1, 0, 0})
	DMember(bool)                                      bStartHandBrakeCatchupForce                                 ___ OFFSET(get<bool>, {0x2095, 1, 0, 0})
	DMember(bool)                                      bSelfDestructEnabled                                        ___ OFFSET(get<bool>, {0x21A0, 1, 1, 0})
	DMember(bool)                                      bClientUsesSelfDestructTimer                                ___ OFFSET(get<bool>, {0x21A0, 1, 1, 1})
	CMember(UStaticMesh*)                              TireBootMesh                                                ___ OFFSET(get<T>, {0x21A8, 8, 0, 0})
	CMember(TMap<int32_t, FDagwoodActionDefForUI>)     MapSelfDestructActionDefForUI                               ___ OFFSET(get<T>, {0x21B0, 80, 0, 0})
	DMember(float)                                     MinimumTimeBetweenSelfDestructPromptChanges                 ___ OFFSET(get<float>, {0x2200, 4, 0, 0})
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleAnimInstance
/// Size: 0x0060 (0x000600 - 0x000660)
class UFortDagwoodVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	CMember(AFortDagwoodVehicle*)                      Dagwood                                                     ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	SMember(FVector)                                   GlassScale_FR                                               ___ OFFSET(get<T>, {0x600, 24, 0, 0})
	SMember(FVector)                                   GlassScale_FL                                               ___ OFFSET(get<T>, {0x618, 24, 0, 0})
	SMember(FVector)                                   GlassScale_BR                                               ___ OFFSET(get<T>, {0x630, 24, 0, 0})
	SMember(FVector)                                   GlassScale_BL                                               ___ OFFSET(get<T>, {0x648, 24, 0, 0})
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleConfigs
/// Size: 0x0240 (0x0008B0 - 0x000AF0)
class UFortDagwoodVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	DMember(float)                                     BoostMinPushForce                                           ___ OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedForceMultiplier                                ___ OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     ___ OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(float)                                     BoostWaterMultiplier                                        ___ OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     VehiclePowerSlideFrontMultiplier                            ___ OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     VehiclePowerSlideRearMultiplier                             ___ OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     IceVehiclePowerSlideFrontMultiplier                         ___ OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     IceVehiclePowerSlideRearMultiplier                          ___ OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     MudVehiclePowerSlideFrontMultiplier                         ___ OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     MudVehiclePowerSlideRearMultiplier                          ___ OFFSET(get<float>, {0x8D4, 4, 0, 0})
	DMember(bool)                                      bUseAccelerationLean                                        ___ OFFSET(get<bool>, {0x8D8, 1, 0, 0})
	DMember(float)                                     HandbrakeGripAngle                                          ___ OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(float)                                     HandbrakeGripAngleRecovery                                  ___ OFFSET(get<float>, {0x8E0, 4, 0, 0})
	DMember(float)                                     HandbrakeSpeedForGripLoss                                   ___ OFFSET(get<float>, {0x8E4, 4, 0, 0})
	DMember(float)                                     MinSlipDuration                                             ___ OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     HandbrakeLateralFriction                                    ___ OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     HandbrakeSteeringMultiplier                                 ___ OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(float)                                     HandbrakeFrictionDampFactor                                 ___ OFFSET(get<float>, {0x8F4, 4, 0, 0})
	DMember(float)                                     RestoreTractionDampFactor                                   ___ OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     HandBrakeForce                                              ___ OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     HandbrakeForceNoAccel                                       ___ OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(bool)                                      bUseHandbrakeToDrift                                        ___ OFFSET(get<bool>, {0x904, 1, 0, 0})
	DMember(float)                                     DriftMinSpeedSteeringAngle                                  ___ OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     DriftMaxSpeedSteeringAngle                                  ___ OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     DriftFrontLateralFrictionMultiplier                         ___ OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     DriftRearLateralFrictionMultiplier                          ___ OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplier                                     ___ OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     DirtRoadTopSpeedMultiplier                                  ___ OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     DirtRoadFrontLateralFriction                                ___ OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     DirtRoadRearLateralFriction                                 ___ OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(float)                                     DirtRoadAccelForceMultiplier                                ___ OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     OffRoadTopSpeedMultiplier                                   ___ OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     OffRoadFrontLateralFriction                                 ___ OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     OffRoadRearLateralFriction                                  ___ OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     OffRoadPushForceMultiplier                                  ___ OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     OffroadDamageImpactForceMin                                 ___ OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     OffroadDamageImpactForceMax                                 ___ OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     OffroadImpactDamageMin                                      ___ OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     OffroadImpactDamageMax                                      ___ OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     MinSpeedForOffroadHandling                                  ___ OFFSET(get<float>, {0x94C, 4, 0, 0})
	DMember(float)                                     SnowFrontLateralFriction                                    ___ OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     SnowRearLateralFriction                                     ___ OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     IceFrontLateralFriction                                     ___ OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     IceRearLateralFriction                                      ___ OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     MudFrontLateralFriction                                     ___ OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     MudRearLateralFriction                                      ___ OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     IcePushForceMultiplier                                      ___ OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     IceBrakeForceMultiplier                                     ___ OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     FireHealthPercentThreshold                                  ___ OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     OffroadRumbleIntensity                                      ___ OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     DirtRoadRumbleIntensity                                     ___ OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     OffroadDamageScaleExponent                                  ___ OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     HardLandingThresholdMin                                     ___ OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     HardLandingThresholdMax                                     ___ OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     HardLandingShakeZAmplitudeMin                               ___ OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     HardLandingShakeZAmplitudeMax                               ___ OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     SpeedLinesThreshold                                         ___ OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     PropDestructionImpulse                                      ___ OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(float)                                     DestructionAngle                                            ___ OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     UpNormalMinProtected                                        ___ OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     UpForwardMinProtected                                       ___ OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     NonCameraSteeringAngleMultiplier                            ___ OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthMax                                     ___ OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthMin                                     ___ OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthRecovery                                ___ OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     CameraAssistInterpSpeed                                     ___ OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     ReverseChangeDirectionBrakeForceMultiplier                  ___ OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     ReverseChangeDirectionSpeedThreshold                        ___ OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     DriftExitPushForce                                          ___ OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     DriftExitCatchupSpeed                                       ___ OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     HandbrakeDurationRequiredForCatchup                         ___ OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     ImpactMagnitudeToEndCatchup                                 ___ OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringLength                                      ___ OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringStiff                                       ___ OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringDamp                                        ___ OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     PoppedTireScrapeFrictionMultiplier                          ___ OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     RimScrapeFlipRollMagnitude                                  ___ OFFSET(get<float>, {0x9E0, 4, 0, 0})
	DMember(float)                                     RimScrapeFlipPitchMagnitude                                 ___ OFFSET(get<float>, {0x9E4, 4, 0, 0})
	DMember(float)                                     SpeedForRimFlip                                             ___ OFFSET(get<float>, {0x9E8, 4, 0, 0})
	DMember(float)                                     HealthPercentForFlip                                        ___ OFFSET(get<float>, {0x9EC, 4, 0, 0})
	DMember(float)                                     FlipYawDuration                                             ___ OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     FlipRollDuration                                            ___ OFFSET(get<float>, {0x9F4, 4, 0, 0})
	DMember(float)                                     FlipPitchDuration                                           ___ OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     FlipExplodeDuration_Yaw                                     ___ OFFSET(get<float>, {0x9FC, 4, 0, 0})
	DMember(float)                                     FlipExplodeDuration_Pitch                                   ___ OFFSET(get<float>, {0xA00, 4, 0, 0})
	DMember(float)                                     FlipPushForceDuration_Yaw                                   ___ OFFSET(get<float>, {0xA04, 4, 0, 0})
	DMember(float)                                     FlipPushForceDuration_Pitch                                 ___ OFFSET(get<float>, {0xA08, 4, 0, 0})
	DMember(float)                                     FlipPushForcMultiplier                                      ___ OFFSET(get<float>, {0xA0C, 4, 0, 0})
	DMember(float)                                     FlipPushForce_UpComponentPitch                              ___ OFFSET(get<float>, {0xA10, 4, 0, 0})
	DMember(float)                                     FlipPushForce_UpComponentRoll                               ___ OFFSET(get<float>, {0xA14, 4, 0, 0})
	DMember(float)                                     MinTimeInAirRequiredForExplodeLanding                       ___ OFFSET(get<float>, {0xA18, 4, 0, 0})
	DMember(float)                                     FlipYawSpringStiff                                          ___ OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(float)                                     FlipYawSpringDamp                                           ___ OFFSET(get<float>, {0xA20, 4, 0, 0})
	DMember(float)                                     FlipYawSpringMaxAccel                                       ___ OFFSET(get<float>, {0xA24, 4, 0, 0})
	DMember(float)                                     HealthPercentForExplode                                     ___ OFFSET(get<float>, {0xA28, 4, 0, 0})
	DMember(float)                                     FlipRecoveryTime                                            ___ OFFSET(get<float>, {0xA2C, 4, 0, 0})
	DMember(float)                                     FlipMaxDuration                                             ___ OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     FlipWiggleDuration                                          ___ OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(float)                                     PoppedTireVeerDuration                                      ___ OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(float)                                     PoppedTireVeerSteeringAngle                                 ___ OFFSET(get<float>, {0xA3C, 4, 0, 0})
	DMember(float)                                     FlipWiggleFrequency                                         ___ OFFSET(get<float>, {0xA40, 4, 0, 0})
	DMember(float)                                     FlipWiggleSteeringAngle                                     ___ OFFSET(get<float>, {0xA44, 4, 0, 0})
	DMember(float)                                     FlipYawAngleThreshold                                       ___ OFFSET(get<float>, {0xA48, 4, 0, 0})
	DMember(bool)                                      bUsesBoost                                                  ___ OFFSET(get<bool>, {0xA4C, 1, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfUse                                  ___ OFFSET(get<float>, {0xA50, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRateOfRegen                                ___ OFFSET(get<float>, {0xA54, 4, 0, 0})
	DMember(float)                                     BoostRateOfRegenMinMultiplier                               ___ OFFSET(get<float>, {0xA58, 4, 0, 0})
	DMember(float)                                     BoostRateOfRegenMaxMultiplier                               ___ OFFSET(get<float>, {0xA5C, 4, 0, 0})
	DMember(float)                                     BoostRegenMaxMultiplyTime                                   ___ OFFSET(get<float>, {0xA60, 4, 0, 0})
	DMember(float)                                     RechargeableBoostRequiredPercentToActivate                  ___ OFFSET(get<float>, {0xA64, 4, 0, 0})
	DMember(float)                                     RechargeableBoostMaxPercent                                 ___ OFFSET(get<float>, {0xA68, 4, 0, 0})
	DMember(float)                                     RechargeableBoostMinPercent                                 ___ OFFSET(get<float>, {0xA6C, 4, 0, 0})
	DMember(float)                                     AnalogDriftStickThreshold                                   ___ OFFSET(get<float>, {0xA70, 4, 0, 0})
	SMember(FName)                                     TireBootRightSocketName                                     ___ OFFSET(get<T>, {0xA74, 4, 0, 0})
	SMember(FName)                                     TireBootLeftSocketName                                      ___ OFFSET(get<T>, {0xA78, 4, 0, 0})
	DMember(float)                                     TireBootRelativeDistance                                    ___ OFFSET(get<float>, {0xA7C, 4, 0, 0})
	DMember(float)                                     BoostForceInAir                                             ___ OFFSET(get<float>, {0xA80, 4, 0, 0})
	DMember(float)                                     BoostAirMaxSpeed                                            ___ OFFSET(get<float>, {0xA84, 4, 0, 0})
	CMember(TArray<FName>)                             TireSocketNames                                             ___ OFFSET(get<T>, {0xA88, 16, 0, 0})
	CMember(TArray<FName>)                             TireBoneNames                                               ___ OFFSET(get<T>, {0xA98, 16, 0, 0})
	CMember(TArray<int32_t>)                           RearTireIndices                                             ___ OFFSET(get<T>, {0xAA8, 16, 0, 0})
	CMember(TArray<int32_t>)                           RightSideTires                                              ___ OFFSET(get<T>, {0xAB8, 16, 0, 0})
	CMember(TArray<int32_t>)                           FakeTireIndices                                             ___ OFFSET(get<T>, {0xAC8, 16, 0, 0})
	DMember(bool)                                      bNoWheels                                                   ___ OFFSET(get<bool>, {0xAD8, 1, 0, 0})
	DMember(float)                                     NoWheelsSpringLenMult                                       ___ OFFSET(get<float>, {0xADC, 4, 0, 0})
	CMember(TArray<FName>)                             NoWheelsBonesToHide                                         ___ OFFSET(get<T>, {0xAE0, 16, 0, 0})
};

/// Class /Script/ValetRuntime.FortDagwoodVehicleManager
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortDagwoodVehicleManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bHasUpdatedPropReplacement                                  ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(int32_t)                                   NumVehiclesSpawnedWithTireMod                               ___ OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Class /Script/ValetRuntime.FortValetAudioController
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AFortValetAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnEngineLoadChanged                                         ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnShiftGearCompleted                                        ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnShiftGearDelegate                                         ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	DMember(float)                                     RPMResetTime_Native                                         ___ OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     JitterAmount_Native                                         ___ OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     ShiftTimeThreshold_Native                                   ___ OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     TimeSinceShift_Native                                       ___ OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     EngineRPMInterp_Native                                      ___ OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     EngineRPMLinear_Native                                      ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     MinRPMRange_Native                                          ___ OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     MaxRPMRange_Native                                          ___ OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(bool)                                      bCurrentlyShifting_Native                                   ___ OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(float)                                     CurrentAccelRateGearModifier_Native                         ___ OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     CurrentAccelRate_Native                                     ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear_Native                                          ___ OFFSET(get<int32_t>, {0x2EC, 4, 0, 0})
	DMember(int32_t)                                   MaxGear_Native                                              ___ OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	DMember(float)                                     DefaultAccelRateScalar_Native                               ___ OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(float)                                     GearAttackInterpSpeed_Native                                ___ OFFSET(get<float>, {0x2F8, 4, 0, 0})
	DMember(float)                                     GearReleaseInterpSpeed_Native                               ___ OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     AccelRateScalarFirstGear_Native                             ___ OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     AccelRateScalarMinGear_Native                               ___ OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     AccelRateScalarMaxGear_Native                               ___ OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     ShiftToRPMStart_Native                                      ___ OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(float)                                     ShiftToRPMEnd_Native                                        ___ OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     ShiftFromRPMStart_Native                                    ___ OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     ShiftFromRPMEnd_Native                                      ___ OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     MaxRPMSawtoothDecrement_Native                              ___ OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     MaxRPMSawtoothRepeatTime_Native                             ___ OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     DownhillAccelScalar_Native                                  ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     UphillAccelScalar_Native                                    ___ OFFSET(get<float>, {0x328, 4, 0, 0})
	CMember(UCurveFloat*)                              RPMFloatCurveMapping                                        ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(float)                                     NormalizedSpeed_Native                                      ___ OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     SuspValue_Native                                            ___ OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(bool)                                      bIsHandbraking_Native                                       ___ OFFSET(get<bool>, {0x340, 1, 0, 0})
	DMember(float)                                     MotoSynthVolume_Native                                      ___ OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     MotoSynthInitialFadeInTime_Native                           ___ OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     MotoSynthLogRPM_Native                                      ___ OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(bool)                                      bHasFuel_Native                                             ___ OFFSET(get<bool>, {0x354, 1, 0, 0})
	DMember(bool)                                      bIsInWater_Native                                           ___ OFFSET(get<bool>, {0x355, 1, 0, 0})
	DMember(bool)                                      bLocalPlayerInVehicle_Native                                ___ OFFSET(get<bool>, {0x356, 1, 0, 0})
	DMember(float)                                     TimeLocalPlayerEnteredVehicle_Native                        ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(bool)                                      bAttemptingDirectionChange_Native                           ___ OFFSET(get<bool>, {0x35C, 1, 0, 0})
	DMember(bool)                                      bPreDestroy_Native                                          ___ OFFSET(get<bool>, {0x35D, 1, 0, 0})
	DMember(bool)                                      bEngineLoad_Native                                          ___ OFFSET(get<bool>, {0x35E, 1, 0, 0})
	DMember(float)                                     SkidAmount_Native                                           ___ OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     TimeSinceAwoken_Native                                      ___ OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(bool)                                      bDestroyed_Native                                           ___ OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(float)                                     TimeSinceSurfaceChange_Native                               ___ OFFSET(get<float>, {0x36C, 4, 0, 0})
	CMember(USoundBase*)                               OnInitialSuspensionSound                                    ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     AngleForSkidding_Native                                     ___ OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     SpringCompressionMultiplier                                 ___ OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(float)                                     MotoSynthMaxVolume_Native                                   ___ OFFSET(get<float>, {0x380, 4, 0, 0})
	SMember(FVector2D)                                 MotoSynthTimeInVehicleTimeRange                             ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FVector2D)                                 MotoSynthTimeInVehicleVolumeRange                           ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortDagwoodVehicle*>)      ValetVehicle                                                ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               Engine_Native                                               ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UAudioComponent*)                          BoostAudioComponent_Native                                  ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(USynthComponentMoto*)                      SynthComponentMoto_Native                                   ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UFortCollisionAudioComponent*)             SuspensionCollisionComponent_Native                         ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
};

/// Class /Script/ValetRuntime.FortValetGameFeatureData
/// Size: 0x0078 (0x000498 - 0x000510)
class UFortValetGameFeatureData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(TMap<TWeakObjectPtr, FVehiclePropReplacementData>) PropReplacements                                    ___ OFFSET(get<T>, {0x498, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   VehicleSpawnerClass                                         ___ OFFSET(get<T>, {0x4E8, 32, 0, 0})
	CMember(ESpawnActorCollisionHandlingMethod)        SpawnActorCollisionHandlingMethod                           ___ OFFSET(get<T>, {0x508, 1, 0, 0})
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

