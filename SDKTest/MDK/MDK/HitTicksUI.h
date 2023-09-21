
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/HitTicksUI.FortUserWidget_HitTicks
/// Size: 0x0180 (0x0002B8 - 0x000438)
class UFortUserWidget_HitTicks : public UFortUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	DMember(bool)                                      bShield                                                     OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(double)                                    HitTime                                                     OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(double)                                    ShieldHitTime                                               OFFSET(get<double>, {0x2C8, 8, 0, 0})
	DMember(double)                                    TimeSinceHit                                                OFFSET(get<double>, {0x2D0, 8, 0, 0})
	DMember(double)                                    HitInterval                                                 OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    ShieldIconMaxAlpha                                          OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    FadeDuration                                                OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    AccumulatedDamage                                           OFFSET(get<double>, {0x2F0, 8, 0, 0})
	CMember(UImage*)                                   HitMarker                                                   OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UImage*)                                   ShieldIcon                                                  OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(EHitFeedbackMode)                          CurrentHitFeedbackMode                                      OFFSET(get<T>, {0x308, 1, 0, 0})
	DMember(bool)                                      bUseNative                                                  OFFSET(get<bool>, {0x309, 1, 0, 0})
	CMember(AActor*)                                   PrevHitPawn                                                 OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(double)                                    Damage                                                      OFFSET(get<double>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Elimination2                                           OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_ShieldCrack                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FLinearColor)                              BaseColor_BG1                                               OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_BG1                                             OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_BG1                                               OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_BG1                                               OFFSET(get<T>, {0x360, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_BG2                                               OFFSET(get<T>, {0x370, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_BG2                                             OFFSET(get<T>, {0x380, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_BG2                                               OFFSET(get<T>, {0x390, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_BG2                                               OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_Outline1                                          OFFSET(get<T>, {0x3B0, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Outline1                                        OFFSET(get<T>, {0x3C0, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Outline1                                          OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_Outline1                                          OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_Outline2                                          OFFSET(get<T>, {0x3F0, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Outline2                                        OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Outline2                                          OFFSET(get<T>, {0x410, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_Outline2                                          OFFSET(get<T>, {0x420, 16, 0, 0})
	SMember(FGameplayTag)                              UseNativeMarkerTag                                          OFFSET(get<T>, {0x430, 4, 0, 0})


	/// Functions
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.UpdateTickMarkerOpacity
	// void UpdateTickMarkerOpacity(float NewOpacity);                                                                          // [0x9bbe2fc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnShieldBreak
	// void OnShieldBreak(bool bInOverShield);                                                                                  // [0x9bbe27c] Final|Native|Protected 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnReticleSettingsChanged
	// void OnReticleSettingsChanged();                                                                                         // [0x9bbe248] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnPawnSet
	// void OnPawnSet();                                                                                                        // [0x9bbe234] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.OnDisplayHitNotify
	// void OnDisplayHitNotify(double InDamage, bool bInCritical, bool bInFatal, bool bInShield, AActor* InPawn, FVector HitLocation, FGameplayTagContainer Tags); // [0x9bbdd10] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/HitTicksUI.FortUserWidget_HitTicks.HudScaleChanged
	// void HudScaleChanged();                                                                                                  // [0x9bbdcfc] Final|Native|Protected|BlueprintCallable 
};

