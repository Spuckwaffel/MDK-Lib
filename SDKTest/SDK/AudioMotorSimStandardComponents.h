/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioMotorSimStandardComponents.

/// Struct /Script/AudioMotorSimStandardComponents.MotorSimGearCurve
/// Size: 0x0090 (0x000000 - 0x000090)
class FMotorSimGearCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRuntimeFloatCurve)                        RpmCurve                                                    ___ OFFSET(get<T>, {0x0, 136, 0, 0})
	DMember(float)                                     SpeedTopThreshold                                           ___ OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.BoostMotorSimComponent
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UBoostMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(float)                                     ThrottleScale                                               ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     InterpExp                                                   ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     InterpTime                                                  ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      ScaleThrottleWithBoostStrength                              ___ OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bModifyPitch                                                ___ OFFSET(get<bool>, {0xB5, 1, 0, 0})
	DMember(float)                                     PitchModifierInterpSpeed                                    ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        BoostToPitchCurve                                           ___ OFFSET(get<T>, {0xC0, 136, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.MotorPhysicsSimComponent
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UMotorPhysicsSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     EngineTorque                                                ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     BrakingHorsePower                                           ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(TArray<float>)                             GearRatios                                                  ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     ClutchedGearRatio                                           ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bUseInfiniteGears                                           ___ OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bAlwaysDownshiftToZerothGear                                ___ OFFSET(get<bool>, {0xCD, 1, 0, 0})
	DMember(float)                                     InfiniteGearRatio                                           ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     UpShiftMaxRpm                                               ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     DownShiftStartRpm                                           ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     ClutchedForceModifier                                       ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     EngineGearRatio                                             ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     EngineFriction                                              ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     GroundFriction                                              ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     WindResistancePerVelocity                                   ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     ThrottleInterpolationTime                                   ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     RpmInterpSpeed                                              ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGearChangedEvent                                          ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ResistanceMotorSimComponent
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UResistanceMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     UpSpeedMaxFriction                                          ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SideSpeedFrictionCurve                                      ___ OFFSET(get<T>, {0xB0, 136, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ReverseMotorSimComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UReverseMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     ReverseEngineResistanceModifier                             ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class URevLimiterMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     LimitTime                                                   ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     DecelScale                                                  ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     AirMaxThrottleTime                                          ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     SideSpeedThreshold                                          ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     LimiterMaxRpm                                               ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRevLimiterHit                                             ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRevLimiterStateChanged                                    ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class URpmCurveMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FMotorSimGearCurve>)                Gears                                                       ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(float)                                     InterpSpeed                                                 ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpShift                                                   ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDownShift                                                 ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UThrottleStateMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnThrottleEngaged                                           ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnThrottleReleased                                          ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEngineBlowoff                                             ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     BlowoffMinThrottleTime                                      ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UVelocitySyncMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(float)                                     NoThrottleTime                                              ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SpeedThreshold                                              ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SpeedToRpmCurve                                             ___ OFFSET(get<T>, {0xB0, 136, 0, 0})
	DMember(float)                                     InterpSpeed                                                 ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     InterpTime                                                  ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     FirstGearThrottleThreshold                                  ___ OFFSET(get<float>, {0x140, 4, 0, 0})
};

