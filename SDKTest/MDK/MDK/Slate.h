
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SlateCore

/// Class /Script/Slate.ToolMenuBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UToolMenuBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Slate.SlateSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bExplicitCanvasChildZOrder                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x03B0 (0x000030 - 0x0003E0)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(get<T>, {0x30, 944, 0, 0})
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0A10 (0x000030 - 0x000A40)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2624;

public:
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               OFFSET(get<T>, {0x30, 2576, 0, 0})
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x0600 (0x000030 - 0x000630)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	SMember(FComboBoxStyle)                            ComboBoxStyle                                               OFFSET(get<T>, {0x30, 1536, 0, 0})
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x05A0 (0x000030 - 0x0005D0)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(get<T>, {0x30, 1440, 0, 0})
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x0D80 (0x000030 - 0x000DB0)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3504;

public:
	SMember(FEditableTextBoxStyle)                     EditableTextBoxStyle                                        OFFSET(get<T>, {0x30, 3456, 0, 0})
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x02C0 (0x000030 - 0x0002F0)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FEditableTextStyle)                        EditableTextStyle                                           OFFSET(get<T>, {0x30, 704, 0, 0})
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x0260 (0x000030 - 0x000290)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FProgressBarStyle)                         ProgressBarStyle                                            OFFSET(get<T>, {0x30, 608, 0, 0})
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x06E0 (0x000030 - 0x000710)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(get<T>, {0x30, 1760, 0, 0})
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0330 (0x000030 - 0x000360)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FScrollBoxStyle)                           ScrollBoxStyle                                              OFFSET(get<T>, {0x30, 816, 0, 0})
};

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x0590 (0x000030 - 0x0005C0)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	SMember(FSpinBoxStyle)                             SpinBoxStyle                                                OFFSET(get<T>, {0x30, 1424, 0, 0})
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x0310 (0x000030 - 0x000340)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FTextBlockStyle)                           TextBlockStyle                                              OFFSET(get<T>, {0x30, 784, 0, 0})
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FVirtualKeyboardOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnableAutocorrect                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (0x000000 - 0x000020)
class FInputChord : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FKey)                                      Key                                                         OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bShift                                                      OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bCtrl                                                       OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bAlt                                                        OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bCmd                                                        OFFSET(get<bool>, {0x18, 1, 1, 3})
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0020 (0x000000 - 0x000020)
class FAnchors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector2D)                                 Minimum                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 Maximum                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Slate.CharRange
/// Size: 0x0004 (0x000000 - 0x000004)
class FCharRange : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  First                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Last                                                        OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/Slate.CharRangeList
/// Size: 0x0010 (0x000000 - 0x000010)
class FCharRangeList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCharRange>)                        Ranges                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenuEntry
/// Size: 0x0004 (0x000000 - 0x000004)
class FCustomizedToolMenuEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(ECustomizedToolMenuVisibility)             Visibility                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenuSection
/// Size: 0x0004 (0x000000 - 0x000004)
class FCustomizedToolMenuSection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(ECustomizedToolMenuVisibility)             Visibility                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenuNameArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FCustomizedToolMenuNameArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             Names                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Slate.CustomizedToolMenu
/// Size: 0x0200 (0x000000 - 0x000200)
class FCustomizedToolMenu : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TMap<FName, FCustomizedToolMenuEntry>)     Entries                                                     OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, FCustomizedToolMenuSection>)   Sections                                                    OFFSET(get<T>, {0x58, 80, 0, 0})
	CMember(TMap<FName, FCustomizedToolMenuNameArray>) EntryOrder                                                  OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TArray<FName>)                             SectionOrder                                                OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FName>)                             SuppressExtenders                                           OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Enum /Script/Slate.EVirtualKeyboardTrigger
/// Size: 0x03
enum EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer0                                       = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents1                                       = 1,
	EVirtualKeyboardTrigger__EVirtualKeyboardTrigger_MAX2                            = 2
};

/// Enum /Script/Slate.EVirtualKeyboardDismissAction
/// Size: 0x04
enum EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss0                              = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept1                               = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss2                              = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX3                = 3
};

/// Enum /Script/Slate.ESelectionMode
/// Size: 0x05
enum ESelectionMode : uint8_t
{
	ESelectionMode__None0                                                            = 0,
	ESelectionMode__Single1                                                          = 1,
	ESelectionMode__SingleToggle2                                                    = 2,
	ESelectionMode__Multi3                                                           = 3,
	ESelectionMode__ESelectionMode_MAX4                                              = 4
};

/// Enum /Script/Slate.ETableViewMode
/// Size: 0x04
enum ETableViewMode : uint8_t
{
	ETableViewMode__List0                                                            = 0,
	ETableViewMode__Tile1                                                            = 1,
	ETableViewMode__Tree2                                                            = 2,
	ETableViewMode__ETableViewMode_MAX3                                              = 3
};

/// Enum /Script/Slate.EMultiBoxType
/// Size: 0x09
enum EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar0                                                          = 0,
	EMultiBoxType__ToolBar1                                                          = 1,
	EMultiBoxType__VerticalToolBar2                                                  = 2,
	EMultiBoxType__SlimHorizontalToolBar3                                            = 3,
	EMultiBoxType__UniformToolBar4                                                   = 4,
	EMultiBoxType__Menu5                                                             = 5,
	EMultiBoxType__ButtonRow6                                                        = 6,
	EMultiBoxType__SlimHorizontalUniformToolBar7                                     = 7,
	EMultiBoxType__EMultiBoxType_MAX8                                                = 8
};

