
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: NetCore

/// Class /Script/KnockbackRuntime.FortAthenaMutator_Knockback
/// Size: 0x0240 (0x000338 - 0x000578)
class AFortAthenaMutator_Knockback : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	DMember(bool)                                      bStorePlayerKnockbackData                                   ___ OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      bReplicatePlayerKnockbackData                               ___ OFFSET(get<bool>, {0x339, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerKnockbackDataChanged                                ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FKnockbackMutatorDataArray)                AllPlayersKnockbackData                                     ___ OFFSET(get<T>, {0x350, 288, 0, 0})
	SMember(FScalableFloat)                            bDisplayKnockbackDamageNumbersAsPercentage                  ___ OFFSET(get<T>, {0x470, 40, 0, 0})
	SMember(FScalableFloat)                            ConvertToKnockbackDamageMultiplier                          ___ OFFSET(get<T>, {0x498, 40, 0, 0})
	SMember(FScalableFloat)                            PercentDamageLowMaxThreshold                                ___ OFFSET(get<T>, {0x4C0, 40, 0, 0})
	SMember(FScalableFloat)                            PercentDamageMediumMaxThreshold                             ___ OFFSET(get<T>, {0x4E8, 40, 0, 0})
	DMember(float)                                     KnockbackMultiplierInitialValue                             ___ OFFSET(get<float>, {0x510, 4, 0, 0})
};

/// Class /Script/KnockbackRuntime.FortGameplayAbility_KnockbackMutator
/// Size: 0x0010 (0x000B28 - 0x000B38)
class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2872;

public:
	CMember(AFortAthenaMutator_Knockback*)             CachedMutator                                               ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   MutatorClassToGet                                           ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
};

/// Struct /Script/KnockbackRuntime.KnockbackMutatorData
/// Size: 0x0014 (0x00000C - 0x000020)
class FKnockbackMutatorData : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(APawn*)                                    Pawn                                                        ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     KnockbackMultiplier                                         ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/KnockbackRuntime.KnockbackMutatorDataArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FKnockbackMutatorDataArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FKnockbackMutatorData>)             Entries                                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

