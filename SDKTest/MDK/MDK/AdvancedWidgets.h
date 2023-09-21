
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/AdvancedWidgets.RadialSlider
/// Size: 0x0628 (0x000178 - 0x0007A0)
class URadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               ___ OFFSET(get<T>, {0x17C, 12, 0, 0})
	DMember(bool)                                      bUseCustomDefaultValue                                      ___ OFFSET(get<bool>, {0x188, 1, 0, 0})
	DMember(float)                                     CustomDefaultValue                                          ___ OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SliderRange                                                 ___ OFFSET(get<T>, {0x190, 136, 0, 0})
	CMember(TArray<float>)                             ValueTags                                                   ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	DMember(float)                                     SliderHandleStartAngle                                      ___ OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(float)                                     SliderHandleEndAngle                                        ___ OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     AngularOffset                                               ___ OFFSET(get<float>, {0x230, 4, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           ___ OFFSET(get<T>, {0x238, 16, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 ___ OFFSET(get<T>, {0x250, 1184, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              ___ OFFSET(get<T>, {0x6F0, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         ___ OFFSET(get<T>, {0x700, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           ___ OFFSET(get<T>, {0x710, 16, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       ___ OFFSET(get<T>, {0x720, 16, 0, 0})
	DMember(bool)                                      Locked                                                      ___ OFFSET(get<bool>, {0x730, 1, 0, 0})
	DMember(bool)                                      MouseUsesStep                                               ___ OFFSET(get<bool>, {0x731, 1, 0, 0})
	DMember(bool)                                      RequiresControllerLock                                      ___ OFFSET(get<bool>, {0x732, 1, 0, 0})
	DMember(float)                                     StepSize                                                    ___ OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 ___ OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      UseVerticalDrag                                             ___ OFFSET(get<bool>, {0x739, 1, 0, 0})
	DMember(bool)                                      ShowSliderHandle                                            ___ OFFSET(get<bool>, {0x73A, 1, 0, 0})
	DMember(bool)                                      ShowSliderHand                                              ___ OFFSET(get<bool>, {0x73B, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         ___ OFFSET(get<T>, {0x740, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           ___ OFFSET(get<T>, {0x750, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    ___ OFFSET(get<T>, {0x760, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      ___ OFFSET(get<T>, {0x770, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              ___ OFFSET(get<T>, {0x780, 16, 0, 0})
};

