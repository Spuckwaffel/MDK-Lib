
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
/// Size: 0x00A0 (0x000328 - 0x0003C8)
class UAvocadoEaterHealthBarWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FEventMessageTag)                          AttachedMessageTag                                          OFFSET(getStruct<T>, {0x328, 4, 0, 0})
	CMember(UScriptStruct*)                            AttachedMessageType                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FEventMessageTag)                          DetachedMessageTag                                          OFFSET(getStruct<T>, {0x338, 4, 0, 0})
	CMember(UScriptStruct*)                            DetachedMessageType                                         OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FEventMessageTag)                          SetMarkerPositionMessageTag                                 OFFSET(getStruct<T>, {0x348, 4, 0, 0})
	CMember(UScriptStruct*)                            SetMarkerPositionMessageType                                OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(FName)                                     SetMarkerPositionMessagePropertyName                        OFFSET(getStruct<T>, {0x358, 4, 0, 0})
	SMember(FEventMessageTag)                          TargetDamagedMessageTag                                     OFFSET(getStruct<T>, {0x35C, 4, 0, 0})
	CMember(UScriptStruct*)                            TargetDamagedMessageType                                    OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged
	// void OnTargetDamaged();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnSetMarkerPosition
	// void OnSetMarkerPosition(float MarkerPosition);                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteDetached
	// void OnParasiteDetached();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MotherGameplayUI.AvocadoEaterHealthBarWidget.OnParasiteAttached
	// void OnParasiteAttached();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
/// Size: 0x0020 (0x000340 - 0x000360)
class UFortGravyGoblinReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
/// Size: 0x0000 (0x000340 - 0x000340)
class UFortLlamaRoasterReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
/// Size: 0x0060 (0x000340 - 0x0003A0)
class UFortPaddleGingerReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(UFortKeybindWidget*)                       Keybind_ActivateAction                                      OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_CycleCategoryAction                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_CyclePropAction                                     OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged
	// void OnPropIndexChanged(FText& CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged
	// void OnPropActivationChanged(bool Activated);                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/MotherGameplayUI.FortReactorGradeReticleExtensionWidget
/// Size: 0x0000 (0x000340 - 0x000340)
class UFortReactorGradeReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Script/MotherGameplayUI.FortMobileActionBBE_GravyGoblinRotate
/// Size: 0x0028 (0x000080 - 0x0000A8)
class UFortMobileActionBBE_GravyGoblinRotate : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayTag)                              GravyGoblinTag                                              OFFSET(getStruct<T>, {0x80, 4, 0, 0})
};

