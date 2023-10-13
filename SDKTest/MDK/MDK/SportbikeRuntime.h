
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: MotorcycleRuntime

/// Class /Script/SportbikeRuntime.FortSportbikeAnimInstance
/// Size: 0x0020 (0x000670 - 0x000690)
class UFortSportbikeAnimInstance : public UFortMotorcycleVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	SMember(FRotator)                                  LimitedWheelRotationFR                                      OFFSET(getStruct<T>, {0x668, 24, 0, 0})
	DMember(bool)                                      HasPassenger                                                OFFSET(get<bool>, {0x680, 1, 0, 0})
	DMember(bool)                                      ShouldPlayGroundTrick                                       OFFSET(get<bool>, {0x681, 1, 0, 0})
	DMember(bool)                                      IsWheelie                                                   OFFSET(get<bool>, {0x682, 1, 0, 0})
	DMember(bool)                                      StateRuleFromWheelieToGroundTrickOutro                      OFFSET(get<bool>, {0x683, 1, 0, 0})
	DMember(bool)                                      SportBikeWheelieEarlyOut                                    OFFSET(get<bool>, {0x684, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromLocomotion                                    OFFSET(get<bool>, {0x685, 1, 0, 0})
	DMember(bool)                                      IsChangingGear                                              OFFSET(get<bool>, {0x686, 1, 0, 0})
};

/// Class /Script/SportbikeRuntime.FortSportbikeDriverAnimInstance
/// Size: 0x0030 (0x000920 - 0x000950)
class UFortSportbikeDriverAnimInstance : public UFortPlayerAnimInstance_MotorcycleDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2384;

public:
	DMember(bool)                                      SportBikeWheelieEarlyOut                                    OFFSET(get<bool>, {0x920, 1, 0, 0})
	DMember(bool)                                      StateRuleFromWheelieToGroundTrickOutro                      OFFSET(get<bool>, {0x921, 1, 0, 0})
	DMember(bool)                                      EarlyExitFromGroundTrick                                    OFFSET(get<bool>, {0x922, 1, 0, 0})
	DMember(bool)                                      IsBoostingWithNoPassenger                                   OFFSET(get<bool>, {0x923, 1, 0, 0})
	DMember(int32_t)                                   MotorcycleGear                                              OFFSET(get<int32_t>, {0x924, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear                                                 OFFSET(get<int32_t>, {0x928, 4, 0, 0})
	DMember(int32_t)                                   PreviousGear                                                OFFSET(get<int32_t>, {0x92C, 4, 0, 0})
	DMember(bool)                                      IsChangingGear                                              OFFSET(get<bool>, {0x930, 1, 0, 0})
	DMember(float)                                     SuperSlideBlendAlpha                                        OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     SuperSlideBlendStart                                        OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     SuperSlideBlendEnd                                          OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(bool)                                      IsSuperSliding                                              OFFSET(get<bool>, {0x940, 1, 0, 0})
};

/// Class /Script/SportbikeRuntime.FortSportbikeVehicle
/// Size: 0x0010 (0x002050 - 0x002060)
class AFortSportbikeVehicle : public AFortMotorcycleVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8288;

public:
};

/// Class /Script/SportbikeRuntime.FortSportbikeVehicleConfigs
/// Size: 0x0000 (0x000B80 - 0x000B80)
class UFortSportbikeVehicleConfigs : public UFortMotorcycleVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2944;

public:
};

