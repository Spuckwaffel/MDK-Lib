
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/StormShieldModifierRuntime.FortAthenaMutator_SplitStorm
/// Size: 0x01E0 (0x000490 - 0x000670)
class AFortAthenaMutator_SplitStorm : public AFortAthenaMutator_GameModeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(UClass*)                                   SafeZoneProxyClass                                          ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FScalableFloat)                            ProxyUpdateFrequency                                        ___ OFFSET(get<T>, {0x498, 40, 0, 0})
	SMember(FScalableFloat)                            SplitParallelTravelDistance                                 ___ OFFSET(get<T>, {0x4C0, 40, 0, 0})
	SMember(FScalableFloat)                            JoinParallelTravelDistance                                  ___ OFFSET(get<T>, {0x4E8, 40, 0, 0})
	SMember(FScalableFloat)                            SplitPerpendicularTravelDistance                            ___ OFFSET(get<T>, {0x510, 40, 0, 0})
	SMember(FScalableFloat)                            JoinAngleFromParallelDegrees                                ___ OFFSET(get<T>, {0x538, 40, 0, 0})
	SMember(FScalableFloat)                            PhaseToSplitStorm                                           ___ OFFSET(get<T>, {0x560, 40, 0, 0})
	SMember(FLinearColor)                              ProxyMapCircleColor                                         ___ OFFSET(get<T>, {0x588, 16, 0, 0})
	DMember(float)                                     ProxyMapCircleLineThickness                                 ___ OFFSET(get<float>, {0x598, 4, 0, 0})
	DMember(int32_t)                                   ProxyMapCircleLineSegments                                  ___ OFFSET(get<int32_t>, {0x59C, 4, 0, 0})
	CMember(AActor*)                                   SafeZoneProxy                                               ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(ESplitStormProxyPhase)                     CurrentProxyPhase                                           ___ OFFSET(get<T>, {0x5A8, 1, 0, 0})
	DMember(float)                                     MoveToHoldWaitDuration                                      ___ OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(float)                                     MoveToHoldDuration                                          ___ OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     MoveToEndWaitDuration                                       ___ OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(float)                                     MoveToEndDuration                                           ___ OFFSET(get<float>, {0x5B8, 4, 0, 0})
	DMember(float)                                     MoveStartTime                                               ___ OFFSET(get<float>, {0x5BC, 4, 0, 0})
	SMember(FSplitStormProxyCircle)                    ProxyStartCircle                                            ___ OFFSET(get<T>, {0x5C0, 32, 0, 0})
	SMember(FSplitStormProxyCircle)                    ProxyEndCircle                                              ___ OFFSET(get<T>, {0x5E0, 32, 0, 0})
	SMember(FSplitStormProxyCircle)                    ProxyHoldCircle                                             ___ OFFSET(get<T>, {0x600, 32, 0, 0})
	SMember(FSplitStormProxyCircle)                    CurrentProxyCircle                                          ___ OFFSET(get<T>, {0x620, 32, 0, 0})
};

/// Struct /Script/StormShieldModifierRuntime.SplitStormProxyCircle
/// Size: 0x0020 (0x000000 - 0x000020)
class FSplitStormProxyCircle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Center                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Enum /Script/StormShieldModifierRuntime.ESplitStormProxyPhase
/// Size: 0x04
enum ESplitStormProxyPhase : uint8_t
{
	ESplitStormProxyPhase__None0                                                     = 0,
	ESplitStormProxyPhase__MovingToHold1                                             = 1,
	ESplitStormProxyPhase__MovingToEnd2                                              = 2,
	ESplitStormProxyPhase__ESplitStormProxyPhase_MAX3                                = 3
};

