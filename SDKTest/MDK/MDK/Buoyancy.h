
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/Buoyancy.BuoyancyEventInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBuoyancyEventInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Buoyancy.BuoyancyRuntimeSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UBuoyancyRuntimeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bBuoyancyEnabled                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bKeepFloatingObjectsAwake                                   OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(float)                                     WaterDensity                                                OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaterDrag                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannelForWaterObjects                             OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(int32_t)                                   MaxNumBoundsSubdivisions                                    OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MinBoundsSubdivisionVol                                     OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(char)                                      SurfaceTouchCallbackFlags                                   OFFSET(get<char>, {0x48, 1, 0, 0})
	DMember(float)                                     MinVelocityForSurfaceTouchCallback                          OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/Buoyancy.BuoyancySubsystem
/// Size: 0x0048 (0x000040 - 0x000088)
class UBuoyancySubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Enum /Script/Buoyancy.EBuoyancyEventFlags
/// Size: 0x05
enum EBuoyancyEventFlags : uint8_t
{
	None0                                                                            = 0,
	Begin1                                                                           = 1,
	Continue2                                                                        = 2,
	End3                                                                             = 4,
	EBuoyancyEventFlags_MAX4                                                         = 5
};

