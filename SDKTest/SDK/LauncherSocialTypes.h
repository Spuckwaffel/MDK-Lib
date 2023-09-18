/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LauncherSocialTypes.

/// Struct /Script/LauncherSocialTypes.ChatChromeColorScheme
/// Size: 0x0050 (0x000000 - 0x000050)
class FChatChromeColorScheme : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLinearColor)                              ChatEntryBackgroundColor                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              NoneActiveTabColor                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColor                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              TabFontColorInverted                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              ChatBackgroundColor                                         ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatChromeMargins
/// Size: 0x0064 (0x000000 - 0x000064)
class FChatChromeMargins : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	DMember(float)                                     TabWidth                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  ___ OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowPadding                                           ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	SMember(FMargin)                                   ChatWindowToEntryMargin                                     ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	SMember(FMargin)                                   ChatChannelPadding                                          ___ OFFSET(get<T>, {0x34, 16, 0, 0})
	SMember(FMargin)                                   UserListButtonPadding                                       ___ OFFSET(get<T>, {0x44, 16, 0, 0})
	SMember(FMargin)                                   UserListIconPadding                                         ___ OFFSET(get<T>, {0x54, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatChromeStyle
/// Size: 0x0B50 (0x000000 - 0x000B50)
class FChatChromeStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FSlateBrush)                               UserListBrush                                               ___ OFFSET(get<T>, {0x0, 192, 0, 0})
	SMember(FSlateBrush)                               ChatBackgroundBrush                                         ___ OFFSET(get<T>, {0xC0, 192, 0, 0})
	SMember(FSlateBrush)                               ChatEntryBackgroundBrush                                    ___ OFFSET(get<T>, {0x180, 192, 0, 0})
	SMember(FSlateBrush)                               ChannelBackgroundBrush                                      ___ OFFSET(get<T>, {0x240, 192, 0, 0})
	SMember(FSlateBrush)                               TabBackgroundBrush                                          ___ OFFSET(get<T>, {0x300, 192, 0, 0})
	SMember(FButtonStyle)                              TabSelectorButtonStyle                                      ___ OFFSET(get<T>, {0x3C0, 944, 0, 0})
	SMember(FMargin)                                   TabOptionPadding                                            ___ OFFSET(get<T>, {0x770, 16, 0, 0})
	SMember(FMargin)                                   TabContentPadding                                           ___ OFFSET(get<T>, {0x780, 16, 0, 0})
	SMember(FMargin)                                   TabClosePadding                                             ___ OFFSET(get<T>, {0x790, 16, 0, 0})
	SMember(FButtonStyle)                              UserListButtonStyle                                         ___ OFFSET(get<T>, {0x7A0, 944, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatColorScheme
/// Size: 0x0120 (0x000000 - 0x000120)
class FChatColorScheme : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FLinearColor)                              TimeStampColor                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              DefaultChatColor                                            ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLinearColor)                              WhisperChatColor                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              GlobalChatColor                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              FounderChatColor                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FLinearColor)                              GameChatColor                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FLinearColor)                              TeamChatColor                                               ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FLinearColor)                              PartyChatColor                                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FLinearColor)                              AdminChatColor                                              ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FLinearColor)                              GameAdminChatColor                                          ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FLinearColor)                              WhisperHyperlinkChatColor                                   ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FLinearColor)                              GlobalHyperlinkChatColor                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FLinearColor)                              FounderHyperlinkChatColor                                   ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FLinearColor)                              GameHyperlinkChatColor                                      ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FLinearColor)                              TeamHyperlinkChatColor                                      ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FLinearColor)                              PartyHyperlinkChatColor                                     ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FLinearColor)                              EnemyColor                                                  ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FLinearColor)                              FriendlyColor                                               ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatMarkupStyle
/// Size: 0x08B0 (0x000000 - 0x0008B0)
class FChatMarkupStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	SMember(FButtonStyle)                              MarkupButtonStyle                                           ___ OFFSET(get<T>, {0x0, 944, 0, 0})
	SMember(FTextBlockStyle)                           MarkupTextStyle                                             ___ OFFSET(get<T>, {0x3B0, 784, 0, 0})
	SMember(FSlateBrush)                               MarkupBackground                                            ___ OFFSET(get<T>, {0x6C0, 192, 0, 0})
	SMember(FSlateColor)                               ButtonColor                                                 ___ OFFSET(get<T>, {0x780, 20, 0, 0})
	SMember(FSlateColor)                               ButtonHoverColor                                            ___ OFFSET(get<T>, {0x794, 20, 0, 0})
	SMember(FSlateColor)                               TipColor                                                    ___ OFFSET(get<T>, {0x7A8, 20, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              ___ OFFSET(get<T>, {0x7C0, 192, 0, 0})
	DMember(float)                                     SeperatorThickness                                          ___ OFFSET(get<float>, {0x880, 4, 0, 0})
	SMember(FMargin)                                   MarkupPadding                                               ___ OFFSET(get<T>, {0x884, 16, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               ___ OFFSET(get<T>, {0x894, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ChatStyle
/// Size: 0x2000 (0x000000 - 0x002000)
class FChatStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8192;

public:
	SMember(FEditableTextBoxStyle)                     ChatEntryTextStyle                                          ___ OFFSET(get<T>, {0x0, 3456, 0, 0})
	SMember(FEditableTextBoxStyle)                     ChatDisplayTextStyle                                        ___ OFFSET(get<T>, {0xD80, 3456, 0, 0})
	SMember(FScrollBoxStyle)                           ScrollBorderStyle                                           ___ OFFSET(get<T>, {0x1B00, 816, 0, 0})
	SMember(FSlateBrush)                               MessageNotificationBrush                                    ___ OFFSET(get<T>, {0x1E30, 192, 0, 0})
	SMember(FMargin)                                   ChatEntryPadding                                            ___ OFFSET(get<T>, {0x1EF0, 16, 0, 0})
	DMember(float)                                     ChatEntryHeight                                             ___ OFFSET(get<float>, {0x1F00, 4, 0, 0})
	SMember(FSlateBrush)                               ChatMenuBackgroundBrush                                     ___ OFFSET(get<T>, {0x1F10, 192, 0, 0})
	SMember(FMargin)                                   FriendActionPadding                                         ___ OFFSET(get<T>, {0x1FD0, 16, 0, 0})
	SMember(FMargin)                                   FriendActionHeaderPadding                                   ___ OFFSET(get<T>, {0x1FE0, 16, 0, 0})
	SMember(FMargin)                                   FriendActionStatusMargin                                    ___ OFFSET(get<T>, {0x1FF0, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialFontStyle
/// Size: 0x0240 (0x000000 - 0x000240)
class FSocialFontStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FSlateFontInfo)                            FontSmall                                                   ___ OFFSET(get<T>, {0x0, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontSmallBold                                               ___ OFFSET(get<T>, {0x58, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontNormal                                                  ___ OFFSET(get<T>, {0xB0, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontNormalBold                                              ___ OFFSET(get<T>, {0x108, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontLarge                                                   ___ OFFSET(get<T>, {0x160, 88, 0, 0})
	SMember(FSlateFontInfo)                            FontLargeBold                                               ___ OFFSET(get<T>, {0x1B8, 88, 0, 0})
	SMember(FLinearColor)                              DefaultFontColor                                            ___ OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FLinearColor)                              InvertedFontColor                                           ___ OFFSET(get<T>, {0x220, 16, 0, 0})
	SMember(FLinearColor)                              DefaultDullFontColor                                        ___ OFFSET(get<T>, {0x230, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialListMargins
/// Size: 0x0210 (0x000000 - 0x000210)
class FSocialListMargins : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FVector2D)                                 UserPresenceImageSize                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMargin)                                   HeaderButtonMargin                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FMargin)                                   FriendsListMargin                                           ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FMargin)                                   FriendsListNoFriendsMargin                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderMargin                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMargin)                                   FriendsListHeaderCountMargin                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMargin)                                   HeaderButtonContentMargin                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMargin)                                   FriendItemMargin                                            ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMargin)                                   FriendItemStatusMargin                                      ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FMargin)                                   FriendTipStatusMargin                                       ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPresenceMargin                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMargin)                                   FriendItemPlatformMargin                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMargin)                                   FriendItemTextScrollerMargin                                ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationBorderMargin                                    ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonMargin                                    ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMargin)                                   ConfirmationButtonContentMargin                             ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMargin)                                   NoneFriendContentMargin                                     ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     NoneFriendContentHeight                                     ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     NoneFriendIconWidth                                         ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FMargin)                                   SubMenuBackIconMargin                                       ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FMargin)                                   SubMenuPageIconMargin                                       ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FMargin)                                   RadioSettingTitleMargin                                     ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchIconMargin                                     ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSearchTextMargin                                     ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FMargin)                                   SubMenuBackButtonMargin                                     ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FMargin)                                   SubMenuSettingButtonMargin                                  ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FMargin)                                   SubMenuListMargin                                           ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	DMember(float)                                     SubMenuSeperatorThickness                                   ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     PresenceSeperatorThickness                                  ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	SMember(FMargin)                                   FriendTipMargin                                             ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FMargin)                                   FriendTipPresenceMargin                                     ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMargin)                                   FriendTipSeperatorMargin                                    ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FMargin)                                   ToolTipMargin                                               ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FMargin)                                   TipStatusMargin                                             ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FMargin)                                   AddButtonMargin                                             ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
	SMember(FVector2D)                                 AddButtonSpacing                                            ___ OFFSET(get<T>, {0x200, 16, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialListStyle
/// Size: 0x3A60 (0x000000 - 0x003A60)
class FSocialListStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 14944;

public:
	SMember(FButtonStyle)                              GlobalChatButtonStyle                                       ___ OFFSET(get<T>, {0x0, 944, 0, 0})
	SMember(FSlateBrush)                               GlobalChatIcon                                              ___ OFFSET(get<T>, {0x3B0, 192, 0, 0})
	SMember(FButtonStyle)                              FriendItemButtonStyle                                       ___ OFFSET(get<T>, {0x470, 944, 0, 0})
	SMember(FButtonStyle)                              ConfirmButtonStyle                                          ___ OFFSET(get<T>, {0x820, 944, 0, 0})
	SMember(FButtonStyle)                              CancelButtonStyle                                           ___ OFFSET(get<T>, {0xBD0, 944, 0, 0})
	SMember(FSlateColor)                               ButtonContentColor                                          ___ OFFSET(get<T>, {0xF80, 20, 0, 0})
	SMember(FSlateColor)                               ButtonHoverContentColor                                     ___ OFFSET(get<T>, {0xF94, 20, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowBrush                                        ___ OFFSET(get<T>, {0xFB0, 192, 0, 0})
	SMember(FSlateBrush)                               ActionMenuArrowRightBrush                                   ___ OFFSET(get<T>, {0x1070, 192, 0, 0})
	SMember(FSlateColor)                               ActionMenuBackgroundColor                                   ___ OFFSET(get<T>, {0x1130, 20, 0, 0})
	SMember(FSlateBrush)                               ToolTipArrowBrush                                           ___ OFFSET(get<T>, {0x1150, 192, 0, 0})
	SMember(FButtonStyle)                              BackButtonStyle                                             ___ OFFSET(get<T>, {0x1210, 944, 0, 0})
	SMember(FButtonStyle)                              HeaderButtonStyle                                           ___ OFFSET(get<T>, {0x15C0, 944, 0, 0})
	SMember(FButtonStyle)                              FriendListActionButtonStyle                                 ___ OFFSET(get<T>, {0x1970, 944, 0, 0})
	SMember(FSlateBrush)                               AddFriendButtonContentBrush                                 ___ OFFSET(get<T>, {0x1D20, 192, 0, 0})
	SMember(FSlateBrush)                               StatusIconBrush                                             ___ OFFSET(get<T>, {0x1DE0, 192, 0, 0})
	SMember(FSlateBrush)                               PCIconBrush                                                 ___ OFFSET(get<T>, {0x1EA0, 192, 0, 0})
	SMember(FSlateBrush)                               ConsoleIconBrush                                            ___ OFFSET(get<T>, {0x1F60, 192, 0, 0})
	SMember(FSlateBrush)                               MobileIconBrush                                             ___ OFFSET(get<T>, {0x2020, 192, 0, 0})
	SMember(FSlateBrush)                               FacebookIconBrush                                           ___ OFFSET(get<T>, {0x20E0, 192, 0, 0})
	SMember(FSlateBrush)                               EpicIconBrush                                               ___ OFFSET(get<T>, {0x21A0, 192, 0, 0})
	SMember(FSlateBrush)                               FriendImageBrush                                            ___ OFFSET(get<T>, {0x2260, 192, 0, 0})
	SMember(FSlateBrush)                               OfflineBrush                                                ___ OFFSET(get<T>, {0x2320, 192, 0, 0})
	SMember(FSlateBrush)                               OnlineBrush                                                 ___ OFFSET(get<T>, {0x23E0, 192, 0, 0})
	SMember(FSlateBrush)                               AwayBrush                                                   ___ OFFSET(get<T>, {0x24A0, 192, 0, 0})
	SMember(FSlateBrush)                               SpectateBrush                                               ___ OFFSET(get<T>, {0x2560, 192, 0, 0})
	SMember(FSlateBrush)                               FriendsContainerBackground                                  ___ OFFSET(get<T>, {0x2620, 192, 0, 0})
	SMember(FSlateBrush)                               FriendsListBackground                                       ___ OFFSET(get<T>, {0x26E0, 192, 0, 0})
	SMember(FEditableTextBoxStyle)                     AddFriendEditableTextStyle                                  ___ OFFSET(get<T>, {0x27A0, 3456, 0, 0})
	SMember(FSlateBrush)                               BackBrush                                                   ___ OFFSET(get<T>, {0x3520, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedOptionBrush                                         ___ OFFSET(get<T>, {0x35E0, 192, 0, 0})
	SMember(FSlateBrush)                               SettingsBrush                                               ___ OFFSET(get<T>, {0x36A0, 192, 0, 0})
	SMember(FSlateBrush)                               SeperatorBrush                                              ___ OFFSET(get<T>, {0x3760, 192, 0, 0})
	SMember(FSlateBrush)                               PresenceSeperatorBrush                                      ___ OFFSET(get<T>, {0x3820, 192, 0, 0})
	SMember(FSlateBrush)                               FontSizeBrush                                               ___ OFFSET(get<T>, {0x38E0, 192, 0, 0})
	SMember(FSlateBrush)                               SearchBrush                                                 ___ OFFSET(get<T>, {0x39A0, 192, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.ProfanityData
/// Size: 0x0038 (0x000000 - 0x000038)
class FProfanityData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   CountryCode                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ProfanityList                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   WhiteList                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bAutoAdd                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialSoundSchema
/// Size: 0x0048 (0x000000 - 0x000048)
class FSocialSoundSchema : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSlateSound)                               MessageReceivedSound                                        ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSlateSound)                               PartyInviteReceivedSound                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FSlateSound)                               FriendInviteReceivedSound                                   ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/LauncherSocialTypes.SocialStyle
/// Size: 0x9A50 (0x000000 - 0x009A50)
class FSocialStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 39504;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              ___ OFFSET(get<T>, {0x0, 1760, 0, 0})
	SMember(FButtonStyle)                              ActionButtonStyle                                           ___ OFFSET(get<T>, {0x6E0, 944, 0, 0})
	SMember(FSocialFontStyle)                          SmallFontStyle                                              ___ OFFSET(get<T>, {0xA90, 576, 0, 0})
	SMember(FSocialFontStyle)                          NormalFontStyle                                             ___ OFFSET(get<T>, {0xCD0, 576, 0, 0})
	SMember(FSocialFontStyle)                          LargeFontStyle                                              ___ OFFSET(get<T>, {0xF10, 576, 0, 0})
	SMember(FSocialFontStyle)                          ChatFontStyle                                               ___ OFFSET(get<T>, {0x1150, 576, 0, 0})
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               ___ OFFSET(get<T>, {0x1390, 2576, 0, 0})
	SMember(FCheckBoxStyle)                            RadioBoxStyle                                               ___ OFFSET(get<T>, {0x1DA0, 2576, 0, 0})
	SMember(FSocialListStyle)                          SocialListStyle                                             ___ OFFSET(get<T>, {0x27B0, 14944, 0, 0})
	SMember(FSocialListMargins)                        SocialListMargins                                           ___ OFFSET(get<T>, {0x6210, 528, 0, 0})
	SMember(FChatStyle)                                ChatStyle                                                   ___ OFFSET(get<T>, {0x6420, 8192, 0, 0})
	SMember(FChatColorScheme)                          ChatColorScheme                                             ___ OFFSET(get<T>, {0x8420, 288, 0, 0})
	SMember(FChatChromeStyle)                          ChatChromeStyle                                             ___ OFFSET(get<T>, {0x8540, 2896, 0, 0})
	SMember(FChatChromeMargins)                        ChatChromeMargins                                           ___ OFFSET(get<T>, {0x9090, 100, 0, 0})
	SMember(FChatChromeColorScheme)                    ChatChromeColorScheme                                       ___ OFFSET(get<T>, {0x90F4, 80, 0, 0})
	SMember(FChatMarkupStyle)                          ChatMarkupStyle                                             ___ OFFSET(get<T>, {0x9150, 2224, 0, 0})
	SMember(FSocialSoundSchema)                        SoundSchema                                                 ___ OFFSET(get<T>, {0x9A00, 72, 0, 0})
};

