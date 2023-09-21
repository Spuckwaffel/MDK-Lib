
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonInput
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Environments
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: PlayerAugmentsUI
/// dependency: SocialUMG
/// dependency: SrirachaRanchUI
/// dependency: UMG

/// Class /Game/UI/Foundation/SoftwareCursors/ArrowCursorWidget.ArrowCursorWidget_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UArrowCursorWidget_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/UI/Foundation/RichTextData/CommonUIRichTextData.CommonUIRichTextData_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UCommonUIRichTextData_C : public UCommonUIRichTextData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base.TextStyle-Base_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-HeaderParent.TextStyle-HeaderParent_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_HeaderParent_C : public UTextStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M.TextStyle-Header-M_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-NavyBlue.TextStyle-Header-M-NavyBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_NavyBlue_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Base.ButtonStyle-Base_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Base_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-TextOnlyBase_Empty.ButtonStyle-TextOnlyBase_Empty_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_TextOnlyBase_Empty_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-BaseParent.TextStyle-BaseParent_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BaseParent_C : public UTextStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListView.CurrencyListView_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UCurrencyListView_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonListView*)                          DataListView                                                ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UCurrencyListViewItem_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CurrencyMessage                                             ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FText)                                     DisplayMessage                                              ___ OFFSET(get<T>, {0x2B8, 24, 0, 0})
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedAccountWidget.ItemReceivedAccountWidget_C
/// Size: 0x0010 (0x000308 - 0x000318)
class UItemReceivedAccountWidget_C : public UFortAccountWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock_UserMessage                                 ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListObject.CurrencyListObject_C
/// Size: 0x0050 (0x000028 - 0x000078)
class UCurrencyListObject_C : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FCurrencyData)                             Data                                                        ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
/// Size: 0x0031 (0x0002C0 - 0x0002F1)
class UItemReceivedHeaderSubWidgetBase_C : public UItemReceivedHeaderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 753;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UFortGiftBoxItem*)                         GiftBoxItem_BP                                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FString)                                   FromUserName_BP                                             ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FFortReceivedItemLootInfo>)         ItemDefs                                                    ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      bSelfGift                                                   ___ OFFSET(get<bool>, {0x2F0, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-B.TextStyle-Base-XXS-B_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_B_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/InGame/Mission/SpeechBubbleWidget.SpeechBubbleWidget_C
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class USpeechBubbleWidget_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BubbleText                                                  ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Game/UI/Foundation/MessageCenter/BattlePassPageUnlockNotification.BattlePassPageUnlockNotification_C
/// Size: 0x0000 (0x000130 - 0x000130)
class UBattlePassPageUnlockNotification_C : public UFortUIBattlePassPageUnlockNotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Game/UI/Foundation/MessageCenter/BasicNotification.BasicNotification_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UBasicNotification_C : public UFortUINotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Game/UI/Foundation/MessageCenter/FriendNotification.FriendNotification_C
/// Size: 0x0008 (0x000148 - 0x000150)
class UFriendNotification_C : public UFortUIFriendNotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C
/// Size: 0x0008 (0x000620 - 0x000628)
class AImpactNumbers_C : public AFortDamageNumbersActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1576;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x620, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_LDarkBlue.ButtonStyle-Skew_LDarkBlue_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_LDarkBlue_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M_Black.TextStyle-Header-M_Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_Black_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Frontend/StoreMain/StoreSelectionPopup.StoreSelectionPopup_C
/// Size: 0x0028 (0x000558 - 0x000580)
class UStoreSelectionPopup_C : public UFortMtxStoreSelectionPopup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UImage*)                                   SpeedLines                                                  ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         StorePrompt_Header                                          ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(USoundBase*)                               WhooshSound                                                 ___ OFFSET(get<T>, {0x578, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/TopBar/ButtonStyle-Yellow-NewCTA.ButtonStyle-Yellow-NewCTA_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Yellow_NewCTA_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M.TextStyle-Base-M_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M-B.TextStyle-Base-M-B_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_B_C : public UTextStyle_Base_M_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbReg-Black-22.TextStyle-BurbReg-Black-22_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbReg_Black_22_C : public UTextStyle_Base_M_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C
/// Size: 0x0078 (0x0002A8 - 0x000320)
class UInfoFlag_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   BG_Gradient                                                 ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox                                                     ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UImage*)                                   Trim                                                        ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FLinearColor)                              TrimColor                                                   ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FLinearColor)                              GradientColor                                               ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(double)                                    TrimWidth                                                   ___ OFFSET(get<double>, {0x2F0, 8, 0, 0})
	SMember(FText)                                     InfoText                                                    ___ OFFSET(get<T>, {0x2F8, 24, 0, 0})
	DMember(double)                                    GradientDistance                                            ___ OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(double)                                    MaxWidth                                                    ___ OFFSET(get<double>, {0x318, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C
/// Size: 0x0068 (0x000560 - 0x0005C8)
class URedeemFriendCodeWindow_C : public UFortRedeemCodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCloseButton_C*)                           Button_Cancel                                               ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UIconTextButton_C*)                        CancelButton                                                ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          EntryProgressSwitcher                                       ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UVerticalBox*)                             EntryVBox                                                   ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ErrorText                                                   ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USizeBox*)                                 ProgressSizeBox                                             ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ProgressText                                                ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UVerticalBox*)                             ProgressVBox                                                ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        RedeemButton                                                ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Class /Game/UI/Frontend/StoreMain/Store_BannerMessage.Store_BannerMessage_C
/// Size: 0x0010 (0x0002D8 - 0x0002E8)
class UStore_BannerMessage_C : public UFortStoreBanner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UWidgetAnimation*)                         Ani_Intro                                                   ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UImage*)                                   AnimatingBorder                                             ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B-S-Red.TextStyle-Base-XS-B-S-Red_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_S_Red_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Items/ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/UI/Foundation/Text/TextScrollStyle-Base.TextScrollStyle-Base_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UTextScrollStyle_Base_C : public UCommonTextScrollStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M-I.TextStyle-Base-M-I_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_I_C : public UTextStyle_Base_M_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Primary-M.TextStyle-Button-Primary-M_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Primary_M_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Primary-M-Disabled.TextStyle-Button-Primary-M-Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Primary_M_Disabled_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-MediumButton.TextStyle-MediumButton_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_MediumButton_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_S.ItemCardPowerRatingTextStyle_S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UItemCardPowerRatingTextStyle_S_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_XS.ItemCardPowerRatingTextStyle_XS_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UItemCardPowerRatingTextStyle_XS_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_XL.ItemCardPowerRatingTextStyle_XL_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UItemCardPowerRatingTextStyle_XL_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-BottomBar-S.TextStyle-Button-BottomBar-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_BottomBar_S_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-BottomBar-S-Selected.TextStyle-Button-BottomBar-S-Selected_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_BottomBar_S_Selected_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-MediumButton-Disabled.TextStyle-MediumButton-Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_MediumButton_Disabled_C : public UTextStyle_MediumButton_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S.TextStyle-Base-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B.TextStyle-Base-S-B_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_C : public UTextStyle_Base_S_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-Blue.TextStyle-Base-S-B-Blue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_Blue_C : public UTextStyle_Base_S_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-ToolTip-B.TextStyle-Base-ToolTip-B_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_ToolTip_B_C : public UTextStyle_Base_S_B_Blue_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-ToolTip-Body.TextStyle-Base-ToolTip-Body_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_ToolTip_Body_C : public UTextStyle_Base_S_B_Blue_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS.TextStyle-Base-XS_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B.TextStyle-Base-XS-B_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Outline.TextStyle-Button-Outline_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Outline_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Outline-Disabled.TextStyle-Button-Outline-Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Outline_Disabled_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Tab-Secondary.TextStyle-Tab-Secondary_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Tab_Secondary_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Tab-Secondary-Disabled.TextStyle-Tab-Secondary-Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Tab_Secondary_Disabled_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-40pc.TextStyle-Base-S-B-40pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_40pc_C : public UTextStyle_Base_S_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-40pc.TextStyle-Base-XS-40pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_40pc_C : public UTextStyle_Base_XS_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_15_Red.TextStyle_BurbSmBk_15_Red_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_15_Red_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-Gray.TextStyle-Base-S-Gray_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_Gray_C : public UTextStyle_Base_S_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_15_White.TextStyle_BurbSmBk_15_White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_15_White_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_15_White50pc.TextStyle_BurbSmBk_15_White50pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_15_White50pc_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_15_DarkBlue.TextStyle_BurbSmBk_15_DarkBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_15_DarkBlue_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_15_LightBlue.TextStyle_BurbSmBk_15_LightBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_15_LightBlue_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-Blue-40.TextStyle-Base-S-B-Blue-40_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_Blue_40_C : public UTextStyle_Base_S_B_Blue_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-L.TextStyle-Base-L_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_L_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-L-B.TextStyle-Base-L-B_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_L_B_C : public UTextStyle_Base_L_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-Blue.TextStyle-Base-XS-Blue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_Blue_C : public UTextStyle_Base_XS_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B-DarkBlueFade.TextStyle-Base-XS-B-DarkBlueFade_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_DarkBlueFade_C : public UTextStyle_Base_XS_Blue_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-Gray.TextStyle-Base-S-B-Gray_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_Gray_C : public UTextStyle_Base_S_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M-B_Blue.TextStyle-Base-M-B_Blue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_B_Blue_C : public UTextStyle_Base_M_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-Gray50.TextStyle-Base-S-B-Gray50_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_Gray50_C : public UTextStyle_Base_S_B_Gray_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_M.ItemCardPowerRatingTextStyle_M_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UItemCardPowerRatingTextStyle_M_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-XS-Gray.TextStyle-BurbankSmall-XS-Gray_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_XS_Gray_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_L.ItemCardPowerRatingTextStyle_L_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UItemCardPowerRatingTextStyle_L_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-XS-Cyan.TextStyle-BurbankSmall-XS-Cyan_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_XS_Cyan_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-Blue.TextStyle-Header-M-Blue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_Blue_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-L.TextStyle-Header-L_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_L_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-XL.TextStyle-Header-XL_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_XL_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-Yellow.TextStyle-Header-M-Yellow_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_Yellow_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-MediumBase.ButtonStyle-MediumBase_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_MediumBase_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-MediumTransparentNoCues.ButtonStyle-MediumTransparentNoCues_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_MediumTransparentNoCues_C : public UButtonStyle_MediumBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Icon_Transparent.ButtonStyle-Icon_Transparent_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Icon_Transparent_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-GamepadBindings.ButtonStyle-GamepadBindings_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_GamepadBindings_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-MediumTransparentWithCues.ButtonStyle-MediumTransparentWithCues_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_MediumTransparentWithCues_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Input/CommonUI_HoldData_Base.CommonUI_HoldData_Base_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UCommonUI_HoldData_Base_C : public UCommonUIHoldData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/UI/Utilities/EditableTextUtilities.EditableTextUtilities_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableTextUtilities_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class Uwindowchromebuttons_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeOut                                                     ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeIn                                                      ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWindowTitleBarArea*)                      WindowTitleBarArea                                          ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/SocialPanelTab.SocialPanelTab_C
/// Size: 0x0028 (0x001520 - 0x001548)
class USocialPanelTab_C : public UFortSocialTab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5448;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unselected                                                  ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnFriendsOnlineUpdated                                      ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
};

/// Class /Game/UI/Frontend/Settings/ColorCalibration.ColorCalibration_C
/// Size: 0x0010 (0x000528 - 0x000538)
class UColorCalibration_C : public UFortColorCalibrationScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	CMember(UFortHUDElementWrapper_C*)                 FortHUDElementWrapper                                       ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UImage*)                                   ImageMask                                                   ___ OFFSET(get<T>, {0x530, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-XL-BrightBlue.TextStyle-Header-XL-BrightBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_XL_BrightBlue_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-HomeBasePower-XS.TextStyle-Header-HomeBasePower-XS_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_HomeBasePower_XS_C : public UTextStyle_Header_L_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-HomeBasePower.TextStyle-Header-HomeBasePower_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_HomeBasePower_C : public UTextStyle_Header_L_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Border/Border-ShellTopBar.Border-ShellTopBar_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_ShellTopBar_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Movie/VideoPlayerWidget.VideoPlayerWidget_C
/// Size: 0x0000 (0x0003B0 - 0x0003B0)
class UVideoPlayerWidget_C : public UFortVideoPlayerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-Horizon.TextStyle-Header-M-Horizon_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_Horizon_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-S_Gorse.TextStyle-Base-S-B-S_Gorse_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_S_Gorse_C : public UTextStyle_Base_S_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C
/// Size: 0x002D (0x0002D0 - 0x0002FD)
class UOptionsMenuHeader_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 765;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxContainer                                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(USpacer*)                                  SpacerBottom                                                ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextHeader                                                  ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   FontSizeMobile                                              ___ OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(ESettingType)                              LocalSettingType                                            ___ OFFSET(get<T>, {0x2FC, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextScrollStyle-NoFade.TextScrollStyle-NoFade_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UTextScrollStyle_NoFade_C : public UCommonTextScrollStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_Error.ButtonStyle-Skew_Error_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_Error_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_PageChevron_Right.ButtonStyle_PageChevron_Right_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_PageChevron_Right_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_PageChevron_Left.ButtonStyle_PageChevron_Left_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_PageChevron_Left_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/PowerRating/Border-PowerBar.Border-PowerBar_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_PowerBar_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Stats/HomebaseRatingBar.HomebaseRatingBar_C
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UHomebaseRatingBar_C : public UFortMaterialProgressBar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/Athena_ButtonStyle_BlueMenuButton_Settings.Athena_ButtonStyle_BlueMenuButton_Settings_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UAthena_ButtonStyle_BlueMenuButton_Settings_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C
/// Size: 0x0098 (0x0002D0 - 0x000368)
class ULightbox_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeOut                                                     ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeIn                                                      ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UBorder*)                                  Border_Darken                                               ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UButton*)                                  ClickCatcher                                                ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UNamedSlot*)                               Content                                                     ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UBorder*)                                  Dimmer                                                      ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonVisibilityWidgetLegacy*)            WindowButtons                                               ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UOverlay*)                                 WindowsOverlay                                              ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(Uwindowchromebuttons_C*)                   WindowTitleBar                                              ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  IntroEnded                                                  ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OutroEnded                                                  ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	DMember(bool)                                      ShowWindowControlButtons                                    ___ OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(double)                                    DimAmount                                                   ___ OFFSET(get<double>, {0x350, 8, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             ___ OFFSET(get<T>, {0x358, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C
/// Size: 0x0069 (0x000308 - 0x000371)
class UPlayerBanner_C : public UFortAccountWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 881;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   BannerImage                                                 ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         LoadGuard                                                   ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   SurroundImage                                               ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         SurroundLoadGuard                                           ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(bool)                                      bUseLargeTexture                                            ___ OFFSET(get<bool>, {0x330, 1, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwnerNetId                                                  ___ OFFSET(get<T>, {0x338, 48, 0, 0})
	SMember(FName)                                     CurrentBannerColorId                                        ___ OFFSET(get<T>, {0x368, 4, 0, 0})
	SMember(FName)                                     CurrentBannerIconId                                         ___ OFFSET(get<T>, {0x36C, 4, 0, 0})
	DMember(bool)                                      SurroundEnabled                                             ___ OFFSET(get<bool>, {0x370, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_SocialInteraction.ButtonStyle-Skew_SocialInteraction_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_SocialInteraction_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Border/Border-ItemInfo-Unlocked.Border-ItemInfo-Unlocked_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_ItemInfo_Unlocked_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-ItemInfo-Locked.Border-ItemInfo-Locked_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_ItemInfo_Locked_C : public UBorder_ItemInfo_Unlocked_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-Bang.Border-Bang_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_Bang_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C
/// Size: 0x0082 (0x0002E8 - 0x00036A)
class UNormalBangWrapper_C : public UFortBangWrapper_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 874;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         IntroSuperBang                                              ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         TutorialGlow                                                ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USizeBox*)                                 BangBox                                                     ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(USizeBox*)                                 BigBang                                                     ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(USizeBox*)                                 BigBangCount                                                ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UNamedSlot*)                               Content                                                     ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CountText                                                   ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          ModeSwitcher                                                ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USizeBox*)                                 SmallBang                                                   ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USizeBox*)                                 SmallBangCount                                              ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USizeBox*)                                 SuperBang                                                   ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonBorder*)                            TutorialBorder                                              ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      UseSmallVersion                                             ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x364, 4, 0, 0})
	DMember(bool)                                      bUseSuperBangNoCount                                        ___ OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      ShouldSuppressBang                                          ___ OFFSET(get<bool>, {0x369, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Border/Border_Navy_VGrad.Border_Navy_VGrad_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_Navy_VGrad_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-MainL.Border-MainL_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_MainL_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-MainModal.Border-MainModal_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_MainModal_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border_LightBlue_VGrad.Border_LightBlue_VGrad_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_LightBlue_VGrad_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-ModalHeader.Border-ModalHeader_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_ModalHeader_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Progress/ProgressWidget.ProgressWidget_C
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UProgressWidget_C : public UFortProgressWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(USizeBox*)                                 ProgressSizeBox                                             ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   ProgressSpinner                                             ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UVerticalBox*)                             ProgressVBox                                                ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C
/// Size: 0x0010 (0x000660 - 0x000670)
class UProgressModalWidget_C : public UFortProgressModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x668, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-GamepadBindings_NonInteractable.ButtonStyle-GamepadBindings_NonInteractable_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_GamepadBindings_NonInteractable_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-StatItem.Border-SolidBG-StatItem_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_StatItem_C : public UBorder_ShellTopBar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-ShellBlue.Border-SolidBG-ShellBlue_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_ShellBlue_C : public UBorder_ShellTopBar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Tab/ButtonStyle-Tab-Manage.ButtonStyle-Tab-Manage_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Tab_Manage_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C
/// Size: 0x006A (0x0014C0 - 0x00152A)
class USoloButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5418;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UBorder*)                                  Border_Container                                            ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   ButtonBacking                                               ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Control                                             ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ButtonAction                                           ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	SMember(FText)                                     Button_Description                                          ___ OFFSET(get<T>, {0x14F8, 24, 0, 0})
	DMember(bool)                                      FontSizeOveride                                             ___ OFFSET(get<bool>, {0x1510, 1, 0, 0})
	DMember(int32_t)                                   FontSize                                                    ___ OFFSET(get<int32_t>, {0x1514, 4, 0, 0})
	SMember(FMargin)                                   Padding_Overide                                             ___ OFFSET(get<T>, {0x1518, 16, 0, 0})
	DMember(bool)                                      PaddingOveride                                              ___ OFFSET(get<bool>, {0x1528, 1, 0, 0})
	DMember(bool)                                      IsDisabled                                                  ___ OFFSET(get<bool>, {0x1529, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG.Border-SolidBG_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_C : public UBorder_ShellTopBar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/SocialPanel/SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C
/// Size: 0x0018 (0x0014C0 - 0x0014D8)
class USocialPanelWeGameFriendButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5336;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LinkPrompt                                             ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/Art/ButtonStyle_VoiceSettings.ButtonStyle_VoiceSettings_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_VoiceSettings_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/SocialPanel/Art/ButtonStyle_VoiceHeader.ButtonStyle_VoiceHeader_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_VoiceHeader_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Tab/ButtonStyle-Tab-Main-Recolor.ButtonStyle-Tab-Main-Recolor_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Tab_Main_Recolor_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-ToolTipShadow.Border-SolidBG-ToolTipShadow_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_ToolTipShadow_C : public UBorder_ShellTopBar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-ToolTip.Border-SolidBG-ToolTip_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_ToolTip_C : public UBorder_ShellTopBar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Frontend/XpBar/XpBarToolTip.XpBarToolTip_C
/// Size: 0x00C8 (0x0002D0 - 0x000398)
class UXpBarToolTip_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock1                                            ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock2                                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock3                                            ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock4                                            ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UImage*)                                   Image1                                                      ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UImage*)                                   Image2                                                      ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   Image3                                                      ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UImage*)                                   Image4                                                      ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FText)                                     HeaderText                                                  ___ OFFSET(get<T>, {0x320, 24, 0, 0})
	SMember(FText)                                     CommanderXPText                                             ___ OFFSET(get<T>, {0x338, 24, 0, 0})
	SMember(FText)                                     BoostXPText                                                 ___ OFFSET(get<T>, {0x350, 24, 0, 0})
	SMember(FText)                                     RestedXPText                                                ___ OFFSET(get<T>, {0x368, 24, 0, 0})
	SMember(FText)                                     BodyText                                                    ___ OFFSET(get<T>, {0x380, 24, 0, 0})
};

