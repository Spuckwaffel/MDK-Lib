
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget
/// Size: 0x00A0 (0x000310 - 0x0003B0)
class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FEventMessageTag)                          AttachedMessageTag                                          ___ OFFSET(get<T>, {0x310, 4, 0, 0})
	CMember(UScriptStruct*)                            AttachedMessageType                                         ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FEventMessageTag)                          DetachedMessageTag                                          ___ OFFSET(get<T>, {0x320, 4, 0, 0})
	CMember(UScriptStruct*)                            DetachedMessageType                                         ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FEventMessageTag)                          SetMarkerPositionMessageTag                                 ___ OFFSET(get<T>, {0x330, 4, 0, 0})
	CMember(UScriptStruct*)                            SetMarkerPositionMessageType                                ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FName)                                     SetMarkerPositionMessagePropertyName                        ___ OFFSET(get<T>, {0x340, 4, 0, 0})
	SMember(FEventMessageTag)                          TargetDamagedMessageTag                                     ___ OFFSET(get<T>, {0x344, 4, 0, 0})
	CMember(UScriptStruct*)                            TargetDamagedMessageType                                    ___ OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
/// Size: 0x0020 (0x000328 - 0x000348)
class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Script/MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UFortLlamaRoasterReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
/// Size: 0x0060 (0x000328 - 0x000388)
class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(UFortKeybindWidget*)                       Keybind_ActivateAction                                      ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_CycleCategoryAction                                 ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_CyclePropAction                                     ___ OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget
/// Size: 0x0000 (0x000328 - 0x000328)
class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayTag)                              GravyGoblinTag                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
};

