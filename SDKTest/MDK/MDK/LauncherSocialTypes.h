
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/LauncherSocialTypes.ChatChromeColorScheme
/// Size: 0x0050 (0x000000 - 0x000050)
class FChatChromeColorScheme : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLinearColor)                              ChatEntryBackgroundColor                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              NoneActiveTabColor                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColor                                                OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColorInverted                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              ChatBackgroundColor                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatChromeMargins
/// Size: 0x0064 (0x000000 - 0x000064)
class FChatChromeMargins : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	DMember(float)                                     TabWidth                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowPadding                                           OFFSET(get<T>, {0x14, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowToEntryMargin                                     OFFSET(get<T>, {0x24, 16, 0, 0})
	SMember(FMargin)                                   ChatChannelPadding                                          OFFSET(get<T>, {0x34, 16, 0, 0})
	SMember(FMargin)                                   UserListButtonPadding                                       OFFSET(get<T>, {0x44, 16, 0, 0})
	SMember(FMargin)                                   UserListIconPadding                                         OFFSET(get<T>, {0x54, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatChromeStyle
/// Size: 0x0B50 (0x000000 - 0x000B50)
class FChatChromeStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FSlateBrush)                               UserListBrush                                               OFFSET(get<T>, {0x0, 192, 0, 0})
	SMember(FSlateBrush)                               ChatBackgroundBrush                                         OFFSET(get<T>, {0xC0, 192, 0, 0})
	SMember(FSlateBrush)                               ChatEntryBackgroundBrush                                    OFFSET(get<T>, {0x180, 192, 0, 0})
	SMember(FSlateBrush)                               ChannelBackgroundBrush                                      OFFSET(get<T>, {0x240, 192, 0, 0})
	SMember(FSlateBrush)                               TabBackgroundBrush                                          OFFSET(get<T>, {0x300, 192, 0, 0})
	SMember(FButtonStyle)                              TabSelectorButtonStyle                                      OFFSET(get<T>, {0x3C0, 944, 0, 0})
	SMember(FMargin)                                   TabOptionPadding                                            OFFSET(get<T>, {0x770, 16, 0, 0})
	SMember(FMargin)                                   TabContentPadding                                           OFFSET(get<T>, {0x780, 16, 0, 0})
	SMember(FMargin)                                   TabClosePadding                                             OFFSET(get<T>, {0x790, 16, 0, 0})
	SMember(FButtonStyle)                              UserListButtonStyle                                         OFFSET(get<T>, {0x7A0, 944, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatColorScheme
/// Size: 0x0120 (0x000000 - 0x000120)
class FChatColorScheme : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FLinearColor)                              TimeStampColor                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              DefaultChatColor                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              WhisperChatColor                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              GlobalChatColor                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              FounderChatColor                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FLinearColor)                              GameChatColor                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FLinearColor)                              TeamChatColor                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FLinearColor)                              PartyChatColor                                              OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FLinearColor)                              AdminChatColor                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FLinearColor)                              GameAdminChatColor                                          OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FLinearColor)                              WhisperHyperlinkChatColor                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FLinearColor)                              GlobalHyperlinkChatColor                                    OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FLinearColor)                              FounderHyperlinkChatColor                                   OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FLinearColor)                              GameHyperlinkChatColor                                      OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FLinearColor)                              TeamHyperlinkChatColor                                      OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FLinearColor)                              PartyHyperlinkChatColor                                     OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FLinearColor)                              EnemyColor                                                  OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FLinearColor)                              FriendlyColor                                               OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatMarkupStyle
/// Size: 0x08B0 (0x000000 - 0x0008B0)
class FChatMarkupStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	SMember(FButtonStyle)                              MarkupButtonStyle                                           OFFSET(get<T>, {0x0, 944, 0, 0})
	SMember(FTextBlockStyle)                           MarkupTextStyle                                             OFFSET(get<T>, {0x3B0, 784, 0, 0})
	SMember(FSlateBrush)                               MarkupBackground                                            OFFSET(get<T>, {0x6C0, 192, 0, 0})
	SMember(FSlateColor)                               ButtonColor                                                 OFFSET(get<T>, {0x780, 20, 0, 0})
	SMember(FSlateColor)                               ButtonHoverColor                                            OFFSET(get<T>, {0x794, 20, 0, 0})
	SMember(FSlateColor)                               TipColor                                                    OFFSET(get<T>, {0x7A8, 20, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              OFFSET(get<T>, {0x7C0, 192, 0, 0})
	DMember(float)                                     SeperatorThickness                                          OFFSET(get<float>, {0x880, 4, 0, 0})
	SMember(FMargin)                                   MarkupPadding                                               OFFSET(get<T>, {0x884, 16, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(get<T>, {0x894, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatStyle
/// Size: 0x2000 (0x000000 - 0x002000)
class FChatStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8192;

public:
	SMember(FEditableTextBoxStyle)                     ChatEntryTextStyle                                          OFFSET(get<T>, {0x0, 3456, 0, 0})
	SMember(FEditableTextBoxStyle)                     ChatDisplayTextStyle                                        OFFSET(get<T>, {0xD80, 3456, 0, 0})
	SMember(FScrollBoxStyle)                           ScrollBorderStyle                                           OFFSET(get<T>, {0x1B00, 816, 0, 0})
	SMember(FSlateBrush)                               MessageNotificationBrush                                    OFFSET(get<T>, {0x1E30, 192, 0, 0})
	SMember(FMargin)                                   ChatEntryPadding                                            OFFSET(get<T>, {0x1EF0, 16, 0, 0})
	DMember(float)                                     ChatEntryHeight                                             OFFSET(get<float>, {0x1F00, 4, 0, 0})
	SMember(FSlateBrush)                               ChatMenuBackgroundBrush                                     OFFSET(get<T>, {0x1F10, 192, 0, 0})
	SMember(FMargin)                                   FriendActionPadding                                         OFFSET(get<T>, {0x1FD0, 16, 0, 0})
	SMember(FMargin)                                   FriendActionHeaderPadding                                   OFFSET(get<T>, {0x1FE0, 16, 0, 0})
	SMember(FMargin)                                   FriendActionStatusMargin                                    OFFSET(get<T>, {0x1FF0, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialFontStyle
/// Size: 0x0240 (0x000000 - 0x000240)
class FSocialFontStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FSlateFontInfo)                            FontSmall                                                   OFFSET(get<T>, {0x0, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontSmallBold                                               OFFSET(get<T>, {0x58, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontNormal                                                  OFFSET(get<T>, {0xB0, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontNormalBold                                              OFFSET(get<T>, {0x108, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontLarge                                                   OFFSET(get<T>, {0x160, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontLargeBold                                               OFFSET(get<T>, {0x1B8, 88, 0, 0})
	SMember(FLinearColor)                              DefaultFontColor                                            OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FLinearColor)                              InvertedFontColor                                           OFFSET(get<T>, {0x220, 16, 0, 0})
	SMember(FLinearColor)                              DefaultDullFontColor                                        OFFSET(get<T>, {0x230, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialListMargins
/// Size: 0x0210 (0x000000 - 0x000210)
class FSocialListMargins : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FVector2D)                                 UserPresenceImageSize                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMargin)                                   HeaderButtonMargin                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FMargin)                                   FriendsListMargin                                           OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FMargin)                                   FriendsListNoFriendsMargin                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderMargin                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderCountMargin                                OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMargin)                                   HeaderButtonContentMargin                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMargin)                                   FriendItemMargin                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMargin)                                   FriendItemStatusMargin                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FMargin)                                   FriendTipStatusMargin                                       OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPresenceMargin                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPlatformMargin                                    OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMargin)                                   FriendItemTextScrollerMargin                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationBorderMargin                                    OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonMargin                                    OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonContentMargin                             OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMargin)                                   NoneFriendContentMargin                                     OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     NoneFriendContentHeight                                     OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     NoneFriendIconWidth                                         OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FMargin)                                   SubMenuBackIconMargin                                       OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FMargin)                                   SubMenuPageIconMargin                                       OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FMargin)                                   RadioSettingTitleMargin                                     OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchIconMargin                                     OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchTextMargin                                     OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FMargin)                                   SubMenuBackButtonMargin                                     OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSettingButtonMargin                                  OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FMargin)                                   SubMenuListMargin                                           OFFSET(get<T>, {0x188, 16, 0, 0})
	DMember(float)                                     SubMenuSeperatorThickness                                   OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     PresenceSeperatorThickness                                  OFFSET(get<float>, {0x19C, 4, 0, 0})
	SMember(FMargin)                                   FriendTipMargin                                             OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FMargin)                                   FriendTipPresenceMargin                                     OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMargin)                                   FriendTipSeperatorMargin                                    OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FMargin)                                   ToolTipMargin                                               OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FMargin)                                   TipStatusMargin                                             OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FMargin)                                   AddButtonMargin                                             OFFSET(get<T>, {0x1F0, 16, 0, 0})
	SMember(FVector2D)                                 AddButtonSpacing                                            OFFSET(get<T>, {0x200, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialListStyle
/// Size: 0x3A60 (0x000000 - 0x003A60)
class FSocialListStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14944;

public:
	SMember(FButtonStyle)                              GlobalChatButtonStyle                                       OFFSET(get<T>, {0x0, 944, 0, 0})
	SMember(FSlateBrush)                               GlobalChatIcon                                              OFFSET(get<T>, {0x3B0, 192, 0, 0})
	SMember(FButtonStyle)                              FriendItemButtonStyle                                       OFFSET(get<T>, {0x470, 944, 0, 0})
	SMember(FButtonStyle)                              ConfirmButtonStyle                                          OFFSET(get<T>, {0x820, 944, 0, 0})
	SMember(FButtonStyle)                              CancelButtonStyle                                           OFFSET(get<T>, {0xBD0, 944, 0, 0})
	SMember(FSlateColor)                               ButtonContentColor                                          OFFSET(get<T>, {0xF80, 20, 0, 0})
	SMember(FSlateColor)                               ButtonHoverContentColor                                     OFFSET(get<T>, {0xF94, 20, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowBrush                                        OFFSET(get<T>, {0xFB0, 192, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowRightBrush                                   OFFSET(get<T>, {0x1070, 192, 0, 0})
	SMember(FSlateColor)                               ActionMenuBackgroundColor                                   OFFSET(get<T>, {0x1130, 20, 0, 0})
	SMember(FSlateBrush)                               ToolTipArrowBrush                                           OFFSET(get<T>, {0x1150, 192, 0, 0})
	SMember(FButtonStyle)                              BackButtonStyle                                             OFFSET(get<T>, {0x1210, 944, 0, 0})
	SMember(FButtonStyle)                              HeaderButtonStyle                                           OFFSET(get<T>, {0x15C0, 944, 0, 0})
	SMember(FButtonStyle)                              FriendListActionButtonStyle                                 OFFSET(get<T>, {0x1970, 944, 0, 0})
	SMember(FSlateBrush)                               AddFriendButtonContentBrush                                 OFFSET(get<T>, {0x1D20, 192, 0, 0})
	SMember(FSlateBrush)                               StatusIconBrush                                             OFFSET(get<T>, {0x1DE0, 192, 0, 0})
	SMember(FSlateBrush)                               PCIconBrush                                                 OFFSET(get<T>, {0x1EA0, 192, 0, 0})
	SMember(FSlateBrush)                               ConsoleIconBrush                                            OFFSET(get<T>, {0x1F60, 192, 0, 0})
	SMember(FSlateBrush)                               MobileIconBrush                                             OFFSET(get<T>, {0x2020, 192, 0, 0})
	SMember(FSlateBrush)                               FacebookIconBrush                                           OFFSET(get<T>, {0x20E0, 192, 0, 0})
	SMember(FSlateBrush)                               EpicIconBrush                                               OFFSET(get<T>, {0x21A0, 192, 0, 0})
	SMember(FSlateBrush)                               FriendImageBrush                                            OFFSET(get<T>, {0x2260, 192, 0, 0})
	SMember(FSlateBrush)                               OfflineBrush                                                OFFSET(get<T>, {0x2320, 192, 0, 0})
	SMember(FSlateBrush)                               OnlineBrush                                                 OFFSET(get<T>, {0x23E0, 192, 0, 0})
	SMember(FSlateBrush)                               AwayBrush                                                   OFFSET(get<T>, {0x24A0, 192, 0, 0})
	SMember(FSlateBrush)                               SpectateBrush                                               OFFSET(get<T>, {0x2560, 192, 0, 0})
	SMember(FSlateBrush)                               FriendsContainerBackground                                  OFFSET(get<T>, {0x2620, 192, 0, 0})
	SMember(FSlateBrush)                               FriendsListBackground                                       OFFSET(get<T>, {0x26E0, 192, 0, 0})
	SMember(FEditableTextBoxStyle)                     AddFriendEditableTextStyle                                  OFFSET(get<T>, {0x27A0, 3456, 0, 0})
	SMember(FSlateBrush)                               BackBrush                                                   OFFSET(get<T>, {0x3520, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedOptionBrush                                         OFFSET(get<T>, {0x35E0, 192, 0, 0})
	SMember(FSlateBrush)                               SettingsBrush                                               OFFSET(get<T>, {0x36A0, 192, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              OFFSET(get<T>, {0x3760, 192, 0, 0})
	SMember(FSlateBrush)                               PresenceSeperatorBrush                                      OFFSET(get<T>, {0x3820, 192, 0, 0})
	SMember(FSlateBrush)                               FontSizeBrush                                               OFFSET(get<T>, {0x38E0, 192, 0, 0})
	SMember(FSlateBrush)                               SearchBrush                                                 OFFSET(get<T>, {0x39A0, 192, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ProfanityData
/// Size: 0x0038 (0x000000 - 0x000038)
class FProfanityData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   CountryCode                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProfanityList                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   WhiteList                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bAutoAdd                                                    OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialSoundSchema
/// Size: 0x0048 (0x000000 - 0x000048)
class FSocialSoundSchema : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSlateSound)                               MessageReceivedSound                                        OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               PartyInviteReceivedSound                                    OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FSlateSound)                               FriendInviteReceivedSound                                   OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialStyle
/// Size: 0x9A50 (0x000000 - 0x009A50)
class FSocialStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 39504;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(get<T>, {0x0, 1760, 0, 0})
	SMember(FButtonStyle)                              ActionButtonStyle                                           OFFSET(get<T>, {0x6E0, 944, 0, 0})
	SMember(FSocialFontStyle)                          SmallFontStyle                                              OFFSET(get<T>, {0xA90, 576, 0, 0})
	SMember(FSocialFontStyle)                          NormalFontStyle                                             OFFSET(get<T>, {0xCD0, 576, 0, 0})
	SMember(FSocialFontStyle)                          LargeFontStyle                                              OFFSET(get<T>, {0xF10, 576, 0, 0})
	SMember(FSocialFontStyle)                          ChatFontStyle                                               OFFSET(get<T>, {0x1150, 576, 0, 0})
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               OFFSET(get<T>, {0x1390, 2576, 0, 0})
	SMember(FCheckBoxStyle)                            RadioBoxStyle                                               OFFSET(get<T>, {0x1DA0, 2576, 0, 0})
	SMember(FSocialListStyle)                          SocialListStyle                                             OFFSET(get<T>, {0x27B0, 14944, 0, 0})
	SMember(FSocialListMargins)                        SocialListMargins                                           OFFSET(get<T>, {0x6210, 528, 0, 0})
	SMember(FChatStyle)                                ChatStyle                                                   OFFSET(get<T>, {0x6420, 8192, 0, 0})
	SMember(FChatColorScheme)                          ChatColorScheme                                             OFFSET(get<T>, {0x8420, 288, 0, 0})
	SMember(FChatChromeStyle)                          ChatChromeStyle                                             OFFSET(get<T>, {0x8540, 2896, 0, 0})
	SMember(FChatChromeMargins)                        ChatChromeMargins                                           OFFSET(get<T>, {0x9090, 100, 0, 0})
	SMember(FChatChromeColorScheme)                    ChatChromeColorScheme                                       OFFSET(get<T>, {0x90F4, 80, 0, 0})
	SMember(FChatMarkupStyle)                          ChatMarkupStyle                                             OFFSET(get<T>, {0x9150, 2224, 0, 0})
	SMember(FSocialSoundSchema)                        SoundSchema                                                 OFFSET(get<T>, {0x9A00, 72, 0, 0})
};