/// Class /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C
/// Size: 0x0070 (0x0002A8 - 0x000318)
class UTooltip_Custom_S_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   _hr_                                                        ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UHorizontalBox*)                           Body_HBox                                                   ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UNamedSlot*)                               Content_Slot                                                ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           Header_HBox                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UImage*)                                   Icon_Header                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Header                                               ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Icon                                                 ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UTextBlock*)                               Text_Header                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FText)                                     HeaderText                                                  ___ OFFSET(get<T>, {0x2F0, 24, 0, 0})
	CMember(USlateBrushAsset*)                         Icon_Brush                                                  ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UUserWidget*)                              ContentWidget                                               ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UTooltip_Basic_S_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   _hr_                                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UHorizontalBox*)                           Body_HBox                                                   ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UHorizontalBox*)                           Header_HBox                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   Icon_Header                                                 ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Icon                                                 ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Body                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FText)                                     BodyText                                                    ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(FText)                                     HeaderText                                                  ___ OFFSET(get<T>, {0x328, 24, 0, 0})
	CMember(USlateBrushAsset*)                         Icon_Brush                                                  ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UClass*)                                   Body_Style                                                  ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UClass*)                                   Header_Style                                                ___ OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UTooltipLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Primary/ButtonStyle-Primary-M.ButtonStyle-Primary-M_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Primary_M_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-RotatorBorder.ButtonStyle-RotatorBorder_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_RotatorBorder_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextRotatorWhite.TextRotatorWhite_C
/// Size: 0x0010 (0x0014D0 - 0x0014E0)
class UTextRotatorWhite_C : public UCommonRotator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonBorder*)                            MainBorder                                                  ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Tab/ButtonStyle-Tab-Secondary.ButtonStyle-Tab-Secondary_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Tab_Secondary_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C
/// Size: 0x0170 (0x0014C0 - 0x001630)
class UIconTabButton_Legacy_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5680;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     BangWrapper                                                 ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           ContentHB                                                   ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxShell                                                ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  ___ OFFSET(get<T>, {0x14F0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   ___ OFFSET(get<T>, {0x1510, 192, 0, 0})
	DMember(bool)                                      UseText                                                     ___ OFFSET(get<bool>, {0x15D0, 1, 0, 0})
	SMember(FLinearColor)                              SelectedIconTint                                            ___ OFFSET(get<T>, {0x15D4, 16, 0, 0})
	SMember(FLinearColor)                              DeselectedIconTint                                          ___ OFFSET(get<T>, {0x15E4, 16, 0, 0})
	SMember(FLinearColor)                              HoveredIconTint                                             ___ OFFSET(get<T>, {0x15F4, 16, 0, 0})
	DMember(bool)                                      bBangEnabled                                                ___ OFFSET(get<bool>, {0x1604, 1, 0, 0})
	DMember(bool)                                      ChangeIconColorWhenSelected                                 ___ OFFSET(get<bool>, {0x1605, 1, 0, 0})
	SMember(FSlateColor)                               SelectedIconColor                                           ___ OFFSET(get<T>, {0x1608, 20, 0, 0})
	SMember(FSlateColor)                               UnSelectedIconColor                                         ___ OFFSET(get<T>, {0x161C, 20, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C
/// Size: 0x0050 (0x0014C0 - 0x001510)
class UPanelButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UNamedSlot*)                               ContentSlot                                                 ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         InputActionHorizontalAlignment                              ___ OFFSET(get<T>, {0x14E0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           InputActionVerticalAlignment                                ___ OFFSET(get<T>, {0x14E1, 1, 0, 0})
	SMember(FVector2D)                                 InputActionRenderTranslation                                ___ OFFSET(get<T>, {0x14E8, 16, 0, 0})
	DMember(bool)                                      InputActionUseRimBrush                                      ___ OFFSET(get<bool>, {0x14F8, 1, 0, 0})
	SMember(FVector2D)                                 InputActionRimBrushSize                                     ___ OFFSET(get<T>, {0x1500, 16, 0, 0})
};

/// Class /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C
/// Size: 0x00A0 (0x000470 - 0x000510)
class UHorizontalTabList_Legacy_C : public UFortTabListWidgetBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   ImageGamepadKeyPrompt                                       ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UImage*)                                   ImageHorizRule                                              ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UCommonActionWidget*)                      NextTabAction                                               ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(USizeBox*)                                 NextTabActionWrapper                                        ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Container                                           ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UCommonActionWidget*)                      PreviousTabAction                                           ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(USizeBox*)                                 PreviousTabActionWrapper                                    ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UHorizontalBox*)                           TabButtonBox                                                ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	SMember(FMargin)                                   TabButtonPadding                                            ___ OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(UClass*)                                   ButtonStyle                                                 ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	DMember(bool)                                      UseButtonStyle                                              ___ OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	DMember(bool)                                      ShowGamePadInputPrompt                                      ___ OFFSET(get<bool>, {0x4D1, 1, 0, 0})
	DMember(bool)                                      ShowRail                                                    ___ OFFSET(get<bool>, {0x4D2, 1, 0, 0})
	DMember(int32_t)                                   MinTabWidth                                                 ___ OFFSET(get<int32_t>, {0x4D4, 4, 0, 0})
	DMember(bool)                                      ForceTabLabelsCollapsed                                     ___ OFFSET(get<bool>, {0x4D8, 1, 0, 0})
	DMember(bool)                                      ForceTabIconsCollapsed                                      ___ OFFSET(get<bool>, {0x4D9, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  RefreshGamepad                                              ___ OFFSET(get<T>, {0x4E0, 16, 0, 0})
	CMember(UClass*)                                   DebugButtonTypeDisplay                                      ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	DMember(int32_t)                                   DebugTabCount                                               ___ OFFSET(get<int32_t>, {0x4F8, 4, 0, 0})
	DMember(double)                                    PreviousTabActionPaddingRight                               ___ OFFSET(get<double>, {0x500, 8, 0, 0})
	DMember(double)                                    NextTabActionPaddingLeft                                    ___ OFFSET(get<double>, {0x508, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Empty.ButtonStyle-Empty_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Empty_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Clear.ButtonStyle-Clear_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Clear_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C
/// Size: 0x01C0 (0x0014C0 - 0x001680)
class UIconTextButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ButtonContent                                 ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UNamedSlot*)                               RightExtraContentSlot                                       ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  ___ OFFSET(get<T>, {0x14F0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   ___ OFFSET(get<T>, {0x1510, 192, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          ___ OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            ___ OFFSET(get<T>, {0x15E0, 1, 0, 0})
	DMember(bool)                                      bMouseKeyboardStyleSet                                      ___ OFFSET(get<bool>, {0x15E1, 1, 0, 0})
	SMember(FText)                                     OverrideButtonText                                          ___ OFFSET(get<T>, {0x15E8, 24, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 ButtonTextJustification                                     ___ OFFSET(get<T>, {0x1600, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             ___ OFFSET(get<bool>, {0x1601, 1, 0, 0})
	DMember(double)                                    PressProgress                                               ___ OFFSET(get<double>, {0x1608, 8, 0, 0})
	DMember(bool)                                      bIgnoreInputActionWidgetText                                ___ OFFSET(get<bool>, {0x1610, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  FocusChangedEvent                                           ___ OFFSET(get<T>, {0x1618, 16, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        ___ OFFSET(get<T>, {0x1628, 88, 0, 0})
};

/// Class /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C
/// Size: 0x0011 (0x0015F0 - 0x001601)
class UMainMenuButton_C : public UFortMainMenuButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5633;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15F0, 8, 0, 0})
	CMember(UImage*)                                   Image_Icon_RightSide                                        ___ OFFSET(get<T>, {0x15F8, 8, 0, 0})
	DMember(bool)                                      ShowExternalLinkIcon                                        ___ OFFSET(get<bool>, {0x1600, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C
/// Size: 0x0112 (0x0014C0 - 0x0015D2)
class UScrollingTextButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5586;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  ___ OFFSET(get<T>, {0x14E0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   ___ OFFSET(get<T>, {0x1500, 192, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        ___ OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          ___ OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            ___ OFFSET(get<T>, {0x15D0, 1, 0, 0})
	DMember(bool)                                      bMouseKeyboardStyleSet                                      ___ OFFSET(get<bool>, {0x15D1, 1, 0, 0})
};

/// Class /Game/UI/SocialPanel/LocalUserSettingButton.LocalUserSettingButton_C
/// Size: 0x0020 (0x0014E0 - 0x001500)
class ULocalUserSettingButton_C : public UFortLocalUserSettingButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UBorder*)                                  Border_InteractionIndicator                                 ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UImage*)                                   Image_AnimatedArrow                                         ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/LocalUserSettingTitle.LocalUserSettingTitle_C
/// Size: 0x0028 (0x0014D0 - 0x0014F8)
class ULocalUserSettingTitle_C : public UFortLocalUserSettingTitleButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5368;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnExpansion                                                 ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   ExpandDirectionTick                                         ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(USizeBox*)                                 SB_EntryContent                                             ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/LocalUserSettingSection.LocalUserSettingSection_C
/// Size: 0x0000 (0x000328 - 0x000328)
class ULocalUserSettingSection_C : public UFortLocalUserSettingsSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Game/UI/SocialPanel/LocalUserSettingsMenu.LocalUserSettingsMenu_C
/// Size: 0x0000 (0x000420 - 0x000420)
class ULocalUserSettingsMenu_C : public UFortLocalUserSettingsMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
/// Size: 0x00A8 (0x001520 - 0x0015C8)
class UVoiceChannelHeaderButton_C : public UFortVoiceChannelHeaderButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnExpansion                                                 ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UWidgetAnimation*)                         JoinSlideOut                                                ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ScaleUp                                                     ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UFortMobileImage*)                         ExpandDirectionTick                                         ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UHorizontalBox*)                           HBox_Join                                                   ___ OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UImage*)                                   Image_VoiceChatWarning                                      ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     JoinText                                                    ___ OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UImage*)                                   NotTransmitting                                             ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     OffText                                                     ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          OnOffSwitcher                                               ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     OnText                                                      ___ OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay                                                     ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UImage*)                                   SelectionBackplate                                          ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          SimultaneousChannelSwitcher                                 ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switch_Transmitting                                         ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UImage*)                                   Transmitting                                                ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	SMember(FLinearColor)                              VoiceStatusActiveColor                                      ___ OFFSET(get<T>, {0x15A8, 16, 0, 0})
	SMember(FLinearColor)                              VoiceStatusWarningColor                                     ___ OFFSET(get<T>, {0x15B8, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C
/// Size: 0x0088 (0x000530 - 0x0005B8)
class USocialBanModal_C : public UFortSocialBanModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonTextBlock*)                         disclaimer                                                  ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         disclaimer1                                                 ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         disclaimer2                                                 ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UImage*)                                   Image_Severe                                                ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Message                                            ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title1                                                      ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UImage*)                                   Triangles                                                   ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UImage*)                                   Triangles1                                                  ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UImage*)                                   Triangles2                                                  ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_Banned                                                 ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_Warned                                                 ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          WidgetSwitcher_SeverityImage                                ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCloseSucceeded                                            ___ OFFSET(get<T>, {0x5A8, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C
/// Size: 0x0050 (0x000430 - 0x000480)
class UMissedInvitesActionMenu_C : public UFortMissedInvitesActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock1                                        ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   Image_Platform                                              ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            ___ OFFSET(get<T>, {0x478, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/ButtonStyle_TransparentList_Social.ButtonStyle_TransparentList_Social_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_TransparentList_Social_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/SocialPanel/EditNicknameButton.EditNicknameButton_C
/// Size: 0x0018 (0x001500 - 0x001518)
class UEditNicknameButton_C : public UFortEditNicknameButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UBorder*)                                  ClickCapture                                                ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/UserActionMenuInputButton.UserActionMenuInputButton_C
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class UUserActionMenuInputButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
};

/// Class /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C
/// Size: 0x0028 (0x0014F0 - 0x001518)
class UUserListHeaderEntry_C : public USocialUserListHeaderEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnExpansion                                                 ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UFortMobileImage*)                         ExpandDirectionTick                                         ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(USizeBox*)                                 SB_EntryContent                                             ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C
/// Size: 0x0058 (0x001570 - 0x0015C8)
class USocialInteraction_C : public USocialInteractionButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UImage*)                                   EncourageEpicFriend                                         ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UImage*)                                   InteractionIcon                                             ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x1598, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15A8, 16, 0, 0})
	SMember(FLinearColor)                              AddFriendColor                                              ___ OFFSET(get<T>, {0x15B8, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C
/// Size: 0x0030 (0x0004E0 - 0x000510)
class UUserActionMenu_C : public UFortSocialInteractionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          ___ OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                ___ OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_Platform                                              ___ OFFSET(get<T>, {0x508, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C
/// Size: 0x0050 (0x0014C0 - 0x001510)
class USocialConfirmationButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  Border_InteractionIndicator                                 ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   InteractionIcon                                             ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_InteractionName                                        ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	DMember(bool)                                      bIsAccept                                                   ___ OFFSET(get<bool>, {0x14F0, 1, 0, 0})
	SMember(FText)                                     DisplayText                                                 ___ OFFSET(get<T>, {0x14F8, 24, 0, 0})
};

/// Class /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
/// Size: 0x0048 (0x0014D0 - 0x001518)
class USocialPanel_FriendLinkButton_C : public UFortSocialPanelView_FriendLinkButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnCopied                                                    ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UFortMobileImage*)                         SharingIcon                                                 ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_CopyState                                          ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CopyConfirmed                                          ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_FriendLinkInstructions                                 ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LinkPrompt                                             ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/TeamMemberListEntry.TeamMemberListEntry_C
/// Size: 0x0050 (0x001590 - 0x0015E0)
class UTeamMemberListEntry_C : public UFortTeamMemberListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15C0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15D0, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/JoinRequestUserListEntry.JoinRequestUserListEntry_C
/// Size: 0x0060 (0x001580 - 0x0015E0)
class UJoinRequestUserListEntry_C : public UFortSocialUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     JoinRequest                                                 ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15C0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15D0, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/UserListEntry_XS.UserListEntry_XS_C
/// Size: 0x0058 (0x001580 - 0x0015D8)
class UUserListEntry_XS_C : public UFortSocialUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15B8, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15C8, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C
/// Size: 0x0060 (0x001590 - 0x0015F0)
class UUserSearchResultListEntry_XS_C : public UFortUserSearchResultListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5616;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UImage*)                                   Image_Lock                                                  ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            ___ OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x15C8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15D0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15E0, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C
/// Size: 0x0028 (0x0004F0 - 0x000518)
class UJoinablePartyActionMenu_C : public UFortJoinablePartyActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1304;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          ___ OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x510, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C
/// Size: 0x0078 (0x001580 - 0x0015F8)
class UJoinablePartyEntry_C : public UFortJoinablePartyListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(USizeBox*)                                 Exclamation                                                 ___ OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x15C8, 8, 0, 0})
	SMember(FSlateColor)                               InviteFontColor                                             ___ OFFSET(get<T>, {0x15D0, 20, 0, 0})
	SMember(FSlateColor)                               DefaultFontColor                                            ___ OFFSET(get<T>, {0x15E4, 20, 0, 0})
};

