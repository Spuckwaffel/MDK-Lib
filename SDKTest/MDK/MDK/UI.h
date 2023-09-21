
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

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-NavyBlue.TextStyle-Header-M-NavyBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_NavyBlue_C : public UTextStyle_HeaderParent_C
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BubbleText                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/InGame/Mission/SpeechBubbleWidget.SpeechBubbleWidget_C.InitFromObject
	// void InitFromObject(UObject* InitObject);                                                                                // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/InGame/Mission/SpeechBubbleWidget.SpeechBubbleWidget_C.ExecuteUbergraph_SpeechBubbleWidget
	// void ExecuteUbergraph_SpeechBubbleWidget(int32_t EntryPoint);                                                            // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/MessageCenter/BasicNotification.BasicNotification_C
/// Size: 0x0000 (0x000100 - 0x000100)
class UBasicNotification_C : public UFortUINotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Game/UI/Foundation/MessageCenter/BattlePassPageUnlockNotification.BattlePassPageUnlockNotification_C
/// Size: 0x0000 (0x000130 - 0x000130)
class UBattlePassPageUnlockNotification_C : public UFortUIBattlePassPageUnlockNotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Game/UI/Foundation/MessageCenter/FriendNotification.FriendNotification_C
/// Size: 0x0008 (0x000148 - 0x000150)
class UFriendNotification_C : public UFortUIFriendNotification
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/MessageCenter/FriendNotification.FriendNotification_C.JoinPartyInvite
	// void JoinPartyInvite();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MessageCenter/FriendNotification.FriendNotification_C.ShowFriendInvites
	// void ShowFriendInvites();                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MessageCenter/FriendNotification.FriendNotification_C.ExecuteUbergraph_FriendNotification
	// void ExecuteUbergraph_FriendNotification(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
};

/// Class /Game/UI/DamageText/Base/ImpactNumbers.ImpactNumbers_C
/// Size: 0x0008 (0x000620 - 0x000628)
class AImpactNumbers_C : public AFortDamageNumbersActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1576;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x620, 8, 0, 0})
};

/// Class /Game/UI/Items/ItemUIFunctionLibrary.ItemUIFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

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

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-MediumButton.TextStyle-MediumButton_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_MediumButton_C : public UCommonTextStyle
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

/// Class /Game/UI/Foundation/Text/TextScrollStyle-Base.TextScrollStyle-Base_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UTextScrollStyle_Base_C : public UCommonTextScrollStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

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

/// Class /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_XL.ItemCardPowerRatingTextStyle_XL_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UItemCardPowerRatingTextStyle_XL_C : public UCommonTextStyle
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

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-BottomBar-S-Selected.TextStyle-Button-BottomBar-S-Selected_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_BottomBar_S_Selected_C : public UCommonTextStyle
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

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-40pc.TextStyle-Base-XS-40pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_40pc_C : public UTextStyle_Base_XS_C
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

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M-B.TextStyle-Base-M-B_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_B_C : public UTextStyle_Base_M_C
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

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-Gray50.TextStyle-Base-S-B-Gray50_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_Gray50_C : public UTextStyle_Base_S_B_Gray_C
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

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-XS-Gray.TextStyle-BurbankSmall-XS-Gray_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_XS_Gray_C : public UTextStyle_BaseParent_C
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

/// Class /Game/UI/Foundation/Items/Parts/TextStyles/ItemCardPowerRatingTextStyle_L.ItemCardPowerRatingTextStyle_L_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UItemCardPowerRatingTextStyle_L_C : public UCommonTextStyle
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeOut                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeIn                                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWindowTitleBarArea*)                      WindowTitleBarArea                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C.ExecuteUbergraph_windowchromebuttons
	// void ExecuteUbergraph_windowchromebuttons(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/SocialPanelTab.SocialPanelTab_C
/// Size: 0x0028 (0x001520 - 0x001548)
class USocialPanelTab_C : public UFortSocialTab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5448;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unselected                                                  OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnFriendsOnlineUpdated                                      OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1540, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialPanelTab.SocialPanelTab_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelTab.SocialPanelTab_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelTab.SocialPanelTab_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelTab.SocialPanelTab_C.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelTab.SocialPanelTab_C.ExecuteUbergraph_SocialPanelTab
	// void ExecuteUbergraph_SocialPanelTab(int32_t EntryPoint);                                                                // [0x1ebf994] Final                
};

/// Class /Game/UI/Frontend/Settings/ColorCalibration.ColorCalibration_C
/// Size: 0x0010 (0x000528 - 0x000538)
class UColorCalibration_C : public UFortColorCalibrationScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	CMember(UFortHUDElementWrapper_C*)                 FortHUDElementWrapper                                       OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UImage*)                                   ImageMask                                                   OFFSET(get<T>, {0x530, 8, 0, 0})
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxContainer                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(USpacer*)                                  SpacerBottom                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextHeader                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   FontSizeMobile                                              OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(ESettingType)                              LocalSettingType                                            OFFSET(get<T>, {0x2FC, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.SetFontSize
	// void SetFontSize(UCommonTextBlock* Text, int32_t DefaultSize, int32_t MobileSize);                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet
	// void HandlePawnSet();                                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize
	// void UpdateSize();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.Center On Widget
	// void Center On Widget();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.CenterOnWidget
	// void CenterOnWidget();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader
	// void ExecuteUbergraph_OptionsMenuHeader(int32_t EntryPoint);                                                             // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-Horizon.TextStyle-Header-M-Horizon_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_Horizon_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeOut                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FadeIn                                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UBorder*)                                  Border_Darken                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UButton*)                                  ClickCatcher                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UNamedSlot*)                               Content                                                     OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UBorder*)                                  Dimmer                                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonVisibilityWidgetLegacy*)            WindowButtons                                               OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UOverlay*)                                 WindowsOverlay                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(Uwindowchromebuttons_C*)                   WindowTitleBar                                              OFFSET(get<T>, {0x320, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  IntroEnded                                                  OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OutroEnded                                                  OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	DMember(bool)                                      ShowWindowControlButtons                                    OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(double)                                    DimAmount                                                   OFFSET(get<double>, {0x350, 8, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x358, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.RemoveContent
	// void RemoveContent();                                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.AddContent
	// void AddContent(UCommonUserWidget* Content);                                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Outro
	// void Outro();                                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Intro
	// void Intro();                                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeIn_K2Node_WidgetAnimationEvent();                                                            // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_FadeOut_K2Node_WidgetAnimationEvent();                                                           // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.ExecuteUbergraph_Lightbox
	// void ExecuteUbergraph_Lightbox(int32_t EntryPoint);                                                                      // [0x1ebf994] Final                
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.OutroEnded__DelegateSignature
	// void OutroEnded__DelegateSignature();                                                                                    // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Lightbox/Lightbox.Lightbox_C.IntroEnded__DelegateSignature
	// void IntroEnded__DelegateSignature();                                                                                    // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle_PageChevron_Left.ButtonStyle_PageChevron_Left_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_PageChevron_Left_C : public UButtonStyle_MediumTransparentNoCues_C
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

/// Class /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C
/// Size: 0x0069 (0x000308 - 0x000371)
class UPlayerBanner_C : public UFortAccountWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 881;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   BannerImage                                                 OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         LoadGuard                                                   OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   SurroundImage                                               OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         SurroundLoadGuard                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(bool)                                      bUseLargeTexture                                            OFFSET(get<bool>, {0x330, 1, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwnerNetId                                                  OFFSET(getStruct<T>, {0x338, 48, 0, 0})
	SMember(FName)                                     CurrentBannerColorId                                        OFFSET(getStruct<T>, {0x368, 4, 0, 0})
	SMember(FName)                                     CurrentBannerIconId                                         OFFSET(getStruct<T>, {0x36C, 4, 0, 0})
	DMember(bool)                                      SurroundEnabled                                             OFFSET(get<bool>, {0x370, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.UnbindDelegates
	// void UnbindDelegates();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetupSurround
	// void SetupSurround();                                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile
	// void SetBannerIconAndColorFromProfile();                                                                                 // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerIconAndColor
	// void SetBannerIconAndColor(FName IconId, FName ColorId);                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.ToggleBannerMask
	// void ToggleBannerMask(bool Enable);                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.RefreshSurround
	// void RefreshSurround(int32_t Level);                                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded
	// void OnSurroundIconLoaded(UObject* LoadedObject);                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.EnableSurround
	// void EnableSurround();                                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.ClearBannerState
	// void ClearBannerState();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.OnBannerIconLoaded
	// void OnBannerIconLoaded(UObject* LoadedObject);                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.GetBannerMID
	// void GetBannerMID(UMaterialInstanceDynamic*& BannerMID);                                                                 // [0x1ebf994] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerOwner
	// void SetBannerOwner(FUniqueNetIdRepl OwnerId);                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerColorId
	// void SetBannerColorId(FName InBannerColorId);                                                                            // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerIconId
	// void SetBannerIconId(FName InBannerIconId);                                                                              // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.SetBannerImage
	// void SetBannerImage(FFortHomeBaseInfo Image info, bool& Success);                                                        // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.Account Info Changed
	// void Account Info Changed(FFortPublicAccountInfo NewInfo);                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner
	// void ExecuteUbergraph_PlayerBanner(int32_t EntryPoint);                                                                  // [0x1ebf994] Final|HasDefaults    
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

/// Class /Game/UI/Foundation/Border/Border_Navy_VGrad.Border_Navy_VGrad_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_Navy_VGrad_C : public UCommonBorderStyle
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         IntroSuperBang                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         TutorialGlow                                                OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USizeBox*)                                 BangBox                                                     OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(USizeBox*)                                 BigBang                                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(USizeBox*)                                 BigBangCount                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UNamedSlot*)                               Content                                                     OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CountText                                                   OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          ModeSwitcher                                                OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USizeBox*)                                 SmallBang                                                   OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USizeBox*)                                 SmallBangCount                                              OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USizeBox*)                                 SuperBang                                                   OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonBorder*)                            TutorialBorder                                              OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      UseSmallVersion                                             OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x364, 4, 0, 0})
	DMember(bool)                                      bUseSuperBangNoCount                                        OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      ShouldSuppressBang                                          OFFSET(get<bool>, {0x369, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.SetShouldSuppressBang
	// void SetShouldSuppressBang(bool ShouldSuppressBang);                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.InitialReset
	// void InitialReset();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.TriggerReset
	// void TriggerReset();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.TriggerIntro
	// void TriggerIntro();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.Adjust Bang Image Translation
	// void Adjust Bang Image Translation(FVector2D Translation);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.Update Bang Icon Version
	// void Update Bang Icon Version(int32_t InCount);                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.SetTutorialBorderStyle
	// void SetTutorialBorderStyle(UClass* BorderStyle);                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.OnStopCallout
	// void OnStopCallout();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.OnStartCallout
	// void OnStartCallout(FName TutorialObjectiveName, ETutorialType TutorialType);                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.OnBangStateChanged
	// void OnBangStateChanged(bool bEnabled, int32_t Count);                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Bangs/NormalBangWrapper.NormalBangWrapper_C.ExecuteUbergraph_NormalBangWrapper
	// void ExecuteUbergraph_NormalBangWrapper(int32_t EntryPoint);                                                             // [0x1ebf994] Final|HasDefaults    
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
	CMember(USizeBox*)                                 ProgressSizeBox                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   ProgressSpinner                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UVerticalBox*)                             ProgressVBox                                                OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C
/// Size: 0x0010 (0x000660 - 0x000670)
class UProgressModalWidget_C : public UFortProgressModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x660, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x668, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                            // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
	// void HandleIntroEnded();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
	// void HandleOutroEnded();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
	// void OnBeginIntro();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
	// void ExecuteUbergraph_ProgressModalWidget(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
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

/// Class /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C
/// Size: 0x0079 (0x0014D0 - 0x001549)
class UCloseButton_C : public UBacchusCloseButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5449;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unhover                                                     OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UBorder*)                                  Border_Container                                            OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UImage*)                                   ButtonBacking                                               OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UImage*)                                   CloseIcon                                                   OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Control                                             OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ButtonAction                                           OFFSET(get<T>, {0x1510, 8, 0, 0})
	SMember(FText)                                     Button_Description                                          OFFSET(getStruct<T>, {0x1518, 24, 0, 0})
	DMember(bool)                                      FontSizeOveride                                             OFFSET(get<bool>, {0x1530, 1, 0, 0})
	DMember(int32_t)                                   FontSize                                                    OFFSET(get<int32_t>, {0x1534, 4, 0, 0})
	SMember(FMargin)                                   Padding_Overide                                             OFFSET(getStruct<T>, {0x1538, 16, 0, 0})
	DMember(bool)                                      PaddingOveride                                              OFFSET(get<bool>, {0x1548, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.SetText
	// void SetText(FText Text);                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.HandleSize
	// void HandleSize();                                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/CloseButton.CloseButton_C.ExecuteUbergraph_CloseButton
	// void ExecuteUbergraph_CloseButton(int32_t EntryPoint);                                                                   // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UBorder*)                                  Border_Container                                            OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   ButtonBacking                                               OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Control                                             OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ButtonAction                                           OFFSET(get<T>, {0x14F0, 8, 0, 0})
	SMember(FText)                                     Button_Description                                          OFFSET(getStruct<T>, {0x14F8, 24, 0, 0})
	DMember(bool)                                      FontSizeOveride                                             OFFSET(get<bool>, {0x1510, 1, 0, 0})
	DMember(int32_t)                                   FontSize                                                    OFFSET(get<int32_t>, {0x1514, 4, 0, 0})
	SMember(FMargin)                                   Padding_Overide                                             OFFSET(getStruct<T>, {0x1518, 16, 0, 0})
	DMember(bool)                                      PaddingOveride                                              OFFSET(get<bool>, {0x1528, 1, 0, 0})
	DMember(bool)                                      IsDisabled                                                  OFFSET(get<bool>, {0x1529, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.SetText
	// void SetText(FText Text);                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.HandleSize
	// void HandleSize();                                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SoloButton.SoloButton_C.ExecuteUbergraph_SoloButton
	// void ExecuteUbergraph_SoloButton(int32_t EntryPoint);                                                                    // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LinkPrompt                                             OFFSET(get<T>, {0x14D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelWeGameFriendButton.SocialPanelWeGameFriendButton_C.ExecuteUbergraph_SocialPanelWeGameFriendButton
	// void ExecuteUbergraph_SocialPanelWeGameFriendButton(int32_t EntryPoint);                                                 // [0x1ebf994] Final                
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

/// Class /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UTooltip_Basic_S_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   _hr_                                                        OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UHorizontalBox*)                           Body_HBox                                                   OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UHorizontalBox*)                           Header_HBox                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   Icon_Header                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Icon                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Body                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FText)                                     BodyText                                                    OFFSET(getStruct<T>, {0x310, 24, 0, 0})
	SMember(FText)                                     HeaderText                                                  OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	CMember(USlateBrushAsset*)                         Icon_Brush                                                  OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UClass*)                                   Body_Style                                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UClass*)                                   Header_Style                                                OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Get Icon Brush
	// FSlateBrush Get Icon Brush();                                                                                            // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Get Header Text
	// FText Get Header Text();                                                                                                 // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Get Body Text
	// FText Get Body Text();                                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Tooltips/Tooltip-Basic-S.Tooltip-Basic-S_C.ExecuteUbergraph_Tooltip-Basic-S
	// void ExecuteUbergraph_Tooltip-Basic-S(int32_t EntryPoint);                                                               // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Primary/ButtonStyle-Primary-M.ButtonStyle-Primary-M_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Primary_M_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C
/// Size: 0x0070 (0x0002A8 - 0x000318)
class UTooltip_Custom_S_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   _hr_                                                        OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UHorizontalBox*)                           Body_HBox                                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UNamedSlot*)                               Content_Slot                                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           Header_HBox                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UImage*)                                   Icon_Header                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Header                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Icon                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UTextBlock*)                               Text_Header                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FText)                                     HeaderText                                                  OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})
	CMember(USlateBrushAsset*)                         Icon_Brush                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UUserWidget*)                              ContentWidget                                               OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush
	// FSlateBrush Get Icon Brush();                                                                                            // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text
	// FText Get Header Text();                                                                                                 // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text
	// FText Get Body Text();                                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Tooltips/Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S
	// void ExecuteUbergraph_Tooltip-Custom-S(int32_t EntryPoint);                                                              // [0x1ebf994] Final                
};

