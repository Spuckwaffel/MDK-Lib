
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/SocialTypes.ChatChromeColorScheme
/// Size: 0x0050 (0x000000 - 0x000050)
class FChatChromeColorScheme : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLinearColor)                              ChatEntryBackgroundColor                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              NoneActiveTabColor                                          OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColor                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColorInverted                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              ChatBackgroundColor                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/SocialTypes.ChatChromeMargins
/// Size: 0x0064 (0x000000 - 0x000064)
class FChatChromeMargins : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	DMember(float)                                     TabWidth                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowPadding                                           OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowToEntryMargin                                     OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	SMember(FMargin)                                   ChatChannelPadding                                          OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FMargin)                                   UserListButtonPadding                                       OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	SMember(FMargin)                                   UserListIconPadding                                         OFFSET(getStruct<T>, {0x54, 16, 0, 0})
};

/// Struct /Script/SocialTypes.ChatChromeStyle
/// Size: 0x07C8 (0x000000 - 0x0007C8)
class FChatChromeStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	SMember(FSlateBrush)                               UserListBrush                                               OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FSlateBrush)                               ChatBackgroundBrush                                         OFFSET(getStruct<T>, {0x88, 136, 0, 0})
	SMember(FSlateBrush)                               ChatEntryBackgroundBrush                                    OFFSET(getStruct<T>, {0x110, 136, 0, 0})
	SMember(FSlateBrush)                               ChannelBackgroundBrush                                      OFFSET(getStruct<T>, {0x198, 136, 0, 0})
	SMember(FSlateBrush)                               TabBackgroundBrush                                          OFFSET(getStruct<T>, {0x220, 136, 0, 0})
	SMember(FButtonStyle)                              TabSelectorButtonStyle                                      OFFSET(getStruct<T>, {0x2A8, 632, 0, 0})
	SMember(FMargin)                                   TabOptionPadding                                            OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	SMember(FMargin)                                   TabContentPadding                                           OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	SMember(FMargin)                                   TabClosePadding                                             OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	SMember(FButtonStyle)                              UserListButtonStyle                                         OFFSET(getStruct<T>, {0x550, 632, 0, 0})
};

/// Struct /Script/SocialTypes.ChatColorScheme
/// Size: 0x0120 (0x000000 - 0x000120)
class FChatColorScheme : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FLinearColor)                              TimeStampColor                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              DefaultChatColor                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              WhisperChatColor                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              GlobalChatColor                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              FounderChatColor                                            OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FLinearColor)                              GameChatColor                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FLinearColor)                              TeamChatColor                                               OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FLinearColor)                              PartyChatColor                                              OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FLinearColor)                              AdminChatColor                                              OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FLinearColor)                              GameAdminChatColor                                          OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	SMember(FLinearColor)                              WhisperHyperlinkChatColor                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FLinearColor)                              GlobalHyperlinkChatColor                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FLinearColor)                              FounderHyperlinkChatColor                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FLinearColor)                              GameHyperlinkChatColor                                      OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FLinearColor)                              TeamHyperlinkChatColor                                      OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FLinearColor)                              PartyHyperlinkChatColor                                     OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FLinearColor)                              EnemyColor                                                  OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FLinearColor)                              FriendlyColor                                               OFFSET(getStruct<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/SocialTypes.ChatMarkupStyle
/// Size: 0x0608 (0x000000 - 0x000608)
class FChatMarkupStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FButtonStyle)                              MarkupButtonStyle                                           OFFSET(getStruct<T>, {0x0, 632, 0, 0})
	SMember(FTextBlockStyle)                           MarkupTextStyle                                             OFFSET(getStruct<T>, {0x278, 480, 0, 0})
	SMember(FSlateBrush)                               MarkupBackground                                            OFFSET(getStruct<T>, {0x458, 136, 0, 0})
	SMember(FSlateColor)                               ButtonColor                                                 OFFSET(getStruct<T>, {0x4E0, 40, 0, 0})
	SMember(FSlateColor)                               ButtonHoverColor                                            OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	SMember(FSlateColor)                               TipColor                                                    OFFSET(getStruct<T>, {0x530, 40, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              OFFSET(getStruct<T>, {0x558, 136, 0, 0})
	DMember(float)                                     SeperatorThickness                                          OFFSET(get<float>, {0x5E0, 4, 0, 0})
	SMember(FMargin)                                   MarkupPadding                                               OFFSET(getStruct<T>, {0x5E4, 16, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x5F4, 16, 0, 0})
};

/// Struct /Script/SocialTypes.ChatStyle
/// Size: 0x1360 (0x000000 - 0x001360)
class FChatStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4960;

public:
	SMember(FEditableTextBoxStyle)                     ChatEntryTextStyle                                          OFFSET(getStruct<T>, {0x0, 2032, 0, 0})
	SMember(FEditableTextBoxStyle)                     ChatDisplayTextStyle                                        OFFSET(getStruct<T>, {0x7F0, 2032, 0, 0})
	SMember(FScrollBoxStyle)                           ScrollBorderStyle                                           OFFSET(getStruct<T>, {0xFE0, 552, 0, 0})
	SMember(FSlateBrush)                               MessageNotificationBrush                                    OFFSET(getStruct<T>, {0x1208, 136, 0, 0})
	SMember(FMargin)                                   ChatEntryPadding                                            OFFSET(getStruct<T>, {0x1290, 16, 0, 0})
	DMember(float)                                     ChatEntryHeight                                             OFFSET(get<float>, {0x12A0, 4, 0, 0})
	SMember(FSlateBrush)                               ChatMenuBackgroundBrush                                     OFFSET(getStruct<T>, {0x12A8, 136, 0, 0})
	SMember(FMargin)                                   FriendActionPadding                                         OFFSET(getStruct<T>, {0x1330, 16, 0, 0})
	SMember(FMargin)                                   FriendActionHeaderPadding                                   OFFSET(getStruct<T>, {0x1340, 16, 0, 0})
	SMember(FMargin)                                   FriendActionStatusMargin                                    OFFSET(getStruct<T>, {0x1350, 16, 0, 0})
};

