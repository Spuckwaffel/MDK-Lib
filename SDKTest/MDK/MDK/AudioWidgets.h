
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/AudioWidgets.AudioMeter
/// Size: 0x0538 (0x000178 - 0x0006B0)
class UAudioMeter : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	CMember(TArray<FMeterChannelInfo>)                 MeterChannelInfo                                            ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FDelegateProperty)                         MeterChannelInfoDelegate                                    ___ OFFSET(get<T>, {0x188, 12, 0, 0})
	SMember(FAudioMeterStyle)                          WidgetStyle                                                 ___ OFFSET(get<T>, {0x1A0, 1152, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x620, 1, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             ___ OFFSET(get<T>, {0x624, 16, 0, 0})
	SMember(FLinearColor)                              MeterBackgroundColor                                        ___ OFFSET(get<T>, {0x634, 16, 0, 0})
	SMember(FLinearColor)                              MeterValueColor                                             ___ OFFSET(get<T>, {0x644, 16, 0, 0})
	SMember(FLinearColor)                              MeterPeakColor                                              ___ OFFSET(get<T>, {0x654, 16, 0, 0})
	SMember(FLinearColor)                              MeterClippingColor                                          ___ OFFSET(get<T>, {0x664, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleColor                                             ___ OFFSET(get<T>, {0x674, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleLabelColor                                        ___ OFFSET(get<T>, {0x684, 16, 0, 0})
};

/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0208 (0x000178 - 0x000380)
class UAudioRadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               ___ OFFSET(get<T>, {0x17C, 12, 0, 0})
	CMember(TEnumAsByte<EAudioRadialSliderLayout>)     WidgetLayout                                                ___ OFFSET(get<T>, {0x188, 1, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       ___ OFFSET(get<T>, {0x18C, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         ___ OFFSET(get<T>, {0x19C, 16, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              ___ OFFSET(get<T>, {0x1AC, 16, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FText)                                     UnitsText                                                   ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               ___ OFFSET(get<bool>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         ___ OFFSET(get<bool>, {0x1FA, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         ___ OFFSET(get<bool>, {0x1FB, 1, 0, 0})
	DMember(float)                                     SliderThickness                                             ___ OFFSET(get<float>, {0x1FC, 4, 0, 0})
	SMember(FVector2D)                                 OutputRange                                                 ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              ___ OFFSET(get<T>, {0x210, 16, 0, 0})
};

/// Class /Script/AudioWidgets.AudioVolumeRadialSlider
/// Size: 0x0000 (0x000380 - 0x000380)
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencyRadialSlider
/// Size: 0x0000 (0x000380 - 0x000380)
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/AudioWidgets.AudioSliderBase
/// Size: 0x07B8 (0x000178 - 0x000930)
class UAudioSliderBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FText)                                     UnitsText                                                   ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FDelegateProperty)                         TextLabelBackgroundColorDelegate                            ___ OFFSET(get<T>, {0x1A8, 12, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        ___ OFFSET(get<bool>, {0x1B4, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               ___ OFFSET(get<bool>, {0x1B5, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         ___ OFFSET(get<bool>, {0x1B6, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         ___ OFFSET(get<bool>, {0x1B7, 1, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               ___ OFFSET(get<T>, {0x1B8, 12, 0, 0})
	SMember(FLinearColor)                              SliderBackgroundColor                                       ___ OFFSET(get<T>, {0x1C4, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBackgroundColorDelegate                               ___ OFFSET(get<T>, {0x1D4, 12, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBarColorDelegate                                      ___ OFFSET(get<T>, {0x1F0, 12, 0, 0})
	SMember(FLinearColor)                              SliderThumbColor                                            ___ OFFSET(get<T>, {0x1FC, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderThumbColorDelegate                                    ___ OFFSET(get<T>, {0x20C, 12, 0, 0})
	SMember(FLinearColor)                              WidgetBackgroundColor                                       ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	SMember(FDelegateProperty)                         WidgetBackgroundColorDelegate                               ___ OFFSET(get<T>, {0x228, 12, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x234, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              ___ OFFSET(get<T>, {0x238, 16, 0, 0})
};

/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x000930 - 0x000940)
class UAudioSlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	CMember(TWeakObjectPtr<UCurveFloat*>)              LinToOutputCurve                                            ___ OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(TWeakObjectPtr<UCurveFloat*>)              OutputToLinCurve                                            ___ OFFSET(get<T>, {0x938, 8, 0, 0})
};

/// Class /Script/AudioWidgets.AudioVolumeSlider
/// Size: 0x0000 (0x000940 - 0x000940)
class UAudioVolumeSlider : public UAudioSlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
};

/// Class /Script/AudioWidgets.AudioFrequencySlider
/// Size: 0x0010 (0x000930 - 0x000940)
class UAudioFrequencySlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	SMember(FVector2D)                                 OutputRange                                                 ___ OFFSET(get<T>, {0x930, 16, 0, 0})
};

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMeterChannelInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MeterValue                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakValue                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ClippingValue                                               ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x0478 (0x000008 - 0x000480)
class FAudioMeterStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FSlateBrush)                               MeterValueImage                                             ___ OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             ___ OFFSET(get<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MeterBackgroundImage                                        ___ OFFSET(get<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               MeterValueBackgroundImage                                   ___ OFFSET(get<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               MeterPeakImage                                              ___ OFFSET(get<T>, {0x310, 192, 0, 0})
	SMember(FVector2D)                                 MeterSize                                                   ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FVector2D)                                 MeterPadding                                                ___ OFFSET(get<T>, {0x3E0, 16, 0, 0})
	DMember(float)                                     MeterValuePadding                                           ___ OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(float)                                     PeakValueWidth                                              ___ OFFSET(get<float>, {0x3F4, 4, 0, 0})
	SMember(FVector2D)                                 ValueRangeDb                                                ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	DMember(bool)                                      bShowScale                                                  ___ OFFSET(get<bool>, {0x408, 1, 0, 0})
	DMember(bool)                                      bScaleSide                                                  ___ OFFSET(get<bool>, {0x409, 1, 0, 0})
	DMember(float)                                     ScaleHashOffset                                             ___ OFFSET(get<float>, {0x40C, 4, 0, 0})
	DMember(float)                                     ScaleHashWidth                                              ___ OFFSET(get<float>, {0x410, 4, 0, 0})
	DMember(float)                                     ScaleHashHeight                                             ___ OFFSET(get<float>, {0x414, 4, 0, 0})
	DMember(int32_t)                                   DecibelsPerHash                                             ___ OFFSET(get<int32_t>, {0x418, 4, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        ___ OFFSET(get<T>, {0x420, 88, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FAudioTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             ___ OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             ___ OFFSET(get<T>, {0xD0, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x06C8 (0x000008 - 0x0006D0)
class FAudioSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 ___ OFFSET(get<T>, {0x10, 1184, 0, 0})
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                ___ OFFSET(get<T>, {0x4B0, 240, 0, 0})
	SMember(FSlateBrush)                               WidgetBackgroundImage                                       ___ OFFSET(get<T>, {0x5A0, 192, 0, 0})
	SMember(FSlateColor)                               SliderBackgroundColor                                       ___ OFFSET(get<T>, {0x660, 20, 0, 0})
	SMember(FVector2D)                                 SliderBackgroundSize                                        ___ OFFSET(get<T>, {0x678, 16, 0, 0})
	DMember(float)                                     LabelPadding                                                ___ OFFSET(get<float>, {0x688, 4, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              ___ OFFSET(get<T>, {0x68C, 20, 0, 0})
	SMember(FSlateColor)                               SliderThumbColor                                            ___ OFFSET(get<T>, {0x6A0, 20, 0, 0})
	SMember(FSlateColor)                               WidgetBackgroundColor                                       ___ OFFSET(get<T>, {0x6B4, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0148 (0x000008 - 0x000150)
class FAudioRadialSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                ___ OFFSET(get<T>, {0x10, 240, 0, 0})
	SMember(FSlateColor)                               CenterBackgroundColor                                       ___ OFFSET(get<T>, {0x100, 20, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              ___ OFFSET(get<T>, {0x114, 20, 0, 0})
	SMember(FSlateColor)                               SliderProgressColor                                         ___ OFFSET(get<T>, {0x128, 20, 0, 0})
	DMember(float)                                     LabelPadding                                                ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     DefaultSliderRadius                                         ___ OFFSET(get<float>, {0x140, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.SampledSequenceViewerStyle
/// Size: 0x0148 (0x000008 - 0x000150)
class FSampledSequenceViewerStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSlateColor)                               SequenceColor                                               ___ OFFSET(get<T>, {0x8, 20, 0, 0})
	DMember(float)                                     SequenceLineThickness                                       ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FSlateColor)                               MajorGridLineColor                                          ___ OFFSET(get<T>, {0x20, 20, 0, 0})
	SMember(FSlateColor)                               MinorGridLineColor                                          ___ OFFSET(get<T>, {0x34, 20, 0, 0})
	SMember(FSlateColor)                               ZeroCrossingLineColor                                       ___ OFFSET(get<T>, {0x48, 20, 0, 0})
	DMember(float)                                     ZeroCrossingLineThickness                                   ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     SampleMarkersSize                                           ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FSlateColor)                               SequenceBackgroundColor                                     ___ OFFSET(get<T>, {0x64, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             ___ OFFSET(get<T>, {0x80, 192, 0, 0})
	DMember(float)                                     DesiredWidth                                                ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               ___ OFFSET(get<float>, {0x144, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.PlayheadOverlayStyle
/// Size: 0x0020 (0x000008 - 0x000028)
class FPlayheadOverlayStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSlateColor)                               PlayheadColor                                               ___ OFFSET(get<T>, {0x8, 20, 0, 0})
	DMember(float)                                     PlayheadWidth                                               ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     DesiredWidth                                                ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.FixedSampleSequenceRulerStyle
/// Size: 0x0248 (0x000008 - 0x000250)
class FFixedSampleSequenceRulerStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(float)                                     HandleWidth                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FSlateColor)                               HandleColor                                                 ___ OFFSET(get<T>, {0xC, 20, 0, 0})
	SMember(FSlateBrush)                               HandleBrush                                                 ___ OFFSET(get<T>, {0x20, 192, 0, 0})
	SMember(FSlateColor)                               TicksColor                                                  ___ OFFSET(get<T>, {0xE0, 20, 0, 0})
	SMember(FSlateColor)                               TicksTextColor                                              ___ OFFSET(get<T>, {0xF4, 20, 0, 0})
	SMember(FSlateFontInfo)                            TicksTextFont                                               ___ OFFSET(get<T>, {0x108, 88, 0, 0})
	DMember(float)                                     TicksTextOffset                                             ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             ___ OFFSET(get<T>, {0x164, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             ___ OFFSET(get<T>, {0x180, 192, 0, 0})
	DMember(float)                                     DesiredWidth                                                ___ OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               ___ OFFSET(get<float>, {0x244, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.SampledSequenceValueGridOverlayStyle
/// Size: 0x0090 (0x000008 - 0x000098)
class FSampledSequenceValueGridOverlayStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSlateColor)                               GridColor                                                   ___ OFFSET(get<T>, {0x8, 20, 0, 0})
	DMember(float)                                     GridThickness                                               ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FSlateColor)                               LabelTextColor                                              ___ OFFSET(get<T>, {0x20, 20, 0, 0})
	SMember(FSlateFontInfo)                            LabelTextFont                                               ___ OFFSET(get<T>, {0x38, 88, 0, 0})
	DMember(float)                                     DesiredWidth                                                ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               ___ OFFSET(get<float>, {0x94, 4, 0, 0})
};

/// Enum /Script/AudioWidgets.EAudioRadialSliderLayout
/// Size: 0x04
enum EAudioRadialSliderLayout : uint8_t
{
	Layout_LabelTop0                                                                 = 0,
	Layout_LabelCenter1                                                              = 1,
	Layout_LabelBottom2                                                              = 2,
	Layout_MAX3                                                                      = 3
};

