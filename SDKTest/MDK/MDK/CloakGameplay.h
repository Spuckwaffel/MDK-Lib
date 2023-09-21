
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak
/// Size: 0x0078 (0x000990 - 0x000A08)
class AFortGameCueNotifyLoop_Cloak : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	CMember(AFortPlayerPawn*)                          TargetPlayer                                                OFFSET(get<T>, {0x990, 8, 0, 0})
	DMember(float)                                     VisibilityLevel                                             OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     StationaryVisMult                                           OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     MaxSpeedVisMult                                             OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     SpeedForMaxVis                                              OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     VisibilityMinFriendly                                       OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     VisibilityMinNonfriendly                                    OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     VisibilityLevelChangeRate                                   OFFSET(get<float>, {0x9B0, 4, 0, 0})
	CMember(TMap<FName, FFortGameCueCloakModifier>)    CloakModifiersByNameMap                                     OFFSET(get<T>, {0x9B8, 80, 0, 0})


	/// Functions
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.TickVisibilityLevel
	// float TickVisibilityLevel(float DeltaSeconds);                                                                           // [0x9a0a4e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierEnabled
	// bool SetModifierEnabled(FName& ModifierName, bool bNewEnabled);                                                          // [0x9a0a398] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.SetModifierCanBeEnabled
	// bool SetModifierCanBeEnabled(FName& ModifierName, bool bNewCanBeEnabled);                                                // [0x9a0a250] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CloakGameplay.FortGameCueNotifyLoop_Cloak.GetCurrentModifierValues
	// bool GetCurrentModifierValues(float& OutVisibilityMultiplier, float& OutVisibilityAddition, FName& ModifierName);        // [0x9a0a124] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CloakGameplay.FortGameCueCloakModifier
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FFortGameCueCloakModifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FScalableFloat)                            bCanBeEnabled                                               OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            VisibilityModifierMultiplicative                            OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            VisibilityModifierAdditive                                  OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            AlphaTimeToEnabled                                          OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            AlphaTimeToDisabled                                         OFFSET(get<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bCurrentlyEnabled                                           OFFSET(get<bool>, {0xC8, 1, 1, 0})
	DMember(float)                                     CurrentAlpha                                                OFFSET(get<float>, {0xCC, 4, 0, 0})
};

