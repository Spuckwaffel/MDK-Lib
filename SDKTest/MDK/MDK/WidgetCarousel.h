
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: SlateCore

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationBarStyle
/// Size: 0x07F0 (0x000008 - 0x0007F8)
class FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	SMember(FSlateBrush)                               HighlightBrush                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FButtonStyle)                              LeftButtonStyle                                             OFFSET(getStruct<T>, {0x90, 632, 0, 0})
	SMember(FButtonStyle)                              CenterButtonStyle                                           OFFSET(getStruct<T>, {0x308, 632, 0, 0})
	SMember(FButtonStyle)                              RightButtonStyle                                            OFFSET(getStruct<T>, {0x580, 632, 0, 0})
};

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationButtonStyle
/// Size: 0x0388 (0x000008 - 0x000390)
class FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FButtonStyle)                              InnerButtonStyle                                            OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FSlateBrush)                               NavigationButtonLeftImage                                   OFFSET(getStruct<T>, {0x280, 136, 0, 0})
	SMember(FSlateBrush)                               NavigationButtonRightImage                                  OFFSET(getStruct<T>, {0x308, 136, 0, 0})
};

