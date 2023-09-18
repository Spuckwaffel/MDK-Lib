/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CrewUI.

/// Struct /Script/CrewUI.CrewSubscriptionContentTabData
/// Size: 0x0020 (0x000000 - 0x000020)
class FCrewSubscriptionContentTabData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     TabName                                                     ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(ESubscriptionContentTab)                   TabType                                                     ___ OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveReward
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortProgressiveReward : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCosmeticVariantInfo>)              DefaultVariantPreviewOverrides                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bHidden                                                     ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAllowPreviewStyles                                         ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      RewardDef                                                   ___ OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveStageOverrideDisplayData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortProgressiveStageOverrideDisplayData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FCosmeticVariantInfo>)              DefaultVariantPreviewOverrides                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(bool)                                      bAllowPreviewStyles                                         ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveUIStage
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortProgressiveUIStage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FFortProgressiveReward>)            Rewards                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUseOverrideDisplayData                                     ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FFortProgressiveStageOverrideDisplayData)  OverrideDisplayData                                         ___ OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveSet
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortProgressiveSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   FulfillmentId                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     SetName                                                     ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TArray<FFortProgressiveUIStage>)           Stages                                                      ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveSetRewardData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortProgressiveSetRewardData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UFortItemDefinition*)                      RewardToken                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Class /Script/CrewUI.BattlePassCrewContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBattlePassCrewContentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CrewUI.FortProgressiveContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortProgressiveContentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseButton
/// Size: 0x0020 (0x001510 - 0x001530)
class UBattlePassCrewPurchaseButton : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	CMember(EBattlePassPurchaseButtonCurrencyType)     CurrencyType                                                ___ OFFSET(get<T>, {0x1508, 1, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Label                                                  ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SecondaryLabel                                         ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_FinalCost                                              ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UWidget*)                                  Container_SecondaryLabel                                    ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseContainer
/// Size: 0x0080 (0x0003E8 - 0x000468)
class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	DMember(float)                                     CrewUpsellTransitionDelayTime                               ___ OFFSET(get<float>, {0x408, 4, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_ContentContainer                                   ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UBattlePassPurchaseScreen*)                BattlePassPurchaseScreen                                    ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UWidgetAnimation*)                         QuickIntro                                                  ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UWidgetAnimation*)                         CrewBenefitsIntro                                           ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UClass*)                                   CrewSubscriptionErrorModalClass                             ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Script/CrewUI.BattlePassSeasonHeading
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UBattlePassSeasonHeading : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UCommonRichTextBlock*)                     Text_Season                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/CrewUI.BattlePassPurchaseScreen
/// Size: 0x0128 (0x000428 - 0x000550)
class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	DMember(float)                                     CrewTransitionDelayTime                                     ___ OFFSET(get<float>, {0x464, 4, 0, 0})
	CMember(UClass*)                                   PurchaseCompleteModal                                       ___ OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ToCrew                                               ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Purchase                                             ___ OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftBattlePass                                       ___ OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_ConfirmBase                                          ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_ConfirmBundle                                        ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UBattlePassSeasonHeading*)                 Heading_Primary                                             ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UBattlePassSeasonHeading*)                 Heading_Secondary                                           ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Disclaimer                                         ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_PurchaseState                                      ___ OFFSET(get<T>, {0x530, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewMultiSubscriptionAlertModal
/// Size: 0x00E0 (0x0003E8 - 0x0004C8)
class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	CMember(UDynamicEntryBox*)                         EntryBox_BulletPoints                                       ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_OpenHowToURL                                         ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TextURL                                              ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_DoNotRemind                                          ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Close                                                ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchClose                                           ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(TArray<FText>)                             BulletPoints                                                ___ OFFSET(get<T>, {0x420, 16, 0, 0})
	CMember(TMap<EAppStore, FText>)                    AppStorePlatformMapping                                     ___ OFFSET(get<T>, {0x430, 80, 0, 0})
	SMember(FString)                                   HowToCancelURL                                              ___ OFFSET(get<T>, {0x480, 16, 0, 0})
	SMember(FText)                                     PlatformTextStyle                                           ___ OFFSET(get<T>, {0x4B0, 24, 0, 0})
};

/// Class /Script/CrewUI.CrewPriceChangeAcknowledgeModal
/// Size: 0x0198 (0x0003E8 - 0x000580)
class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(UCommonButtonBase*)                        Button_Accept                                               ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CancelSubscription                                   ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TextURL                                              ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CancellationInfoModalClass                                  ___ OFFSET(get<T>, {0x410, 32, 0, 0})
};