/// Class /Game/UI/Frontend/XpBar/XpBarToolTip.XpBarToolTip_C
/// Size: 0x00C8 (0x0002D0 - 0x000398)
class UXpBarToolTip_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock1                                            OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock2                                            OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock3                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock4                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UImage*)                                   Image1                                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UImage*)                                   Image2                                                      OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   Image3                                                      OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UImage*)                                   Image4                                                      OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FText)                                     HeaderText                                                  OFFSET(getStruct<T>, {0x320, 24, 0, 0})
	SMember(FText)                                     CommanderXPText                                             OFFSET(getStruct<T>, {0x338, 24, 0, 0})
	SMember(FText)                                     BoostXPText                                                 OFFSET(getStruct<T>, {0x350, 24, 0, 0})
	SMember(FText)                                     RestedXPText                                                OFFSET(getStruct<T>, {0x368, 24, 0, 0})
	SMember(FText)                                     BodyText                                                    OFFSET(getStruct<T>, {0x380, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/XpBar/XpBarToolTip.XpBarToolTip_C.GetBodyText
	// FText GetBodyText();                                                                                                     // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/XpBar/XpBarToolTip.XpBarToolTip_C.GetRestedXPText
	// FText GetRestedXPText();                                                                                                 // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/XpBar/XpBarToolTip.XpBarToolTip_C.GetBoostXPText
	// FText GetBoostXPText();                                                                                                  // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/XpBar/XpBarToolTip.XpBarToolTip_C.GetCommanderXPText
	// FText GetCommanderXPText();                                                                                              // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/XpBar/XpBarToolTip.XpBarToolTip_C.GetHeaderText
	// FText GetHeaderText();                                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Game/UI/Tooltips/TooltipLibrary.TooltipLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UTooltipLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonBorder*)                            MainBorder                                                  OFFSET(get<T>, {0x14D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/TextRotatorWhite.TextRotatorWhite_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/TextRotatorWhite.TextRotatorWhite_C.ExecuteUbergraph_TextRotatorWhite
	// void ExecuteUbergraph_TextRotatorWhite(int32_t EntryPoint);                                                              // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     BangWrapper                                                 OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           ContentHB                                                   OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxShell                                                OFFSET(get<T>, {0x14E8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x14F0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   OFFSET(getStruct<T>, {0x1510, 192, 0, 0})
	DMember(bool)                                      UseText                                                     OFFSET(get<bool>, {0x15D0, 1, 0, 0})
	SMember(FLinearColor)                              SelectedIconTint                                            OFFSET(getStruct<T>, {0x15D4, 16, 0, 0})
	SMember(FLinearColor)                              DeselectedIconTint                                          OFFSET(getStruct<T>, {0x15E4, 16, 0, 0})
	SMember(FLinearColor)                              HoveredIconTint                                             OFFSET(getStruct<T>, {0x15F4, 16, 0, 0})
	DMember(bool)                                      bBangEnabled                                                OFFSET(get<bool>, {0x1604, 1, 0, 0})
	DMember(bool)                                      ChangeIconColorWhenSelected                                 OFFSET(get<bool>, {0x1605, 1, 0, 0})
	SMember(FSlateColor)                               SelectedIconColor                                           OFFSET(getStruct<T>, {0x1608, 20, 0, 0})
	SMember(FSlateColor)                               UnSelectedIconColor                                         OFFSET(getStruct<T>, {0x161C, 20, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.Play Hover Sound
	// void Play Hover Sound();                                                                                                 // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.SetChangeIconColorWhenSelected
	// void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, FSlateColor SelectedColor, FSlateColor UnselectedColor); // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.Update Bang State
	// void Update Bang State(bool bBangEnabled, int32_t Count);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.SetTutorialBorderStyle
	// void SetTutorialBorderStyle(UClass* BorderStyle);                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.ShowText
	// void ShowText();                                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.Set Icon
	// void Set Icon(FSlateBrush IconBrush);                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.Set Text
	// void Set Text(FText ButtonText);                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.SetTabLabelInfo
	// void SetTabLabelInfo(FFortTabButtonLabelInfo& TabLabelInfo);                                                             // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTabButton_Legacy.IconTabButton_Legacy_C.ExecuteUbergraph_IconTabButton_Legacy
	// void ExecuteUbergraph_IconTabButton_Legacy(int32_t EntryPoint);                                                          // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C
/// Size: 0x0050 (0x0014C0 - 0x001510)
class UPanelButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UNamedSlot*)                               ContentSlot                                                 OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         InputActionHorizontalAlignment                              OFFSET(get<T>, {0x14E0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           InputActionVerticalAlignment                                OFFSET(get<T>, {0x14E1, 1, 0, 0})
	SMember(FVector2D)                                 InputActionRenderTranslation                                OFFSET(getStruct<T>, {0x14E8, 16, 0, 0})
	DMember(bool)                                      InputActionUseRimBrush                                      OFFSET(get<bool>, {0x14F8, 1, 0, 0})
	SMember(FVector2D)                                 InputActionRimBrushSize                                     OFFSET(getStruct<T>, {0x1500, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.UpdateInputActionLayout
	// void UpdateInputActionLayout();                                                                                          // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.UpdateStyle
	// void UpdateStyle(bool bUsingGamepad);                                                                                    // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.InitializeButton
	// void InitializeButton();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.UpdateTextAndStyle
	// void UpdateTextAndStyle();                                                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
	// void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/PanelButton.PanelButton_C.ExecuteUbergraph_PanelButton
	// void ExecuteUbergraph_PanelButton(int32_t EntryPoint);                                                                   // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C
/// Size: 0x00A0 (0x000470 - 0x000510)
class UHorizontalTabList_Legacy_C : public UFortTabListWidgetBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   ImageGamepadKeyPrompt                                       OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UImage*)                                   ImageHorizRule                                              OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UCommonActionWidget*)                      NextTabAction                                               OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(USizeBox*)                                 NextTabActionWrapper                                        OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Container                                           OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UCommonActionWidget*)                      PreviousTabAction                                           OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(USizeBox*)                                 PreviousTabActionWrapper                                    OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UHorizontalBox*)                           TabButtonBox                                                OFFSET(get<T>, {0x4B0, 8, 0, 0})
	SMember(FMargin)                                   TabButtonPadding                                            OFFSET(getStruct<T>, {0x4B8, 16, 0, 0})
	CMember(UClass*)                                   ButtonStyle                                                 OFFSET(get<T>, {0x4C8, 8, 0, 0})
	DMember(bool)                                      UseButtonStyle                                              OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	DMember(bool)                                      ShowGamePadInputPrompt                                      OFFSET(get<bool>, {0x4D1, 1, 0, 0})
	DMember(bool)                                      ShowRail                                                    OFFSET(get<bool>, {0x4D2, 1, 0, 0})
	DMember(int32_t)                                   MinTabWidth                                                 OFFSET(get<int32_t>, {0x4D4, 4, 0, 0})
	DMember(bool)                                      ForceTabLabelsCollapsed                                     OFFSET(get<bool>, {0x4D8, 1, 0, 0})
	DMember(bool)                                      ForceTabIconsCollapsed                                      OFFSET(get<bool>, {0x4D9, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  RefreshGamepad                                              OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	CMember(UClass*)                                   DebugButtonTypeDisplay                                      OFFSET(get<T>, {0x4F0, 8, 0, 0})
	DMember(int32_t)                                   DebugTabCount                                               OFFSET(get<int32_t>, {0x4F8, 4, 0, 0})
	DMember(double)                                    PreviousTabActionPaddingRight                               OFFSET(get<double>, {0x500, 8, 0, 0})
	DMember(double)                                    NextTabActionPaddingLeft                                    OFFSET(get<double>, {0x508, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.DebugCreateTabsForDesigner
	// void DebugCreateTabsForDesigner();                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.UpdateTabStyles
	// void UpdateTabStyles(UCommonButtonBase* ButtonWidget);                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> FillVertically);                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.UpdateGamepadKeyVisibility
	// void UpdateGamepadKeyVisibility();                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.Refresh Next/Previous Visibility
	// void Refresh Next/Previous Visibility();                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.CustomEvent
	// void CustomEvent(FName TabId);                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.HandleOnInputMethodChanged
	// void HandleOnInputMethodChanged(ECommonInputType bNewInputType);                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.CustomEvent
	// void CustomEvent(ESlateVisibility InVisibility);                                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.HandleTabCreation
	// void HandleTabCreation(FName TabNameID, UCommonButtonBase* TabButton);                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.HandleTabRemoval
	// void HandleTabRemoval(FName TabNameID, UCommonButtonBase* TabButton);                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.ExecuteUbergraph_HorizontalTabList_Legacy
	// void ExecuteUbergraph_HorizontalTabList_Legacy(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
	// Function /Game/UI/Foundation/TabbedView/HorizontalTabList_Legacy.HorizontalTabList_Legacy_C.RefreshGamepad__DelegateSignature
	// void RefreshGamepad__DelegateSignature();                                                                                // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ButtonContent                                 OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UNamedSlot*)                               RightExtraContentSlot                                       OFFSET(get<T>, {0x14E8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x14F0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   OFFSET(getStruct<T>, {0x1510, 192, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            OFFSET(get<T>, {0x15E0, 1, 0, 0})
	DMember(bool)                                      bMouseKeyboardStyleSet                                      OFFSET(get<bool>, {0x15E1, 1, 0, 0})
	SMember(FText)                                     OverrideButtonText                                          OFFSET(getStruct<T>, {0x15E8, 24, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 ButtonTextJustification                                     OFFSET(get<T>, {0x1600, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             OFFSET(get<bool>, {0x1601, 1, 0, 0})
	DMember(double)                                    PressProgress                                               OFFSET(get<double>, {0x1608, 8, 0, 0})
	DMember(bool)                                      bIgnoreInputActionWidgetText                                OFFSET(get<bool>, {0x1610, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  FocusChangedEvent                                           OFFSET(getStruct<T>, {0x1618, 16, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x1628, 88, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.BindCommonInputSubsystem
	// void BindCommonInputSubsystem(bool bBind);                                                                               // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                             // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.GetPressProgress
	// void GetPressProgress(double& Progress);                                                                                 // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Get Dynamic Material
	// void Get Dynamic Material(UMaterialInstanceDynamic*& Ret Material);                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.ShowIcon
	// void ShowIcon(bool bShouldShow);                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetTextInternal
	// void SetTextInternal(FText InButtonText);                                                                                // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetInitialMouseKeyboardStyle
	// void SetInitialMouseKeyboardStyle();                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateTextStyle
	// void UpdateTextStyle();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetContentAlignment
	// void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateContentAlignment
	// void UpdateContentAlignment();                                                                                           // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetMouseKeyboardStyle
	// void SetMouseKeyboardStyle(UClass* ControllerInputStyle);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateStyle
	// void UpdateStyle(bool UsingGamepad);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateText
	// void UpdateText();                                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetControllerStyle
	// void SetControllerStyle(UClass* ControllerInputStyle);                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.UpdateTextAndStyle
	// void UpdateTextAndStyle(ECommonInputType InputType);                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.InitializeButton
	// void InitializeButton();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Set Icon
	// void Set Icon(FSlateBrush IconBrush);                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Set Text
	// void Set Text(FText ButtonText);                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.SetTabLabelInfo
	// void SetTabLabelInfo(FFortTabButtonLabelInfo& TabLabelInfo);                                                             // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnTriggeringInputActionChanged
	// void OnTriggeringInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.ExecuteUbergraph_IconTextButton
	// void ExecuteUbergraph_IconTextButton(int32_t EntryPoint);                                                                // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Buttons/IconTextButton.IconTextButton_C.FocusChangedEvent__DelegateSignature
	// void FocusChangedEvent__DelegateSignature(bool HasFocus);                                                                // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C
/// Size: 0x0011 (0x0015F0 - 0x001601)
class UMainMenuButton_C : public UFortMainMenuButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5633;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x15F0, 8, 0, 0})
	CMember(UImage*)                                   Image_Icon_RightSide                                        OFFSET(get<T>, {0x15F8, 8, 0, 0})
	DMember(bool)                                      ShowExternalLinkIcon                                        OFFSET(get<bool>, {0x1600, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.UpdateRightSideIcon
	// void UpdateRightSideIcon(TWeakObjectPtr<UMaterialInterface*> SoftMaterial);                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.UpdateRightSideIconColor
	// void UpdateRightSideIconColor(FLinearColor Color);                                                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.ExecuteUbergraph_MainMenuButton
	// void ExecuteUbergraph_MainMenuButton(int32_t EntryPoint);                                                                // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C
/// Size: 0x0112 (0x0014C0 - 0x0015D2)
class UScrollingTextButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5586;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               OFFSET(get<T>, {0x14D8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x14E0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   OFFSET(getStruct<T>, {0x1500, 192, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            OFFSET(get<T>, {0x15D0, 1, 0, 0})
	DMember(bool)                                      bMouseKeyboardStyleSet                                      OFFSET(get<bool>, {0x15D1, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetInitialMouseKeyboardStyle
	// void SetInitialMouseKeyboardStyle();                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateTextStyle
	// void UpdateTextStyle();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetContentAlignment
	// void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateContentAlignment
	// void UpdateContentAlignment();                                                                                           // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetMouseKeyboardStyle
	// void SetMouseKeyboardStyle(UClass* ControllerInputStyle);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateStyle
	// void UpdateStyle(bool UsingGamepad);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateText
	// void UpdateText();                                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetControllerStyle
	// void SetControllerStyle(UClass* ControllerInputStyle);                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.UpdateTextAndStyle
	// void UpdateTextAndStyle(bool bUsingGamepad);                                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.InitializeButton
	// void InitializeButton();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.Set Icon
	// void Set Icon(FSlateBrush IconBrush);                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.Set Text
	// void Set Text(FText ButtonText);                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.SetTabLabelInfo
	// void SetTabLabelInfo(FFortTabButtonLabelInfo& TabLabelInfo);                                                             // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
	// void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/ScrollingTextButton.ScrollingTextButton_C.ExecuteUbergraph_ScrollingTextButton
	// void ExecuteUbergraph_ScrollingTextButton(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C
/// Size: 0x0020 (0x000440 - 0x000460)
class UMultiActionConfirmationMenu_C : public UFortMultiFriendActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UHorizontalBox*)                           ConfirmationButtons                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_ActionText                                             OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.UpdateText
	// void UpdateText();                                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnOpened
	// void OnOpened();                                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.OnActionUpdated
	// void OnActionUpdated();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/ListEntries/MultiActionConfirmationMenu.MultiActionConfirmationMenu_C.ExecuteUbergraph_MultiActionConfirmationMenu
	// void ExecuteUbergraph_MultiActionConfirmationMenu(int32_t EntryPoint);                                                   // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/ButtonStyle_TransparentList_Social.ButtonStyle_TransparentList_Social_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_TransparentList_Social_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/SocialPanel/LocalUserSettingButton.LocalUserSettingButton_C
/// Size: 0x0020 (0x0014E0 - 0x001500)
class ULocalUserSettingButton_C : public UFortLocalUserSettingButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UBorder*)                                  Border_InteractionIndicator                                 OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UImage*)                                   Image_AnimatedArrow                                         OFFSET(get<T>, {0x14F8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/LocalUserSettingButton.LocalUserSettingButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LocalUserSettingButton.LocalUserSettingButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LocalUserSettingButton.LocalUserSettingButton_C.ExecuteUbergraph_LocalUserSettingButton
	// void ExecuteUbergraph_LocalUserSettingButton(int32_t EntryPoint);                                                        // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/LocalUserSettingTitle.LocalUserSettingTitle_C
/// Size: 0x0028 (0x0014D0 - 0x0014F8)
class ULocalUserSettingTitle_C : public UFortLocalUserSettingTitleButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5368;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnExpansion                                                 OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   ExpandDirectionTick                                         OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(USizeBox*)                                 SB_EntryContent                                             OFFSET(get<T>, {0x14F0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/LocalUserSettingTitle.LocalUserSettingTitle_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LocalUserSettingTitle.LocalUserSettingTitle_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LocalUserSettingTitle.LocalUserSettingTitle_C.OnExpansionChanged
	// void OnExpansionChanged(bool bIsExpanded);                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LocalUserSettingTitle.LocalUserSettingTitle_C.ExecuteUbergraph_LocalUserSettingTitle
	// void ExecuteUbergraph_LocalUserSettingTitle(int32_t EntryPoint);                                                         // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnExpansion                                                 OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UWidgetAnimation*)                         JoinSlideOut                                                OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ScaleUp                                                     OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UFortMobileImage*)                         ExpandDirectionTick                                         OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UHorizontalBox*)                           HBox_Join                                                   OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UImage*)                                   Image_VoiceChatWarning                                      OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     JoinText                                                    OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UImage*)                                   NotTransmitting                                             OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     OffText                                                     OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          OnOffSwitcher                                               OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     OnText                                                      OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay                                                     OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UImage*)                                   SelectionBackplate                                          OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          SimultaneousChannelSwitcher                                 OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switch_Transmitting                                         OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UImage*)                                   Transmitting                                                OFFSET(get<T>, {0x15A0, 8, 0, 0})
	SMember(FLinearColor)                              VoiceStatusActiveColor                                      OFFSET(getStruct<T>, {0x15A8, 16, 0, 0})
	SMember(FLinearColor)                              VoiceStatusWarningColor                                     OFFSET(getStruct<T>, {0x15B8, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals
	// void OnUpdateVisuals(bool bIsActiveAndListening, bool bIsActiveOrAvailable, bool bIsAvailableAndNotActive, bool bIsListening, bool bShowingRestriction); // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton
	// void ExecuteUbergraph_VoiceChannelHeaderButton(int32_t EntryPoint);                                                      // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C
/// Size: 0x0088 (0x000530 - 0x0005B8)
class USocialBanModal_C : public UFortSocialBanModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x530, 8, 0, 0})
	CMember(UCommonTextBlock*)                         disclaimer                                                  OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         disclaimer1                                                 OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         disclaimer2                                                 OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UImage*)                                   Image_Severe                                                OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Message                                            OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title1                                                      OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UImage*)                                   Triangles                                                   OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UImage*)                                   Triangles1                                                  OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UImage*)                                   Triangles2                                                  OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_Banned                                                 OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_Warned                                                 OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          WidgetSwitcher_SeverityImage                                OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCloseSucceeded                                            OFFSET(getStruct<T>, {0x5A8, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C.OnDisplayModeSet
	// void OnDisplayModeSet(bool bIsBanned);                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C.ExecuteUbergraph_SocialBanModal
	// void ExecuteUbergraph_SocialBanModal(int32_t EntryPoint);                                                                // [0x1ebf994] Final                
	// Function /Game/UI/Foundation/Modals/PlayerReporting/SocialBanModal.SocialBanModal_C.OnCloseSucceeded__DelegateSignature
	// void OnCloseSucceeded__DelegateSignature();                                                                              // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C
/// Size: 0x0050 (0x000430 - 0x000480)
class UMissedInvitesActionMenu_C : public UFortMissedInvitesActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x430, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock1                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   Image_Platform                                              OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C.OnOpened
	// void OnOpened();                                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/MissedInvitesActionMenu.MissedInvitesActionMenu_C.ExecuteUbergraph_MissedInvitesActionMenu
	// void ExecuteUbergraph_MissedInvitesActionMenu(int32_t EntryPoint);                                                       // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Movie/ActivatableMovieWidget.ActivatableMovieWidget_C
/// Size: 0x0018 (0x000638 - 0x000650)
class UActivatableMovieWidget_C : public UFortActivatableVideoPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x638, 8, 0, 0})
	CMember(USafeZone*)                                MainSafeZone                                                OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x648, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Movie/ActivatableMovieWidget.ActivatableMovieWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/ActivatableMovieWidget.ActivatableMovieWidget_C.ExecuteUbergraph_ActivatableMovieWidget
	// void ExecuteUbergraph_ActivatableMovieWidget(int32_t EntryPoint);                                                        // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/EditNicknameButton.EditNicknameButton_C
/// Size: 0x0018 (0x001500 - 0x001518)
class UEditNicknameButton_C : public UFortEditNicknameButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1500, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UBorder*)                                  ClickCapture                                                OFFSET(get<T>, {0x1510, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/EditNicknameButton.EditNicknameButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/EditNicknameButton.EditNicknameButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/EditNicknameButton.EditNicknameButton_C.ExecuteUbergraph_EditNicknameButton
	// void ExecuteUbergraph_EditNicknameButton(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnExpansion                                                 OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UFortMobileImage*)                         ExpandDirectionTick                                         OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(USizeBox*)                                 SB_EntryContent                                             OFFSET(get<T>, {0x1510, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/UserListHeaderEntry.UserListHeaderEntry_C.ExecuteUbergraph_UserListHeaderEntry
	// void ExecuteUbergraph_UserListHeaderEntry(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C
/// Size: 0x0058 (0x001570 - 0x0015C8)
class USocialInteraction_C : public USocialInteractionButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1570, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UImage*)                                   EncourageEpicFriend                                         OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UImage*)                                   InteractionIcon                                             OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          OFFSET(get<T>, {0x1590, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x1598, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15A8, 16, 0, 0})
	SMember(FLinearColor)                              AddFriendColor                                              OFFSET(getStruct<T>, {0x15B8, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.OnInteractionSet
	// void OnInteractionSet();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction
	// void ExecuteUbergraph_SocialInteraction(int32_t EntryPoint);                                                             // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C
/// Size: 0x0030 (0x0004E0 - 0x000510)
class UUserActionMenu_C : public UFortSocialInteractionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_Platform                                              OFFSET(get<T>, {0x508, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C.OnToggleConfirmation
	// void OnToggleConfirmation(bool bIsVisible);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C.OnOpened
	// void OnOpened();                                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/UserActionMenu.UserActionMenu_C.ExecuteUbergraph_UserActionMenu
	// void ExecuteUbergraph_UserActionMenu(int32_t EntryPoint);                                                                // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C
/// Size: 0x0050 (0x0014C0 - 0x001510)
class USocialConfirmationButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  Border_InteractionIndicator                                 OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   InteractionIcon                                             OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_InteractionName                                        OFFSET(get<T>, {0x14E8, 8, 0, 0})
	DMember(bool)                                      bIsAccept                                                   OFFSET(get<bool>, {0x14F0, 1, 0, 0})
	SMember(FText)                                     DisplayText                                                 OFFSET(getStruct<T>, {0x14F8, 24, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton
	// void ExecuteUbergraph_SocialConfirmationButton(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C
/// Size: 0x0048 (0x0014D0 - 0x001518)
class USocialPanel_FriendLinkButton_C : public UFortSocialPanelView_FriendLinkButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnCopied                                                    OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UFortMobileImage*)                         SharingIcon                                                 OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_CopyState                                          OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CopyConfirmed                                          OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_FriendLinkInstructions                                 OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LinkPrompt                                             OFFSET(get<T>, {0x1510, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnCopiedToClipboard
	// void OnCopiedToClipboard();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.OnShareButtonTypeSet
	// void OnShareButtonTypeSet(EFriendLinkShareButtonType Type);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendLinkButton.SocialPanel_FriendLinkButton_C.ExecuteUbergraph_SocialPanel_FriendLinkButton
	// void ExecuteUbergraph_SocialPanel_FriendLinkButton(int32_t EntryPoint);                                                  // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/ListEntries/TeamMemberListEntry.TeamMemberListEntry_C
/// Size: 0x0050 (0x001590 - 0x0015E0)
class UTeamMemberListEntry_C : public UFortTeamMemberListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x15B8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15C0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15D0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/TeamMemberListEntry.TeamMemberListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/TeamMemberListEntry.TeamMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ListEntries/TeamMemberListEntry.TeamMemberListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/TeamMemberListEntry.TeamMemberListEntry_C.ExecuteUbergraph_TeamMemberListEntry
	// void ExecuteUbergraph_TeamMemberListEntry(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/ListEntries/UserListEntry_XS.UserListEntry_XS_C
/// Size: 0x0058 (0x001580 - 0x0015D8)
class UUserListEntry_XS_C : public UFortSocialUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x15B0, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15B8, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15C8, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry_XS.UserListEntry_XS_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry_XS.UserListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry_XS.UserListEntry_XS_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry_XS.UserListEntry_XS_C.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry_XS.UserListEntry_XS_C.ExecuteUbergraph_UserListEntry_XS
	// void ExecuteUbergraph_UserListEntry_XS(int32_t EntryPoint);                                                              // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/ListEntries/JoinRequestUserListEntry.JoinRequestUserListEntry_C
/// Size: 0x0060 (0x001580 - 0x0015E0)
class UJoinRequestUserListEntry_C : public UFortSocialUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     JoinRequest                                                 OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x15B8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15C0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15D0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/JoinRequestUserListEntry.JoinRequestUserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ListEntries/JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/JoinRequestUserListEntry.JoinRequestUserListEntry_C.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/JoinRequestUserListEntry.JoinRequestUserListEntry_C.ExecuteUbergraph_JoinRequestUserListEntry
	// void ExecuteUbergraph_JoinRequestUserListEntry(int32_t EntryPoint);                                                      // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/SuggestedFriendListEntry.SuggestedFriendListEntry_C
/// Size: 0x0060 (0x001560 - 0x0015C0)
class USuggestedFriendListEntry_C : public UFortConnectionsUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UBorder*)                                  Border_Background                                           OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UBorder*)                                  Border_Highlight                                            OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x1598, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15A0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15B0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SuggestedFriendListEntry.SuggestedFriendListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/SuggestedFriendListEntry.SuggestedFriendListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SuggestedFriendListEntry.SuggestedFriendListEntry_C.ExecuteUbergraph_SuggestedFriendListEntry
	// void ExecuteUbergraph_SuggestedFriendListEntry(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C
/// Size: 0x0060 (0x001590 - 0x0015F0)
class UUserSearchResultListEntry_XS_C : public UFortUserSearchResultListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5616;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UImage*)                                   Image_Lock                                                  OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x15C8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15D0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15E0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.SetNamePlatformAndMutuals
	// void SetNamePlatformAndMutuals(FText& DisplayName, FText& Platform, int32_t MutualCount);                                // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserSearchResultListEntry_XS.UserSearchResultListEntry_XS_C.ExecuteUbergraph_UserSearchResultListEntry_XS
	// void ExecuteUbergraph_UserSearchResultListEntry_XS(int32_t EntryPoint);                                                  // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C
/// Size: 0x0028 (0x0004F0 - 0x000518)
class UJoinablePartyActionMenu_C : public UFortJoinablePartyActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1304;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x510, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnToggleConfirmation
	// void OnToggleConfirmation(bool bIsVisible);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C.OnOpened
	// void OnOpened();                                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/JoinablePartyActionMenu.JoinablePartyActionMenu_C.ExecuteUbergraph_JoinablePartyActionMenu
	// void ExecuteUbergraph_JoinablePartyActionMenu(int32_t EntryPoint);                                                       // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C
/// Size: 0x0010 (0x000438 - 0x000448)
class ULeavePartyConfirmationMenu_C : public UFortLeavePartyMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.OnOpened
	// void OnOpened();                                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.ExecuteUbergraph_LeavePartyConfirmationMenu
	// void ExecuteUbergraph_LeavePartyConfirmationMenu(int32_t EntryPoint);                                                    // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C
/// Size: 0x0078 (0x001580 - 0x0015F8)
class UJoinablePartyEntry_C : public UFortJoinablePartyListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(USizeBox*)                                 Exclamation                                                 OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x15C8, 8, 0, 0})
	SMember(FSlateColor)                               InviteFontColor                                             OFFSET(getStruct<T>, {0x15D0, 20, 0, 0})
	SMember(FSlateColor)                               DefaultFontColor                                            OFFSET(getStruct<T>, {0x15E4, 20, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.OnInviteStatusUpdated
	// void OnInviteStatusUpdated(bool bIsInvited);                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/JoinablePartyEntry.JoinablePartyEntry_C.ExecuteUbergraph_JoinablePartyEntry
	// void ExecuteUbergraph_JoinablePartyEntry(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/MissedInvitesEntry.MissedInvitesEntry_C
/// Size: 0x0050 (0x0014F0 - 0x001540)
class UMissedInvitesEntry_C : public UFortMissedInvitesListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(USizeBox*)                                 Exclamation                                                 OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText                                      OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x1538, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/MissedInvitesEntry.MissedInvitesEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/MissedInvitesEntry.MissedInvitesEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/MissedInvitesEntry.MissedInvitesEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/MissedInvitesEntry.MissedInvitesEntry_C.ExecuteUbergraph_MissedInvitesEntry
	// void ExecuteUbergraph_MissedInvitesEntry(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C
/// Size: 0x0070 (0x001560 - 0x0015D0)
class UInviteListEntry_FriendInvite_XS_C : public UFortConnectionsUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_SentRequest                                            OFFSET(get<T>, {0x1598, 8, 0, 0})
	SMember(FLinearColor)                              Online                                                      OFFSET(getStruct<T>, {0x15A0, 16, 0, 0})
	SMember(FLinearColor)                              Offline                                                     OFFSET(getStruct<T>, {0x15B0, 16, 0, 0})
	SMember(FLinearColor)                              Away                                                        OFFSET(getStruct<T>, {0x15C0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.HandleOnlineIndicatorView
	// void HandleOnlineIndicatorView(char OnlineStatus);                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/InviteListEntry_FriendInvite_XS.InviteListEntry_FriendInvite_XS_C.ExecuteUbergraph_InviteListEntry_FriendInvite_XS
	// void ExecuteUbergraph_InviteListEntry_FriendInvite_XS(int32_t EntryPoint);                                               // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/LeavePartyListEntry.LeavePartyListEntry_C
/// Size: 0x0048 (0x0014F0 - 0x001538)
class ULeavePartyListEntry_C : public UFortLeavePartyListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5432;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_LeavePartyText                                         OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x1530, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/LeavePartyListEntry.LeavePartyListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LeavePartyListEntry.LeavePartyListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/LeavePartyListEntry.LeavePartyListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/LeavePartyListEntry.LeavePartyListEntry_C.ExecuteUbergraph_LeavePartyListEntry
	// void ExecuteUbergraph_LeavePartyListEntry(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/ListEntries/VoiceChatMemberListEntry.VoiceChatMemberListEntry_C
/// Size: 0x0048 (0x001590 - 0x0015D8)
class UVoiceChatMemberListEntry_C : public UFortVoiceChatMemberListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15B0, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15B8, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15C8, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ListEntries/VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/VoiceChatMemberListEntry.VoiceChatMemberListEntry_C.ExecuteUbergraph_VoiceChatMemberListEntry
	// void ExecuteUbergraph_VoiceChatMemberListEntry(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
};

/// Class /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C
/// Size: 0x0040 (0x0014F0 - 0x001530)
class UMultiFriendActionListEntry_C : public UFortMultiFriendActionListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText                                      OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText_Hover                                OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x1528, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.GetText
	// void GetText(EMultiFriendAction InAction, FText& Text);                                                                  // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.OnActionUpdated
	// void OnActionUpdated(EMultiFriendAction InAction);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/ListEntries/MultiFriendActionListEntry.MultiFriendActionListEntry_C.ExecuteUbergraph_MultiFriendActionListEntry
	// void ExecuteUbergraph_MultiFriendActionListEntry(int32_t EntryPoint);                                                    // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/ListEntries/PartyMemberListEntry.PartyMemberListEntry_C
/// Size: 0x0050 (0x001590 - 0x0015E0)
class UPartyMemberListEntry_C : public UFortPartyMemberListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x15B8, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15C0, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15D0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/PartyMemberListEntry.PartyMemberListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/PartyMemberListEntry.PartyMemberListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ListEntries/PartyMemberListEntry.PartyMemberListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/PartyMemberListEntry.PartyMemberListEntry_C.ExecuteUbergraph_PartyMemberListEntry
	// void ExecuteUbergraph_PartyMemberListEntry(int32_t EntryPoint);                                                          // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C
/// Size: 0x008C (0x0002F8 - 0x000384)
class UPowerRatingWidget_C : public UFortPlayerPowerRating
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 900;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue_Large                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   BuffedRatingOuterGlow                                       OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UHomebaseRatingBar_C*)                     HomebaseRatingBar                                           OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Image_Power                                                 OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              ModeTypeSwitcher                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UVerticalBox*)                             OversizedMode                                               OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UImage*)                                   PowerIconGlow                                               OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   Rating_Glow_Large                                           OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USizeBox*)                                 RatingBar                                                   OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UHorizontalBox*)                           RegularMode                                                 OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue_Large                                       OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      ShowDualPower                                               OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      ShowProgress                                                OFFSET(get<bool>, {0x369, 1, 0, 0})
	DMember(bool)                                      ShowGlow                                                    OFFSET(get<bool>, {0x36A, 1, 0, 0})
	DMember(bool)                                      UseLargeStyle                                               OFFSET(get<bool>, {0x36B, 1, 0, 0})
	DMember(bool)                                      UseOversizedMode                                            OFFSET(get<bool>, {0x36C, 1, 0, 0})
	DMember(double)                                    InterpDuration                                              OFFSET(get<double>, {0x370, 8, 0, 0})
	CMember(USoundBase*)                               PowerIncreasedSound                                         OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(int32_t)                                   Power_Rating_Num                                            OFFSET(get<int32_t>, {0x380, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.UpdateWidgetState
	// void UpdateWidgetState();                                                                                                // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.OnBasePowerRatingUpdated
	// void OnBasePowerRatingUpdated(int32_t BasePowerRating);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.OnTeamPowerRatingUpdated
	// void OnTeamPowerRatingUpdated(int32_t TeamPowerRating);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.OnPowerRatingProgressUpdated
	// void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress);                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.OnTeamMembershipChanged
	// void OnTeamMembershipChanged();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/PowerRatingWidget.PowerRatingWidget_C.ExecuteUbergraph_PowerRatingWidget
	// void ExecuteUbergraph_PowerRatingWidget(int32_t EntryPoint);                                                             // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C
/// Size: 0x00B8 (0x0002F8 - 0x0003B0)
class UMoonbeam_PowerRatingWidget_C : public UFortPlayerPowerRating
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BaseRatingValue_Large                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   BuffedRatingOuterGlow                                       OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UHomebaseRatingBar_C*)                     HomebaseRatingBar                                           OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Image_Power                                                 OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              ModeTypeSwitcher                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UImage*)                                   Moonbeam_Power_Back                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UVerticalBox*)                             OversizedMode                                               OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   PowerIconGlow                                               OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   Rating_Glow_Large                                           OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USizeBox*)                                 RatingBar                                                   OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UHorizontalBox*)                           RegularMode                                                 OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  TeamRatingValue_Large                                       OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(bool)                                      ShowDualPower                                               OFFSET(get<bool>, {0x370, 1, 0, 0})
	DMember(bool)                                      ShowProgress                                                OFFSET(get<bool>, {0x371, 1, 0, 0})
	DMember(bool)                                      ShowGlow                                                    OFFSET(get<bool>, {0x372, 1, 0, 0})
	DMember(bool)                                      UseLargeStyle                                               OFFSET(get<bool>, {0x373, 1, 0, 0})
	DMember(bool)                                      UseOversizedMode                                            OFFSET(get<bool>, {0x374, 1, 0, 0})
	DMember(double)                                    InterpDuration                                              OFFSET(get<double>, {0x378, 8, 0, 0})
	CMember(USoundBase*)                               PowerIncreasedSound                                         OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(int32_t)                                   Power_Rating_Num                                            OFFSET(get<int32_t>, {0x388, 4, 0, 0})
	SMember(FLinearColor)                              PowerBackingColor                                           OFFSET(getStruct<T>, {0x38C, 16, 0, 0})
	SMember(FSlateColor)                               FontColor                                                   OFFSET(getStruct<T>, {0x39C, 20, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor NewColor);                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.UpdateWidgetState
	// void UpdateWidgetState();                                                                                                // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnBasePowerRatingUpdated
	// void OnBasePowerRatingUpdated(int32_t BasePowerRating);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamPowerRatingUpdated
	// void OnTeamPowerRatingUpdated(int32_t TeamPowerRating);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnPowerRatingProgressUpdated
	// void OnPowerRatingProgressUpdated(float BaseRatingProgress, float TeamRatingProgress);                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.OnTeamMembershipChanged
	// void OnTeamMembershipChanged();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Stats/Moonbeam_PowerRatingWidget.Moonbeam_PowerRatingWidget_C.ExecuteUbergraph_Moonbeam_PowerRatingWidget
	// void ExecuteUbergraph_Moonbeam_PowerRatingWidget(int32_t EntryPoint);                                                    // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   ColorImage                                                  OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher                                        OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   IconImage                                                   OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         IconLoadGuard                                               OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UImage*)                                   Image_BannerEditBorder                                      OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     NormalBangWrapper                                           OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ColorMID                                                    OFFSET(get<T>, {0x1508, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BannerTileBangUpdated                                       OFFSET(getStruct<T>, {0x1510, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.Mark Item As Seen
	// void Mark Item As Seen();                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.Update Bang State
	// void Update Bang State();                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.HandleBannerIconLoadGuardFinished
	// void HandleBannerIconLoadGuardFinished(UObject* Object);                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.ExecuteUbergraph_BP_BannerEditorTile
	// void ExecuteUbergraph_BP_BannerEditorTile(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Profile/BP_BannerEditorTile.BP_BannerEditorTile_C.BannerTileBangUpdated__DelegateSignature
	// void BannerTileBangUpdated__DelegateSignature();                                                                         // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C
/// Size: 0x00E0 (0x000318 - 0x0003F8)
class UBP_LocalPlayerBannerEditor_C : public UFortPlayerProfileBannerEditor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Regular_C*)              ApplyButton                                                 OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCloseButton_C*)                           Button_CloseTouch                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_LeftTab                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_RightTab                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CategoryText                                                OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     ColorBangWrapper                                            OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonTileView*)                          CommonTileView                                              OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EditColorButton                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonTextBlock*)                         FoundersNoteText                                            OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UPlayerBanner_C*)                          HomebaseBanner                                              OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UImage*)                                   HomebaseImage                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     IconBangWrapper                                             OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UIconTextButton_C*)                        LeftArrowButton                                             OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     LeftCategoryBang                                            OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UCommonActionWidget*)                      LeftTriggerAction                                           OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UIconTextButton_C*)                        RightArrowButton                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UNormalBangWrapper_C*)                     RightCategoryBang                                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UCommonActionWidget*)                      RightTriggerAction                                          OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  CloseBannerEditor                                           OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	DMember(int32_t)                                   IconCategoryIndex                                           OFFSET(get<int32_t>, {0x3C0, 4, 0, 0})
	DMember(int32_t)                                   ColorCategoryIndex                                          OFFSET(get<int32_t>, {0x3C4, 4, 0, 0})
	SMember(FName)                                     CurrentCategory                                             OFFSET(getStruct<T>, {0x3C8, 4, 0, 0})
	DMember(bool)                                      bViewingIcons                                               OFFSET(get<bool>, {0x3CC, 1, 0, 0})
	DMember(bool)                                      bPickingTile                                                OFFSET(get<bool>, {0x3CD, 1, 0, 0})
	SMember(FName)                                     TempChosenIcon                                              OFFSET(getStruct<T>, {0x3D0, 4, 0, 0})
	SMember(FName)                                     TempChosenColor                                             OFFSET(getStruct<T>, {0x3D4, 4, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 ButtonGroup                                                 OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(FTimerHandle)                              UpdateBangTimerHandle                                       OFFSET(getStruct<T>, {0x3E0, 8, 0, 0})
	DMember(bool)                                      bIsActiveWidget                                             OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	CMember(USoundBase*)                               AppearSoundCue                                              OFFSET(get<T>, {0x3F0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.IsActiveWidget
	// void IsActiveWidget(bool& IsActivated);                                                                                  // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.HandleInputMethodChanged
	// void HandleInputMethodChanged(ECommonInputType InputType);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Category Navigation Visibility
	// void Update Category Navigation Visibility();                                                                            // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Color Category Index
	// void Reset Color Category Index();                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Icon Category Index
	// void Reset Icon Category Index();                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Color Category Button Bang State
	// void Update Right Color Category Button Bang State();                                                                    // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Color Category Button Bang State
	// void Update Left Color Category Button Bang State();                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Right Icon Category Button Bang State
	// void Update Right Icon Category Button Bang State();                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Left Icon Category Button Bang State
	// void Update Left Icon Category Button Bang State();                                                                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Color Category Index
	// int32_t Get Prev Color Category Index();                                                                                 // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Color Category Index
	// int32_t Get Next Color Category Index();                                                                                 // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Prev Icon Category Index
	// int32_t Get Prev Icon Category Index();                                                                                  // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Get Next Icon Category Index
	// int32_t Get Next Icon Category Index();                                                                                  // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Color Button Bang State
	// void Update Color Button Bang State();                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Icon Button Bang State
	// void Update Icon Button Bang State();                                                                                    // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Bang States
	// void Update Bang States();                                                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.FoundsPackTextUpdate
	// void FoundsPackTextUpdate();                                                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset Pickers and Views
	// void Reset Pickers and Views();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Reset for Keyboard and Mouse
	// void Reset for Keyboard and Mouse();                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Temp State On Item Selected
	// void Update Temp State On Item Selected(UObject* Item);                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Refresh Apply Button State
	// void Refresh Apply Button State();                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Apply Chosen Item
	// void Apply Chosen Item();                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Picking Tile State
	// void Set Picking Tile State(bool bPickingTile);                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Attempt Leave Picker
	// void Attempt Leave Picker(bool& Left);                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Color
	// void Navigate to Chosen Color();                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Navigate to Chosen Icon
	// void Navigate to Chosen Icon();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetDeactivated
	// void OnWidgetDeactivated();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Icon Tileview
	// void Update Banner Icon Tileview(FName CurrentCategory);                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Update Banner Color Tileview
	// void Update Banner Color Tileview(FName CurrentCategory);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Color Category Index
	// void Increment Color Category Index();                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Increment Icon Category Index
	// void Increment Icon Category Index();                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Color Category Index
	// void Decrement Color Category Index();                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Decrement Icon Category Index
	// void Decrement Icon Category Index();                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Previous Category
	// void Previous Category();                                                                                                // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Next Category
	// void Next Category();                                                                                                    // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Set Current Category
	// void Set Current Category(FName CurrentCategory);                                                                        // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Colorswatches
	// void Setup Tileview For Colorswatches(FName& CategoryRowName);                                                           // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Setup Tileview For Icons
	// void Setup Tileview For Icons(FName CategoryRowName);                                                                    // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnWidgetActivated
	// void OnWidgetActivated();                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature
	// void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_888_OnListViewItemClicked__DelegateSignature(UObject* Item);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature
	// void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_306_OnListViewItemWidgetCreated__DelegateSignature(UUserWidget* Widget); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BannerTileBangUpdated_Event
	// void BannerTileBangUpdated_Event();                                                                                      // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Handle Bang State Changed
	// void Handle Bang State Changed();                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowPreviousCategory
	// void OnShowPreviousCategory();                                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.OnShowNextCategory
	// void OnShowNextCategory();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature
	// void BndEvt__CommonTileView_0_K2Node_ComponentBoundEvent_66_OnListViewItemSelected__DelegateSignature(UObject* Item, bool bIsSelected); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
	// void BndEvt__CloseButton_97_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
	// void BndEvt__BP_LocalPlayerBannerEditor_ApplyButton_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature
	// void BndEvt__RightArrowButton_K2Node_ComponentBoundEvent_39_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature
	// void BndEvt__LeftArrowButton_K2Node_ComponentBoundEvent_16_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.RefreshBannerEditor
	// void RefreshBannerEditor();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
	// void BndEvt__BP_LocalPlayerBannerEditor_Button_EditIcon_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
	// void BndEvt__BP_LocalPlayerBannerEditor_EditColorButton_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
	// void BndEvt__BP_LocalPlayerBannerEditor_Button_CloseEditorButton_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
	// void BndEvt__BP_LocalPlayerBannerEditor_Button_LeftTab_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
	// void BndEvt__BP_LocalPlayerBannerEditor_Button_RightTab_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.ExecuteUbergraph_BP_LocalPlayerBannerEditor
	// void ExecuteUbergraph_BP_LocalPlayerBannerEditor(int32_t EntryPoint);                                                    // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Profile/BP_LocalPlayerBannerEditor.BP_LocalPlayerBannerEditor_C.CloseBannerEditor__DelegateSignature
	// void CloseBannerEditor__DelegateSignature(FName IconId, FName ColorId);                                                  // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C
/// Size: 0x0030 (0x0005D8 - 0x000608)
class UTeamMemberManage_C : public UFortTeamMemberManage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5D8, 8, 0, 0})
	CMember(UBP_LocalPlayerBannerEditor_C*)            BP_LocalPlayerBannerEditor                                  OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Regular_C*)              CloseProfileButton                                          OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              ContentSwitcher                                             OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(USizeBox*)                                 TeamMemberManageOptions                                     OFFSET(get<T>, {0x600, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.OnParticipationChanged
	// void OnParticipationChanged(bool bIsParticipating);                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature
	// void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_1_CloseBannerEditor__DelegateSignature(FName IconId, FName ColorId); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature
	// void BndEvt__ContentSwitcher_K2Node_ComponentBoundEvent_2_OnActiveWidgetChanged__DelegateSignature(UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.OpenBannerEditor
	// void OpenBannerEditor();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
	// void BndEvt__TeamMemberManage_CloseProfileButton_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Parties/TeamMemberManage.TeamMemberManage_C.ExecuteUbergraph_TeamMemberManage
	// void ExecuteUbergraph_TeamMemberManage(int32_t EntryPoint);                                                              // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C
/// Size: 0x0029 (0x0002A8 - 0x0002D1)
class UFortSocialEventRSVPWidget_C : public UFortSocialEventRSVPWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 721;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_AdditionalEvents                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AdditionalEvents                                       OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_EventName                                              OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_MonthDay                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(ESlateVisibility)                          In_Visibility                                               OFFSET(get<T>, {0x2D0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.OnRefreshDisplay
	// void OnRefreshDisplay(FText& EventName, FText& Date, FText& AdditionalEvents);                                           // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/FortSocialEventRSVPWidget.FortSocialEventRSVPWidget_C.ExecuteUbergraph_FortSocialEventRSVPWidget
	// void ExecuteUbergraph_FortSocialEventRSVPWidget(int32_t EntryPoint);                                                     // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C
/// Size: 0x0050 (0x0014C0 - 0x001510)
class UPrimarySkewButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   Image_ButtonTop                                             OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   Image_Shadow                                                OFFSET(get<T>, {0x14E8, 8, 0, 0})
	DMember(bool)                                      ToUpper                                                     OFFSET(get<bool>, {0x14F0, 1, 0, 0})
	DMember(bool)                                      XL                                                          OFFSET(get<bool>, {0x14F1, 1, 0, 0})
	SMember(FText)                                     ButtonNameText                                              OFFSET(getStruct<T>, {0x14F8, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
	// void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Showdown/PrimarySkewButton.PrimarySkewButton_C.ExecuteUbergraph_PrimarySkewButton
	// void ExecuteUbergraph_PrimarySkewButton(int32_t EntryPoint);                                                             // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/SafeZone/SafeZoneEditor.SafeZoneEditor_C
/// Size: 0x0038 (0x000568 - 0x0005A0)
class USafeZoneEditor_C : public UFortSafeZoneEditor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UVerticalBox*)                             Default                                                     OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UImage*)                                   LowerLeftCorner                                             OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UImage*)                                   LowerRightCorner                                            OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UImage*)                                   UpperLeftCorner                                             OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UImage*)                                   UpperRightCorner                                            OFFSET(get<T>, {0x598, 8, 0, 0})
};

/// Class /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C
/// Size: 0x0058 (0x001580 - 0x0015D8)
class UUserListEntry_C : public UFortSocialUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x15B0, 8, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_IdleColor                               OFFSET(getStruct<T>, {0x15B8, 16, 0, 0})
	SMember(FLinearColor)                              EncourageEpicFriend_HoveredColor                            OFFSET(getStruct<T>, {0x15C8, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/UserListEntry.UserListEntry_C.ExecuteUbergraph_UserListEntry
	// void ExecuteUbergraph_UserListEntry(int32_t EntryPoint);                                                                 // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C
/// Size: 0x0068 (0x001520 - 0x001588)
class ULocalUserEntry_C : public UFortSocialEventRSVPLocalUserEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5512;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UFortMobileImage*)                         FortMobileImage_enforzer                                    OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UImage*)                                   Image_MicIcon                                               OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UBorder*)                                  LocalUserEntryBorder                                        OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UFortMobileImage*)                         SettingsIcon                                                OFFSET(get<T>, {0x1550, 8, 0, 0})
	SMember(FLinearColor)                              Online                                                      OFFSET(getStruct<T>, {0x1558, 16, 0, 0})
	SMember(FLinearColor)                              Offline                                                     OFFSET(getStruct<T>, {0x1568, 16, 0, 0})
	SMember(FLinearColor)                              Away                                                        OFFSET(getStruct<T>, {0x1578, 16, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.HandleOnlineIndicatorView
	// void HandleOnlineIndicatorView(ELocalUserOnlineStatus InLocalUserOnlineStatus);                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.OnOnlineStatusChanged
	// void OnOnlineStatusChanged(ELocalUserOnlineStatus OnlineStatus);                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ListEntries/LocalUserEntry.LocalUserEntry_C.ExecuteUbergraph_LocalUserEntry
	// void ExecuteUbergraph_LocalUserEntry(int32_t EntryPoint);                                                                // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Input/KeybindWidget.KeybindWidget_C
/// Size: 0x0010 (0x000B80 - 0x000B90)
class UKeybindWidget_C : public UFortKeybindWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB80, 8, 0, 0})
	CMember(UImage*)                                   Image_Preview                                               OFFSET(get<T>, {0xB88, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Input/KeybindWidget.KeybindWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Input/KeybindWidget.KeybindWidget_C.ExecuteUbergraph_KeybindWidget
	// void ExecuteUbergraph_KeybindWidget(int32_t EntryPoint);                                                                 // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C
/// Size: 0x00B8 (0x0014D0 - 0x001588)
class UGamepadKeyTextButton_C : public UFortGamepadCustomListItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5512;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         BoundKey                                                    OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Desc                                      OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_NoKey                                     OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Nokey                                               OFFSET(get<T>, {0x14F8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x1500, 24, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            OFFSET(get<T>, {0x1520, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  ChangeTheBinding_Button                                     OFFSET(getStruct<T>, {0x1528, 16, 0, 0})
	SMember(FName)                                     ActionNameData                                              OFFSET(getStruct<T>, {0x1538, 4, 0, 0})
	SMember(FKey)                                      KeyData                                                     OFFSET(getStruct<T>, {0x1540, 24, 0, 0})
	SMember(FText)                                     TextData                                                    OFFSET(getStruct<T>, {0x1558, 24, 0, 0})
	SMember(FKey)                                      KeyNone                                                     OFFSET(getStruct<T>, {0x1570, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.SetNonInteractableStyle
	// void SetNonInteractableStyle();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.SetContentAlignment
	// void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateContentAlignment
	// void UpdateContentAlignment();                                                                                           // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.SetData
	// void SetData(FKey Key, FText DescText, FName ActionName);                                                                // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.SetDataAndUpdateButton
	// void SetDataAndUpdateButton(FKey Key, FText DescText, FName ActionName);                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.UpdateButton
	// void UpdateButton(UGamepadKeyTextButton_C* Button);                                                                      // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.SetTabLabelInfo
	// void SetTabLabelInfo(FFortTabButtonLabelInfo& TabLabelInfo);                                                             // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.ExecuteUbergraph_GamepadKeyTextButton
	// void ExecuteUbergraph_GamepadKeyTextButton(int32_t EntryPoint);                                                          // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Buttons/GamepadKeyTextButton.GamepadKeyTextButton_C.ChangeTheBinding_Button__DelegateSignature
	// void ChangeTheBinding_Button__DelegateSignature(FName ActionName, FKey Key);                                             // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C
/// Size: 0x00B8 (0x000558 - 0x000610)
class UGamepadCustomActionSelectorPanel_v3_C : public UFortGamePadCustomActionSelectorPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x558, 8, 0, 0})
	CMember(UButton*)                                  Button_Clear                                                OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_Clear                                          OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonListView*)                          CommonListView_GamepadActions                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Clear1                                    OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Clear2                                    OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         KeybindWidget_Clear                                         OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UOptionsMenuHeader_C*)                     OptionsMenuHeader                                           OFFSET(get<T>, {0x590, 8, 0, 0})
	SMember(FDataTableRowHandle)                       Back                                                        OFFSET(getStruct<T>, {0x598, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomActionSelected                                        OFFSET(getStruct<T>, {0x5A8, 16, 0, 0})
	CMember(TArray<UFortOptionsMenuInputData*>)        CurrentInputData                                            OFFSET(get<T>, {0x5B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomClosedUsingBack                                       OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomClearButton                                           OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	SMember(FKey)                                      KeyNone                                                     OFFSET(getStruct<T>, {0x5E8, 24, 0, 0})
	SMember(FDataTableRowHandle)                       Clear                                                       OFFSET(getStruct<T>, {0x600, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleClear
	// void HandleClear(bool& PassThrough);                                                                                     // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CreateCustomListItem
	// void CreateCustomListItem(FName ActionName, EFortInputActionGroup InputActionGroup, UGamepadKeyTextButton_C*& ReturnItem); // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.HandleBack
	// void HandleBack(bool& PassThrough);                                                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.UpdatePanel
	// void UpdatePanel(TArray<UFortOptionsMenuInputData*>& InputData);                                                         // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnItemClicked_Bind
	// void BP_OnItemClicked_Bind(UObject* Item);                                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__Button_Clear_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                        // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3
	// void ExecuteUbergraph_GamepadCustomActionSelectorPanel_v3(int32_t EntryPoint);                                           // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClearButton__DelegateSignature
	// void CustomClearButton__DelegateSignature();                                                                             // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomClosedUsingBack__DelegateSignature
	// void CustomClosedUsingBack__DelegateSignature();                                                                         // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadCustomActionSelectorPanel_v3.GamepadCustomActionSelectorPanel_v3_C.CustomActionSelected__DelegateSignature
	// void CustomActionSelected__DelegateSignature(int32_t SelectedIndex, FName ActionName);                                   // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C
/// Size: 0x0080 (0x000350 - 0x0003D0)
class UOptionsMenuSetting_C : public UFortOptionsMenuSetting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	CMember(UButton*)                                  Button                                                      OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ButtonTouchTooltip                                          OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_Right                                         OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchorSettingDescription                                OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxContainer                                            OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBoxLabel                                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UImage*)                                   SliderBackground                                            OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SliderText                                                  OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SliderValue                                                 OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Right                                                OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(USpacer*)                                  SpacerBottom                                                OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Slider_Texture                                              OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TEnumAsByte<ERoundingMode>)                RoundingMode                                                OFFSET(get<T>, {0x3B8, 1, 0, 0})
	SMember(FVector2D)                                 ToolTipSizeMobile                                           OFFSET(getStruct<T>, {0x3C0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.SetFontSize
	// void SetFontSize(UCommonTextBlock* Text, int32_t DefaulFontSize, int32_t MobileFont);                                    // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.Update Visuals_BP
	// void Update Visuals_BP();                                                                                                // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.ConvertSettingsValueToSliderValue
	// void ConvertSettingsValueToSliderValue(double SettingsValue, double& SliderValue);                                       // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.UpdateSliderTexture
	// void UpdateSliderTexture();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.ConvertSliderValueToSettingsValue
	// void ConvertSliderValueToSettingsValue(double SliderValue, double& SettingsValue);                                       // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.SetSliderTextRenderScale
	// void SetSliderTextRenderScale(double Scale Normalized);                                                                  // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.Hide Tooltip
	// void Hide Tooltip();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.Show Tooltip
	// void Show Tooltip();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.OnGetUserMenuContent
	// UUserWidget* OnGetUserMenuContent();                                                                                     // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.HandlePawnSet
	// void HandlePawnSet();                                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.UpdateSize
	// void UpdateSize();                                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature
	// void BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_69_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature
	// void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_86_OnMouseCaptureEndEvent__DelegateSignature();                       // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature
	// void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_107_OnControllerCaptureEndEvent__DelegateSignature();                 // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature
	// void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);           // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature
	// void BndEvt__MenuSlider_K2Node_ComponentBoundEvent_124_OnFloatValueChangedEvent__DelegateSignature(float Value);         // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.Refresh
	// void Refresh();                                                                                                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.UpdateVisuals
	// void UpdateVisuals();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenuSetting.OptionsMenuSetting_C.ExecuteUbergraph_OptionsMenuSetting
	// void ExecuteUbergraph_OptionsMenuSetting(int32_t EntryPoint);                                                            // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/Settings/Deadzone/DeadzoneAdjustment.DeadzoneAdjustment_C
/// Size: 0x0029 (0x0002A8 - 0x0002D1)
class UDeadzoneAdjustment_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 721;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   Deadzone_Adjustment                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UOptionsMenuSetting_C*)                    Deadzone_Adjustment_Slider                                  OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Deadzone_Max                                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ResetButton                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(ESettingType)                              SettingType                                                 OFFSET(get<T>, {0x2D0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/Deadzone/DeadzoneAdjustment.DeadzoneAdjustment_C.DoCustomNavigation
	// UWidget* DoCustomNavigation(EUINavigation Navigation);                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/Deadzone/DeadzoneAdjustment.DeadzoneAdjustment_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/Deadzone/DeadzoneAdjustment.DeadzoneAdjustment_C.OnValueChanged_Bind
	// void OnValueChanged_Bind(float Value);                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/Deadzone/DeadzoneAdjustment.DeadzoneAdjustment_C.ExecuteUbergraph_DeadzoneAdjustment
	// void ExecuteUbergraph_DeadzoneAdjustment(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Buttons                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Buttons                                         OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TArray<FFortRadioButtonItemStruct>)        Buttons                                                     OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<UIconTextButton_C*>)                CreatedButtons                                              OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  RadioButtonClicked_Event                                    OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	DMember(double)                                    WidthOverride                                               OFFSET(get<double>, {0x2F0, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 CreatedButtonsGroup                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UClass*)                                   CommonButtonGroup                                           OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(double)                                    HeightOverride                                              OFFSET(get<double>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Game/UI/RadioButtonGroup/FortRadioButtonGroup.FortRadioButtonGroup_C.CenterOnWidget
	// void CenterOnWidget();                                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/RadioButtonGroup/FortRadioButtonGroup.FortRadioButtonGroup_C.OnButtonClicked_Bind
	// void OnButtonClicked_Bind(UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex);                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/RadioButtonGroup/FortRadioButtonGroup.FortRadioButtonGroup_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/RadioButtonGroup/FortRadioButtonGroup.FortRadioButtonGroup_C.UpdateButtons
	// void UpdateButtons();                                                                                                    // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/RadioButtonGroup/FortRadioButtonGroup.FortRadioButtonGroup_C.ExecuteUbergraph_FortRadioButtonGroup
	// void ExecuteUbergraph_FortRadioButtonGroup(int32_t EntryPoint);                                                          // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/RadioButtonGroup/FortRadioButtonGroup.FortRadioButtonGroup_C.RadioButtonClicked_Event__DelegateSignature
	// void RadioButtonClicked_Event__DelegateSignature(int32_t SelectedIndex);                                                 // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C
/// Size: 0x00C8 (0x000558 - 0x000620)
class UGamepadInfoSelectorPanel_v3_C : public UFortGamePadInfoSelectorPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x558, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_Reset                                          OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortRadioButtonGroup_C*)                  FortRadioButtonGroup_Configs                                OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortRadioButtonGroup_C*)                  FortRadioButtonGroup_Platforms                              OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Reset1                                    OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Reset2                                    OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         KeybindWidget_Reset                                         OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UOptionsMenuHeader_C*)                     OptionsMenuHeader_Configs                                   OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UOptionsMenuHeader_C*)                     OptionsMenuHeader_Platforms                                 OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UButton*)                                  ResetButton                                                 OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Platforms                                       OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       Back                                                        OFFSET(getStruct<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorBack                                     OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       Apply                                                       OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorApply                                    OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       Reset                                                       OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorReset                                    OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadInfoSelectorFocus                                    OFFSET(getStruct<T>, {0x610, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_GetDesiredFocusTarget
	// UWidget* BP_GetDesiredFocusTarget();                                                                                     // [0x1ebf994] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleReset
	// void HandleReset(bool& PassThrough);                                                                                     // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleApply
	// void HandleApply(bool& PassThrough);                                                                                     // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.HandleBack
	// void HandleBack(bool& PassThrough);                                                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	// void BndEvt__ResetButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();                         // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.ExecuteUbergraph_GamepadInfoSelectorPanel_v3
	// void ExecuteUbergraph_GamepadInfoSelectorPanel_v3(int32_t EntryPoint);                                                   // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorFocus__DelegateSignature
	// void GamepadInfoSelectorFocus__DelegateSignature();                                                                      // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorReset__DelegateSignature
	// void GamepadInfoSelectorReset__DelegateSignature();                                                                      // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorApply__DelegateSignature
	// void GamepadInfoSelectorApply__DelegateSignature();                                                                      // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadInfoSelectorPanel_v3.GamepadInfoSelectorPanel_v3_C.GamepadInfoSelectorBack__DelegateSignature
	// void GamepadInfoSelectorBack__DelegateSignature();                                                                       // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C
/// Size: 0x0484 (0x0002D0 - 0x000754)
class UGamepadMappingInfo_v3_C : public UFortGamepadMappingInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1876;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_LeftBumperSeparator                            OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_RightBumperSeparator                           OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_Legend                                         OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UDeadzoneAdjustment_C*)                    DeadzoneAdjustment_Look                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UDeadzoneAdjustment_C*)                    DeadzoneAdjustment_Move                                     OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadDown                                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadDown2                                                   OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadDown_Custom                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadLeft                                                    OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadLeft2                                                   OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadLeft_Custom                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadRight                                                   OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadRight2                                                  OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadRight_Custom                                            OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DPadUp                                                      OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         DpadUp2                                                     OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DpadUp_Custom                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceBottom_Custom                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonBot                                               OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonLeft                                              OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonRight                                             OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         FaceButtonTop                                               OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceLeft_Custom                                             OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceRight_Custom                                            OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  FaceTop_Custom                                              OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_DeadzoneWarning                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_DoubleTap                                 OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortRichTextBlockLegacy*)                 FortRichTextBlock_Hold                                      OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UGamepadCustomActionSelectorPanel_v3_C*)   GamepadCustomActionSelectorPanel_v3                         OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LB_RB                                         OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LB_RT                                         OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LT_RB                                         OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_AllText                                       OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_CustomButtons                                 OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UHorizontalTabList_Legacy_C*)              HorizontalTabList_CustomModes                               OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UImage*)                                   Image_DoubleTap                                             OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UImage*)                                   Image_Gamepad                                               OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UImage*)                                   Image_Hold                                                  OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   Image_LightBox                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LB_RBAction                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LB_RTAction                                                 OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LB_Custom                                                   OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LS                                                          OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LS_Click_Custom                                             OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LSCombo1                                                    OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LSCombo2                                                    OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStick                                                      OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStick2                                                     OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStickClick                                                 OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LStickClick2                                                OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LT                                                          OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LT_RBAction                                                 OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LT_Custom                                                   OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         LTCombo                                                     OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_DeadzoneAdjustment                                  OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  RB_Custom                                                   OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RS                                                          OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  RS_Click_Custom                                             OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RSCombo                                                     OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RSCombo2                                                    OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RStick                                                      OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RStickClick                                                 OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RT                                                          OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  RT_Custom                                                   OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         RTCombo                                                     OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  Select_Custom                                               OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(USizeBox*)                                 Separator_LB_RBfromLB_RT                                    OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         SpecialLeft                                                 OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         SpecialRight                                                OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  Start_Custom                                                OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Bottom                             OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Left                               OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Left1                              OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Left2                              OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Right                              OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Right1                             OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Right2                             OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Top                                OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Face_Button_Top1                               OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_LB                                             OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_LT                                             OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RB                                             OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS                                             OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS_Click                                       OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS_Click1                                      OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RS_Click2                                      OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_RT                                             OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Select                                         OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Select1                                        OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Gamepad_Start                                          OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Mode                                                   OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Down                                          OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Left                                          OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Right                                         OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_Dpad_Up                                            OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_LS                                                 OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_LS_Click                                           OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PS4_LS_Click1                                          OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Down                                         OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Left                                         OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Right                                        OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_Dpad_Up                                           OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_LS                                                OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_LS_Click                                          OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Xbox_LS_Click1                                         OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_PS4_LS_And_Dpad                                 OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Xbox_LS_And_Dpad                                OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBoxMenu_Map                                         OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    XB1_Images                                                  OFFSET(get<T>, {0x638, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PS4_Images                                                  OFFSET(get<T>, {0x648, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Appropriate_Platform_Images                                 OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(TArray<UCommonTextBlock*>)                 GamepadConfigTextWidgets                                    OFFSET(get<T>, {0x668, 16, 0, 0})
	CMember(TArray<FText>)                             ButtonTextLabels_STW_CombatPro_Build                        OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(TArray<FText>)                             ButtonTextLabels_STW_CombatPro_Combat                       OFFSET(get<T>, {0x688, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Erebus_Images                                               OFFSET(get<T>, {0x698, 16, 0, 0})
	CMember(TArray<FText>)                             ButtonTextLabels_STW_BuilderPro_Build                       OFFSET(get<T>, {0x6A8, 16, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  LastClickedButton                                           OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(EFortInputActionGroup)                     CurrentInputActionGroup                                     OFFSET(get<T>, {0x6C0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomKeySelected                                           OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	CMember(TArray<UGamepadKeyTextButton_C*>)          CustomKeyButtons                                            OFFSET(get<T>, {0x6D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Image_LightboxClicked                                       OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FName)                                     CombatModeIdName                                            OFFSET(getStruct<T>, {0x6F8, 4, 0, 0})
	SMember(FName)                                     BuildModeIdName                                             OFFSET(getStruct<T>, {0x6FC, 4, 0, 0})
	SMember(FName)                                     EditModeIdName                                              OFFSET(getStruct<T>, {0x700, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  CustomButtonNavLeft                                         OFFSET(getStruct<T>, {0x708, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Generic_Images                                              OFFSET(get<T>, {0x718, 16, 0, 0})
	SMember(FName)                                     DeadZoneMoveIdName                                          OFFSET(getStruct<T>, {0x728, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    XSX_Images                                                  OFFSET(get<T>, {0x730, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PS5_Images                                                  OFFSET(get<T>, {0x740, 16, 0, 0})
	SMember(FName)                                     LTMAbilitiesModeIdName                                      OFFSET(getStruct<T>, {0x750, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowAthenaLTMAbilitiesTab
	// void ShowAthenaLTMAbilitiesTab();                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideAthenaLTMAbilitiesTab
	// void HideAthenaLTMAbilitiesTab();                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowDeadZoneTab
	// void ShowDeadZoneTab();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideDeadZoneTab
	// void HideDeadZoneTab();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GamepadMappingInfoNavLeft
	// void GamepadMappingInfoNavLeft();                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ShowEditModeTab
	// void ShowEditModeTab();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HideEditModeTab
	// void HideEditModeTab();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.On_Image_LightBox_MouseButtonDown
	// FEventReply On_Image_LightBox_MouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                          // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetCustomButtonDataForKey
	// void GetCustomButtonDataForKey(FKey Key, FName& ActionName, FText& DescText);                                            // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextForMode
	// void SetTextForMode(EFortInputActionGroup Selection);                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetButtonTextLabelsFromTextArray
	// void SetButtonTextLabelsFromTextArray(TArray<FText>& Array);                                                             // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTW_BuilderProBuild
	// void InitializeListOfButtonTextForSTW_BuilderProBuild(TArray<FText>& ButtonTextLabels);                                  // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetControllerImage
	// void GetControllerImage(TWeakObjectPtr<UTexture2D*>& Texture);                                                           // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ClearAllComboTextLines
	// void ClearAllComboTextLines();                                                                                           // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProCombat
	// void InitializeListOfButtonTextForSTWCombatProCombat(TArray<FText>& ButtonTextLabels);                                   // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.SetTextFieldVisibilityForExtraLine
	// void SetTextFieldVisibilityForExtraLine(UTextBlock* TextWidget);                                                         // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.GetDesiredSlateVisibilityForAbilityChordFromTextDisplay
	// void GetDesiredSlateVisibilityForAbilityChordFromTextDisplay(UTextBlock* TextWidget, ESlateVisibility& DesiredSlateVisibility); // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonTextForSTWCombatProBuild
	// void InitializeListOfButtonTextForSTWCombatProBuild(TArray<FText>& ButtonTextLabels);                                    // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.InitializeListOfButtonLabelTextWidgets
	// void InitializeListOfButtonLabelTextWidgets();                                                                           // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed Hide or Show Unused Text Lines
	// void Handle Config Changed Hide or Show Unused Text Lines();                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Combat Mode
	// void Handle Config Changed STW Combat Mode(int32_t Config);                                                              // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Handle Config Changed STW Build Mode
	// void Handle Config Changed STW Build Mode(int32_t Config);                                                               // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged
	// void HandleConfigChanged(EFortInputActionGroup Mode, int32_t Config);                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.HandleConfigChanged_Athena
	// void HandleConfigChanged_Athena(EFortInputActionGroup Mode, int32_t Config);                                             // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnConfigChanged
	// void OnConfigChanged(EFortInputActionGroup Mode, int32_t Config);                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Displayed Mapping
	// void Update Displayed Mapping(int32_t Platform, EFortInputActionGroup Mode, int32_t Configuration);                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnLoaded_CDBC1B27496027B96D10BC9A64224F3D
	// void OnLoaded_CDBC1B27496027B96D10BC9A64224F3D(UObject* Loaded);                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Update Controller Images
	// void Update Controller Images();                                                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.OnButtonClicked_Bind
	// void OnButtonClicked_Bind(UCommonButtonLegacy* Button);                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.UpdateCustomButtons
	// void UpdateCustomButtons();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabSelected
	// void DeadZoneTabSelected();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadZoneTabDeselected
	// void DeadZoneTabDeselected();                                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneMoveResetButtonClicked_Bind
	// void DeadzoneMoveResetButtonClicked_Bind(UCommonButtonLegacy* Button);                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.DeadzoneLookResetButtonClicked_Bind
	// void DeadzoneLookResetButtonClicked_Bind(UCommonButtonLegacy* Button);                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.ExecuteUbergraph_GamepadMappingInfo_v3
	// void ExecuteUbergraph_GamepadMappingInfo_v3(int32_t EntryPoint);                                                         // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomButtonNavLeft__DelegateSignature
	// void CustomButtonNavLeft__DelegateSignature();                                                                           // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.Image_LightboxClicked__DelegateSignature
	// void Image_LightboxClicked__DelegateSignature();                                                                         // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/GamepadMappingInfo_v3.GamepadMappingInfo_v3_C.CustomKeySelected__DelegateSignature
	// void CustomKeySelected__DelegateSignature(FKey Key);                                                                     // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C
/// Size: 0x0108 (0x000468 - 0x000570)
class UTabGamePadConfig_v3_C : public UFortGamepadInputOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x468, 8, 0, 0})
	CMember(UGamepadInfoSelectorPanel_v3_C*)           GamepadInfoSelectorPanel_v3                                 OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UGamepadMappingInfo_v3_C*)                 GamepadMappingInfo_v3                                       OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  GamepadMappingInfoChanged                                   OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	CMember(TArray<FString>)                           InputPresets                                                OFFSET(get<T>, {0x490, 16, 0, 0})
	CMember(TArray<FText>)                             InputPresetNames_NoCustom                                   OFFSET(get<T>, {0x4A0, 16, 0, 0})
	DMember(int32_t)                                   PresetMappingIndex                                          OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
	DMember(int32_t)                                   PlatformMappingIndex                                        OFFSET(get<int32_t>, {0x4B4, 4, 0, 0})
	DMember(int32_t)                                   CustomInputTemplatePresetIndex                              OFFSET(get<int32_t>, {0x4B8, 4, 0, 0})
	CMember(UGamepadKeyTextButton_C*)                  DisplayObject                                               OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(EFortInputActionGroup)                     CurrentInputActionGroup                                     OFFSET(get<T>, {0x4C8, 1, 0, 0})
	DMember(int32_t)                                   CustomResetToDefaultConfig                                  OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	SMember(FKey)                                      CustomKeySelection                                          OFFSET(getStruct<T>, {0x4D0, 24, 0, 0})
	SMember(FName)                                     CustomActionSelection                                       OFFSET(getStruct<T>, {0x4E8, 4, 0, 0})
	DMember(int32_t)                                   CustomInputActionGroupSelectionIndex                        OFFSET(get<int32_t>, {0x4EC, 4, 0, 0})
	DMember(int32_t)                                   CustomActionSelectionIndex                                  OFFSET(get<int32_t>, {0x4F0, 4, 0, 0})
	SMember(FKey)                                      Key_None                                                    OFFSET(getStruct<T>, {0x4F8, 24, 0, 0})
	CMember(UClass*)                                   RadioButtonClass                                            OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UClass*)                                   RadioButtonStyle                                            OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(TArray<UFortOptionsMenuInputData*>)        InputDataForActionsPanel                                    OFFSET(get<T>, {0x520, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  TabGamePadConfigBack                                        OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  TabGamePadConfigApply                                       OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  TabGamePadActionsThatNeedBinds                              OFFSET(getStruct<T>, {0x550, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OverrideResetModal                                          OFFSET(getStruct<T>, {0x560, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadInfoSelectorNavRight
	// void GamepadInfoSelectorNavRight();                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.AreWeOkayWithThisChange
	// void AreWeOkayWithThisChange(FName ActionName, FKey Key, bool& IsOkay);                                                  // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorFocus
	// void HandleGamepadInfoSelectorFocus();                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.NavigateToSelectedConfig
	// void NavigateToSelectedConfig();                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomClearVisibilityForInputType
	// void ChangeCustomClearVisibilityForInputType(ECommonInputType InputType);                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomResetVisibilityForInputType
	// void ChangeCustomResetVisibilityForInputType(ECommonInputType InputType);                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorApply
	// void HandleGamepadInfoSelectorApply();                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadInfoSelectorBack
	// void HandleGamepadInfoSelectorBack();                                                                                    // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.ChangeCustomTabListVisibilityForInputType
	// void ChangeCustomTabListVisibilityForInputType(ECommonInputType Selection);                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CreateCustomResetToDefaultList
	// TArray<FConfirmationDialogAction> CreateCustomResetToDefaultList();                                                      // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CloseCustomActionsPanel
	// void CloseCustomActionsPanel(bool FocusLastButton);                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.SelectSameItemInActionsList
	// void SelectSameItemInActionsList();                                                                                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.SetupDisplayObject
	// void SetupDisplayObject(FName ActionName, FKey Key, UGamepadKeyTextButton_C*& DisplayObject);                            // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.IsCustomConfig
	// bool IsCustomConfig(int32_t PresetIndex);                                                                                // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleGamepadMappingInfoChange
	// void HandleGamepadMappingInfoChange();                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.GetCurrentPlatformIndex
	// void GetCurrentPlatformIndex(int32_t& PlatformIndex);                                                                    // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateData
	// void UpdateData();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstructData
	// void PreConstructData();                                                                                                 // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.InitializeData
	// void InitializeData();                                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_017CD690454514A07B4DE5BE109AEC6E
	// void DialogResult_017CD690454514A07B4DE5BE109AEC6E(EFortDialogResult Result, FName ResultName);                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717
	// void DialogResult_7D7E06D747FFEF9849D3CAA2D3D91717(EFortDialogResult Result, FName ResultName);                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.Gamepad Config Changed
	// void Gamepad Config Changed(UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex);                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadPlatformConfigChanged
	// void GamepadPlatformConfigChanged(UCommonButtonLegacy* AssociatedButton, int32_t ButtonIndex);                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CenterOnTab
	// void CenterOnTab();                                                                                                      // [0x1ebf994] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.UpdateOptionsTab
	// void UpdateOptionsTab();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomDoResetToDefault
	// void CustomDoResetToDefault();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomKeySelected_Bind
	// void CustomKeySelected_Bind(FKey Key);                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomActionSelected_Bind
	// void CustomActionSelected_Bind(int32_t SelectedIndex, FName ActionName);                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClosedUsingBack_Bind
	// void CustomClosedUsingBack_Bind();                                                                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.CustomClearButton_Bind
	// void CustomClearButton_Bind();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.ModesTabSelected_Bind
	// void ModesTabSelected_Bind(FName TabId);                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.HandleUsingGamepadChanged
	// void HandleUsingGamepadChanged(ECommonInputType NewInputType);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabDeactivated_Bind
	// void OnTabDeactivated_Bind();                                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.OnTabActivated_Bind
	// void OnTabActivated_Bind();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneLookSettingValueChanged_Bind
	// void DeadZoneLookSettingValueChanged_Bind(float Value);                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.DeadZoneMoveSettingValueChanged_Bind
	// void DeadZoneMoveSettingValueChanged_Bind(float Value);                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.ExecuteUbergraph_TabGamePadConfig_v3
	// void ExecuteUbergraph_TabGamePadConfig_v3(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.OverrideResetModal__DelegateSignature
	// void OverrideResetModal__DelegateSignature(bool bOverride);                                                              // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadActionsThatNeedBinds__DelegateSignature
	// void TabGamePadActionsThatNeedBinds__DelegateSignature(TArray<FText>& ScreenLabels);                                     // [0x1ebf994] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigApply__DelegateSignature
	// void TabGamePadConfigApply__DelegateSignature();                                                                         // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.TabGamePadConfigBack__DelegateSignature
	// void TabGamePadConfigBack__DelegateSignature();                                                                          // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/CustomBindings_v3/TabGamePadConfig_v3.TabGamePadConfig_v3_C.GamepadMappingInfoChanged__DelegateSignature
	// void GamepadMappingInfoChanged__DelegateSignature();                                                                     // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Foundation/Border/Border-Bottom-Box-Rounded-DkBlue.Border-Bottom-Box-Rounded-DkBlue_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_Bottom_Box_Rounded_DkBlue_C : public UCommonBorderStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C
/// Size: 0x0028 (0x001060 - 0x001088)
class UOptionsMenu_C : public UFortOptionsMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1060, 8, 0, 0})
	CMember(UFortHUDElementWrapper_C*)                 FortHUDElementWrapper                                       OFFSET(get<T>, {0x1068, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_ContentLetoSplitscreen                              OFFSET(get<T>, {0x1070, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_HeadingLeto                                         OFFSET(get<T>, {0x1078, 8, 0, 0})
	CMember(UTabGamePadConfig_v3_C*)                   TabGamepadConfig                                            OFFSET(get<T>, {0x1080, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.LoadTabClasses
	// void LoadTabClasses();                                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.Handle Tab Gamepad Config Action Handler States_SAVE
	// void Handle Tab Gamepad Config Action Handler States_SAVE();                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.DialogResult_826C59EC4C294BC872A644878B35A13B
	// void DialogResult_826C59EC4C294BC872A644878B35A13B(EFortDialogResult Result, FName ResultName);                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E
	// void DialogResult_B31FF5BD4C0772716F27509EA83B418E(EFortDialogResult Result, FName ResultName);                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds
	// void HandleTabGamePadActionsNeedBinds(TArray<FText>& ScreenLabels);                                                      // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
	// void HandleTabGamepadConfigActionHandlerStates();                                                                        // [0x1ebf994] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.OnSettingsTabListPopulated
	// void OnSettingsTabListPopulated();                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.BndEvt__TabList_Categories_K2Node_ComponentBoundEvent_0_OnTabButtonCreation__DelegateSignature
	// void BndEvt__TabList_Categories_K2Node_ComponentBoundEvent_0_OnTabButtonCreation__DelegateSignature(FName TabId, UCommonButtonBase* TabButton); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.On Override Reset Modal
	// void On Override Reset Modal(bool bOverride);                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.OnShowResetToDefaultModal
	// void OnShowResetToDefaultModal();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.OnSplitscreenUpdateSizing
	// void OnSplitscreenUpdateSizing();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Settings/OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
	// void ExecuteUbergraph_OptionsMenu(int32_t EntryPoint);                                                                   // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHovered                                                   OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UImage*)                                   AddFriendBanIcon                                            OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UBorder*)                                  ClickCapture                                                OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_CannotAddFriends                                   OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_SocialBan                                          OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UFortMobileImage*)                         SharingIcon                                                 OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UFortSimpleWidgetAnimationsPanel*)         SimpleWidgetAnimationsPanel                                 OFFSET(get<T>, {0x1598, 8, 0, 0})
	SMember(FName)                                     ShakeAnimation                                              OFFSET(getStruct<T>, {0x15A0, 4, 0, 0})
	DMember(bool)                                      bShakeAnimationIsPlaying                                    OFFSET(get<bool>, {0x15A4, 1, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.On_ClickCapture_MouseButtonDown
	// FEventReply On_ClickCapture_MouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                            // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	// void BndEvt__EditableText_AddFriend_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(FText& Text); // [0x1ebf994] HasOutParms|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_FriendSearchBar.SocialPanel_FriendSearchBar_C.ExecuteUbergraph_SocialPanel_FriendSearchBar
	// void ExecuteUbergraph_SocialPanel_FriendSearchBar(int32_t EntryPoint);                                                   // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C
/// Size: 0x0088 (0x000390 - 0x000418)
class UVoiceChannelSettings_C : public UFortVoiceSettingsDisplay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x390, 8, 0, 0})
	CMember(UWidgetAnimation*)                         GearHover                                                   OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_InputDisplay                                   OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UImage*)                                   AlertIcon                                                   OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_NextInputDevice                                      OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_NextOutputDevice                                     OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_TogglePTT                                            OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_VoiceSettings                                        OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UImage*)                                   GearIcon                                                    OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_TitleIcon                                             OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     InputDevice                                                 OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     OutputDevice                                                OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         PTTKeybindWidget                                            OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     PushToTalk                                                  OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LowPowerMode                                           OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   VoiceDisabledIcon                                           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     VoiceDisabledText                                           OFFSET(get<T>, {0x410, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.OnComplete_CAAD0AF4467900CF5BC6B8B8CA0C330F
	// void OnComplete_CAAD0AF4467900CF5BC6B8B8CA0C330F(UUserWidget* UserWidget);                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
	// void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
	// void BndEvt__Button_OpenSettings_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__Button_GearIcon_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.ShowVoiceSettingsButton
	// void ShowVoiceSettingsButton();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.BndEvt__VoiceChannelSettings_Button_VoiceSettings_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
	// void BndEvt__VoiceChannelSettings_Button_VoiceSettings_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/VoiceChannelSettings.VoiceChannelSettings_C.ExecuteUbergraph_VoiceChannelSettings
	// void ExecuteUbergraph_VoiceChannelSettings(int32_t EntryPoint);                                                          // [0x1ebf994] Final                
};

/// Class /Game/UI/Frontend/FrontendItemViewSettingsManager.FrontendItemViewSettingsManager_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFrontendItemViewSettingsManager_C : public UFortFrontendItemViewSettingsManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C
/// Size: 0x0060 (0x000430 - 0x000490)
class UReferAFriendActionMenu_C : public UFortReferFriendActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x430, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmationOpened                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Opened                                                      OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UBorder*)                                  Border_OnlineStatusIndicator                                OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock1                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UImage*)                                   Image_AddFriendsQR                                          OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   Image_PartyUpQR                                             OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   Image_Platform                                              OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_DisplayName                                            OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          WidgetSwitcher_QR                                           OFFSET(get<T>, {0x488, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.Set QRt Image
	// void Set QRt Image(EReferFriendOrigin Origin);                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnOpened
	// void OnOpened();                                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnRequestOriginChanged
	// void OnRequestOriginChanged(EReferFriendOrigin RequestOrigin);                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ReferAFriendActionMenu.ReferAFriendActionMenu_C.ExecuteUbergraph_ReferAFriendActionMenu
	// void ExecuteUbergraph_ReferAFriendActionMenu(int32_t EntryPoint);                                                        // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C
/// Size: 0x0050 (0x0014F0 - 0x001540)
class UReferAFriendEntry_C : public UFortReferFriendListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UBorder*)                                  AnimatedInputBorder                                         OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UIconTextButton_C*)                        EmptyButtonToEatOneMouseUpEvent                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UBorder*)                                  EntryBorder                                                 OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(USizeBox*)                                 Exclamation                                                 OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_MissedInvitesText                                      OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UUserActionMenuInputButton_C*)             UserActionMenuInputButton                                   OFFSET(get<T>, {0x1538, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	// void BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/ReferAFriendEntry.ReferAFriendEntry_C.ExecuteUbergraph_ReferAFriendEntry
	// void ExecuteUbergraph_ReferAFriendEntry(int32_t EntryPoint);                                                             // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C
/// Size: 0x00C0 (0x0005F0 - 0x0006B0)
class USocialPanelView_UserLists_C : public UFortSocialPanelView_UserLists
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         WeGameButtonHovered                                         OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         SwitcherTransition                                          OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UWidgetAnimation*)                         NoFriendsArrowBounce                                        OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UWidgetAnimation*)                         MenuAnchorItemOpen                                          OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Open                                                        OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Open1                                                       OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UImage*)                                   bckgrnd                                                     OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UImage*)                                   CircularThrobber_UserSearch                                 OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UFortMobileImage*)                         FortMobileImage                                             OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   Image_MicDisabled                                           OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_MicIcon                                               OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_MicIcon1                                              OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_MicIcon2                                              OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UImage*)                                   Image_MicIcon3                                              OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UFortMobileImage*)                         Image_TitleIcon                                             OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_LeavePlatformPartyTitle                            OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_VoiceChatDisabled                                  OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_VoiceChatDisabledHeader                            OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_VoiceChatDisabledWarningMessage                    OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(URichTextBlock*)                           RichTextBlock                                               OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(USocialPanel_FriendLinkButton_C*)          SocialPanel_FriendLinkButton                                OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LowPowerMode                                           OFFSET(get<T>, {0x6A8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
	// void BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.OnSetVoiceChannelButtonText
	// void OnSetVoiceChannelButtonText(FText& ButtonText);                                                                     // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanelView_UserLists.SocialPanelView_UserLists_C.ExecuteUbergraph_SocialPanelView_UserLists
	// void ExecuteUbergraph_SocialPanelView_UserLists(int32_t EntryPoint);                                                     // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/SocialPanel/SocialPanel.SocialPanel_C
/// Size: 0x0030 (0x000578 - 0x0005A8)
class USocialPanel_C : public UFortSocialPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x578, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnOpened                                                    OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UImage*)                                   Image_Back                                                  OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USocialPanel_TopBarExtension_C*)           SocialPanel_TopBarExtension                                 OFFSET(get<T>, {0x5A0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.Play Panel Animation Sound
	// void Play Panel Animation Sound();                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.ClosePanelAfterAnimation
	// void ClosePanelAfterAnimation();                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__SocialPanel_TopBarExtension_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.ClosePanel
	// void ClosePanel();                                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.HandleOutroEnded
	// void HandleOutroEnded();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.OnBeginIntro
	// void OnBeginIntro();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.HandleIntroEnded
	// void HandleIntroEnded();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel.SocialPanel_C.ExecuteUbergraph_SocialPanel
	// void ExecuteUbergraph_SocialPanel(int32_t EntryPoint);                                                                   // [0x1ebf994] Final                
};

/// Class /Game/UI/SocialPanel/SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C
/// Size: 0x0028 (0x0014C0 - 0x0014E8)
class USocialPanel_TopBarExtension_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5352;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UImage*)                                   Image_PlatformIcon                                          OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UMiniPartyBar_C*)                          MiniPartyBar                                                OFFSET(get<T>, {0x14E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/SocialPanel/SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/SocialPanel/SocialPanel_TopBarExtension.SocialPanel_TopBarExtension_C.ExecuteUbergraph_SocialPanel_TopBarExtension
	// void ExecuteUbergraph_SocialPanel_TopBarExtension(int32_t EntryPoint);                                                   // [0x1ebf994] Final                
};

/// Class /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C
/// Size: 0x0040 (0x0002D0 - 0x000310)
class UMiniPartyBar_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ButtonLocalPlayer                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UImage*)                                   LineSeparator                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      LocalPlayer                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      RemotePlayer1                                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      RemotePlayer2                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UTeamMemberBanner_C*)                      RemotePlayer3                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UTeamMemberManage_C*)                      NewLocalPlayerWidget                                        OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.Get Banners Tooltip Widget
	// UWidget* Get Banners Tooltip Widget();                                                                                   // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.HandlePartybarUIFeatureChanged
	// void HandlePartybarUIFeatureChanged(EFortUIFeature Feature, EFortUIFeatureState FeatureState);                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature
	// void BndEvt__ButtonLocalPlayer_K2Node_ComponentBoundEvent_81_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Parties/MiniPartyBar.MiniPartyBar_C.ExecuteUbergraph_MiniPartyBar
	// void ExecuteUbergraph_MiniPartyBar(int32_t EntryPoint);                                                                  // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C
/// Size: 0x0040 (0x001500 - 0x001540)
class UTeamMemberBanner_C : public UFortCampaignTeamMemberBanner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1500, 8, 0, 0})
	CMember(UIconTextButton_C*)                        ButtonPartyFinder                                           OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UOverlay*)                                 Connected                                                   OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(USizeBox*)                                 Connecting                                                  OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UOverlay*)                                 Open                                                        OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UImage*)                                   OpenImage                                                   OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_MemberState                                        OFFSET(get<T>, {0x1538, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.OpenPartyFinder
	// void OpenPartyFinder();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.HandleMouseHoverVisualState
	// void HandleMouseHoverVisualState(bool Hover);                                                                            // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
	// void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
	// void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.OnTeamMemberConnectionStateChanged
	// void OnTeamMemberConnectionStateChanged(EFortMemberConnectionState NewConnectionState);                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/Parties/TeamMemberBanner.TeamMemberBanner_C.ExecuteUbergraph_TeamMemberBanner
	// void ExecuteUbergraph_TeamMemberBanner(int32_t EntryPoint);                                                              // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x300, 8, 0, 0})
	CMember(UOverlay*)                                 _01_NotSpeaking                                             OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UOverlay*)                                 _02_Speaking                                                OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UOverlay*)                                 _03_Muted                                                   OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          MicStateSwitcher                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(bool)                                      bIsMuted                                                    OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(bool)                                      bIsTalking                                                  OFFSET(get<bool>, {0x329, 1, 0, 0})


	/// Functions
	// Function /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C.OnPlayerTalkingChanged
	// void OnPlayerTalkingChanged(bool bIsTalking);                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C.OnPlayerMuted
	// void OnPlayerMuted(bool bIsMuted);                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/MicIndicator/MicIndicator.MicIndicator_C.ExecuteUbergraph_MicIndicator
	// void ExecuteUbergraph_MicIndicator(int32_t EntryPoint);                                                                  // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Subtitles/Subtitles.Subtitles_C
/// Size: 0x0008 (0x000310 - 0x000318)
class USubtitles_C : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(USubtitleDisplay*)                         SubtitleDisplay                                             OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C
/// Size: 0x0008 (0x000328 - 0x000330)
class UBuildWatermark_C : public UFortBuildWatermark
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.HandlePartyJoined
	// void HandlePartyJoined();                                                                                                // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
	// void HandlePlayerStateChanged(FFortTeamMemberInfo& PlayerInfo);                                                          // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Watermark/BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
	// void ExecuteUbergraph_BuildWatermark(int32_t EntryPoint);                                                                // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C
/// Size: 0x0040 (0x0002F0 - 0x000330)
class ULegacy_MovieWidget_C : public UFortMovieWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F0, 8, 0, 0})
	CMember(UImage*)                                   Video_Image                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UScaleBox*)                                Video_ScaleBox                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      shouldloop                                                  OFFSET(get<bool>, {0x308, 1, 0, 0})
	DMember(bool)                                      AutoPlay                                                    OFFSET(get<bool>, {0x309, 1, 0, 0})
	DMember(bool)                                      MaintainAspectRatio                                         OFFSET(get<bool>, {0x30A, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaReadyToPlay                                          OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaFailedToOpen                                         OFFSET(getStruct<T>, {0x320, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues
	// void SetDelayedContentValues();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.Play
	// void Play(bool ShouldRewind);                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying
	// void StopPlaying();                                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.Init
	// void Init(UMediaPlayer* InMediaPlayer, UMediaSource* InMediaSource, UObject* InMediaSoundWave, int32_t AudioTrack);      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated
	// void MediaDimensionsUpdated(float NewWidth, float NewHeight);                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded
	// void OnMediaLoaded();                                                                                                    // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget
	// void ExecuteUbergraph_Legacy_MovieWidget(int32_t EntryPoint);                                                            // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature
	// void OnMediaFailedToOpen__DelegateSignature();                                                                           // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Movie/Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
	// void OnMediaReadyToPlay__DelegateSignature();                                                                            // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UMicIndicator_C*)                          MicIndicator                                                OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              SwitcherConnectingStranger                                  OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextPlayerName                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FFortTeamMemberInfo)                       MemberInfo                                                  OFFSET(getStruct<T>, {0x300, 592, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C.Update
	// void Update(FFortTeamMemberInfo UpdatedMemberInfo);                                                                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/Cinematic-TeamMics.Cinematic-TeamMics_C.ExecuteUbergraph_Cinematic-TeamMics
	// void ExecuteUbergraph_Cinematic-TeamMics(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C
/// Size: 0x0028 (0x000310 - 0x000338)
class UTeamMicStack_C : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x310, 8, 0, 0})
	CMember(UVerticalBox*)                             _Vertical_Box__Team_Members                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonBorder*)                            BorderFrame                                                 OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(TArray<UCinematic-TeamMics_C*>)            TeamMembers                                                 OFFSET(get<T>, {0x328, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.ClearContents
	// void ClearContents();                                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.AppendTeamMember
	// void AppendTeamMember(FFortTeamMemberInfo& TeamMemberInfo);                                                              // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.HandleTeamMemberChanged
	// void HandleTeamMemberChanged(FFortTeamMemberInfo Member Info);                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.HandleTeamMemberRemoved
	// void HandleTeamMemberRemoved(int32_t Member Index);                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.HandlePartyLeft
	// void HandlePartyLeft();                                                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/MicIndicator/TeamMicStack.TeamMicStack_C.ExecuteUbergraph_TeamMicStack
	// void ExecuteUbergraph_TeamMicStack(int32_t EntryPoint);                                                                  // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C
/// Size: 0x0059 (0x0005A8 - 0x000601)
class UCinematic_C : public UFortUIStateWidget_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1537;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5A8, 8, 0, 0})
	CMember(UNamedSlot*)                               LocalizedAudioOnlyMovieSlot                                 OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UCommonWidgetStackLegacy*)                 MainContentStack                                            OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UNamedSlot*)                               MovieSlot                                                   OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UOverlay*)                                 OverlayMovieOverlay                                         OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(USubtitles_C*)                             Subtitles                                                   OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UTeamMicStack_C*)                          TeamMicStack                                                OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UBuildWatermark_C*)                        Widget_BuildWatermark                                       OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(ULegacy_MovieWidget_C*)                    MovieWidget                                                 OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UFortMediaSubtitlesPlayer*)                SubtitlesPlayer                                             OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UObject*)                                  CinematicMediaSoundWave                                     OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bFinished                                                   OFFSET(get<bool>, {0x600, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.GetAudioTrackIndex
	// void GetAudioTrackIndex(int32_t& AudioTrack);                                                                            // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.StopAndClearSubtitles
	// void StopAndClearSubtitles();                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearOldSubtitlesIfNecessary
	// void ClearOldSubtitlesIfNecessary(bool NewSubtitlesExist, UFortMediaSubtitlesPlayer* NewSubtitles);                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.SetMoviePlaying
	// void SetMoviePlaying(bool MoviePlaying);                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearMovieWidget
	// void ClearMovieWidget(UFortMovieWidget*& MovieWidgetToClear);                                                            // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearMovieSlot
	// void ClearMovieSlot();                                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.PopContentWidgetInternal
	// UWidget* PopContentWidgetInternal(FContentPushState State);                                                              // [0x1ebf994] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.SkipMovie
	// void SkipMovie();                                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ClearMovie
	// void ClearMovie();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.Show Movie
	// void Show Movie(UMediaPlayer* MediaPlayer, UMediaSource* MediaSource);                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.HandleClientEvent_QueueCinematic
	// void HandleClientEvent_QueueCinematic(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);         // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.HandleEndReached
	// void HandleEndReached();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.HandleClientEvent_SkipCinematic
	// void HandleClientEvent_SkipCinematic(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);          // [0x1ebf994] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.PushContentWidgetInternal
	// void PushContentWidgetInternal(UWidget* Widget, FContentPushState State);                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.OnEnterState
	// void OnEnterState(EFortUIState PreviousUIState);                                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.OnExitState
	// void OnExitState(EFortUIState NextUIState);                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/Cinematic.Cinematic_C.ExecuteUbergraph_Cinematic
	// void ExecuteUbergraph_Cinematic(int32_t EntryPoint);                                                                     // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-S-B-S.TextStyle-Base-S-B-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_S_B_S_C : public UTextStyle_Base_S_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1480, 8, 0, 0})
	CMember(UBorder*)                                  Border_InputActionCircle                                    OFFSET(get<T>, {0x1488, 8, 0, 0})
	CMember(UImage*)                                   Image_Checkbox                                              OFFSET(get<T>, {0x1490, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Select                                    OFFSET(get<T>, {0x1498, 8, 0, 0})
	SMember(FSlateBrush)                               Brush_RadioUnchecked                                        OFFSET(getStruct<T>, {0x14A0, 192, 0, 0})
	SMember(FSlateBrush)                               Brush_RadioChecked                                          OFFSET(getStruct<T>, {0x1560, 192, 0, 0})
	SMember(FSlateBrush)                               Brush_CheckboxUnchecked                                     OFFSET(getStruct<T>, {0x1620, 192, 0, 0})
	SMember(FSlateBrush)                               Brush_CheckboxChecked                                       OFFSET(getStruct<T>, {0x16E0, 192, 0, 0})
	CMember(TEnumAsByte<EFortPlayerSurveyResponseChoiceType>) ChoiceType                                           OFFSET(get<T>, {0x17A0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.Update Text Scale
	// void Update Text Scale();                                                                                                // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.GetCurrentButtonBrush
	// void GetCurrentButtonBrush(FSlateBrush& CurrentBrush);                                                                   // [0x1ebf994] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateChoiceImage
	// void UpdateChoiceImage();                                                                                                // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateInputActionRenderOpacity
	// void UpdateInputActionRenderOpacity();                                                                                   // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.UpdateButtonColor
	// void UpdateButtonColor();                                                                                                // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.SetChoiceType
	// void SetChoiceType(TEnumAsByte<EFortPlayerSurveyResponseChoiceType> Type);                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnSurveyResetChoice
	// void OnSurveyResetChoice();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyResponseChoice.PlayerSurveyResponseChoice_C.ExecuteUbergraph_PlayerSurveyResponseChoice
	// void ExecuteUbergraph_PlayerSurveyResponseChoice(int32_t EntryPoint);                                                    // [0x1ebf994] Final                
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UPlayerSurveyVerticalIndicator_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Move                                      OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C.UpdateGamepadControlsVisibility
	// void UpdateGamepadControlsVisibility();                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C.BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
	// void BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyVerticalIndicator.PlayerSurveyVerticalIndicator_C.ExecuteUbergraph_PlayerSurveyVerticalIndicator
	// void ExecuteUbergraph_PlayerSurveyVerticalIndicator(int32_t EntryPoint);                                                 // [0x1ebf994] Final                
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UPlayerSurveyOrthogonalIndicator_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Move                                      OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C.UpdateGamepadControlsVisibility
	// void UpdateGamepadControlsVisibility();                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C.BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
	// void BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyOrthogonalIndicator.PlayerSurveyOrthogonalIndicator_C.ExecuteUbergraph_PlayerSurveyOrthogonalIndicator
	// void ExecuteUbergraph_PlayerSurveyOrthogonalIndicator(int32_t EntryPoint);                                               // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-20-Black.TextStyle-BurbankSmall-20-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_20_Black_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C
/// Size: 0x0040 (0x000438 - 0x000478)
class UPlayerSurveyMultipleChoiceResponse_C : public UFortPlayerSurveyMultipleChoiceResponseBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x438, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_OrthogonalIndicator                                 OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_VerticalIndicator                                   OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UPlayerSurveyOrthogonalIndicator_C*)       PlayerSurveyOrthogonalIndicator                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UPlayerSurveyVerticalIndicator_C*)         PlayerSurveyVerticalIndicator                               OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Responses                                           OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(double)                                    BaseColumnWidth                                             OFFSET(get<double>, {0x468, 8, 0, 0})
	DMember(double)                                    AdditionalColumnWidth                                       OFFSET(get<double>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.SetNumberOfResponses
	// void SetNumberOfResponses(int32_t NumberOfResponses);                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyMultipleChoiceResponse.PlayerSurveyMultipleChoiceResponse_C.ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse
	// void ExecuteUbergraph_PlayerSurveyMultipleChoiceResponse(int32_t EntryPoint);                                            // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_20_White50pc.TextStyle_BurbSmBk_20_White50pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_20_White50pc_C : public UTextStyle_BaseParent_C
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

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/TextStyle_BurbSmBk_20_White.TextStyle_BurbSmBk_20_White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbSmBk_20_White_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

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

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C
/// Size: 0x0040 (0x000438 - 0x000478)
class UPlayerSurveySingleChoiceResponse_C : public UFortPlayerSurveySingleChoiceResponseBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x438, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_OrthogonalIndicator                                 OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_VerticalIndicator                                   OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UPlayerSurveyOrthogonalIndicator_C*)       PlayerSurveyOrthogonalIndicator                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UPlayerSurveyVerticalIndicator_C*)         PlayerSurveyVerticalIndicator                               OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Responses                                           OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(double)                                    BaseColumnWidth                                             OFFSET(get<double>, {0x468, 8, 0, 0})
	DMember(double)                                    AdditionalColumnWidth                                       OFFSET(get<double>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.SetNumberOfResponses
	// void SetNumberOfResponses(int32_t NumberOfResponses);                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveySingleChoiceResponse.PlayerSurveySingleChoiceResponse_C.ExecuteUbergraph_PlayerSurveySingleChoiceResponse
	// void ExecuteUbergraph_PlayerSurveySingleChoiceResponse(int32_t EntryPoint);                                              // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UPlayerSurveyHorizontalIndicator_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Move                                      OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.UpdateGamepadControlsVisibility
	// void UpdateGamepadControlsVisibility();                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
	// void BndEvt__InputActionWidget_Move_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyHorizontalIndicator.PlayerSurveyHorizontalIndicator_C.ExecuteUbergraph_PlayerSurveyHorizontalIndicator
	// void ExecuteUbergraph_PlayerSurveyHorizontalIndicator(int32_t EntryPoint);                                               // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Text/TextStyle_BurbankSmall_M_White.TextStyle_BurbankSmall_M_White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_M_White_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1480, 8, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget_Select                                    OFFSET(get<T>, {0x1488, 8, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.GetCurrentButtonBrush
	// void GetCurrentButtonBrush(FSlateBrush& CurrentBrush);                                                                   // [0x1ebf994] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateInputActionRenderOpacity
	// void UpdateInputActionRenderOpacity();                                                                                   // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.UpdateTextStyle
	// void UpdateTextStyle();                                                                                                  // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnSurveyResetChoice
	// void OnSurveyResetChoice();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingChoice.PlayerSurveyRatingChoice_C.ExecuteUbergraph_PlayerSurveyRatingChoice
	// void ExecuteUbergraph_PlayerSurveyRatingChoice(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
};

/// Class /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C
/// Size: 0x0010 (0x000430 - 0x000440)
class UPlayerSurveyRatingResponse_C : public UFortPlayerSurveyRatingResponseBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x430, 8, 0, 0})
	CMember(UPlayerSurveyHorizontalIndicator_C*)       PlayerSurveyHorizontalIndicator                             OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.OnResponsesSet_BP
	// void OnResponsesSet_BP();                                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/PlayerSurvey/Widgets/PlayerSurveyRatingResponse.PlayerSurveyRatingResponse_C.ExecuteUbergraph_PlayerSurveyRatingResponse
	// void ExecuteUbergraph_PlayerSurveyRatingResponse(int32_t EntryPoint);                                                    // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(UBillboardComponent*)                      Billboard                                                   OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      DisableOnStartup                                            OFFSET(get<bool>, {0x2A8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame
	// void IsEnabledForCurrentSubgame(bool& bEnabled);                                                                         // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
	// void Camera_DisableEffects();                                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
	// void FrontEndCameraSwitch();                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch
	// void ExecuteCameraSwitch();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
	// void ExecuteUbergraph_TVPostProcessBP(int32_t EntryPoint);                                                               // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C
/// Size: 0x002F (0x0002A9 - 0x0002D8)
class ATVPostProcessBPAthena_C : public ATVPostProcessBP_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2B0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    FullScreenTVPP_OnlyMaterialModified                         OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(float)                                     FrontEndCameraSwitchFadeAthena_SwipeLines_Animation_8828A7EA43DFA9153F986F805918F9F7 OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     FrontEndCameraSwitchFadeAthena_PostProcessVisibility_8828A7EA43DFA9153F986F805918F9F7 OFFSET(get<float>, {0x2C4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FrontEndCameraSwitchFadeAthena__Direction_8828A7EA43DFA9153F986F805918F9F7 OFFSET(get<T>, {0x2C8, 1, 0, 0})
	CMember(UTimelineComponent*)                       FrontEndCameraSwitchFadeAthena                              OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame
	// void IsEnabledForCurrentSubgame(bool& bEnabled);                                                                         // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc
	// void FrontEndCameraSwitchFadeAthena__FinishedFunc();                                                                     // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc
	// void FrontEndCameraSwitchFadeAthena__UpdateFunc();                                                                       // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch
	// void ExecuteCameraSwitch();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects
	// void Camera_DisableEffects();                                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena
	// void ExecuteUbergraph_TVPostProcessBPAthena(int32_t EntryPoint);                                                         // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C
/// Size: 0x0010 (0x000A00 - 0x000A10)
class AFrontendCamera_Manage_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 OFFSET(get<T>, {0xA08, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Manage.FrontendCamera_Manage_C.ExecuteUbergraph_FrontendCamera_Manage
	// void ExecuteUbergraph_FrontendCamera_Manage(int32_t EntryPoint);                                                         // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C
/// Size: 0x0050 (0x000508 - 0x000558)
class ULoginScreen_C : public UFortUIStateWidget_Login
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x508, 8, 0, 0})
	CMember(UConsoleProfileWidget_C*)                  ConsoleProfileWidget                                        OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UImage*)                                   DarkBacking                                                 OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UOverlay*)                                 KeyArt_Group                                                OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UImage*)                                   KeyArtBackground                                            OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UImage*)                                   KeyArtBackground_For_Blur                                   OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Version                                                OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UBuildWatermark_C*)                        Widget_BuildWatermark                                       OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UWidget*)                                  PlatformSpecificBackBorder                                  OFFSET(get<T>, {0x550, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature
	// void BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature();      // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.SetKeyArtVisibility
	// void SetKeyArtVisibility(int32_t NewActiveWidgetIndex);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen
	// void ExecuteUbergraph_LoginScreen(int32_t EntryPoint);                                                                   // [0x1ebf994] Final|HasDefaults    
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
	CMember(UImage*)                                   FortniteLogo                                                OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C
/// Size: 0x0010 (0x000438 - 0x000448)
class UCorrectiveActionDateOfBirthScreen_C : public UFortCorrectiveActionDateOfBirthScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x438, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AgeEntryChallengeError                                 OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowFailureReason
	// void OnShowFailureReason(FText& FailureReason);                                                                          // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowCorrectiveActionProcessing
	// void OnShowCorrectiveActionProcessing(bool bShowProcessing);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.ExecuteUbergraph_CorrectiveActionDateOfBirthScreen
	// void ExecuteUbergraph_CorrectiveActionDateOfBirthScreen(int32_t EntryPoint);                                             // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C
/// Size: 0x0010 (0x000418 - 0x000428)
class UCorrectiveActionGuardianEmailScreen_C : public UFortCorrectiveActionGuardianEmailScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x418, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_EmailEntryChallengeError                               OFFSET(get<T>, {0x420, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowFailureReason
	// void OnShowFailureReason(FText& FailureReason);                                                                          // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowCorrectiveActionProcessing
	// void OnShowCorrectiveActionProcessing(bool bShowProcessing);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.ExecuteUbergraph_CorrectiveActionGuardianEmailScreen
	// void ExecuteUbergraph_CorrectiveActionGuardianEmailScreen(int32_t EntryPoint);                                           // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C
/// Size: 0x0018 (0x000418 - 0x000430)
class UCorrectiveActionDisplayNameScreen_C : public UFortCorrectiveActionDisplayNameScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   Image_DisplayNameEntrySpinner                               OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_DisplayNameEntryError                                  OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowFailureReason
	// void OnShowFailureReason(FText& FailureReason);                                                                          // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowCorrectiveActionProcessing
	// void OnShowCorrectiveActionProcessing(bool bShowProcessing);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowDisplayNameDownloading
	// void OnShowDisplayNameDownloading(bool bShowDownloading);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.ExecuteUbergraph_CorrectiveActionDisplayNameScreen
	// void ExecuteUbergraph_CorrectiveActionDisplayNameScreen(int32_t EntryPoint);                                             // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C
/// Size: 0x0060 (0x000530 - 0x000590)
class USplashScreenWidget_C : public UFortSplashScreenWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x530, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Loud_C*)                 Button_PressToStart                                         OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonLazyImage*)                         I_Fortnite                                                  OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(FText)                                     GamepadText                                                 OFFSET(getStruct<T>, {0x548, 24, 0, 0})
	SMember(FText)                                     MouseText                                                   OFFSET(getStruct<T>, {0x560, 24, 0, 0})
	SMember(FText)                                     MobileText                                                  OFFSET(getStruct<T>, {0x578, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget
	// void ExecuteUbergraph_SplashScreenWidget(int32_t EntryPoint);                                                            // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(UOverlay*)                                 ModeSelect                                                  OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UProgressModalWidget_C*)                   LeavingMatchmakingDialog                                    OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Keyart                                                  OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(TArray<UTexture*>)                         TextureCycle                                                OFFSET(get<T>, {0x490, 16, 0, 0})
	DMember(int32_t)                                   TextureCycleIndex                                           OFFSET(get<int32_t>, {0x4A0, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.IsMinorShutdownWarningEnabled
	// void IsMinorShutdownWarningEnabled(bool& Enabled);                                                                       // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.IsBusyMatchmaking
	// bool IsBusyMatchmaking();                                                                                                // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.AdvanceTextureCycle
	// void AdvanceTextureCycle();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.InitializeTextureCycle
	// void InitializeTextureCycle();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.OnEventEnded_57187EC14A536D0960088EB25BDF39E5
	// void OnEventEnded_57187EC14A536D0960088EB25BDF39E5(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.OnEventUpdated_57187EC14A536D0960088EB25BDF39E5
	// void OnEventUpdated_57187EC14A536D0960088EB25BDF39E5(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.OnEventActive_57187EC14A536D0960088EB25BDF39E5
	// void OnEventActive_57187EC14A536D0960088EB25BDF39E5(FString EventName, FTimespan TimeUntilEnd, FTimespan TimeSinceBegin, float TimespanRatio); // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameSelectScreen.SubgameSelectScreen_C.ExecuteUbergraph_SubgameSelectScreen
	// void ExecuteUbergraph_SubgameSelectScreen(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
};

/// Class /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C
/// Size: 0x0034 (0x000480 - 0x0004B4)
class UCampaignPurchaseScreen_C : public UFortCampaignPurchaseScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1204;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x480, 8, 0, 0})
	CMember(UWidgetAnimation*)                         SwitchTextures                                              OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Keyart                                                  OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FTimerHandle)                              CycleTimer                                                  OFFSET(getStruct<T>, {0x498, 8, 0, 0})
	CMember(TArray<UTexture*>)                         TextureCycle                                                OFFSET(get<T>, {0x4A0, 16, 0, 0})
	DMember(int32_t)                                   TextureCycleIndex                                           OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsMinorShutdownWarningEnabled
	// void IsMinorShutdownWarningEnabled(bool& Enabled);                                                                       // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeRedeemButton
	// void InitializeRedeemButton();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.IsBusyMatchmaking
	// bool IsBusyMatchmaking();                                                                                                // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.Update
	// void Update();                                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.AdvanceTextureCycle
	// void AdvanceTextureCycle();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.InitializeTextureCycle
	// void InitializeTextureCycle();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.ToggleTimer
	// void ToggleTimer(bool Enabled);                                                                                          // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature
	// void BndEvt__ButtonBack_K2Node_ComponentBoundEvent_128_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnImageCycleTimeElapsed
	// void OnImageCycleTimeElapsed();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.OnStoreScreenCreated
	// void OnStoreScreenCreated(UFortMtxStoreRootBase_Legacy* StoreScreen);                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/CampaignPurchaseScreen.CampaignPurchaseScreen_C.ExecuteUbergraph_CampaignPurchaseScreen
	// void ExecuteUbergraph_CampaignPurchaseScreen(int32_t EntryPoint);                                                        // [0x1ebf994] Final                
};

/// Class /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C
/// Size: 0x00C1 (0x0005E0 - 0x0006A1)
class UStoreMain_Root_Legacy_C : public UFortMtxStoreRootBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1697;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder                                                OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UCommonBorder*)                            Container_AvailableAmount                                   OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UCommonBorder*)                            CurrencyNotificationBorder                                  OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CurrencyNotificationText                                    OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox                                               OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UInfoFlag_C*)                              InfoFlag                                                    OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UGridPanel*)                               NewLTMGrid                                                  OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UVerticalBox*)                             NEWLTMOfferSection                                          OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonBorder*)                            NewNoOffersBox                                              OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UCommonBorder*)                            NewPurchasingDisabledBox                                    OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   NewSpinner                                                  OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              NewSwitcherItemsProgress                                    OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UGridPanel*)                               NewVBuckGrid                                                OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UVerticalBox*)                             NewVbuckOffers                                              OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UVerticalBox*)                             NewVBuckSection                                             OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UScaleBox*)                                OfferScaleBoxRoot                                           OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay                                                     OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(USimpleMTXDisplay_C*)                      SimpleMTXDisplay                                            OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UStore_BannerMessage_C*)                   StoreBannerMessage                                          OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UAudioComponent*)                          Ambient_Sound                                               OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(UWidget*)                                  InitiallyFocusedOffer                                       OFFSET(get<T>, {0x698, 8, 0, 0})
	DMember(bool)                                      bShowingCampaignUpsell                                      OFFSET(get<bool>, {0x6A0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.BP_GetDesiredFocusTarget
	// UWidget* BP_GetDesiredFocusTarget();                                                                                     // [0x1ebf994] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.GetVisibilityByChildrenPresence
	// void GetVisibilityByChildrenPresence(UPanelWidget* Panel, ESlateVisibility& NewParam);                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleAllOffersGenerated
	// void HandleAllOffersGenerated();                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleGenerateOffer
	// void HandleGenerateOffer(UFortStoreFrontOfferInfo* OfferInfo);                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.PlayEquippedLockerMusic
	// void PlayEquippedLockerMusic();                                                                                          // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleBack
	// void HandleBack(bool& PassThrough);                                                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.HandleRedeem
	// void HandleRedeem(bool& bPassThrough);                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.SetupForCampaignUpsell
	// void SetupForCampaignUpsell();                                                                                           // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.SetupFirstFocusableTile
	// void SetupFirstFocusableTile();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.LayoutVBuckTiles
	// void LayoutVBuckTiles();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Start Ambient Sound
	// void Start Ambient Sound(bool Condition);                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.UpdateCurrencyNotification
	// void UpdateCurrencyNotification();                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Focus
	// void Focus();                                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.NoOffersAvailable
	// void NoOffersAvailable();                                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnOffersGenerated
	// void OnOffersGenerated();                                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.ClearOfferWidgets
	// void ClearOfferWidgets();                                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnUpdateOtherPlatformMTXMessage
	// void OnUpdateOtherPlatformMTXMessage(bool HasOtherPlatformCurrency, FText& CurrencyMessageLocText);                      // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.GenerateOfferWidget
	// void GenerateOfferWidget(UFortStoreFrontOfferInfo* OfferData);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnPurchasingDisabled
	// void OnPurchasingDisabled();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnTransitionedBySwitcher
	// void OnTransitionedBySwitcher();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnStartReadingOffers
	// void OnStartReadingOffers();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.OnMainTabSelected
	// void OnMainTabSelected(FName TabName);                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_Root_Legacy.StoreMain_Root_Legacy_C.ExecuteUbergraph_StoreMain_Root_Legacy
	// void ExecuteUbergraph_StoreMain_Root_Legacy(int32_t EntryPoint);                                                         // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C
/// Size: 0x0148 (0x001500 - 0x001648)
class UStoreMain_MTXOffer_C : public UFortRealMoneyOffer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5704;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1500, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Linear                                                OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UWidgetAnimation*)                         UnhoverNew                                                  OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoverNew                                                    OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UMTXOffer_SpecialBanner_C*)                AthenaDirectAcquisitionOffer_SpecialBanner                  OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UImage*)                                   BaseColor                                                   OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UBorder*)                                  BonusTag                                                    OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BonusText                                                   OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UBorder*)                                  Border_Footer                                               OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UBorder*)                                  BorderAll                                                   OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BundleTotalQuantity                                         OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BundleVBucksText                                            OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CurrencyTotalQuantity                                       OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UHorizontalBox*)                           HBox_Price                                                  OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UImage*)                                   HoverBorder                                                 OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UImage*)                                   KeyArt                                                      OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UImage*)                                   OverlayGradient                                             OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UOverlay*)                                 OverlaySalePrice                                            OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UImage*)                                   PlayStationStoreLogo                                        OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Plus                                                        OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UVerticalBox*)                             RMTBundle                                                   OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(UVerticalBox*)                             RMTCurrency                                                 OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          RMTTypeSwitcher                                             OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           RMTVBucksHB                                                 OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBoxKeyArt                                              OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Price                                              OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferDisplayPrice                                       OFFSET(get<T>, {0x15E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferName                                               OFFSET(get<T>, {0x15E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferPurchaseUnvailable                                 OFFSET(get<T>, {0x15F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOriginalPrice                                           OFFSET(get<T>, {0x15F8, 8, 0, 0})
	CMember(USizeBox*)                                 TileSize                                                    OFFSET(get<T>, {0x1600, 8, 0, 0})
	CMember(UCommonTextBlock*)                         VBucksText                                                  OFFSET(get<T>, {0x1608, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  AboutToShowDetails                                          OFFSET(getStruct<T>, {0x1610, 16, 0, 0})
	DMember(bool)                                      bCanSetPrice                                                OFFSET(get<bool>, {0x1620, 1, 0, 0})
	CMember(UCatalogMessaging*)                        CatalogMessaging                                            OFFSET(get<T>, {0x1628, 8, 0, 0})
	SMember(FText)                                     OverrideBannerText                                          OFFSET(getStruct<T>, {0x1630, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetOverrideBannerText
	// void SetOverrideBannerText(FText InOverrideBannerText);                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.UpdateBannerText
	// void UpdateBannerText();                                                                                                 // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.GetBonusText
	// void GetBonusText(UFortStoreFrontOfferInfo* OfferInfo, FText& BonusText);                                                // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTextOutlineColor
	// void SetTextOutlineColor(UTextBlock* Text, FFortMtxGradient Gradient);                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.SetTileSize
	// void SetTileSize(EFortMtxOfferDisplaySize DisplaySize);                                                                  // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerReset
	// void TriggerReset();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitialReset
	// void InitialReset();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.TriggerIntro
	// void TriggerIntro();                                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.InitOffer
	// void InitOffer();                                                                                                        // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferSet
	// void OnOfferSet();                                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnUpdateStorePrice
	// void OnUpdateStorePrice(FText& InStorePrice);                                                                            // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnStoreSelectionOfferSet
	// void OnStoreSelectionOfferSet();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.OnOfferTileBrushLoaded
	// void OnOfferTileBrushLoaded(FSlateBrush& OfferBrush);                                                                    // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.ExecuteUbergraph_StoreMain_MTXOffer
	// void ExecuteUbergraph_StoreMain_MTXOffer(int32_t EntryPoint);                                                            // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Frontend/StoreMain/StoreMain_MTXOffer.StoreMain_MTXOffer_C.AboutToShowDetails__DelegateSignature
	// void AboutToShowDetails__DelegateSignature();                                                                            // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C
/// Size: 0x0138 (0x0008B0 - 0x0009E8)
class UStoreMain_OfferDetails_C : public UFortRealMoneyOfferDetails
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2536;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	CMember(UImage*)                                   BaseColor                                                   OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(UImage*)                                   BaseColorDetails                                            OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           BonusMTXArea                                                OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(UCommonBorder*)                            BorderDisclaimer                                            OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonText_BaseQuantity                                     OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonText_BonusQuantity                                    OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(UImage*)                                   Highlight                                                   OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_CurrencyIcon                                          OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(UCommonLazyImage*)                         KeyArt                                                      OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(USizeBox*)                                 MTXArea                                                     OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_VBucks                                              OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(UImage*)                                   OverlayGradient                                             OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(UImage*)                                   OverlayGradientDetails                                      OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(UOverlay*)                                 OverlaySalePrice                                            OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(USafeZone*)                                SafeZoneCloseButton                                         OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(USafeZone*)                                SafeZoneMTX                                                 OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(UStoreMain_OfferDetailsAttribute_C*)       StoreMain_OfferDetailsAttribute1                            OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(UStoreMain_OfferDetailsAttribute_C*)       StoreMain_OfferDetailsAttribute2                            OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextDescription                                             OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextName                                                    OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOfferDisplayPrice                                       OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextOriginalPrice                                           OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_MtxContainer                                           OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(UVerticalBox*)                             VBoxOfferInfo                                               OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(UImage*)                                   VBuckHighlight                                              OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UWBP_ContentPurchaseBlocker_C*)            WBP_ContentPurchaseBlocker                                  OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(TMap<int32_t, UFortMtxOfferData*>)         ABAssetCollection                                           OFFSET(get<T>, {0x988, 80, 0, 0})
	DMember(bool)                                      isContentBlocked                                            OFFSET(get<bool>, {0x9D8, 1, 0, 0})
	CMember(UFortMtxOfferData*)                        DisplayAsset                                                OFFSET(get<T>, {0x9E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.ContentBlocked
	// void ContentBlocked(bool isContentBlocked, FText Content Blocked Text);                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetupCurrencyImage
	// void SetupCurrencyImage();                                                                                               // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseButton
	// void UpdatePurchaseButton();                                                                                             // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitDetailAttributes
	// void InitDetailAttributes();                                                                                             // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetPurchaseButtonText
	// void SetPurchaseButtonText(FText ButtonText);                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.IsGiftingStorefrontOffer
	// bool IsGiftingStorefrontOffer();                                                                                         // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.GetCurrencyABAssetFromQuantity
	// void GetCurrencyABAssetFromQuantity(int32_t Quantity, UFortMtxOfferData*& DataAsset);                                    // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitCurrency
	// void InitCurrency();                                                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.InitStoreTypeVisuals
	// void InitStoreTypeVisuals();                                                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.UnregisterInput
	// void UnregisterInput();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.RegisterInput
	// void RegisterInput();                                                                                                    // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.PopDetails
	// void PopDetails();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.HandleBack
	// void HandleBack(bool& PassThrough);                                                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnLoaded_28384CAD450E607DCE5E079C601D083C
	// void OnLoaded_28384CAD450E607DCE5E079C601D083C(UObject* Loaded);                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0
	// void OnLoaded_8B6F4A804D215DC25DE60DB2A90E3BD0(UObject* Loaded);                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.Init
	// void Init();                                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.ResetPurchaseButtonText
	// void ResetPurchaseButtonText();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.OnPurchasingStarted
	// void OnPurchasingStarted();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnOfferSet
	// void BP_OnOfferSet();                                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.UpdatePurchaseBlocked
	// void UpdatePurchaseBlocked(bool bIsBlocked, FText& PurchaseNotAllowedReason);                                            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.SetMtxButtonVisible
	// void SetMtxButtonVisible(bool bVisible);                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetails.StoreMain_OfferDetails_C.ExecuteUbergraph_StoreMain_OfferDetails
	// void ExecuteUbergraph_StoreMain_OfferDetails(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UWBP_ContentPurchaseBlocker_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Mobile                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Loud_C*)                 WBP_UIKit_Button_Loud                                       OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FText)                                     Text_Details                                                OFFSET(getStruct<T>, {0x2D0, 24, 0, 0})
	DMember(int32_t)                                   Max_Width                                                   OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ParentalControlsScreenClass                                 OFFSET(get<T>, {0x2F0, 32, 0, 0})


	/// Functions
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.SetVisuals
	// void SetVisuals(int32_t MaxWidth);                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Set Data
	// void Set Data(FText InText);                                                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.OnComplete_EDE27478404080C54EDC0D863BB58408
	// void OnComplete_EDE27478404080C54EDC0D863BB58408(UUserWidget* UserWidget);                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
	// void BndEvt__WBP_ContentPurchaseBlocker_WBP_UIKit_Button_Loud_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType bNewInputType);                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_ContentPurchaseBlocker.WBP_ContentPurchaseBlocker_C.ExecuteUbergraph_WBP_ContentPurchaseBlocker
	// void ExecuteUbergraph_WBP_ContentPurchaseBlocker(int32_t EntryPoint);                                                    // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Inspect.FrontendCamera_Inspect_C
/// Size: 0x0010 (0x000A00 - 0x000A10)
class AFrontendCamera_Inspect_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 OFFSET(get<T>, {0xA08, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Inspect.FrontendCamera_Inspect_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Inspect.FrontendCamera_Inspect_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Inspect.FrontendCamera_Inspect_C.ExecuteUbergraph_FrontendCamera_Inspect
	// void ExecuteUbergraph_FrontendCamera_Inspect(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/AccountSelect/LoginCredentialSelect.LoginCredentialSelect_C
/// Size: 0x0068 (0x000440 - 0x0004A8)
class ULoginCredentialSelect_C : public UFortLoginCredentialSelect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher                                        OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Erebus_Title                                                OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ErebusType                                                  OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UImage*)                                   Image1                                                      OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   Image2                                                      OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   Image3                                                      OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UImage*)                                   Image4                                                      OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UImage*)                                   Image5                                                      OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UImage*)                                   Image6                                                      OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UBorder*)                                  TrademarksBorder                                            OFFSET(get<T>, {0x4A0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/AccountSelect/LoginCredentialSelect.LoginCredentialSelect_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/AccountSelect/LoginCredentialSelect.LoginCredentialSelect_C.ExecuteUbergraph_LoginCredentialSelect
	// void ExecuteUbergraph_LoginCredentialSelect(int32_t EntryPoint);                                                         // [0x1ebf994] Final                
};

/// Class /Game/UI/Login/AccountSelect/PlayedBeforeSelect.PlayedBeforeSelect_C
/// Size: 0x0048 (0x000418 - 0x000460)
class UPlayedBeforeSelect_C : public UFortPlayedBeforeSelect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x418, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock1                                            OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher_InviteOnly                             OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UInviteEventTitle_C*)                      InviteEventTitle                                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          LoginType_Switcher                                          OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(USignInWidget_C*)                          SignInWidget                                                OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/AccountSelect/PlayedBeforeSelect.PlayedBeforeSelect_C.OnActivated
	// void OnActivated();                                                                                                      // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/AccountSelect/PlayedBeforeSelect.PlayedBeforeSelect_C.ExecuteUbergraph_PlayedBeforeSelect
	// void ExecuteUbergraph_PlayedBeforeSelect(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C
/// Size: 0x0063 (0x0014C0 - 0x001523)
class USkewButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5411;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Released                                                    OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Pressed                                                     OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   ImageButtonFill                                             OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   ImageShadow                                                 OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UNamedSlot*)                               NamedSlot_ButtonContent                                     OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_SkewBrushes                                         OFFSET(get<T>, {0x14F8, 8, 0, 0})
	SMember(FLinearColor)                              ButtonColor                                                 OFFSET(getStruct<T>, {0x1500, 16, 0, 0})
	SMember(FLinearColor)                              HoverColor                                                  OFFSET(getStruct<T>, {0x1510, 16, 0, 0})
	DMember(bool)                                      Chip                                                        OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(bool)                                      Skew                                                        OFFSET(get<bool>, {0x1521, 1, 0, 0})
	DMember(bool)                                      NoHoverColor                                                OFFSET(get<bool>, {0x1522, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnTouchEnded
	// FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                           // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/SkewButton.SkewButton_C.ExecuteUbergraph_SkewButton
	// void ExecuteUbergraph_SkewButton(int32_t EntryPoint);                                                                    // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/QualitySelection/QualityLevelSelectScreen.QualityLevelSelectScreen_C
/// Size: 0x0048 (0x0005C0 - 0x000608)
class UQualityLevelSelectScreen_C : public UFortQualityLevelSelectScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UQualityModeSelectTile_C*)                 Button_SelectHighQuality                                    OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(USafeZone*)                                Footersafezone                                              OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  OptionMessage                                               OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QualityLevelCalculated                                 OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QualityTitle                                           OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UHorizontalBox*)                           TilesRow                                                    OFFSET(get<T>, {0x600, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectScreen.QualityLevelSelectScreen_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectScreen.QualityLevelSelectScreen_C.ExecuteUbergraph_QualityLevelSelectScreen
	// void ExecuteUbergraph_QualityLevelSelectScreen(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
};

/// Class /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C
/// Size: 0x0091 (0x0014E0 - 0x001571)
class UQualityModeSelectTile_C : public UFortQualityModeTile
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5489;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         InAnOutro                                                   OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ConfirmSeleccion                                            OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         GameModeSelection                                           OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_Recommended                                          OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UImage*)                                   ConfirmSelectionFlash                                       OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UImage*)                                   ConfirmSelectionShine                                       OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UImage*)                                   DisabledGray                                                OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UImage*)                                   SelectedIcon                                                OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UCommonTextBlock*)                         T_Recommended                                               OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Selected                                                OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_AdditionalDownloadSize                            OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_QualityDescription                                OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_QualityLevelName                                  OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_TotalBuildSize                                    OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UImage*)                                   TileArt                                                     OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UImage*)                                   UnhoveredVignette                                           OFFSET(get<T>, {0x1568, 8, 0, 0})
	DMember(bool)                                      bIsRecommendedLevel                                         OFFSET(get<bool>, {0x1570, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.Setup
	// void Setup();                                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.OnSelectedStateChanged
	// void OnSelectedStateChanged(bool bIsSelected);                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.OnSizeInfoReceived
	// void OnSizeInfoReceived();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityModeSelectTile.QualityModeSelectTile_C.ExecuteUbergraph_QualityModeSelectTile
	// void ExecuteUbergraph_QualityModeSelectTile(int32_t EntryPoint);                                                         // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Main.FrontendCamera_Main_C
/// Size: 0x0010 (0x000A00 - 0x000A10)
class AFrontendCamera_Main_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 OFFSET(get<T>, {0xA08, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Main.FrontendCamera_Main_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_Main.FrontendCamera_Main_C.ExecuteUbergraph_FrontendCamera_Main
	// void ExecuteUbergraph_FrontendCamera_Main(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C
/// Size: 0x0088 (0x0002D8 - 0x000360)
class UWBP_ComboBox_C : public UFortComboBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OpenAnim                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoverAnim                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonActionWidget*)                      CommonActionWidget                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UOverlay*)                                 InputActionOverlay                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LabelText                                                   OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   Outline                                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(bool)                                      AlignContentCenter                                          OFFSET(get<bool>, {0x318, 1, 0, 0})
	SMember(FLinearColor)                              OutlineEndColor                                             OFFSET(getStruct<T>, {0x31C, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 OutlineMaterial                                             OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FName)                                     OutlineColorParam                                           OFFSET(getStruct<T>, {0x338, 4, 0, 0})
	CMember(TEnumAsByte<E_UI_InputField_ContentSize>)  ContentSize                                                 OFFSET(get<T>, {0x33C, 1, 0, 0})
	DMember(bool)                                      p_IsFocused                                                 OFFSET(get<bool>, {0x33D, 1, 0, 0})
	DMember(bool)                                      p_IsListOpened                                              OFFSET(get<bool>, {0x33E, 1, 0, 0})
	DMember(bool)                                      p_IsHover                                                   OFFSET(get<bool>, {0x33F, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ArrowMaterial                                               OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FName)                                     ArrowColorParam                                             OFFSET(getStruct<T>, {0x348, 4, 0, 0})
	DMember(bool)                                      p_FocusAnimPlayed                                           OFFSET(get<bool>, {0x34C, 1, 0, 0})
	CMember(USoundBase*)                               HoverSound                                                  OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(USoundBase*)                               ClickSound                                                  OFFSET(get<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SequenceEvent__ENTRYPOINTWBP_ComboBox
	// void SequenceEvent__ENTRYPOINTWBP_ComboBox();                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetActionVisibility
	// void SetActionVisibility();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetText
	// void SetText(FString TextValue);                                                                                         // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetContentSize
	// void SetContentSize();                                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.Set Focus Visual
	// void Set Focus Visual(bool IsFocused);                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.SetContentAlignment
	// void SetContentAlignment();                                                                                              // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature
	// void BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature
	// void BndEvt__WBP_ComboBox_ComboBox_K2Node_ComponentBoundEvent_1_OnOpeningEvent__DelegateSignature();                     // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.RefreshHoverAnim
	// void RefreshHoverAnim();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.PlayClickSound
	// void PlayClickSound();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.OnInputDeviceChanged
	// void OnInputDeviceChanged(ECommonInputType bNewInputType);                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/CorrectiveAction/WBP_ComboBox.WBP_ComboBox_C.ExecuteUbergraph_WBP_ComboBox
	// void ExecuteUbergraph_WBP_ComboBox(int32_t EntryPoint);                                                                  // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C
/// Size: 0x00F1 (0x0002D8 - 0x0003C9)
class UWBP_InputField_C : public UFortInputField
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 969;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ErrorAnim                                                   OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoverAnim                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonActionWidget*)                      CommonActionWidget                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UOverlay*)                                 ErrorIconWrapper                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ErrorText                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UBorder*)                                  ErrorTextWrapper                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         LabelText                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UBorder*)                                  LabelTextWrapper                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Outline                                                     OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ActionWidgetShower                                  OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UOverlay*)                                 ProcessingFeedbackWrapper                                   OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TEnumAsByte<E_UI_InputField_State>)        DebugInputFieldState                                        OFFSET(get<T>, {0x338, 1, 0, 0})
	DMember(bool)                                      ShowLabel                                                   OFFSET(get<bool>, {0x339, 1, 0, 0})
	DMember(bool)                                      AlignContentCenter                                          OFFSET(get<bool>, {0x33A, 1, 0, 0})
	SMember(FText)                                     DefaultLabelValue                                           OFFSET(getStruct<T>, {0x340, 24, 0, 0})
	SMember(FText)                                     ErrorValue                                                  OFFSET(getStruct<T>, {0x358, 24, 0, 0})
	SMember(FText)                                     DefaultHintTextValue                                        OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	SMember(FLinearColor)                              IdleEndColor                                                OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FLinearColor)                              ErrorEndColor                                               OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FLinearColor)                              OutlineEndColor                                             OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 OutlineMaterial                                             OFFSET(get<T>, {0x3B8, 8, 0, 0})
	SMember(FName)                                     OutlineColorParam                                           OFFSET(getStruct<T>, {0x3C0, 4, 0, 0})
	CMember(TEnumAsByte<E_UI_InputField_ContentSize>)  ContentSize                                                 OFFSET(get<T>, {0x3C4, 1, 0, 0})
	DMember(bool)                                      p_IsFocused                                                 OFFSET(get<bool>, {0x3C5, 1, 0, 0})
	DMember(bool)                                      p_IsMouseHovered                                            OFFSET(get<bool>, {0x3C6, 1, 0, 0})
	DMember(bool)                                      p_FocusAnimPlayed                                           OFFSET(get<bool>, {0x3C7, 1, 0, 0})
	DMember(bool)                                      ShowActionOnlyOnFocus                                       OFFSET(get<bool>, {0x3C8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetProcessingVisibility
	// void SetProcessingVisibility(bool IsVisible);                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                           // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetActionVisibility
	// void SetActionVisibility();                                                                                              // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                             // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetContentSize
	// void SetContentSize();                                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.Set Focus Visual
	// void Set Focus Visual(bool IsFocused);                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetLabelValue
	// void SetLabelValue(FText LabelValue);                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetContentAlignment
	// void SetContentAlignment();                                                                                              // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetTextValue
	// void SetTextValue(FText TextValue);                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetLabelDisplay
	// void SetLabelDisplay();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetInputFieldState
	// void SetInputFieldState(TEnumAsByte<E_UI_InputField_State> State);                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnError
	// void OnError();                                                                                                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetEditableText
	// void SetEditableText(FText& EditableText);                                                                               // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetErrorText
	// void SetErrorText(FText& ErrorText);                                                                                     // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.SetHintText
	// void SetHintText(FText& HintText);                                                                                       // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.RefreshHoverAnim
	// void RefreshHoverAnim();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.OnInputDeviceChanged
	// void OnInputDeviceChanged(ECommonInputType bNewInputType);                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/ContentControls/WBP_InputField.WBP_InputField_C.ExecuteUbergraph_WBP_InputField
	// void ExecuteUbergraph_WBP_InputField(int32_t EntryPoint);                                                                // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C
/// Size: 0x0010 (0x0005D0 - 0x0005E0)
class UJoinServer_C : public UFortUIStateWidget_JoinServer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5D0, 8, 0, 0})
	CMember(UBuildWatermark_C*)                        BuildWatermark                                              OFFSET(get<T>, {0x5D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C.OnEnterState
	// void OnEnterState(EFortUIState PreviousUIState);                                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C.OnShowTutorialDialog
	// void OnShowTutorialDialog();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/StateLayouts/JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
	// void ExecuteUbergraph_JoinServer(int32_t EntryPoint);                                                                    // [0x1ebf994] Final                
};

/// Class /Game/UI/JoinServer/RejoinWindow.RejoinWindow_C
/// Size: 0x0038 (0x000598 - 0x0005D0)
class URejoinWindow_C : public UFortRejoinWindowBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(UCommonTextBlock*)                         AutorejoinText                                              OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UHorizontalBox*)                           ButtonBox                                                   OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestAbandon                                            OFFSET(getStruct<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestRejoinRetry                                        OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})


	/// Functions
	// Function /Game/UI/JoinServer/RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
	// void OnRequestRejoinRetry__DelegateSignature();                                                                          // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/JoinServer/RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
	// void OnRequestAbandon__DelegateSignature();                                                                              // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
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

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M_Black.TextStyle-Header-M_Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_Black_C : public UTextStyle_HeaderParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_LDarkBlue.ButtonStyle-Skew_LDarkBlue_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_LDarkBlue_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Frontend/StoreMain/StoreSelectionPopup.StoreSelectionPopup_C
/// Size: 0x0028 (0x000558 - 0x000580)
class UStoreSelectionPopup_C : public UFortMtxStoreSelectionPopup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x558, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UImage*)                                   SpeedLines                                                  OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         StorePrompt_Header                                          OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(USoundBase*)                               WhooshSound                                                 OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/StoreSelectionPopup.StoreSelectionPopup_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreSelectionPopup.StoreSelectionPopup_C.ExecuteUbergraph_StoreSelectionPopup
	// void ExecuteUbergraph_StoreSelectionPopup(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/TopBar/ButtonStyle-Yellow-NewCTA.ButtonStyle-Yellow-NewCTA_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Yellow_NewCTA_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

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