/// Enum /Script/Slate.EMultiBlockType
/// Size: 0x10
enum EMultiBlockType : uint8_t
{
	EMultiBlockType__None0                                                           = 0,
	EMultiBlockType__ButtonRow1                                                      = 1,
	EMultiBlockType__EditableText2                                                   = 2,
	EMultiBlockType__Heading3                                                        = 3,
	EMultiBlockType__MenuEntry4                                                      = 4,
	EMultiBlockType__Separator5                                                      = 5,
	EMultiBlockType__ToolBarButton6                                                  = 6,
	EMultiBlockType__ToolBarComboButton7                                             = 7,
	EMultiBlockType__Widget8                                                         = 8,
	EMultiBlockType__EMultiBlockType_MAX9                                            = 9
};

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x05
enum EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView0                                          = 0,
	EDescendantScrollDestination__TopOrLeft1                                         = 1,
	EDescendantScrollDestination__Center2                                            = 2,
	EDescendantScrollDestination__BottomOrRight3                                     = 3,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX4                  = 4
};

/// Enum /Script/Slate.EScrollWhenFocusChanges
/// Size: 0x04
enum EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll0                                               = 0,
	EScrollWhenFocusChanges__InstantScroll1                                          = 1,
	EScrollWhenFocusChanges__AnimatedScroll2                                         = 2,
	EScrollWhenFocusChanges__EScrollWhenFocusChanges_MAX3                            = 3
};

/// Enum /Script/Slate.ECustomizedToolMenuVisibility
/// Size: 0x04
enum ECustomizedToolMenuVisibility : uint8_t
{
	ECustomizedToolMenuVisibility__None0                                             = 0,
	ECustomizedToolMenuVisibility__Visible1                                          = 1,
	ECustomizedToolMenuVisibility__Hidden2                                           = 2,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX3                = 3
};

/// Enum /Script/Slate.EUserInterfaceActionType
/// Size: 0x07
enum EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None0                                                  = 0,
	EUserInterfaceActionType__Button1                                                = 1,
	EUserInterfaceActionType__ToggleButton2                                          = 2,
	EUserInterfaceActionType__RadioButton3                                           = 3,
	EUserInterfaceActionType__Check4                                                 = 4,
	EUserInterfaceActionType__CollapsedButton5                                       = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX6                          = 6
};

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x04
enum EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary0                                               = 0,
	EMultipleKeyBindingIndex__Secondary1                                             = 1,
	EMultipleKeyBindingIndex__NumChords2                                             = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX3                          = 3
};

/// Enum /Script/Slate.ETextJustify
/// Size: 0x06
enum ETextJustify : uint8_t
{
	ETextJustify__Left0                                                              = 0,
	ETextJustify__Center1                                                            = 1,
	ETextJustify__Right2                                                             = 2,
	ETextJustify__InvariantLeft3                                                     = 3,
	ETextJustify__InvariantRight4                                                    = 4,
	ETextJustify__ETextJustify_MAX5                                                  = 5
};

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x03
enum ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping0                                            = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping1                                  = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX2                                    = 2
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x05
enum ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto0                                                        = 0,
	ETextFlowDirection__LeftToRight1                                                 = 1,
	ETextFlowDirection__RightToLeft2                                                 = 2,
	ETextFlowDirection__Culture3                                                     = 3,
	ETextFlowDirection__ETextFlowDirection_MAX4                                      = 4
};

/// Enum /Script/Slate.EStretchDirection
/// Size: 0x04
enum EStretchDirection : uint8_t
{
	EStretchDirection__Both0                                                         = 0,
	EStretchDirection__DownOnly1                                                     = 1,
	EStretchDirection__UpOnly2                                                       = 2,
	EStretchDirection__EStretchDirection_MAX3                                        = 3
};

/// Enum /Script/Slate.EStretch
/// Size: 0x10
enum EStretch : uint8_t
{
	EStretch__None0                                                                  = 0,
	EStretch__Fill1                                                                  = 1,
	EStretch__ScaleToFit2                                                            = 2,
	EStretch__ScaleToFitX3                                                           = 3,
	EStretch__ScaleToFitY4                                                           = 4,
	EStretch__ScaleToFill5                                                           = 5,
	EStretch__ScaleBySafeZone6                                                       = 6,
	EStretch__UserSpecified7                                                         = 7,
	EStretch__UserSpecifiedWithClipping8                                             = 8,
	EStretch__EStretch_MAX9                                                          = 9
};

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x08
enum EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight0                                               = 0,
	EProgressBarFillType__RightToLeft1                                               = 1,
	EProgressBarFillType__FillFromCenter2                                            = 2,
	EProgressBarFillType__FillFromCenterHorizontal3                                  = 3,
	EProgressBarFillType__FillFromCenterVertical4                                    = 4,
	EProgressBarFillType__TopToBottom5                                               = 5,
	EProgressBarFillType__BottomToTop6                                               = 6,
	EProgressBarFillType__EProgressBarFillType_MAX7                                  = 7
};

/// Enum /Script/Slate.EProgressBarFillStyle
/// Size: 0x03
enum EProgressBarFillStyle : uint8_t
{
	EProgressBarFillStyle__Mask0                                                     = 0,
	EProgressBarFillStyle__Scale1                                                    = 1,
	EProgressBarFillStyle__EProgressBarFillStyle_MAX2                                = 2
};

/// Enum /Script/Slate.EListItemAlignment
/// Size: 0x08
enum EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed0                                           = 0,
	EListItemAlignment__EvenlySize1                                                  = 1,
	EListItemAlignment__EvenlyWide2                                                  = 2,
	EListItemAlignment__LeftAligned3                                                 = 3,
	EListItemAlignment__RightAligned4                                                = 4,
	EListItemAlignment__CenterAligned5                                               = 5,
	EListItemAlignment__Fill6                                                        = 6,
	EListItemAlignment__EListItemAlignment_MAX7                                      = 7
};

