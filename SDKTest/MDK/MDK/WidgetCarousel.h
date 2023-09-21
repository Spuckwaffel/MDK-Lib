
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: SlateCore

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationButtonStyle
/// Size: 0x0538 (0x000008 - 0x000540)
class FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FButtonStyle)                              InnerButtonStyle                                            OFFSET(get<T>, {0x10, 944, 0, 0})
	SMember(FSlateBrush)                               NavigationButtonLeftImage                                   OFFSET(get<T>, {0x3C0, 192, 0, 0})
	SMember(FSlateBrush)                               NavigationButtonRightImage                                  OFFSET(get<T>, {0x480, 192, 0, 0})
};

/// Struct /Script/WidgetCarousel.WidgetCarouselNavigationBarStyle
/// Size: 0x0BD8 (0x000008 - 0x000BE0)
class FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	SMember(FSlateBrush)                               HighlightBrush                                              OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FButtonStyle)                              LeftButtonStyle                                             OFFSET(get<T>, {0xD0, 944, 0, 0})
	SMember(FButtonStyle)                              CenterButtonStyle                                           OFFSET(get<T>, {0x480, 944, 0, 0})
	SMember(FButtonStyle)                              RightButtonStyle                                            OFFSET(get<T>, {0x830, 944, 0, 0})
};

