
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/AirJellyfishRuntime.FortAirJellyfishAnimInstance
/// Size: 0x0020 (0x000540 - 0x000560)
class UFortAirJellyfishAnimInstance : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(float)                                     RotatorLerpRate                                             OFFSET(get<float>, {0x538, 4, 0, 0})
	DMember(float)                                     VelocityDirectionScalar                                     OFFSET(get<float>, {0x53C, 4, 0, 0})
	SMember(FRotator)                                  RootRotation                                                OFFSET(get<T>, {0x540, 24, 0, 0})
};