/// Class /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C
/// Size: 0x0068 (0x000560 - 0x0005C8)
class URedeemFriendCodeWindow_C : public UFortRedeemCodeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x560, 8, 0, 0})
	CMember(UCloseButton_C*)                           Button_Cancel                                               OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UIconTextButton_C*)                        CancelButton                                                OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          EntryProgressSwitcher                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UVerticalBox*)                             EntryVBox                                                   OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ErrorText                                                   OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USizeBox*)                                 ProgressSizeBox                                             OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ProgressText                                                OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UVerticalBox*)                             ProgressVBox                                                OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        RedeemButton                                                OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       OFFSET(get<T>, {0x5C0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete
	// void HandleRedeemCodeComplete(bool Success, ERedeemCodeFailureReason FailureReason);                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close
	// void Close();                                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature
	// void BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
	// void BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete
	// void OnRedeemFriendCodeComplete(bool bSuccess, ERedeemCodeFailureReason FailureReason);                                  // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	// void BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(FText& Text);    // [0x1ebf994] HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
	// void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Modals/RedeemCodeWindow/RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow
	// void ExecuteUbergraph_RedeemFriendCodeWindow(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C
/// Size: 0x0078 (0x0002A8 - 0x000320)
class UInfoFlag_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   BG_Gradient                                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox                                                     OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UImage*)                                   Trim                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FLinearColor)                              TrimColor                                                   OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FLinearColor)                              GradientColor                                               OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	DMember(double)                                    TrimWidth                                                   OFFSET(get<double>, {0x2F0, 8, 0, 0})
	SMember(FText)                                     InfoText                                                    OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
	DMember(double)                                    GradientDistance                                            OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(double)                                    MaxWidth                                                    OFFSET(get<double>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.UpdateText
	// void UpdateText(FText& Text);                                                                                            // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.UpdateGradientColor
	// void UpdateGradientColor(FLinearColor Color);                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.UpdateTrimColor
	// void UpdateTrimColor(FLinearColor Color);                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/InfoFlag.InfoFlag_C.ExecuteUbergraph_InfoFlag
	// void ExecuteUbergraph_InfoFlag(int32_t EntryPoint);                                                                      // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C
/// Size: 0x0048 (0x0014D0 - 0x001518)
class UMTXButton_C : public UFortMTXButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Mobile                                                OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Grow                                                  OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover_Bounce                                                OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hover                                                       OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UBorder*)                                  AmountColor                                                 OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UImage*)                                   ButtonBacking                                               OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UImage*)                                   Image_Vbucks                                                OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(USizeBox*)                                 VariableSize                                                OFFSET(get<T>, {0x1510, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C.GetHoverAnimation
	// UWidgetAnimation* GetHoverAnimation();                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/TopBar/MTXButton.MTXButton_C.ExecuteUbergraph_MTXButton
	// void ExecuteUbergraph_MTXButton(int32_t EntryPoint);                                                                     // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-B-S-Red.TextStyle-Base-XS-B-S-Red_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_B_S_Red_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Frontend/StoreMain/Store_BannerMessage.Store_BannerMessage_C
/// Size: 0x0010 (0x0002D8 - 0x0002E8)
class UStore_BannerMessage_C : public UFortStoreBanner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UWidgetAnimation*)                         Ani_Intro                                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UImage*)                                   AnimatingBorder                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/Store_BannerMessage.Store_BannerMessage_C.Pulse
	// void Pulse();                                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
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

