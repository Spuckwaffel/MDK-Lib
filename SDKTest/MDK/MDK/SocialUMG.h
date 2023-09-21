
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Party
/// dependency: UMG

/// Class /Script/SocialUMG.DesignerPreviewChatChannel
/// Size: 0x0068 (0x0000E8 - 0x000150)
class UDesignerPreviewChatChannel : public USocialChatChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/SocialUMG.SocialChatChannelTab
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class USocialChatChannelTab : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(USocialChatChannel*)                       ChatChannel                                                 ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonText_ChannelName                                      ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialChatContainer
/// Size: 0x0058 (0x0002A8 - 0x000300)
class USocialChatContainer : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(USocialChatManager*)                       ChatManager                                                 ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<USocialChatChannel*>)               JoinedChannels                                              ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(USocialChatChannel*)                       ActiveChannel                                               ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 TabButtonGroup                                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(USocialChatMessageList*)                   ChatList_Messages                                           ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USocialChatEditableText*)                  ChatEditableText_MessageEntry                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SendMessage                                          ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_JoinedChannels                                     ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Channels                                          ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialChatMessageEntry
/// Size: 0x0160 (0x0002A8 - 0x000408)
class USocialChatMessageEntry : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FSocialChatMessageEntryStyle)              DefaultStyle                                                ___ OFFSET(get<T>, {0x2C0, 312, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Message                                            ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UButton*)                                  Button_MessageButton                                        ___ OFFSET(get<T>, {0x400, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialChatMessageList
/// Size: 0x0118 (0x000298 - 0x0003B0)
class USocialChatMessageList : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	DMember(bool)                                      bIsFocusable                                                ___ OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(USocialChatChannel*)                       ActiveChannel                                               ___ OFFSET(get<T>, {0x388, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialGroupListEntry
/// Size: 0x0030 (0x0014C0 - 0x0014F0)
class USocialGroupListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(UClass*)                                   ActionMenuClass                                             ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(USocialGroupChannel*)                      SocialGroup                                                 ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UTextBlock*)                               Text_GroupName                                              ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialGroupTreeView
/// Size: 0x0020 (0x000C30 - 0x000C50)
class USocialGroupTreeView : public UTreeView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
	CMember(UClass*)                                   GroupEntryWidgetClass                                       ___ OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(UClass*)                                   UserEntryWidgetClass                                        ___ OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(UClass*)                                   ActionMenuClass                                             ___ OFFSET(get<T>, {0xC38, 8, 0, 0})
	CMember(USocialInteractionMenu*)                   ActionMenu                                                  ___ OFFSET(get<T>, {0xC40, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialInteractionButton
/// Size: 0x00B0 (0x0014C0 - 0x001570)
class USocialInteractionButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	SMember(FLinearColor)                              DefaultIndicatorColor                                       ___ OFFSET(get<T>, {0x14C0, 16, 0, 0})
	SMember(FLinearColor)                              AlertingIndicatorColor                                      ___ OFFSET(get<T>, {0x14D0, 16, 0, 0})
	CMember(UCommonTextBlock*)                         Text_InteractionName                                        ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UBorder*)                                  Border_InteractionIndicator                                 ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialActionMenu
/// Size: 0x0040 (0x0003E8 - 0x000428)
class USocialActionMenu : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
};

/// Class /Script/SocialUMG.SocialInteractionMenu
/// Size: 0x0068 (0x000428 - 0x000490)
class USocialInteractionMenu : public USocialActionMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(UDynamicEntryBox*)                         EntryBox_PositiveInteractions                               ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_NegativeInteractions                               ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_InteractionSeparator                                 ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Confirmation                                       ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UTextBlock*)                               Text_ConfirmationLabel                                      ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Confirm                                              ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Decline                                              ___ OFFSET(get<T>, {0x488, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialNameTextBlock
/// Size: 0x0020 (0x000870 - 0x000890)
class USocialNameTextBlock : public UCommonRichTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
	CMember(USocialUser*)                              SocialUser                                                  ___ OFFSET(get<T>, {0x868, 8, 0, 0})
	DMember(float)                                     MinDesiredSize                                              ___ OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(float)                                     MaxDesiredSize                                              ___ OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(bool)                                      bShowSecondName                                             ___ OFFSET(get<bool>, {0x878, 1, 0, 0})
	CMember(EPlatformIconDisplayRule)                  PlatformIconDisplayRule                                     ___ OFFSET(get<T>, {0x879, 1, 0, 0})
	DMember(bool)                                      bWrapToNextLine                                             ___ OFFSET(get<bool>, {0x87A, 1, 0, 0})
	SMember(FColor)                                    SecondNameColor                                             ___ OFFSET(get<T>, {0x87C, 4, 0, 0})
	DMember(int32_t)                                   SecondNameFontSize                                          ___ OFFSET(get<int32_t>, {0x880, 4, 0, 0})
};

/// Class /Script/SocialUMG.SocialListEntryBase
/// Size: 0x0020 (0x0014C0 - 0x0014E0)
class USocialListEntryBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
};

/// Class /Script/SocialUMG.SocialListInteractableEntryBase
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class USocialListInteractableEntryBase : public USocialListEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(UClass*)                                   ActionMenuClass                                             ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UMenuAnchor*)                              MenuAnchor_Actions                                          ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialListUserEntryBase
/// Size: 0x0020 (0x0014F0 - 0x001510)
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(USocialNameTextBlock*)                     Text_SocialName                                             ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(USocialNameTextBlock*)                     Text_SocialName_Hover                                       ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_RichPresence                                           ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_RichPresence_Hover                                     ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserListHeaderEntry
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class USocialUserListHeaderEntry : public USocialListEntryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(UTextBlock*)                               Text_ListName                                               ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UTextBlock*)                               Text_NumEntries                                             ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserListViewBase
/// Size: 0x0110 (0x000298 - 0x0003A8)
class USocialUserListViewBase : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	DMember(float)                                     EntrySpacing                                                ___ OFFSET(get<float>, {0x3A0, 4, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserListView
/// Size: 0x00A0 (0x0003A8 - 0x000448)
class USocialUserListView : public USocialUserListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(USocialActionMenu*)                        ActiveActionMenu                                            ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(TMap<UClass*, USocialActionMenu*>)         CachedActionMenuPool                                        ___ OFFSET(get<T>, {0x3F8, 80, 0, 0})
};

/// Class /Script/SocialUMG.SocialUserTreeView
/// Size: 0x00A0 (0x000448 - 0x0004E8)
class USocialUserTreeView : public USocialUserListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	CMember(UClass*)                                   UserEntryWidgetClass                                        ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UClass*)                                   InviteEntryWidgetClass                                      ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
};

