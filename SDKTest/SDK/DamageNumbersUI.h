/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DamageNumbersUI.

/// Class /Script/DamageNumbersUI.CommonUserWidget_DamageNumbers
/// Size: 0x01B8 (0x0002D0 - 0x000488)
class UCommonUserWidget_DamageNumbers : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FVector)                                   WorldSpacePos                                               ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
	SMember(FGameplayTag)                              CheckAnimalTag                                              ___ OFFSET(get<T>, {0x2F8, 4, 0, 0})
	DMember(float)                                     Damage                                                      ___ OFFSET(get<float>, {0x2FC, 4, 0, 0})
	DMember(float)                                     AdditionalVerticalScreenOffset                              ___ OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(double)                                    SpawnTime                                                   ___ OFFSET(get<double>, {0x308, 8, 0, 0})
	SMember(FVector2D)                                 DamageNumberScaleVector                                     ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	SMember(FVector2D)                                 ScreenSpaceOffsetFromHitActor                               ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FVector2D)                                 InverseHUDScaleVector                                       ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(AActor*)                                   HitActor                                                    ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(bool)                                      bHitAnimal                                                  ___ OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(bool)                                      bHitVehicle                                                 ___ OFFSET(get<bool>, {0x349, 1, 0, 0})
	DMember(bool)                                      bIsPlayingCritAnimation                                     ___ OFFSET(get<bool>, {0x34A, 1, 0, 0})
	SMember(FLinearColor)                              HitColor                                                    ___ OFFSET(get<T>, {0x34C, 16, 0, 0})
	SMember(FLinearColor)                              VehicleColor                                                ___ OFFSET(get<T>, {0x35C, 16, 0, 0})
	SMember(FLinearColor)                              CritColor                                                   ___ OFFSET(get<T>, {0x36C, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor                                                 ___ OFFSET(get<T>, {0x37C, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor                                                 ___ OFFSET(get<T>, {0x38C, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Text                                              ___ OFFSET(get<T>, {0x39C, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Text                                            ___ OFFSET(get<T>, {0x3AC, 16, 0, 0})
	SMember(FLinearColor)                              HealthColor_InnerStroke                                     ___ OFFSET(get<T>, {0x3BC, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_InnerStroke                                     ___ OFFSET(get<T>, {0x3CC, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_InnerStroke                                       ___ OFFSET(get<T>, {0x3DC, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleColor                                      ___ OFFSET(get<T>, {0x3EC, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldColor                                       ___ OFFSET(get<T>, {0x3FC, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline1Color                               ___ OFFSET(get<T>, {0x40C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconShieldOutline2Color                               ___ OFFSET(get<T>, {0x41C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline1Color                              ___ OFFSET(get<T>, {0x42C, 16, 0, 0})
	SMember(FLinearColor)                              DamageIconVehicleOutline2Color                              ___ OFFSET(get<T>, {0x43C, 16, 0, 0})
	CMember(UWidgetAnimation*)                         OnDamage                                                    ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnDamage_Crit                                               ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Number                                                 ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Number_Stroke                                          ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   DamageTypeCrit                                              ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   DamageTypeIcon                                              ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UImage*)                                   DamageTypeIcon_EMP                                          ___ OFFSET(get<T>, {0x480, 8, 0, 0})
};

/// Class /Script/DamageNumbersUI.FortUserWidget_DamageNumbers
/// Size: 0x0088 (0x0002B8 - 0x000340)
class UFortUserWidget_DamageNumbers : public UFortUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(double)                                    VerticalShiftForNewDamage                                   ___ OFFSET(get<double>, {0x2B8, 8, 0, 0})
	DMember(double)                                    AccumulationTime                                            ___ OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(int32_t)                                   MaxNumberCount                                              ___ OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocationDBNO                                  ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	SMember(FVector)                                   OffsetFromPawnLocation                                      ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(AFortPlayerPawn*)                          BoundPawn                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FGameplayTag)                              HideDamageNumbersTag                                        ___ OFFSET(get<T>, {0x308, 4, 0, 0})
	SMember(FGameplayTag)                              DamageAtLocTag                                              ___ OFFSET(get<T>, {0x30C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToNotDisplayDmgNumbersOnSpecificActors                  ___ OFFSET(get<T>, {0x310, 32, 0, 0})
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_Numbers                                     ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FGameplayTag)                              DamageCueEMPTag                                             ___ OFFSET(get<T>, {0x338, 4, 0, 0})
	DMember(bool)                                      bPrecreateDamageNumberEntries                               ___ OFFSET(get<bool>, {0x33C, 1, 0, 0})
};

/// Class /Script/DamageNumbersUI.FortGameSettingRegistryExtension_DamageNumbers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_DamageNumbers : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

