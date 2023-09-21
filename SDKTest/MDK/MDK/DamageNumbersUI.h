
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers
/// Size: 0x01B8 (0x0002D0 - 0x000488)
class UCommonUserWidget_DamageNumbers : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FVector)                                   WorldSpacePos                                               OFFSET(get<T>, {0x2E0, 24, 0, 0})
	SMember(FGameplayTag)                              CheckAnimalTag                                              OFFSET(get<T>, {0x2F8, 4, 0, 0})
	DMember(float)                                     Damage                                                      OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     AdditionalVerticalScreenOffset                              OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(double)                                    SpawnTime                                                   OFFSET(get<double>, {0x308, 8, 0, 0})
	SMember(FVector2D)                                 DamageNumberScaleVector                                     OFFSET(get<T>, {0x310, 16, 0, 0})
	SMember(FVector2D)                                 ScreenSpaceOffsetFromHitActor                               OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FVector2D)                                 InverseHUDScaleVector                                       OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(AActor*)                                   HitActor                                                    OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(bool)                                      bHitAnimal                                                  OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(bool)                                      bHitVehicle                                                 OFFSET(get<bool>, {0x349, 1, 0, 0})
	DMember(bool)                                      bIsPlayingCritAnimation                                     OFFSET(get<bool>, {0x34A, 1, 0, 0})
	SMember(FLinearColor)                              HitColor                                                    OFFSET(get<T>, {0x34C, 16, 0, 0})
	SMember(FLinearColor)                              VehicleColor                                                OFFSET(get<T>, {0x35C, 16, 0, 0})
	SMember(FLinearColor)                              CritColor                                                   OFFSET(get<T>, {0x36C, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor                                                 OFFSET(get<T>, {0x37C, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor                                                 OFFSET(get<T>, {0x38C, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Text                                              OFFSET(get<T>, {0x39C, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Text                                            OFFSET(get<T>, {0x3AC, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor_InnerStroke                                     OFFSET(get<T>, {0x3BC, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_InnerStroke                                     OFFSET(get<T>, {0x3CC, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_InnerStroke                                       OFFSET(get<T>, {0x3DC, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleColor                                      OFFSET(get<T>, {0x3EC, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldColor                                       OFFSET(get<T>, {0x3FC, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline1Color                               OFFSET(get<T>, {0x40C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline2Color                               OFFSET(get<T>, {0x41C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline1Color                              OFFSET(get<T>, {0x42C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline2Color                              OFFSET(get<T>, {0x43C, 16, 0, 0})
	CMember(UWidgetAnimation*)                         OnDamage                                                    OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnDamage_Crit                                               OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Number                                                 OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Number_Stroke                                          OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   DamageTypeCrit                                              OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   DamageTypeIcon                                              OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UImage*)                                   DamageTypeIcon_EMP                                          OFFSET(get<T>, {0x480, 8, 0, 0})


	/// Functions
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.UpdateScreenSpacePosition
	// void UpdateScreenSpacePosition();                                                                                        // [0x9b06988] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.Reset
	// void Reset();                                                                                                            // [0x9b0692c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bIsOvershield);                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, AActor* InActor, bool bInShield, bool bInCrit, FVector InWorldSpacePos, bool bInEMP); // [0x9b05dc0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortUserWidget_DamageNumbers
/// Size: 0x0088 (0x0002B8 - 0x000340)
class UFortUserWidget_DamageNumbers : public UFortUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(double)                                    VerticalShiftForNewDamage                                   OFFSET(get<double>, {0x2B8, 8, 0, 0})
	DMember(double)                                    AccumulationTime                                            OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(int32_t)                                   MaxNumberCount                                              OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocationDBNO                                  OFFSET(get<T>, {0x2D0, 24, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocation                                      OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(AFortPlayerPawn*)                          BoundPawn                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FGameplayTag)                              HideDamageNumbersTag                                        OFFSET(get<T>, {0x308, 4, 0, 0})
	SMember(FGameplayTag)                              DamageAtLocTag                                              OFFSET(get<T>, {0x30C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToNotDisplayDmgNumbersOnSpecificActors                  OFFSET(get<T>, {0x310, 32, 0, 0})
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_Numbers                                     OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FGameplayTag)                              DamageCueEMPTag                                             OFFSET(get<T>, {0x338, 4, 0, 0})
	DMember(bool)                                      bPrecreateDamageNumberEntries                               OFFSET(get<bool>, {0x33C, 1, 0, 0})


	/// Functions
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.UpdateBinding
	// void UpdateBinding();                                                                                                    // [0x9b06974] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnShieldBreak
	// void OnShieldBreak(bool bInOverShield);                                                                                  // [0x9b068ac] Final|Native|Protected 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnPawnSet
	// void OnPawnSet();                                                                                                        // [0x9b0684c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageNumberFinishedAnimating
	// void OnDamageNumberFinishedAnimating(UCommonUserWidget_DamageNumbers* Widget);                                           // [0x9b06540] Final|Native|Protected 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.OnDamageDealt
	// void OnDamageDealt(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, AActor* HitActor, FVector HitLocation, FGameplayTagContainer Tags); // [0x9b06150] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/DamageNumbersUI.FortUserWidget_DamageNumbers.ClearBinding
	// void ClearBinding();                                                                                                     // [0x9b05dac] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_DamageNumbers : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

