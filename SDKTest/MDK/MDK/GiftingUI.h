
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
/// dependency: GameFeatures
/// dependency: SocialUMG
/// dependency: UMG

/// Class /Script/GiftingUI.AthenaGiftConfirmedPanel
/// Size: 0x0030 (0x0003E8 - 0x000418)
class UAthenaGiftConfirmedPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(URichTextBlock*)                           Text_RecipientInfo                                          OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingConfirmationScreen
/// Size: 0x0158 (0x0003E8 - 0x000540)
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(UFortStoreFrontOfferInfo*)                 PresentedGiftableOfferInfo                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortStoreFrontOfferInfo*)                 PresentedOptionalTokenOfferInfo                             OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(float)                                     MinGiftSubmissionDelay                                      OFFSET(get<float>, {0x4E4, 4, 0, 0})
	DMember(float)                                     MaxGiftSubmissionDelay                                      OFFSET(get<float>, {0x4E8, 4, 0, 0})
	CMember(UCommonButtonBase*)                        Button_WrapOptions                                          OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MtxWallet                                            OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UAthenaGiftingPurchasePanel*)              Panel_GiftingPurchase                                       OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UAthenaGiftingWrapOptionsPanel*)           Panel_WrapOptions                                           OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UAthenaGiftConfirmedPanel*)                Panel_GiftConfirmed                                         OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UAthenaGiftingErrorsPanel*)                Panel_GiftingErrors                                         OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged
	// void OnPresentationModeChanged(EGiftingPresentationMode NewMode);                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete
	// void HandleTokenOfferPurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems);                        // [0x9bb7130] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent
	// void HandleGiftSent(bool bSuccess, TArray<FString>& IneligibleAccounts, TArray<FString>& ErrorCodes);                    // [0x9bb6da0] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.Dismiss
	// void Dismiss(bool bGiftConfirmed);                                                                                       // [0x9bb6d04] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/GiftingUI.AthenaGiftingErrorsPanel
/// Size: 0x0060 (0x0003E8 - 0x000448)
class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(URichTextBlock*)                           Text_RecipientInfo                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_Title                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Continue                                             OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UTileView*)                                TileView_Items                                              OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingErrorsPanel.UpdateGiftEligibility
	// void UpdateGiftEligibility(bool bStillGiftable);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingPriceWidget
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UAthenaGiftingPriceWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonTextBlock*)                         Text_RealMoneyPrice                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_FinalPrice                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RegularPrice                                           OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_SalePrice                                           OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingPriceWidget.SetPresentationMode
	// void SetPresentationMode(EGiftingPricePresentationMode Mode);                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingPurchaseButton
/// Size: 0x0010 (0x001510 - 0x001520)
class UAthenaGiftingPurchaseButton : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(UAthenaGiftingPriceWidget*)                Widget_Price                                                OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x1510, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingPurchasePanel
/// Size: 0x0048 (0x0003E8 - 0x000430)
class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UAthenaGiftingPurchaseButton*)             Button_PurchaseGift                                         OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    Avatar_MemberIcon                                           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SocialNameInfo                                         OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemsCount                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_OfferName                                              OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UTileView*)                                TileView_Items                                              OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingPurchasePanel.PlayIntroAnimation
	// void PlayIntroAnimation();                                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingScreen
/// Size: 0x01E0 (0x000708 - 0x0008E8)
class UAthenaGiftingScreen : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2280;

