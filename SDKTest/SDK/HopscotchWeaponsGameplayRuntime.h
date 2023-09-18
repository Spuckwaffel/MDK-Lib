/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HopscotchWeaponsGameplayRuntime.

/// Class /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
/// Size: 0x00C8 (0x000B28 - 0x000BF0)
class UFortGameplayAbility_AppleSunSmall_Passive : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) CharacterMovementComponent                               ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FScalableFloat)                            UpdateIntervalRow                                           ___ OFFSET(get<T>, {0xB38, 40, 0, 0})
	CMember(UClass*)                                   CanCrashpadGameplayEffectClass                              ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CanCrashpadGameplayTags                                     ___ OFFSET(get<T>, {0xB68, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GliderRedeployTags                                          ___ OFFSET(get<T>, {0xB88, 32, 0, 0})
	DMember(float)                                     UpdateInterval                                              ___ OFFSET(get<float>, {0xBA8, 4, 0, 0})
	DMember(float)                                     MaxFallVelocity                                             ___ OFFSET(get<float>, {0xBAC, 4, 0, 0})
	DMember(float)                                     CloseToGroundThreshold                                      ___ OFFSET(get<float>, {0xBB0, 4, 0, 0})
	DMember(float)                                     GroundTraceMaxDistance                                      ___ OFFSET(get<float>, {0xBB4, 4, 0, 0})
	DMember(float)                                     MaxVelocityJumpPromt                                        ___ OFFSET(get<float>, {0xBB8, 4, 0, 0})
	DMember(float)                                     DefaultMinVelocityJumpPromt                                 ___ OFFSET(get<float>, {0xBBC, 4, 0, 0})
	DMember(float)                                     SwimmingMinVelocityJumpPromt                                ___ OFFSET(get<float>, {0xBC0, 4, 0, 0})
	DMember(float)                                     CurrentMinVelocityJumpPrompt                                ___ OFFSET(get<float>, {0xBC4, 4, 0, 0})
	DMember(float)                                     DefaultMinTimeSinceGroundedForJumpPrompt                    ___ OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     SwimmingMinTimeSinceGroundedForJumpPrompt                   ___ OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     CurrentMinTimeSinceGroundedForJumpPrompt                    ___ OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     TraceDistanceToGround                                       ___ OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(float)                                     TimeSinceGrounded                                           ___ OFFSET(get<float>, {0xBD8, 4, 0, 0})
	DMember(bool)                                      bCanCrashpadByJumping                                       ___ OFFSET(get<bool>, {0xBDC, 1, 0, 0})
	DMember(bool)                                      bPreviousCanCrashpad                                        ___ OFFSET(get<bool>, {0xBDD, 1, 0, 0})
	DMember(bool)                                      bIsCloseToGround                                            ___ OFFSET(get<bool>, {0xBDE, 1, 0, 0})
	DMember(bool)                                      bIsClambering                                               ___ OFFSET(get<bool>, {0xBDF, 1, 0, 0})
	DMember(bool)                                      bBlockedTag                                                 ___ OFFSET(get<bool>, {0xBE0, 1, 0, 0})
	DMember(bool)                                      bGliderTag                                                  ___ OFFSET(get<bool>, {0xBE1, 1, 0, 0})
};