/// Class /Game/UI/Frontend/StoreMain/StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UStoreMain_OfferDetailsAttribute_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Name                                                        OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Value                                                       OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FText)                                     AttributeDescription                                        OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})
	SMember(FText)                                     AttributeValue                                              OFFSET(getStruct<T>, {0x308, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/StoreMain_OfferDetailsAttribute.StoreMain_OfferDetailsAttribute_C.ExecuteUbergraph_StoreMain_OfferDetailsAttribute
	// void ExecuteUbergraph_StoreMain_OfferDetailsAttribute(int32_t EntryPoint);                                               // [0x1ebf994] Final                
};

/// Class /Game/UI/Frontend/StoreMain/MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UMTXOffer_SpecialBanner_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_SaleInfo                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HB_BattlePassStarsSupplemental                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Image_BattleStarSupplemental                                OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         T_BattleStarInfoSupplemental                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         T_SaleInfo                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          WidgetSwitcher_Main                                         OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(bool)                                      bShowBanner                                                 OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bHasBattlePassStars                                         OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	SMember(FText)                                     SalesInfoText                                               OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	DMember(int32_t)                                   NumOfBattlePassStars                                        OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	CMember(UCatalogMessaging*)                        CatalogMessaging                                            OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.SetupSpecialOfferBanner
	// void SetupSpecialOfferBanner(bool bHasSale, FText SaleText, FString BannerOverrideTag, bool bHasBattlePassStars, int32_t iNumOfBattlePassStars); // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/MTXOffer_SpecialBanner.MTXOffer_SpecialBanner_C.ExecuteUbergraph_MTXOffer_SpecialBanner
	// void ExecuteUbergraph_MTXOffer_SpecialBanner(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/StoreMain/PurchaseUnavailable.PurchaseUnavailable_C
/// Size: 0x0020 (0x000568 - 0x000588)
class UPurchaseUnavailable_C : public UFortPurchaseUnavailableModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Details                                            OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_HeaderText                                         OFFSET(get<T>, {0x580, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle
	// void OnUpdateTextStyle(FText& OfferDisplayName);                                                                         // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable
	// void ExecuteUbergraph_PurchaseUnavailable(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-70pc.TextStyle-Base-XS-70pc_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_70pc_C : public UTextStyle_Base_XS_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C
/// Size: 0x0049 (0x000430 - 0x000479)
class ULoadingSubGameContentModal_C : public UFortLoadingOnDemandContentModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1145;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x430, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro                                                       OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock_Title                                       OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UProgressBar*)                             DownloadingProgressBar                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UVerticalBox*)                             Modal_VertBox                                               OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Content                                                OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Progress                                               OFFSET(get<T>, {0x470, 8, 0, 0})
	DMember(bool)                                      HasPlayedAnim                                               OFFSET(get<bool>, {0x478, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnUpdatedProgress
	// void OnUpdatedProgress(float Percent);                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.SetCancelButtonText
	// void SetCancelButtonText(FText& InText);                                                                                 // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.OnAnimationFinished
	// void OnAnimationFinished(UWidgetAnimation* Animation);                                                                   // [0x1ebf994] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/LoadingSubGameContentModal.LoadingSubGameContentModal_C.ExecuteUbergraph_LoadingSubGameContentModal
	// void ExecuteUbergraph_LoadingSubGameContentModal(int32_t EntryPoint);                                                    // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/ItemShop/SimpleMTXDisplay.SimpleMTXDisplay_C
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class USimpleMTXDisplay_C : public UFortSimpleMTXDisplay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     AvailableAmountText                                         OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/ItemShop/SimpleMTXDisplay.SimpleMTXDisplay_C.OnUpdateAvailableMTX
	// void OnUpdateAvailableMTX(int32_t AvailableBalance);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/SimpleMTXDisplay.SimpleMTXDisplay_C.ExecuteUbergraph_SimpleMTXDisplay
	// void ExecuteUbergraph_SimpleMTXDisplay(int32_t EntryPoint);                                                              // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C
/// Size: 0x0038 (0x0015F0 - 0x001628)
class USubgameTile_C : public UFortSubgameTile
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x15F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         RevealCMSKeyArt                                             OFFSET(get<T>, {0x15F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         UnFocused                                                   OFFSET(get<T>, {0x1600, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FocusedSecondary                                            OFFSET(get<T>, {0x1608, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Focused                                                     OFFSET(get<T>, {0x1610, 8, 0, 0})
	CMember(UImage*)                                   FocusPulse                                                  OFFSET(get<T>, {0x1618, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 PulseMID                                                    OFFSET(get<T>, {0x1620, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature
	// void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature();                          // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/SubGameSelect/SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile
	// void ExecuteUbergraph_SubgameTile(int32_t EntryPoint);                                                                   // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Athena/Athena_ButtonStyle_AngledDarkBlueMenuButton.Athena_ButtonStyle_AngledDarkBlueMenuButton_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UAthena_ButtonStyle_AngledDarkBlueMenuButton_C : public UAthena_ButtonStyle_AngledBlueMenuButton_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
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

/// Class /Game/UI/Foundation/Border/Border_Solid_DkBlue.Border_Solid_DkBlue_C
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UBorder_Solid_DkBlue_C : public UCommonBorderStyle
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

/// Class /Game/UI/Login/DisplayName/DisplayName.DisplayName_C
/// Size: 0x0020 (0x0005A8 - 0x0005C8)
class UDisplayName_C : public UFortDisplayNameWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	CMember(UCommonBorder*)                            DisplayNameBorder                                           OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UEditableText*)                            EditText_Number                                             OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_Number                                                 OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Class /Game/UI/Frontend/BottomBar/AthenaBottomBarWidget.AthenaBottomBarWidget_C
/// Size: 0x0019 (0x0002D0 - 0x0002E9)
class UAthenaBottomBarWidget_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 745;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UAthenaBoundActionBar*)                    AthenaBoundActionBar                                        OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortHUDElementWrapper_C*)                 FortHUDElementWrapper                                       OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      Display_Owner_Actions_Only                                  OFFSET(get<bool>, {0x2E8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/BottomBar/AthenaBottomBarWidget.AthenaBottomBarWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/BottomBar/AthenaBottomBarWidget.AthenaBottomBarWidget_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Frontend/BottomBar/AthenaBottomBarWidget.AthenaBottomBarWidget_C.ExecuteUbergraph_AthenaBottomBarWidget
	// void ExecuteUbergraph_AthenaBottomBarWidget(int32_t EntryPoint);                                                         // [0x1ebf994] Final                
};

/// Class /Game/UI/Login/MFA/MultiFactorAuthWidget.MultiFactorAuthWidget_C
/// Size: 0x0000 (0x000568 - 0x000568)
class UMultiFactorAuthWidget_C : public UFortMultiFactorAuthWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

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

/// Class /Game/UI/Foundation/Text/TextStyle-Base-M-B_Black.TextStyle-Base-M-B_Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_M_B_Black_C : public UTextStyle_Base_M_B_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

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

/// Class /Game/UI/Login/AccountSelect/AccountNotFound.AccountNotFound_C
/// Size: 0x0000 (0x000548 - 0x000548)
class UAccountNotFound_C : public UFortAccountNotFound
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_Desirable.ButtonStyle-Skew_Desirable_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_Desirable_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/UI/Login/Eula/EulaWidget.EulaWidget_C
/// Size: 0x0010 (0x000580 - 0x000590)
class UEulaWidget_C : public UFortEulaWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	SMember(FMulticastInlineDelegate)                  OnEulaResponse                                              OFFSET(getStruct<T>, {0x580, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Login/Eula/EulaWidget.EulaWidget_C.OnEulaResponse__DelegateSignature
	// void OnEulaResponse__DelegateSignature(bool Accepted);                                                                   // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/Skew/ButtonStyle-Skew_Eula_GamePad.ButtonStyle-Skew_Eula_GamePad_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_Skew_Eula_GamePad_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

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

/// Class /Game/UI/Foundation/Text/TextStyle-Header-L-Black.TextStyle-Header-L-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_L_Black_C : public UTextStyle_HeaderParent_C
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

/// Class /Game/UI/Login/AccountLinking/AccountPinLinkingWindow.AccountPinLinkingWindow_C
/// Size: 0x0018 (0x000658 - 0x000670)
class UAccountPinLinkingWindow_C : public UFortAccountPinLinkingWindow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x658, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x668, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/AccountLinking/AccountPinLinkingWindow.AccountPinLinkingWindow_C.BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature
	// void BndEvt__Switcher_Main_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(UWidget* ActiveWidget, int32_t ActiveWidgetIndex); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Login/AccountLinking/AccountPinLinkingWindow.AccountPinLinkingWindow_C.ExecuteUbergraph_AccountPinLinkingWindow
	// void ExecuteUbergraph_AccountPinLinkingWindow(int32_t EntryPoint);                                                       // [0x1ebf994] Final                
};

/// Class /Game/UI/Login/SignIn/SignInWidget.SignInWidget_C
/// Size: 0x0018 (0x000590 - 0x0005A8)
class USignInWidget_C : public UFortSignInWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(UNamedSlot*)                               ButtonSlot                                                  OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonLazyImage*)                         CommonLazyImage                                             OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UVerticalBox*)                             ContentBox                                                  OFFSET(get<T>, {0x5A0, 8, 0, 0})
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

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle-Button-Outline-M-Disabled.TextStyle-Button-Outline-M-Disabled_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Outline_M_Disabled_C : public UCommonTextStyle
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
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x328, 8, 0, 0})
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

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_Feature_L_Base.TextStyle_Button_Feature_L_Base_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Feature_L_Base_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Header-M-S.TextStyle-Header-M-S_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Header_M_S_C : public UTextStyle_Header_M_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

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

/// Class /Game/UI/Foundation/Buttons/ButtonStyles/ButtonStyle-FullyInvisible.ButtonStyle-FullyInvisible_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_FullyInvisible_C : public UCommonButtonStyle
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

/// Class /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C
/// Size: 0x0018 (0x000310 - 0x000328)
class UQualityLevelSelectTimer_C : public UFortHUDQualityLevelSelectTimer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x310, 8, 0, 0})
	DMember(double)                                    TextScaleUnderOneSecond                                     OFFSET(get<double>, {0x318, 8, 0, 0})
	DMember(double)                                    TextScaleOverOneSecond                                      OFFSET(get<double>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.UpdateTextScale
	// void UpdateTextScale(double TimeRemaining);                                                                              // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressStarted
	// void OnProgressStarted(float Duration);                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressEnded
	// void OnProgressEnded();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnTimeRemainingChanged
	// void OnTimeRemainingChanged(float TimeRemaining);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.ExecuteUbergraph_QualityLevelSelectTimer
	// void ExecuteUbergraph_QualityLevelSelectTimer(int32_t EntryPoint);                                                       // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Profile/ConsoleProfileWidget.ConsoleProfileWidget_C
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UConsoleProfileWidget_C : public UFortConsoleProfileWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Game/UI/Login/Status/StatusWidget.StatusWidget_C
/// Size: 0x0008 (0x0005C0 - 0x0005C8)
class UStatusWidget_C : public UFortLoginStatus
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x5C0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Login/Status/StatusWidget.StatusWidget_C.SetContinueButtonText
	// void SetContinueButtonText(FText& ContinueText);                                                                         // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/Status/StatusWidget.StatusWidget_C.SetQuitButtonText
	// void SetQuitButtonText(FText& QuitText);                                                                                 // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Login/Status/StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
	// void ExecuteUbergraph_StatusWidget(int32_t EntryPoint);                                                                  // [0x1ebf994] Final|HasDefaults    
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

/// Class /Game/UI/Foundation/Buttons/TextStyles/TextStyle_Button_Feature_M_Base.TextStyle_Button_Feature_M_Base_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Button_Feature_M_Base_C : public UCommonTextStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x558, 8, 0, 0})
	CMember(UWidgetAnimation*)                         FinishingAnim                                               OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  HealthWarningCompleted                                      OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	SMember(FTimerHandle)                              ShowTimer                                                   OFFSET(getStruct<T>, {0x580, 8, 0, 0})
	SMember(FMargin)                                   IconPadding                                                 OFFSET(getStruct<T>, {0x588, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete
	// void HandleShowTimerComplete();                                                                                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen
	// void ExecuteUbergraph_HealthWarningScreen(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
	// Function /Game/UI/Login/HealthWarning/HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature
	// void HealthWarningCompleted__DelegateSignature();                                                                        // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
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

/// Class /Game/UI/Frontend/StoreMain/WebLogin.WebLogin_C
/// Size: 0x0018 (0x000528 - 0x000540)
class UWebLogin_C : public UFortWebLoginWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x528, 8, 0, 0})
	CMember(UCircularThrobber*)                        Throbber                                                    OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UBorder*)                                  WebContent                                                  OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/WebLogin.WebLogin_C.DisplayWidget
	// void DisplayWidget(UWidget* WebWidget);                                                                                  // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/WebLogin.WebLogin_C.DismissWidget
	// void DismissWidget();                                                                                                    // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/StoreMain/WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin
	// void ExecuteUbergraph_WebLogin(int32_t EntryPoint);                                                                      // [0x1ebf994] Final                
};

/// Class /Game/UI/Login/AccountSelect/InviteEventTitle.InviteEventTitle_C
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UInviteEventTitle_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UCommonLazyImage*)                         TitleImage                                                  OFFSET(get<T>, {0x2A8, 8, 0, 0})
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         LoginCamera                                                 OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(AVaultRotator_C*)                          ActiveVaultRotator                                          OFFSET(get<T>, {0xA10, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.SetVaultRotatorLighting
	// void SetVaultRotatorLighting(FName ItemRotatorTag);                                                                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Environment/Cameras/FrontendCamera_VaultRotator.FrontendCamera_VaultRotator_C.ExecuteUbergraph_FrontendCamera_VaultRotator
	// void ExecuteUbergraph_FrontendCamera_VaultRotator(int32_t EntryPoint);                                                   // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C
/// Size: 0x0058 (0x000341 - 0x000399)
class AMPItemShop_VaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 921;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x348, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     FloorVisibility_FloorMask_33DB417F4F318DD14C0CDB92ED647F56  OFFSET(get<float>, {0x358, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FloorVisibility__Direction_33DB417F4F318DD14C0CDB92ED647F56 OFFSET(get<T>, {0x35C, 1, 0, 0})
	CMember(UTimelineComponent*)                       FloorVisibility                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_A94F40F44CC1E033CF6C509AB9A33280 OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_A94F40F44CC1E033CF6C509AB9A33280  OFFSET(get<float>, {0x36C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_A94F40F44CC1E033CF6C509AB9A33280 OFFSET(get<T>, {0x370, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionForward                                           OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultBackgroundMaterial                                   OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultFloorMaterial                                        OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Background                                                  OFFSET(get<T>, {0x390, 8, 0, 0})
	DMember(bool)                                      IsMaterialBackground                                        OFFSET(get<bool>, {0x398, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.StopTransitions
	// void StopTransitions();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.HandleMaterialBackground
	// void HandleMaterialBackground(UMaterialInterface* MaterialBackground);                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.HandleTextureBackground
	// void HandleTextureBackground(UTexture2D*& TextureBackground);                                                            // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.GetBackground
	// void GetBackground();                                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.AssignBackgroundMaterial
	// void AssignBackgroundMaterial(UMaterialInterface* SourceMaterial);                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.AssignFloorMaterial
	// void AssignFloorMaterial(UMaterialInterface* SourceMaterial);                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double FXTransitionFade, UMaterialInstanceDynamic* Mid);              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double FXTransitionFade, UMaterialInstanceDynamic* Mid);                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(UTexture2D*& TextureBackground, UMaterialInstanceDynamic* Mid, bool IsFloor, bool FirstTimeSetup); // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                                  // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.FloorVisibility__FinishedFunc
	// void FloorVisibility__FinishedFunc();                                                                                    // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.FloorVisibility__UpdateFunc
	// void FloorVisibility__UpdateFunc();                                                                                      // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnSetupTextureBackground
	// void OnSetupTextureBackground(UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);           // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnSetupMaterialBackground
	// void OnSetupMaterialBackground(UMaterialInterface* LoadedBackgroundMaterial, FVaultWorldBackgroundData& BackgroundInfo); // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Frontend/ItemShop/MultiProduct/MPItemShop_VaultWorld.MPItemShop_VaultWorld_C.ExecuteUbergraph_MPItemShop_VaultWorld
	// void ExecuteUbergraph_MPItemShop_VaultWorld(int32_t EntryPoint);                                                         // [0x1ebf994] Final|HasDefaults    
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

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
/// Size: 0x0031 (0x0002C0 - 0x0002F1)
class UItemReceivedHeaderSubWidgetBase_C : public UItemReceivedHeaderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 753;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UFortGiftBoxItem*)                         GiftBoxItem_BP                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FString)                                   FromUserName_BP                                             OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FFortReceivedItemLootInfo>)         ItemDefs                                                    OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      bSelfGift                                                   OFFSET(get<bool>, {0x2F0, 1, 0, 0})


	/// Functions
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.SetBlueprintGiftBoxItem
	// void SetBlueprintGiftBoxItem(UFortGiftBoxItem* GiftBox, FString FromUser, TArray<FFortReceivedItemLootInfo>& ItemDefs, bool bSelfGift); // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.InitFromGiftBoxItem_BP
	// void InitFromGiftBoxItem_BP();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C.ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase
	// void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32_t EntryPoint);                                               // [0x1ebf994] Final                
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListObject.CurrencyListObject_C
/// Size: 0x0050 (0x000028 - 0x000078)
class UCurrencyListObject_C : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FCurrencyData)                             Data                                                        OFFSET(getStruct<T>, {0x28, 80, 0, 0})
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UCurrencyListViewItem_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CurrencyMessage                                             OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FText)                                     DisplayMessage                                              OFFSET(getStruct<T>, {0x2B8, 24, 0, 0})


	/// Functions
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.SetQuantityAndType
	// void SetQuantityAndType(int32_t inInt, FText To);                                                                        // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListViewItem.CurrencyListViewItem_C.ExecuteUbergraph_CurrencyListViewItem
	// void ExecuteUbergraph_CurrencyListViewItem(int32_t EntryPoint);                                                          // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedAccountWidget.ItemReceivedAccountWidget_C
/// Size: 0x0010 (0x000308 - 0x000318)
class UItemReceivedAccountWidget_C : public UFortAccountWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock_UserMessage                                 OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.OnAccountInfoChanged
	// void OnAccountInfoChanged(FFortPublicAccountInfo& Result);                                                               // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedAccountWidget.ItemReceivedAccountWidget_C.ExecuteUbergraph_ItemReceivedAccountWidget
	// void ExecuteUbergraph_ItemReceivedAccountWidget(int32_t EntryPoint);                                                     // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListView.CurrencyListView_C
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UCurrencyListView_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonListView*)                          DataListView                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListView.CurrencyListView_C.AddDataToList
	// void AddDataToList(FCurrencyData CurrencyData);                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListView.CurrencyListView_C.RunClearListView
	// void RunClearListView();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/CurrencyListView.CurrencyListView_C.ExecuteUbergraph_CurrencyListView
	// void ExecuteUbergraph_CurrencyListView(int32_t EntryPoint);                                                              // [0x1ebf994] Final                
};

/// Class /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C
/// Size: 0x0060 (0x0002F1 - 0x000351)
class UItemReceivedCurrencyHeader_C : public UItemReceivedHeaderSubWidgetBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 849;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BattlepassTier                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         BattlepassUpgraded                                          OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher_Icon                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              CommonWidgetSwitcher_Title                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCurrencyListView_C*)                      CurrencyListView                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UImage*)                                   ImageBattlePassIconGold                                     OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UImage*)                                   ImageBattlePassIconSilver                                   OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UItemReceivedAccountWidget_C*)             ItemReceivedAccountWidget                                   OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ActivateWidgetFromPresentationScreen                        OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	DMember(bool)                                      AlreadyActivated                                            OFFSET(get<bool>, {0x350, 1, 0, 0})


	/// Functions
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActiveFromPresentation
	// void ActiveFromPresentation(FCurrencyDataWithGiftBox CurrencyDataArray);                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ExecuteUbergraph_ItemReceivedCurrencyHeader
	// void ExecuteUbergraph_ItemReceivedCurrencyHeader(int32_t EntryPoint);                                                    // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/ItemReceived/ItemReceivedHeaders/ItemReceivedCurrencyHeader.ItemReceivedCurrencyHeader_C.ActivateWidgetFromPresentationScreen__DelegateSignature
	// void ActivateWidgetFromPresentationScreen__DelegateSignature(UFortGiftBoxItem* GiftBox, TArray<FCurrencyData>& CurrencyArray); // [0x1ebf994] Public|Delegate|HasOutParms|BlueprintCallable|BlueprintEvent 
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinDot.PinDot_C.OnSetFilled
	// void OnSetFilled(bool bFilled);                                                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinDot.PinDot_C.ExecuteUbergraph_PinDot
	// void ExecuteUbergraph_PinDot(int32_t EntryPoint);                                                                        // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Llama                                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bFlippedTexture                                             OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	SMember(FVector2D)                                 CurLookAt2D                                                 OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	CMember(ECommonInputType)                          CurInputType                                                OFFSET(get<T>, {0x2D8, 1, 0, 0})
	DMember(double)                                    EyeInterpSpeed                                              OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    MaterialInputScale                                          OFFSET(get<double>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.HandleInputTypeChanged
	// void HandleInputTypeChanged(ECommonInputType NewInputType);                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.RandomizeColor
	// void RandomizeColor();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection
	// void HandleNormalizedInputDirection(FVector2D 2DInputVec);                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama
	// void ExecuteUbergraph_ErrorLlama(int32_t EntryPoint);                                                                    // [0x1ebf994] Final|HasDefaults    
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

/// Class /Game/UI/Foundation/LetoBorder.LetoBorder_C
/// Size: 0x0038 (0x0002D8 - 0x000310)
class ULetoBorder_C : public UFortLetoLayoutBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D8, 8, 0, 0})
	CMember(UBorder*)                                  BorderBottom                                                OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UBorder*)                                  BorderLeft                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UBorder*)                                  BorderNameplate                                             OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UBorder*)                                  BorderRight                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UBorder*)                                  BorderTop                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/LetoBorder.LetoBorder_C.UpdateBorderWidth
	// void UpdateBorderWidth(float HalfBorderWidth);                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder
	// void ExecuteUbergraph_LetoBorder(int32_t EntryPoint);                                                                    // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-B-Black.TextStyle-Base-XXS-B-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_B_Black_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-B-Red.TextStyle-Base-XXS-B-Red_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_B_Red_C : public UTextStyle_BaseParent_C
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

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XXS-Black.TextStyle-Base-XXS-Black_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XXS_Black_C : public UTextStyle_BaseParent_C
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

