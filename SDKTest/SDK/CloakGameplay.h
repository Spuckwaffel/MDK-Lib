/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CloakGameplay.

/// Struct /Script/CloakGameplay.FortGameCueCloakModifier
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FFortGameCueCloakModifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FScalableFloat)                            bCanBeEnabled                                               ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            VisibilityModifierMultiplicative                            ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            VisibilityModifierAdditive                                  ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            AlphaTimeToEnabled                                          ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            AlphaTimeToDisabled                                         ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bCurrentlyEnabled                                           ___ OFFSET(get<bool>, {0xC8, 1, 1, 0})
	DMember(float)                                     CurrentAlpha                                                ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
};

/// Class /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak
/// Size: 0x0078 (0x000990 - 0x000A08)
class AFortGameCueNotifyLoop_Cloak : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	CMember(AFortPlayerPawn*)                          TargetPlayer                                                ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	DMember(float)                                     VisibilityLevel                                             ___ OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     StationaryVisMult                                           ___ OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     MaxSpeedVisMult                                             ___ OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     SpeedForMaxVis                                              ___ OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     VisibilityMinFriendly                                       ___ OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     VisibilityMinNonfriendly                                    ___ OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     VisibilityLevelChangeRate                                   ___ OFFSET(get<float>, {0x9B0, 4, 0, 0})
	CMember(TMap<FName, FFortGameCueCloakModifier>)    CloakModifiersByNameMap                                     ___ OFFSET(get<T>, {0x9B8, 80, 0, 0})
};

