/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AirJellyfishRuntime.

/// Class /Script/AirJellyfishRuntime.FortAirJellyfishAnimInstance
/// Size: 0x0020 (0x000540 - 0x000560)
class UFortAirJellyfishAnimInstance : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(float)                                     RotatorLerpRate                                             ___ OFFSET(get<float>, {0x538, 4, 0, 0})
	DMember(float)                                     VelocityDirectionScalar                                     ___ OFFSET(get<float>, {0x53C, 4, 0, 0})
	SMember(FRotator)                                  RootRotation                                                ___ OFFSET(get<T>, {0x540, 24, 0, 0})
};