/// Class /Game/UI/Foundation/Text/TextStyle-Base-XS-EnchantedBlue.TextStyle-Base-XS-EnchantedBlue_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_Base_XS_EnchantedBlue_C : public UTextStyle_BaseParent_C
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
	CMember(UWidgetAnimation*)                         Highlighted                                                 OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Default                                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UImage*)                                   Image_RebootRally                                           OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Game/UI/Sidebar/Tags/SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class USocialTagsFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C
/// Size: 0x0058 (0x000328 - 0x000380)
class UPowerToastWidget_C : public UFortPlayerPowerRatingToast
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         LookAtMe                                                    OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro                                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Image_Power                                                 OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   LineSeparator                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UImage*)                                   Moonbeam_Power_Back                                         OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UImage*)                                   Moonbeam_Power_Back_Difference                              OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UImage*)                                   PowerIconGlow                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         OFFSET(getStruct<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.HandleAnimationDelay
	// void HandleAnimationDelay();                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_Intro_K2Node_WidgetAnimationEvent();                                                             // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent();                                                             // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent
	// void WidgetAnimationEvt_Outro_K2Node_WidgetAnimationEvent();                                                             // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.ShowToast
	// void ShowToast();                                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/PowerToastWidget.PowerToastWidget_C.ExecuteUbergraph_PowerToastWidget
	// void ExecuteUbergraph_PowerToastWidget(int32_t EntryPoint);                                                              // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-XS-Teal.TextStyle-BurbankSmall-XS-Teal_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_XS_Teal_C : public UTextStyle_BaseParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PasscodeText                                                OFFSET(get<T>, {0x14D8, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.Set Pin Number
	// void Set Pin Number(FString Pin);                                                                                        // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinCodeButton.PinCodeButton_C.ExecuteUbergraph_PinCodeButton
	// void ExecuteUbergraph_PinCodeButton(int32_t EntryPoint);                                                                 // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Text/TextStyle-BurbankSmall-S-White.TextStyle-BurbankSmall-S-White_C
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UTextStyle_BurbankSmall_S_White_C : public UTextStyle_BaseParent_C
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x548, 8, 0, 0})
	CMember(UWBP_UIKit_Button_Quiet_C*)                Button_Back                                                 OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UCircularThrobber*)                        Throbber                                                    OFFSET(get<T>, {0x558, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C.BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
	// void BndEvt__WebPurchase_Button_Back_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(UCommonButtonBase* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Frontend/StoreMain/WebPurchase.WebPurchase_C.ExecuteUbergraph_WebPurchase
	// void ExecuteUbergraph_WebPurchase(int32_t EntryPoint);                                                                   // [0x1ebf994] Final                
};

/// Class /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C
/// Size: 0x006D (0x0003F0 - 0x00045D)
class UVoiceChannelChangePopup_C : public UFortVoiceChannelChangePopup
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1117;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AmbientIconPulse                                            OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UHorizontalBox*)                           GamepadKeybindWrapper                                       OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   Image_Mic                                                   OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UHorizontalBox*)                           KBKeybindWrapper                                            OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   MicPulse                                                    OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_KeybindWidgets                                     OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Hold                                                   OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FName)                                     M_Param_ColorA                                              OFFSET(getStruct<T>, {0x430, 4, 0, 0})
	SMember(FName)                                     M_Param_ColorB                                              OFFSET(getStruct<T>, {0x434, 4, 0, 0})
	SMember(FName)                                     M_Param_Progress                                            OFFSET(getStruct<T>, {0x438, 4, 0, 0})
	SMember(FLinearColor)                              ColorB                                                      OFFSET(getStruct<T>, {0x43C, 16, 0, 0})
	SMember(FLinearColor)                              ColorA                                                      OFFSET(getStruct<T>, {0x44C, 16, 0, 0})
	DMember(bool)                                      CollapseOnAnimationFinish                                   OFFSET(get<bool>, {0x45C, 1, 0, 0})


	/// Functions
	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.Popup Animation Finished
	// void Popup Animation Finished();                                                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayOpenAnimation
	// void OnPlayOpenAnimation();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnPlayCloseAnimation
	// void OnPlayCloseAnimation();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.OnInputModeChanged
	// void OnInputModeChanged(ECommonInputType NewInputType);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/InGame/HUD/VoiceChannelChangePopup.VoiceChannelChangePopup_C.ExecuteUbergraph_VoiceChannelChangePopup
	// void ExecuteUbergraph_VoiceChannelChangePopup(int32_t EntryPoint);                                                       // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C
