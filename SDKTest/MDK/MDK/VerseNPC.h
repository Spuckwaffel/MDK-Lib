
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: EntityCore
/// dependency: VerseAIBase
/// dependency: VerseFortnite

/// Class /Script/VerseNPC.NPCCharacterModifier_Perception
/// Size: 0x0028 (0x000028 - 0x000050)
class UNPCCharacterModifier_Perception : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bOverrideSightSettings                                      OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bEnableSightSettings                                        OFFSET(get<bool>, {0x28, 1, 1, 1})
	DMember(bool)                                      bOverrideHearingSettings                                    OFFSET(get<bool>, {0x28, 1, 1, 2})
	DMember(bool)                                      bEnableHearingSettings                                      OFFSET(get<bool>, {0x28, 1, 1, 3})
	DMember(bool)                                      bOverrideTouchSettings                                      OFFSET(get<bool>, {0x28, 1, 1, 4})
	DMember(bool)                                      bEnableTouchSettings                                        OFFSET(get<bool>, {0x28, 1, 1, 5})
	DMember(bool)                                      bOverrideDamageSettings                                     OFFSET(get<bool>, {0x28, 1, 1, 6})
	DMember(bool)                                      bEnableDamageSettings                                       OFFSET(get<bool>, {0x28, 1, 1, 7})
	CMember(UAISenseConfig_Sight*)                     SightPerceptionSettings                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UAISenseConfig_Hearing*)                   HearingPerceptionSettings                                   OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UAISenseConfig_Touch*)                     TouchPerceptionSettings                                     OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UAISenseConfig_Damage*)                    DamagePerceptionSettings                                    OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/VerseNPC.CharacterModifier_GuardPerception
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UCharacterModifier_GuardPerception : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bOverrideSightSettings                                      OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bEnableSightSettings                                        OFFSET(get<bool>, {0x28, 1, 1, 1})
	DMember(bool)                                      bOverrideHearingSettings                                    OFFSET(get<bool>, {0x28, 1, 1, 2})
	DMember(bool)                                      bEnableHearingSettings                                      OFFSET(get<bool>, {0x28, 1, 1, 3})
	DMember(bool)                                      bOverrideTouchSettings                                      OFFSET(get<bool>, {0x28, 1, 1, 4})
	DMember(bool)                                      bEnableTouchSettings                                        OFFSET(get<bool>, {0x28, 1, 1, 5})
	DMember(bool)                                      bOverrideDamageSettings                                     OFFSET(get<bool>, {0x28, 1, 1, 6})
	DMember(bool)                                      bEnableDamageSettings                                       OFFSET(get<bool>, {0x28, 1, 1, 7})
	CMember(UAISenseConfig_Sight*)                     SightPerceptionSettings                                     OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(UAISenseConfig_Hearing*)                   HearingPerceptionSettings                                   OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(UAISenseConfig_Touch*)                     TouchPerceptionSettings                                     OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(UAISenseConfig_Damage*)                    DamagePerceptionSettings                                    OFFSET(get<T>, {0x90, 32, 0, 0})
};

/// Class /Script/VerseNPC.InventoryComponentBase
/// Size: 0x0040 (0x000058 - 0x000098)
class UInventoryComponentBase : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(AFortInventory*)                           CachedFortInventory                                         OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(AFortPawn*)                                CachedFortPawn                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UBlackboardComponent*)                     CachedBlackboardComponent                                   OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/VerseNPC.LeashComponentBase
/// Size: 0x0000 (0x000070 - 0x000070)
class ULeashComponentBase : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/VerseNPC.NPCPerceptionComponentBase
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UNPCPerceptionComponentBase : public UAIPerceptionComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