/// Class /Game/UI/SocialPanel/SuggestedFriendListEntry.SuggestedFriendListEntry_C
/// Size: 0x0060 (0x001560 - 0x0015C0)
class USuggestedFriendListEntry_C : public UFortConnectionsUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UBorder*)                                  Border_Background                                           ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UBorder*)                                  Border_Highlight                                            ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15A0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15B0, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C
/// Size: 0x0010 (0x000438 - 0x000448)
class ULeavePartyConfirmationMenu_C : public UFortLeavePartyMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/LeavePartyListEntry.LeavePartyListEntry_C
/// Size: 0x0048 (0x0014F0 - 0x001538)
class ULeavePartyListEntry_C : public UFortLeavePartyListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5432;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_LeavePartyText                                         ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/MissedInvitesEntry.MissedInvitesEntry_C
/// Size: 0x0050 (0x0014F0 - 0x001540)
class UMissedInvitesEntry_C : public UFortMissedInvitesListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(USizeBox*)                                 Exclamation                                                 ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText                                      ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
/// Size: 0x0070 (0x001560 - 0x0015D0)
class UInviteListEntry_FriendInvite_XS_C : public UFortConnectionsUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_SentRequest                                            ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	SMember(FLinearColor)                              Online                                                      ___ OFFSET(get<T>, {0x15A0, 16, 0, 0})
	SMember(FLinearColor)                              Offline                                                     ___ OFFSET(get<T>, {0x15B0, 16, 0, 0})
	SMember(FLinearColor)                              Away                                                        ___ OFFSET(get<T>, {0x15C0, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/VoiceChatMemberListEntry.VoiceChatMemberListEntry_C
/// Size: 0x0048 (0x001590 - 0x0015D8)
class UVoiceChatMemberListEntry_C : public UFortVoiceChatMemberListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15B8, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15C8, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C
/// Size: 0x008C (0x0002F8 - 0x000384)
class UPowerRatingWidget_C : public UFortPlayerPowerRating
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 900;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue                                             ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue_Large                                       ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   BuffedRatingOuterGlow                                       ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UHomebaseRatingBar_C*)                     HomebaseRatingBar                                           ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Image_Power                                                 ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              ModeTypeSwitcher                                            ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UVerticalBox*)                             OversizedMode                                               ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UImage*)                                   PowerIconGlow                                               ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   Rating_Glow_Large                                           ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USizeBox*)                                 RatingBar                                                   ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UHorizontalBox*)                           RegularMode                                                 ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue                                             ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue_Large                                       ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      ShowDualPower                                               ___ OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      ShowProgress                                                ___ OFFSET(get<bool>, {0x369, 1, 0, 0})
	DMember(bool)                                      ShowGlow                                                    ___ OFFSET(get<bool>, {0x36A, 1, 0, 0})
	DMember(bool)                                      UseLargeStyle                                               ___ OFFSET(get<bool>, {0x36B, 1, 0, 0})
	DMember(bool)                                      UseOversizedMode                                            ___ OFFSET(get<bool>, {0x36C, 1, 0, 0})
	DMember(double)                                    InterpDuration                                              ___ OFFSET(get<double>, {0x370, 8, 0, 0})
	CMember(USoundBase*)                               PowerIncreasedSound                                         ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(int32_t)                                   Power_Rating_Num                                            ___ OFFSET(get<int32_t>, {0x380, 4, 0, 0})
};

/// Class /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C
/// Size: 0x00B8 (0x0002F8 - 0x0003B0)
class UMoonbeam_PowerRatingWidget_C : public UFortPlayerPowerRating
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue                                             ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue_Large                                       ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   BuffedRatingOuterGlow                                       ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UHomebaseRatingBar_C*)                     HomebaseRatingBar                                           ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Image_Power                                                 ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              ModeTypeSwitcher                                            ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UImage*)                                   Moonbeam_Power_Back                                         ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UVerticalBox*)                             OversizedMode                                               ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   PowerIconGlow                                               ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   Rating_Glow_Large                                           ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USizeBox*)                                 RatingBar                                                   ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UHorizontalBox*)                           RegularMode                                                 ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue                                             ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue_Large                                       ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(bool)                                      ShowDualPower                                               ___ OFFSET(get<bool>, {0x370, 1, 0, 0})
	DMember(bool)                                      ShowProgress                                                ___ OFFSET(get<bool>, {0x371, 1, 0, 0})
	DMember(bool)                                      ShowGlow                                                    ___ OFFSET(get<bool>, {0x372, 1, 0, 0})
	DMember(bool)                                      UseLargeStyle                                               ___ OFFSET(get<bool>, {0x373, 1, 0, 0})
	DMember(bool)                                      UseOversizedMode                                            ___ OFFSET(get<bool>, {0x374, 1, 0, 0})
	DMember(double)                                    InterpDuration                                              ___ OFFSET(get<double>, {0x378, 8, 0, 0})
	CMember(USoundBase*)                               PowerIncreasedSound                                         ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(int32_t)                                   Power_Rating_Num                                            ___ OFFSET(get<int32_t>, {0x388, 4, 0, 0})
	SMember(FLinearColor)                              PowerBackingColor                                           ___ OFFSET(get<T>, {0x38C, 16, 0, 0})
	SMember(FSlateColor)                               FontColor                                                   ___ OFFSET(get<T>, {0x39C, 20, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/PartyMemberListEntry.PartyMemberListEntry_C
/// Size: 0x0050 (0x001590 - 0x0015E0)
class UPartyMemberListEntry_C : public UFortPartyMemberListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15C0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15D0, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Left.ButtonStyle-Left_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Left_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-Right.ButtonStyle-Right_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Right_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Frontend/ItemManagement/InventoryPanel/ItemTileButtonStyles/ItemManagementTileButtonStyle-Base.ItemManagementTileButtonStyle-Base_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UItemManagementTileButtonStyle_Base_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C
/// Size: 0x0050 (0x0014D0 - 0x001520)
class UBP_BannerEditorTile_C : public UFortPlayerProfileBannerEditorTile
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   ColorImage                                                  ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher                                        ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   IconImage                                                   ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         IconLoadGuard                                               ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UImage*)                                   Image_BannerEditBorder                                      ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     NormalBangWrapper                                           ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ColorMID                                                    ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BannerTileBangUpdated                                       ___ OFFSET(get<T>, {0x1510, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C
/// Size: 0x0029 (0x0002A8 - 0x0002D1)
class UFortSocialEventRSVPWidget_C : public UFortSocialEventRSVPWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 721;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_AdditionalEvents                                    ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AdditionalEvents                                       ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_EventName                                              ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_MonthDay                                               ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(ESlateVisibility)                          In_Visibility                                               ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
};

/// Class /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C
/// Size: 0x0050 (0x0014C0 - 0x001510)
class UPrimarySkewButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   Image_ButtonTop                                             ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   Image_Shadow                                                ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	DMember(bool)                                      ToUpper                                                     ___ OFFSET(get<bool>, {0x14F0, 1, 0, 0})
	DMember(bool)                                      XL                                                          ___ OFFSET(get<bool>, {0x14F1, 1, 0, 0})
	SMember(FText)                                     ButtonNameText                                              ___ OFFSET(get<T>, {0x14F8, 24, 0, 0})
};

/// Class /Game/UI/Login/SafeZone/SafeZoneEditor.SafeZoneEditor_C
/// Size: 0x0038 (0x000568 - 0x0005A0)
class USafeZoneEditor_C : public UFortSafeZoneEditor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UVerticalBox*)                             Default                                                     ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UImage*)                                   LowerLeftCorner                                             ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UImage*)                                   LowerRightCorner                                            ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UImage*)                                   UpperLeftCorner                                             ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UImage*)                                   UpperRightCorner                                            ___ OFFSET(get<T>, {0x598, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C
/// Size: 0x0058 (0x001580 - 0x0015D8)
class UUserListEntry_C : public UFortSocialUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               ___ OFFSET(get<T>, {0x15B8, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            ___ OFFSET(get<T>, {0x15C8, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C
/// Size: 0x0068 (0x001520 - 0x001588)
class ULocalUserEntry_C : public UFortSocialEventRSVPLocalUserEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5512;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UFortMobileImage*)                         FortMobileImage_enforzer                                    ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UImage*)                                   Image_MicIcon                                               ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UBorder*)                                  LocalUserEntryBorder                                        ___ OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UFortMobileImage*)                         SettingsIcon                                                ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	SMember(FLinearColor)                              Online                                                      ___ OFFSET(get<T>, {0x1558, 16, 0, 0})
	SMember(FLinearColor)                              Offline                                                     ___ OFFSET(get<T>, {0x1568, 16, 0, 0})
	SMember(FLinearColor)                              Away                                                        ___ OFFSET(get<T>, {0x1578, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Input/KeybindWidget.KeybindWidget_C
/// Size: 0x0010 (0x000B80 - 0x000B90)
class UKeybindWidget_C : public UFortKeybindWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(UImage*)                                   Image_Preview                                               ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C
/// Size: 0x00B8 (0x0014D0 - 0x001588)
class UGamepadKeyTextButton_C : public UFortGamepadCustomListItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5512;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         BoundKey                                                    ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Desc                                      ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_NoKey                                     ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Nokey                                               ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  ___ OFFSET(get<T>, {0x1500, 24, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            ___ OFFSET(get<T>, {0x1520, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  ChangeTheBinding_Button                                     ___ OFFSET(get<T>, {0x1528, 16, 0, 0})
	SMember(FName)                                     ActionNameData                                              ___ OFFSET(get<T>, {0x1538, 4, 0, 0})
	SMember(FKey)                                      KeyData                                                     ___ OFFSET(get<T>, {0x1540, 24, 0, 0})
	SMember(FText)                                     TextData                                                    ___ OFFSET(get<T>, {0x1558, 24, 0, 0})
	SMember(FKey)                                      KeyNone                                                     ___ OFFSET(get<T>, {0x1570, 24, 0, 0})
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
/// Size: 0x00B8 (0x000558 - 0x000610)
class UGamepadCustomActionSelectorPanel_v3_C : public UFortGamePadCustomActionSelectorPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UButton*)                                  Button_Clear                                                ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_Clear                                          ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonListView*)                          CommonListView_GamepadActions                               ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Clear1                                    ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Clear2                                    ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         KeybindWidget_Clear                                         ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UOptionsMenuHeader_C*)                     OptionsMenuHeader                                           ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	SMember(FDataTableRowHandle)                       Back                                                        ___ OFFSET(get<T>, {0x598, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomActionSelected                                        ___ OFFSET(get<T>, {0x5A8, 16, 0, 0})
	CMember(TArray<UFortOptionsMenuInputData*>)        CurrentInputData                                            ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomClosedUsingBack                                       ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomClearButton                                           ___ OFFSET(get<T>, {0x5D8, 16, 0, 0})
	SMember(FKey)                                      KeyNone                                                     ___ OFFSET(get<T>, {0x5E8, 24, 0, 0})
	SMember(FDataTableRowHandle)                       Clear                                                       ___ OFFSET(get<T>, {0x600, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Radio/ButtonStyle-Primary-Radio-M.ButtonStyle-Primary-Radio-M_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Primary_Radio_M_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/RadioButtonGroup/FortRadioButtonGroup.FortRadioButtonGroup_C
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UFortRadioButtonGroup_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Buttons                                             ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Buttons                                         ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TArray<FFortRadioButtonItemStruct>)        Buttons                                                     ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<UIconTextButton_C*>)                CreatedButtons                                              ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RadioButtonClicked_Event                                    ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(double)                                    WidthOverride                                               ___ OFFSET(get<double>, {0x2F0, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 CreatedButtonsGroup                                         ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UClass*)                                   CommonButtonGroup                                           ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(double)                                    HeightOverride                                              ___ OFFSET(get<double>, {0x308, 8, 0, 0})
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
/// Size: 0x00C8 (0x000558 - 0x000620)
class UGamepadInfoSelectorPanel_v3_C : public UFortGamePadInfoSelectorPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_Reset                                          ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortRadioButtonGroup_C*)                  FortRadioButtonGroup_Configs                                ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortRadioButtonGroup_C*)                  FortRadioButtonGroup_Platforms                              ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Reset1                                    ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Reset2                                    ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         KeybindWidget_Reset                                         ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UOptionsMenuHeader_C*)                     OptionsMenuHeader_Configs                                   ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UOptionsMenuHeader_C*)                     OptionsMenuHeader_Platforms                                 ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UButton*)                                  ResetButton                                                 ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Platforms                                       ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       Back                                                        ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorBack                                     ___ OFFSET(get<T>, {0x5C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       Apply                                                       ___ OFFSET(get<T>, {0x5D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorApply                                    ___ OFFSET(get<T>, {0x5E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       Reset                                                       ___ OFFSET(get<T>, {0x5F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorReset                                    ___ OFFSET(get<T>, {0x600, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorFocus                                    ___ OFFSET(get<T>, {0x610, 16, 0, 0})
};

/// Class /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C
/// Size: 0x0080 (0x000350 - 0x0003D0)
class UOptionsMenuSetting_C : public UFortOptionsMenuSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UButton*)                                  Button                                                      ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ButtonTouchTooltip                                          ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_Right                                         ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchorSettingDescription                                ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxContainer                                            ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxLabel                                                ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UImage*)                                   SliderBackground                                            ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SliderText                                                  ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SliderValue                                                 ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Right                                                ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(USpacer*)                                  SpacerBottom                                                ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Slider_Texture                                              ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TEnumAsByte<ERoundingMode>)                RoundingMode                                                ___ OFFSET(get<T>, {0x3B8, 1, 0, 0})
	SMember(FVector2D)                                 ToolTipSizeMobile                                           ___ OFFSET(get<T>, {0x3C0, 16, 0, 0})
};

/// Class /Game/UI/Frontend/Settings/Deadzone/DeadzoneAdjustment.DeadzoneAdjustment_C
/// Size: 0x0029 (0x0002A8 - 0x0002D1)
class UDeadzoneAdjustment_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 721;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   Deadzone_Adjustment                                         ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UOptionsMenuSetting_C*)                    Deadzone_Adjustment_Slider                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Deadzone_Max                                                ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ResetButton                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(ESettingType)                              SettingType                                                 ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_ClearSocialSearch.ButtonStyle_ClearSocialSearch_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_ClearSocialSearch_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C
/// Size: 0x0045 (0x001560 - 0x0015A5)
class USocialPanel_FriendSearchBar_C : public UFortFriendSearchButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5541;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UImage*)                                   AddFriendBanIcon                                            ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UBorder*)                                  ClickCapture                                                ___ OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_CannotAddFriends                                   ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_SocialBan                                          ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UFortMobileImage*)                         SharingIcon                                                 ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UFortSimpleWidgetAnimationsPanel*)         SimpleWidgetAnimationsPanel                                 ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	SMember(FName)                                     ShakeAnimation                                              ___ OFFSET(get<T>, {0x15A0, 4, 0, 0})
	DMember(bool)                                      bShakeAnimationIsPlaying                                    ___ OFFSET(get<bool>, {0x15A4, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Border/Border-Bottom-Box-Rounded-DkBlue.Border-Bottom-Box-Rounded-DkBlue_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_Bottom_Box_Rounded_DkBlue_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C
/// Size: 0x0484 (0x0002D0 - 0x000754)
class UGamepadMappingInfo_v3_C : public UFortGamepadMappingInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1876;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_LeftBumperSeparator                            ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_RightBumperSeparator                           ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_Legend                                         ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UDeadzoneAdjustment_C*)                    DeadzoneAdjustment_Look                                     ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UDeadzoneAdjustment_C*)                    DeadzoneAdjustment_Move                                     ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadDown                                                    ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadDown2                                                   ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadDown_Custom                                             ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadLeft                                                    ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadLeft2                                                   ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadLeft_Custom                                             ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadRight                                                   ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadRight2                                                  ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadRight_Custom                                            ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadUp                                                      ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadUp2                                                     ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadUp_Custom                                               ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceBottom_Custom                                           ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonBot                                               ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonLeft                                              ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonRight                                             ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonTop                                               ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceLeft_Custom                                             ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceRight_Custom                                            ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceTop_Custom                                              ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_DeadzoneWarning                           ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_DoubleTap                                 ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Hold                                      ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UGamepadCustomActionSelectorPanel_v3_C*)   GamepadCustomActionSelectorPanel_v3                         ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LB_RB                                         ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LB_RT                                         ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LT_RB                                         ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_AllText                                       ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_CustomButtons                                 ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UHorizontalTabList_Legacy_C*)              HorizontalTabList_CustomModes                               ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UImage*)                                   Image_DoubleTap                                             ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UImage*)                                   Image_Gamepad                                               ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UImage*)                                   Image_Hold                                                  ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   Image_LightBox                                              ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LB_RBAction                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LB_RTAction                                                 ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LB_Custom                                                   ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LS                                                          ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LS_Click_Custom                                             ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LSCombo1                                                    ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LSCombo2                                                    ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStick                                                      ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStick2                                                     ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStickClick                                                 ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStickClick2                                                ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LT                                                          ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LT_RBAction                                                 ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LT_Custom                                                   ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LTCombo                                                     ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_DeadzoneAdjustment                                  ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  RB_Custom                                                   ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RS                                                          ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  RS_Click_Custom                                             ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RSCombo                                                     ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RSCombo2                                                    ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RStick                                                      ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RStickClick                                                 ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RT                                                          ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  RT_Custom                                                   ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RTCombo                                                     ___ OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  Select_Custom                                               ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(USizeBox*)                                 Separator_LB_RBfromLB_RT                                    ___ OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         SpecialLeft                                                 ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         SpecialRight                                                ___ OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  Start_Custom                                                ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Bottom                             ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Left                               ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Left1                              ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Left2                              ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Right                              ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Right1                             ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Right2                             ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Top                                ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Top1                               ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_LB                                             ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_LT                                             ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RB                                             ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS                                             ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS_Click                                       ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS_Click1                                      ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS_Click2                                      ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RT                                             ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Select                                         ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Select1                                        ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Start                                          ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Mode                                                   ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Down                                          ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Left                                          ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Right                                         ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Up                                            ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_LS                                                 ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_LS_Click                                           ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_LS_Click1                                          ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Down                                         ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Left                                         ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Right                                        ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Up                                           ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_LS                                                ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_LS_Click                                          ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_LS_Click1                                         ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_PS4_LS_And_Dpad                                 ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Xbox_LS_And_Dpad                                ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBoxMenu_Map                                         ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    XB1_Images                                                  ___ OFFSET(get<T>, {0x638, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PS4_Images                                                  ___ OFFSET(get<T>, {0x648, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Appropriate_Platform_Images                                 ___ OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(TArray<UCommonTextBlock*>)                 GamepadConfigTextWidgets                                    ___ OFFSET(get<T>, {0x668, 16, 0, 0})
	CMember(TArray<FText>)                             ButtonTextLabels_STW_CombatPro_Build                        ___ OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(TArray<FText>)                             ButtonTextLabels_STW_CombatPro_Combat                       ___ OFFSET(get<T>, {0x688, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Erebus_Images                                               ___ OFFSET(get<T>, {0x698, 16, 0, 0})
	CMember(TArray<FText>)                             ButtonTextLabels_STW_BuilderPro_Build                       ___ OFFSET(get<T>, {0x6A8, 16, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LastClickedButton                                           ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(EFortInputActionGroup)                     CurrentInputActionGroup                                     ___ OFFSET(get<T>, {0x6C0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomKeySelected                                           ___ OFFSET(get<T>, {0x6C8, 16, 0, 0})
	CMember(TArray<UGamepadKeyTextButton_C*>)          CustomKeyButtons                                            ___ OFFSET(get<T>, {0x6D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Image_LightboxClicked                                       ___ OFFSET(get<T>, {0x6E8, 16, 0, 0})
	SMember(FName)                                     CombatModeIdName                                            ___ OFFSET(get<T>, {0x6F8, 4, 0, 0})
	SMember(FName)                                     BuildModeIdName                                             ___ OFFSET(get<T>, {0x6FC, 4, 0, 0})
	SMember(FName)                                     EditModeIdName                                              ___ OFFSET(get<T>, {0x700, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomButtonNavLeft                                         ___ OFFSET(get<T>, {0x708, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Generic_Images                                              ___ OFFSET(get<T>, {0x718, 16, 0, 0})
	SMember(FName)                                     DeadZoneMoveIdName                                          ___ OFFSET(get<T>, {0x728, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    XSX_Images                                                  ___ OFFSET(get<T>, {0x730, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PS5_Images                                                  ___ OFFSET(get<T>, {0x740, 16, 0, 0})
	SMember(FName)                                     LTMAbilitiesModeIdName                                      ___ OFFSET(get<T>, {0x750, 4, 0, 0})
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C
/// Size: 0x0108 (0x000468 - 0x000570)
class UTabGamePadConfig_v3_C : public UFortGamepadInputOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UGamepadInfoSelectorPanel_v3_C*)           GamepadInfoSelectorPanel_v3                                 ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UGamepadMappingInfo_v3_C*)                 GamepadMappingInfo_v3                                       ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadMappingInfoChanged                                   ___ OFFSET(get<T>, {0x480, 16, 0, 0})
	CMember(TArray<FString>)                           InputPresets                                                ___ OFFSET(get<T>, {0x490, 16, 0, 0})
	CMember(TArray<FText>)                             InputPresetNames_NoCustom                                   ___ OFFSET(get<T>, {0x4A0, 16, 0, 0})
	DMember(int32_t)                                   PresetMappingIndex                                          ___ OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
	DMember(int32_t)                                   PlatformMappingIndex                                        ___ OFFSET(get<int32_t>, {0x4B4, 4, 0, 0})
	DMember(int32_t)                                   CustomInputTemplatePresetIndex                              ___ OFFSET(get<int32_t>, {0x4B8, 4, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DisplayObject                                               ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(EFortInputActionGroup)                     CurrentInputActionGroup                                     ___ OFFSET(get<T>, {0x4C8, 1, 0, 0})
	DMember(int32_t)                                   CustomResetToDefaultConfig                                  ___ OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	SMember(FKey)                                      CustomKeySelection                                          ___ OFFSET(get<T>, {0x4D0, 24, 0, 0})
	SMember(FName)                                     CustomActionSelection                                       ___ OFFSET(get<T>, {0x4E8, 4, 0, 0})
	DMember(int32_t)                                   CustomInputActionGroupSelectionIndex                        ___ OFFSET(get<int32_t>, {0x4EC, 4, 0, 0})
	DMember(int32_t)                                   CustomActionSelectionIndex                                  ___ OFFSET(get<int32_t>, {0x4F0, 4, 0, 0})
	SMember(FKey)                                      Key_None                                                    ___ OFFSET(get<T>, {0x4F8, 24, 0, 0})
	CMember(UClass*)                                   RadioButtonClass                                            ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UClass*)                                   RadioButtonStyle                                            ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(TArray<UFortOptionsMenuInputData*>)        InputDataForActionsPanel                                    ___ OFFSET(get<T>, {0x520, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  TabGamePadConfigBack                                        ___ OFFSET(get<T>, {0x530, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  TabGamePadConfigApply                                       ___ OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  TabGamePadActionsThatNeedBinds                              ___ OFFSET(get<T>, {0x550, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OverrideResetModal                                          ___ OFFSET(get<T>, {0x560, 16, 0, 0})
};

/// Class /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C
/// Size: 0x0060 (0x000430 - 0x000490)
class UReferAFriendActionMenu_C : public UFortReferFriendActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock1                                        ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UImage*)                                   Image_AddFriendsQR                                          ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   Image_PartyUpQR                                             ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   Image_Platform                                              ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          WidgetSwitcher_QR                                           ___ OFFSET(get<T>, {0x488, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C
/// Size: 0x0050 (0x0014F0 - 0x001540)
class UReferAFriendEntry_C : public UFortReferFriendListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(USizeBox*)                                 Exclamation                                                 ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText                                      ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
};

/// Class /Game/UI/Frontend/FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFrontendItemViewSettingsManager_C : public UFortFrontendItemViewSettingsManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C
/// Size: 0x0079 (0x0014D0 - 0x001549)
class UCloseButton_C : public UBacchusCloseButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5449;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unhover                                                     ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UBorder*)                                  Border_Container                                            ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UImage*)                                   ButtonBacking                                               ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UImage*)                                   CloseIcon                                                   ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Control                                             ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ButtonAction                                           ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	SMember(FText)                                     Button_Description                                          ___ OFFSET(get<T>, {0x1518, 24, 0, 0})
	DMember(bool)                                      FontSizeOveride                                             ___ OFFSET(get<bool>, {0x1530, 1, 0, 0})
	DMember(int32_t)                                   FontSize                                                    ___ OFFSET(get<int32_t>, {0x1534, 4, 0, 0})
	SMember(FMargin)                                   Padding_Overide                                             ___ OFFSET(get<T>, {0x1538, 16, 0, 0})
	DMember(bool)                                      PaddingOveride                                              ___ OFFSET(get<bool>, {0x1548, 1, 0, 0})
};

/// Class /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C
/// Size: 0x0028 (0x001060 - 0x001088)
class UOptionsMenu_C : public UFortOptionsMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1060, 8, 0, 0})
	CMember(UFortHUDElementWrapper_C*)                 FortHUDElementWrapper                                       ___ OFFSET(get<T>, {0x1068, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_ContentLetoSplitscreen                              ___ OFFSET(get<T>, {0x1070, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_HeadingLeto                                         ___ OFFSET(get<T>, {0x1078, 8, 0, 0})
	CMember(UTabGamePadConfig_v3_C*)                   TabGamepadConfig                                            ___ OFFSET(get<T>, {0x1080, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C
/// Size: 0x0088 (0x000390 - 0x000418)
class UVoiceChannelSettings_C : public UFortVoiceSettingsDisplay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UWidgetAnimation*)                         GearHover                                                   ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_InputDisplay                                   ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UImage*)                                   AlertIcon                                                   ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_NextInputDevice                                      ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_NextOutputDevice                                     ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_TogglePTT                                            ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_VoiceSettings                                        ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UImage*)                                   GearIcon                                                    ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_TitleIcon                                             ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     InputDevice                                                 ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     OutputDevice                                                ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         PTTKeybindWidget                                            ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     PushToTalk                                                  ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LowPowerMode                                           ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   VoiceDisabledIcon                                           ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     VoiceDisabledText                                           ___ OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Movie/ActivatableMovieWidget.ActivatableMovieWidget_C
/// Size: 0x0018 (0x000638 - 0x000650)
class UActivatableMovieWidget_C : public UFortActivatableVideoPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(USafeZone*)                                MainSafeZone                                                ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x648, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C
/// Size: 0x00E0 (0x000318 - 0x0003F8)
class UBP_LocalPlayerBannerEditor_C : public UFortPlayerProfileBannerEditor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Regular_C*)              ApplyButton                                                 ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCloseButton_C*)                           Button_CloseTouch                                           ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_LeftTab                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_RightTab                                             ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CategoryText                                                ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     ColorBangWrapper                                            ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonTileView*)                          CommonTileView                                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EditColorButton                                             ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonTextBlock*)                         FoundersNoteText                                            ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UPlayerBanner_C*)                          HomebaseBanner                                              ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UImage*)                                   HomebaseImage                                               ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     IconBangWrapper                                             ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UIconTextButton_C*)                        LeftArrowButton                                             ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     LeftCategoryBang                                            ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UCommonActionWidget*)                      LeftTriggerAction                                           ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UIconTextButton_C*)                        RightArrowButton                                            ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     RightCategoryBang                                           ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UCommonActionWidget*)                      RightTriggerAction                                          ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  CloseBannerEditor                                           ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
	DMember(int32_t)                                   IconCategoryIndex                                           ___ OFFSET(get<int32_t>, {0x3C0, 4, 0, 0})
	DMember(int32_t)                                   ColorCategoryIndex                                          ___ OFFSET(get<int32_t>, {0x3C4, 4, 0, 0})
	SMember(FName)                                     CurrentCategory                                             ___ OFFSET(get<T>, {0x3C8, 4, 0, 0})
	DMember(bool)                                      bViewingIcons                                               ___ OFFSET(get<bool>, {0x3CC, 1, 0, 0})
	DMember(bool)                                      bPickingTile                                                ___ OFFSET(get<bool>, {0x3CD, 1, 0, 0})
	SMember(FName)                                     TempChosenIcon                                              ___ OFFSET(get<T>, {0x3D0, 4, 0, 0})
	SMember(FName)                                     TempChosenColor                                             ___ OFFSET(get<T>, {0x3D4, 4, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 ButtonGroup                                                 ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(FTimerHandle)                              UpdateBangTimerHandle                                       ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	DMember(bool)                                      bIsActiveWidget                                             ___ OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	CMember(USoundBase*)                               AppearSoundCue                                              ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
};

/// Class /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C
/// Size: 0x0030 (0x0005D8 - 0x000608)
class UTeamMemberManage_C : public UFortTeamMemberManage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UBP_LocalPlayerBannerEditor_C*)            BP_LocalPlayerBannerEditor                                  ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Regular_C*)              CloseProfileButton                                          ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              ContentSwitcher                                             ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(USizeBox*)                                 TeamMemberManageOptions                                     ___ OFFSET(get<T>, {0x600, 8, 0, 0})
};

/// Class /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C
/// Size: 0x0020 (0x000440 - 0x000460)
class UMultiActionConfirmationMenu_C : public UFortMultiFriendActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UHorizontalBox*)                           ConfirmationButtons                                         ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_ActionText                                             ___ OFFSET(get<T>, {0x458, 8, 0, 0})
};

/// Class /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C
/// Size: 0x0040 (0x0014F0 - 0x001530)
class UMultiFriendActionListEntry_C : public UFortMultiFriendActionListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText                                      ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText_Hover                                ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C
/// Size: 0x00C0 (0x0005F0 - 0x0006B0)
class USocialPanelView_UserLists_C : public UFortSocialPanelView_UserLists
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         WeGameButtonHovered                                         ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         SwitcherTransition                                          ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UWidgetAnimation*)                         NoFriendsArrowBounce                                        ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UWidgetAnimation*)                         MenuAnchorItemOpen                                          ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Open                                                        ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Open1                                                       ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UImage*)                                   bckgrnd                                                     ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UImage*)                                   CircularThrobber_UserSearch                                 ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UFortMobileImage*)                         FortMobileImage                                             ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   Image_MicDisabled                                           ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_MicIcon                                               ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_MicIcon1                                              ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_MicIcon2                                              ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UImage*)                                   Image_MicIcon3                                              ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_TitleIcon                                             ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_LeavePlatformPartyTitle                            ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_VoiceChatDisabled                                  ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_VoiceChatDisabledHeader                            ___ OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_VoiceChatDisabledWarningMessage                    ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(URichTextBlock*)                           RichTextBlock                                               ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(USocialPanel_FriendLinkButton_C*)          SocialPanel_FriendLinkButton                                ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LowPowerMode                                           ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
};

