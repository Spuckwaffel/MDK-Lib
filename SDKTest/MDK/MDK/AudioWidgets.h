
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
	CMember(TArray<FMeterChannelInfo>)                 MeterChannelInfo                                            OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FDelegateProperty)                         MeterChannelInfoDelegate                                    OFFSET(get<T>, {0x188, 12, 0, 0})
	SMember(FAudioMeterStyle)                          WidgetStyle                                                 OFFSET(get<T>, {0x1A0, 1152, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x620, 1, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(get<T>, {0x624, 16, 0, 0})
	SMember(FLinearColor)                              MeterBackgroundColor                                        OFFSET(get<T>, {0x634, 16, 0, 0})
	SMember(FLinearColor)                              MeterValueColor                                             OFFSET(get<T>, {0x644, 16, 0, 0})
	SMember(FLinearColor)                              MeterPeakColor                                              OFFSET(get<T>, {0x654, 16, 0, 0})
	SMember(FLinearColor)                              MeterClippingColor                                          OFFSET(get<T>, {0x664, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleColor                                             OFFSET(get<T>, {0x674, 16, 0, 0})
	SMember(FLinearColor)                              MeterScaleLabelColor                                        OFFSET(get<T>, {0x684, 16, 0, 0})
};



	/// Functions
	// Function /Script/AudioWidgets.AudioMeter.SetMeterValueColor
	// void SetMeterValueColor(FLinearColor InValue);                                                                           // [0x99f9ef4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleLabelColor
	// void SetMeterScaleLabelColor(FLinearColor InValue);                                                                      // [0x99f9d98] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterScaleColor
	// void SetMeterScaleColor(FLinearColor InValue);                                                                           // [0x99f9c3c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterPeakColor
	// void SetMeterPeakColor(FLinearColor InValue);                                                                            // [0x99f9ae0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterClippingColor
	// void SetMeterClippingColor(FLinearColor InValue);                                                                        // [0x99f9984] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterChannelInfo
	// void SetMeterChannelInfo(TArray<FMeterChannelInfo>& InMeterChannelInfo);                                                 // [0x99f92b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetMeterBackgroundColor
	// void SetMeterBackgroundColor(FLinearColor InValue);                                                                      // [0x99f915c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InValue);                                                                           // [0x99f8d40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
	// TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();                                                      // [0x1ebf994] Public|Delegate      
	// Function /Script/AudioWidgets.AudioMeter.GetMeterChannelInfo
	// TArray<FMeterChannelInfo> GetMeterChannelInfo();                                                                         // [0x99f84d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/AudioWidgets.AudioRadialSlider
/// Size: 0x0208 (0x000178 - 0x000380)
class UAudioRadialSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(get<T>, {0x17C, 12, 0, 0})
	CMember(TEnumAsByte<EAudioRadialSliderLayout>)     WidgetLayout                                                OFFSET(get<T>, {0x188, 1, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       OFFSET(get<T>, {0x18C, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         OFFSET(get<T>, {0x19C, 16, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(get<T>, {0x1AC, 16, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(get<T>, {0x1D0, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x1F9, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x1FA, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x1FB, 1, 0, 0})
	DMember(float)                                     SliderThickness                                             OFFSET(get<float>, {0x1FC, 4, 0, 0})
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(get<T>, {0x210, 16, 0, 0})
};



	/// Functions
	// Function /Script/AudioWidgets.AudioRadialSlider.SetWidgetLayout
	// void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);                                                    // [0x99fb2ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x99fb070] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x99faf58] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x99fae20] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x99fab38] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderThickness
	// void SetSliderThickness(float InThickness);                                                                              // [0x99fa954] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x99fa7f8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x99fa540] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x99fa2cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x99fa1ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetOutputRange
	// void SetOutputRange(FVector2D InOutputRange);                                                                            // [0x99fa050] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InHandStartEndRatio);                                                                // [0x99f8ff8] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x99f8e9c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x99f8ca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioRadialSlider.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x99f8b78] Final|Native|Public|BlueprintCallable 
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
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FText)                                     UnitsText                                                   OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FLinearColor)                              TextLabelBackgroundColor                                    OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FDelegateProperty)                         TextLabelBackgroundColorDelegate                            OFFSET(get<T>, {0x1A8, 12, 0, 0})
	DMember(bool)                                      ShowLabelOnlyOnHover                                        OFFSET(get<bool>, {0x1B4, 1, 0, 0})
	DMember(bool)                                      ShowUnitsText                                               OFFSET(get<bool>, {0x1B5, 1, 0, 0})
	DMember(bool)                                      IsUnitsTextReadOnly                                         OFFSET(get<bool>, {0x1B6, 1, 0, 0})
	DMember(bool)                                      IsValueTextReadOnly                                         OFFSET(get<bool>, {0x1B7, 1, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(get<T>, {0x1B8, 12, 0, 0})
	SMember(FLinearColor)                              SliderBackgroundColor                                       OFFSET(get<T>, {0x1C4, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBackgroundColorDelegate                               OFFSET(get<T>, {0x1D4, 12, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderBarColorDelegate                                      OFFSET(get<T>, {0x1F0, 12, 0, 0})
	SMember(FLinearColor)                              SliderThumbColor                                            OFFSET(get<T>, {0x1FC, 16, 0, 0})
	SMember(FDelegateProperty)                         SliderThumbColorDelegate                                    OFFSET(get<T>, {0x20C, 12, 0, 0})
	SMember(FLinearColor)                              WidgetBackgroundColor                                       OFFSET(get<T>, {0x218, 16, 0, 0})
	SMember(FDelegateProperty)                         WidgetBackgroundColorDelegate                               OFFSET(get<T>, {0x228, 12, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x234, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(get<T>, {0x238, 16, 0, 0})
};



	/// Functions
	// Function /Script/AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
	// void SetWidgetBackgroundColor(FLinearColor InValue);                                                                     // [0x99fb190] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetValueTextReadOnly
	// void SetValueTextReadOnly(bool bIsReadOnly);                                                                             // [0x99fb100] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
	// void SetUnitsTextReadOnly(bool bIsReadOnly);                                                                             // [0x99fafe4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetUnitsText
	// void SetUnitsText(FText Units);                                                                                          // [0x99faebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
	// void SetTextLabelBackgroundColor(FSlateColor InColor);                                                                   // [0x99facac] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderThumbColor
	// void SetSliderThumbColor(FLinearColor InValue);                                                                          // [0x99fa9dc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x99fa69c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
	// void SetSliderBackgroundColor(FLinearColor InValue);                                                                     // [0x99fa3e4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowUnitsText
	// void SetShowUnitsText(bool bShowUnitsText);                                                                              // [0x99fa358] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
	// void SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover);                                                                // [0x99fa23c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetSliderValue
	// float GetSliderValue(float OutputValue);                                                                                 // [0x99f8448] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetOutputValue
	// float GetOutputValue(float InSliderValue);                                                                               // [0x99f8c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioWidgets.AudioSliderBase.GetLinValue
	// float GetLinValue(float OutputValue);                                                                                    // [0x99f8448] Final|Native|Public|BlueprintCallable 
/// Class /Script/AudioWidgets.AudioSlider
/// Size: 0x0010 (0x000930 - 0x000940)
class UAudioSlider : public UAudioSliderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2368;

public:
	CMember(TWeakObjectPtr<UCurveFloat*>)              LinToOutputCurve                                            OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(TWeakObjectPtr<UCurveFloat*>)              OutputToLinCurve                                            OFFSET(get<T>, {0x938, 8, 0, 0})
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
	SMember(FVector2D)                                 OutputRange                                                 OFFSET(get<T>, {0x930, 16, 0, 0})
};

/// Struct /Script/AudioWidgets.MeterChannelInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FMeterChannelInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MeterValue                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakValue                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ClippingValue                                               OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioMeterStyle
/// Size: 0x0478 (0x000008 - 0x000480)
class FAudioMeterStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FSlateBrush)                               MeterValueImage                                             OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(get<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MeterBackgroundImage                                        OFFSET(get<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               MeterValueBackgroundImage                                   OFFSET(get<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               MeterPeakImage                                              OFFSET(get<T>, {0x310, 192, 0, 0})
	SMember(FVector2D)                                 MeterSize                                                   OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FVector2D)                                 MeterPadding                                                OFFSET(get<T>, {0x3E0, 16, 0, 0})
	DMember(float)                                     MeterValuePadding                                           OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(float)                                     PeakValueWidth                                              OFFSET(get<float>, {0x3F4, 4, 0, 0})
	SMember(FVector2D)                                 ValueRangeDb                                                OFFSET(get<T>, {0x3F8, 16, 0, 0})
	DMember(bool)                                      bShowScale                                                  OFFSET(get<bool>, {0x408, 1, 0, 0})
	DMember(bool)                                      bScaleSide                                                  OFFSET(get<bool>, {0x409, 1, 0, 0})
	DMember(float)                                     ScaleHashOffset                                             OFFSET(get<float>, {0x40C, 4, 0, 0})
	DMember(float)                                     ScaleHashWidth                                              OFFSET(get<float>, {0x410, 4, 0, 0})
	DMember(float)                                     ScaleHashHeight                                             OFFSET(get<float>, {0x414, 4, 0, 0})
	DMember(int32_t)                                   DecibelsPerHash                                             OFFSET(get<int32_t>, {0x418, 4, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(get<T>, {0x420, 88, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioTextBoxStyle
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FAudioTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(get<T>, {0xD0, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioSliderStyle
/// Size: 0x06C8 (0x000008 - 0x0006D0)
class FAudioSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 OFFSET(get<T>, {0x10, 1184, 0, 0})
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                OFFSET(get<T>, {0x4B0, 240, 0, 0})
	SMember(FSlateBrush)                               WidgetBackgroundImage                                       OFFSET(get<T>, {0x5A0, 192, 0, 0})
	SMember(FSlateColor)                               SliderBackgroundColor                                       OFFSET(get<T>, {0x660, 20, 0, 0})
	SMember(FVector2D)                                 SliderBackgroundSize                                        OFFSET(get<T>, {0x678, 16, 0, 0})
	DMember(float)                                     LabelPadding                                                OFFSET(get<float>, {0x688, 4, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              OFFSET(get<T>, {0x68C, 20, 0, 0})
	SMember(FSlateColor)                               SliderThumbColor                                            OFFSET(get<T>, {0x6A0, 20, 0, 0})
	SMember(FSlateColor)                               WidgetBackgroundColor                                       OFFSET(get<T>, {0x6B4, 20, 0, 0})
};

/// Struct /Script/AudioWidgets.AudioRadialSliderStyle
/// Size: 0x0148 (0x000008 - 0x000150)
class FAudioRadialSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FAudioTextBoxStyle)                        TextBoxStyle                                                OFFSET(get<T>, {0x10, 240, 0, 0})
	SMember(FSlateColor)                               CenterBackgroundColor                                       OFFSET(get<T>, {0x100, 20, 0, 0})
	SMember(FSlateColor)                               SliderBarColor                                              OFFSET(get<T>, {0x114, 20, 0, 0})
	SMember(FSlateColor)                               SliderProgressColor                                         OFFSET(get<T>, {0x128, 20, 0, 0})
	DMember(float)                                     LabelPadding                                                OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     DefaultSliderRadius                                         OFFSET(get<float>, {0x140, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.SampledSequenceViewerStyle
/// Size: 0x0148 (0x000008 - 0x000150)
class FSampledSequenceViewerStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSlateColor)                               SequenceColor                                               OFFSET(get<T>, {0x8, 20, 0, 0})
	DMember(float)                                     SequenceLineThickness                                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FSlateColor)                               MajorGridLineColor                                          OFFSET(get<T>, {0x20, 20, 0, 0})
	SMember(FSlateColor)                               MinorGridLineColor                                          OFFSET(get<T>, {0x34, 20, 0, 0})
	SMember(FSlateColor)                               ZeroCrossingLineColor                                       OFFSET(get<T>, {0x48, 20, 0, 0})
	DMember(float)                                     ZeroCrossingLineThickness                                   OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     SampleMarkersSize                                           OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FSlateColor)                               SequenceBackgroundColor                                     OFFSET(get<T>, {0x64, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(get<T>, {0x80, 192, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x144, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.PlayheadOverlayStyle
/// Size: 0x0020 (0x000008 - 0x000028)
class FPlayheadOverlayStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSlateColor)                               PlayheadColor                                               OFFSET(get<T>, {0x8, 20, 0, 0})
	DMember(float)                                     PlayheadWidth                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.FixedSampleSequenceRulerStyle
/// Size: 0x0248 (0x000008 - 0x000250)
class FFixedSampleSequenceRulerStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(float)                                     HandleWidth                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FSlateColor)                               HandleColor                                                 OFFSET(get<T>, {0xC, 20, 0, 0})
	SMember(FSlateBrush)                               HandleBrush                                                 OFFSET(get<T>, {0x20, 192, 0, 0})
	SMember(FSlateColor)                               TicksColor                                                  OFFSET(get<T>, {0xE0, 20, 0, 0})
	SMember(FSlateColor)                               TicksTextColor                                              OFFSET(get<T>, {0xF4, 20, 0, 0})
	SMember(FSlateFontInfo)                            TicksTextFont                                               OFFSET(get<T>, {0x108, 88, 0, 0})
	DMember(float)                                     TicksTextOffset                                             OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(get<T>, {0x164, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(get<T>, {0x180, 192, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x244, 4, 0, 0})
};

/// Struct /Script/AudioWidgets.SampledSequenceValueGridOverlayStyle
/// Size: 0x0090 (0x000008 - 0x000098)
class FSampledSequenceValueGridOverlayStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSlateColor)                               GridColor                                                   OFFSET(get<T>, {0x8, 20, 0, 0})
	DMember(float)                                     GridThickness                                               OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FSlateColor)                               LabelTextColor                                              OFFSET(get<T>, {0x20, 20, 0, 0})
	SMember(FSlateFontInfo)                            LabelTextFont                                               OFFSET(get<T>, {0x38, 88, 0, 0})
	DMember(float)                                     DesiredWidth                                                OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     DesiredHeight                                               OFFSET(get<float>, {0x94, 4, 0, 0})
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