/// Size: 0x0190 (0x0014C0 - 0x001650)
class UIconTextButtonHold_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5712;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CenterButtonTextWidget                                      OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UBorder*)                                  ContentBorder                                               OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ButtonContent                                 OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UImage*)                                   LeftSideImage                                               OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UNamedSlot*)                               RightExtraContentSlot                                       OFFSET(get<T>, {0x14E8, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x14F0, 24, 0, 0})
	SMember(FSlateBrush)                               IconBrush                                                   OFFSET(getStruct<T>, {0x1510, 192, 0, 0})
	CMember(UClass*)                                   ControllerInputStyle                                        OFFSET(get<T>, {0x15D0, 8, 0, 0})
	CMember(UClass*)                                   MouseKeyboardStyle                                          OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ContentAlignment                                            OFFSET(get<T>, {0x15E0, 1, 0, 0})
	DMember(bool)                                      bMouseKeyboardStyleSet                                      OFFSET(get<bool>, {0x15E1, 1, 0, 0})
	SMember(FText)                                     OverrideButtonText                                          OFFSET(getStruct<T>, {0x15E8, 24, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 ButtonTextJustification                                     OFFSET(get<T>, {0x1600, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             OFFSET(get<bool>, {0x1601, 1, 0, 0})
	DMember(double)                                    PressProgress                                               OFFSET(get<double>, {0x1608, 8, 0, 0})
	DMember(bool)                                      bIgnoreInputActionWidgetText                                OFFSET(get<bool>, {0x1610, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  HoldActionStarted                                           OFFSET(getStruct<T>, {0x1618, 16, 0, 0})
	DMember(bool)                                      bHolding                                                    OFFSET(get<bool>, {0x1628, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  HoldActionEnded                                             OFFSET(getStruct<T>, {0x1630, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HoldActionCompleted                                         OFFSET(getStruct<T>, {0x1640, 16, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.GetPressProgress
	// void GetPressProgress(double& Progress);                                                                                 // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.Get Dynamic Material
	// void Get Dynamic Material(UMaterialInstanceDynamic*& Ret Material);                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.ShowIcon
	// void ShowIcon(bool bShouldShow);                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.SetTextInternal
	// void SetTextInternal(FText InButtonText);                                                                                // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.SetInitialMouseKeyboardStyle
	// void SetInitialMouseKeyboardStyle();                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.UpdateTextStyle
	// void UpdateTextStyle();                                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.SetContentAlignment
	// void SetContentAlignment(TEnumAsByte<EHorizontalAlignment> ContentAlignment);                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.UpdateContentAlignment
	// void UpdateContentAlignment();                                                                                           // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.SetMouseKeyboardStyle
	// void SetMouseKeyboardStyle(UClass* ControllerInputStyle);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.UpdateStyle
	// void UpdateStyle(bool UsingGamepad);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.UpdateText
	// void UpdateText();                                                                                                       // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.SetControllerStyle
	// void SetControllerStyle(UClass* ControllerInputStyle);                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.UpdateTextAndStyle
	// void UpdateTextAndStyle(ECommonInputType InputType);                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.InitializeButton
	// void InitializeButton();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.Set Icon
	// void Set Icon(FSlateBrush IconBrush);                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.Set Text
	// void Set Text(FText ButtonText);                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.SetTabLabelInfo
	// void SetTabLabelInfo(FFortTabButtonLabelInfo& TabLabelInfo);                                                             // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.ExecuteUbergraph_IconTextButtonHold
	// void ExecuteUbergraph_IconTextButtonHold(int32_t EntryPoint);                                                            // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.HoldActionCompleted__DelegateSignature
	// void HoldActionCompleted__DelegateSignature();                                                                           // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.HoldActionEnded__DelegateSignature
	// void HoldActionEnded__DelegateSignature();                                                                               // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Buttons/IconTextButtonHold.IconTextButtonHold_C.HoldActionStarted__DelegateSignature
	// void HoldActionStarted__DelegateSignature();                                                                             // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Down                                        OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Up                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   ProgressSpinner                                             OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/ProgressModal/Athena_ProgressModal.Athena_ProgressModal_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ProgressModal/Athena_ProgressModal.Athena_ProgressModal_C.ExecuteUbergraph_Athena_ProgressModal
	// void ExecuteUbergraph_Athena_ProgressModal(int32_t EntryPoint);                                                          // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Modals/ControllerDisconnectedModal/Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C
/// Size: 0x0040 (0x000400 - 0x000440)
class UAthena_ControllerDisconnectedModal_C : public UAthenaControllerDisconnectedModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x400, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonActionWidget*)                      CommonActionWidget                                          OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Down                                        OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Up                                          OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UImage*)                                   ProgressSpinner                                             OFFSET(get<T>, {0x438, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/ControllerDisconnectedModal/Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ControllerDisconnectedModal/Athena_ControllerDisconnectedModal.Athena_ControllerDisconnectedModal_C.ExecuteUbergraph_Athena_ControllerDisconnectedModal
	// void ExecuteUbergraph_Athena_ControllerDisconnectedModal(int32_t EntryPoint);                                            // [0x1ebf994] Final                
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Confirm                                              OFFSET(get<T>, {0x570, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.OnButtonSet
	// void OnButtonSet(bool InbShouldExit, bool bShouldShow);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__Button_Confirm_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/RestartClient/RestartClient.RestartClient_C.ExecuteUbergraph_RestartClient
	// void ExecuteUbergraph_RestartClient(int32_t EntryPoint);                                                                 // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro1                                                      OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_new2                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro                                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro2                                                      OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   NotificationImage                                           OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        OpenButton                                                  OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ProgrammerNote                                              OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       OFFSET(get<T>, {0x368, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         OFFSET(getStruct<T>, {0x380, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                OFFSET(get<bool>, {0x388, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.SetupAnimBindings
	// void SetupAnimBindings(bool Unbind);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.ApplyAdditionalStyling
	// void ApplyAdditionalStyling();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.GetOpenButtonVisibility
	// ESlateVisibility GetOpenButtonVisibility();                                                                              // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.StartIntro
	// void StartIntro();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.UpdateToast
	// void UpdateToast(UFortUINotification* Notification);                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.PlayOutro
	// void PlayOutro();                                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
	// void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.HandleOutroFinished
	// void HandleOutroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.HandleIntroFinished
	// void HandleIntroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnPlayOpenAnimation
	// void OnPlayOpenAnimation();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnNotificationSet
	// void OnNotificationSet(UFortUINotification* Notification);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnNotificationUpdated
	// void OnNotificationUpdated(UFortUINotification* Notification);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.ExecuteUbergraph_ToastWidget_MinorError
	// void ExecuteUbergraph_ToastWidget_MinorError(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Toasts/ToastWidget_MinorError.ToastWidget_MinorError_C.OnFinishedToast__DelegateSignature
	// void OnFinishedToast__DelegateSignature();                                                                               // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1530, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected_Touch                                              OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unselected_Touch                                            OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledUnhover                                         OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledHover                                           OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledUnhovered                                       OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_DisabledHovered                                         OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Enabled                                                 OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Unhovered                                               OFFSET(get<T>, {0x1570, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Hovered                                                 OFFSET(get<T>, {0x1578, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Tag_Reset                                                   OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Reset                                                       OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unhovered                                                   OFFSET(get<T>, {0x1590, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Hovered                                                     OFFSET(get<T>, {0x1598, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Unselected                                                  OFFSET(get<T>, {0x15A0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Selected                                                    OFFSET(get<T>, {0x15A8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox                                               OFFSET(get<T>, {0x15B0, 8, 0, 0})
	CMember(USpacer*)                                  Mobile_Spacer                                               OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(UCommonBorder*)                            NewBang                                                     OFFSET(get<T>, {0x15C0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay                                                     OFFSET(get<T>, {0x15C8, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_MobileMultiplier                                   OFFSET(get<T>, {0x15D0, 8, 0, 0})
	DMember(bool)                                      isTab                                                       OFFSET(get<bool>, {0x15D8, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.HandleInputMethodChanged
	// void HandleInputMethodChanged(ECommonInputType NewInputType);                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Finished_D3AB39584598BB6DA7EE7C98805576AC
	// void Finished_D3AB39584598BB6DA7EE7C98805576AC();                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_ShowBang
	// void BP_ShowBang(bool bShow);                                                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.BP_OnTagCategoryChange
	// void BP_OnTagCategoryChange(ESocialTagCategory InTagCategory);                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/BP_SidebarCollectionScreenContainerTabButtonEditTags.BP_SidebarCollectionScreenContainerTabButtonEditTags_C.ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags
	// void ExecuteUbergraph_BP_SidebarCollectionScreenContainerTabButtonEditTags(int32_t EntryPoint);                          // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C
/// Size: 0x0040 (0x000750 - 0x000790)
class UConfirmationWindow_C : public UFortConfirmationWindow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x750, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox                                                     OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UCommonBorder*)                            TapToCloseZone                                              OFFSET(get<T>, {0x768, 8, 0, 0})
	SMember(FLinearColor)                              ButtonIconColor                                             OFFSET(getStruct<T>, {0x770, 16, 0, 0})
	CMember(USoundBase*)                               ConfirmationAppearSound                                     OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(USoundBase*)                               ConfirmationDisappearSound                                  OFFSET(get<T>, {0x788, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.Handle Configure Decline Button
	// void Handle Configure Decline Button(UCommonButtonBase* New Button);                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton
	// void ConfigureConfirmationButton(UCommonButtonBase* Button, FConfirmationDialogAction& Action, bool bSimpleConfirm);     // [0x1ebf994] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.PlayShowSound
	// void PlayShowSound();                                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.TapToClose
	// FEventReply TapToClose(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                 // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
	// void SetupNonInteractiveContent();                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.GetInputAction
	// FDataTableRowHandle GetInputAction(FName RowName, bool UseInputAction);                                                  // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.Initialize
	// void Initialize();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton
	// void ConfigureDeclineButton(UCommonButtonBase* Button);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
	// void BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ConfirmationWindow/ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
	// void ExecuteUbergraph_ConfirmationWindow(int32_t EntryPoint);                                                            // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/CabinMode/ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C
/// Size: 0x0048 (0x000340 - 0x000388)
class UParentalControlsCabinEmailManagementWidget_C : public UFortCabinEmailManagementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x340, 8, 0, 0})
	CMember(UOverlay*)                                 CabinEmailManagement                                        OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Image_DisplayNameEntrySpinner                               OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   Image_DisplayNameEntrySpinner1                              OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_EmailEntry_NotBind                                  OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_SendingEmail                                        OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_SentEmail                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UHorizontalBox*)                           ParentEmailWrapper                                          OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_EmailResult                                            OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/CabinMode/ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.OnChangeEmailEditMode
	// void OnChangeEmailEditMode(bool bIsInEditMode);                                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/CabinMode/ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.OnScreenStateChange
	// void OnScreenStateChange(ECabinEmailViewState NewState);                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/CabinMode/ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.OnShowFailureReason
	// void OnShowFailureReason(FText& ErrorText);                                                                              // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/CabinMode/ParentalControlsCabinEmailManagementWidget.ParentalControlsCabinEmailManagementWidget_C.ExecuteUbergraph_ParentalControlsCabinEmailManagementWidget
	// void ExecuteUbergraph_ParentalControlsCabinEmailManagementWidget(int32_t EntryPoint);                                    // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C
/// Size: 0x0108 (0x000600 - 0x000708)
class UPinModal_C : public UFortPinModal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x600, 8, 0, 0})
	CMember(UImage*)                                   Bad                                                         OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UImage*)                                   BG_INPUTBOX                                                 OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UImage*)                                   BG_WIREFRAME2                                               OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UImage*)                                   Border                                                      OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Close                                                OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UVerticalBox*)                             CabinLayout                                                 OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         CabinSwitcher                                               OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UHorizontalBox*)                           DefaultLayout                                               OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   Good                                                        OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UImage*)                                   GradientForFlipping                                         OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton                                       OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton1                                      OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton2                                      OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton3                                      OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton4                                      OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton5                                      OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton6                                      OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton7                                      OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton8                                      OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         Hidden_PasscodeButton9                                      OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton                                              OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton1                                             OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton2                                             OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton3                                             OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton4                                             OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton5                                             OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton6                                             OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton7                                             OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton8                                             OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(UPinCodeButton_C*)                         PasscodeButton9                                             OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                StateSwitcher                                               OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(UImage*)                                   Waiting                                                     OFFSET(get<T>, {0x700, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.Set Visual States
	// void Set Visual States(EPinModalValidityState Pin States);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.SetPreviewData
	// void SetPreviewData();                                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.CollectPinButtons
	// TArray<UFortPinButton*> CollectPinButtons();                                                                             // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.OnSetPinState
	// void OnSetPinState(EPinModalValidityState PinModalState);                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.BndEvt__PinModal_Button_Close_1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__PinModal_Button_Close_1_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.OnShowCabinModeLayout
	// void OnShowCabinModeLayout(bool bIsInCabinMode);                                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/PasscodeModal/PinModal.PinModal_C.ExecuteUbergraph_PinModal
	// void ExecuteUbergraph_PinModal(int32_t EntryPoint);                                                                      // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C
/// Size: 0x00D9 (0x0002A8 - 0x000381)
class UWBP_PlayerAvatar_C : public UFortPlayerAvatar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 897;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UFortOnlineStatusViewModel*)               FortOnlineStatusViewModel                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UFortPlayerAvatarViewModel*)               FortPlayerAvatarViewModel                                   OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hover                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UImage*)                                   AvatarImage                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_Size                                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 AvatarMaterial                                              OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FVector2D)                                 AvatarSize                                                  OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Online                                       OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Away                                         OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Offline                                      OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FLinearColor)                              PresenceSelect_Blocked                                      OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FLinearColor)                              PresenceColor_Online                                        OFFSET(getStruct<T>, {0x330, 16, 0, 0})
	SMember(FLinearColor)                              PresenceColor_Away                                          OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FLinearColor)                              PresenceColor_Offline                                       OFFSET(getStruct<T>, {0x350, 16, 0, 0})
	DMember(bool)                                      ShowOnlinePresence                                          OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(double)                                    PresenceIconScale                                           OFFSET(get<double>, {0x368, 8, 0, 0})
	SMember(FVector2D)                                 PresenceIconOffset                                          OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	DMember(bool)                                      ShowPresenceBg                                              OFFSET(get<bool>, {0x380, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.SetTexture
	// void SetTexture(UTexture2D* Texture);                                                                                    // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.SetBackgroundColor
	// void SetBackgroundColor(FColor BackgroundColor);                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.SetHighlightColor
	// void SetHighlightColor(FColor HighlightColor);                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.SetOnlineStatus
	// void SetOnlineStatus(EPresenceIndicatorState OnlineStatus);                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.SetOnlineStatusVisibility
	// void SetOnlineStatusVisibility(bool bHideStatus);                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.SetEmpty
	// void SetEmpty(bool bEmpty);                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.Event Set Size
	// void Event Set Size(FVector2D NewSize);                                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.Event Set Presence Icon Settings
	// void Event Set Presence Icon Settings(double Scale, FVector2D Offset);                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.OnSetSocialUser
	// void OnSetSocialUser(UFortSocialUser* InUser);                                                                           // [0x1ebf994] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Profile/WBP_PlayerAvatar.WBP_PlayerAvatar_C.ExecuteUbergraph_WBP_PlayerAvatar
	// void ExecuteUbergraph_WBP_PlayerAvatar(int32_t EntryPoint);                                                              // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C
/// Size: 0x0059 (0x0002F8 - 0x000351)
class UToastWidgetDonut_C : public UFortToastWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 849;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UTextBlock*)                               TextBlock                                                   OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         OFFSET(getStruct<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                OFFSET(get<bool>, {0x350, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.SetupAnimBindings
	// void SetupAnimBindings(bool Unbind);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.ApplyAdditionalStyling
	// void ApplyAdditionalStyling();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.SetImage
	// void SetImage();                                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.GetOpenButtonVisibility
	// ESlateVisibility GetOpenButtonVisibility();                                                                              // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.StartIntro
	// void StartIntro();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.UpdateToast
	// void UpdateToast(UFortUINotification* Notification);                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.HandleOutroFinished
	// void HandleOutroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.PlayOutro
	// void PlayOutro();                                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.HandleIntroFinished
	// void HandleIntroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnPlayOpenAnimation
	// void OnPlayOpenAnimation();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationSet
	// void OnNotificationSet(UFortUINotification* Notification);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnNotificationUpdated
	// void OnNotificationUpdated(UFortUINotification* Notification);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.ExecuteUbergraph_ToastWidgetDonut
	// void ExecuteUbergraph_ToastWidgetDonut(int32_t EntryPoint);                                                              // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Toasts/ToastWidgetDonut.ToastWidgetDonut_C.OnFinishedToast__DelegateSignature
	// void OnFinishedToast__DelegateSignature();                                                                               // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C
/// Size: 0x0080 (0x000600 - 0x000680)
class UErrorWindow_C : public UFortErrorWindow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x600, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Llama                                                       OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Llama1                                                      OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Llama2                                                      OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UErrorLlama_C*)                            ErrorLlama                                                  OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UErrorLlama_C*)                            ErrorLlama_C                                                OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UErrorLlama_C*)                            ErrorLlama_C1                                               OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Down                                        OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   Image_Separator_Up                                          OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(ULightbox_C*)                              Lightbox                                                    OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UWidgetAnimation*)                         CurLlamaAnim                                                OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(TArray<UErrorLlama_C*>)                    LlamaArray                                                  OFFSET(get<T>, {0x660, 16, 0, 0})
	SMember(FTimerHandle)                              LlamaReverseTimer                                           OFFSET(getStruct<T>, {0x670, 8, 0, 0})
	SMember(FTimerHandle)                              AmbientLlamaPlayTimer                                       OFFSET(getStruct<T>, {0x678, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                            // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.Initialize Close Button
	// void Initialize Close Button();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnBeginIntro
	// void OnBeginIntro();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.HandleLlamaAnimFinish
	// void HandleLlamaAnimFinish();                                                                                            // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.LlamaReverse
	// void LlamaReverse();                                                                                                     // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.HandleLlamaCycleFinished
	// void HandleLlamaCycleFinished();                                                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.PlayRandomAmbientLlama
	// void PlayRandomAmbientLlama();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.StartAmbientLlamaSequence
	// void StartAmbientLlamaSequence();                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.ResetLlamas
	// void ResetLlamas();                                                                                                      // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.OnOverrideCloseButtonText
	// void OnOverrideCloseButtonText(FText& OverrideText);                                                                     // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorWindow.ErrorWindow_C.ExecuteUbergraph_ErrorWindow
	// void ExecuteUbergraph_ErrorWindow(int32_t EntryPoint);                                                                   // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C
/// Size: 0x0048 (0x0002D0 - 0x000318)
class USidebarSocialAddingTagWidget_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AddingTag                                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UBorder*)                                  Border_AddingTagBorder                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UImage*)                                   Image_AddingTagArrow                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_AddingTag                                           OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AddingTagName                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FString)                                   TagCategory_AddTag                                          OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FName)                                     Name_InnerColor                                             OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	SMember(FName)                                     OuterColor                                                  OFFSET(getStruct<T>, {0x314, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.EventSetTag
	// void EventSetTag();                                                                                                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialAddingTagWidget.SidebarSocialAddingTagWidget_C.ExecuteUbergraph_SidebarSocialAddingTagWidget
	// void ExecuteUbergraph_SidebarSocialAddingTagWidget(int32_t EntryPoint);                                                  // [0x1ebf994] Final                
};

/// Class /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C
/// Size: 0x0254 (0x0014D0 - 0x001724)
class USidebarSocialTagWidget_C : public USocialTagWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5924;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BorderUnhover                                               OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BorderHover                                                 OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         StateChange                                                 OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UBorder*)                                  Border_TagBorder                                            OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UBP_SidebarCollectionScreenContainerTabButtonEditTags_C*) BP_SidebarCollectionScreenContainerTabButtonEditTags OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_TagWidget                                         OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_TagCategoryIcon                                    OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(USidebarSocialAddingTagWidget_C*)          SidebarSocialAddingTagWidget                                OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_TagCategoryIcon                                      OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_SelectedState                                      OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_TagName                                                OFFSET(get<T>, {0x1528, 8, 0, 0})
	SMember(FName)                                     Name_InnerColor                                             OFFSET(getStruct<T>, {0x1530, 4, 0, 0})
	SMember(FName)                                     Name_OuterColor                                             OFFSET(getStruct<T>, {0x1534, 4, 0, 0})
	SMember(FName)                                     Name_TagOpacity                                             OFFSET(getStruct<T>, {0x1538, 4, 0, 0})
	SMember(FString)                                   TagCategory_Disabled                                        OFFSET(getStruct<T>, {0x1540, 16, 0, 0})
	SMember(FTimerHandle)                              StateChangeLerpTimerHandle                                  OFFSET(getStruct<T>, {0x1550, 8, 0, 0})
	DMember(double)                                    StateChangeLerpAlpha                                        OFFSET(get<double>, {0x1558, 8, 0, 0})
	SMember(FSidebarSocialTagCategoryStructure)        TagCategoryStructureReference                               OFFSET(getStruct<T>, {0x1560, 112, 0, 0})
	SMember(FSidebarSocialTagCategoryStructure)        DisabledTagCategoryStructureReference                       OFFSET(getStruct<T>, {0x15D0, 112, 0, 0})
	DMember(double)                                    StateChangeLerpTimeStep                                     OFFSET(get<double>, {0x1640, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 TagBorderMaterialReference                                  OFFSET(get<T>, {0x1648, 8, 0, 0})
	SMember(FLinearColor)                              CurrentInnerColorReference                                  OFFSET(getStruct<T>, {0x1650, 16, 0, 0})
	SMember(FLinearColor)                              CurrentOuterColorReference                                  OFFSET(getStruct<T>, {0x1660, 16, 0, 0})
	SMember(FLinearColor)                              TargetInnerColorReference                                   OFFSET(getStruct<T>, {0x1670, 16, 0, 0})
	SMember(FLinearColor)                              TargetOuterColorReference                                   OFFSET(getStruct<T>, {0x1680, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorWhite                                        OFFSET(getStruct<T>, {0x1690, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorWhiteDisabled                                OFFSET(getStruct<T>, {0x16A0, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorBlack                                        OFFSET(getStruct<T>, {0x16B0, 16, 0, 0})
	SMember(FLinearColor)                              CurrentTagContentColorReference                             OFFSET(getStruct<T>, {0x16C0, 16, 0, 0})
	SMember(FLinearColor)                              TargetTagContentColorReference                              OFFSET(getStruct<T>, {0x16D0, 16, 0, 0})
	SMember(FLinearColor)                              TagContentColorBlackDisabled                                OFFSET(getStruct<T>, {0x16E0, 16, 0, 0})
	DMember(double)                                    EnabledTagOpacity                                           OFFSET(get<double>, {0x16F0, 8, 0, 0})
	DMember(double)                                    DisabledTagOpacity                                          OFFSET(get<double>, {0x16F8, 8, 0, 0})
	DMember(bool)                                      Highlighted                                                 OFFSET(get<bool>, {0x1700, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 TagCategoryIconMaterialReference                            OFFSET(get<T>, {0x1708, 8, 0, 0})
	SMember(FName)                                     Name_GradientStartColor                                     OFFSET(getStruct<T>, {0x1710, 4, 0, 0})
	SMember(FName)                                     Name_GradientEndColor                                       OFFSET(getStruct<T>, {0x1714, 4, 0, 0})
	SMember(FName)                                     Name_IconColor                                              OFFSET(getStruct<T>, {0x1718, 4, 0, 0})
	SMember(FName)                                     Name_EndingInnerColor                                       OFFSET(getStruct<T>, {0x171C, 4, 0, 0})
	SMember(FName)                                     Name_EndingOuterColor                                       OFFSET(getStruct<T>, {0x1720, 4, 0, 0})


	/// Functions
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTagHoverState
	// void SetTagHoverState(bool IsUserSocialTag, bool IsHovering);                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetUnhoverState
	// void SetUnhoverState(bool bPlayAnimation);                                                                               // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTagBorderColors
	// void FunctionSetTagBorderColors(FLinearColor InnerColor, FLinearColor OuterColor);                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryUnhovered
	// void OnTagListEntryUnhovered();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.OnTagListEntryHovered
	// void OnTagListEntryHovered();                                                                                            // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.GetCurrentTagBorderColors
	// void GetCurrentTagBorderColors();                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnUnhovered
	// void FunctionOnUnhovered();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionOnHovered
	// void FunctionOnHovered();                                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetCategoryCustomizationVisibility
	// void FunctionSetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility);                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.FunctionSetTag
	// void FunctionSetTag(FText InTagName, ESocialTagCategory InTagCategory, bool InIsSystemTag);                              // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetCategoryCustomizationVisibility
	// void SetCategoryCustomizationVisibility(ESlateVisibility CategoryCustomizationVisibility);                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnDeselected
	// void BP_OnDeselected();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.BP_OnSelected
	// void BP_OnSelected();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetTag
	// void SetTag(FText& InTagName, ESocialTagCategory InTagCategory, bool bInIsSystemTag);                                    // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.InterpolateTagColors
	// void InterpolateTagColors();                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetHighlightState
	// void SetHighlightState(bool bHighlighted);                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.SetFullColor
	// void SetFullColor();                                                                                                     // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.Event SetFriendsCellColor
	// void Event SetFriendsCellColor();                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Sidebar/Tags/SidebarSocialTagWidget.SidebarSocialTagWidget_C.ExecuteUbergraph_SidebarSocialTagWidget
	// void ExecuteUbergraph_SidebarSocialTagWidget(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         TapAccept                                                   OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ClickAccept                                                 OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_NeutralInfo_Simple                                    OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_GoodInfo_Simple                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_BadInfo_Simple                                        OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_NeutralInfo                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_GoodInfo                                              OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_BadInfo                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UWidgetAnimation*)                         TimeToRespond                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UWidgetAnimation*)                         HoldProgress                                                OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro_Action                                                OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UImage*)                                   BackgroundMat                                               OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UIconTextButtonHold_C*)                    Button_Cursor                                               OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Hold                                                 OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortMobileImage*)                         HamburgerIcon                                               OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UImage*)                                   Image_Fail                                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UImage*)                                   Image_Info                                                  OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UImage*)                                   Image_Success                                               OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UImage*)                                   Image_Trim                                                  OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_Icon                                              OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Input_Keybind                                       OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ResultIcon                                          OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UImage*)                                   ProgressCircle                                              OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_Input_Pad                                          OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_InputButtons                                       OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Action                                                 OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Desc                                                   OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Title                                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   TextureIcon                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   ToastCushion                                                OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_HoldAction                                      OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Info                                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWBP_RebootRallyIcon_C*)                   WBP_RebootRallyIcon                                         OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         OFFSET(getStruct<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                OFFSET(get<bool>, {0x460, 1, 0, 0})
	DMember(bool)                                      UseComplexAnims                                             OFFSET(get<bool>, {0x461, 1, 0, 0})
	DMember(bool)                                      NewVar                                                      OFFSET(get<bool>, {0x462, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  DownloadOnDemandErrorIcon                                   OFFSET(get<T>, {0x468, 32, 0, 0})
	DMember(bool)                                      bUsingNewAvatars                                            OFFSET(get<bool>, {0x488, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base
	// void SequenceEvent__ENTRYPOINTToastSocialWidget_Base();                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base
	// void SequenceEvent__ENTRYPOINTToastSocialWidget_Base();                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SequenceEvent__ENTRYPOINTToastSocialWidget_Base
	// void SequenceEvent__ENTRYPOINTToastSocialWidget_Base();                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateIcons
	// void UpdateIcons();                                                                                                      // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.ResetMaterials
	// void ResetMaterials();                                                                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.DetermineIntroAnim
	// UWidgetAnimation* DetermineIntroAnim();                                                                                  // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.InputBasedStyling
	// void InputBasedStyling();                                                                                                // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleNotificationType
	// void HandleNotificationType(FText& Return);                                                                              // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonHoldText
	// void GetButtonHoldText(FText& Text);                                                                                     // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetButtonCursorText
	// void GetButtonCursorText(FText& Text);                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetVisibilityForOptionalElements
	// void SetVisibilityForOptionalElements();                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.TakeAction
	// void TakeAction();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.CleanupBeforeClosing
	// void CleanupBeforeClosing();                                                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.GetInputSwitcherVisibility
	// ESlateVisibility GetInputSwitcherVisibility();                                                                           // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetupAnimBindings
	// void SetupAnimBindings(bool Unbind);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.ApplyAdditionalStyling
	// void ApplyAdditionalStyling();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.SetImage
	// void SetImage();                                                                                                         // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.UpdateToast
	// void UpdateToast(UFortUINotification* Notification);                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleIntroFinished
	// void HandleIntroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HandleOutroFinished
	// void HandleOutroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.PlayOutro
	// void PlayOutro();                                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
	// void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnPlayOpenAnimation
	// void OnPlayOpenAnimation();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCursorModeChanged
	// void OnCursorModeChanged(bool bCursorModeEnabled);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnCancelNotification
	// void OnCancelNotification();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnTakeActionNotification
	// void OnTakeActionNotification();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnUserStartedHoldActionNotification
	// void OnUserStartedHoldActionNotification();                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnInputModeChanged
	// void OnInputModeChanged(ECommonInputType NewInputType);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.HoldComplete
	// void HoldComplete();                                                                                                     // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
	// void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
	// void BndEvt__ToastSocialWidget_Base_Button_Cursor_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature
	// void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_3_HoldActionStarted__DelegateSignature(); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature
	// void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_4_HoldActionEnded__DelegateSignature(); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature
	// void BndEvt__ToastSocialWidget_Base_IconTextButtonHold_K2Node_ComponentBoundEvent_6_HoldActionCompleted__DelegateSignature(); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationSet
	// void OnNotificationSet(UFortUINotification* Notification);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNotificationUpdated
	// void OnNotificationUpdated(UFortUINotification* Notification);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnNewAvatarsEnabledChanged
	// void OnNewAvatarsEnabledChanged(bool bUsingNewAvatars);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.ExecuteUbergraph_ToastSocialWidget_Base
	// void ExecuteUbergraph_ToastSocialWidget_Base(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget_Base.ToastSocialWidget_Base_C.OnFinishedToast__DelegateSignature
	// void OnFinishedToast__DelegateSignature();                                                                               // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     DescriptionRichText                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortLazyImage*)                           NotificationImage                                           OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UIconTextButton_C*)                        OpenButton                                                  OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     TitleRichText                                               OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         OFFSET(getStruct<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                OFFSET(get<bool>, {0x360, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.GetDisplayTime
	// float GetDisplayTime(bool& bOutDisplayTimeOverridden);                                                                   // [0x1ebf994] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.SetupAnimBindings
	// void SetupAnimBindings(bool Unbind);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.SetImage
	// void SetImage();                                                                                                         // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.GetOpenButtonVisibility
	// ESlateVisibility GetOpenButtonVisibility();                                                                              // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.StartIntro
	// void StartIntro();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.UpdateToast
	// void UpdateToast(UFortUINotification* Notification);                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.PlayOutro
	// void PlayOutro();                                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
	// void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.HandleOutroFinished
	// void HandleOutroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.HandleIntroFinished
	// void HandleIntroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnPlayOpenAnimation
	// void OnPlayOpenAnimation();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnNotificationSet
	// void OnNotificationSet(UFortUINotification* Notification);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnNotificationUpdated
	// void OnNotificationUpdated(UFortUINotification* Notification);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.ExecuteUbergraph_ToastWidget_New
	// void ExecuteUbergraph_ToastWidget_New(int32_t EntryPoint);                                                               // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Toasts/ToastWidget_New.ToastWidget_New_C.OnFinishedToast__DelegateSignature
	// void OnFinishedToast__DelegateSignature();                                                                               // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C
/// Size: 0x0069 (0x000330 - 0x000399)
class UToastSocialWidget_C : public UFortSocialNotificationWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 921;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Cursor                                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_Hold                                                 OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     DescriptionRichText                                         OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UFortLazyImage*)                           NotificationImage                                           OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_InputButtons                                       OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     TitleRichText                                               OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         OFFSET(getStruct<T>, {0x390, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                OFFSET(get<bool>, {0x398, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetDisplayTime
	// float GetDisplayTime(bool& bOutDisplayTimeOverridden);                                                                   // [0x1ebf994] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetButtonHoldText
	// void GetButtonHoldText(FText& Text);                                                                                     // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetButtonCursorText
	// void GetButtonCursorText(FText& Text);                                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.SetVisibilityForOptionalElements
	// void SetVisibilityForOptionalElements();                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.TakeAction
	// void TakeAction();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.CleanupBeforeClosing
	// void CleanupBeforeClosing();                                                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.GetInputSwitcherVisibility
	// ESlateVisibility GetInputSwitcherVisibility();                                                                           // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.SetupAnimBindings
	// void SetupAnimBindings(bool Unbind);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.SetImage
	// void SetImage();                                                                                                         // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.StartIntro
	// void StartIntro();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.UpdateToast
	// void UpdateToast(UFortUINotification* Notification);                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.PlayOutro
	// void PlayOutro();                                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
	// void BndEvt__OpenButton_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.HandleOutroFinished
	// void HandleOutroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.HandleIntroFinished
	// void HandleIntroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnPlayOpenAnimation
	// void OnPlayOpenAnimation();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnCursorModeChanged
	// void OnCursorModeChanged(bool bCursorModeEnabled);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
	// void BndEvt__Button_Hold_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(UCommonButtonLegacy* Button); // [0x1ebf994] BlueprintEvent       
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnCancelNotification
	// void OnCancelNotification();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnTakeActionNotification
	// void OnTakeActionNotification();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnUserStartedHoldActionNotification
	// void OnUserStartedHoldActionNotification();                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnInputModeChanged
	// void OnInputModeChanged(ECommonInputType NewInputType);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnNotificationSet
	// void OnNotificationSet(UFortUINotification* Notification);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.OnNotificationUpdated
	// void OnNotificationUpdated(UFortUINotification* Notification);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastSocialWidget.ToastSocialWidget_C.ExecuteUbergraph_ToastSocialWidget
	// void ExecuteUbergraph_ToastSocialWidget(int32_t EntryPoint);                                                             // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C
/// Size: 0x0061 (0x0002F8 - 0x000359)
class UBattlePassPageUnlockedToast_C : public UFortToastWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 857;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro_New                                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImage                                         OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonBorder*)                            B_NotificationImageExtended                                 OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder_MainWidget                                     OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortLazyImage*)                           NotificationImage                                           OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Title                                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedToast                                             OFFSET(getStruct<T>, {0x340, 16, 0, 0})
	SMember(FTimerHandle)                              AnimationDelayTimer                                         OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	DMember(bool)                                      bActionTaken                                                OFFSET(get<bool>, {0x358, 1, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetupAnimBindings
	// void SetupAnimBindings(bool Unbind);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ApplyAdditionalStyling
	// void ApplyAdditionalStyling();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.SetImage
	// void SetImage();                                                                                                         // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.GetOpenButtonVisibility
	// ESlateVisibility GetOpenButtonVisibility();                                                                              // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.StartIntro
	// void StartIntro();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.UpdateToast
	// void UpdateToast(UFortUINotification* Notification);                                                                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleOutroFinished
	// void HandleOutroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.PlayOutro
	// void PlayOutro();                                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x1ebf994] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.HandleIntroFinished
	// void HandleIntroFinished();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnPlayOpenAnimation
	// void OnPlayOpenAnimation();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationSet
	// void OnNotificationSet(UFortUINotification* Notification);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnNotificationUpdated
	// void OnNotificationUpdated(UFortUINotification* Notification);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.ExecuteUbergraph_BattlePassPageUnlockedToast
	// void ExecuteUbergraph_BattlePassPageUnlockedToast(int32_t EntryPoint);                                                   // [0x1ebf994] Final|HasDefaults    
	// Function /Game/UI/Foundation/Toasts/BattlePassPageUnlockedToast.BattlePassPageUnlockedToast_C.OnFinishedToast__DelegateSignature
	// void OnFinishedToast__DelegateSignature();                                                                               // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/UI/Foundation/Toasts/ToastDisplayArea.ToastDisplayArea_C
/// Size: 0x0010 (0x000328 - 0x000338)
class UToastDisplayArea_C : public UFortToastDisplayArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	CMember(USafeZone*)                                SafeZone                                                    OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/Toasts/ToastDisplayArea.ToastDisplayArea_C.TestFrontendToast
	// void TestFrontendToast();                                                                                                // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/Toasts/ToastDisplayArea.ToastDisplayArea_C.ExecuteUbergraph_ToastDisplayArea
	// void ExecuteUbergraph_ToastDisplayArea(int32_t EntryPoint);                                                              // [0x1ebf994] Final                
};

/// Class /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C
/// Size: 0x0060 (0x000428 - 0x000488)
class URootLayout_Athena_C : public UFortRootViewportLayout_Athena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x428, 8, 0, 0})
	CMember(UNamedSlot*)                               BottomCenterNotificationNamedSlot                           OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UNamedSlot*)                               IndicatorNamedSlot                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UConfirmationWindow_C*)                    ConfirmationWindow                                          OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UProgressModalWidget_C*)                   ControllerDisconnectedModal                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(bool)                                      bClosingErrorDialog                                         OFFSET(get<bool>, {0x450, 1, 0, 0})
	SMember(FText)                                     QuitTitle                                                   OFFSET(getStruct<T>, {0x458, 24, 0, 0})
	SMember(FText)                                     QuitMessage                                                 OFFSET(getStruct<T>, {0x470, 24, 0, 0})


	/// Functions
	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.IsConsole
	// bool IsConsole();                                                                                                        // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419
	// void DialogResult_0099D78247C40A9775C753A2024EA419(EFortDialogResult Result, FName ResultName);                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked
	// void OnGameWindowCloseButtonClicked();                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.OnModalQueueEmptied
	// void OnModalQueueEmptied();                                                                                              // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena
	// void ExecuteUbergraph_RootLayout_Athena(int32_t EntryPoint);                                                             // [0x1ebf994] Final                
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

/// Class /SrirachaRanch/UI/BB_RadioNext.BB_RadioNext_C
/// Size: 0x0000 (0x000120 - 0x000120)
class UBB_RadioNext_C : public UFortMobileActionButtonBehavior
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

/// Class /VictoryCrownsGameplay/UI/VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UVictoryCrownsKillFeedExtension_C : public UFortGameStateComponent_KillFeedExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   OverrideVictimStyle                                         OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   OverrideKillerStyle                                         OFFSET(getStruct<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /VictoryCrownsGameplay/UI/VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C.CheckForOverrideVictimStyle
	// FString CheckForOverrideVictimStyle(AFortPlayerStateAthena* VictimPlayerStateAthena, FString VictimStyle);               // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /VictoryCrownsGameplay/UI/VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C.CheckForOverrideKillerStyle
	// FString CheckForOverrideKillerStyle(AFortPlayerStateAthena* KillerPlayerStateAthena, FString KillerStyle);               // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C
/// Size: 0x0190 (0x000368 - 0x0004F8)
class UWBP_Augment_SelectionTimer_C : public UFortPlayerAugmentHUDSelectionTimerWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x368, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_AugmentReady_IncreaseCount                             OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_AugmentReady_Reminder                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_AugmentReady                                           OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_TimerText_CountdownUpdated                             OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_ProgressBar_CountdownUpdated                           OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_CountdownReveal                                        OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UBorder*)                                  Border_Mobile                                               OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_Content                                       OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UImage*)                                   Image_MobileButtonBG                                        OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UImage*)                                   Image_MultiplierBacking                                     OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UImage*)                                   Image_Ready_Backing                                         OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UImage*)                                   Image_Timer_InnerRing                                       OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UImage*)                                   Image_Timer_ProgressBar                                     OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         Keybind_OpenAugments_Action                                 OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UKeybindWidget_C*)                         Keybind_OpenAugments_Action_Build                           OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_AttentionLIne                                       OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_CannotOpenSelector                                  OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_DeviceAndProgressBar                                OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_DeviceAndTimer                                      OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_FXGlowAndBacking                                    OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ReadyOpenPrompt                                     OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ReadyPrompt                                         OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Keybind                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Timer                                               OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_OverallHeightControl                                 OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_WidgetOffset                                         OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_OpenAugments_Action                                OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_ReadyPrompt                                        OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Alert                                                  OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentMulitplier                                      OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentReady                                           OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentTimer                                           OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UFortControllerComponent_SpyTechPerkSystem*) OwningPerkComponent                                       OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(int32_t)                                   Num_Pending_Augments_to_Grant                               OFFSET(get<int32_t>, {0x480, 4, 0, 0})
	DMember(bool)                                      Can_Select_Augment                                          OFFSET(get<bool>, {0x484, 1, 0, 0})
	SMember(FText)                                     TextAugmentReady                                            OFFSET(getStruct<T>, {0x488, 24, 0, 0})
	SMember(FText)                                     TextAugmentCount                                            OFFSET(getStruct<T>, {0x4A0, 24, 0, 0})
	DMember(double)                                    ReminderFrequencyInSeconds                                  OFFSET(get<double>, {0x4B8, 8, 0, 0})
	SMember(FTimerHandle)                              AugmentReadyReminderTimer                                   OFFSET(getStruct<T>, {0x4C0, 8, 0, 0})
	CMember(USoundBase*)                               MultiplierSound                                             OFFSET(get<T>, {0x4C8, 8, 0, 0})
	DMember(bool)                                      Player_Able_to_Open_Selector                                OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	CMember(TWeakObjectPtr<UPaperSprite*>)             MobileBackgroundSprite                                      OFFSET(get<T>, {0x4D8, 32, 0, 0})


	/// Functions
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateCanOpenSelector
	// void UpdateCanOpenSelector(bool InPlayerAbleToOpenSelector);                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnHideTimerEventFinished
	// void OnHideTimerEventFinished();                                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.StartHideTimerEvent
	// void StartHideTimerEvent();                                                                                              // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnNumPendingAugmentsToGrantUpdated
	// void OnNumPendingAugmentsToGrantUpdated(int32_t NumPendingAugmentsToGrant);                                              // [0x1ebf994] Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetMobileVisuals
	// void SetMobileVisuals();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PlayReminderAnimation
	// void PlayReminderAnimation();                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.UpdateVisibility
	// void UpdateVisibility();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentReadyFadeInFinished
	// void OnAugmentReadyFadeInFinished();                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ResetAugmentReadyStateAnims
	// void ResetAugmentReadyStateAnims();                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ForceAugmentReadyState
	// void ForceAugmentReadyState(bool AugmentSelectionAvailable);                                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.SetAugmentReadyState
	// void SetAugmentReadyState(bool AugmentSelectionAvailable);                                                               // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.IsAugmentSelectionAvailable
	// void IsAugmentSelectionAvailable(bool& IsEnabled);                                                                       // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnLoaded_7B3490DB452F1589FC28169C2C321233
	// void OnLoaded_7B3490DB452F1589FC28169C2C321233(UObject* Loaded);                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnInitialized
	// void OnInitialized();                                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnAugmentGrantingTimersFinishedForMatch
	// void OnAugmentGrantingTimersFinishedForMatch();                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnHUDElementVisibilityChanged
	// void OnHUDElementVisibilityChanged(FGameplayTagContainer& HiddenElementTagContainer);                                    // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnPlayerChangedBuildMode
	// void OnPlayerChangedBuildMode(bool bEnteredBuildMode);                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnCountdownActivated
	// void OnCountdownActivated();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.OnCanSelectAugmentChanged
	// void OnCanSelectAugmentChanged(bool bCanSelectAugment);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augment_SelectionTimer.WBP_Augment_SelectionTimer_C.ExecuteUbergraph_WBP_Augment_SelectionTimer
	// void ExecuteUbergraph_WBP_Augment_SelectionTimer(int32_t EntryPoint);                                                    // [0x1ebf994] Final|HasDefaults    
};

/// Class /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C
/// Size: 0x0018 (0x000338 - 0x000350)
class UWBP_Augments_InteractionIndicatorInfo_C : public UFortPlayerAugmentInfoEntryWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   Image_AugmentIcon                                           OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UFortPlayerAugmentItemDefinition*)         Augment_Item_Definition                                     OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.SetAugmentInfo
	// void SetAugmentInfo(UFortPlayerAugmentItemDefinition* InAugmentItemDefinition);                                          // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9
	// void OnLoaded_2A5949E64DAB0291DE31D1B67C0E8EB9(UObject* Loaded);                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.SetAugmentIcon
	// void SetAugmentIcon(TWeakObjectPtr<UObject*> Asset);                                                                     // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicatorInfo.WBP_Augments_InteractionIndicatorInfo_C.ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo
	// void ExecuteUbergraph_WBP_Augments_InteractionIndicatorInfo(int32_t EntryPoint);                                         // [0x1ebf994] Final|HasDefaults    
};

/// Class /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C
/// Size: 0x0070 (0x0002A8 - 0x000318)
class UWBP_Augments_InteractionIndicator_C : public UFortInteractContextInfoWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AnimIntro                                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UImage*)                                   Icon_BackingPanel_UnlockedFX                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Icon_Border_Unlocked                                        OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UImage*)                                   Icon_Border_UnlockedGlow                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UImage*)                                   Image_AugmentIcon                                           OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentCategory                                        OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentDescription                                     OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_AugmentName                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UWBP_Augments_InteractionIndicatorInfo_C*) WBP_Augments_InteractionIndicatorInfo                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(USpacer*)                                  WidthConrol                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FText)                                     InteractText                                                OFFSET(getStruct<T>, {0x300, 24, 0, 0})


	/// Functions
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.GetInteractText
	// void GetInteractText(FText& InteractText, bool& Result);                                                                 // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.GetShowErrorsUsingDefaultWidget
	// bool GetShowErrorsUsingDefaultWidget();                                                                                  // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.OnLoaded_2E66591C48A272F0C04BFB94B42C632F
	// void OnLoaded_2E66591C48A272F0C04BFB94B42C632F(UObject* Loaded);                                                         // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.OnContextInfoUpdated
	// void OnContextInfoUpdated(UFortInteractContextInfo* ContextInfo);                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.SetAugmentIcon
	// void SetAugmentIcon(TWeakObjectPtr<UObject*> Asset);                                                                     // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /PlayerAugmentsUI/UI/WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.ExecuteUbergraph_WBP_Augments_InteractionIndicator
	// void ExecuteUbergraph_WBP_Augments_InteractionIndicator(int32_t EntryPoint);                                             // [0x1ebf994] Final|HasDefaults    
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
class FFortRadioButtonItemStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   ButtonClass_16_96A6B156493ECD26328DB3A2AD2A49F3             OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   ButtonStyle_12_1900F8284D83F2AFA8F7549B26E57AFD             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FText)                                     ButtonText_8_3ECB1D484A34D2AA393E81AEEDD4CC0E               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Game/UI/Foundation/StateLayouts/CinematicLanuageToTrackStruct.CinematicLanuageToTrackStruct
/// Size: 0x0004 (0x000000 - 0x000004)
class FCinematicLanuageToTrackStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   TrackIndex_5_3C1ECC8A4F8E44CBFA164485FFD4BB35               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Game/UI/Sidebar/Tags/SidebarSocialTagCategoryStructure.SidebarSocialTagCategoryStructure
/// Size: 0x006C (0x000000 - 0x00006C)
class FSidebarSocialTagCategoryStructure : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 108;