/// Struct /Script/SocialTypes.SocialFontStyle
/// Size: 0x0210 (0x000000 - 0x000210)
class FSocialFontStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSlateFontInfo)                            FontSmall                                                   OFFSET(getStruct<T>, {0x0, 80, 0, 0})
	SMember(FSlateFontInfo)                            FontSmallBold                                               OFFSET(getStruct<T>, {0x50, 80, 0, 0})
	SMember(FSlateFontInfo)                            FontNormal                                                  OFFSET(getStruct<T>, {0xA0, 80, 0, 0})
	SMember(FSlateFontInfo)                            FontNormalBold                                              OFFSET(getStruct<T>, {0xF0, 80, 0, 0})
	SMember(FSlateFontInfo)                            FontLarge                                                   OFFSET(getStruct<T>, {0x140, 80, 0, 0})
	SMember(FSlateFontInfo)                            FontLargeBold                                               OFFSET(getStruct<T>, {0x190, 80, 0, 0})
	SMember(FLinearColor)                              DefaultFontColor                                            OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FLinearColor)                              InvertedFontColor                                           OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})
	SMember(FLinearColor)                              DefaultDullFontColor                                        OFFSET(getStruct<T>, {0x200, 16, 0, 0})
};

/// Struct /Script/SocialTypes.SocialListMargins
/// Size: 0x0200 (0x000000 - 0x000200)
class FSocialListMargins : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FVector2D)                                 UserPresenceImageSize                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FMargin)                                   HeaderButtonMargin                                          OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FMargin)                                   FriendsListMargin                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FMargin)                                   FriendsListNoFriendsMargin                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderMargin                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderCountMargin                                OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMargin)                                   HeaderButtonContentMargin                                   OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FMargin)                                   FriendItemMargin                                            OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMargin)                                   FriendItemStatusMargin                                      OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMargin)                                   FriendTipStatusMargin                                       OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPresenceMargin                                    OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPlatformMargin                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMargin)                                   FriendItemTextScrollerMargin                                OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationBorderMargin                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonMargin                                    OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonContentMargin                             OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMargin)                                   NoneFriendContentMargin                                     OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	DMember(float)                                     NoneFriendContentHeight                                     OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     NoneFriendIconWidth                                         OFFSET(get<float>, {0x10C, 4, 0, 0})
	SMember(FMargin)                                   SubMenuBackIconMargin                                       OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMargin)                                   SubMenuPageIconMargin                                       OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FMargin)                                   RadioSettingTitleMargin                                     OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchIconMargin                                     OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchTextMargin                                     OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FMargin)                                   SubMenuBackButtonMargin                                     OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSettingButtonMargin                                  OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FMargin)                                   SubMenuListMargin                                           OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	DMember(float)                                     SubMenuSeperatorThickness                                   OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     PresenceSeperatorThickness                                  OFFSET(get<float>, {0x194, 4, 0, 0})
	SMember(FMargin)                                   FriendTipMargin                                             OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FMargin)                                   FriendTipPresenceMargin                                     OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	SMember(FMargin)                                   FriendTipSeperatorMargin                                    OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	SMember(FMargin)                                   ToolTipMargin                                               OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	SMember(FMargin)                                   TipStatusMargin                                             OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	SMember(FMargin)                                   AddButtonMargin                                             OFFSET(getStruct<T>, {0x1E8, 16, 0, 0})
	SMember(FVector2D)                                 AddButtonSpacing                                            OFFSET(getStruct<T>, {0x1F8, 8, 0, 0})
};

