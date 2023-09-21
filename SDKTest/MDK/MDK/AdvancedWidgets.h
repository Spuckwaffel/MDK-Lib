
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
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(get<T>, {0x17C, 12, 0, 0})
	DMember(bool)                                      bUseCustomDefaultValue                                      OFFSET(get<bool>, {0x188, 1, 0, 0})
	DMember(float)                                     CustomDefaultValue                                          OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        SliderRange                                                 OFFSET(get<T>, {0x190, 136, 0, 0})
	CMember(TArray<float>)                             ValueTags                                                   OFFSET(get<T>, {0x218, 16, 0, 0})
	DMember(float)                                     SliderHandleStartAngle                                      OFFSET(get<float>, {0x228, 4, 0, 0})
	DMember(float)                                     SliderHandleEndAngle                                        OFFSET(get<float>, {0x22C, 4, 0, 0})
	DMember(float)                                     AngularOffset                                               OFFSET(get<float>, {0x230, 4, 0, 0})
	SMember(FVector2D)                                 HandStartEndRatio                                           OFFSET(get<T>, {0x238, 16, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(get<T>, {0x250, 1184, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(get<T>, {0x6F0, 16, 0, 0})
	SMember(FLinearColor)                              SliderProgressColor                                         OFFSET(get<T>, {0x700, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(get<T>, {0x710, 16, 0, 0})
	SMember(FLinearColor)                              CenterBackgroundColor                                       OFFSET(get<T>, {0x720, 16, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x730, 1, 0, 0})
	DMember(bool)                                      MouseUsesStep                                               OFFSET(get<bool>, {0x731, 1, 0, 0})
	DMember(bool)                                      RequiresControllerLock                                      OFFSET(get<bool>, {0x732, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      UseVerticalDrag                                             OFFSET(get<bool>, {0x739, 1, 0, 0})
	DMember(bool)                                      ShowSliderHandle                                            OFFSET(get<bool>, {0x73A, 1, 0, 0})
	DMember(bool)                                      ShowSliderHand                                              OFFSET(get<bool>, {0x73B, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(get<T>, {0x740, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(get<T>, {0x750, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(get<T>, {0x760, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(get<T>, {0x770, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(get<T>, {0x780, 16, 0, 0})
};



	/// Functions
	// Function /Script/AdvancedWidgets.RadialSlider.SetValueTags
	// void SetValueTags(TArray<float>& InValueTags);                                                                           // [0x99e943c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x99e93bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetUseVerticalDrag
	// void SetUseVerticalDrag(bool InUseVerticalDrag);                                                                         // [0x99e9334] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x99e92b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderRange
	// void SetSliderRange(FRuntimeFloatCurve& InSliderRange);                                                                  // [0x99e91c8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderProgressColor
	// void SetSliderProgressColor(FLinearColor InValue);                                                                       // [0x99e906c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleStartAngle
	// void SetSliderHandleStartAngle(float InValue);                                                                           // [0x99e8fdc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleEndAngle
	// void SetSliderHandleEndAngle(float InValue);                                                                             // [0x99e8f4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x99e8df0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x99e8c94] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHandle
	// void SetShowSliderHandle(bool InShowSliderHandle);                                                                       // [0x99e8c0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetShowSliderHand
	// void SetShowSliderHand(bool InShowSliderHand);                                                                           // [0x99e8b84] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x99e8ac8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetHandStartEndRatio
	// void SetHandStartEndRatio(FVector2D InValue);                                                                            // [0x99e8964] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCustomDefaultValue
	// void SetCustomDefaultValue(float InValue);                                                                               // [0x99e88e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetCenterBackgroundColor
	// void SetCenterBackgroundColor(FLinearColor InValue);                                                                     // [0x99e8788] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.SetAngularOffset
	// void SetAngularOffset(float InValue);                                                                                    // [0x99e86fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AdvancedWidgets.RadialSlider.GetValue
	// float GetValue();                                                                                                        // [0x99e86d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetNormalizedSliderHandlePosition
	// float GetNormalizedSliderHandlePosition();                                                                               // [0x99e869c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AdvancedWidgets.RadialSlider.GetCustomDefaultValue
	// float GetCustomDefaultValue();                                                                                           // [0x99e8674] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
