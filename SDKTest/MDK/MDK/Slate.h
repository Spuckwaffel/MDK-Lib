
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SlateCore

/// Class /Script/Slate.ButtonWidgetStyle
/// Size: 0x0278 (0x000030 - 0x0002A8)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(getStruct<T>, {0x30, 632, 0, 0})
};

/// Class /Script/Slate.CheckBoxWidgetStyle
/// Size: 0x0580 (0x000030 - 0x0005B0)
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	SMember(FCheckBoxStyle)                            CheckBoxStyle                                               OFFSET(getStruct<T>, {0x30, 1408, 0, 0})
};

/// Class /Script/Slate.ComboBoxWidgetStyle
/// Size: 0x03D8 (0x000030 - 0x000408)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FComboBoxStyle)                            ComboBoxStyle                                               OFFSET(getStruct<T>, {0x30, 984, 0, 0})
};

/// Class /Script/Slate.ComboButtonWidgetStyle
/// Size: 0x03A0 (0x000030 - 0x0003D0)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(getStruct<T>, {0x30, 928, 0, 0})
};

/// Class /Script/Slate.EditableTextBoxWidgetStyle
/// Size: 0x07F0 (0x000030 - 0x000820)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2080;

public:
	SMember(FEditableTextBoxStyle)                     EditableTextBoxStyle                                        OFFSET(getStruct<T>, {0x30, 2032, 0, 0})
};

/// Class /Script/Slate.EditableTextWidgetStyle
/// Size: 0x0218 (0x000030 - 0x000248)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FEditableTextStyle)                        EditableTextStyle                                           OFFSET(getStruct<T>, {0x30, 536, 0, 0})
};

/// Class /Script/Slate.ProgressWidgetStyle
/// Size: 0x01A0 (0x000030 - 0x0001D0)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FProgressBarStyle)                         ProgressBarStyle                                            OFFSET(getStruct<T>, {0x30, 416, 0, 0})
};

/// Class /Script/Slate.ScrollBarWidgetStyle
/// Size: 0x04D0 (0x000030 - 0x000500)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x30, 1232, 0, 0})
};

/// Class /Script/Slate.ScrollBoxWidgetStyle
/// Size: 0x0228 (0x000030 - 0x000258)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FScrollBoxStyle)                           ScrollBoxStyle                                              OFFSET(getStruct<T>, {0x30, 552, 0, 0})
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

/// Class /Script/Slate.SpinBoxWidgetStyle
/// Size: 0x02E8 (0x000030 - 0x000318)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FSpinBoxStyle)                             SpinBoxStyle                                                OFFSET(getStruct<T>, {0x30, 744, 0, 0})
};

/// Class /Script/Slate.TextBlockWidgetStyle
/// Size: 0x01E0 (0x000030 - 0x000210)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FTextBlockStyle)                           TextBlockStyle                                              OFFSET(getStruct<T>, {0x30, 480, 0, 0})
};

/// Struct /Script/Slate.VirtualKeyboardOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FVirtualKeyboardOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnableAutocorrect                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Slate.InputChord
/// Size: 0x0020 (0x000000 - 0x000020)
class FInputChord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      bShift                                                      OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bCtrl                                                       OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bAlt                                                        OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bCmd                                                        OFFSET(get<bool>, {0x18, 1, 1, 3})
};

/// Struct /Script/Slate.Anchors
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnchors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVector2D)                                 Minimum                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Maximum                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/Slate.ETextFlowDirection
/// Size: 0x04
enum ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto0                                                        = 0,
	ETextFlowDirection__LeftToRight1                                                 = 1,
	ETextFlowDirection__RightToLeft2                                                 = 2,
	ETextFlowDirection__ETextFlowDirection_MAX3                                      = 3
};

/// Enum /Script/Slate.ETextJustify
/// Size: 0x04
enum ETextJustify : uint8_t
{
	ETextJustify__Left0                                                              = 0,
	ETextJustify__Center1                                                            = 1,
	ETextJustify__Right2                                                             = 2,
	ETextJustify__ETextJustify_MAX3                                                  = 3
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

/// Enum /Script/Slate.ETextWrappingPolicy
/// Size: 0x03
enum ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping0                                            = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping1                                  = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX2                                    = 2
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

/// Enum /Script/Slate.EProgressBarFillType
/// Size: 0x06
enum EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight0                                               = 0,
	EProgressBarFillType__RightToLeft1                                               = 1,
	EProgressBarFillType__FillFromCenter2                                            = 2,
	EProgressBarFillType__TopToBottom3                                               = 3,
	EProgressBarFillType__BottomToTop4                                               = 4,
	EProgressBarFillType__EProgressBarFillType_MAX5                                  = 5
};

/// Enum /Script/Slate.EStretch
/// Size: 0x09
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
	EStretch__EStretch_MAX8                                                          = 8
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

/// Enum /Script/Slate.EDescendantScrollDestination
/// Size: 0x04
enum EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView0                                          = 0,
	EDescendantScrollDestination__TopOrLeft1                                         = 1,
	EDescendantScrollDestination__Center2                                            = 2,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX3                  = 3
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

/// Enum /Script/Slate.EMultipleKeyBindingIndex
/// Size: 0x04
enum EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary0                                               = 0,
	EMultipleKeyBindingIndex__Secondary1                                             = 1,
	EMultipleKeyBindingIndex__NumChords2                                             = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX3                          = 3
};

