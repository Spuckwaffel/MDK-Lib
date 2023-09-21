
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/SentryRuntime.CreativeSentryAnimInstance
/// Size: 0x0020 (0x000590 - 0x0005B0)
class UCreativeSentryAnimInstance : public UFortDefenderAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	DMember(float)                                     RotateAimAnimationPitch                                     OFFSET(get<float>, {0x590, 4, 0, 0})
	DMember(float)                                     CounterRotateAimAnimationPitch                              OFFSET(get<float>, {0x594, 4, 0, 0})
	DMember(bool)                                      bIsRelaxedLevel1OrNotTargeting                              OFFSET(get<bool>, {0x598, 1, 0, 0})
	DMember(float)                                     RightHandIKAlpha                                            OFFSET(get<float>, {0x59C, 4, 0, 0})
	DMember(float)                                     OneMinusLeftHandFK                                          OFFSET(get<float>, {0x5A0, 4, 0, 0})
	DMember(float)                                     LeftHandIKAlpha                                             OFFSET(get<float>, {0x5A4, 4, 0, 0})
	DMember(float)                                     RetargetHandIKBonesToFKPositionWeight                       OFFSET(get<float>, {0x5A8, 4, 0, 0})
};