/// Class /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C
/// Size: 0x0040 (0x001500 - 0x001540)
class UTeamMemberBanner_C : public UFortCampaignTeamMemberBanner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ButtonPartyFinder                                           ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UOverlay*)                                 Connected                                                   ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(USizeBox*)                                 Connecting                                                  ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UOverlay*)                                 Open                                                        ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UImage*)                                   OpenImage                                                   ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_MemberState                                        ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/SocialPanel.SocialPanel_C
/// Size: 0x0030 (0x000578 - 0x0005A8)
class USocialPanel_C : public UFortSocialPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnOpened                                                    ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UImage*)                                   Image_Back                                                  ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USocialPanel_TopBarExtension_C*)           SocialPanel_TopBarExtension                                 ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
};

/// Class /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C
/// Size: 0x0040 (0x0002D0 - 0x000310)
class UMiniPartyBar_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ButtonLocalPlayer                                           ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UImage*)                                   LineSeparator                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      LocalPlayer                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      RemotePlayer1                                               ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      RemotePlayer2                                               ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      RemotePlayer3                                               ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UTeamMemberManage_C*)                      NewLocalPlayerWidget                                        ___ OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
/// Size: 0x0028 (0x0014C0 - 0x0014E8)
class USocialPanel_TopBarExtension_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5352;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   Image_PlatformIcon                                          ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UMiniPartyBar_C*)                          MiniPartyBar                                                ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Config/DefaultUIDataConfiguration.DefaultUIDataConfiguration_C
/// Size: 0x0000 (0x0045F0 - 0x0045F0)
class UDefaultUIDataConfiguration_C : public UFortUIDataConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 17904;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-B-S.TextStyle-Base-XXS-B-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_B_S_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C
/// Size: 0x002A (0x000300 - 0x00032A)
class UMicIndicator_C : public UFortMicIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 810;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UOverlay*)                                 _01_NotSpeaking                                             ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UOverlay*)                                 _02_Speaking                                                ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UOverlay*)                                 _03_Muted                                                   ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          MicStateSwitcher                                            ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(bool)                                      bIsMuted                                                    ___ OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(bool)                                      bIsTalking                                                  ___ OFFSET(get<bool>, {0x329, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C
/// Size: 0x0008 (0x000328 - 0x000330)
class UBuildWatermark_C : public UFortBuildWatermark
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Subtitles/Subtitles.Subtitles_C
/// Size: 0x0008 (0x000310 - 0x000318)
class USubtitles_C : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(USubtitleDisplay*)                         SubtitleDisplay                                             ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C
/// Size: 0x0040 (0x0002F0 - 0x000330)
class ULegacy_MovieWidget_C : public UFortMovieWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UImage*)                                   Video_Image                                                 ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UScaleBox*)                                Video_ScaleBox                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      shouldloop                                                  ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
	DMember(bool)                                      AutoPlay                                                    ___ OFFSET(get<bool>, {0x309, 1, 0, 0})
	DMember(bool)                                      MaintainAspectRatio                                         ___ OFFSET(get<bool>, {0x30A, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaReadyToPlay                                          ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaFailedToOpen                                         ___ OFFSET(get<T>, {0x320, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B-Black.TextStyle-Base-XS-B-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_Black_C : public UTextStyle_Base_S_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/SoftwareCursors/InvisibleCursorWidget.InvisibleCursorWidget_C
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UInvisibleCursorWidget_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-S.TextStyle-Header-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_S_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B-S.TextStyle-Base-XS-B-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_S_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C
/// Size: 0x0280 (0x0002D0 - 0x000550)
class UCinematic_TeamMics_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UMicIndicator_C*)                          MicIndicator                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              SwitcherConnectingStranger                                  ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock                                                   ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextPlayerName                                              ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FFortTeamMemberInfo)                       MemberInfo                                                  ___ OFFSET(get<T>, {0x300, 592, 0, 0})
};

/// Class /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C
/// Size: 0x0028 (0x000310 - 0x000338)
class UTeamMicStack_C : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UVerticalBox*)                             _Vertical_Box__Team_Members                                 ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonBorder*)                            BorderFrame                                                 ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(TArray<UCinematic-TeamMics_C*>)            TeamMembers                                                 ___ OFFSET(get<T>, {0x328, 16, 0, 0})
};