/// Class /Script/CrewUI.CrewPurchaseScreen
/// Size: 0x0178 (0x000428 - 0x0005A0)
class UCrewPurchaseScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	DMember(bool)                                      bManagementModeEnabled                                      ___ OFFSET(get<bool>, {0x490, 1, 0, 0})
	CMember(UWidget*)                                  ContentPurchasedFocusWidget                                 ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UWidget*)                                  FocusWidget                                                 ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_BenefitsTiles                                   ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CancellationInfoModalClass                                  ___ OFFSET(get<T>, {0x4B0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   LegalInfoModalClass                                         ___ OFFSET(get<T>, {0x4D0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ResolveIssueModalClass                                      ___ OFFSET(get<T>, {0x4F0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RejoinModalClass                                            ___ OFFSET(get<T>, {0x510, 32, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ToBattlePass                                         ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Purchase                                             ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Rejoin                                               ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ResolvePayment                                       ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_WatchTrailer                                         ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Terms                                                ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CancellationInfo                                     ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_RecurringRewards                                   ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_LimitedTimeRewards                                 ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCrewTileDetails*)                         Details_CurrentCrewTile                                     ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LimitedTime                                            ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_UserInformation                                     ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_UserInformation                                        ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CrewDisclaimer                                         ___ OFFSET(get<T>, {0x598, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewRewardTile
/// Size: 0x0060 (0x001470 - 0x0014D0)
class UCrewRewardTile : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	DMember(float)                                     TileImageStreamoutSeconds                                   ___ OFFSET(get<float>, {0x14B0, 4, 0, 0})
	CMember(UImage*)                                   Image_TileImage                                             ___ OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_TileLabel                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewSeasonLaunchScreen
/// Size: 0x00E8 (0x000428 - 0x000510)
class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ResolveIssueModalClass                                      ___ OFFSET(get<T>, {0x460, 32, 0, 0})
	CMember(UBattlePassSeasonHeading*)                 Heading_SeasonInfo                                          ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Claim                                                ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ResolveIssue                                         ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftBattlePass                                       ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Disclaimer                                         ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewStandaloneSubscriptionContentContainer
/// Size: 0x0008 (0x000710 - 0x000718)
class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	CMember(UCrewSubscriptionContentContainer*)        Widget_CrewContentContainer                                 ___ OFFSET(get<T>, {0x710, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewSubscriptionContentContainer
/// Size: 0x00A0 (0x0003E8 - 0x000488)
class UCrewSubscriptionContentContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(TArray<FCrewSubscriptionContentTabData>)   TabsData                                                    ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputAction                                          ___ OFFSET(get<T>, {0x428, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputAction                                      ___ OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_Tabs                                               ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_Tabs                                            ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_Tabs                                               ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UWidget*)                                  Widget_TabsContainer                                        ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(float)                                     SpacingAdjustmentForTabs                                    ___ OFFSET(get<float>, {0x468, 4, 0, 0})
	SMember(FPrimaryContentSetup)                      ContentSetup                                                ___ OFFSET(get<T>, {0x46C, 3, 0, 0})
};

/// Class /Script/CrewUI.CrewSubscriptionErrorModal
/// Size: 0x0010 (0x0003E8 - 0x0003F8)
class UCrewSubscriptionErrorModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	CMember(UCommonButtonBase*)                        Button_Close                                                ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchClose                                           ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewTileDetails
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UCrewTileDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Description                                        ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_Tags                                               ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileMoreInfo                                       ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewTileDetailsTag
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UCrewTileDetailsTag : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UCommonRichTextBlock*)                     Text_Label                                                  ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewUIGameFeatureAction
/// Size: 0x0100 (0x000028 - 0x000128)
class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassCrewContainerClass                                ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewContentContainerClass                                   ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewStandaloneContentContainerClass                         ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewPurchaseScreenClass                                     ___ OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ProgressionScreenClass                                      ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewPriceChangeAcknowledgeModalClass                        ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MultiSubAlertModalClass                                     ___ OFFSET(get<T>, {0xE8, 32, 0, 0})
	CMember(TArray<FFortProgressiveSet>)               ProgressiveCosmeticSets                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveContentContainer
/// Size: 0x0050 (0x0003E8 - 0x000438)
class UFortProgressiveContentContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_PrimaryContent                                     ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UFortProgressiveTableOfContentsScreen*)    Widget_ProgressiveTableOfContentsScreen                     ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortProgressiveItemScreen*)               Widget_ProgressiveItemScreen                                ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveItemDetailsWidget
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UFortProgressiveItemDetailsWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UCommonTextBlock*)                         Text_CosmeticStage                                          ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_UnlockCriteria                                         ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UWidget*)                                  Widget_UnlockCriteriaContainer                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UAthenaRewardItemTypeRarityTag*)           Widget_ItemTypeRarityTag                                    ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UWidget*)                                  Tag_Owned                                                   ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveScreenBase
/// Size: 0x0068 (0x000708 - 0x000770)
class UFortProgressiveScreenBase : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
	DMember(float)                                     RewardPreviewTime                                           ___ OFFSET(get<float>, {0x75C, 4, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveItemScreen
/// Size: 0x0110 (0x000770 - 0x000880)
class UFortProgressiveItemScreen : public UFortProgressiveScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	CMember(UWidget*)                                  ContentPurchasedFocusWidget                                 ___ OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchBack                                            ___ OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             ___ OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Subscribe                                            ___ OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviewStyles                                        ___ OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ExpirationFinePrint                                    ___ OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_NewStagesUnlockFinePrint                               ___ OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_StagesPips                                         ___ OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_StagesPips                                      ___ OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UFortProgressiveItemDetailsWidget*)        Widget_ProgressiveItemDetails                               ___ OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UFortProgressiveStageList*)                Widget_ProgressiveStageList                                 ___ OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(UFortProgressiveItemStateTitleWidget*)     ProgressiveItemStateTitle                                   ___ OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          ___ OFFSET(get<T>, {0x7D8, 32, 0, 0})
	SMember(FName)                                     SubscribedMaterialParameterName                             ___ OFFSET(get<T>, {0x7F8, 4, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveItemStateTitleWidget
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UFortProgressiveItemStateTitleWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/CrewUI.FortProgressiveItemWidget
/// Size: 0x0090 (0x001470 - 0x001500)
class UFortProgressiveItemWidget : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(UAthenaItemShopReactiveTileText*)          TileText_ItemName                                           ___ OFFSET(get<T>, {0x1470, 8, 0, 0})
	SMember(FProgressiveStageItemInfo)                 StageItemInfo                                               ___ OFFSET(get<T>, {0x1478, 104, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveSetDetailsWidget
/// Size: 0x0030 (0x0002A8 - 0x0002D8)
class UFortProgressiveSetDetailsWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveSetList
/// Size: 0x0080 (0x0003E8 - 0x000468)
class UFortProgressiveSetList : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(UAthenaScrollBox*)                         ScrollBox_SetList                                           ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_SetTiles                                        ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	DMember(int32_t)                                   NumTilesPerPage                                             ___ OFFSET(get<int32_t>, {0x408, 4, 0, 0})
	CMember(TArray<UFortProgressiveSetTile*>)          SetTiles                                                    ___ OFFSET(get<T>, {0x410, 16, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveSetTile
/// Size: 0x00A0 (0x001470 - 0x001510)
class UFortProgressiveSetTile : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
};

/// Class /Script/CrewUI.FortProgressiveStageList
/// Size: 0x0050 (0x0003E8 - 0x000438)
class UFortProgressiveStageList : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_StageItems                                      ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UAthenaScrollBox*)                         ScrollBox_StageList                                         ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(TArray<UFortProgressiveStageWidget*>)      Stages                                                      ___ OFFSET(get<T>, {0x420, 16, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveStageWidget
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortProgressiveStageWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonTextBlock*)                         Text_Month                                                  ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveTableOfContentsScreen
/// Size: 0x0088 (0x000770 - 0x0007F8)
class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	CMember(UWidget*)                                  ContentPurchasedFocusWidget                                 ___ OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchBack                                            ___ OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             ___ OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Subscribe                                            ___ OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UFortProgressiveSetList*)                  Widget_SetList                                              ___ OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UFortProgressiveSetDetailsWidget*)         Widget_SetDetails                                           ___ OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UFortProgressiveItemStateTitleWidget*)     Widget_ItemStateTitle                                       ___ OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_SetPagesPips                                       ___ OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_SetPagesPips                                    ___ OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          ___ OFFSET(get<T>, {0x7C0, 32, 0, 0})
	SMember(FName)                                     SubscribedMaterialParameterName                             ___ OFFSET(get<T>, {0x7E0, 4, 0, 0})
};

/// Enum /Script/CrewUI.EBattlePassCrewContentState
/// Size: 0x04
enum EBattlePassCrewContentState : uint8_t
{
	EBattlePassCrewContentState__BattlePass0                                         = 0,
	EBattlePassCrewContentState__Crew1                                               = 1,
	EBattlePassCrewContentState__CrewSubscribed2                                     = 2,
	EBattlePassCrewContentState__EBattlePassCrewContentState_MAX3                    = 3
};

/// Enum /Script/CrewUI.EFortProgressiveContentInterfaceCloseReason
/// Size: 0x03
enum EFortProgressiveContentInterfaceCloseReason : uint8_t
{
	EFortProgressiveContentInterfaceCloseReason__Normal0                             = 0,
	EFortProgressiveContentInterfaceCloseReason__SubscriptionPurchased1              = 1,
	EFortProgressiveContentInterfaceCloseReason__EFortProgressiveContentInterfaceCloseReason_MAX2 = 2
};

/// Enum /Script/CrewUI.EFortProgressiveContentType
/// Size: 0x03
enum EFortProgressiveContentType : uint8_t
{
	EFortProgressiveContentType__ProgressiveTableOfContentsScreen0                   = 0,
	EFortProgressiveContentType__ProgressiveItemScreen1                              = 1,
	EFortProgressiveContentType__EFortProgressiveContentType_MAX2                    = 2
};

/// Enum /Script/CrewUI.EBattlePassPurchaseButtonCurrencyType
/// Size: 0x04
enum EBattlePassPurchaseButtonCurrencyType : uint8_t
{
	EBattlePassPurchaseButtonCurrencyType__None0                                     = 0,
	EBattlePassPurchaseButtonCurrencyType__Mtx1                                      = 1,
	EBattlePassPurchaseButtonCurrencyType__RealMoney2                                = 2,
	EBattlePassPurchaseButtonCurrencyType__EBattlePassPurchaseButtonCurrencyType_MAX3 = 3
};

/// Enum /Script/CrewUI.EBattlePassPurchaseState
/// Size: 0x03
enum EBattlePassPurchaseState : uint8_t
{
	EBattlePassPurchaseState__Purchase0                                              = 0,
	EBattlePassPurchaseState__Confirm1                                               = 1,
	EBattlePassPurchaseState__EBattlePassPurchaseState_MAX2                          = 2
};

/// Enum /Script/CrewUI.ECrewPurchaseButtonState
/// Size: 0x04
enum ECrewPurchaseButtonState : uint8_t
{
	ECrewPurchaseButtonState__None0                                                  = 0,
	ECrewPurchaseButtonState__Purchase1                                              = 1,
	ECrewPurchaseButtonState__Rejoin2                                                = 2,
	ECrewPurchaseButtonState__ECrewPurchaseButtonState_MAX3                          = 3
};

