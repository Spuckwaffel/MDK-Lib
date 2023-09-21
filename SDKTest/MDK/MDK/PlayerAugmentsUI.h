
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker
/// Size: 0x0010 (0x000048 - 0x000058)
class UFortMobileButtonBehaviorComponent_AugmentsListIconPicker : public UFortMobileButtonBehaviorComponent_IconPicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bCachedIsInInventoryView                                    ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(UPaperSprite*)                             ListViewSprite                                              ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility
/// Size: 0x0008 (0x000048 - 0x000050)
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility : public UFortMobileButtonBehaviorComponent_Visibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap
/// Size: 0x0008 (0x000050 - 0x000058)
class UFortMobileButtonBehaviorComponent_AugmentsListVisibility_Swap : public UFortMobileButtonBehaviorComponent_AugmentsListVisibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDTimerWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortPlayerAugmentHUDTimerWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget
/// Size: 0x0058 (0x000310 - 0x000368)
class UFortPlayerAugmentHUDSelectionTimerWidget : public UFortPlayerAugmentHUDTimerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	DMember(bool)                                      bIsAugmentReadyVisible                                      ___ OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bIsCountdownActive                                          ___ OFFSET(get<bool>, {0x311, 1, 0, 0})
	DMember(bool)                                      bIsOffline                                                  ___ OFFSET(get<bool>, {0x312, 1, 0, 0})
	SMember(FTimerHandle)                              HideTimerHandle                                             ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 TimerProgressDMI                                            ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	SMember(FScalableFloat)                            CountdownStartTimeHF                                        ___ OFFSET(get<T>, {0x328, 40, 0, 0})
	CMember(UCommonTextBlock*)                         NativeAugmentTimerText                                      ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UWidgetAnimation*)                         NativeAnimTimerTextCountdownUpdated                         ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetAnimation*)                         NativeAnimProgressBarCountdownUpdated                       ___ OFFSET(get<T>, {0x360, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
/// Size: 0x0010 (0x000080 - 0x000090)
class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UPaperSprite*)                             IconOverrideSprite                                          ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FGameplayTag)                              IconOverrideTag                                             ___ OFFSET(get<T>, {0x88, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
/// Size: 0x0008 (0x000120 - 0x000128)
class UFortMobileActionButtonBehavior_RerollAugments : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UFortItemDefinition*)                      RerollCurrency                                              ___ OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer
/// Size: 0x0010 (0x000338 - 0x000348)
class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TWeakObjectPtr<UFortControllerComponent_AugmentGrantingSystem*>) AugmentControllerComponent            ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PlayerAugmentTimer                                   ___ OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPickupInteractOverrideComponent_Augments
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UFortPickupInteractOverrideComponent_Augments : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionListEntry
/// Size: 0x0010 (0x001550 - 0x001560)
class UFortPlayerAugmentCollectionListEntry : public UAthenaCollectionListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	CMember(UImage*)                                   Image_Background                                            ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	SMember(FName)                                     ParamName_ItemIcon                                          ___ OFFSET(get<T>, {0x1558, 4, 0, 0})
	SMember(FName)                                     ParamName_IsDiscovered                                      ___ OFFSET(get<T>, {0x155C, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
/// Size: 0x0080 (0x000630 - 0x0006B0)
class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    ___ OFFSET(get<T>, {0x630, 40, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr>)        TagToImageMap                                               ___ OFFSET(get<T>, {0x658, 80, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CategoryTitle                                          ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenContainer
/// Size: 0x0000 (0x000530 - 0x000530)
class UFortPlayerAugmentCollectionScreenContainer : public UAthenaCollectionScreenContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreenInfoOverlay
/// Size: 0x0020 (0x0004B0 - 0x0004D0)
class UFortPlayerAugmentCollectionScreenInfoOverlay : public UAthenaCollectionScreenInfoOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FName)                                     ParamName_Progress                                          ___ OFFSET(get<T>, {0x4B0, 4, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemCategory                                           ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UFortItemCategoryIndicator*)               ItemCategoryIndicator                                       ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_UndiscoveredText                                    ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget
/// Size: 0x0018 (0x000310 - 0x000328)
class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TArray<UFortPlayerAugmentItemDefinition*>) AvailableAugmentItemDefinitions                             ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UWidget*)                                  Overlay_Reroll                                              ___ OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FGameplayTagContainer)                     HiddenAugmentGameplayTags                                   ___ OFFSET(get<T>, {0x2D0, 32, 0, 0})
	SMember(FScalableFloat)                            NumAugmentGrantRoundsForPlaylist                            ___ OFFSET(get<T>, {0x2F0, 40, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UCommonLazyImage*)                         Image_CurrencyIcon                                          ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortWorldItemDefinition*)                 RerollCurrency                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   CachedNumFreeRerolls                                        ___ OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	SMember(FName)                                     RerollHoldMaterialParamName                                 ___ OFFSET(get<T>, {0x2E4, 4, 0, 0})
	CMember(UImage*)                                   Image_ProgressBar                                           ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_OwnedCurrency                                          ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RerollCost                                             ___ OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
/// Size: 0x0068 (0x0002D0 - 0x000338)
class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FText)                                     RarityTextFormat                                            ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentName                                            ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentRarity                                          ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentCategory                                        ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UFortItemCategoryIndicator*)               ItemCategoryIndicator                                       ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_CategoryAsImage                                       ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentDescription                                     ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    Icon_LenderAvatarIcon                                       ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_LenderAvatarIcon                                    ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_LenderSquadColor                                      ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_BorrowingText                                          ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInGameCarriedWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortPlayerAugmentInGameCarriedWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryExtensionRow
/// Size: 0x0000 (0x0002F8 - 0x0002F8)
class UFortPlayerAugmentInventoryExtensionRow : public UAthenaInventoryGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget
/// Size: 0x0060 (0x0003E8 - 0x000448)
class UFortPlayerAugmentInventoryInfoWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FText)                                     RarityTextFormat                                            ___ OFFSET(get<T>, {0x3F0, 24, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemRarity                                             ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemCategory                                           ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortItemCategoryIndicator*)               ItemCategoryIndicator                                       ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemDescription                                        ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    Icon_LenderAvatarIcon                                       ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_LenderSquadColor                                      ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_BorrowingText                                          ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryListEntry
/// Size: 0x0010 (0x001470 - 0x001480)
class UFortPlayerAugmentInventoryListEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5248;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab
/// Size: 0x0158 (0x0003E8 - 0x000540)
class UFortPlayerAugmentInventoryTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    ___ OFFSET(get<T>, {0x3F0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     HiddenAugmentGameplayTags                                   ___ OFFSET(get<T>, {0x418, 32, 0, 0})
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x438, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x440, 240, 0, 0})
	CMember(UFortPlayerAugmentInventoryInfoWidget*)    AugmentInfo                                                 ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonListView*)                          ListView_Augments                                           ___ OFFSET(get<T>, {0x538, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentLobbyWidget
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class UFortPlayerAugmentLobbyWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget
/// Size: 0x0028 (0x000310 - 0x000338)
class UFortPlayerAugmentPostMatchUnlocksWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    ___ OFFSET(get<T>, {0x310, 40, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
/// Size: 0x0090 (0x000310 - 0x0003A0)
class UFortPlayerAugmentSpecialAcquiredNotificationWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          ___ OFFSET(get<T>, {0x370, 2, 0, 0})
	SMember(FGameplayTagContainer)                     TargetGameplayTags                                          ___ OFFSET(get<T>, {0x378, 32, 0, 0})
};

