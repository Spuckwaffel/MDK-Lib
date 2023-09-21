
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
	DMember(bool)                                      bCachedIsInInventoryView                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(UPaperSprite*)                             ListViewSprite                                              OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobileButtonBehaviorComponent_AugmentsListIconPicker.OnAugmentToolViewSwap
	// void OnAugmentToolViewSwap(bool bIsInInventoryView);                                                                     // [0x9cf8b84] Final|Native|Private 
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
	DMember(bool)                                      bIsAugmentReadyVisible                                      OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bIsCountdownActive                                          OFFSET(get<bool>, {0x311, 1, 0, 0})
	DMember(bool)                                      bIsOffline                                                  OFFSET(get<bool>, {0x312, 1, 0, 0})
	SMember(FTimerHandle)                              HideTimerHandle                                             OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 TimerProgressDMI                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	SMember(FScalableFloat)                            CountdownStartTimeHF                                        OFFSET(get<T>, {0x328, 40, 0, 0})
	CMember(UCommonTextBlock*)                         NativeAugmentTimerText                                      OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UWidgetAnimation*)                         NativeAnimTimerTextCountdownUpdated                         OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetAnimation*)                         NativeAnimProgressBarCountdownUpdated                       OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.UpdateCountdown
	// void UpdateCountdown(float TimeRemaining);                                                                               // [0x9cf8eb0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.SetMobileProgressTimer
	// void SetMobileProgressTimer(float TimePercentage);                                                                       // [0x9cf8d30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.OnCountdownActivated
	// void OnCountdownActivated();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDSelectionTimerWidget.IsCountdownVisible
	// bool IsCountdownVisible();                                                                                               // [0x9cf8b60] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionBBE_AugmentShoot
