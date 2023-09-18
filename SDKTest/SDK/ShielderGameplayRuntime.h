/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ShielderGameplayRuntime.

/// Class /Script/ShielderGameplayRuntime.ShielderCollisionHelperComponent
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UShielderCollisionHelperComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(ABuildingGameplayActor*)                   ShielderBGA                                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FVector)                                   StaticOffset                                                ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   AimOffset                                                   ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   AimOffset2D                                                 ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     PitchMultiplier                                             ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     PitchMin                                                    ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     PitchMax                                                    ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FScalableFloat)                            ShouldUpdateShielderSkelMesh                                ___ OFFSET(get<T>, {0x100, 40, 0, 0})
};

