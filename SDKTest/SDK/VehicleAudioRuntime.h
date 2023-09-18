/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VehicleAudioRuntime.

/// Struct /Script/VehicleAudioRuntime.FortMotorSimPatternState
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortMotorSimPatternState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<UCurveVector*>)                     Curves                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     OnsetInterpSpeed                                            ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ThrottleThreshold                                           ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     RpmFallRate                                                 ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SpeedMin                                                    ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     SpeedMax                                                    ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     RpmOffsetMin                                                ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     RpmOffsetMax                                                ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bLoopCurves                                                 ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/VehicleAudioRuntime.FortVehicleSoundSurfaceParam
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortVehicleSoundSurfaceParam : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TEnumAsByte<EPhysicalSurface>)             Surface                                                     ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/VehicleAudioRuntime.FortVehicleSoundComponent_SurfaceContext
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FFortVehicleSoundComponent_SurfaceContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     BrakingHardStopThreshold                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BrakingSoftStopThreshold                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SurfaceParamInterpSpeed                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TMap<TEnumAsByte, TEnumAsByte>)            SurfaceMap                                                  ___ OFFSET(get<T>, {0x10, 80, 0, 0})
	SMember(FName)                                     WaterParamName                                              ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	DMember(float)                                     WaterParamInterpSpeed                                       ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FName)                                     AirParamName                                                ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(float)                                     AirParamAttackInterpSpeed                                   ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     AirParamReleaseInterpSpeed                                  ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MinSpeedForSkidFX                                           ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     MaxSpeedForSkidFX                                           ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FName)                                     SkiddingParamName                                           ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	DMember(float)                                     SkiddingParamInterpSpeed                                    ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             CurrentSurface                                              ___ OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(TArray<FFortVehicleSoundSurfaceParam>)     SurfaceParams                                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer
/// Size: 0x00C0 (0x0000A8 - 0x000168)
class UFortMotorSimComponent_PatternPlayer : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(float)                                     PatternResetCooldown                                        ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FFortMotorSimPatternState)                 DriftState                                                  ___ OFFSET(get<T>, {0xB0, 48, 0, 0})
	SMember(FFortMotorSimPatternState)                 AirState                                                    ___ OFFSET(get<T>, {0xE0, 48, 0, 0})
	SMember(FFortMotorSimPatternState)                 StartlineState                                              ___ OFFSET(get<T>, {0x110, 48, 0, 0})
	CMember(UCurveVector*)                             CurrentCurve                                                ___ OFFSET(get<T>, {0x160, 8, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier
/// Size: 0x0070 (0x0000A8 - 0x000118)
class UFortMotorSimComponent_SurfaceModifier : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TMap<FName, UCurveFloat*>)                 Surfaces                                                    ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
	SMember(FVector2f)                                 ThrottleRange                                               ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(float)                                     OnsetInterpTime                                             ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(UCurveFloat*)                              CurrentCurve                                                ___ OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleAudioLifecycleInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VehicleAudioRuntime.FortVehicleAudioController
/// Size: 0x0060 (0x000290 - 0x0002F0)
class AFortVehicleAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UFortVehicleSoundData*)                    VehicleSoundData                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(int32_t)                                   CurrentSignificance                                         ___ OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(bool)                                      bListenerInRange                                            ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bForceUpdatePastListenerRange                               ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(bool)                                      bRedlineAllowed                                             ___ OFFSET(get<bool>, {0x2AA, 1, 0, 0})
	DMember(float)                                     JitterTime                                                  ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	CMember(AFortAthenaVehicle*)                       VehicleBase                                                 ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UFortPhysicsVehicleConfigs*)               PhysicsVehicleConfigs                                       ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               LayeredAudioComponent                                       ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UAudioParameterComponent*)                 AudioParameterComponent                                     ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UAudioMotorModelComponent*)                AudioMotorModelComponent                                    ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UREVComponent*)                            REVComponent                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(TArray<UFortVehicleSoundComponent*>)       VehicleSoundComponents                                      ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortVehicleSoundComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortVehicleAudioController*>) AudioController                                          ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Speed
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UFortVehicleSoundComponent_Speed : public UFortVehicleSoundComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FFortAudioFloatParameter)                  Speed                                                       ___ OFFSET(get<T>, {0xB0, 56, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UFortVehicleSoundComponent_Surface : public UFortVehicleSoundComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FFortVehicleSoundComponent_SurfaceContext) Context                                                     ___ OFFSET(get<T>, {0xB0, 168, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortVehicleSoundData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<UFortVehicleSoundComponent*>)       SoundComponents                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     MaxListenerDistance                                         ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUpdateDataFromController                                   ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     MaxBrakeThreshold                                           ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     ThrottleMultiplier                                          ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     SurfaceFrictionModifier                                     ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MotorFrictionModifier                                       ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FVector2D)                                 FrictionJitter                                              ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bCanShiftOverride                                           ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
};

