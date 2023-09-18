/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HitTicksUI.

/// Class /Script/HitTicksUI.FortUserWidget_HitTicks
/// Size: 0x0180 (0x0002B8 - 0x000438)
class UFortUserWidget_HitTicks : public UFortUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	DMember(bool)                                      bShield                                                     ___ OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(double)                                    HitTime                                                     ___ OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(double)                                    ShieldHitTime                                               ___ OFFSET(get<double>, {0x2C8, 8, 0, 0})
	DMember(double)                                    TimeSinceHit                                                ___ OFFSET(get<double>, {0x2D0, 8, 0, 0})
	DMember(double)                                    HitInterval                                                 ___ OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    ShieldIconMaxAlpha                                          ___ OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    FadeDuration                                                ___ OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    AccumulatedDamage                                           ___ OFFSET(get<double>, {0x2F0, 8, 0, 0})
	CMember(UImage*)                                   HitMarker                                                   ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UImage*)                                   ShieldIcon                                                  ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(EHitFeedbackMode)                          CurrentHitFeedbackMode                                      ___ OFFSET(get<T>, {0x308, 1, 0, 0})
	DMember(bool)                                      bUseNative                                                  ___ OFFSET(get<bool>, {0x309, 1, 0, 0})
	CMember(AActor*)                                   PrevHitPawn                                                 ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(double)                                    Damage                                                      ___ OFFSET(get<double>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Elimination2                                           ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_ShieldCrack                                            ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FLinearColor)                              BaseColor_BG1                                               ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_BG1                                             ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_BG1                                               ___ OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_BG1                                               ___ OFFSET(get<T>, {0x360, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_BG2                                               ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_BG2                                             ___ OFFSET(get<T>, {0x380, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_BG2                                               ___ OFFSET(get<T>, {0x390, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_BG2                                               ___ OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_Outline1                                          ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Outline1                                        ___ OFFSET(get<T>, {0x3C0, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Outline1                                          ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_Outline1                                          ___ OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FLinearColor)                              BaseColor_Outline2                                          ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	SMember(FLinearColor)                              ShieldColor_Outline2                                        ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FLinearColor)                              CritColor_Outline2                                          ___ OFFSET(get<T>, {0x410, 16, 0, 0})
	SMember(FLinearColor)                              ElimColor_Outline2                                          ___ OFFSET(get<T>, {0x420, 16, 0, 0})
	SMember(FGameplayTag)                              UseNativeMarkerTag                                          ___ OFFSET(get<T>, {0x430, 4, 0, 0})
};