/// Class /Script/SocialUMG.SocialChatEditableText
/// Size: 0x0638 (0x000178 - 0x0007B0)
class USocialChatEditableText : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	SMember(FEditableTextStyle)                        EditableTextStyle                                           ___ OFFSET(get<T>, {0x1A0, 704, 0, 0})
	SMember(FTextBlockStyle)                           AutoCompleteStyle                                           ___ OFFSET(get<T>, {0x460, 784, 0, 0})
};

/// Struct /Script/SocialUMG.SocialChatMessageEntryTextStyle
/// Size: 0x0068 (0x000000 - 0x000068)
class FSocialChatMessageEntryTextStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FSlateFontInfo)                            FontInfo                                                    ___ OFFSET(get<T>, {0x0, 88, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/SocialUMG.SocialChatMessageEntryStyle
/// Size: 0x0138 (0x000000 - 0x000138)
class FSocialChatMessageEntryStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FSocialChatMessageEntryTextStyle)          SenderNameStyle                                             ___ OFFSET(get<T>, {0x0, 104, 0, 0})
	SMember(FSocialChatMessageEntryTextStyle)          ChannelNameStyle                                            ___ OFFSET(get<T>, {0x68, 104, 0, 0})
	SMember(FSocialChatMessageEntryTextStyle)          MessageTextStyle                                            ___ OFFSET(get<T>, {0xD0, 104, 0, 0})
};

