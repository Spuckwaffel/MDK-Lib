/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EventScreenBase.

/// Struct /Script/EventScreenBase.EventItemOverride
/// Size: 0x0068 (0x000000 - 0x000068)
class FEventItemOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ItemDefinition                                              ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CustomItemTexture                                           ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CustomItemTextureMobile                                     ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bIsDoubleWidth                                              ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenTrackData
/// Size: 0x0020 (0x000000 - 0x000020)
class FEventScreenTrackData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FLinearColor)                              TrackColorPrimary                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              TrackColorSecondary                                         ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenMoreInfoGroup
/// Size: 0x0040 (0x000000 - 0x000040)
class FEventScreenMoreInfoGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Header                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Body                                                        ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FString)                                   IconURL                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSResourceGroupOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FEventScreenCMSResourceGroupOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ResourceValue                                               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   KeyArtOverrideURL                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSData
/// Size: 0x02A8 (0x000000 - 0x0002A8)
class FEventScreenCMSData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FString)                                   EventCMSId                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     EventName                                                   ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FText)                                     EventDescription                                            ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     ResourceHeader                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FText)                                     StarterHeader                                               ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FText)                                     CompletionHeader                                            ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FText)                                     EventCTA                                                    ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FText)                                     EventCTACompleted                                           ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FText)                                     HeaderCTA                                                   ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FText)                                     ItemShopCallout                                             ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FString)                                   CTAIconURL                                                  ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   KeyArtURL                                                   ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FText)                                     MoreInfoHeader                                              ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     MoreInfoSubHeader                                           ___ OFFSET(get<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     MoreInfoLegal                                               ___ OFFSET(get<T>, {0x138, 24, 0, 0})
	CMember(TArray<FEventScreenMoreInfoGroup>)         MoreInfoGroups                                              ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FText)                                     PurchaseLegal                                               ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FText)                                     RewardTrackLegal                                            ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FString)                                   ItemShopOfferId                                             ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	SMember(FText)                                     PremiumUpsellUnownedHeader                                  ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellUnownedBody                                    ___ OFFSET(get<T>, {0x1B8, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellOwnedHeader                                    ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellOwnedBody                                      ___ OFFSET(get<T>, {0x1E8, 24, 0, 0})
	SMember(FString)                                   PremiumUpsellIconURL                                        ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(FText)                                     PurchasePremiumTrackHeader                                  ___ OFFSET(get<T>, {0x210, 24, 0, 0})
	CMember(TArray<FText>)                             PurchasePremiumTrackBodyList                                ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FText)                                     InspectSpecialItemUnowned                                   ___ OFFSET(get<T>, {0x238, 24, 0, 0})
	SMember(FText)                                     InspectSpecialItemOwned                                     ___ OFFSET(get<T>, {0x250, 24, 0, 0})
	SMember(FText)                                     InspectSpecialPremiumItemUnowned                            ___ OFFSET(get<T>, {0x268, 24, 0, 0})
	SMember(FText)                                     InspectSpecialPremiumItemOwned                              ___ OFFSET(get<T>, {0x280, 24, 0, 0})
	CMember(TArray<FEventScreenCMSResourceGroupOverride>) ResourceGroupOverrides                                   ___ OFFSET(get<T>, {0x298, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSGroup
/// Size: 0x0010 (0x000000 - 0x000010)
class FEventScreenCMSGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FEventScreenCMSData>)               EventScreens                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventScreenData
/// Size: 0x0640 (0x000030 - 0x000670)
class UFortEventScreenData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FString)                                   EventCMSId                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   AccountResourceName                                         ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   LevelOfferId                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   PremiumTrackOfferId                                         ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(UFortTokenType*)                           PremiumTrackPurchasedToken                                  ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FGameplayTag)                              VaultWorldTag                                               ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FVaultWorldBackgroundData)                 PreviewScreenBackgroundData                                 ___ OFFSET(get<T>, {0x80, 88, 0, 0})
	CMember(TWeakObjectPtr<UFortChallengeBundleItemDefinition*>) QuestBundle                                       ___ OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SpecialRewardItem                                           ___ OFFSET(get<T>, {0xF8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SpecialPremiumRewardItem                                    ___ OFFSET(get<T>, {0x118, 32, 0, 0})
	CMember(TArray<FEventItemOverride>)                ItemOverrides                                               ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FEventScreenTrackData)                     FreeTrackData                                               ___ OFFSET(get<T>, {0x148, 32, 0, 0})
	SMember(FEventScreenTrackData)                     PremiumTrackData                                            ___ OFFSET(get<T>, {0x168, 32, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryTag                                            ___ OFFSET(get<T>, {0x188, 4, 0, 0})
	CMember(TArray<UClass*>)                           RichTextDecorators                                          ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(UMaterialInterface*)                       EventBackgroundMaterial                                     ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UMaterialInterface*)                       ProgressBarMaterial                                         ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FSlateBrush)                               CurrencyBrush                                               ___ OFFSET(get<T>, {0x1B0, 192, 0, 0})
	SMember(FSlateBrush)                               CompletionBannerBrush                                       ___ OFFSET(get<T>, {0x270, 192, 0, 0})
	SMember(FSlateBrush)                               GlowForeground                                              ___ OFFSET(get<T>, {0x330, 192, 0, 0})
	SMember(FSlateBrush)                               GlowBackground                                              ___ OFFSET(get<T>, {0x3F0, 192, 0, 0})
	SMember(FLinearColor)                              EventBackgroundColor1                                       ___ OFFSET(get<T>, {0x4B0, 16, 0, 0})
	SMember(FLinearColor)                              EventBackgroundColor2                                       ___ OFFSET(get<T>, {0x4C0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor1                                      ___ OFFSET(get<T>, {0x4D0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor2                                      ___ OFFSET(get<T>, {0x4E0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor3                                      ___ OFFSET(get<T>, {0x4F0, 16, 0, 0})
	SMember(FLinearColor)                              AccentColor                                                 ___ OFFSET(get<T>, {0x500, 16, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 RewardTileBackgroundColors                                  ___ OFFSET(get<T>, {0x510, 80, 0, 0})
	SMember(FText)                                     TimeRemainingFormat                                         ___ OFFSET(get<T>, {0x560, 24, 0, 0})
	SMember(FText)                                     CurrencyFormat                                              ___ OFFSET(get<T>, {0x578, 24, 0, 0})
	CMember(USoundBase*)                               DefaultHoveredSound                                         ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(USoundBase*)                               DefaultPressedSound                                         ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USoundBase*)                               BuyPressedSound                                             ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(USoundBase*)                               BuyHoldStartedSound                                         ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(USoundBase*)                               BuyHoldCompletedSound                                       ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(USoundBase*)                               BuyHoldAbortedSound                                         ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(USoundBase*)                               BackPressedSound                                            ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(USoundBase*)                               AddPressedSound                                             ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(USoundBase*)                               SubtractPressedSound                                        ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(USoundBase*)                               ProgressStartedSound                                        ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(USoundBase*)                               ProgressEndedSound                                          ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(USoundBase*)                               ProgressInterruptedSound                                    ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(float)                                     RewardPreviewZoomLevel                                      ___ OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(bool)                                      bUseWidgetCameraFraming                                     ___ OFFSET(get<bool>, {0x5F4, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          ___ OFFSET(get<T>, {0x5F8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PurchaseLevelsModalClass                                    ___ OFFSET(get<T>, {0x618, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PurchasePremiumTrackModalClass                              ___ OFFSET(get<T>, {0x638, 32, 0, 0})
	CMember(TArray<FString>)                           CalendarEvents                                              ___ OFFSET(get<T>, {0x658, 16, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventModalBase
/// Size: 0x0008 (0x0003E8 - 0x0003F0)
class UFortEventModalBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
};

/// Class /Script/EventScreenBase.FortEventMoreInfoGroup
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UFortEventMoreInfoGroup : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/EventScreenBase.FortEventMoreInfoModal
/// Size: 0x0028 (0x0003F0 - 0x000418)
class UFortEventMoreInfoModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_Groups                                      ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseMobile                                          ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UScrollBox*)                               SB_Vertical                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventPurchaseLevelsModal
/// Size: 0x0070 (0x0003F0 - 0x000460)
class UFortEventPurchaseLevelsModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Purchase                                             ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GetVBucks                                            ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseMobile                                          ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UEventScreenListView*)                     ListView_RewardPreview                                      ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(int32_t)                                   CurrentResourceValue                                        ___ OFFSET(get<int32_t>, {0x428, 4, 0, 0})
	DMember(int32_t)                                   MaxResourceValue                                            ___ OFFSET(get<int32_t>, {0x42C, 4, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               ___ OFFSET(get<int32_t>, {0x430, 4, 0, 0})
	DMember(int32_t)                                   OfferResourceQuantity                                       ___ OFFSET(get<int32_t>, {0x434, 4, 0, 0})
	DMember(bool)                                      bAnimateListViewFromEmpty                                   ___ OFFSET(get<bool>, {0x438, 1, 0, 0})
};

/// Class /Script/EventScreenBase.FortPurchasePremiumTrackBody
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UFortPurchasePremiumTrackBody : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/EventScreenBase.FortEventPurchasePremiumTrackModal
/// Size: 0x0070 (0x0003F0 - 0x000460)
class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_Body                                        ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Body                                              ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_Purchase                                             ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GetVBucks                                            ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseMobile                                          ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviewReward                                        ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               ___ OFFSET(get<int32_t>, {0x428, 4, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventListViewWidgetBase
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UFortEventListViewWidgetBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/EventScreenBase.FortEventRewardTracksWidget
/// Size: 0x0050 (0x0002B0 - 0x000300)
class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_RewardTracks                                ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	DMember(bool)                                      bPreviewMode                                                ___ OFFSET(get<bool>, {0x2B8, 1, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventSpacerWidget
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UFortEventSpacerWidget : public UFortEventListViewWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/EventScreenBase.FortEventRewardWidget
/// Size: 0x0090 (0x0002A8 - 0x000338)
class UFortEventRewardWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UCommonButtonBase*)                        Button_RewardPreview                                        ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UFortCosmeticItemCard*)                    UserWidget_ItemCard                                         ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bIsTrackOwned                                               ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bPreviewMode                                                ___ OFFSET(get<bool>, {0x2C1, 1, 0, 0})
	DMember(bool)                                      bInPreviewSelectedState                                     ___ OFFSET(get<bool>, {0x2C2, 1, 0, 0})
	DMember(bool)                                      bInPremiumUpgradeState                                      ___ OFFSET(get<bool>, {0x2C3, 1, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventScreenBase
/// Size: 0x0440 (0x000708 - 0x000B48)
class UFortEventScreenBase : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
	CMember(TArray<UNamedSlot*>)                       LayoutTemplateSlots                                         ___ OFFSET(get<T>, {0x710, 16, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_KeyArt                                            ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ViewQuests                                           ___ OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             ___ OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PurchaseLevels                                       ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Preview                                              ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowInItemShop                                       ___ OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Previous                                             ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Next                                                 ___ OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UFortEventTrackerModule_CustomText*)       CustomText_InspectItem                                      ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_LoadError                                             ___ OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Close                                                ___ OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileClose                                          ___ OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemDescription                                        ___ OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               ___ OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SetDetails                                             ___ OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UAthenaRewardItemTypeRarityTag*)           ItemRewardTag                                               ___ OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UFortEventScreenData*)                     EventScreenData                                             ___ OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(EEventScreenRewardPreviewType)             ActiveRewardPreviewType                                     ___ OFFSET(get<T>, {0x7A8, 1, 0, 0})
	CMember(UFortChallengeBundleItemDefinition*)       LoadedQuestBundle                                           ___ OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(AFortItemPreviewWorld*)                    CachedVaultWorld                                            ___ OFFSET(get<T>, {0x7B8, 8, 0, 0})
	DMember(float)                                     TimeBetweenVariantsRestart                                  ___ OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(float)                                     TimeBetweenVariants                                         ___ OFFSET(get<float>, {0x7D4, 4, 0, 0})
	CMember(TArray<FFortCosmeticVariantPreview>)       CachedVariantPreviews                                       ___ OFFSET(get<T>, {0x7D8, 16, 0, 0})
};

/// Class /Script/EventScreenBase.EventScreenListView
/// Size: 0x01E0 (0x000298 - 0x000478)
class UEventScreenListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationStartedEvent                          ___ OFFSET(get<T>, {0x380, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationCompletedEvent                        ___ OFFSET(get<T>, {0x390, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationInterruptedEvent                      ___ OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResourcePreviewOffsetAnimationEvent                       ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
	CMember(UClass*)                                   RewardTrackWidgetClass                                      ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UClass*)                                   SpacerWidgetClass                                           ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	DMember(float)                                     EntrySpacing                                                ___ OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(bool)                                      bCenterSelection                                            ___ OFFSET(get<bool>, {0x3F4, 1, 0, 0})
	DMember(float)                                     MaxItemsInView                                              ___ OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(bool)                                      bPreviewMode                                                ___ OFFSET(get<bool>, {0x3FC, 1, 0, 0})
	CMember(UCurveFloat*)                              ProgressAnimationCurve                                      ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	DMember(bool)                                      bCanAnimateOnceComplete                                     ___ OFFSET(get<bool>, {0x408, 1, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventTokenCollectionWidget
/// Size: 0x0060 (0x0002A8 - 0x000308)
class UFortEventTokenCollectionWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UCommonLazyImage*)                         LazyImage_GhostIcon                                         ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonLazyImage*)                         LazyImage_CompletedIcon                                     ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UImage*)                                   Image_Glow                                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               FallbackBrush                                               ___ OFFSET(get<T>, {0x2C0, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortTokenType*>)           TokenDefinition                                             ___ OFFSET(get<T>, {0x2E0, 32, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventTrackerModule
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UFortEventTrackerModule : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_EventDetails
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Header
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UFortEventTrackerModule_Header : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardDetails
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UCommonButtonBase*)                        Button_PurchasePremium                                      ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UEventScreenListView*)                     ListView_Rewards                                            ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Collection
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UFortEventTrackerModule_Collection : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Banner
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UFortEventTrackerModule_Banner : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UFortLazyImage*)                           LazyImage_BannerArt                                         ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell
/// Size: 0x0070 (0x0002B0 - 0x000320)
class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UFortCTAButton*)                           Button_Prompt                                               ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FText)                                     PromptTextUnowned                                           ___ OFFSET(get<T>, {0x2B8, 24, 0, 0})
	SMember(FText)                                     PromptTextOwned                                             ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_CustomText
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Enum /Script/EventScreenBase.EEventScreenView
/// Size: 0x08
enum EEventScreenView : uint8_t
{
	EEventScreenView__None0                                                          = 0,
	EEventScreenView__LandingPage1                                                   = 1,
	EEventScreenView__RewardPreview2                                                 = 2,
	EEventScreenView__MoreInfo3                                                      = 3,
	EEventScreenView__PurchaseLevels4                                                = 4,
	EEventScreenView__PurchasePremiumTrack5                                          = 5,
	EEventScreenView__LoadError6                                                     = 6,
	EEventScreenView__EEventScreenView_MAX7                                          = 7
};

/// Enum /Script/EventScreenBase.EEventScreenRewardPreviewType
/// Size: 0x05
enum EEventScreenRewardPreviewType : uint8_t
{
	EEventScreenRewardPreviewType__None0                                             = 0,
	EEventScreenRewardPreviewType__RewardTrack1                                      = 1,
	EEventScreenRewardPreviewType__SpecialItem2                                      = 2,
	EEventScreenRewardPreviewType__SpecialPremiumItem3                               = 3,
	EEventScreenRewardPreviewType__EEventScreenRewardPreviewType_MAX4                = 4
};