public:
	SMember(FLinearColor)                              TagSkewBoxInnerColor_48_C74E0AB74864DE4E29C3AEBA2ECC7DA4    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxInnerColorHovered_42_7C212CFC4A6078EEE7C986B14E3FEB49 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxInnerColorSelected_45_E34FF8A8455FE97079F6B0A6A31A05AB OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxOuterColor_41_98DDEF0940105128E6C274B11D3A3D5D    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              TagSkewBoxOuterColorSelected_47_9B952DE4402DE9AFF112F2A20DC4F48C OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(UMaterialInstance*)                        TagCategoryIconMaterial_7_8991D63341121885D70AE09CB10AE389  OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FSlateColor)                               TagCategoryBaseColor_19_47DC015C4160F77A7C6E66AEEA302F6A    OFFSET(getStruct<T>, {0x58, 20, 0, 0})
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

/// Enum /Game/UI/ContentControls/E_UI_InputField_ContentSize.E_UI_InputField_ContentSize
/// Size: 0x04
enum E_UI_InputField_ContentSize : uint8_t
{
	E_UI_InputField_ContentSize__NewEnumerator00                                     = 0,
	E_UI_InputField_ContentSize__NewEnumerator11                                     = 1,
	E_UI_InputField_ContentSize__NewEnumerator22                                     = 2,
	E_UI_InputField_ContentSize__E_UI_InputField_MAX3                                = 3
};