/// Class /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C
/// Size: 0x0059 (0x0005A8 - 0x000601)
class UCinematic_C : public UFortUIStateWidget_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1537;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UNamedSlot*)                               LocalizedAudioOnlyMovieSlot                                 ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UCommonWidgetStackLegacy*)                 MainContentStack                                            ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UNamedSlot*)                               MovieSlot                                                   ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UOverlay*)                                 OverlayMovieOverlay                                         ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(USubtitles_C*)                             Subtitles                                                   ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UTeamMicStack_C*)                          TeamMicStack                                                ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UBuildWatermark_C*)                        Widget_BuildWatermark                                       ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(ULegacy_MovieWidget_C*)                    MovieWidget                                                 ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UFortMediaSubtitlesPlayer*)                SubtitlesPlayer                                             ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UObject*)                                  CinematicMediaSoundWave                                     ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bFinished                                                   ___ OFFSET(get<bool>, {0x600, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-S.TextStyle-Base-S-B-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_S_C : public UTextStyle_Base_S_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Primary-M_Skew_BurbankDark.TextStyle-Button-Primary-M_Skew_BurbankDark_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Primary_M_Skew_BurbankDark_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Primary-M_Skew_BurbankLightBlue.TextStyle-Button-Primary-M_Skew_BurbankLightBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Primary_M_Skew_BurbankLightBlue_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Survey/ButtonStyle-PlayerSurvey-ChoiceResponse.ButtonStyle-PlayerSurvey-ChoiceResponse_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_PlayerSurvey_ChoiceResponse_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C
/// Size: 0x0321 (0x001480 - 0x0017A1)
class UPlayerSurveyResponseChoice_C : public UFortPlayerSurveyResponseChoiceBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6049;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1480, 8, 0, 0})
	CMember(UBorder*)                                  Border_InputActionCircle                                    ___ OFFSET(get<T>, {0x1488, 8, 0, 0})
	CMember(UImage*)                                   Image_Checkbox                                              ___ OFFSET(get<T>, {0x1490, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Select                                    ___ OFFSET(get<T>, {0x1498, 8, 0, 0})
	SMember(FSlateBrush)                               Brush_RadioUnchecked                                        ___ OFFSET(get<T>, {0x14A0, 192, 0, 0})
	SMember(FSlateBrush)                               Brush_RadioChecked                                          ___ OFFSET(get<T>, {0x1560, 192, 0, 0})
	SMember(FSlateBrush)                               Brush_CheckboxUnchecked                                     ___ OFFSET(get<T>, {0x1620, 192, 0, 0})
	SMember(FSlateBrush)                               Brush_CheckboxChecked                                       ___ OFFSET(get<T>, {0x16E0, 192, 0, 0})
	CMember(TEnumAsByte<EFortPlayerSurveyResponseChoiceType>) ChoiceType                                           ___ OFFSET(get<T>, {0x17A0, 1, 0, 0})
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UPlayerSurveyVerticalIndicator_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Move                                      ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UPlayerSurveyOrthogonalIndicator_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Move                                      ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C
/// Size: 0x0040 (0x000438 - 0x000478)
class UPlayerSurveyMultipleChoiceResponse_C : public UFortPlayerSurveyMultipleChoiceResponseBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_OrthogonalIndicator                                 ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_VerticalIndicator                                   ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UPlayerSurveyOrthogonalIndicator_C*)       PlayerSurveyOrthogonalIndicator                             ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UPlayerSurveyVerticalIndicator_C*)         PlayerSurveyVerticalIndicator                               ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Responses                                           ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(double)                                    BaseColumnWidth                                             ___ OFFSET(get<double>, {0x468, 8, 0, 0})
	DMember(double)                                    AdditionalColumnWidth                                       ___ OFFSET(get<double>, {0x470, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-20-Black.TextStyle-BurbankSmall-20-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_20_Black_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_20_White50pc.TextStyle_BurbSmBk_20_White50pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_20_White50pc_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_20_White.TextStyle_BurbSmBk_20_White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_20_White_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Survey/ButtonStyle-PlayerSurvey-YellowSkew.ButtonStyle-PlayerSurvey-YellowSkew_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_PlayerSurvey_YellowSkew_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_20_LightBlue.TextStyle_BurbSmBk_20_LightBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_20_LightBlue_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/Athena_ButtonStyle_AngledBlueMenuButton.Athena_ButtonStyle_AngledBlueMenuButton_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UAthena_ButtonStyle_AngledBlueMenuButton_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UPlayerSurveyHorizontalIndicator_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Move                                      ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle_BurbankSmall_M_White.TextStyle_BurbankSmall_M_White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_M_White_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C
/// Size: 0x0040 (0x000438 - 0x000478)
class UPlayerSurveySingleChoiceResponse_C : public UFortPlayerSurveySingleChoiceResponseBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_OrthogonalIndicator                                 ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_VerticalIndicator                                   ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UPlayerSurveyOrthogonalIndicator_C*)       PlayerSurveyOrthogonalIndicator                             ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UPlayerSurveyVerticalIndicator_C*)         PlayerSurveyVerticalIndicator                               ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Responses                                           ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(double)                                    BaseColumnWidth                                             ___ OFFSET(get<double>, {0x468, 8, 0, 0})
	DMember(double)                                    AdditionalColumnWidth                                       ___ OFFSET(get<double>, {0x470, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle_BurbankSmall_L_DarkBlue.TextStyle_BurbankSmall_L_DarkBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_L_DarkBlue_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Survey/ButtonStyle_Radial.ButtonStyle_Radial_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Radial_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C
/// Size: 0x0010 (0x001480 - 0x001490)
class UPlayerSurveyRatingChoice_C : public UFortPlayerSurveyRatingChoiceBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1480, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Select                                    ___ OFFSET(get<T>, {0x1488, 8, 0, 0})
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C
/// Size: 0x0010 (0x000430 - 0x000440)
class UPlayerSurveyRatingResponse_C : public UFortPlayerSurveyRatingResponseBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UPlayerSurveyHorizontalIndicator_C*)       PlayerSurveyHorizontalIndicator                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyWidget.PlayerSurveyWidget_C
/// Size: 0x0000 (0x0005F0 - 0x0005F0)
class UPlayerSurveyWidget_C : public UFortPlayerSurveyWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
};

/// Class /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C
/// Size: 0x0019 (0x000290 - 0x0002A9)
class ATVPostProcessBP_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 681;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UBillboardComponent*)                      Billboard                                                   ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      DisableOnStartup                                            ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C
/// Size: 0x002F (0x0002A9 - 0x0002D8)
class ATVPostProcessBPAthena_C : public ATVPostProcessBP_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    FullScreenTVPP_OnlyMaterialModified                         ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(float)                                     FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7 ___ OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7 ___ OFFSET(get<float>, {0x2C4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7 ___ OFFSET(get<T>, {0x2C8, 1, 0, 0})
	CMember(UTimelineComponent*)                       FrontEndCameraSwitchFadeAthena                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C
/// Size: 0x0010 (0x000A00 - 0x000A10)
class AFrontendCamera_Manage_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
};

/// Class /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C
/// Size: 0x0050 (0x000508 - 0x000558)
class ULoginScreen_C : public UFortUIStateWidget_Login
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UConsoleProfileWidget_C*)                  ConsoleProfileWidget                                        ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UImage*)                                   DarkBacking                                                 ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UOverlay*)                                 KeyArt_Group                                                ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UImage*)                                   KeyArtBackground                                            ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UImage*)                                   KeyArtBackground_For_Blur                                   ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Version                                                ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UBuildWatermark_C*)                        Widget_BuildWatermark                                       ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UWidget*)                                  PlatformSpecificBackBorder                                  ___ OFFSET(get<T>, {0x550, 8, 0, 0})
};

/// Class /Game/UI/Login/LoginInteractionHost.LoginInteractionHost_C
/// Size: 0x0000 (0x000538 - 0x000538)
class ULoginInteractionHost_C : public UFortLoginInteractions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionFlow.CorrectiveActionFlow_C
/// Size: 0x0010 (0x000438 - 0x000448)
class UCorrectiveActionFlow_C : public UFortCorrectiveActionFlow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UImage*)                                   FortniteLogo                                                ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C
/// Size: 0x0010 (0x000438 - 0x000448)
class UCorrectiveActionDateOfBirthScreen_C : public UFortCorrectiveActionDateOfBirthScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AgeEntryChallengeError                                 ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C
/// Size: 0x0010 (0x000418 - 0x000428)
class UCorrectiveActionGuardianEmailScreen_C : public UFortCorrectiveActionGuardianEmailScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_EmailEntryChallengeError                               ___ OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C
/// Size: 0x0018 (0x000418 - 0x000430)
class UCorrectiveActionDisplayNameScreen_C : public UFortCorrectiveActionDisplayNameScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   Image_DisplayNameEntrySpinner                               ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_DisplayNameEntryError                                  ___ OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C
/// Size: 0x0060 (0x000530 - 0x000590)
class USplashScreenWidget_C : public UFortSplashScreenWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Loud_C*)                 Button_PressToStart                                         ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonLazyImage*)                         I_Fortnite                                                  ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FText)                                     GamepadText                                                 ___ OFFSET(get<T>, {0x548, 24, 0, 0})
	SMember(FText)                                     MouseText                                                   ___ OFFSET(get<T>, {0x560, 24, 0, 0})
	SMember(FText)                                     MobileText                                                  ___ OFFSET(get<T>, {0x578, 24, 0, 0})
};

/// Class /Game/UI/Login/SubGameSelect/SubgameSelectStateWidget.SubgameSelectStateWidget_C
/// Size: 0x0000 (0x000408 - 0x000408)
class USubgameSelectStateWidget_C : public UStartUpUIStateWidget_SubgameSelect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C
/// Size: 0x0034 (0x000470 - 0x0004A4)
class USubgameSelectScreen_C : public UFortSubgameSelectScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1188;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UOverlay*)                                 ModeSelect                                                  ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UProgressModalWidget_C*)                   LeavingMatchmakingDialog                                    ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Keyart                                                  ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(TArray<UTexture*>)                         TextureCycle                                                ___ OFFSET(get<T>, {0x490, 16, 0, 0})
	DMember(int32_t)                                   TextureCycleIndex                                           ___ OFFSET(get<int32_t>, {0x4A0, 4, 0, 0})
};

/// Class /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C
/// Size: 0x0034 (0x000480 - 0x0004B4)
class UCampaignPurchaseScreen_C : public UFortCampaignPurchaseScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1204;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UWidgetAnimation*)                         SwitchTextures                                              ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Keyart                                                  ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FTimerHandle)                              CycleTimer                                                  ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(TArray<UTexture*>)                         TextureCycle                                                ___ OFFSET(get<T>, {0x4A0, 16, 0, 0})
	DMember(int32_t)                                   TextureCycleIndex                                           ___ OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
};

/// Class /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C
/// Size: 0x00C1 (0x0005E0 - 0x0006A1)
class UStoreMain_Root_Legacy_C : public UFortMtxStoreRootBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1697;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder                                                ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UCommonBorder*)                            Container_AvailableAmount                                   ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UCommonBorder*)                            CurrencyNotificationBorder                                  ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CurrencyNotificationText                                    ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox                                               ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UInfoFlag_C*)                              InfoFlag                                                    ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UGridPanel*)                               NewLTMGrid                                                  ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UVerticalBox*)                             NEWLTMOfferSection                                          ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonBorder*)                            NewNoOffersBox                                              ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UCommonBorder*)                            NewPurchasingDisabledBox                                    ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   NewSpinner                                                  ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              NewSwitcherItemsProgress                                    ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UGridPanel*)                               NewVBuckGrid                                                ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UVerticalBox*)                             NewVbuckOffers                                              ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UVerticalBox*)                             NewVBuckSection                                             ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UScaleBox*)                                OfferScaleBoxRoot                                           ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay                                                     ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(USimpleMTXDisplay_C*)                      SimpleMTXDisplay                                            ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UStore_BannerMessage_C*)                   StoreBannerMessage                                          ___ OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UAudioComponent*)                          Ambient_Sound                                               ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(UWidget*)                                  InitiallyFocusedOffer                                       ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	DMember(bool)                                      bShowingCampaignUpsell                                      ___ OFFSET(get<bool>, {0x6A0, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Inspect.FrontendCamera_Inspect_C
/// Size: 0x0010 (0x000A00 - 0x000A10)
class AFrontendCamera_Inspect_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
};

/// Class /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C
/// Size: 0x0148 (0x001500 - 0x001648)
class UStoreMain_MTXOffer_C : public UFortRealMoneyOffer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5704;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Linear                                                ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UWidgetAnimation*)                         UnhoverNew                                                  ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoverNew                                                    ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UMTXOffer_SpecialBanner_C*)                AthenaDirectAcquisitionOffer_SpecialBanner                  ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UImage*)                                   BaseColor                                                   ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UBorder*)                                  BonusTag                                                    ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BonusText                                                   ___ OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UBorder*)                                  Border_Footer                                               ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UBorder*)                                  BorderAll                                                   ___ OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BundleTotalQuantity                                         ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BundleVBucksText                                            ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CurrencyTotalQuantity                                       ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UHorizontalBox*)                           HBox_Price                                                  ___ OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UImage*)                                   HoverBorder                                                 ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UImage*)                                   KeyArt                                                      ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UImage*)                                   OverlayGradient                                             ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UOverlay*)                                 OverlaySalePrice                                            ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UImage*)                                   PlayStationStoreLogo                                        ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Plus                                                        ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UVerticalBox*)                             RMTBundle                                                   ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UVerticalBox*)                             RMTCurrency                                                 ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          RMTTypeSwitcher                                             ___ OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           RMTVBucksHB                                                 ___ OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBoxKeyArt                                              ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Price                                              ___ OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferDisplayPrice                                       ___ OFFSET(get<T>, {0x15E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferName                                               ___ OFFSET(get<T>, {0x15E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferPurchaseUnvailable                                 ___ OFFSET(get<T>, {0x15F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOriginalPrice                                           ___ OFFSET(get<T>, {0x15F8, 8, 0, 0})
	CMember(USizeBox*)                                 TileSize                                                    ___ OFFSET(get<T>, {0x1600, 8, 0, 0})
	CMember(UCommonTextBlock*)                         VBucksText                                                  ___ OFFSET(get<T>, {0x1608, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  AboutToShowDetails                                          ___ OFFSET(get<T>, {0x1610, 16, 0, 0})
	DMember(bool)                                      bCanSetPrice                                                ___ OFFSET(get<bool>, {0x1620, 1, 0, 0})
	CMember(UCatalogMessaging*)                        CatalogMessaging                                            ___ OFFSET(get<T>, {0x1628, 8, 0, 0})
	SMember(FText)                                     OverrideBannerText                                          ___ OFFSET(get<T>, {0x1630, 24, 0, 0})
};

/// Class /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C
/// Size: 0x0138 (0x0008B0 - 0x0009E8)
class UStoreMain_OfferDetails_C : public UFortRealMoneyOfferDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2536;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x8B0, 8, 0, 0})
	CMember(UImage*)                                   BaseColor                                                   ___ OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(UImage*)                                   BaseColorDetails                                            ___ OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           BonusMTXArea                                                ___ OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(UCommonBorder*)                            BorderDisclaimer                                            ___ OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonText_BaseQuantity                                     ___ OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonText_BonusQuantity                                    ___ OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(UImage*)                                   Highlight                                                   ___ OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_CurrencyIcon                                          ___ OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(UCommonLazyImage*)                         KeyArt                                                      ___ OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(USizeBox*)                                 MTXArea                                                     ___ OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_VBucks                                              ___ OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(UImage*)                                   OverlayGradient                                             ___ OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(UImage*)                                   OverlayGradientDetails                                      ___ OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(UOverlay*)                                 OverlaySalePrice                                            ___ OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(USafeZone*)                                SafeZoneCloseButton                                         ___ OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(USafeZone*)                                SafeZoneMTX                                                 ___ OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(UStoreMain_OfferDetailsAttribute_C*)       StoreMain_OfferDetailsAttribute1                            ___ OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(UStoreMain_OfferDetailsAttribute_C*)       StoreMain_OfferDetailsAttribute2                            ___ OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextDescription                                             ___ OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextName                                                    ___ OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferDisplayPrice                                       ___ OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOriginalPrice                                           ___ OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_MtxContainer                                           ___ OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(UVerticalBox*)                             VBoxOfferInfo                                               ___ OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(UImage*)                                   VBuckHighlight                                              ___ OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UWBP_ContentPurchaseBlocker_C*)            WBP_ContentPurchaseBlocker                                  ___ OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(TMap<int32_t, UFortMtxOfferData*>)         ABAssetCollection                                           ___ OFFSET(get<T>, {0x988, 80, 0, 0})
	DMember(bool)                                      isContentBlocked                                            ___ OFFSET(get<bool>, {0x9D8, 1, 0, 0})
	CMember(UFortMtxOfferData*)                        DisplayAsset                                                ___ OFFSET(get<T>, {0x9E0, 8, 0, 0})
};

/// Class /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UWBP_ContentPurchaseBlocker_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Mobile                                              ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Loud_C*)                 WBP_UIKit_Button_Loud                                       ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FText)                                     Text_Details                                                ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	DMember(int32_t)                                   Max_Width                                                   ___ OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ParentalControlsScreenClass                                 ___ OFFSET(get<T>, {0x2F0, 32, 0, 0})
};

/// Class /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C
/// Size: 0x0088 (0x0002D8 - 0x000360)
class UWBP_ComboBox_C : public UFortComboBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OpenAnim                                                    ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoverAnim                                                   ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonActionWidget*)                      CommonActionWidget                                          ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UOverlay*)                                 InputActionOverlay                                          ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LabelText                                                   ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   Outline                                                     ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(bool)                                      AlignContentCenter                                          ___ OFFSET(get<bool>, {0x318, 1, 0, 0})
	SMember(FLinearColor)                              OutlineEndColor                                             ___ OFFSET(get<T>, {0x31C, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 OutlineMaterial                                             ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FName)                                     OutlineColorParam                                           ___ OFFSET(get<T>, {0x338, 4, 0, 0})
	CMember(TEnumAsByte<E_UI_InputField_ContentSize>)  ContentSize                                                 ___ OFFSET(get<T>, {0x33C, 1, 0, 0})
	DMember(bool)                                      p_IsFocused                                                 ___ OFFSET(get<bool>, {0x33D, 1, 0, 0})
	DMember(bool)                                      p_IsListOpened                                              ___ OFFSET(get<bool>, {0x33E, 1, 0, 0})
	DMember(bool)                                      p_IsHover                                                   ___ OFFSET(get<bool>, {0x33F, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ArrowMaterial                                               ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FName)                                     ArrowColorParam                                             ___ OFFSET(get<T>, {0x348, 4, 0, 0})
	DMember(bool)                                      p_FocusAnimPlayed                                           ___ OFFSET(get<bool>, {0x34C, 1, 0, 0})
	CMember(USoundBase*)                               HoverSound                                                  ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(USoundBase*)                               ClickSound                                                  ___ OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C
/// Size: 0x00F1 (0x0002D8 - 0x0003C9)
class UWBP_InputField_C : public UFortInputField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 969;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ErrorAnim                                                   ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoverAnim                                                   ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      CommonActionWidget                                          ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UOverlay*)                                 ErrorIconWrapper                                            ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ErrorText                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UBorder*)                                  ErrorTextWrapper                                            ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LabelText                                                   ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UBorder*)                                  LabelTextWrapper                                            ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Outline                                                     ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ActionWidgetShower                                  ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UOverlay*)                                 ProcessingFeedbackWrapper                                   ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TEnumAsByte<E_UI_InputField_State>)        DebugInputFieldState                                        ___ OFFSET(get<T>, {0x338, 1, 0, 0})
	DMember(bool)                                      ShowLabel                                                   ___ OFFSET(get<bool>, {0x339, 1, 0, 0})
	DMember(bool)                                      AlignContentCenter                                          ___ OFFSET(get<bool>, {0x33A, 1, 0, 0})
	SMember(FText)                                     DefaultLabelValue                                           ___ OFFSET(get<T>, {0x340, 24, 0, 0})
	SMember(FText)                                     ErrorValue                                                  ___ OFFSET(get<T>, {0x358, 24, 0, 0})
	SMember(FText)                                     DefaultHintTextValue                                        ___ OFFSET(get<T>, {0x370, 24, 0, 0})
	SMember(FLinearColor)                              IdleEndColor                                                ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FLinearColor)                              ErrorEndColor                                               ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	SMember(FLinearColor)                              OutlineEndColor                                             ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 OutlineMaterial                                             ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	SMember(FName)                                     OutlineColorParam                                           ___ OFFSET(get<T>, {0x3C0, 4, 0, 0})
	CMember(TEnumAsByte<E_UI_InputField_ContentSize>)  ContentSize                                                 ___ OFFSET(get<T>, {0x3C4, 1, 0, 0})
	DMember(bool)                                      p_IsFocused                                                 ___ OFFSET(get<bool>, {0x3C5, 1, 0, 0})
	DMember(bool)                                      p_IsMouseHovered                                            ___ OFFSET(get<bool>, {0x3C6, 1, 0, 0})
	DMember(bool)                                      p_FocusAnimPlayed                                           ___ OFFSET(get<bool>, {0x3C7, 1, 0, 0})
	DMember(bool)                                      ShowActionOnlyOnFocus                                       ___ OFFSET(get<bool>, {0x3C8, 1, 0, 0})
};

