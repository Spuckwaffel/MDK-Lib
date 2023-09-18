/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FortniteConversationUI.

/// Class /Script/FortniteConversationUI.FortConversationOptionBrief
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class UFortConversationOptionBrief : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/FortniteConversationUI.FortItemTransactionBrief
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class UFortItemTransactionBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortItem*)                                DisplayItem                                                 ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortApplyAbilityBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortApplyAbilityBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     PurchaseServiceText                                         ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Display                                                ___ OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortBasicBrief
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class UFortBasicBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/FortniteConversationUI.FortBasicItemBrief
/// Size: 0x0070 (0x0002D0 - 0x000340)
class UFortBasicItemBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UCommonTextBlock*)                         Text_TitleBar                                               ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortItem*)                                DisplayItem                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             ___ OFFSET(get<T>, {0x2F0, 80, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortBuyBrief
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortBuyBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/FortniteConversationUI.FortConversationMarker
/// Size: 0x00D8 (0x0003B8 - 0x000490)
class UFortConversationMarker : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FVector)                                   InitialOffset                                               ___ OFFSET(get<T>, {0x3F0, 24, 0, 0})
	SMember(FVector)                                   ManualOffset                                                ___ OFFSET(get<T>, {0x408, 24, 0, 0})
	DMember(float)                                     MessageBubbleDuration                                       ___ OFFSET(get<float>, {0x420, 4, 0, 0})
	DMember(float)                                     LastTextBubbleDuration                                      ___ OFFSET(get<float>, {0x424, 4, 0, 0})
	DMember(bool)                                      bSetCustomInteractionWidgetOnlyWhenNeeded                   ___ OFFSET(get<bool>, {0x428, 1, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_States                                             ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_PreviewState                                        ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortConversationMessageWidget*)           ConversationMessage_Main                                    ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ParticipantName                                        ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_Nameplate                                           ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   NPCIcon                                                     ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UTexture2D*)                               CustomDialogMarkerIndicatorIcon                             ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UTexture2D*)                               DefaultDialogMarkerIndicatorIcon                            ___ OFFSET(get<T>, {0x480, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortConversationMessageWidget
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UFortConversationMessageWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/FortniteConversationUI.FortConversationOption
/// Size: 0x00A0 (0x001520 - 0x0015C0)
class UFortConversationOption : public UFortRadialPickerEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
	CMember(USoundBase*)                               OnOptionConfirmedSound                                      ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(USoundBase*)                               OnOptionHoveredSound                                        ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_DisplayAsset                                       ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  DefaultSoftTaskIcon                                         ___ OFFSET(get<T>, {0x1540, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DefaultConfirmChoiceSound                                   ___ OFFSET(get<T>, {0x1560, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DefaultHoverChoiceSound                                     ___ OFFSET(get<T>, {0x1580, 32, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortConversationOptionsPanel
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UFortConversationOptionsPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   MaxRows                                                     ___ OFFSET(get<int32_t>, {0x1A0, 4, 0, 0})
	DMember(int32_t)                                   MiddleColumnWidth                                           ___ OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortConversationScreen
/// Size: 0x01C8 (0x0003E8 - 0x0005B0)
class UFortConversationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UCommonVisibilitySwitcher*)                Switcher_Details                                            ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UInputComponent*)                          ConversationInputComp                                       ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(int32_t)                                   CurrentlySelectedIndex                                      ___ OFFSET(get<int32_t>, {0x448, 4, 0, 0})
	DMember(bool)                                      bBlockOptionIntroAnimation                                  ___ OFFSET(get<bool>, {0x44C, 1, 0, 0})
	SMember(FName)                                     RadialSelectionMaterialParameterName                        ___ OFFSET(get<T>, {0x450, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagPriorities                                               ___ OFFSET(get<T>, {0x458, 16, 0, 0})
	SMember(FName)                                     InteractActionNameKBM                                       ___ OFFSET(get<T>, {0x468, 4, 0, 0})
	SMember(FName)                                     ADSInputAction                                              ___ OFFSET(get<T>, {0x46C, 4, 0, 0})
	SMember(FName)                                     InteractActionNameGamepad                                   ___ OFFSET(get<T>, {0x470, 4, 0, 0})
	SMember(FDataTableRowHandle)                       ConfirmBinding                                              ___ OFFSET(get<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MakeSelectionBinding                                        ___ OFFSET(get<T>, {0x488, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ADSMouseBinding                                             ___ OFFSET(get<T>, {0x498, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CancelActionBinding                                         ___ OFFSET(get<T>, {0x4A8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RightTriggerBinding                                         ___ OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             DetailsNodeTypeToBrief                                      ___ OFFSET(get<T>, {0x4C8, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ChatBrief                                                   ___ OFFSET(get<T>, {0x518, 32, 0, 0})
	SMember(FString)                                   DataDrivenBriefPrefix                                       ___ OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DataDrivenBrief                                             ___ OFFSET(get<T>, {0x548, 32, 0, 0})
	CMember(UFortSlottedRadialMenu*)                   RadialMenu_DialogOptions                                    ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UImage*)                                   Image_RadialHighlight                                       ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_Confirm                                             ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortBasicBrief*)                          BasicBrief_Main                                             ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_RadialMenu                                          ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_Details                                             ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_WheelContainer                                      ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UImage*)                                   Image_Background                                            ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UImage*)                                   Image_LoadingSpinner                                        ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortDataDrivenServiceBrief
/// Size: 0x0078 (0x0002D0 - 0x000348)
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UCommonTextBlock*)                         Text_TitleBar                                               ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Description                                        ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_StockRemaining                                         ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             ___ OFFSET(get<T>, {0x2F8, 80, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortDuelBrief
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortDuelBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FText)                                     TextTemplate                                                ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTileView*)                          TileView                                                    ___ OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortHireBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortHireBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     TextTemplate                                                ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortIntelBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortIntelBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     TextTemplate                                                ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortItemFundBrief
/// Size: 0x0130 (0x0002D0 - 0x000400)
class UFortItemFundBrief : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(UCommonTextBlock*)                         Text_TitleBar                                               ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ProgressPercent                                        ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ProgressCount                                          ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UFortSimpleMaterialProgressBar*)           Progress_Funding                                            ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_Icon                                              ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             ___ OFFSET(get<T>, {0x3B0, 80, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortSingleItemFundBrief
/// Size: 0x0068 (0x0002D0 - 0x000338)
class UFortSingleItemFundBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UFortItemFundBrief*)                       Item_Entry                                                  ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortNPCTextDisplay*)                      NPCTextDisplay                                              ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             ___ OFFSET(get<T>, {0x2E8, 80, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortMultiItemFundBrief
/// Size: 0x0010 (0x000338 - 0x000348)
class UFortMultiItemFundBrief : public UFortSingleItemFundBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UFortItemFundBrief*)                       Item_EntrySecondary                                         ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UFortItemFundBrief*)                       Item_EntryTertiary                                          ___ OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortNPCTextDisplay
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UFortNPCTextDisplay : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UCommonRichTextBlock*)                     Text_Message                                                ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_NPCImage                                          ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortPlayerConversationUIComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UFortPlayerConversationUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TWeakObjectPtr<UClass*>)                   DialogWidgetSoftClass                                       ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DialogMarkerSoftClass                                       ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MobileDialogWidgetSoftClass                                 ___ OFFSET(get<T>, {0xE8, 32, 0, 0})
	CMember(TArray<UDynamicUIScene*>)                  SpectatorConversationScenes                                 ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<UDynamicUIScene*>)                  SpectatorMobileConversationScenes                           ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(UClass*)                                   DialogWidgetClass                                           ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(UClass*)                                   DialogMarkerClass                                           ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FUserWidgetPool)                           DialogWidgetPool                                            ___ OFFSET(get<T>, {0x138, 136, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortQuestBrief
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UFortQuestBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FText)                                     ThisMatchOnlyQuestText                                      ___ OFFSET(get<T>, {0x2D8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_MoneyReward                                            ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_XpReward                                               ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ExpirationTime                                         ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonLazyImage*)                         LazyImage_QuestProviderImage                                ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_QuestProvider                                       ___ OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortShowFutureStormCircleBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     PurchaseServiceText                                         ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Display                                                ___ OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortSingleOrMultiItemFundBrief
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UFortSingleOrMultiItemFundBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SingleItemBrief                                             ___ OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MultiItemsBrief                                             ___ OFFSET(get<T>, {0x2F8, 32, 0, 0})
	CMember(UOverlay*)                                 Overlay_Brief                                               ___ OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortTransactionStrip
/// Size: 0x0058 (0x0002A8 - 0x000300)
class UFortTransactionStrip : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UCommonTextBlock*)                         Text_CostDescription                                        ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) CachedGlobalCurrency                                        ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UFortWorldItemDefinition*)                 ResourceCurrency                                            ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortUpgradeBrief
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortUpgradeBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/FortniteConversationUI.MobileConversationScreen
/// Size: 0x0030 (0x0005B0 - 0x0005E0)
class UMobileConversationScreen : public UFortConversationScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(UButton*)                                  MobileButtonConfirm                                         ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UButton*)                                  MobileButtonTouchInformation                                ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        MobileCloseButton                                           ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_CenteredDetails                                    ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
};

/// Enum /Script/FortniteConversationUI.ECannotBuyReason
/// Size: 0x03
enum ECannotBuyReason : uint8_t
{
	ECannotBuyReason__CannotAfford0                                                  = 0,
	ECannotBuyReason__OutOfStock1                                                    = 1,
	ECannotBuyReason__ECannotBuyReason_MAX2                                          = 2
};

