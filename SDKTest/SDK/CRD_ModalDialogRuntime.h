/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CRD_ModalDialogRuntime.

/// Class /Script/CRD_ModalDialogRuntime.ModalDialogVariant
/// Size: 0x0020 (0x0003E8 - 0x000408)
class UModalDialogVariant : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	CMember(UWidgetAnimation*)                         BoundAnim_Open                                              ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BoundAnim_Response                                          ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResponseAnimationFinished                                 ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalBackActionBoundButtonOption
/// Size: 0x09
enum ECreativeModalBackActionBoundButtonOption : uint8_t
{
	ECreativeModalBackActionBoundButtonOption__None0                                 = 0,
	ECreativeModalBackActionBoundButtonOption__LastButton1                           = 1,
	ECreativeModalBackActionBoundButtonOption__Button12                              = 2,
	ECreativeModalBackActionBoundButtonOption__Button23                              = 3,
	ECreativeModalBackActionBoundButtonOption__Button34                              = 4,
	ECreativeModalBackActionBoundButtonOption__Button45                              = 5,
	ECreativeModalBackActionBoundButtonOption__Button56                              = 6,
	ECreativeModalBackActionBoundButtonOption__Button67                              = 7,
	ECreativeModalBackActionBoundButtonOption__ECreativeModalBackActionBoundButtonOption_MAX8 = 8
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalDialogTimerOption
/// Size: 0x03
enum ECreativeModalDialogTimerOption : uint8_t
{
	ECreativeModalDialogTimerOption__None0                                           = 0,
	ECreativeModalDialogTimerOption__Countdown1                                      = 1,
	ECreativeModalDialogTimerOption__ECreativeModalDialogTimerOption_MAX2            = 2
};

/// Enum /Script/CRD_ModalDialogRuntime.ECreativeModalDialogAlignmentOption
/// Size: 0x17
enum ECreativeModalDialogAlignmentOption : uint8_t
{
	ECreativeModalDialogAlignmentOption__TopLeft0                                    = 0,
	ECreativeModalDialogAlignmentOption__TopCenter1                                  = 1,
	ECreativeModalDialogAlignmentOption__TopRight2                                   = 2,
	ECreativeModalDialogAlignmentOption__MiddleLeft3                                 = 3,
	ECreativeModalDialogAlignmentOption__Centered4                                   = 4,
	ECreativeModalDialogAlignmentOption__MiddleRight5                                = 5,
	ECreativeModalDialogAlignmentOption__BottomLeft6                                 = 6,
	ECreativeModalDialogAlignmentOption__BottomCenter7                               = 7,
	ECreativeModalDialogAlignmentOption__BottomRight8                                = 8,
	ECreativeModalDialogAlignmentOption__CenteredFull9                               = 9,
	ECreativeModalDialogAlignmentOption__LeftTall10                                  = 10,
	ECreativeModalDialogAlignmentOption__CenteredTall11                              = 11,
	ECreativeModalDialogAlignmentOption__RightTall12                                 = 12,
	ECreativeModalDialogAlignmentOption__TopWide13                                   = 13,
	ECreativeModalDialogAlignmentOption__CenteredWide14                              = 14,
	ECreativeModalDialogAlignmentOption__BottomWide15                                = 15,
	ECreativeModalDialogAlignmentOption__ECreativeModalDialogAlignmentOption_MAX16   = 16
};