/// Class /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C
/// Size: 0x0010 (0x0005D0 - 0x0005E0)
class UJoinServer_C : public UFortUIStateWidget_JoinServer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UBuildWatermark_C*)                        BuildWatermark                                              ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
};

/// Class /Game/UI/JoinServer/RejoinWindow.RejoinWindow_C
/// Size: 0x0038 (0x000598 - 0x0005D0)
class URejoinWindow_C : public UFortRejoinWindowBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(UCommonTextBlock*)                         AutorejoinText                                              ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UHorizontalBox*)                           ButtonBox                                                   ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestAbandon                                            ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestRejoinRetry                                        ___ OFFSET(get<T>, {0x5C0, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Border/Border-TabM.Border-TabM_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_TabM_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-TabM-Solid.Border-TabM-Solid_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_TabM_Solid_C : public UBorder_TabM_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-TabM-Solid-White60pc.Border-TabM-Solid-White60pc_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_TabM_Solid_White60pc_C : public UBorder_TabM_Solid_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_CycleArrow_Right.ButtonStyle_CycleArrow_Right_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_CycleArrow_Right_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_CycleArrow_Left_Double.ButtonStyle_CycleArrow_Left_Double_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_CycleArrow_Left_Double_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_CycleArrow_Left.ButtonStyle_CycleArrow_Left_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_CycleArrow_Left_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_CycleArrow_Right_Double.ButtonStyle_CycleArrow_Right_Double_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_CycleArrow_Right_Double_C : public UButtonStyle_MediumTransparentNoCues_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XL-70pc.TextStyle-Base-XL-70pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XL_70pc_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C
/// Size: 0x0048 (0x0014D0 - 0x001518)
class UMTXButton_C : public UFortMTXButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Mobile                                                ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Grow                                                  ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Bounce                                                ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UBorder*)                                  AmountColor                                                 ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UImage*)                                   ButtonBacking                                               ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UImage*)                                   Image_Vbucks                                                ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(USizeBox*)                                 VariableSize                                                ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B-70pc.TextStyle-Base-XS-B-70pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_70pc_C : public UTextStyle_Base_XS_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Social/FortOwningPlayerSocialNameTextBlock.FortOwningPlayerSocialNameTextBlock_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UFortOwningPlayerSocialNameTextBlock_C : public UFortOwningPlayerSocialNameTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/UI/Frontend/StoreMain/MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UMTXOffer_SpecialBanner_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_SaleInfo                                             ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HB_BattlePassStarsSupplemental                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Image_BattleStarSupplemental                                ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         T_BattleStarInfoSupplemental                                ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         T_SaleInfo                                                  ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          WidgetSwitcher_Main                                         ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(bool)                                      bShowBanner                                                 ___ OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bHasBattlePassStars                                         ___ OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	SMember(FText)                                     SalesInfoText                                               ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	DMember(int32_t)                                   NumOfBattlePassStars                                        ___ OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	CMember(UCatalogMessaging*)                        CatalogMessaging                                            ___ OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Game/UI/Frontend/StoreMain/StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UStoreMain_OfferDetailsAttribute_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Name                                                        ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Value                                                       ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FText)                                     AttributeDescription                                        ___ OFFSET(get<T>, {0x2F0, 24, 0, 0})
	SMember(FText)                                     AttributeValue                                              ___ OFFSET(get<T>, {0x308, 24, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-70pc.TextStyle-Base-XS-70pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_70pc_C : public UTextStyle_Base_XS_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Frontend/StoreMain/PurchaseUnavailable.PurchaseUnavailable_C
/// Size: 0x0020 (0x000568 - 0x000588)
class UPurchaseUnavailable_C : public UFortPurchaseUnavailableModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Details                                            ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_HeaderText                                         ___ OFFSET(get<T>, {0x580, 8, 0, 0})
};

/// Class /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C
/// Size: 0x0049 (0x000430 - 0x000479)
class ULoadingSubGameContentModal_C : public UFortLoadingOnDemandContentModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1145;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro                                                       ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock_Title                                       ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UProgressBar*)                             DownloadingProgressBar                                      ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UVerticalBox*)                             Modal_VertBox                                               ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Content                                                ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Progress                                               ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	DMember(bool)                                      HasPlayedAnim                                               ___ OFFSET(get<bool>, {0x478, 1, 0, 0})
};

/// Class /Game/UI/Frontend/ItemShop/SimpleMTXDisplay.SimpleMTXDisplay_C
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class USimpleMTXDisplay_C : public UFortSimpleMTXDisplay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     AvailableAmountText                                         ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/Athena_ButtonStyle_AngledDarkBlueMenuButton.Athena_ButtonStyle_AngledDarkBlueMenuButton_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UAthena_ButtonStyle_AngledDarkBlueMenuButton_C : public UAthena_ButtonStyle_AngledBlueMenuButton_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Main.FrontendCamera_Main_C
/// Size: 0x0010 (0x000A00 - 0x000A10)
class AFrontendCamera_Main_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
};

/// Class /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C
/// Size: 0x0038 (0x0015F0 - 0x001628)
class USubgameTile_C : public UFortSubgameTile
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x15F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         RevealCMSKeyArt                                             ___ OFFSET(get<T>, {0x15F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         UnFocused                                                   ___ OFFSET(get<T>, {0x1600, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FocusedSecondary                                            ___ OFFSET(get<T>, {0x1608, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Focused                                                     ___ OFFSET(get<T>, {0x1610, 8, 0, 0})
	CMember(UImage*)                                   FocusPulse                                                  ___ OFFSET(get<T>, {0x1618, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 PulseMID                                                    ___ OFFSET(get<T>, {0x1620, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew2.ButtonStyle-Skew2_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew2_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationButton.ConfirmationButton_C
/// Size: 0x0000 (0x001680 - 0x001680)
class UConfirmationButton_C : public UIconTextButton_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5760;

public:
};

/// Class /Game/UI/Foundation/Border/Border_StatRow_WhiteLowOpacity.Border_StatRow_WhiteLowOpacity_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_StatRow_WhiteLowOpacity_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-DkBlue.Border-SolidBG-DkBlue_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_DkBlue_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-FloatingShadow.Border-FloatingShadow_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_FloatingShadow_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border_Solid_DkBlue.Border_Solid_DkBlue_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_Solid_DkBlue_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Frontend/BottomBar/AthenaBottomBarWidget.AthenaBottomBarWidget_C
/// Size: 0x0019 (0x0002D0 - 0x0002E9)
class UAthenaBottomBarWidget_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 745;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UAthenaBoundActionBar*)                    AthenaBoundActionBar                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortHUDElementWrapper_C*)                 FortHUDElementWrapper                                       ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      Display_Owner_Actions_Only                                  ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
};

/// Class /Game/UI/Login/DisplayName/DisplayName.DisplayName_C
/// Size: 0x0020 (0x0005A8 - 0x0005C8)
class UDisplayName_C : public UFortDisplayNameWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	CMember(UCommonBorder*)                            DisplayNameBorder                                           ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UEditableText*)                            EditText_Number                                             ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_Number                                                 ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Class /Game/UI/Login/AccountSelect/PlayedBeforeSelect.PlayedBeforeSelect_C
/// Size: 0x0048 (0x000418 - 0x000460)
class UPlayedBeforeSelect_C : public UFortPlayedBeforeSelect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock1                                            ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher_InviteOnly                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UInviteEventTitle_C*)                      InviteEventTitle                                            ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          LoginType_Switcher                                          ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(USignInWidget_C*)                          SignInWidget                                                ___ OFFSET(get<T>, {0x458, 8, 0, 0})
};

/// Class /Game/UI/Login/AccountSelect/LoginCredentialSelect.LoginCredentialSelect_C
/// Size: 0x0068 (0x000440 - 0x0004A8)
class ULoginCredentialSelect_C : public UFortLoginCredentialSelect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher                                        ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Erebus_Title                                                ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ErebusType                                                  ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UImage*)                                   Image1                                                      ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   Image2                                                      ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   Image3                                                      ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UImage*)                                   Image4                                                      ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UImage*)                                   Image5                                                      ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UImage*)                                   Image6                                                      ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UBorder*)                                  TrademarksBorder                                            ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
};

/// Class /Game/UI/Login/MFA/MultiFactorAuthWidget.MultiFactorAuthWidget_C
/// Size: 0x0000 (0x000568 - 0x000568)
class UMultiFactorAuthWidget_C : public UFortMultiFactorAuthWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M-B_Black.TextStyle-Base-M-B_Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_B_Black_C : public UTextStyle_Base_M_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M-B_Red.TextStyle-Base-M-B_Red_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_B_Red_C : public UTextStyle_Base_M_B_Blue_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Login/Eula/EulaWidget.EulaWidget_C
/// Size: 0x0010 (0x000580 - 0x000590)
class UEulaWidget_C : public UFortEulaWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	SMember(FMulticastInlineDelegate)                  OnEulaResponse                                              ___ OFFSET(get<T>, {0x580, 16, 0, 0})
};

/// Class /Game/UI/Login/AccountSelect/AccountNotFound.AccountNotFound_C
/// Size: 0x0000 (0x000548 - 0x000548)
class UAccountNotFound_C : public UFortAccountNotFound
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-70pc.TextStyle-Base-S-70pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_70pc_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C
/// Size: 0x0063 (0x0014C0 - 0x001523)
class USkewButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5411;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Released                                                    ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   ImageButtonFill                                             ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   ImageShadow                                                 ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UNamedSlot*)                               NamedSlot_ButtonContent                                     ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_SkewBrushes                                         ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	SMember(FLinearColor)                              ButtonColor                                                 ___ OFFSET(get<T>, {0x1500, 16, 0, 0})
	SMember(FLinearColor)                              HoverColor                                                  ___ OFFSET(get<T>, {0x1510, 16, 0, 0})
	DMember(bool)                                      Chip                                                        ___ OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(bool)                                      Skew                                                        ___ OFFSET(get<bool>, {0x1521, 1, 0, 0})
	DMember(bool)                                      NoHoverColor                                                ___ OFFSET(get<bool>, {0x1522, 1, 0, 0})
};

/// Class /Game/UI/Login/AccountLinking/AccountPinLinkingWindow.AccountPinLinkingWindow_C
/// Size: 0x0018 (0x000658 - 0x000670)
class UAccountPinLinkingWindow_C : public UFortAccountPinLinkingWindow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x668, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_Desirable.ButtonStyle-Skew_Desirable_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_Desirable_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_Eula_GamePad.ButtonStyle-Skew_Eula_GamePad_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_Eula_GamePad_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-L-Black.TextStyle-Header-L-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_L_Black_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-L-Grey.TextStyle-Header-L-Grey_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_L_Grey_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew.ButtonStyle-Skew_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Login/AccountLinking/AccountLinkingWindow.AccountLinkingWindow_C
/// Size: 0x0000 (0x000620 - 0x000620)
class UAccountLinkingWindow_C : public UFortAccountLinkingWindow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
};

/// Class /Game/UI/Login/SignIn/SignInWidget.SignInWidget_C
/// Size: 0x0018 (0x000590 - 0x0005A8)
class USignInWidget_C : public UFortSignInWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(UNamedSlot*)                               ButtonSlot                                                  ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonLazyImage*)                         CommonLazyImage                                             ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UVerticalBox*)                             ContentBox                                                  ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/TopBar/ButtonStyle-Outline-M.ButtonStyle-Outline-M_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Outline_M_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_Feature_L.ButtonStyle_Feature_L_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Feature_L_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-Black.TextStyle-Base-S-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_Black_C : public UTextStyle_Base_S_B_Blue_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionUnsupportedActionScreen.CorrectiveActionUnsupportedActionScreen_C
/// Size: 0x0000 (0x000420 - 0x000420)
class UCorrectiveActionUnsupportedActionScreen_C : public UFortCorrectiveActionUnsupportedActionScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Game/UI/Login/AccountLinking/PinGrantCodeInfoWidget.PinGrantCodeInfoWidget_C
/// Size: 0x0008 (0x000328 - 0x000330)
class UPinGrantCodeInfoWidget_C : public UFortPinGrantCodeInfoWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Outline-M-Disabled.TextStyle-Button-Outline-M-Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Outline_M_Disabled_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_Feature_L_Yellow.ButtonStyle_Feature_L_Yellow_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Feature_L_Yellow_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_Feature_L_Disabled.TextStyle_Button_Feature_L_Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Feature_L_Disabled_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Login/QualitySelection/QualityLevelSelectScreen.QualityLevelSelectScreen_C
/// Size: 0x0048 (0x0005C0 - 0x000608)
class UQualityLevelSelectScreen_C : public UFortQualityLevelSelectScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UQualityModeSelectTile_C*)                 Button_SelectHighQuality                                    ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(USafeZone*)                                Footersafezone                                              ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  OptionMessage                                               ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QualityLevelCalculated                                 ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QualityTitle                                           ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UHorizontalBox*)                           TilesRow                                                    ___ OFFSET(get<T>, {0x600, 8, 0, 0})
};

