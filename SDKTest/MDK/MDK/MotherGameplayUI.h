
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
	SMember(FEventMessageTag)                          AttachedMessageTag                                          OFFSET(get<T>, {0x310, 4, 0, 0})
	CMember(UScriptStruct*)                            AttachedMessageType                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FEventMessageTag)                          DetachedMessageTag                                          OFFSET(get<T>, {0x320, 4, 0, 0})
	CMember(UScriptStruct*)                            DetachedMessageType                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FEventMessageTag)                          SetMarkerPositionMessageTag                                 OFFSET(get<T>, {0x330, 4, 0, 0})
	CMember(UScriptStruct*)                            SetMarkerPositionMessageType                                OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FName)                                     SetMarkerPositionMessagePropertyName                        OFFSET(get<T>, {0x340, 4, 0, 0})
	SMember(FEventMessageTag)                          TargetDamagedMessageTag                                     OFFSET(get<T>, {0x344, 4, 0, 0})
	CMember(UScriptStruct*)                            TargetDamagedMessageType                                    OFFSET(get<T>, {0x348, 8, 0, 0})
};



	/// Functions
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged
	// void OnTargetDamaged();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition
	// void OnSetMarkerPosition(float MarkerPosition);                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached
	// void OnParasiteDetached();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached
	// void OnParasiteAttached();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
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
	CMember(UFortKeybindWidget*)                       Keybind_ActivateAction                                      OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_CycleCategoryAction                                 OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_CyclePropAction                                     OFFSET(get<T>, {0x338, 8, 0, 0})
};



	/// Functions
	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged
	// void OnPropIndexChanged(FText& CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged
	// void OnPropActivationChanged(bool Activated);                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
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
	SMember(FGameplayTag)                              GravyGoblinTag                                              OFFSET(get<T>, {0x80, 4, 0, 0})
};