/// Size: 0x0010 (0x000080 - 0x000090)
class UFortMobileActionBBE_AugmentShoot : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UPaperSprite*)                             IconOverrideSprite                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FGameplayTag)                              IconOverrideTag                                             OFFSET(get<T>, {0x88, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobileActionButtonBehavior_RerollAugments
/// Size: 0x0008 (0x000120 - 0x000128)
class UFortMobileActionButtonBehavior_RerollAugments : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UFortItemDefinition*)                      RerollCurrency                                              OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer
/// Size: 0x0010 (0x000338 - 0x000348)
class UFortMobilePlayerAugmentTimer : public UFortMobileHUDElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TWeakObjectPtr<UFortControllerComponent_AugmentGrantingSystem*>) AugmentControllerComponent            OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PlayerAugmentTimer                                   OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer.HandleHUDElementVisibilityChanged
	// void HandleHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                                // [0x9cf82dc] Final|Native|Private|HasOutParms 
	// Function /Script/PlayerAugmentsUI.FortMobilePlayerAugmentTimer.BP_OnHUDElementVisibilityChanged
	// void BP_OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer, bool bForceCollapse);            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
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
	CMember(UImage*)                                   Image_Background                                            OFFSET(get<T>, {0x1550, 8, 0, 0})
	SMember(FName)                                     ParamName_ItemIcon                                          OFFSET(get<T>, {0x1558, 4, 0, 0})
	SMember(FName)                                     ParamName_IsDiscovered                                      OFFSET(get<T>, {0x155C, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentCollectionScreen
/// Size: 0x0080 (0x000630 - 0x0006B0)
class UFortPlayerAugmentCollectionScreen : public UAthenaCollectionScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    OFFSET(get<T>, {0x630, 40, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr>)        TagToImageMap                                               OFFSET(get<T>, {0x658, 80, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CategoryTitle                                          OFFSET(get<T>, {0x6A8, 8, 0, 0})
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
	SMember(FName)                                     ParamName_Progress                                          OFFSET(get<T>, {0x4B0, 4, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemCategory                                           OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UFortItemCategoryIndicator*)               ItemCategoryIndicator                                       OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_UndiscoveredText                                    OFFSET(get<T>, {0x4C8, 8, 0, 0})
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget
/// Size: 0x0018 (0x000310 - 0x000328)
class UFortPlayerAugmentGranterWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TArray<UFortPlayerAugmentItemDefinition*>) AvailableAugmentItemDefinitions                             OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UWidget*)                                  Overlay_Reroll                                              OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnSelectedAugmentForGrant
	// void OnSelectedAugmentForGrant(UFortPlayerAugmentItemDefinition* HighlightedAugment);                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnRerollAugments
	// void OnRerollAugments();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnPopulateAvailableAugmentsHUD
	// void OnPopulateAvailableAugmentsHUD(TArray<UFortPlayerAugmentItemDefinition*>& AugmentItemDefinition);                   // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnInputTypeChanged
	// void OnInputTypeChanged(ECommonInputType NewInputType);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnCanSelectAugmentChanged
	// void OnCanSelectAugmentChanged(bool bCanSelectAugment);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorToolViewSwapped
	// void OnAugmentSelectorToolViewSwapped(bool bViewingAugmentInventory);                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectorOpenedStatusChanged
	// void OnAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentSelectionStarted
	// void OnAugmentSelectionStarted(int32_t SelectedAugmentIndex);                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollUpEvent
	// void OnAugmentScrollUpEvent();                                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentScrollDownEvent
	// void OnAugmentScrollDownEvent();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.OnAugmentHighlighted
	// void OnAugmentHighlighted(int32_t HighlightedAugmentIndex);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                      // [0x9cf88f0] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleSelectedAugmentForGrant
	// void HandleSelectedAugmentForGrant(UFortPlayerAugmentItemDefinition* SelectedAugment);                                   // [0x9cf8870] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleRerollAugments
	// void HandleRerollAugments();                                                                                             // [0x9cf8848] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                           // [0x9cf844c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleCanSelectAugmentChanged
	// void HandleCanSelectAugmentChanged(bool bCanSelectAugment);                                                              // [0x9cf80dc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAvailableAugmentsForGrantingUpdated
	// void HandleAvailableAugmentsForGrantingUpdated(UFortControllerComponent_AugmentGrantingSystem* GrantingComponent);       // [0x9cf805c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorToolViewSwapped
	// void HandleAugmentSelectorToolViewSwapped(bool bViewingAugmentsInventory);                                               // [0x9cf7f18] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingAugmentInventory);                            // [0x9cf7ccc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentSelectionStarted
	// void HandleAugmentSelectionStarted(int32_t SelectedAugmentIndex);                                                        // [0x9cf7c4c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.HandleAugmentHighlighted
	// void HandleAugmentHighlighted(int32_t HighlightedAugmentIndex);                                                          // [0x9cf7bcc] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentGranterWidget.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0x9cf7b0c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FGameplayTagContainer)                     HiddenAugmentGameplayTags                                   OFFSET(get<T>, {0x2D0, 32, 0, 0})
	SMember(FScalableFloat)                            NumAugmentGrantRoundsForPlaylist                            OFFSET(get<T>, {0x2F0, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.OnAugmentsUpdated
	// void OnAugmentsUpdated(TArray<UFortPlayerAugmentItemDefinition*>& ActiveAugments);                                       // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UFortPlayerAugmentHUDRerollWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UCommonLazyImage*)                         Image_CurrencyIcon                                          OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortWorldItemDefinition*)                 RerollCurrency                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   CachedNumFreeRerolls                                        OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	SMember(FName)                                     RerollHoldMaterialParamName                                 OFFSET(get<T>, {0x2E4, 4, 0, 0})
	CMember(UImage*)                                   Image_ProgressBar                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_OwnedCurrency                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RerollCost                                             OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.StartRerollHoldProgress
	// void StartRerollHoldProgress(float Duration);                                                                            // [0x9cf8db0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnUpdateCurrency
	// void OnUpdateCurrency(int32_t OwnedCurrency, int32_t RerollCost);                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnRerollAugments
	// void OnRerollAugments();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.OnFreeRerollsUpdated
	// void OnFreeRerollsUpdated(int32_t NewNumFreeRerolls);                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleRerollAugments
	// void HandleRerollAugments();                                                                                             // [0x9cf885c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleFreeRerollsUpdated
	// void HandleFreeRerollsUpdated(int32_t NewNumFreeRerolls);                                                                // [0x9cf825c] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.HandleAugmentSelectorOpenedStatusChanged
	// void HandleAugmentSelectorOpenedStatusChanged(bool bIsOpened, bool bViewingInventory);                                   // [0x9cf7d90] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDRerollWidget.EndRerollHoldProgress
	// void EndRerollHoldProgress();                                                                                            // [0x9cf7a58] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget
/// Size: 0x0068 (0x0002D0 - 0x000338)
class UFortPlayerAugmentInfoEntryWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FText)                                     RarityTextFormat                                            OFFSET(get<T>, {0x2D0, 24, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentName                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentRarity                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentCategory                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UFortItemCategoryIndicator*)               ItemCategoryIndicator                                       OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_CategoryAsImage                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentDescription                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    Icon_LenderAvatarIcon                                       OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_LenderAvatarIcon                                    OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_LenderSquadColor                                      OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_BorrowingText                                          OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.UpdateAugment
	// void UpdateAugment(UFortPlayerAugmentItemDefinition* AugmentItemDefinition);                                             // [0x9cf8e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemPinColorSet
	// void OnItemPinColorSet(FLinearColor PinColor);                                                                           // [0x1ebf994] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInfoEntryWidget.OnItemNewOrBorrowedSet
	// void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
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
	SMember(FText)                                     RarityTextFormat                                            OFFSET(get<T>, {0x3F0, 24, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemRarity                                             OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemCategory                                           OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortItemCategoryIndicator*)               ItemCategoryIndicator                                       OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemDescription                                        OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    Icon_LenderAvatarIcon                                       OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_LenderSquadColor                                      OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_BorrowingText                                          OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemRaritySet
	// void OnItemRaritySet(EFortRarity Rarity, FFortRarityItemData RarityItemData);                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryInfoWidget.OnItemNewOrBorrowedSet
	// void OnItemNewOrBorrowedSet(bool bIsNew, bool bIsBorrowed);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
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
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    OFFSET(get<T>, {0x3F0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     HiddenAugmentGameplayTags                                   OFFSET(get<T>, {0x418, 32, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(get<T>, {0x438, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(get<T>, {0x440, 240, 0, 0})
	CMember(UFortPlayerAugmentInventoryInfoWidget*)    AugmentInfo                                                 OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonListView*)                          ListView_Augments                                           OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.RequestOpenSelector
	// void RequestOpenSelector();                                                                                              // [0x9cf8ccc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnTimerUpdated
	// void OnTimerUpdated(float TimeRemaining, float TimePercentage);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentListUpdated
	// void OnAugmentListUpdated(int32_t NumAugments);                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersResetForMatch
	// void OnAugmentGrantingTimersResetForMatch();                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleTimerUpdated
	// void HandleTimerUpdated(float TimeRemaining, float TimePercentage);                                                      // [0x9cf8a78] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleNumPendingAugmentsToGrantUpdated
	// void HandleNumPendingAugmentsToGrantUpdated(int8_t NumPendingAugmentsToGrant);                                           // [0x9cf86f4] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersResetForMatch
	// void HandleAugmentGrantingTimersResetForMatch();                                                                         // [0x9cf7bb8] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.HandleAugmentGrantingTimersFinishedForMatch
	// void HandleAugmentGrantingTimersFinishedForMatch();                                                                      // [0x9cf7b90] Final|Native|Private 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentInventoryTab.GetPendingAugmentsToGrant
	// int32_t GetPendingAugmentsToGrant();                                                                                     // [0x9cf7b58] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
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
	SMember(FScalableFloat)                            AugmentsEnabledViaHotfix                                    OFFSET(get<T>, {0x310, 40, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentPostMatchUnlocksWidget.OnShowUnlockedAugments
	// void OnShowUnlockedAugments(TArray<UFortPlayerAugmentItemDefinition*>& UnlockedAugments);                                // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget
/// Size: 0x0090 (0x000310 - 0x0003A0)
class UFortPlayerAugmentSpecialAcquiredNotificationWidget : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FFortPrioritizedWidgetData)                PrioritizationData                                          OFFSET(get<T>, {0x370, 2, 0, 0})
	SMember(FGameplayTagContainer)                     TargetGameplayTags                                          OFFSET(get<T>, {0x378, 32, 0, 0})


	/// Functions
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OpenWidget
	// void OpenWidget(UFortPlayerAugmentItemDefinition* ItemDef);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnStompedByOtherWidget
	// void OnStompedByOtherWidget();                                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.OnEventAdded
	// void OnEventAdded();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.HasMoreAugmentEvents
	// bool HasMoreAugmentEvents();                                                                                             // [0x9cf8b3c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.ConstructEventDescription
	// FText ConstructEventDescription(UFortPlayerAugmentItemDefinition* ItemDef);                                              // [0x9cf79a8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentSpecialAcquiredNotificationWidget.CloseWidget
	// void CloseWidget();                                                                                                      // [0x9cf7994] Final|Native|Protected|BlueprintCallable 
};

