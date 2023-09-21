
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive
/// Size: 0x00C8 (0x000B28 - 0x000BF0)
class UFortGameplayAbility_AppleSunSmall_Passive : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          PlayerPawn                                                  OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) CharacterMovementComponent                               OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FScalableFloat)                            UpdateIntervalRow                                           OFFSET(get<T>, {0xB38, 40, 0, 0})
	CMember(UClass*)                                   CanCrashpadGameplayEffectClass                              OFFSET(get<T>, {0xB60, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CanCrashpadGameplayTags                                     OFFSET(get<T>, {0xB68, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GliderRedeployTags                                          OFFSET(get<T>, {0xB88, 32, 0, 0})
	DMember(float)                                     UpdateInterval                                              OFFSET(get<float>, {0xBA8, 4, 0, 0})
	DMember(float)                                     MaxFallVelocity                                             OFFSET(get<float>, {0xBAC, 4, 0, 0})
	DMember(float)                                     CloseToGroundThreshold                                      OFFSET(get<float>, {0xBB0, 4, 0, 0})
	DMember(float)                                     GroundTraceMaxDistance                                      OFFSET(get<float>, {0xBB4, 4, 0, 0})
	DMember(float)                                     MaxVelocityJumpPromt                                        OFFSET(get<float>, {0xBB8, 4, 0, 0})
	DMember(float)                                     DefaultMinVelocityJumpPromt                                 OFFSET(get<float>, {0xBBC, 4, 0, 0})
	DMember(float)                                     SwimmingMinVelocityJumpPromt                                OFFSET(get<float>, {0xBC0, 4, 0, 0})
	DMember(float)                                     CurrentMinVelocityJumpPrompt                                OFFSET(get<float>, {0xBC4, 4, 0, 0})
	DMember(float)                                     DefaultMinTimeSinceGroundedForJumpPrompt                    OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     SwimmingMinTimeSinceGroundedForJumpPrompt                   OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     CurrentMinTimeSinceGroundedForJumpPrompt                    OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     TraceDistanceToGround                                       OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(float)                                     TimeSinceGrounded                                           OFFSET(get<float>, {0xBD8, 4, 0, 0})
	DMember(bool)                                      bCanCrashpadByJumping                                       OFFSET(get<bool>, {0xBDC, 1, 0, 0})
	DMember(bool)                                      bPreviousCanCrashpad                                        OFFSET(get<bool>, {0xBDD, 1, 0, 0})
	DMember(bool)                                      bIsCloseToGround                                            OFFSET(get<bool>, {0xBDE, 1, 0, 0})
	DMember(bool)                                      bIsClambering                                               OFFSET(get<bool>, {0xBDF, 1, 0, 0})
	DMember(bool)                                      bBlockedTag                                                 OFFSET(get<bool>, {0xBE0, 1, 0, 0})
	DMember(bool)                                      bGliderTag                                                  OFFSET(get<bool>, {0xBE1, 1, 0, 0})


	/// Functions
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateIsCloseToGround
	// void UpdateIsCloseToGround();                                                                                            // [0x99d1514] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.UpdateCanCrashpad
	// void UpdateCanCrashpad();                                                                                                // [0x99d1500] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HopscotchWeaponsGameplayRuntime.FortGameplayAbility_AppleSunSmall_Passive.OnPlayerMovementModeChanged
	// void OnPlayerMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x99d1220] Final|Native|Private 
};