/// Class /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C
/// Size: 0x0091 (0x0014E0 - 0x001571)
class UQualityModeSelectTile_C : public UFortQualityModeTile
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5489;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         InAnOutro                                                   ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmSeleccion                                            ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         GameModeSelection                                           ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_Recommended                                          ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UImage*)                                   ConfirmSelectionFlash                                       ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   ConfirmSelectionShine                                       ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UImage*)                                   DisabledGray                                                ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UImage*)                                   SelectedIcon                                                ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UCommonTextBlock*)                         T_Recommended                                               ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Selected                                                ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_AdditionalDownloadSize                            ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_QualityDescription                                ___ OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_QualityLevelName                                  ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_TotalBuildSize                                    ___ OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UImage*)                                   TileArt                                                     ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UImage*)                                   UnhoveredVignette                                           ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	DMember(bool)                                      bIsRecommendedLevel                                         ___ OFFSET(get<bool>, {0x1570, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-S.TextStyle-Header-M-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_S_C : public UTextStyle_Header_M_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_Feature_L_Base.TextStyle_Button_Feature_L_Base_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Feature_L_Base_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C
/// Size: 0x0018 (0x000310 - 0x000328)
class UQualityLevelSelectTimer_C : public UFortHUDQualityLevelSelectTimer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(double)                                    TextScaleUnderOneSecond                                     ___ OFFSET(get<double>, {0x318, 8, 0, 0})
	DMember(double)                                    TextScaleOverOneSecond                                      ___ OFFSET(get<double>, {0x320, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-FullyInvisible.ButtonStyle-FullyInvisible_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_FullyInvisible_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Primary/ButtonStyle_HoldPurchase_Yellow.ButtonStyle_HoldPurchase_Yellow_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_HoldPurchase_Yellow_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_HoldPurchase.TextStyle_Button_HoldPurchase_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_HoldPurchase_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Login/Status/StatusWidget.StatusWidget_C
/// Size: 0x0008 (0x0005C0 - 0x0005C8)
class UStatusWidget_C : public UFortLoginStatus
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Profile/ConsoleProfileWidget.ConsoleProfileWidget_C
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UConsoleProfileWidget_C : public UFortConsoleProfileWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_Feature_M_Yellow.ButtonStyle_Feature_M_Yellow_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Feature_M_Yellow_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_Feature_M.ButtonStyle_Feature_M_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Feature_M_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_Feature_M_Base.TextStyle_Button_Feature_M_Base_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Feature_M_Base_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_Feature_M_Disabled.TextStyle_Button_Feature_M_Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Feature_M_Disabled_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-TextOnlyBase.ButtonStyle-TextOnlyBase_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_TextOnlyBase_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-TextOnlyBase_S-B.ButtonStyle-TextOnlyBase_S-B_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_TextOnlyBase_S_B_C : public UButtonStyle_TextOnlyBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C
/// Size: 0x0040 (0x000558 - 0x000598)
class UHealthWarningScreen_C : public UHealthWarningScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FinishingAnim                                               ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  HealthWarningCompleted                                      ___ OFFSET(get<T>, {0x570, 16, 0, 0})
	SMember(FTimerHandle)                              ShowTimer                                                   ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FMargin)                                   IconPadding                                                 ___ OFFSET(get<T>, {0x588, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Primary/ButtonStyle-Primary-M_Skew_Yellow.ButtonStyle-Primary-M_Skew_Yellow_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Primary_M_Skew_Yellow_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-Yellow.Border-SolidBG-Yellow_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_Yellow_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-MainL-Black.Border-MainL-Black_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_MainL_Black_C : public UBorder_MainL_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Login/AccountSelect/InviteEventTitle.InviteEventTitle_C
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UInviteEventTitle_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UCommonLazyImage*)                         TitleImage                                                  ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Game/UI/Frontend/StoreMain/WebLogin.WebLogin_C
/// Size: 0x0018 (0x000528 - 0x000540)
class UWebLogin_C : public UFortWebLoginWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCircularThrobber*)                        Throbber                                                    ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UBorder*)                                  WebContent                                                  ___ OFFSET(get<T>, {0x538, 8, 0, 0})
};

/// Class /Game/UI/Frontend/Misc/RestrictedCountryRatingIcons.RestrictedCountryRatingIcons_C
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class URestrictedCountryRatingIcons_C : public URestrictedCountryRatingIcons
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Game/UI/Foundation/Border/Border_LightNavy_VGrad.Border_LightNavy_VGrad_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_LightNavy_VGrad_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Frontend/ItemManagement/InventoryPanel/ItemTileButtonStyles/ItemManagementTileButtonStyle-AthenaLocker.ItemManagementTileButtonStyle-AthenaLocker_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UItemManagementTileButtonStyle_AthenaLocker_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C
/// Size: 0x0018 (0x000A00 - 0x000A18)
class AFrontendCamera_VaultRotator_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(AVaultRotator_C*)                          ActiveVaultRotator                                          ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Input/CommonUIInputData.CommonUIInputData_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UCommonUIInputData_C : public UCommonUIInputData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/UI/Foundation/UIManager_Startup.UIManager_Startup_C
/// Size: 0x0000 (0x000210 - 0x000210)
class UUIManager_Startup_C : public UFortUIManager_Startup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /Game/UI/Foundation/UIManager_Athena.UIManager_Athena_C
/// Size: 0x0000 (0x000230 - 0x000230)
class UUIManager_Athena_C : public UFortUIManager_Athena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Class /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C
/// Size: 0x0058 (0x000341 - 0x000399)
class AMPItemShop_VaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 921;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     FloorVisibility_FloorMask_33DB417F4F318DD14C0CDB92ED647F56  ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FloorVisibility__Direction_33DB417F4F318DD14C0CDB92ED647F56 ___ OFFSET(get<T>, {0x35C, 1, 0, 0})
	CMember(UTimelineComponent*)                       FloorVisibility                                             ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_A94F40F44CC1E033CF6C509AB9A33280 ___ OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_A94F40F44CC1E033CF6C509AB9A33280  ___ OFFSET(get<float>, {0x36C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_A94F40F44CC1E033CF6C509AB9A33280 ___ OFFSET(get<T>, {0x370, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionForward                                           ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultBackgroundMaterial                                   ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultFloorMaterial                                        ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Background                                                  ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	DMember(bool)                                      IsMaterialBackground                                        ___ OFFSET(get<bool>, {0x398, 1, 0, 0})
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C
/// Size: 0x0060 (0x0002F1 - 0x000351)
class UItemReceivedCurrencyHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 849;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BattlepassTier                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BattlepassUpgraded                                          ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher_Icon                                   ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher_Title                                  ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCurrencyListView_C*)                      CurrencyListView                                            ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UImage*)                                   ImageBattlePassIconGold                                     ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UImage*)                                   ImageBattlePassIconSilver                                   ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UItemReceivedAccountWidget_C*)             ItemReceivedAccountWidget                                   ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ActivateWidgetFromPresentationScreen                        ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	DMember(bool)                                      AlreadyActivated                                            ___ OFFSET(get<bool>, {0x350, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Border/Border-PowerToast.Border-PowerToast_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_PowerToast_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Plugin/Squeegee/SqueegeeInjectionSlot.SqueegeeInjectionSlot_C
/// Size: 0x0000 (0x000300 - 0x000300)
class USqueegeeInjectionSlot_C : public UFortSqueegeeWidgetInjectionSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Game/UI/Foundation/Modals/PasscodeModal/PinDot.PinDot_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UPinDot_C : public UFortPinCharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Border/Border-PowerToastGlow.Border-PowerToastGlow_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_PowerToastGlow_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-Purple.Border-SolidBG-Purple_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_Purple_C : public UBorder_ShellTopBar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C
/// Size: 0x0048 (0x0002A8 - 0x0002F0)
class UErrorLlama_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Llama                                                   ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bFlippedTexture                                             ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	SMember(FVector2D)                                 CurLookAt2D                                                 ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(ECommonInputType)                          CurInputType                                                ___ OFFSET(get<T>, {0x2D8, 1, 0, 0})
	DMember(double)                                    EyeInterpSpeed                                              ___ OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    MaterialInputScale                                          ___ OFFSET(get<double>, {0x2E8, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Border/Border-SolidBG-RewardBack.Border-SolidBG-RewardBack_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_SolidBG_RewardBack_C : public UBorder_ShellTopBar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Border/Border-TabM-Solid-White100pc.Border-TabM-Solid-White100pc_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_TabM_Solid_White100pc_C : public UBorder_TabM_Solid_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-B-Black.TextStyle-Base-XXS-B-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_B_Black_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/LetoBorder.LetoBorder_C
/// Size: 0x0038 (0x0002D8 - 0x000310)
class ULetoBorder_C : public UFortLetoLayoutBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UBorder*)                                  BorderBottom                                                ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UBorder*)                                  BorderLeft                                                  ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UBorder*)                                  BorderNameplate                                             ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UBorder*)                                  BorderRight                                                 ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UBorder*)                                  BorderTop                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-B-Red.TextStyle-Base-XXS-B-Red_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_B_Red_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-Black.TextStyle-Base-XXS-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_Black_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-Red.TextStyle-Base-XXS-Red_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_Red_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-EnchantedBlue.TextStyle-Base-XS-EnchantedBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_EnchantedBlue_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B-EnchantedBlue.TextStyle-Base-XS-B-EnchantedBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_EnchantedBlue_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Sidebar/RebootRally/WBP_RebootRallyIcon.WBP_RebootRallyIcon_C
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class UWBP_RebootRallyIcon_C : public URebootRallyIcon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UWidgetAnimation*)                         Highlighted                                                 ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Default                                                     ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UImage*)                                   Image_RebootRally                                           ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C
/// Size: 0x0058 (0x000328 - 0x000380)
class UPowerToastWidget_C : public UFortPlayerPowerRatingToast
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         LookAtMe                                                    ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro                                                       ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Image_Power                                                 ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   LineSeparator                                               ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UImage*)                                   Moonbeam_Power_Back                                         ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UImage*)                                   Moonbeam_Power_Back_Difference                              ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UImage*)                                   PowerIconGlow                                               ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         ___ OFFSET(get<T>, {0x378, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-XS-Teal.TextStyle-BurbankSmall-XS-Teal_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_XS_Teal_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Sidebar/Tags/SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class USocialTagsFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-XS-Cyan_25pc.TextStyle-BurbankSmall-XS-Cyan_25pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_XS_Cyan_25pc_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Modals/PasscodeModal/Styles/TextStyle_Passcode_Burbank.TextStyle_Passcode_Burbank_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Passcode_Burbank_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-S-Teal_25pc.TextStyle-BurbankSmall-S-Teal_25pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_S_Teal_25pc_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-S-Teal.TextStyle-BurbankSmall-S-Teal_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_S_Teal_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C
/// Size: 0x0010 (0x0014D0 - 0x0014E0)
class UPinCodeButton_C : public UFortPinButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PasscodeText                                                ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-S-White.TextStyle-BurbankSmall-S-White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_S_White_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Primary-MSkew.TextStyle-Button-Primary-MSkew_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Primary_MSkew_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Tab/ButtonStyle-SoloButton.ButtonStyle-SoloButton_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_SoloButton_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_NewFeature_M_Yellow.ButtonStyle_NewFeature_M_Yellow_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_NewFeature_M_Yellow_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C
/// Size: 0x0018 (0x000548 - 0x000560)
class UWebPurchase_C : public UFortWebPurchaseScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Quiet_C*)                Button_Back                                                 ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UCircularThrobber*)                        Throbber                                                    ___ OFFSET(get<T>, {0x558, 8, 0, 0})
};

/// Class /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C
/// Size: 0x006D (0x0003F0 - 0x00045D)
class UVoiceChannelChangePopup_C : public UFortVoiceChannelChangePopup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1117;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AmbientIconPulse                                            ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UHorizontalBox*)                           GamepadKeybindWrapper                                       ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   Image_Mic                                                   ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UHorizontalBox*)                           KBKeybindWrapper                                            ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   MicPulse                                                    ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_KeybindWidgets                                     ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Hold                                                   ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FName)                                     M_Param_ColorA                                              ___ OFFSET(get<T>, {0x430, 4, 0, 0})
	SMember(FName)                                     M_Param_ColorB                                              ___ OFFSET(get<T>, {0x434, 4, 0, 0})
	SMember(FName)                                     M_Param_Progress                                            ___ OFFSET(get<T>, {0x438, 4, 0, 0})
	SMember(FLinearColor)                              ColorB                                                      ___ OFFSET(get<T>, {0x43C, 16, 0, 0})
	SMember(FLinearColor)                              ColorA                                                      ___ OFFSET(get<T>, {0x44C, 16, 0, 0})
	DMember(bool)                                      CollapseOnAnimationFinish                                   ___ OFFSET(get<bool>, {0x45C, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C
/// Size: 0x0190 (0x0014C0 - 0x001650)
class UIconTextButtonHold_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5712;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ButtonContent                                 ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UNamedSlot*)                               RightExtraContentSlot                                       ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  ___ OFFSET(get<T>, {0x14F0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   ___ OFFSET(get<T>, {0x1510, 192, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          ___ OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            ___ OFFSET(get<T>, {0x15E0, 1, 0, 0})
	DMember(bool)                                      bMouseKeyboardStyleSet                                      ___ OFFSET(get<bool>, {0x15E1, 1, 0, 0})
	SMember(FText)                                     OverrideButtonText                                          ___ OFFSET(get<T>, {0x15E8, 24, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 ButtonTextJustification                                     ___ OFFSET(get<T>, {0x1600, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             ___ OFFSET(get<bool>, {0x1601, 1, 0, 0})
	DMember(double)                                    PressProgress                                               ___ OFFSET(get<double>, {0x1608, 8, 0, 0})
	DMember(bool)                                      bIgnoreInputActionWidgetText                                ___ OFFSET(get<bool>, {0x1610, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  HoldActionStarted                                           ___ OFFSET(get<T>, {0x1618, 16, 0, 0})
	DMember(bool)                                      bHolding                                                    ___ OFFSET(get<bool>, {0x1628, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  HoldActionEnded                                             ___ OFFSET(get<T>, {0x1630, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HoldActionCompleted                                         ___ OFFSET(get<T>, {0x1640, 16, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_LBlue.ButtonStyle-Skew_LBlue_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_LBlue_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Modals/ProgressModal/Athena_ProgressModal.Athena_ProgressModal_C
/// Size: 0x0038 (0x0003F8 - 0x000430)
class UAthena_ProgressModal_C : public UAthenaProgressModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Down                                        ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Up                                          ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   ProgressSpinner                                             ___ OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/ControllerDisconnectedModal/Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C
/// Size: 0x0040 (0x000400 - 0x000440)
class UAthena_ControllerDisconnectedModal_C : public UAthenaControllerDisconnectedModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonActionWidget*)                      CommonActionWidget                                          ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Down                                        ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Up                                          ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UImage*)                                   ProgressSpinner                                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-XS-White.TextStyle-BurbankSmall-XS-White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_XS_White_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-BottomBar-Console.ButtonStyle-BottomBar-Console_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_BottomBar_Console_C : public UButtonStyle_MediumBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_Feature_M_Feature_s11.TextStyle_Button_Feature_M_Feature_s11_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Feature_M_Feature_s11_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-S-Black.TextStyle-Header-S-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_S_Black_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C
/// Size: 0x0091 (0x0002F8 - 0x000389)
class UToastWidget_MinorError_C : public UFortToastWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 905;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro1                                                      ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_new2                                                  ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro                                                       ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro2                                                      ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   NotificationImage                                           ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        OpenButton                                                  ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ProgrammerNote                                              ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                ___ OFFSET(get<bool>, {0x388, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_Feature_L_Yellow_s11.ButtonStyle_Feature_L_Yellow_s11_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Feature_L_Yellow_s11_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C
/// Size: 0x0018 (0x000560 - 0x000578)
class URestartClient_C : public UFortRestartClientModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Confirm                                              ___ OFFSET(get<T>, {0x570, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/Athena_ButtonStyle_CollectionTab.Athena_ButtonStyle_CollectionTab_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UAthena_ButtonStyle_CollectionTab_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C
/// Size: 0x00A9 (0x001530 - 0x0015D9)
class UBP_SidebarCollectionScreenContainerTabButtonEditTags_C : public UFortSidebarCollectionScreenContainerTabButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5593;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected_Touch                                              ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unselected_Touch                                            ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledUnhover                                         ___ OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledHover                                           ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledUnhovered                                       ___ OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledHovered                                         ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Enabled                                                 ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Unhovered                                               ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Hovered                                                 ___ OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Reset                                                   ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Reset                                                       ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unhovered                                                   ___ OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     ___ OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unselected                                                  ___ OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    ___ OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox                                               ___ OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(USpacer*)                                  Mobile_Spacer                                               ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(UCommonBorder*)                            NewBang                                                     ___ OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay                                                     ___ OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_MobileMultiplier                                   ___ OFFSET(get<T>, {0x15D0, 8, 0, 0})
	DMember(bool)                                      isTab                                                       ___ OFFSET(get<bool>, {0x15D8, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C
/// Size: 0x0040 (0x000750 - 0x000790)
class UConfirmationWindow_C : public UFortConfirmationWindow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox                                                     ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UCommonBorder*)                            TapToCloseZone                                              ___ OFFSET(get<T>, {0x768, 8, 0, 0})
	SMember(FLinearColor)                              ButtonIconColor                                             ___ OFFSET(get<T>, {0x770, 16, 0, 0})
	CMember(USoundBase*)                               ConfirmationAppearSound                                     ___ OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(USoundBase*)                               ConfirmationDisappearSound                                  ___ OFFSET(get<T>, {0x788, 8, 0, 0})
};

/// Class /Game/UI/Foundation/CabinMode/ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C
/// Size: 0x0048 (0x000340 - 0x000388)
class UParentalControlsCabinEmailManagementWidget_C : public UFortCabinEmailManagementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UOverlay*)                                 CabinEmailManagement                                        ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Image_DisplayNameEntrySpinner                               ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   Image_DisplayNameEntrySpinner1                              ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_EmailEntry_NotBind                                  ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_SendingEmail                                        ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_SentEmail                                           ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UHorizontalBox*)                           ParentEmailWrapper                                          ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_EmailResult                                            ___ OFFSET(get<T>, {0x380, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C
/// Size: 0x0108 (0x000600 - 0x000708)
class UPinModal_C : public UFortPinModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UImage*)                                   Bad                                                         ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UImage*)                                   BG_INPUTBOX                                                 ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UImage*)                                   BG_WIREFRAME2                                               ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UImage*)                                   Border                                                      ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Close                                                ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UVerticalBox*)                             CabinLayout                                                 ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         CabinSwitcher                                               ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UHorizontalBox*)                           DefaultLayout                                               ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   Good                                                        ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UImage*)                                   GradientForFlipping                                         ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton                                       ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton1                                      ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton2                                      ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton3                                      ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton4                                      ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton5                                      ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton6                                      ___ OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton7                                      ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton8                                      ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton9                                      ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton                                              ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton1                                             ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton2                                             ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton3                                             ___ OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton4                                             ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton5                                             ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton6                                             ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton7                                             ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton8                                             ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton9                                             ___ OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                StateSwitcher                                               ___ OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(UImage*)                                   Waiting                                                     ___ OFFSET(get<T>, {0x700, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C
/// Size: 0x00D9 (0x0002A8 - 0x000381)
class UWBP_PlayerAvatar_C : public UFortPlayerAvatar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 897;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UFortOnlineStatusViewModel*)               FortOnlineStatusViewModel                                   ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UFortPlayerAvatarViewModel*)               FortPlayerAvatarViewModel                                   ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hover                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UImage*)                                   AvatarImage                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Size                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 AvatarMaterial                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FVector2D)                                 AvatarSize                                                  ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Online                                       ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Away                                         ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Offline                                      ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Blocked                                      ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FLinearColor)                              PresenceColor_Online                                        ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FLinearColor)                              PresenceColor_Away                                          ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FLinearColor)                              PresenceColor_Offline                                       ___ OFFSET(get<T>, {0x350, 16, 0, 0})
	DMember(bool)                                      ShowOnlinePresence                                          ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(double)                                    PresenceIconScale                                           ___ OFFSET(get<double>, {0x368, 8, 0, 0})
	SMember(FVector2D)                                 PresenceIconOffset                                          ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	DMember(bool)                                      ShowPresenceBg                                              ___ OFFSET(get<bool>, {0x380, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C
/// Size: 0x0059 (0x0002F8 - 0x000351)
class UToastWidgetDonut_C : public UFortToastWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 849;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UTextBlock*)                               TextBlock                                                   ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                ___ OFFSET(get<bool>, {0x350, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C
/// Size: 0x0080 (0x000600 - 0x000680)
class UErrorWindow_C : public UFortErrorWindow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Llama                                                       ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Llama1                                                      ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Llama2                                                      ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UErrorLlama_C*)                            ErrorLlama                                                  ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UErrorLlama_C*)                            ErrorLlama_C                                                ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UErrorLlama_C*)                            ErrorLlama_C1                                               ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Down                                        ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Up                                          ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UWidgetAnimation*)                         CurLlamaAnim                                                ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(TArray<UErrorLlama_C*>)                    LlamaArray                                                  ___ OFFSET(get<T>, {0x660, 16, 0, 0})
	SMember(FTimerHandle)                              LlamaReverseTimer                                           ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FTimerHandle)                              AmbientLlamaPlayTimer                                       ___ OFFSET(get<T>, {0x678, 8, 0, 0})
};

/// Class /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C
/// Size: 0x0048 (0x0002D0 - 0x000318)
class USidebarSocialAddingTagWidget_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AddingTag                                                   ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UBorder*)                                  Border_AddingTagBorder                                      ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UImage*)                                   Image_AddingTagArrow                                        ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_AddingTag                                           ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AddingTagName                                          ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FString)                                   TagCategory_AddTag                                          ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(FName)                                     Name_InnerColor                                             ___ OFFSET(get<T>, {0x310, 4, 0, 0})
	SMember(FName)                                     OuterColor                                                  ___ OFFSET(get<T>, {0x314, 4, 0, 0})
};