/// Struct /Script/SocialTypes.SocialListStyle
/// Size: 0x26F8 (0x000000 - 0x0026F8)
class FSocialListStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9976;

public:
	SMember(FButtonStyle)                              GlobalChatButtonStyle                                       OFFSET(getStruct<T>, {0x0, 632, 0, 0})
	SMember(FSlateBrush)                               GlobalChatIcon                                              OFFSET(getStruct<T>, {0x278, 136, 0, 0})
	SMember(FButtonStyle)                              FriendItemButtonStyle                                       OFFSET(getStruct<T>, {0x300, 632, 0, 0})
	SMember(FButtonStyle)                              ConfirmButtonStyle                                          OFFSET(getStruct<T>, {0x578, 632, 0, 0})
	SMember(FButtonStyle)                              CancelButtonStyle                                           OFFSET(getStruct<T>, {0x7F0, 632, 0, 0})
	SMember(FSlateColor)                               ButtonContentColor                                          OFFSET(getStruct<T>, {0xA68, 40, 0, 0})
	SMember(FSlateColor)                               ButtonHoverContentColor                                     OFFSET(getStruct<T>, {0xA90, 40, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowBrush                                        OFFSET(getStruct<T>, {0xAB8, 136, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowRightBrush                                   OFFSET(getStruct<T>, {0xB40, 136, 0, 0})
	SMember(FSlateColor)                               ActionMenuBackgroundColor                                   OFFSET(getStruct<T>, {0xBC8, 40, 0, 0})
	SMember(FSlateBrush)                               ToolTipArrowBrush                                           OFFSET(getStruct<T>, {0xBF0, 136, 0, 0})
	SMember(FButtonStyle)                              BackButtonStyle                                             OFFSET(getStruct<T>, {0xC78, 632, 0, 0})
	SMember(FButtonStyle)                              HeaderButtonStyle                                           OFFSET(getStruct<T>, {0xEF0, 632, 0, 0})
	SMember(FButtonStyle)                              FriendListActionButtonStyle                                 OFFSET(getStruct<T>, {0x1168, 632, 0, 0})
	SMember(FSlateBrush)                               AddFriendButtonContentBrush                                 OFFSET(getStruct<T>, {0x13E0, 136, 0, 0})
	SMember(FSlateBrush)                               StatusIconBrush                                             OFFSET(getStruct<T>, {0x1468, 136, 0, 0})
	SMember(FSlateBrush)                               PCIconBrush                                                 OFFSET(getStruct<T>, {0x14F0, 136, 0, 0})
	SMember(FSlateBrush)                               ConsoleIconBrush                                            OFFSET(getStruct<T>, {0x1578, 136, 0, 0})
	SMember(FSlateBrush)                               MobileIconBrush                                             OFFSET(getStruct<T>, {0x1600, 136, 0, 0})
	SMember(FSlateBrush)                               FacebookIconBrush                                           OFFSET(getStruct<T>, {0x1688, 136, 0, 0})
	SMember(FSlateBrush)                               EpicIconBrush                                               OFFSET(getStruct<T>, {0x1710, 136, 0, 0})
	SMember(FSlateBrush)                               FriendImageBrush                                            OFFSET(getStruct<T>, {0x1798, 136, 0, 0})
	SMember(FSlateBrush)                               OfflineBrush                                                OFFSET(getStruct<T>, {0x1820, 136, 0, 0})
	SMember(FSlateBrush)                               OnlineBrush                                                 OFFSET(getStruct<T>, {0x18A8, 136, 0, 0})
	SMember(FSlateBrush)                               AwayBrush                                                   OFFSET(getStruct<T>, {0x1930, 136, 0, 0})
	SMember(FSlateBrush)                               SpectateBrush                                               OFFSET(getStruct<T>, {0x19B8, 136, 0, 0})
	SMember(FSlateBrush)                               FriendsContainerBackground                                  OFFSET(getStruct<T>, {0x1A40, 136, 0, 0})
	SMember(FSlateBrush)                               FriendsListBackground                                       OFFSET(getStruct<T>, {0x1AC8, 136, 0, 0})
	SMember(FEditableTextBoxStyle)                     AddFriendEditableTextStyle                                  OFFSET(getStruct<T>, {0x1B50, 2032, 0, 0})
	SMember(FSlateBrush)                               BackBrush                                                   OFFSET(getStruct<T>, {0x2340, 136, 0, 0})
	SMember(FSlateBrush)                               SelectedOptionBrush                                         OFFSET(getStruct<T>, {0x23C8, 136, 0, 0})
	SMember(FSlateBrush)                               SettingsBrush                                               OFFSET(getStruct<T>, {0x2450, 136, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              OFFSET(getStruct<T>, {0x24D8, 136, 0, 0})
	SMember(FSlateBrush)                               PresenceSeperatorBrush                                      OFFSET(getStruct<T>, {0x2560, 136, 0, 0})
	SMember(FSlateBrush)                               FontSizeBrush                                               OFFSET(getStruct<T>, {0x25E8, 136, 0, 0})
	SMember(FSlateBrush)                               SearchBrush                                                 OFFSET(getStruct<T>, {0x2670, 136, 0, 0})
};

/// Struct /Script/SocialTypes.ProfanityData
/// Size: 0x0038 (0x000000 - 0x000038)
class FProfanityData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   CountryCode                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProfanityList                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   WhiteList                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bAutoAdd                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/SocialTypes.SocialSoundSchema
/// Size: 0x0048 (0x000000 - 0x000048)
class FSocialSoundSchema : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSlateSound)                               MessageReceivedSound                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               PartyInviteReceivedSound                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FSlateSound)                               FriendInviteReceivedSound                                   OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/SocialTypes.SocialStyle
/// Size: 0x66D0 (0x000000 - 0x0066D0)
class FSocialStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 26320;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x0, 1232, 0, 0})
	SMember(FButtonStyle)                              ActionButtonStyle                                           OFFSET(getStruct<T>, {0x4D0, 632, 0, 0})
	SMember(FSocialFontStyle)                          SmallFontStyle                                              OFFSET(getStruct<T>, {0x748, 528, 0, 0})
	SMember(FSocialFontStyle)                          NormalFontStyle                                             OFFSET(getStruct<T>, {0x958, 528, 0, 0})
	SMember(FSocialFontStyle)                          LargeFontStyle                                              OFFSET(getStruct<T>, {0xB68, 528, 0, 0})
	SMember(FSocialFontStyle)                          ChatFontStyle                                               OFFSET(getStruct<T>, {0xD78, 528, 0, 0})
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               OFFSET(getStruct<T>, {0xF88, 1408, 0, 0})
	SMember(FCheckBoxStyle)                            RadioBoxStyle                                               OFFSET(getStruct<T>, {0x1508, 1408, 0, 0})
	SMember(FSocialListStyle)                          SocialListStyle                                             OFFSET(getStruct<T>, {0x1A88, 9976, 0, 0})
	SMember(FSocialListMargins)                        SocialListMargins                                           OFFSET(getStruct<T>, {0x4180, 512, 0, 0})
	SMember(FChatStyle)                                ChatStyle                                                   OFFSET(getStruct<T>, {0x4380, 4960, 0, 0})
	SMember(FChatColorScheme)                          ChatColorScheme                                             OFFSET(getStruct<T>, {0x56E0, 288, 0, 0})
	SMember(FChatChromeStyle)                          ChatChromeStyle                                             OFFSET(getStruct<T>, {0x5800, 1992, 0, 0})
	SMember(FChatChromeMargins)                        ChatChromeMargins                                           OFFSET(getStruct<T>, {0x5FC8, 100, 0, 0})
	SMember(FChatChromeColorScheme)                    ChatChromeColorScheme                                       OFFSET(getStruct<T>, {0x602C, 80, 0, 0})
	SMember(FChatMarkupStyle)                          ChatMarkupStyle                                             OFFSET(getStruct<T>, {0x6080, 1544, 0, 0})
	SMember(FSocialSoundSchema)                        SoundSchema                                                 OFFSET(getStruct<T>, {0x6688, 72, 0, 0})
};