public:
	CMember(UFortGiftingUserSearchWidget*)             SearchWidget_SocialSearchWidget                             OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UFortGiftingSocialUserListView*)           ListView_Recipients                                         OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UTileView*)                                TileView_Items                                              OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftingPolicy                                        OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CameraControl                                        OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_OfferName                                              OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_VBucksOffCount                                         OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ShownItemIndex                                         OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_NoContent                                              OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_OfferItemOwnedCount                                OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UOverlay*)                                 Container_VBucksOffViolator                                 OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_GiftCount                                          OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UAthenaGiftingPriceWidget*)                Widget_Price                                                OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UAthenaLockerItemInfo*)                    Widget_ItemInfo                                             OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_FilterTabs                                         OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_FilterTabsPrevious                             OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_FilterTabsNext                                 OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UAthenaGiftingConfirmationScreen*)         ActivatableWidget_GiftingConfirmation                       OFFSET(get<T>, {0x7A8, 8, 0, 0})
	DMember(float)                                     ItemCyclingInterval                                         OFFSET(get<float>, {0x7B0, 4, 0, 0})
	SMember(FDataTableRowHandle)                       FilterTabsPreviousAction                                    OFFSET(get<T>, {0x7B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       FilterTabsNextAction                                        OFFSET(get<T>, {0x7C8, 16, 0, 0})
	SMember(FText)                                     RegularGiftingPolicy                                        OFFSET(get<T>, {0x7D8, 24, 0, 0})
	SMember(FText)                                     BattlePassGiftingPolicy                                     OFFSET(get<T>, {0x7F0, 24, 0, 0})
	CMember(TMap<UCommonButtonBase*, EFilterType>)     FilterMap                                                   OFFSET(get<T>, {0x868, 80, 0, 0})
	CMember(UCommonButtonGroupBase*)                   FilterGroup                                                 OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(TArray<UFortItemDefinition*>)              ItemDefinitions                                             OFFSET(get<T>, {0x8C0, 16, 0, 0})
	CMember(UFortItemDefinition*)                      PresentedItemDefinition                                     OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(UFortStoreFrontOfferInfo*)                 GiftableOfferInfo                                           OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(UFortStoreFrontOfferInfo*)                 OptionalTokenOfferInfo                                      OFFSET(get<T>, {0x8E0, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShowSearchWarningText
	// void OnShowSearchWarningText(bool bShow);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnShownItemChanged
	// void OnShownItemChanged();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnSetupFilterTabButton
	// void OnSetupFilterTabButton(UCommonButtonBase* Button, EFilterType FilterType);                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPresentationModeChanged
	// void OnPresentationModeChanged(EGiftingScreenPresentationMode Mode);                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnPartyListUpdated
	// void OnPartyListUpdated(bool bEmpty);                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFriendSelectionChanged
	// void OnFriendSelectionChanged();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.OnFilterChanged
	// void OnFilterChanged(EFilterType FilterType);                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.AthenaGiftingScreen.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                   // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GiftingUI.AthenaGiftingWrapOptionsPanel
/// Size: 0x0068 (0x0003E8 - 0x000450)
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(TArray<TWeakObjectPtr>)                    GiftBoxes                                                   OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(TArray<UFortGiftBoxItemDefinition*>)       GiftBoxItemDefs                                             OFFSET(get<T>, {0x420, 16, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_ConfirmWrap                                          OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UTileView*)                                TileView_WrapOptions                                        OFFSET(get<T>, {0x448, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListEntry
/// Size: 0x00E0 (0x0014E0 - 0x0015C0)
class UFortGiftingSocialUserListEntry : public USocialListEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
	CMember(UFortSocialAvatarIcon*)                    Avatar_MemberIcon                                           OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(USocialNameTextBlock*)                     Text_SocialName                                             OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_EligibilityStatus                                  OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_OwnedItems                                         OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UAthenaGiftingPriceWidget*)                Widget_Price                                                OFFSET(get<T>, {0x15B8, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.SetPresentationMode
	// void SetPresentationMode(ERecipientPresentationMode Mode);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnUserItemSet
	// void OnUserItemSet();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.OnRecipientStatusUpdated
	// void OnRecipientStatusUpdated();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnTouchSelectionConfirmed
	// void BP_OnTouchSelectionConfirmed();                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingSocialUserListEntry.BP_OnHighlightedStateChanged
	// void BP_OnHighlightedStateChanged(bool bInIsHighlighted, bool bPlayAnimation);                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListView
/// Size: 0x00F8 (0x0003A8 - 0x0004A0)
class UFortGiftingSocialUserListView : public USocialUserListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	DMember(float)                                     RefreshRecipientStatusDelay                                 OFFSET(get<float>, {0x3A8, 4, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingUserSearchWidget
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UFortGiftingUserSearchWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UEditableText*)                            EditableText_SearchFriends                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ClearQuery                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SubmitQuery                                          OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.OnSearchCommit
	// void OnSearchCommit(bool bSearchStringShort);                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextEntered
	// void HandleSearchFriendsTextEntered(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                                 // [0x9bb6f78] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.HandleSearchFriendsTextChanged
	// void HandleSearchFriendsTextChanged(FText& Text);                                                                        // [0x9bb6eec] Final|Native|Private|HasOutParms 
	// Function /Script/GiftingUI.FortGiftingUserSearchWidget.FocusEditableText
	// void FocusEditableText();                                                                                                // [0x9bb6d84] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GiftingUI.FortGiftingWrapOptionListEntry
/// Size: 0x0020 (0x0014C0 - 0x0014E0)
class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(UFortGiftBoxItemDefinition*)               GiftBoxDefinition                                           OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Gift                                                  OFFSET(get<T>, {0x14D0, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingData
/// Size: 0x0020 (0x000498 - 0x0004B8)
class UFortGiftingData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(TWeakObjectPtr<UClass*>)                   GiftingScreenClass                                          OFFSET(get<T>, {0x498, 32, 0, 0})
};

/// Struct /Script/GiftingUI.FortGiftingRecipientState
/// Size: 0x0088 (0x000000 - 0x000088)
class FFortGiftingRecipientState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FCatalogItemPrice)                         Price                                                       OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FItemQuantity>)                     Items                                                       OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Enum /Script/GiftingUI.EGiftingPresentationMode
/// Size: 0x07
enum EGiftingPresentationMode : uint8_t
{
	EGiftingPresentationMode__ConfirmPurchase0                                       = 0,
	EGiftingPresentationMode__WrapOptions1                                           = 1,
	EGiftingPresentationMode__GiftingProcess2                                        = 2,
	EGiftingPresentationMode__GiftingError3                                          = 3,
	EGiftingPresentationMode__GiftConfirmed4                                         = 4,
	EGiftingPresentationMode__None5                                                  = 5,
	EGiftingPresentationMode__EGiftingPresentationMode_MAX6                          = 6
};

/// Enum /Script/GiftingUI.EGiftingPricePresentationMode
/// Size: 0x04
enum EGiftingPricePresentationMode : uint8_t
{
	EGiftingPricePresentationMode__MtxCurrency0                                      = 0,
	EGiftingPricePresentationMode__RealMoney1                                        = 1,
	EGiftingPricePresentationMode__Hidden2                                           = 2,
	EGiftingPricePresentationMode__EGiftingPricePresentationMode_MAX3                = 3
};

/// Enum /Script/GiftingUI.EFilterType
/// Size: 0x03
enum EFilterType : uint8_t
{
	EFilterType__All0                                                                = 0,
	EFilterType__Party1                                                              = 1,
	EFilterType__EFilterType_MAX2                                                    = 2
};

/// Enum /Script/GiftingUI.EGiftingScreenPresentationMode
/// Size: 0x03
enum EGiftingScreenPresentationMode : uint8_t
{
	EGiftingScreenPresentationMode__ItemList0                                        = 0,
	EGiftingScreenPresentationMode__NoContent1                                       = 1,
	EGiftingScreenPresentationMode__EGiftingScreenPresentationMode_MAX2              = 2
};

/// Enum /Script/GiftingUI.ERecipientPresentationMode
/// Size: 0x05
enum ERecipientPresentationMode : uint8_t
{
	ERecipientPresentationMode__Loading0                                             = 0,
	ERecipientPresentationMode__GiftPrice1                                           = 1,
	ERecipientPresentationMode__AlreadyOwned2                                        = 2,
	ERecipientPresentationMode__Unavailable3                                         = 3,
	ERecipientPresentationMode__ERecipientPresentationMode_MAX4                      = 4
};