/// Class /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C
/// Size: 0x0254 (0x0014D0 - 0x001724)
class USidebarSocialTagWidget_C : public USocialTagWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5924;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BorderUnhover                                               ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BorderHover                                                 ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         StateChange                                                 ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UBorder*)                                  Border_TagBorder                                            ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C*) BP_SidebarCollectionScreenContainerTabButtonEditTags ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_TagWidget                                         ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_TagCategoryIcon                                    ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(USidebarSocialAddingTagWidget_C*)          SidebarSocialAddingTagWidget                                ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_TagCategoryIcon                                      ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_SelectedState                                      ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_TagName                                                ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	SMember(FName)                                     Name_InnerColor                                             ___ OFFSET(get<T>, {0x1530, 4, 0, 0})
	SMember(FName)                                     Name_OuterColor                                             ___ OFFSET(get<T>, {0x1534, 4, 0, 0})
	SMember(FName)                                     Name_TagOpacity                                             ___ OFFSET(get<T>, {0x1538, 4, 0, 0})
	SMember(FString)                                   TagCategory_Disabled                                        ___ OFFSET(get<T>, {0x1540, 16, 0, 0})
	SMember(FTimerHandle)                              StateChangeLerpTimerHandle                                  ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	DMember(double)                                    StateChangeLerpAlpha                                        ___ OFFSET(get<double>, {0x1558, 8, 0, 0})
	SMember(FSidebarSocialTagCategoryStructure)        TagCategoryStructureReference                               ___ OFFSET(get<T>, {0x1560, 112, 0, 0})
	SMember(FSidebarSocialTagCategoryStructure)        DisabledTagCategoryStructureReference                       ___ OFFSET(get<T>, {0x15D0, 112, 0, 0})
	DMember(double)                                    StateChangeLerpTimeStep                                     ___ OFFSET(get<double>, {0x1640, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 TagBorderMaterialReference                                  ___ OFFSET(get<T>, {0x1648, 8, 0, 0})
	SMember(FLinearColor)                              CurrentInnerColorReference                                  ___ OFFSET(get<T>, {0x1650, 16, 0, 0})
	SMember(FLinearColor)                              CurrentOuterColorReference                                  ___ OFFSET(get<T>, {0x1660, 16, 0, 0})
	SMember(FLinearColor)                              TargetInnerColorReference                                   ___ OFFSET(get<T>, {0x1670, 16, 0, 0})
	SMember(FLinearColor)                              TargetOuterColorReference                                   ___ OFFSET(get<T>, {0x1680, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorWhite                                        ___ OFFSET(get<T>, {0x1690, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorWhiteDisabled                                ___ OFFSET(get<T>, {0x16A0, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorBlack                                        ___ OFFSET(get<T>, {0x16B0, 16, 0, 0})
	SMember(FLinearColor)                              CurrentTagContentColorReference                             ___ OFFSET(get<T>, {0x16C0, 16, 0, 0})
	SMember(FLinearColor)                              TargetTagContentColorReference                              ___ OFFSET(get<T>, {0x16D0, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorBlackDisabled                                ___ OFFSET(get<T>, {0x16E0, 16, 0, 0})
	DMember(double)                                    EnabledTagOpacity                                           ___ OFFSET(get<double>, {0x16F0, 8, 0, 0})
	DMember(double)                                    DisabledTagOpacity                                          ___ OFFSET(get<double>, {0x16F8, 8, 0, 0})
	DMember(bool)                                      Highlighted                                                 ___ OFFSET(get<bool>, {0x1700, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 TagCategoryIconMaterialReference                            ___ OFFSET(get<T>, {0x1708, 8, 0, 0})
	SMember(FName)                                     Name_GradientStartColor                                     ___ OFFSET(get<T>, {0x1710, 4, 0, 0})
	SMember(FName)                                     Name_GradientEndColor                                       ___ OFFSET(get<T>, {0x1714, 4, 0, 0})
	SMember(FName)                                     Name_IconColor                                              ___ OFFSET(get<T>, {0x1718, 4, 0, 0})
	SMember(FName)                                     Name_EndingInnerColor                                       ___ OFFSET(get<T>, {0x171C, 4, 0, 0})
	SMember(FName)                                     Name_EndingOuterColor                                       ___ OFFSET(get<T>, {0x1720, 4, 0, 0})
};

/// Class /Game/UI/Sidebar/Tags/SidebarSocialTagList.SidebarSocialTagList_C
/// Size: 0x0000 (0x0004A0 - 0x0004A0)
class USidebarSocialTagList_C : public USidebarSocialTagListBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
};

/// Class /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C
/// Size: 0x0159 (0x000330 - 0x000489)
class UToastSocialWidget_Base_C : public UFortSocialNotificationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1161;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         TapAccept                                                   ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ClickAccept                                                 ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_NeutralInfo_Simple                                    ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_GoodInfo_Simple                                       ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_BadInfo_Simple                                        ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_NeutralInfo                                           ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_GoodInfo                                              ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_BadInfo                                               ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UWidgetAnimation*)                         TimeToRespond                                               ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoldProgress                                                ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_Action                                                ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UImage*)                                   BackgroundMat                                               ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UIconTextButtonHold_C*)                    Button_Cursor                                               ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Hold                                                 ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortMobileImage*)                         HamburgerIcon                                               ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UImage*)                                   Image_Fail                                                  ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UImage*)                                   Image_Info                                                  ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UImage*)                                   Image_Success                                               ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UImage*)                                   Image_Trim                                                  ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_Icon                                              ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Input_Keybind                                       ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ResultIcon                                          ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UImage*)                                   ProgressCircle                                              ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_Input_Pad                                          ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_InputButtons                                       ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Action                                                 ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Desc                                                   ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Title                                                  ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   TextureIcon                                                 ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   ToastCushion                                                ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_HoldAction                                      ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Info                                            ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWBP_RebootRallyIcon_C*)                   WBP_RebootRallyIcon                                         ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             ___ OFFSET(get<T>, {0x448, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                ___ OFFSET(get<bool>, {0x460, 1, 0, 0})
	DMember(bool)                                      UseComplexAnims                                             ___ OFFSET(get<bool>, {0x461, 1, 0, 0})
	DMember(bool)                                      NewVar                                                      ___ OFFSET(get<bool>, {0x462, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  DownloadOnDemandErrorIcon                                   ___ OFFSET(get<T>, {0x468, 32, 0, 0})
	DMember(bool)                                      bUsingNewAvatars                                            ___ OFFSET(get<bool>, {0x488, 1, 0, 0})
};

/// Class /Game/UI/Foundation/MessageCenter/TwitchNotification.TwitchNotification_C
/// Size: 0x0000 (0x000148 - 0x000148)
class UTwitchNotification_C : public UFortUIFriendNotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C
/// Size: 0x0069 (0x0002F8 - 0x000361)
class UToastWidget_New_C : public UFortToastWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 865;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     DescriptionRichText                                         ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortLazyImage*)                           NotificationImage                                           ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UIconTextButton_C*)                        OpenButton                                                  ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     TitleRichText                                               ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C
/// Size: 0x0069 (0x000330 - 0x000399)
class UToastSocialWidget_C : public UFortSocialNotificationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 921;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Cursor                                               ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Hold                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     DescriptionRichText                                         ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UFortLazyImage*)                           NotificationImage                                           ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_InputButtons                                       ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     TitleRichText                                               ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                ___ OFFSET(get<bool>, {0x398, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C
/// Size: 0x0061 (0x0002F8 - 0x000359)
class UBattlePassPageUnlockedToast_C : public UFortToastWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 857;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortLazyImage*)                           NotificationImage                                           ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                ___ OFFSET(get<bool>, {0x358, 1, 0, 0})
};

/// Class /Game/UI/Foundation/Toasts/ToastDisplayArea.ToastDisplayArea_C
/// Size: 0x0010 (0x000328 - 0x000338)
class UToastDisplayArea_C : public UFortToastDisplayArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C
/// Size: 0x0060 (0x000428 - 0x000488)
class URootLayout_Athena_C : public UFortRootViewportLayout_Athena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UNamedSlot*)                               BottomCenterNotificationNamedSlot                           ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UNamedSlot*)                               IndicatorNamedSlot                                          ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UConfirmationWindow_C*)                    ConfirmationWindow                                          ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UProgressModalWidget_C*)                   ControllerDisconnectedModal                                 ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(bool)                                      bClosingErrorDialog                                         ___ OFFSET(get<bool>, {0x450, 1, 0, 0})
	SMember(FText)                                     QuitTitle                                                   ___ OFFSET(get<T>, {0x458, 24, 0, 0})
	SMember(FText)                                     QuitMessage                                                 ___ OFFSET(get<T>, {0x470, 24, 0, 0})
};

/// Class /Game/UI/Foundation/Input/CommonUI_KeyboardBrushData.CommonUI_KeyboardBrushData_C
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UCommonUI_KeyboardBrushData_C : public UFortInputControllerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Game/UI/Foundation/Input/CommonUI_PS4BrushData.CommonUI_PS4BrushData_C
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UCommonUI_PS4BrushData_C : public UFortInputControllerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Game/UI/Foundation/Input/CommonUI_XboxBrushData.CommonUI_XboxBrushData_C
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UCommonUI_XboxBrushData_C : public UFortInputControllerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Game/UI/Foundation/Input/CommonUI_GenericBrushData.CommonUI_GenericBrushData_C
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UCommonUI_GenericBrushData_C : public UFortInputControllerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Game/UI/Foundation/Input/CommonUI_PS5BrushData.CommonUI_PS5BrushData_C
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UCommonUI_PS5BrushData_C : public UFortInputControllerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Hoagie/UI/BB_HoagieMoveUp.BB_HoagieMoveUp_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UBB_HoagieMoveUp_C : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Hoagie/UI/BB_HoagieMoveDown.BB_HoagieMoveDown_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UBB_HoagieMoveDown_C : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /SrirachaRanch/UI/BB_ToggleRadio.BB_ToggleRadio_C
/// Size: 0x0000 (0x000130 - 0x000130)
class UBB_ToggleRadio_C : public UFortMobileActionButtonBehavior_ToggleRadio
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /SrirachaRanch/UI/BB_RadioNext.BB_RadioNext_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UBB_RadioNext_C : public UFortMobileActionButtonBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /VictoryCrownsGameplay/UI/VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UVictoryCrownsKillFeedExtension_C : public UFortGameStateComponent_KillFeedExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   OverrideVictimStyle                                         ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   OverrideKillerStyle                                         ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C
/// Size: 0x0190 (0x000368 - 0x0004F8)
class UWBP_Augment_SelectionTimer_C : public UFortPlayerAugmentHUDSelectionTimerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_AugmentReady_IncreaseCount                             ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_AugmentReady_Reminder                                  ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_AugmentReady                                           ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_TimerText_CountdownUpdated                             ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_ProgressBar_CountdownUpdated                           ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_CountdownReveal                                        ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UBorder*)                                  Border_Mobile                                               ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_Content                                       ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UImage*)                                   Image_MobileButtonBG                                        ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UImage*)                                   Image_MultiplierBacking                                     ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UImage*)                                   Image_Ready_Backing                                         ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UImage*)                                   Image_Timer_InnerRing                                       ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UImage*)                                   Image_Timer_ProgressBar                                     ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         Keybind_OpenAugments_Action                                 ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         Keybind_OpenAugments_Action_Build                           ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_AttentionLIne                                       ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_CannotOpenSelector                                  ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_DeviceAndProgressBar                                ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_DeviceAndTimer                                      ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_FXGlowAndBacking                                    ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ReadyOpenPrompt                                     ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ReadyPrompt                                         ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Keybind                                             ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Timer                                               ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_OverallHeightControl                                 ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_WidgetOffset                                         ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_OpenAugments_Action                                ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_ReadyPrompt                                        ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Alert                                                  ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentMulitplier                                      ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentReady                                           ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentTimer                                           ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UFortControllerComponent_SpyTechPerkSystem*) OwningPerkComponent                                       ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(int32_t)                                   Num_Pending_Augments_to_Grant                               ___ OFFSET(get<int32_t>, {0x480, 4, 0, 0})
	DMember(bool)                                      Can_Select_Augment                                          ___ OFFSET(get<bool>, {0x484, 1, 0, 0})
	SMember(FText)                                     TextAugmentReady                                            ___ OFFSET(get<T>, {0x488, 24, 0, 0})
	SMember(FText)                                     TextAugmentCount                                            ___ OFFSET(get<T>, {0x4A0, 24, 0, 0})
	DMember(double)                                    ReminderFrequencyInSeconds                                  ___ OFFSET(get<double>, {0x4B8, 8, 0, 0})
	SMember(FTimerHandle)                              AugmentReadyReminderTimer                                   ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(USoundBase*)                               MultiplierSound                                             ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	DMember(bool)                                      Player_Able_to_Open_Selector                                ___ OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	CMember(TWeakObjectPtr<UPaperSprite*>)             MobileBackgroundSprite                                      ___ OFFSET(get<T>, {0x4D8, 32, 0, 0})
};

/// Class /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C
/// Size: 0x0018 (0x000338 - 0x000350)
class UWBP_Augments_InteractionIndicatorInfo_C : public UFortPlayerAugmentInfoEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   Image_AugmentIcon                                           ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UFortPlayerAugmentItemDefinition*)         Augment_Item_Definition                                     ___ OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C
/// Size: 0x0070 (0x0002A8 - 0x000318)
class UWBP_Augments_InteractionIndicator_C : public UFortInteractContextInfoWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AnimIntro                                                   ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UImage*)                                   Icon_BackingPanel_UnlockedFX                                ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Icon_Border_Unlocked                                        ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UImage*)                                   Icon_Border_UnlockedGlow                                    ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UImage*)                                   Image_AugmentIcon                                           ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentCategory                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentDescription                                     ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentName                                            ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UWBP_Augments_InteractionIndicatorInfo_C*) WBP_Augments_InteractionIndicatorInfo                       ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(USpacer*)                                  WidthConrol                                                 ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FText)                                     InteractText                                                ___ OFFSET(get<T>, {0x300, 24, 0, 0})
};

/// Class /PlayerAugmentsUI/UI/BP_Augments_PickupOverrideComponent.BP_Augments_PickupOverrideComponent_C
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UBP_Augments_PickupOverrideComponent_C : public UFortPickupInteractOverrideComponent_Augments
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Struct /Game/UI/RadioButtonGroup/FortRadioButtonItemStruct.FortRadioButtonItemStruct
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortRadioButtonItemStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   ButtonClass_16_96A6B156493ECD26328DB3A2AD2A49F3             ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   ButtonStyle_12_1900F8284D83F2AFA8F7549B26E57AFD             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FText)                                     ButtonText_8_3ECB1D484A34D2AA393E81AEEDD4CC0E               ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Game/UI/Foundation/StateLayouts/CinematicLanuageToTrackStruct.CinematicLanuageToTrackStruct
/// Size: 0x0004 (0x000000 - 0x000004)
class FCinematicLanuageToTrackStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   TrackIndex_5_3C1ECC8A4F8E44CBFA164485FFD4BB35               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Game/UI/Sidebar/Tags/SidebarSocialTagCategoryStructure.SidebarSocialTagCategoryStructure
/// Size: 0x006C (0x000000 - 0x00006C)
class FSidebarSocialTagCategoryStructure : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 108;

public:
	SMember(FLinearColor)                              TagSkewBoxInnerColor_48_C74E0AB74864DE4E29C3AEBA2ECC7DA4    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxInnerColorHovered_42_7C212CFC4A6078EEE7C986B14E3FEB49 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxInnerColorSelected_45_E34FF8A8455FE97079F6B0A6A31A05AB ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxOuterColor_41_98DDEF0940105128E6C274B11D3A3D5D    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxOuterColorSelected_47_9B952DE4402DE9AFF112F2A20DC4F48C ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UMaterialInstance*)                        TagCategoryIconMaterial_7_8991D63341121885D70AE09CB10AE389  ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FSlateColor)                               TagCategoryBaseColor_19_47DC015C4160F77A7C6E66AEEA302F6A    ___ OFFSET(get<T>, {0x58, 20, 0, 0})
};

/// Enum /Game/UI/ContentControls/E_UI_InputField_ContentSize.E_UI_InputField_ContentSize
/// Size: 0x04
enum E_UI_InputField_ContentSize : uint8_t
{
	E_UI_InputField_ContentSize__NewEnumerator00                                     = 0,
	E_UI_InputField_ContentSize__NewEnumerator11                                     = 1,
	E_UI_InputField_ContentSize__NewEnumerator22                                     = 2,
	E_UI_InputField_ContentSize__E_UI_InputField_MAX3                                = 3
};

/// Enum /Game/UI/ContentControls/E_UI_InputField_State.E_UI_InputField_State
/// Size: 0x04
enum E_UI_InputField_State : uint8_t
{
	E_UI_InputField_State__NewEnumerator00                                           = 0,
	E_UI_InputField_State__NewEnumerator11                                           = 1,
	E_UI_InputField_State__NewEnumerator22                                           = 2,
	E_UI_InputField_State__E_UI_InputField_MAX3                                      = 3
};

