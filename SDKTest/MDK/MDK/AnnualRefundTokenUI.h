
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
/// dependency: UMG

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntryBase
/// Size: 0x0040 (0x001510 - 0x001550)
class UFortPurchaseHistoryEntryBase : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(UClass*)                                   ItemCardClass                                               ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	DMember(float)                                     CardWidthOverride                                           ___ OFFSET(get<float>, {0x1518, 4, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Name                                                   ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(TArray<FString>)                           LootEntryItemTypesToExclude                                 ___ OFFSET(get<T>, {0x1528, 16, 0, 0})
	CMember(TArray<FString>)                           LootEntryItemTypesToCombine                                 ___ OFFSET(get<T>, {0x1538, 16, 0, 0})
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryEntry
/// Size: 0x0000 (0x001550 - 0x001550)
class UFortPurchaseHistoryEntry : public UFortPurchaseHistoryEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryBundleEntry
/// Size: 0x0000 (0x001550 - 0x001550)
class UFortPurchaseHistoryBundleEntry : public UFortPurchaseHistoryEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryListView
/// Size: 0x0120 (0x000298 - 0x0003B8)
class UFortPurchaseHistoryListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryTreeView
/// Size: 0x0038 (0x0003B8 - 0x0003F0)
class UFortPurchaseHistoryTreeView : public UFortPurchaseHistoryListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	CMember(UClass*)                                   HeaderEntryWidgetClass                                      ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
};

/// Class /Script/AnnualRefundTokenUI.FortAnnualRefundTicket
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UFortAnnualRefundTicket : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UCommonTextBlock*)                         Text_AvailableDate                                          ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/AnnualRefundTokenUI.FortAnnualRefundTokenData
/// Size: 0x0020 (0x000498 - 0x0004B8)
class UFortAnnualRefundTokenData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PurchaseHistoryScreenClass                                  ___ OFFSET(get<T>, {0x498, 32, 0, 0})
};

/// Class /Script/AnnualRefundTokenUI.FortPurchaseHistoryScreen
/// Size: 0x0100 (0x000558 - 0x000658)
class UFortPurchaseHistoryScreen : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1624;

public:
	SMember(FDataTableRowHandle)                       BackAction                                                  ___ OFFSET(get<T>, {0x558, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RefundConfirmationClass                                     ___ OFFSET(get<T>, {0x580, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DirectPurchaseInfoModalClass                                ___ OFFSET(get<T>, {0x5A0, 32, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_MainContent                                        ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UFortPurchaseHistoryTreeView*)             TreeView_Purchases                                          ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PostApproval                                         ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_ReturnTypeInfo                                    ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Desc                                                   ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RefundCount                                            ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ResultHeader                                           ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ResultTitle                                            ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ResultDesc                                             ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UFortAnnualRefundTicket*)                  RefundTicket_Left                                           ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UFortAnnualRefundTicket*)                  RefundTicket_Center                                         ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UFortAnnualRefundTicket*)                  RefundTicket_Right                                          ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UWidget*)                                  Widget_CancelPurchaseInfo                                   ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UWidget*)                                  Widget_ReturnTicketInfo                                     ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UWidget*)                                  Widget_TokenlessRefundInfo                                  ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UWidget*)                                  Widget_NonRefundableInfo                                    ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UWidget*)                                  Widget_BundledPurchaseInfo                                  ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UWidget*)                                  Widget_BundledPurchaseTokenlessRefundInfo                   ___ OFFSET(get<T>, {0x650, 8, 0, 0})
};

/// Class /Script/AnnualRefundTokenUI.FortRefundConfirmation
/// Size: 0x0058 (0x000558 - 0x0005B0)
class UFortRefundConfirmation : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UCommonTextBlock*)                         Text_RefundsRemaining                                       ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RefundCount                                            ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AreYouSure                                             ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Yes                                                  ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_No                                                   ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UFortAnnualRefundTicket*)                  RefundTicket_Left                                           ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UFortAnnualRefundTicket*)                  RefundTicket_Center                                         ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UFortAnnualRefundTicket*)                  RefundTicket_Right                                          ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
};

/// Struct /Script/AnnualRefundTokenUI.PurchaseHistoryBundleEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FPurchaseHistoryBundleEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   ID                                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/AnnualRefundTokenUI.EFortPurchaseHistoryRefundType
/// Size: 0x05
enum EFortPurchaseHistoryRefundType : uint8_t
{
	EFortPurchaseHistoryRefundType__CancelPurchase0                                  = 0,
	EFortPurchaseHistoryRefundType__ReturnTicket1                                    = 1,
	EFortPurchaseHistoryRefundType__TokenlessRefund2                                 = 2,
	EFortPurchaseHistoryRefundType__NonRefundable3                                   = 3,
	EFortPurchaseHistoryRefundType__EFortPurchaseHistoryRefundType_MAX4              = 4
};

