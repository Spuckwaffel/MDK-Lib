/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VerseFortniteGameplayAbilities.

/// Class /Script/VerseFortniteGameplayAbilities.FortAnimNotify_UEFNGameplayTag
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortAnimNotify_UEFNGameplayTag : public UFortAnimNotify_GameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim
/// Size: 0x0010 (0x000B28 - 0x000B38)
class UFortGameplayAbility_PlayAnim : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2872;

public:
	CMember(UAnimMontage*)                             MontageToPlay                                               ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0xB30, 4, 0, 0})
};

/// Class /Script/VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnimAndApplyEffect
/// Size: 0x0018 (0x000B38 - 0x000B50)
class UFortGameplayAbility_PlayAnimAndApplyEffect : public UFortGameplayAbility_PlayAnim
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	DMember(bool)                                      bWaitForAnimNotify                                          ___ OFFSET(get<bool>, {0xB38, 1, 0, 0})
	CMember(UClass*)                                   EffectToApply                                               ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	CMember(UTargetingPreset*)                         TargetingPreset                                             ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
};

/// Class /Script/VerseFortniteGameplayAbilities.VerseFortniteAbilityComponentBase
/// Size: 0x0008 (0x000088 - 0x000090)
class UVerseFortniteAbilityComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

