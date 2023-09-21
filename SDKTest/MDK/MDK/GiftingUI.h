
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
	CMember(URichTextBlock*)                           Text_RecipientInfo                                          ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingConfirmationScreen
/// Size: 0x0158 (0x0003E8 - 0x000540)
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(UFortStoreFrontOfferInfo*)                 PresentedGiftableOfferInfo                                  ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortStoreFrontOfferInfo*)                 PresentedOptionalTokenOfferInfo                             ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(float)                                     MinGiftSubmissionDelay                                      ___ OFFSET(get<float>, {0x4E4, 4, 0, 0})
	DMember(float)                                     MaxGiftSubmissionDelay                                      ___ OFFSET(get<float>, {0x4E8, 4, 0, 0})
	CMember(UCommonButtonBase*)                        Button_WrapOptions                                          ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MtxWallet                                            ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UAthenaGiftingPurchasePanel*)              Panel_GiftingPurchase                                       ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UAthenaGiftingWrapOptionsPanel*)           Panel_WrapOptions                                           ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UAthenaGiftConfirmedPanel*)                Panel_GiftConfirmed                                         ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UAthenaGiftingErrorsPanel*)                Panel_GiftingErrors                                         ___ OFFSET(get<T>, {0x538, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingErrorsPanel
/// Size: 0x0060 (0x0003E8 - 0x000448)
class UAthenaGiftingErrorsPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(URichTextBlock*)                           Text_RecipientInfo                                          ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_Title                                                  ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Continue                                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UTileView*)                                TileView_Items                                              ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingPriceWidget
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UAthenaGiftingPriceWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonTextBlock*)                         Text_RealMoneyPrice                                         ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_FinalPrice                                             ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RegularPrice                                           ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_SalePrice                                           ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingPurchaseButton
/// Size: 0x0010 (0x001510 - 0x001520)
class UAthenaGiftingPurchaseButton : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(UAthenaGiftingPriceWidget*)                Widget_Price                                                ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingPurchasePanel
/// Size: 0x0048 (0x0003E8 - 0x000430)
class UAthenaGiftingPurchasePanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UAthenaGiftingPurchaseButton*)             Button_PurchaseGift                                         ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UFortSocialAvatarIcon*)                    Avatar_MemberIcon                                           ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SocialNameInfo                                         ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemsCount                                             ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_OfferName                                              ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UTileView*)                                TileView_Items                                              ___ OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingScreen
/// Size: 0x01E0 (0x000708 - 0x0008E8)
class UAthenaGiftingScreen : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2280;

public:
	CMember(UFortGiftingUserSearchWidget*)             SearchWidget_SocialSearchWidget                             ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UFortGiftingSocialUserListView*)           ListView_Recipients                                         ___ OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UTileView*)                                TileView_Items                                              ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftingPolicy                                        ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CameraControl                                        ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_OfferName                                              ___ OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_VBucksOffCount                                         ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ShownItemIndex                                         ___ OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_NoContent                                              ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_OfferItemOwnedCount                                ___ OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UOverlay*)                                 Container_VBucksOffViolator                                 ___ OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_GiftCount                                          ___ OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UAthenaGiftingPriceWidget*)                Widget_Price                                                ___ OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UAthenaLockerItemInfo*)                    Widget_ItemInfo                                             ___ OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_FilterTabs                                         ___ OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_FilterTabsPrevious                             ___ OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_FilterTabsNext                                 ___ OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UAthenaGiftingConfirmationScreen*)         ActivatableWidget_GiftingConfirmation                       ___ OFFSET(get<T>, {0x7A8, 8, 0, 0})
	DMember(float)                                     ItemCyclingInterval                                         ___ OFFSET(get<float>, {0x7B0, 4, 0, 0})
	SMember(FDataTableRowHandle)                       FilterTabsPreviousAction                                    ___ OFFSET(get<T>, {0x7B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       FilterTabsNextAction                                        ___ OFFSET(get<T>, {0x7C8, 16, 0, 0})
	SMember(FText)                                     RegularGiftingPolicy                                        ___ OFFSET(get<T>, {0x7D8, 24, 0, 0})
	SMember(FText)                                     BattlePassGiftingPolicy                                     ___ OFFSET(get<T>, {0x7F0, 24, 0, 0})
	CMember(TMap<UCommonButtonBase*, EFilterType>)     FilterMap                                                   ___ OFFSET(get<T>, {0x868, 80, 0, 0})
	CMember(UCommonButtonGroupBase*)                   FilterGroup                                                 ___ OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(TArray<UFortItemDefinition*>)              ItemDefinitions                                             ___ OFFSET(get<T>, {0x8C0, 16, 0, 0})
	CMember(UFortItemDefinition*)                      PresentedItemDefinition                                     ___ OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(UFortStoreFrontOfferInfo*)                 GiftableOfferInfo                                           ___ OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(UFortStoreFrontOfferInfo*)                 OptionalTokenOfferInfo                                      ___ OFFSET(get<T>, {0x8E0, 8, 0, 0})
};

/// Class /Script/GiftingUI.AthenaGiftingWrapOptionsPanel
/// Size: 0x0068 (0x0003E8 - 0x000450)
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(TArray<TWeakObjectPtr>)                    GiftBoxes                                                   ___ OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(TArray<UFortGiftBoxItemDefinition*>)       GiftBoxItemDefs                                             ___ OFFSET(get<T>, {0x420, 16, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_ConfirmWrap                                          ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UTileView*)                                TileView_WrapOptions                                        ___ OFFSET(get<T>, {0x448, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListEntry
/// Size: 0x00E0 (0x0014E0 - 0x0015C0)
class UFortGiftingSocialUserListEntry : public USocialListEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
	CMember(UFortSocialAvatarIcon*)                    Avatar_MemberIcon                                           ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(USocialNameTextBlock*)                     Text_SocialName                                             ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_EligibilityStatus                                  ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_OwnedItems                                         ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UAthenaGiftingPriceWidget*)                Widget_Price                                                ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingSocialUserListView
/// Size: 0x00F8 (0x0003A8 - 0x0004A0)
class UFortGiftingSocialUserListView : public USocialUserListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	DMember(float)                                     RefreshRecipientStatusDelay                                 ___ OFFSET(get<float>, {0x3A8, 4, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingUserSearchWidget
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UFortGiftingUserSearchWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UEditableText*)                            EditableText_SearchFriends                                  ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ClearQuery                                           ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SubmitQuery                                          ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingWrapOptionListEntry
/// Size: 0x0020 (0x0014C0 - 0x0014E0)
class UFortGiftingWrapOptionListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(UFortGiftBoxItemDefinition*)               GiftBoxDefinition                                           ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Gift                                                  ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
};

/// Class /Script/GiftingUI.FortGiftingData
/// Size: 0x0020 (0x000498 - 0x0004B8)
class UFortGiftingData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(TWeakObjectPtr<UClass*>)                   GiftingScreenClass                                          ___ OFFSET(get<T>, {0x498, 32, 0, 0})
};

/// Struct /Script/GiftingUI.FortGiftingRecipientState
/// Size: 0x0088 (0x000000 - 0x000088)
class FFortGiftingRecipientState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FCatalogItemPrice)                         Price                                                       ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FItemQuantity>)                     Items                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
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

