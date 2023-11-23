
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AttachableWheelsRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/WheelGrenadeRuntime.WheelGrenadeWheel
/// Size: 0x0018 (0x000320 - 0x000338)
class AWheelGrenadeWheel : public AAttachableWheel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	DMember(float)                                     MaxHealth                                                   OFFSET(get<float>, {0x328, 4, 0, 0})
	CMember(UFortAbilitySystemComponent*)              AbilitySystemComponent                                      OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.HandleOutOfHealth
	// void HandleOutOfHealth(float InDamage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& InEffectContext, AController* InEventInstigator, AActor* InDamageCauser); // [0xa2f3540] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.HandleDamaged
	// void HandleDamaged(float Damage, FGameplayTagContainer& InTags, FGameplayEffectContextHandle& EffectContext, AController* EventInstigator, AActor* DamageCauser); // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.GetMaxHealth
	// float GetMaxHealth();                                                                                                    // [0xa2f3500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/WheelGrenadeRuntime.WheelGrenadeWheel.GetHealth
	// float GetHealth();                                                                                                       // [0xa2f34c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

