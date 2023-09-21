
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMotorSimStandardComponents.BoostMotorSimComponent
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UBoostMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(float)                                     ThrottleScale                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     InterpExp                                                   OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     InterpTime                                                  OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      ScaleThrottleWithBoostStrength                              OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(bool)                                      bModifyPitch                                                OFFSET(get<bool>, {0xB5, 1, 0, 0})
	DMember(float)                                     PitchModifierInterpSpeed                                    OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        BoostToPitchCurve                                           OFFSET(get<T>, {0xC0, 136, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.MotorPhysicsSimComponent
/// Size: 0x0060 (0x0000A8 - 0x000108)
class UMotorPhysicsSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     EngineTorque                                                OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     BrakingHorsePower                                           OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(TArray<float>)                             GearRatios                                                  OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     ClutchedGearRatio                                           OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bUseInfiniteGears                                           OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bAlwaysDownshiftToZerothGear                                OFFSET(get<bool>, {0xCD, 1, 0, 0})
	DMember(float)                                     InfiniteGearRatio                                           OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     UpShiftMaxRpm                                               OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     DownShiftStartRpm                                           OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     ClutchedForceModifier                                       OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     EngineGearRatio                                             OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     EngineFriction                                              OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     GroundFriction                                              OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     WindResistancePerVelocity                                   OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     ThrottleInterpolationTime                                   OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     RpmInterpSpeed                                              OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGearChangedEvent                                          OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ResistanceMotorSimComponent
/// Size: 0x0090 (0x0000A8 - 0x000138)
class UResistanceMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     UpSpeedMaxFriction                                          OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SideSpeedFrictionCurve                                      OFFSET(get<T>, {0xB0, 136, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ReverseMotorSimComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UReverseMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     ReverseEngineResistanceModifier                             OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.RevLimiterMotorSimComponent
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class URevLimiterMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     LimitTime                                                   OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     DecelScale                                                  OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     AirMaxThrottleTime                                          OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     SideSpeedThreshold                                          OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     LimiterMaxRpm                                               OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRevLimiterHit                                             OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRevLimiterStateChanged                                    OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.RpmCurveMotorSimComponent
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class URpmCurveMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FMotorSimGearCurve>)                Gears                                                       OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(float)                                     InterpSpeed                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUpShift                                                   OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDownShift                                                 OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.ThrottleStateMotorSimComponent
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UThrottleStateMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnThrottleEngaged                                           OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnThrottleReleased                                          OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEngineBlowoff                                             OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     BlowoffMinThrottleTime                                      OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Class /Script/AudioMotorSimStandardComponents.VelocitySyncMotorSimComponent
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UVelocitySyncMotorSimComponent : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(float)                                     NoThrottleTime                                              OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SpeedToRpmCurve                                             OFFSET(get<T>, {0xB0, 136, 0, 0})
	DMember(float)                                     InterpSpeed                                                 OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     InterpTime                                                  OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     FirstGearThrottleThreshold                                  OFFSET(get<float>, {0x140, 4, 0, 0})
};

/// Struct /Script/AudioMotorSimStandardComponents.MotorSimGearCurve
/// Size: 0x0090 (0x000000 - 0x000090)
class FMotorSimGearCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRuntimeFloatCurve)                        RpmCurve                                                    OFFSET(get<T>, {0x0, 136, 0, 0})
	DMember(float)                                     SpeedTopThreshold                                           OFFSET(get<float>, {0x88, 4, 0, 0})
};

