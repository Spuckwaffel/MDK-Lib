
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisual : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.Widget
/// Size: 0x00D8 (0x000028 - 0x000100)
class UWidget : public UVisual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UPanelSlot*)                               Slot                                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FText)                                     ToolTipText                                                 OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(UWidget*)                                  ToolTipWidget                                               OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FWidgetTransform)                          RenderTransform                                             OFFSET(getStruct<T>, {0x90, 28, 0, 0})
	SMember(FVector2D)                                 RenderTransformPivot                                        OFFSET(getStruct<T>, {0xAC, 8, 0, 0})
	DMember(bool)                                      bIsVariable                                                 OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(bool)                                      bCreatedByConstructionScript                                OFFSET(get<bool>, {0xB4, 1, 1, 1})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0xB4, 1, 1, 2})
	DMember(bool)                                      bOverride_Cursor                                            OFFSET(get<bool>, {0xB4, 1, 1, 3})
	DMember(bool)                                      bIsVolatile                                                 OFFSET(get<bool>, {0xB4, 1, 1, 4})
	CMember(TEnumAsByte<EMouseCursor>)                 Cursor                                                      OFFSET(get<T>, {0xB5, 1, 0, 0})
	CMember(EWidgetClipping)                           Clipping                                                    OFFSET(get<T>, {0xB6, 1, 0, 0})
	CMember(ESlateVisibility)                          Visibility                                                  OFFSET(get<T>, {0xB7, 1, 0, 0})
	DMember(float)                                     RenderOpacity                                               OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(UWidgetNavigation*)                        Navigation                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<UPropertyBinding*>)                 NativeBindings                                              OFFSET(get<T>, {0xF0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Widget.SetVisibility
	// void SetVisibility(ESlateVisibility InVisibility);                                                                       // [0x1e20110] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetUserFocus
	// void SetUserFocus(APlayerController* PlayerController);                                                                  // [0x1e1fd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTipText
	// void SetToolTipText(FText& InToolTipText);                                                                               // [0x1e1fc40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Widget.SetToolTip
	// void SetToolTip(UWidget* Widget);                                                                                        // [0x1e1fbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTranslation
	// void SetRenderTranslation(FVector2D Translation);                                                                        // [0x1e1faa0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransformPivot
	// void SetRenderTransformPivot(FVector2D Pivot);                                                                           // [0x1e1fa20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderTransform
	// void SetRenderTransform(FWidgetTransform InTransform);                                                                   // [0x1e1f960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderShear
	// void SetRenderShear(FVector2D Shear);                                                                                    // [0x1e1f8e0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderScale
	// void SetRenderScale(FVector2D Scale);                                                                                    // [0x1e1f860] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderOpacity
	// void SetRenderOpacity(float InOpacity);                                                                                  // [0x1e1f7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetRenderAngle
	// void SetRenderAngle(float Angle);                                                                                        // [0x1e1f760] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetNavigationRule
	// void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, FName WidgetToFocus);                            // [0x1e1f5c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetKeyboardFocus
	// void SetKeyboardFocus();                                                                                                 // [0x1e1f410] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetIsEnabled
	// void SetIsEnabled(bool bInIsEnabled);                                                                                    // [0x1e1f380] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetCursor
	// void SetCursor(TEnumAsByte<EMouseCursor> InCursor);                                                                      // [0x1e1ec50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetClipping
	// void SetClipping(EWidgetClipping InClipping);                                                                            // [0x1e1ebd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.SetAllNavigationRules
	// void SetAllNavigationRules(EUINavigationRule Rule, FName WidgetToFocus);                                                 // [0x1e1e970] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ResetCursor
	// void ResetCursor();                                                                                                      // [0x1e1e930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.RemoveFromParent
	// void RemoveFromParent();                                                                                                 // [0x1e1e910] Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.OnReply__DelegateSignature
	// FEventReply OnReply__DelegateSignature();                                                                                // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.OnPointerEvent__DelegateSignature
	// FEventReply OnPointerEvent__DelegateSignature(FGeometry MyGeometry, FPointerEvent& MouseEvent);                          // [0x154a140] Public|Delegate|HasOutParms 
	// Function /Script/UMG.Widget.IsVisible
	// bool IsVisible();                                                                                                        // [0x1e1df70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.IsHovered
	// bool IsHovered();                                                                                                        // [0x1e1df40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.InvalidateLayoutAndVolatility
	// void InvalidateLayoutAndVolatility();                                                                                    // [0x1e1def0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.HasUserFocusedDescendants
	// bool HasUserFocusedDescendants(APlayerController* PlayerController);                                                     // [0x1e1de60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasUserFocus
	// bool HasUserFocus(APlayerController* PlayerController);                                                                  // [0x1e1ddd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCaptureByUser
	// bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);                                                     // [0x1e1dd10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasMouseCapture
	// bool HasMouseCapture();                                                                                                  // [0x1e1dce0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasKeyboardFocus
	// bool HasKeyboardFocus();                                                                                                 // [0x1e1dcb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasFocusedDescendants
	// bool HasFocusedDescendants();                                                                                            // [0x1e1dc80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.HasAnyUserFocus
	// bool HasAnyUserFocus();                                                                                                  // [0x1e1dc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetWidget__DelegateSignature
	// UWidget* GetWidget__DelegateSignature();                                                                                 // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetVisibility
	// ESlateVisibility GetVisibility();                                                                                        // [0x1e1dbb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetText__DelegateSignature
	// FText GetText__DelegateSignature();                                                                                      // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateVisibility__DelegateSignature
	// ESlateVisibility GetSlateVisibility__DelegateSignature();                                                                // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateColor__DelegateSignature
	// FSlateColor GetSlateColor__DelegateSignature();                                                                          // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetSlateBrush__DelegateSignature
	// FSlateBrush GetSlateBrush__DelegateSignature();                                                                          // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetRenderOpacity
	// float GetRenderOpacity();                                                                                                // [0x1e1d8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetParent
	// UPanelWidget* GetParent();                                                                                               // [0x1e1d8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetOwningPlayer
	// APlayerController* GetOwningPlayer();                                                                                    // [0x1e1d870] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetMouseCursor__DelegateSignature
	// TEnumAsByte<EMouseCursor> GetMouseCursor__DelegateSignature();                                                           // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetLinearColor__DelegateSignature
	// FLinearColor GetLinearColor__DelegateSignature();                                                                        // [0x154a140] Public|Delegate|HasDefaults 
	// Function /Script/UMG.Widget.GetIsEnabled
	// bool GetIsEnabled();                                                                                                     // [0x1e1d6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetInt32__DelegateSignature
	// int32_t GetInt32__DelegateSignature();                                                                                   // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetFloat__DelegateSignature
	// float GetFloat__DelegateSignature();                                                                                     // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetDesiredSize
	// FVector2D GetDesiredSize();                                                                                              // [0x1e1d000] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetClipping
	// EWidgetClipping GetClipping();                                                                                           // [0x1e1cfd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetCheckBoxState__DelegateSignature
	// ECheckBoxState GetCheckBoxState__DelegateSignature();                                                                    // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GetCachedGeometry
	// FGeometry GetCachedGeometry();                                                                                           // [0x1e1cf90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Widget.GetBool__DelegateSignature
	// bool GetBool__DelegateSignature();                                                                                       // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForString__DelegateSignature
	// UWidget* GenerateWidgetForString__DelegateSignature(FString Item);                                                       // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.GenerateWidgetForObject__DelegateSignature
	// UWidget* GenerateWidgetForObject__DelegateSignature(UObject* Item);                                                      // [0x154a140] Public|Delegate      
	// Function /Script/UMG.Widget.ForceVolatile
	// void ForceVolatile(bool bForce);                                                                                         // [0x1e1c7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Widget.ForceLayoutPrepass
	// void ForceLayoutPrepass();                                                                                               // [0x1e1c7d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Slider
/// Size: 0x02D8 (0x000100 - 0x0003D8)
class USlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x118, 560, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x348, 1, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              OFFSET(getStruct<T>, {0x34C, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x35C, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                OFFSET(get<bool>, {0x36C, 1, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x36D, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x374, 1, 0, 0})
	CMember(UMulticastDelegate)                        OnMouseCaptureBegin                                         OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnMouseCaptureEnd                                           OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnControllerCaptureBegin                                    OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnControllerCaptureEnd                                      OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnValueChanged                                              OFFSET(get<T>, {0x3B8, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Slider.SetValue
	// void SetValue(float InValue);                                                                                            // [0x1e11110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x1e10f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x1e10dd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetSliderBarColor
	// void SetSliderBarColor(FLinearColor InValue);                                                                            // [0x1e10d50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Slider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x1e10400] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x1e10370] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Slider.GetValue
	// float GetValue();                                                                                                        // [0x1e0f6d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0108 (0x000100 - 0x000208)
class UUserWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	CMember(TArray<UUMGSequencePlayer*>)               ActiveSequencePlayers                                       OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TArray<UUMGSequencePlayer*>)               StoppedSequencePlayers                                      OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TArray<FNamedSlotBinding>)                 NamedSlotBindings                                           OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(UWidgetTree*)                              WidgetTree                                                  OFFSET(get<T>, {0x1A0, 8, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x1A8, 4, 0, 0})
	DMember(bool)                                      bSupportsKeyboardFocus                                      OFFSET(get<bool>, {0x1AC, 1, 1, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x1AC, 1, 1, 1})
	DMember(bool)                                      bStopAction                                                 OFFSET(get<bool>, {0x1AC, 1, 1, 2})
	DMember(bool)                                      bHasScriptImplementedTick                                   OFFSET(get<bool>, {0x1AC, 1, 1, 3})
	DMember(bool)                                      bHasScriptImplementedPaint                                  OFFSET(get<bool>, {0x1AC, 1, 1, 4})
	DMember(bool)                                      bCookedWidgetTree                                           OFFSET(get<bool>, {0x1AC, 1, 1, 7})
	CMember(EWidgetTickFrequency)                      TickFrequency                                               OFFSET(get<T>, {0x1AD, 1, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              OFFSET(get<T>, {0x1B0, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.UserWidget.UnregisterInputComponent
	// void UnregisterInputComponent();                                                                                         // [0x1e18b40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.StopListeningForInputAction
	// void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);                                  // [0x1e18a70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopListeningForAllInputActions
	// void StopListeningForAllInputActions();                                                                                  // [0x1e18a50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimationsAndLatentActions
	// void StopAnimationsAndLatentActions();                                                                                   // [0x1e18a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAnimation
	// void StopAnimation(UWidgetAnimation* InAnimation);                                                                       // [0x1e189b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.StopAllAnimations
	// void StopAllAnimations();                                                                                                // [0x1e18990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPositionInViewport
	// void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);                                                    // [0x1e18570] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPlaybackSpeed
	// void SetPlaybackSpeed(UWidgetAnimation* InAnimation, float PlaybackSpeed);                                               // [0x1e184a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e18410] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningPlayer
	// void SetOwningPlayer(APlayerController* LocalPlayerController);                                                          // [0x1e18390] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetOwningLocalPlayer
	// void SetOwningLocalPlayer(ULocalPlayer* LocalPlayer);                                                                    // [0x1e18310] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetNumLoopsToPlay
	// void SetNumLoopsToPlay(UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);                                           // [0x1e18150] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionPriority
	// void SetInputActionPriority(int32_t NewPriority);                                                                        // [0x1e17dd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetInputActionBlocking
	// void SetInputActionBlocking(bool bShouldBlock);                                                                          // [0x1e17d40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x1e17bd0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetDesiredSizeInViewport
	// void SetDesiredSizeInViewport(FVector2D Size);                                                                           // [0x1e17a40] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x1e17940] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAnchorsInViewport
	// void SetAnchorsInViewport(FAnchors Anchors);                                                                             // [0x1e17580] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.SetAlignmentInViewport
	// void SetAlignmentInViewport(FVector2D Alignment);                                                                        // [0x1e17500] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.UserWidget.ReverseAnimation
	// void ReverseAnimation(UWidgetAnimation* InAnimation);                                                                    // [0x1e17480] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RemoveFromViewport
	// void RemoveFromViewport();                                                                                               // [0x30c560] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.RegisterInputComponent
	// void RegisterInputComponent();                                                                                           // [0x1e17440] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.PlaySound
	// void PlaySound(USoundBase* SoundToPlay);                                                                                 // [0x1e173c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimationTo
	// void PlayAnimationTo(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x1e17210] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PlayAnimation
	// void PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode> PlayMode, float PlaybackSpeed); // [0x1e17080] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.PauseAnimation
	// float PauseAnimation(UWidgetAnimation* InAnimation);                                                                     // [0x1e16fe0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.OnTouchStarted
	// FEventReply OnTouchStarted(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                           // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchMoved
	// FEventReply OnTouchMoved(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchGesture
	// FEventReply OnTouchGesture(FGeometry MyGeometry, FPointerEvent& GestureEvent);                                           // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnTouchEnded
	// FEventReply OnTouchEnded(FGeometry MyGeometry, FPointerEvent& InTouchEvent);                                             // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnRemovedFromFocusPath
	// void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);                                                                   // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewMouseButtonDown
	// FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                   // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPreviewKeyDown
	// FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                    // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.OnMouseWheel
	// FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                               // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseMove
	// FEventReply OnMouseMove(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseLeave
	// void OnMouseLeave(FPointerEvent& MouseEvent);                                                                            // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseEnter
	// void OnMouseEnter(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                                      // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseCaptureLost
	// void OnMouseCaptureLost();                                                                                               // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonUp
	// FEventReply OnMouseButtonUp(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                            // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDown
	// FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent);                                          // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMouseButtonDoubleClick
	// FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, FPointerEvent& InMouseEvent);                               // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnMotionDetected
	// FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);                                          // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyUp
	// FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                         // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyDown
	// FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);                                                       // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnKeyChar
	// FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);                                           // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusReceived
	// FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);                                             // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnFocusLost
	// void OnFocusLost(FFocusEvent InFocusEvent);                                                                              // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDrop
	// bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                            // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragOver
	// bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                        // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragLeave
	// void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);                                             // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragEnter
	// void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);                       // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragDetected
	// void OnDragDetected(FGeometry MyGeometry, FPointerEvent& PointerEvent, UDragDropOperation*& Operation);                  // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnDragCancelled
	// void OnDragCancelled(FPointerEvent& PointerEvent, UDragDropOperation* Operation);                                        // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationStarted
	// void OnAnimationStarted(UWidgetAnimation* Animation);                                                                    // [0x1e16f50] BlueprintCosmetic|Native|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnimationFinished
	// void OnAnimationFinished(UWidgetAnimation* Animation);                                                                   // [0x30c600] BlueprintCosmetic|Native|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAnalogValueChanged
	// FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);                            // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.OnAddedToFocusPath
	// void OnAddedToFocusPath(FFocusEvent InFocusEvent);                                                                       // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.ListenForInputAction
	// void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, DelegateProperty Callback); // [0x1e16de0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsPlayingAnimation
	// bool IsPlayingAnimation();                                                                                               // [0x1e16db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsListeningForInputAction
	// bool IsListeningForInputAction(FName ActionName);                                                                        // [0x1e16d20] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInViewport
	// bool IsInViewport();                                                                                                     // [0x1e16cf0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsInteractable
	// bool IsInteractable();                                                                                                   // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent|Const 
	// Function /Script/UMG.UserWidget.IsAnyAnimationPlaying
	// bool IsAnyAnimationPlaying();                                                                                            // [0x1e16cc0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.IsAnimationPlayingForward
	// bool IsAnimationPlayingForward(UWidgetAnimation* InAnimation);                                                           // [0x1e16c30] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.IsAnimationPlaying
	// bool IsAnimationPlaying(UWidgetAnimation* InAnimation);                                                                  // [0x1e16ba0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayerPawn
	// APawn* GetOwningPlayerPawn();                                                                                            // [0x1e169f0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningPlayer
	// APlayerController* GetOwningPlayer();                                                                                    // [0x1e1d870] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetOwningLocalPlayer
	// ULocalPlayer* GetOwningLocalPlayer();                                                                                    // [0x1e169c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetIsVisible
	// bool GetIsVisible();                                                                                                     // [0x1e16cf0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnimationCurrentTime
	// float GetAnimationCurrentTime(UWidgetAnimation* InAnimation);                                                            // [0x1e168c0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAnchorsInViewport
	// FAnchors GetAnchorsInViewport();                                                                                         // [0x1e16880] Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.GetAlignmentInViewport
	// FVector2D GetAlignmentInViewport();                                                                                      // [0x1e16840] Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.UserWidget.Destruct
	// void Destruct();                                                                                                         // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.Construct
	// void Construct();                                                                                                        // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Script/UMG.UserWidget.CancelLatentActions
	// void CancelLatentActions();                                                                                              // [0x1e16820] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToViewport
	// void AddToViewport(int32_t ZOrder);                                                                                      // [0x1e167a0] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UserWidget.AddToPlayerScreen
	// bool AddToPlayerScreen(int32_t ZOrder);                                                                                  // [0x1e16710] Final|BlueprintCosmetic|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0018 (0x000100 - 0x000118)
class UPanelWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<UPanelSlot*>)                       Slots                                                       OFFSET(get<T>, {0x100, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.PanelWidget.RemoveChildAt
	// bool RemoveChildAt(int32_t Index);                                                                                       // [0x1e0bd90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.RemoveChild
	// bool RemoveChild(UWidget* Content);                                                                                      // [0x1e0bd00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.HasChild
	// bool HasChild(UWidget* Content);                                                                                         // [0x1e0bb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.HasAnyChildren
	// bool HasAnyChildren();                                                                                                   // [0x1e0bb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildrenCount
	// int32_t GetChildrenCount();                                                                                              // [0x1e0b930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildIndex
	// int32_t GetChildIndex(UWidget* Content);                                                                                 // [0x1e0b8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.GetChildAt
	// UWidget* GetChildAt(int32_t Index);                                                                                      // [0x1e0b810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.PanelWidget.ClearChildren
	// void ClearChildren();                                                                                                    // [0x1e0b7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.PanelWidget.AddChild
	// UPanelSlot* AddChild(UWidget* Content);                                                                                  // [0x1e0b680] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000118 - 0x000118)
class UContentWidget : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:


	/// Functions
	// Function /Script/UMG.ContentWidget.SetContent
	// UPanelSlot* SetContent(UWidget* Content);                                                                                // [0x1e07020] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ContentWidget.GetContentSlot
	// UPanelSlot* GetContentSlot();                                                                                            // [0x1e06430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ContentWidget.GetContent
	// UWidget* GetContent();                                                                                                   // [0x1e06400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Border
/// Size: 0x0148 (0x000118 - 0x000260)
class UBorder : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(bool)                                      bShowEffectWhenDisabled                                     OFFSET(get<bool>, {0x11A, 1, 1, 0})
	SMember(FLinearColor)                              ContentColorAndOpacity                                      OFFSET(getStruct<T>, {0x11C, 16, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FSlateBrush)                               Background                                                  OFFSET(getStruct<T>, {0x150, 136, 0, 0})
	SMember(FLinearColor)                              BrushColor                                                  OFFSET(getStruct<T>, {0x1E8, 16, 0, 0})
	SMember(FVector2D)                                 DesiredSizeScale                                            OFFSET(getStruct<T>, {0x208, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.Border.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e03a00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e03300] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e02bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetDesiredSizeScale
	// void SetDesiredSizeScale(FVector2D InScale);                                                                             // [0x1e02a30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetContentColorAndOpacity
	// void SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity);                                                   // [0x1e029b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromTexture
	// void SetBrushFromTexture(UTexture2D* Texture);                                                                           // [0x1e027b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromMaterial
	// void SetBrushFromMaterial(UMaterialInterface* Material);                                                                 // [0x1e02730] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushFromAsset
	// void SetBrushFromAsset(USlateBrushAsset* Asset);                                                                         // [0x1e026b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrushColor
	// void SetBrushColor(FLinearColor InBrushColor);                                                                           // [0x1e02630] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Border.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x1e024c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Border.GetDynamicMaterial
	// UMaterialInstanceDynamic* GetDynamicMaterial();                                                                          // [0x1e01b00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Button
/// Size: 0x0308 (0x000118 - 0x000420)
class UButton : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FButtonStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x120, 632, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x3B8, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 OFFSET(get<T>, {0x3B9, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x3BA, 1, 0, 0})
	CMember(UMulticastDelegate)                        OnClicked                                                   OFFSET(get<T>, {0x3C0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnPressed                                                   OFFSET(get<T>, {0x3D0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnReleased                                                  OFFSET(get<T>, {0x3E0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnHovered                                                   OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnUnhovered                                                 OFFSET(get<T>, {0x400, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Button.SetTouchMethod
	// void SetTouchMethod(TEnumAsByte<EButtonTouchMethod> InTouchMethod);                                                      // [0x1e03880] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetStyle
	// void SetStyle(FButtonStyle& InStyle);                                                                                    // [0x1e037a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Button.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x1e02930] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x1e028b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Button.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor InBackgroundColor);                                                                 // [0x1e02340] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Button.IsPressed
	// bool IsPressed();                                                                                                        // [0x1e01fe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000100 - 0x000120)
class UTextLayoutWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           OFFSET(getStruct<T>, {0x100, 3, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x103, 1, 0, 0})
	CMember(ETextWrappingPolicy)                       WrappingPolicy                                              OFFSET(get<T>, {0x104, 1, 0, 0})
	DMember(bool)                                      AutoWrapText                                                OFFSET(get<bool>, {0x105, 1, 1, 0})
	DMember(float)                                     WrapTextAt                                                  OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x10C, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0x11C, 4, 0, 0})
};

/// Class /Script/UMG.TextBlock
/// Size: 0x00F0 (0x000120 - 0x000210)
class UTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x180, 80, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x1D0, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x1D8, 16, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(bool)                                      bWrapWithInvalidationPanel                                  OFFSET(get<bool>, {0x1FC, 1, 0, 0})
	DMember(bool)                                      bAutoWrapText                                               OFFSET(get<bool>, {0x1FD, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.TextBlock.SetText
	// void SetText(FText InText);                                                                                              // [0x1e18840] Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2D InShadowOffset);                                                                          // [0x1e18730] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetShadowColorAndOpacity
	// void SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity);                                                     // [0x1e186b0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                        // [0x1e18290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x1e180d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> InJustification);                                                        // [0x1e17f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetFont
	// void SetFont(FSlateFontInfo InFontInfo);                                                                                 // [0x1e17ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetColorAndOpacity
	// void SetColorAndOpacity(FSlateColor InColorAndOpacity);                                                                  // [0x1e17850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.SetAutoWrapText
	// void SetAutoWrapText(bool InAutoTextWrap);                                                                               // [0x1e177c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetText
	// FText GetText();                                                                                                         // [0x1e16aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial
	// UMaterialInstanceDynamic* GetDynamicOutlineMaterial();                                                                   // [0x1e16990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TextBlock.GetDynamicFontMaterial
	// UMaterialInstanceDynamic* GetDynamicFontMaterial();                                                                      // [0x1e16960] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Image
/// Size: 0x00D8 (0x000100 - 0x0001D8)
class UImage : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x100, 136, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x198, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Image.SetOpacity
	// void SetOpacity(float InOpacity);                                                                                        // [0x1e07930] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetColorAndOpacity
	// void SetColorAndOpacity(FLinearColor InColorAndOpacity);                                                                 // [0x1e06dd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushTintColor
	// void SetBrushTintColor(FSlateColor TintColor);                                                                           // [0x1e06ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushSize
	// void SetBrushSize(FVector2D DesiredSize);                                                                                // [0x1e06c60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTextureDynamic
	// void SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize);                                            // [0x1e06b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromTexture
	// void SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize);                                                          // [0x1e06ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromMaterial
	// void SetBrushFromMaterial(UMaterialInterface* Material);                                                                 // [0x1e06a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAtlasInterface
	// void SetBrushFromAtlasInterface(TScriptInterface<Class> AtlasRegion, bool bMatchSize);                                   // [0x1e06960] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrushFromAsset
	// void SetBrushFromAsset(USlateBrushAsset* Asset);                                                                         // [0x1e068e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Image.SetBrush
	// void SetBrush(FSlateBrush& InBrush);                                                                                     // [0x1e06770] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.Image.GetDynamicMaterial
	// UMaterialInstanceDynamic* GetDynamicMaterial();                                                                          // [0x1e06460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000118 - 0x000130)
class UWidgetSwitcher : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(int32_t)                                   ActiveWidgetIndex                                           OFFSET(get<int32_t>, {0x118, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x30c690] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.SetActiveWidget
	// void SetActiveWidget(UWidget* Widget);                                                                                   // [0x30c600] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcher.GetWidgetAtIndex
	// UWidget* GetWidgetAtIndex(int32_t Index);                                                                                // [0x30c360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetNumWidgets
	// int32_t GetNumWidgets();                                                                                                 // [0x1e229b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x1e226b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetSwitcher.GetActiveWidget
	// UWidget* GetActiveWidget();                                                                                              // [0x1e22680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000028 - 0x000048)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFail                                                      OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage
	// UAsyncTaskDownloadImage* DownloadImage(FString URL);                                                                     // [0x1e01880] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x00B8 (0x000118 - 0x0001D0)
class UBackgroundBlur : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(bool)                                      bApplyAlphaToBlur                                           OFFSET(get<bool>, {0x12A, 1, 0, 0})
	DMember(float)                                     BlurStrength                                                OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bOverrideAutoRadiusCalculation                              OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(int32_t)                                   BlurRadius                                                  OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	SMember(FSlateBrush)                               LowQualityFallbackBrush                                     OFFSET(getStruct<T>, {0x138, 136, 0, 0})


	/// Functions
	// Function /Script/UMG.BackgroundBlur.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e03900] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e031e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush
	// void SetLowQualityFallbackBrush(FSlateBrush& InBrush);                                                                   // [0x1e02e60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e02ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurStrength
	// void SetBlurStrength(float InStrength);                                                                                  // [0x1e02440] Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetBlurRadius
	// void SetBlurRadius(int32_t InBlurRadius);                                                                                // [0x1e023c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur
	// void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);                                                                      // [0x1e02220] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000028 - 0x000038)
class UPanelSlot : public UVisual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UPanelWidget*)                             Parent                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UWidget*)                                  Content                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBackgroundBlurSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.BackgroundBlurSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e03980] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e03270] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BackgroundBlurSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e02b30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0020 (0x000028 - 0x000048)
class UPropertyBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FDynamicPropertyPath)                      SourcePath                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     DestinationProperty                                         OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000048 - 0x000048)
class UBoolBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/UMG.BoolBinding.GetValue
	// bool GetValue();                                                                                                         // [0x1e01e70] Final|Native|Public|Const 
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.BorderSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e03a80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e03390] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.BorderSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e02c30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000048 - 0x000050)
class UBrushBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/UMG.BrushBinding.GetValue
	// FSlateBrush GetValue();                                                                                                  // [0x1e01ea0] Final|Native|Public|Const 
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ButtonSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e11210] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e03420] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ButtonSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e02cb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000118 - 0x000128)
class UCanvasPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/UMG.CanvasPanel.AddChildToCanvas
	// UCanvasPanelSlot* AddChildToCanvas(UWidget* Content);                                                                    // [0x1e01710] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class UCanvasPanelSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FAnchorData)                               LayoutData                                                  OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	DMember(bool)                                      bAutoSize                                                   OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      OFFSET(get<int32_t>, {0x64, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.CanvasPanelSlot.SetZOrder
	// void SetZOrder(int32_t InZOrder);                                                                                        // [0x1e03b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetSize
	// void SetSize(FVector2D InSize);                                                                                          // [0x1e03720] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetPosition
	// void SetPosition(FVector2D InPosition);                                                                                  // [0x1e03530] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetOffsets
	// void SetOffsets(FMargin InOffset);                                                                                       // [0x1e03150] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetMinimum
	// void SetMinimum(FVector2D InMinimumAnchors);                                                                             // [0x1e03050] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetMaximum
	// void SetMaximum(FVector2D InMaximumAnchors);                                                                             // [0x1e02fd0] Final|Native|Public|HasDefaults 
	// Function /Script/UMG.CanvasPanelSlot.SetLayout
	// void SetLayout(FAnchorData& InLayoutData);                                                                               // [0x1e02dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAutoSize
	// void SetAutoSize(bool InbAutoSize);                                                                                      // [0x1e022b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAnchors
	// void SetAnchors(FAnchors InAnchors);                                                                                     // [0x1e02190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.SetAlignment
	// void SetAlignment(FVector2D InAlignment);                                                                                // [0x1e02110] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.CanvasPanelSlot.GetZOrder
	// int32_t GetZOrder();                                                                                                     // [0x1e01f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetSize
	// FVector2D GetSize();                                                                                                     // [0x1e01dc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetPosition
	// FVector2D GetPosition();                                                                                                 // [0x1e01d00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetOffsets
	// FMargin GetOffsets();                                                                                                    // [0x1e01bc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetLayout
	// FAnchorData GetLayout();                                                                                                 // [0x1e01b30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAutoSize
	// bool GetAutoSize();                                                                                                      // [0x1e01aa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAnchors
	// FAnchors GetAnchors();                                                                                                   // [0x1e01a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CanvasPanelSlot.GetAlignment
	// FVector2D GetAlignment();                                                                                                // [0x1e01a20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0650 (0x000118 - 0x000768)
class UCheckBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1896;

public:
	CMember(ECheckBoxState)                            CheckedState                                                OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FCheckBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x130, 1408, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(USlateBrushAsset*)                         UncheckedImage                                              OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(USlateBrushAsset*)                         UncheckedHoveredImage                                       OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(USlateBrushAsset*)                         UncheckedPressedImage                                       OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(USlateBrushAsset*)                         CheckedImage                                                OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(USlateBrushAsset*)                         CheckedHoveredImage                                         OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(USlateBrushAsset*)                         CheckedPressedImage                                         OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(USlateBrushAsset*)                         UndeterminedImage                                           OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(USlateBrushAsset*)                         UndeterminedHoveredImage                                    OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(USlateBrushAsset*)                         UndeterminedPressedImage                                    OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x700, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x704, 16, 0, 0})
	SMember(FSlateColor)                               BorderBackgroundColor                                       OFFSET(getStruct<T>, {0x718, 40, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x740, 1, 0, 0})
	CMember(UMulticastDelegate)                        OnCheckStateChanged                                         OFFSET(get<T>, {0x748, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.CheckBox.SetIsChecked
	// void SetIsChecked(bool InIsChecked);                                                                                     // [0x1e02d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.SetCheckedState
	// void SetCheckedState(ECheckBoxState InCheckedState);                                                                     // [0x1e02830] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CheckBox.IsPressed
	// bool IsPressed();                                                                                                        // [0x1e02010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.IsChecked
	// bool IsChecked();                                                                                                        // [0x1e01fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.CheckBox.GetCheckedState
	// ECheckBoxState GetCheckedState();                                                                                        // [0x1e01ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000048 - 0x000050)
class UCheckedStateBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/UMG.CheckedStateBinding.GetValue
	// ECheckBoxState GetValue();                                                                                               // [0x1e01f50] Final|Native|Public|Const 
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x00B8 (0x000100 - 0x0001B8)
class UCircularThrobber : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	DMember(int32_t)                                   NumberOfPieces                                              OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(float)                                     Period                                                      OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	CMember(USlateBrushAsset*)                         PieceImage                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	DMember(bool)                                      bEnableRadius                                               OFFSET(get<bool>, {0x1A0, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.CircularThrobber.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x1e035b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetPeriod
	// void SetPeriod(float InPeriod);                                                                                          // [0x1e034b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.CircularThrobber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x1e030d0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000048 - 0x000050)
class UColorBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/UMG.ColorBinding.GetSlateValue
	// FSlateColor GetSlateValue();                                                                                             // [0x1e01e00] Final|Native|Public|Const 
	// Function /Script/UMG.ColorBinding.GetLinearValue
	// FLinearColor GetLinearValue();                                                                                           // [0x1e01b80] Final|Native|Public|HasDefaults|Const 
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0038 (0x000100 - 0x000138)
class UComboBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TArray<UObject*>)                          Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x0BB8 (0x000100 - 0x000CB8)
class UComboBoxString : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3256;

public:
	CMember(TArray<FString>)                           DefaultOptions                                              OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FString)                                   SelectedOption                                              OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FComboBoxStyle)                            WidgetStyle                                                 OFFSET(getStruct<T>, {0x120, 984, 0, 0})
	SMember(FTableRowStyle)                            ItemStyle                                                   OFFSET(getStruct<T>, {0x4F8, 1720, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              OFFSET(getStruct<T>, {0xBB0, 16, 0, 0})
	DMember(float)                                     MaxListHeight                                               OFFSET(get<float>, {0xBC0, 4, 0, 0})
	DMember(bool)                                      HasDownArrow                                                OFFSET(get<bool>, {0xBC4, 1, 0, 0})
	DMember(bool)                                      EnableGamepadNavigationMode                                 OFFSET(get<bool>, {0xBC5, 1, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0xBC8, 80, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0xC18, 40, 0, 0})
	DMember(bool)                                      bIsFocusable                                                OFFSET(get<bool>, {0xC40, 1, 0, 0})
	CMember(UMulticastDelegate)                        OnSelectionChanged                                          OFFSET(get<T>, {0xC58, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnOpening                                                   OFFSET(get<T>, {0xC68, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ComboBoxString.SetSelectedOption
	// void SetSelectedOption(FString Option);                                                                                  // [0x1e03630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RemoveOption
	// bool RemoveOption(FString Option);                                                                                       // [0x1e02060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.RefreshOptions
	// void RefreshOptions();                                                                                                   // [0x1e02040] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
	// void OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo> SelectionType);           // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
	// void OnOpeningEvent__DelegateSignature();                                                                                // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.ComboBoxString.GetSelectedOption
	// FString GetSelectedOption();                                                                                             // [0x1e01d40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionCount
	// int32_t GetOptionCount();                                                                                                // [0x1e01cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.GetOptionAtIndex
	// FString GetOptionAtIndex(int32_t Index);                                                                                 // [0x1e01c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.FindOptionIndex
	// int32_t FindOptionIndex(FString Option);                                                                                 // [0x1e01970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.ComboBoxString.ClearSelection
	// void ClearSelection();                                                                                                   // [0x1e01860] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.ClearOptions
	// void ClearOptions();                                                                                                     // [0x1e01840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ComboBoxString.AddOption
	// void AddOption(FString Option);                                                                                          // [0x1e017a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0060 (0x000028 - 0x000088)
class UDragDropOperation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FString)                                   Tag                                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(UObject*)                                  Payload                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UWidget*)                                  DefaultDragVisual                                           OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(EDragPivot)                                Pivot                                                       OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x4C, 8, 0, 0})
	CMember(UMulticastDelegate)                        OnDrop                                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnDragCancelled                                             OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnDragged                                                   OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.DragDropOperation.Drop
	// void Drop(FPointerEvent& PointerEvent);                                                                                  // [0x1e06280] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.Dragged
	// void Dragged(FPointerEvent& PointerEvent);                                                                               // [0x1e06100] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/UMG.DragDropOperation.DragCancelled
	// void DragCancelled(FPointerEvent& PointerEvent);                                                                         // [0x1e05f80] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/UMG.EditableText
/// Size: 0x0348 (0x000100 - 0x000448)
class UEditableText : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0x128, 24, 0, 0})
	SMember(FEditableTextStyle)                        WidgetStyle                                                 OFFSET(getStruct<T>, {0x150, 536, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(USlateBrushAsset*)                         BackgroundImageSelected                                     OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(USlateBrushAsset*)                         BackgroundImageComposing                                    OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(USlateBrushAsset*)                         CaretImage                                                  OFFSET(get<T>, {0x380, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x388, 80, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x3D8, 40, 0, 0})
	DMember(bool)                                      IsReadOnly                                                  OFFSET(get<bool>, {0x400, 1, 0, 0})
	DMember(bool)                                      IsPassword                                                  OFFSET(get<bool>, {0x401, 1, 0, 0})
	DMember(float)                                     MinimumDesiredWidth                                         OFFSET(get<float>, {0x404, 4, 0, 0})
	DMember(bool)                                      IsCaretMovedWhenGainFocus                                   OFFSET(get<bool>, {0x408, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    OFFSET(get<bool>, {0x409, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          OFFSET(get<bool>, {0x40A, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0x40B, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       OFFSET(get<bool>, {0x40C, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0x40D, 1, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                OFFSET(get<T>, {0x40E, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0x40F, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0x410, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x411, 1, 0, 0})
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           OFFSET(getStruct<T>, {0x412, 3, 0, 0})
	CMember(UMulticastDelegate)                        OnTextChanged                                               OFFSET(get<T>, {0x418, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTextCommitted                                             OFFSET(get<T>, {0x428, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.EditableText.SetText
	// void SetText(FText InText);                                                                                              // [0x1e07ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsReadOnly
	// void SetIsReadOnly(bool InbIsReadyOnly);                                                                                 // [0x1e07610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetIsPassword
	// void SetIsPassword(bool InbIsPassword);                                                                                  // [0x1e07580] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.SetHintText
	// void SetHintText(FText InHintText);                                                                                      // [0x1e07260] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
	// void OnEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);                // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
	// void OnEditableTextChangedEvent__DelegateSignature(FText& Text);                                                         // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableText.GetText
	// FText GetText();                                                                                                         // [0x1e064f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0920 (0x000100 - 0x000A20)
class UEditableTextBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2592;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FEditableTextBoxStyle)                     WidgetStyle                                                 OFFSET(getStruct<T>, {0x128, 2032, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x918, 8, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0x920, 24, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x948, 80, 0, 0})
	SMember(FLinearColor)                              ForegroundColor                                             OFFSET(getStruct<T>, {0x998, 16, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x9A8, 16, 0, 0})
	SMember(FLinearColor)                              ReadOnlyForegroundColor                                     OFFSET(getStruct<T>, {0x9B8, 16, 0, 0})
	DMember(bool)                                      IsReadOnly                                                  OFFSET(get<bool>, {0x9C8, 1, 0, 0})
	DMember(bool)                                      IsPassword                                                  OFFSET(get<bool>, {0x9C9, 1, 0, 0})
	DMember(float)                                     MinimumDesiredWidth                                         OFFSET(get<float>, {0x9CC, 4, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x9D0, 16, 0, 0})
	DMember(bool)                                      IsCaretMovedWhenGainFocus                                   OFFSET(get<bool>, {0x9E0, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    OFFSET(get<bool>, {0x9E1, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          OFFSET(get<bool>, {0x9E2, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0x9E3, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       OFFSET(get<bool>, {0x9E4, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0x9E5, 1, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                OFFSET(get<T>, {0x9E6, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0x9E7, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0x9E8, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x9E9, 1, 0, 0})
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           OFFSET(getStruct<T>, {0x9EA, 3, 0, 0})
	CMember(UMulticastDelegate)                        OnTextChanged                                               OFFSET(get<T>, {0x9F0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTextCommitted                                             OFFSET(get<T>, {0xA00, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.EditableTextBox.SetText
	// void SetText(FText InText);                                                                                              // [0x1e07da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x1e076a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetHintText
	// void SetHintText(FText InText);                                                                                          // [0x1e07320] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.SetError
	// void SetError(FText InError);                                                                                            // [0x1e070b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
	// void OnEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);             // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
	// void OnEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                                      // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.EditableTextBox.HasError
	// bool HasError();                                                                                                         // [0x1e06620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.GetText
	// FText GetText();                                                                                                         // [0x1e06570] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.EditableTextBox.ClearError
	// void ClearError();                                                                                                       // [0x1e05f60] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x0230 (0x000100 - 0x000330)
class UExpandableArea : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FExpandableAreaStyle)                      Style                                                       OFFSET(getStruct<T>, {0x108, 288, 0, 0})
	SMember(FSlateBrush)                               BorderBrush                                                 OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateColor)                               BorderColor                                                 OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	DMember(bool)                                      bIsExpanded                                                 OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	DMember(float)                                     MaxHeight                                                   OFFSET(get<float>, {0x2DC, 4, 0, 0})
	SMember(FMargin)                                   HeaderPadding                                               OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})
	SMember(FMargin)                                   AreaPadding                                                 OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnExpansionChanged                                          OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(UWidget*)                                  HeaderContent                                               OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidget*)                                  BodyContent                                                 OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.ExpandableArea.SetIsExpanded_Animated
	// void SetIsExpanded_Animated(bool IsExpanded);                                                                            // [0x1e074f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.SetIsExpanded
	// void SetIsExpanded(bool IsExpanded);                                                                                     // [0x1e07460] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ExpandableArea.GetIsExpanded
	// bool GetIsExpanded();                                                                                                    // [0x1e06490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000048 - 0x000048)
class UFloatBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/UMG.FloatBinding.GetValue
	// float GetValue();                                                                                                        // [0x1e065f0] Final|Native|Public|Const 
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000118 - 0x000148)
class UGridPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<float>)                             ColumnFill                                                  OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<float>)                             RowFill                                                     OFFSET(get<T>, {0x128, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.GridPanel.SetRowFill
	// void SetRowFill(int32_t ColumnIndex, float Coefficient);                                                                 // [0x1e07ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.SetColumnFill
	// void SetColumnFill(int32_t ColumnIndex, float Coefficient);                                                              // [0x1e06ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridPanel.AddChildToGrid
	// UGridSlot* AddChildToGrid(UWidget* Content);                                                                             // [0x1e05e40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class UGridSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   RowSpan                                                     OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan                                                  OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   Layer                                                       OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FVector2D)                                 Nudge                                                       OFFSET(getStruct<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.GridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e07ee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRowSpan
	// void SetRowSpan(int32_t InRowSpan);                                                                                      // [0x1e07b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                              // [0x1e07a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e079b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetLayer
	// void SetLayer(int32_t InLayer);                                                                                          // [0x1e077f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e073e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumnSpan
	// void SetColumnSpan(int32_t InColumnSpan);                                                                                // [0x1e06fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.GridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                        // [0x1e06e50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000118 - 0x000128)
class UHorizontalBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/UMG.HorizontalBox.AddChildToHorizontalBox
	// UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);                                                           // [0x1e05ed0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FSlateChildSize)                           Size                                                        OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.HorizontalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e1ff70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                    // [0x1e1fb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e1f6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.HorizontalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e1ee20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x0560 (0x000100 - 0x000660)
class UInputKeySelector : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	SMember(FButtonStyle)                              WidgetStyle                                                 OFFSET(getStruct<T>, {0x100, 632, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x378, 480, 0, 0})
	SMember(FInputChord)                               SelectedKey                                                 OFFSET(getStruct<T>, {0x558, 32, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x578, 80, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	SMember(FText)                                     KeySelectionText                                            OFFSET(getStruct<T>, {0x5E8, 24, 0, 0})
	SMember(FText)                                     NoKeySpecifiedText                                          OFFSET(getStruct<T>, {0x600, 24, 0, 0})
	DMember(bool)                                      bAllowModifierKeys                                          OFFSET(get<bool>, {0x618, 1, 0, 0})
	DMember(bool)                                      bAllowGamepadKeys                                           OFFSET(get<bool>, {0x619, 1, 0, 0})
	CMember(TArray<FKey>)                              EscapeKeys                                                  OFFSET(get<T>, {0x620, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnKeySelected                                               OFFSET(get<T>, {0x630, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnIsSelectingKeyChanged                                     OFFSET(get<T>, {0x640, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.InputKeySelector.SetTextBlockVisibility
	// void SetTextBlockVisibility(ESlateVisibility InVisibility);                                                              // [0x1e07e60] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetSelectedKey
	// void SetSelectedKey(FInputChord& InSelectedKey);                                                                         // [0x1e07c10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetNoKeySpecifiedText
	// void SetNoKeySpecifiedText(FText InNoKeySpecifiedText);                                                                  // [0x1e07870] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetKeySelectionText
	// void SetKeySelectionText(FText InKeySelectionText);                                                                      // [0x1e07730] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetEscapeKeys
	// void SetEscapeKeys(TArray<FKey>& InKeys);                                                                                // [0x1e07170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowModifierKeys
	// void SetAllowModifierKeys(bool bInAllowModifierKeys);                                                                    // [0x1e066e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.SetAllowGamepadKeys
	// void SetAllowGamepadKeys(bool bInAllowGamepadKeys);                                                                      // [0x1e06650] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InputKeySelector.OnKeySelected__DelegateSignature
	// void OnKeySelected__DelegateSignature(FInputChord SelectedKey);                                                          // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
	// void OnIsSelectingKeyChanged__DelegateSignature();                                                                       // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.InputKeySelector.GetIsSelectingKey
	// bool GetIsSelectingKey();                                                                                                // [0x1e064c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000048 - 0x000048)
class UInt32Binding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/UMG.Int32Binding.GetValue
	// int32_t GetValue();                                                                                                      // [0x1e0bad0] Final|Native|Public|Const 
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000118 - 0x000130)
class UInvalidationBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      bCanCache                                                   OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      CacheRelativeTransforms                                     OFFSET(get<bool>, {0x119, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.InvalidationBox.SetCanCache
	// void SetCanCache(bool CanCache);                                                                                         // [0x1e0be40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.InvalidateCache
	// void InvalidateCache();                                                                                                  // [0x1e0bc20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.InvalidationBox.GetCanCache
	// bool GetCanCache();                                                                                                      // [0x1e0b7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.TableViewBase
/// Size: 0x0000 (0x000100 - 0x000100)
class UTableViewBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/UMG.ListView
/// Size: 0x0040 (0x000100 - 0x000140)
class UListView : public UTableViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     ItemHeight                                                  OFFSET(get<float>, {0x100, 4, 0, 0})
	CMember(TArray<UObject*>)                          Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TEnumAsByte<ESelectionMode>)               SelectionMode                                               OFFSET(get<T>, {0x118, 1, 0, 0})
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0040 (0x000118 - 0x000158)
class UMenuAnchor : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UClass*)                                   MenuClass                                                   OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TEnumAsByte<EMenuPlacement>)               Placement                                                   OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(bool)                                      ShouldDeferPaintingAfterWindowContent                       OFFSET(get<bool>, {0x131, 1, 0, 0})
	DMember(bool)                                      UseApplicationMenuStack                                     OFFSET(get<bool>, {0x132, 1, 0, 0})
	CMember(UMulticastDelegate)                        OnMenuOpenChanged                                           OFFSET(get<T>, {0x138, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.MenuAnchor.ToggleOpen
	// void ToggleOpen(bool bFocusOnOpen);                                                                                      // [0x1e0c980] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.ShouldOpenDueToClick
	// bool ShouldOpenDueToClick();                                                                                             // [0x1e0c950] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.Open
	// void Open(bool bFocusMenu);                                                                                              // [0x1e0bc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MenuAnchor.IsOpen
	// bool IsOpen();                                                                                                           // [0x1e0bc40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.HasOpenSubMenus
	// bool HasOpenSubMenus();                                                                                                  // [0x1e0bbf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.GetMenuPosition
	// FVector2D GetMenuPosition();                                                                                             // [0x1e0b990] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.MenuAnchor.Close
	// void Close();                                                                                                            // [0x1e0b7c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000048 - 0x000048)
class UMouseCursorBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/UMG.MouseCursorBinding.GetValue
	// TEnumAsByte<EMouseCursor> GetValue();                                                                                    // [0x1e0bb00] Final|Native|Public|Const 
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0320 (0x000110 - 0x000430)
class UMovieScene2DTransformSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FRichCurve)                                Translation                                                 OFFSET(getStruct<T>, {0x118, 224, 0, 0})
	SMember(FRichCurve)                                Rotation                                                    OFFSET(getStruct<T>, {0x1F8, 112, 0, 0})
	SMember(FRichCurve)                                Scale                                                       OFFSET(getStruct<T>, {0x268, 224, 0, 0})
	SMember(FRichCurve)                                Shear                                                       OFFSET(getStruct<T>, {0x348, 224, 0, 0})
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x01D0 (0x000110 - 0x0002E0)
class UMovieSceneMarginSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FRichCurve)                                TopCurve                                                    OFFSET(getStruct<T>, {0x118, 112, 0, 0})
	SMember(FRichCurve)                                LeftCurve                                                   OFFSET(getStruct<T>, {0x188, 112, 0, 0})
	SMember(FRichCurve)                                RightCurve                                                  OFFSET(getStruct<T>, {0x1F8, 112, 0, 0})
	SMember(FRichCurve)                                BottomCurve                                                 OFFSET(getStruct<T>, {0x268, 112, 0, 0})
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FName>)                             BrushPropertyNamePath                                       OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FName)                                     TrackName                                                   OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x02B0 (0x000120 - 0x0003D0)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FTextBlockStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x160, 480, 0, 0})
	DMember(bool)                                      bIsReadOnly                                                 OFFSET(get<bool>, {0x340, 1, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x348, 80, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    OFFSET(get<bool>, {0x398, 1, 0, 0})
	DMember(bool)                                      ClearTextSelectionOnFocusLoss                               OFFSET(get<bool>, {0x399, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          OFFSET(get<bool>, {0x39A, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0x39B, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0x39C, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0x39D, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0x39E, 1, 0, 0})
	CMember(UMulticastDelegate)                        OnTextChanged                                               OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTextCommitted                                             OFFSET(get<T>, {0x3B0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.MultiLineEditableText.SetText
	// void SetText(FText InText);                                                                                              // [0x1e0c600] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x1e0c1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);       // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextChangedEvent__DelegateSignature(FText& Text);                                                // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableText.GetText
	// FText GetText();                                                                                                         // [0x1e0b9d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0AD0 (0x000120 - 0x000BF0)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     HintText                                                    OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	SMember(FEditableTextBoxStyle)                     WidgetStyle                                                 OFFSET(getStruct<T>, {0x160, 2032, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x950, 480, 0, 0})
	DMember(bool)                                      bIsReadOnly                                                 OFFSET(get<bool>, {0xB30, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            OFFSET(get<bool>, {0xB31, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      OFFSET(getStruct<T>, {0xB32, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                OFFSET(get<T>, {0xB33, 1, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0xB38, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0xB40, 80, 0, 0})
	SMember(FLinearColor)                              ForegroundColor                                             OFFSET(getStruct<T>, {0xB90, 16, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0xBA0, 16, 0, 0})
	SMember(FLinearColor)                              ReadOnlyForegroundColor                                     OFFSET(getStruct<T>, {0xBB0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTextChanged                                               OFFSET(get<T>, {0xBC0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTextCommitted                                             OFFSET(get<T>, {0xBD0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.MultiLineEditableTextBox.SetText
	// void SetText(FText InText);                                                                                              // [0x1e0c6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetIsReadOnly
	// void SetIsReadOnly(bool bReadOnly);                                                                                      // [0x1e0c230] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.SetError
	// void SetError(FText InError);                                                                                            // [0x1e0bf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(FText& Text, TEnumAsByte<ETextCommit> CommitMethod);    // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
	// void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(FText& Text);                                             // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/UMG.MultiLineEditableTextBox.GetText
	// FText GetText();                                                                                                         // [0x1e0ba50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000118 - 0x000128)
class UNamedSlot : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/UMG.NamedSlotInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNamedSlotInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.NativeWidgetHost
/// Size: 0x0010 (0x000100 - 0x000110)
class UNativeWidgetHost : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000118 - 0x000128)
class UOverlay : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/UMG.Overlay.AddChildToOverlay
	// UOverlaySlot* AddChildToOverlay(UWidget* Content);                                                                       // [0x1e0b710] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.OverlaySlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e0c8d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e0c2c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.OverlaySlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e0c090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x0210 (0x000100 - 0x000310)
class UProgressBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FProgressBarStyle)                         WidgetStyle                                                 OFFSET(getStruct<T>, {0x100, 416, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USlateBrushAsset*)                         BackgroundImage                                             OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USlateBrushAsset*)                         FillImage                                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(USlateBrushAsset*)                         MarqueeImage                                                OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(float)                                     Percent                                                     OFFSET(get<float>, {0x2C0, 4, 0, 0})
	CMember(TEnumAsByte<EProgressBarFillType>)         BarFillType                                                 OFFSET(get<T>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      bIsMarquee                                                  OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	SMember(FVector2D)                                 BorderPadding                                               OFFSET(getStruct<T>, {0x2C8, 8, 0, 0})
	SMember(FLinearColor)                              FillColorAndOpacity                                         OFFSET(getStruct<T>, {0x2E0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ProgressBar.SetPercent
	// void SetPercent(float InPercent);                                                                                        // [0x1e0c350] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetIsMarquee
	// void SetIsMarquee(bool InbIsMarquee);                                                                                    // [0x1e0c110] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ProgressBar.SetFillColorAndOpacity
	// void SetFillColorAndOpacity(FLinearColor InColor);                                                                       // [0x1e0c010] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0030 (0x000118 - 0x000148)
class URetainerBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(bool)                                      RenderOnInvalidation                                        OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      RenderOnPhase                                               OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(int32_t)                                   Phase                                                       OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	DMember(int32_t)                                   PhaseCount                                                  OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	CMember(UMaterialInterface*)                       EffectMaterial                                              OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FName)                                     TextureParameter                                            OFFSET(getStruct<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.RetainerBox.SetTextureParameter
	// void SetTextureParameter(FName TextureParameter);                                                                        // [0x1e0c850] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetRenderingPhase
	// void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);                                                        // [0x1e0c3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.SetEffectMaterial
	// void SetEffectMaterial(UMaterialInterface* EffectMaterial);                                                              // [0x1e0bed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.RequestRender
	// void RequestRender();                                                                                                    // [0x1e0be20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.RetainerBox.GetEffectMaterial
	// UMaterialInstanceDynamic* GetEffectMaterial();                                                                           // [0x1e0b960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0230 (0x000120 - 0x000350)
class URichTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	CMember(UDataTable*)                               TextStyleSet                                                OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(TArray<URichTextBlockDecorator*>)          Decorators                                                  OFFSET(get<T>, {0x140, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.RichTextBlock.SetText
	// void SetText(FText& InText);                                                                                             // [0x1e0c780] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/UMG.RichTextBlockDecorator
/// Size: 0x0000 (0x000028 - 0x000028)
class URichTextBlockDecorator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.RichTextBlockImageDecorator
/// Size: 0x0008 (0x000028 - 0x000030)
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UDataTable*)                               ImageSet                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000118 - 0x000130)
class USafeZone : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      PadLeft                                                     OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      PadRight                                                    OFFSET(get<bool>, {0x119, 1, 0, 0})
	DMember(bool)                                      PadTop                                                      OFFSET(get<bool>, {0x11A, 1, 0, 0})
	DMember(bool)                                      PadBottom                                                   OFFSET(get<bool>, {0x11B, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.SafeZone.SetSidesToPad
	// void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);                                    // [0x1e0c490] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USafeZoneSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bIsTitleSafe                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FMargin)                                   SafeAreaScale                                               OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HAlign                                                      OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VAlign                                                      OFFSET(get<T>, {0x4D, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000118 - 0x000138)
class UScaleBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TEnumAsByte<EStretch>)                     Stretch                                                     OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(TEnumAsByte<EStretchDirection>)            StretchDirection                                            OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(float)                                     UserSpecifiedScale                                          OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(bool)                                      IgnoreInheritedScale                                        OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      bSingleLayoutPass                                           OFFSET(get<bool>, {0x121, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ScaleBox.SetUserSpecifiedScale
	// void SetUserSpecifiedScale(float InUserSpecifiedScale);                                                                  // [0x1e11090] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretchDirection
	// void SetStretchDirection(TEnumAsByte<EStretchDirection> InStretchDirection);                                             // [0x1e11010] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetStretch
	// void SetStretch(TEnumAsByte<EStretch> InStretch);                                                                        // [0x1e10f90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBox.SetIgnoreInheritedScale
	// void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);                                                              // [0x1e102e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScaleBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ScaleBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e11210] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e10990] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScaleBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e02cb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x04F8 (0x000100 - 0x0005F8)
class UScrollBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	SMember(FScrollBarStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x100, 1232, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x5D0, 8, 0, 0})
	DMember(bool)                                      bAlwaysShowScrollbar                                        OFFSET(get<bool>, {0x5D8, 1, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x5D9, 1, 0, 0})
	SMember(FVector2D)                                 Thickness                                                   OFFSET(getStruct<T>, {0x5DC, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.ScrollBar.SetState
	// void SetState(float InOffsetFraction, float InThumbSizeFraction);                                                        // [0x1e10e50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0748 (0x000118 - 0x000860)
class UScrollBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2144;

public:
	SMember(FScrollBoxStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x118, 552, 0, 0})
	SMember(FScrollBarStyle)                           WidgetBarStyle                                              OFFSET(getStruct<T>, {0x340, 1232, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   BarStyle                                                    OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x820, 1, 0, 0})
	CMember(ESlateVisibility)                          ScrollBarVisibility                                         OFFSET(get<T>, {0x821, 1, 0, 0})
	CMember(EConsumeMouseWheel)                        ConsumeMouseWheel                                           OFFSET(get<T>, {0x822, 1, 0, 0})
	SMember(FVector2D)                                 ScrollbarThickness                                          OFFSET(getStruct<T>, {0x824, 8, 0, 0})
	DMember(bool)                                      AlwaysShowScrollbar                                         OFFSET(get<bool>, {0x82C, 1, 0, 0})
	DMember(bool)                                      AllowOverscroll                                             OFFSET(get<bool>, {0x82D, 1, 0, 0})
	CMember(EDescendantScrollDestination)              NavigationDestination                                       OFFSET(get<T>, {0x82E, 1, 0, 0})
	DMember(float)                                     NavigationScrollPadding                                     OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(bool)                                      bAllowRightClickDragScrolling                               OFFSET(get<bool>, {0x834, 1, 0, 0})
	CMember(UMulticastDelegate)                        OnUserScrolled                                              OFFSET(get<T>, {0x838, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.ScrollBox.SetScrollOffset
	// void SetScrollOffset(float NewScrollOffset);                                                                             // [0x1e10bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollBarVisibility
	// void SetScrollBarVisibility(ESlateVisibility NewScrollBarVisibility);                                                    // [0x1e10b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetScrollbarThickness
	// void SetScrollbarThickness(FVector2D& NewScrollbarThickness);                                                            // [0x1e10c40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetOrientation
	// void SetOrientation(TEnumAsByte<EOrientation> NewOrientation);                                                           // [0x1e10910] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAlwaysShowScrollbar
	// void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);                                                                // [0x1e10060] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.SetAllowOverscroll
	// void SetAllowOverscroll(bool NewAllowOverscroll);                                                                        // [0x1e0ffd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollWidgetIntoView
	// void ScrollWidgetIntoView(UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination);    // [0x1e0fed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToStart
	// void ScrollToStart();                                                                                                    // [0x1e0feb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.ScrollToEnd
	// void ScrollToEnd();                                                                                                      // [0x1e0fe90] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBox.GetScrollOffset
	// float GetScrollOffset();                                                                                                 // [0x1e0f6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UScrollBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.ScrollBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e11290] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e10a20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.ScrollBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e10260] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0030 (0x000118 - 0x000148)
class USizeBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(bool)                                      bOverride_WidthOverride                                     OFFSET(get<bool>, {0x118, 1, 1, 0})
	DMember(bool)                                      bOverride_HeightOverride                                    OFFSET(get<bool>, {0x118, 1, 1, 1})
	DMember(bool)                                      bOverride_MinDesiredWidth                                   OFFSET(get<bool>, {0x118, 1, 1, 2})
	DMember(bool)                                      bOverride_MinDesiredHeight                                  OFFSET(get<bool>, {0x118, 1, 1, 3})
	DMember(bool)                                      bOverride_MaxDesiredWidth                                   OFFSET(get<bool>, {0x118, 1, 1, 4})
	DMember(bool)                                      bOverride_MaxDesiredHeight                                  OFFSET(get<bool>, {0x118, 1, 1, 5})
	DMember(bool)                                      bOverride_MaxAspectRatio                                    OFFSET(get<bool>, {0x118, 1, 1, 6})
	DMember(float)                                     WidthOverride                                               OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     HeightOverride                                              OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     MinDesiredHeight                                            OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     MaxDesiredWidth                                             OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     MaxDesiredHeight                                            OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     MaxAspectRatio                                              OFFSET(get<float>, {0x134, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.SizeBox.SetWidthOverride
	// void SetWidthOverride(float InWidthOverride);                                                                            // [0x1e11310] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredWidth
	// void SetMinDesiredWidth(float InMinDesiredWidth);                                                                        // [0x1e10790] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMinDesiredHeight
	// void SetMinDesiredHeight(float InMinDesiredHeight);                                                                      // [0x1e10710] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredWidth
	// void SetMaxDesiredWidth(float InMaxDesiredWidth);                                                                        // [0x1e10590] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxDesiredHeight
	// void SetMaxDesiredHeight(float InMaxDesiredHeight);                                                                      // [0x1e10510] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetMaxAspectRatio
	// void SetMaxAspectRatio(float InMaxAspectRatio);                                                                          // [0x1e10490] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.SetHeightOverride
	// void SetHeightOverride(float InHeightOverride);                                                                          // [0x1e101e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearWidthOverride
	// void ClearWidthOverride();                                                                                               // [0x1e0f1c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredWidth
	// void ClearMinDesiredWidth();                                                                                             // [0x1e0f160] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMinDesiredHeight
	// void ClearMinDesiredHeight();                                                                                            // [0x1e0f140] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredWidth
	// void ClearMaxDesiredWidth();                                                                                             // [0x1e0f0e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxDesiredHeight
	// void ClearMaxDesiredHeight();                                                                                            // [0x1e0f0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearMaxAspectRatio
	// void ClearMaxAspectRatio();                                                                                              // [0x1e0f0a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBox.ClearHeightOverride
	// void ClearHeightOverride();                                                                                              // [0x1e0f080] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.SizeBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e11210] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e10ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SizeBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e02cb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
	// void ScreenToWidgetLocal(UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate); // [0x1e0fd10] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
	// void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate);       // [0x1e0fc10] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.ScreenToViewport
	// void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);               // [0x1e0fb10] Final|Native|Static|Public|HasOutParms|HasDefaults 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToViewport
	// void LocalToViewport(UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x1e0f930] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.LocalToAbsolute
	// FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate);                                               // [0x1e0f830] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.IsUnderLocation
	// bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate);                                                // [0x1e0f730] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetLocalSize
	// FVector2D GetLocalSize(FGeometry& Geometry);                                                                             // [0x1e0f520] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.GetAbsoluteSize
	// FVector2D GetAbsoluteSize(FGeometry& Geometry);                                                                          // [0x1e0f460] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
	// bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B);                                                              // [0x1e0f1e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToViewport
	// void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition); // [0x1e0ef30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.SlateBlueprintLibrary.AbsoluteToLocal
	// FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate);                                            // [0x1e0ee30] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0038 (0x000028 - 0x000060)
class USlateVectorArtData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FSlateMeshVertex>)                  VertexData                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<uint32_t>)                          IndexData                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FVector2D)                                 ExtentMin                                                   OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FVector2D)                                 ExtentMax                                                   OFFSET(getStruct<T>, {0x58, 8, 0, 0})
};

/// Class /Script/UMG.Spacer
/// Size: 0x0018 (0x000100 - 0x000118)
class USpacer : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FVector2D)                                 Size                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/UMG.Spacer.SetSize
	// void SetSize(FVector2D InSize);                                                                                          // [0x1e10cd0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.SpinBox
/// Size: 0x0400 (0x000100 - 0x000500)
class USpinBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FSpinBoxStyle)                             WidgetStyle                                                 OFFSET(getStruct<T>, {0x118, 744, 0, 0})
	CMember(USlateWidgetStyleAsset*)                   Style                                                       OFFSET(get<T>, {0x400, 8, 0, 0})
	DMember(float)                                     Delta                                                       OFFSET(get<float>, {0x408, 4, 0, 0})
	DMember(float)                                     SliderExponent                                              OFFSET(get<float>, {0x40C, 4, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x410, 80, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x460, 1, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             OFFSET(get<float>, {0x464, 4, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  OFFSET(get<bool>, {0x468, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       OFFSET(get<bool>, {0x469, 1, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x470, 40, 0, 0})
	CMember(UMulticastDelegate)                        OnValueChanged                                              OFFSET(get<T>, {0x498, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnValueCommitted                                            OFFSET(get<T>, {0x4A8, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnBeginSliderMovement                                       OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnEndSliderMovement                                         OFFSET(get<T>, {0x4C8, 16, 0, 0})
	DMember(bool)                                      bOverride_MinValue                                          OFFSET(get<bool>, {0x4D8, 1, 1, 0})
	DMember(bool)                                      bOverride_MaxValue                                          OFFSET(get<bool>, {0x4D8, 1, 1, 1})
	DMember(bool)                                      bOverride_MinSliderValue                                    OFFSET(get<bool>, {0x4D8, 1, 1, 2})
	DMember(bool)                                      bOverride_MaxSliderValue                                    OFFSET(get<bool>, {0x4D8, 1, 1, 3})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x4DC, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x4E0, 4, 0, 0})
	DMember(float)                                     MinSliderValue                                              OFFSET(get<float>, {0x4E4, 4, 0, 0})
	DMember(float)                                     MaxSliderValue                                              OFFSET(get<float>, {0x4E8, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.SpinBox.SetValue
	// void SetValue(float NewValue);                                                                                           // [0x1e11190] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinValue
	// void SetMinValue(float NewValue);                                                                                        // [0x1e10890] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMinSliderValue
	// void SetMinSliderValue(float NewValue);                                                                                  // [0x1e10810] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxValue
	// void SetMaxValue(float NewValue);                                                                                        // [0x1e10690] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetMaxSliderValue
	// void SetMaxSliderValue(float NewValue);                                                                                  // [0x1e10610] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.SetForegroundColor
	// void SetForegroundColor(FSlateColor InForegroundColor);                                                                  // [0x1e100f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
	// void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, TEnumAsByte<ETextCommit> CommitMethod);              // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
	// void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);                                                       // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
	// void OnSpinBoxBeginSliderMovement__DelegateSignature();                                                                  // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/UMG.SpinBox.GetValue
	// float GetValue();                                                                                                        // [0x1e0f700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinValue
	// float GetMinValue();                                                                                                     // [0x1e0f670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMinSliderValue
	// float GetMinSliderValue();                                                                                               // [0x1e0f640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxValue
	// float GetMaxValue();                                                                                                     // [0x1e0f610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.GetMaxSliderValue
	// float GetMaxSliderValue();                                                                                               // [0x1e0f5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.SpinBox.ClearMinValue
	// void ClearMinValue();                                                                                                    // [0x1e0f1a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMinSliderValue
	// void ClearMinSliderValue();                                                                                              // [0x1e0f180] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxValue
	// void ClearMaxValue();                                                                                                    // [0x1e0f120] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.SpinBox.ClearMaxSliderValue
	// void ClearMaxSliderValue();                                                                                              // [0x1e0f100] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000048 - 0x000050)
class UTextBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:


	/// Functions
	// Function /Script/UMG.TextBinding.GetTextValue
	// FText GetTextValue();                                                                                                    // [0x1e16b20] Final|Native|Public|Const 
	// Function /Script/UMG.TextBinding.GetStringValue
	// FString GetStringValue();                                                                                                // [0x1e16a20] Final|Native|Public|Const 
};

/// Class /Script/UMG.Throbber
/// Size: 0x00A8 (0x000100 - 0x0001A8)
class UThrobber : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   NumberOfPieces                                              OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(bool)                                      bAnimateHorizontally                                        OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bAnimateVertically                                          OFFSET(get<bool>, {0x105, 1, 0, 0})
	DMember(bool)                                      bAnimateOpacity                                             OFFSET(get<bool>, {0x106, 1, 0, 0})
	CMember(USlateBrushAsset*)                         PieceImage                                                  OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x110, 136, 0, 0})


	/// Functions
	// Function /Script/UMG.Throbber.SetNumberOfPieces
	// void SetNumberOfPieces(int32_t InNumberOfPieces);                                                                        // [0x1e18210] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateVertically
	// void SetAnimateVertically(bool bInAnimateVertically);                                                                    // [0x1e17730] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateOpacity
	// void SetAnimateOpacity(bool bInAnimateOpacity);                                                                          // [0x1e176a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Throbber.SetAnimateHorizontally
	// void SetAnimateHorizontally(bool bInAnimateHorizontally);                                                                // [0x1e17610] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.TileView
/// Size: 0x0040 (0x000100 - 0x000140)
class UTileView : public UTableViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     ItemWidth                                                   OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     ItemHeight                                                  OFFSET(get<float>, {0x104, 4, 0, 0})
	CMember(TArray<UObject*>)                          Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TEnumAsByte<ESelectionMode>)               SelectionMode                                               OFFSET(get<T>, {0x118, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.TileView.SetItemWidth
	// void SetItemWidth(float Width);                                                                                          // [0x1e17ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.SetItemHeight
	// void SetItemHeight(float Height);                                                                                        // [0x1e17e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.TileView.RequestListRefresh
	// void RequestListRefresh();                                                                                               // [0x1e17460] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0758 (0x000028 - 0x000780)
class UUMGSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	CMember(UWidgetAnimation*)                         Animation                                                   OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000118 - 0x000140)
class UUniformGridPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMargin)                                   SlotPadding                                                 OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	DMember(float)                                     MinDesiredSlotWidth                                         OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     MinDesiredSlotHeight                                        OFFSET(get<float>, {0x12C, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.UniformGridPanel.SetSlotPadding
	// void SetSlotPadding(FMargin InSlotPadding);                                                                              // [0x1e187b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotWidth
	// void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);                                                                // [0x1e18050] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.SetMinDesiredSlotHeight
	// void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);                                                              // [0x1e17fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridPanel.AddChildToUniformGrid
	// UUniformGridSlot* AddChildToUniformGrid(UWidget* Content);                                                               // [0x1e16680] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      OFFSET(get<int32_t>, {0x40, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.UniformGridSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e18910] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetRow
	// void SetRow(int32_t InRow);                                                                                              // [0x1e18630] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e17cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.UniformGridSlot.SetColumn
	// void SetColumn(int32_t InColumn);                                                                                        // [0x1e179c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000118 - 0x000128)
class UVerticalBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:


	/// Functions
	// Function /Script/UMG.VerticalBox.AddChildToVerticalBox
	// UVerticalBoxSlot* AddChildToVerticalBox(UWidget* Content);                                                               // [0x1e1b320] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FSlateChildSize)                           Size                                                        OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.VerticalBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e1ff70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetSize
	// void SetSize(FSlateChildSize InSize);                                                                                    // [0x1e1fb20] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e1f6d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.VerticalBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e1ee20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.Viewport
/// Size: 0x0028 (0x000118 - 0x000140)
class UViewport : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x118, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.Viewport.Spawn
	// AActor* Spawn(UClass* ActorClass);                                                                                       // [0x1e20440] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewRotation
	// void SetViewRotation(FRotator Rotation);                                                                                 // [0x1e20080] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.SetViewLocation
	// void SetViewLocation(FVector Location);                                                                                  // [0x1e1fff0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.Viewport.GetViewRotation
	// FRotator GetViewRotation();                                                                                              // [0x1e1db40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewportWorld
	// UWorld* GetViewportWorld();                                                                                              // [0x1e1db80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.Viewport.GetViewLocation
	// FVector GetViewLocation();                                                                                               // [0x1e1db00] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000048 - 0x000048)
class UVisibilityBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/UMG.VisibilityBinding.GetValue
	// ESlateVisibility GetValue();                                                                                             // [0x1e1daa0] Final|Native|Public|Const 
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x0003B0 - 0x0003E0)
class UWidgetAnimation : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(UMulticastDelegate)                        OnAnimationStarted                                          OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnAnimationFinished                                         OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(UMovieScene*)                              MovieScene                                                  OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(TArray<FWidgetAnimationBinding>)           AnimationBindings                                           OFFSET(get<T>, {0x3D0, 16, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetAnimation.GetStartTime
	// float GetStartTime();                                                                                                    // [0x1e1da70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetAnimation.GetEndTime
	// float GetEndTime();                                                                                                      // [0x1e1d1e0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000048 - 0x000048)
class UWidgetBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/UMG.WidgetBinding.GetValue
	// UWidget* GetValue();                                                                                                     // [0x1e1dad0] Final|Native|Public|Const 
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0070 (0x0002D8 - 0x000348)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UWidgetTree*)                              WidgetTree                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(bool)                                      bAllowTemplate                                              OFFSET(get<bool>, {0x2E0, 1, 1, 0})
	DMember(bool)                                      bAllowDynamicCreation                                       OFFSET(get<bool>, {0x2E0, 1, 1, 1})
	DMember(bool)                                      bValidTemplate                                              OFFSET(get<bool>, {0x2E0, 1, 1, 2})
	DMember(bool)                                      bTemplateInitialized                                        OFFSET(get<bool>, {0x2E0, 1, 1, 3})
	DMember(bool)                                      bCookedTemplate                                             OFFSET(get<bool>, {0x2E0, 1, 1, 4})
	DMember(bool)                                      bClassRequiresNativeTick                                    OFFSET(get<bool>, {0x2E0, 1, 1, 5})
	CMember(TArray<FDelegateRuntimeBinding>)           Bindings                                                    OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<UWidgetAnimation*>)                 Animations                                                  OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<FName>)                             NamedSlots                                                  OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(UUserWidget*)                              TemplateAsset                                               OFFSET(get<T>, {0x318, 40, 0, 0})
	CMember(UUserWidget*)                              Template                                                    OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.WidgetBlueprintLibrary.UnlockMouse
	// FEventReply UnlockMouse(FEventReply& Reply);                                                                             // [0x1e20540] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Unhandled
	// FEventReply Unhandled();                                                                                                 // [0x1e204d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
	// void SetWindowTitleBarState(UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // [0x1e202b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
	// void SetWindowTitleBarOnCloseClickedDelegate(DelegateProperty Delegate);                                                 // [0x1e20210] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
	// void SetWindowTitleBarCloseButtonActive(bool bActive);                                                                   // [0x1e20190] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetUserFocus
	// FEventReply SetUserFocus(FEventReply& Reply, UWidget* FocusWidget, bool bInAllUsers);                                    // [0x1e1fd90] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetMousePosition
	// FEventReply SetMousePosition(FEventReply& Reply, FVector2D NewMousePosition);                                            // [0x1e1f430] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
	// void SetInputMode_UIOnlyEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode); // [0x1e1f290] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly
	// void SetInputMode_UIOnly(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport);                // [0x1e1f190] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
	// void SetInputMode_GameOnly(APlayerController* PlayerController);                                                         // [0x1e1f120] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
	// void SetInputMode_GameAndUIEx(APlayerController* PlayerController, UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // [0x1e1efe0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI
	// void SetInputMode_GameAndUI(APlayerController* Target, UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // [0x1e1eea0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetHardwareCursor
	// bool SetHardwareCursor(UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, FName CursorName, FVector2D HotSpot); // [0x1e1ecf0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
	// void SetFocusToGameViewport();                                                                                           // [0x1e1ecd0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
	// void SetBrushResourceToTexture(FSlateBrush& Brush, UTexture2D* Texture);                                                 // [0x1e1ea30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
	// void SetBrushResourceToMaterial(FSlateBrush& Brush, UMaterialInterface* Material);                                       // [0x1e1ea30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
	// void RestorePreviousWindowTitleBarState();                                                                               // [0x1e1e950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
	// FEventReply ReleaseMouseCapture(FEventReply& Reply);                                                                     // [0x1e1e7c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
	// FEventReply ReleaseJoystickCapture(FEventReply& Reply, bool bInAllJoysticks);                                            // [0x1e1e620] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
	// void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();                                                        // [0x154a140] Public|Delegate      
	// Function /Script/UMG.WidgetBlueprintLibrary.NoResourceBrush
	// FSlateBrush NoResourceBrush();                                                                                           // [0x1e1e570] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
	// FSlateBrush MakeBrushFromTexture(UTexture2D* Texture, int32_t Width, int32_t Height);                                    // [0x1e1e3e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
	// FSlateBrush MakeBrushFromMaterial(UMaterialInterface* Material, int32_t Width, int32_t Height);                          // [0x1e1e250] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
	// FSlateBrush MakeBrushFromAsset(USlateBrushAsset* BrushAsset);                                                            // [0x1e1e140] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.LockMouse
	// FEventReply LockMouse(FEventReply& Reply, UWidget* CapturingWidget);                                                     // [0x1e1dfa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.IsDragDropping
	// bool IsDragDropping();                                                                                                   // [0x1e1df10] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.Handled
	// FEventReply Handled();                                                                                                   // [0x1e1dbe0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetSafeZonePadding
	// void GetSafeZonePadding(UObject* WorldContextObject, FVector4& SafePadding, FVector2D& SafePaddingScale, FVector4& SpillOverPadding); // [0x1e1d900] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
	// FKeyEvent GetKeyEventFromAnalogInputEvent(FAnalogInputEvent& Event);                                                     // [0x1e1d6f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
	// FInputEvent GetInputEventFromPointerEvent(FPointerEvent& Event);                                                         // [0x1e1d530] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
	// FInputEvent GetInputEventFromNavigationEvent(FNavigationEvent& Event);                                                   // [0x1e1d410] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
	// FInputEvent GetInputEventFromKeyEvent(FKeyEvent& Event);                                                                 // [0x1e1d2f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
	// FInputEvent GetInputEventFromCharacterEvent(FCharacterEvent& Event);                                                     // [0x1e1d210] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDynamicMaterial
	// UMaterialInstanceDynamic* GetDynamicMaterial(FSlateBrush& Brush);                                                        // [0x1e1d070] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetDragDroppingContent
	// UDragDropOperation* GetDragDroppingContent();                                                                            // [0x1e1d040] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
	// UTexture2D* GetBrushResourceAsTexture2D(FSlateBrush& Brush);                                                             // [0x1e1ce20] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
	// UMaterialInterface* GetBrushResourceAsMaterial(FSlateBrush& Brush);                                                      // [0x1e1ccb0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetBrushResource
	// UObject* GetBrushResource(FSlateBrush& Brush);                                                                           // [0x1e1cb40] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
	// void GetAllWidgetsWithInterface(UObject* WorldContextObject, UClass* Interface, TArray<UUserWidget*>& FoundWidgets, bool TopLevelOnly); // [0x1e1c9e0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
	// void GetAllWidgetsOfClass(UObject* WorldContextObject, TArray<UUserWidget*>& FoundWidgets, UClass* WidgetClass, bool TopLevelOnly); // [0x1e1c880] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.EndDragDrop
	// FEventReply EndDragDrop(FEventReply& Reply);                                                                             // [0x1e1c680] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawTextFormatted
	// void DrawTextFormatted(FPaintContext& Context, FText& Text, FVector2D Position, UFont* Font, int32_t FontSize, FName FontTypeFace, FLinearColor Tint); // [0x1e1c420] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawText
	// void DrawText(FPaintContext& Context, FString inString, FVector2D Position, FLinearColor Tint);                          // [0x1e1c2a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLines
	// void DrawLines(FPaintContext& Context, TArray<FVector2D>& Points, FLinearColor Tint, bool bAntiAlias);                   // [0x1e1c100] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawLine
	// void DrawLine(FPaintContext& Context, FVector2D PositionA, FVector2D PositionB, FLinearColor Tint, bool bAntiAlias);     // [0x1e1bf50] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DrawBox
	// void DrawBox(FPaintContext& Context, FVector2D Position, FVector2D Size, USlateBrushAsset* Brush, FLinearColor Tint);    // [0x1e1bda0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DismissAllMenus
	// void DismissAllMenus();                                                                                                  // [0x1e1bd80] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDragIfPressed
	// FEventReply DetectDragIfPressed(FPointerEvent& PointerEvent, UWidget* WidgetDetectingDrag, FKey DragKey);                // [0x1e1baf0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.DetectDrag
	// FEventReply DetectDrag(FEventReply& Reply, UWidget* WidgetDetectingDrag, FKey DragKey);                                  // [0x1e1b8c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CreateDragDropOperation
	// UDragDropOperation* CreateDragDropOperation(UClass* OperationClass);                                                     // [0x1e1b840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.Create
	// UUserWidget* Create(UObject* WorldContextObject, UClass* WidgetType, APlayerController* OwningPlayer);                   // [0x1e1b750] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetBlueprintLibrary.ClearUserFocus
	// FEventReply ClearUserFocus(FEventReply& Reply, bool bInAllUsers);                                                        // [0x1e1e620] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureMouse
	// FEventReply CaptureMouse(FEventReply& Reply, UWidget* CapturingWidget);                                                  // [0x1e1b5b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CaptureJoystick
	// FEventReply CaptureJoystick(FEventReply& Reply, UWidget* CapturingWidget, bool bInAllJoysticks);                         // [0x1e1b3d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetBlueprintLibrary.CancelDragDrop
	// void CancelDragDrop();                                                                                                   // [0x1e1b3b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0120 (0x000670 - 0x000790)
class UWidgetComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	CMember(EWidgetSpace)                              Space                                                       OFFSET(get<T>, {0x668, 1, 0, 0})
	CMember(EWidgetTimingPolicy)                       TimingPolicy                                                OFFSET(get<T>, {0x669, 1, 0, 0})
	CMember(UClass*)                                   WidgetClass                                                 OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FIntPoint)                                 DrawSize                                                    OFFSET(getStruct<T>, {0x678, 8, 0, 0})
	DMember(bool)                                      bManuallyRedraw                                             OFFSET(get<bool>, {0x680, 1, 0, 0})
	DMember(bool)                                      bRedrawRequested                                            OFFSET(get<bool>, {0x681, 1, 0, 0})
	DMember(float)                                     RedrawTime                                                  OFFSET(get<float>, {0x684, 4, 0, 0})
	SMember(FIntPoint)                                 CurrentDrawSize                                             OFFSET(getStruct<T>, {0x690, 8, 0, 0})
	DMember(bool)                                      bDrawAtDesiredSize                                          OFFSET(get<bool>, {0x698, 1, 0, 0})
	SMember(FVector2D)                                 Pivot                                                       OFFSET(getStruct<T>, {0x69C, 8, 0, 0})
	DMember(bool)                                      bReceiveHardwareInput                                       OFFSET(get<bool>, {0x6A4, 1, 0, 0})
	DMember(bool)                                      bWindowFocusable                                            OFFSET(get<bool>, {0x6A5, 1, 0, 0})
	CMember(ULocalPlayer*)                             OwnerPlayer                                                 OFFSET(get<T>, {0x6A8, 8, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             OFFSET(getStruct<T>, {0x6B0, 16, 0, 0})
	SMember(FLinearColor)                              TintColorAndOpacity                                         OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	DMember(float)                                     OpacityFromTexture                                          OFFSET(get<float>, {0x6D0, 4, 0, 0})
	CMember(EWidgetBlendMode)                          BlendMode                                                   OFFSET(get<T>, {0x6D4, 1, 0, 0})
	DMember(bool)                                      bIsTwoSided                                                 OFFSET(get<bool>, {0x6D5, 1, 0, 0})
	DMember(bool)                                      TickWhenOffscreen                                           OFFSET(get<bool>, {0x6D6, 1, 0, 0})
	CMember(UUserWidget*)                              Widget                                                      OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(UMaterialInterface*)                       TranslucentMaterial                                         OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UMaterialInterface*)                       TranslucentMaterial_OneSided                                OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UMaterialInterface*)                       OpaqueMaterial                                              OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UMaterialInterface*)                       OpaqueMaterial_OneSided                                     OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaskedMaterial                                              OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaskedMaterial_OneSided                                     OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   RenderTarget                                                OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MaterialInstance                                            OFFSET(get<T>, {0x740, 8, 0, 0})
	DMember(bool)                                      bAddedToScreen                                              OFFSET(get<bool>, {0x748, 1, 0, 0})
	DMember(bool)                                      bEditTimeUsable                                             OFFSET(get<bool>, {0x749, 1, 0, 0})
	SMember(FName)                                     SharedLayerName                                             OFFSET(getStruct<T>, {0x750, 8, 0, 0})
	DMember(int32_t)                                   LayerZOrder                                                 OFFSET(get<int32_t>, {0x758, 4, 0, 0})
	CMember(EWidgetGeometryMode)                       GeometryMode                                                OFFSET(get<T>, {0x75C, 1, 0, 0})
	DMember(float)                                     CylinderArcAngle                                            OFFSET(get<float>, {0x760, 4, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetComponent.SetWidget
	// void SetWidget(UUserWidget* Widget);                                                                                     // [0x1e24080] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetTintColorAndOpacity
	// void SetTintColorAndOpacity(FLinearColor NewTintColorAndOpacity);                                                        // [0x1e23e00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetOwnerPlayer
	// void SetOwnerPlayer(ULocalPlayer* LocalPlayer);                                                                          // [0x1e23b40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetDrawSize
	// void SetDrawSize(FVector2D Size);                                                                                        // [0x1e23730] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor NewBackgroundColor);                                                                // [0x1e235f0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.RequestRedraw
	// void RequestRedraw();                                                                                                    // [0x1e23410] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetComponent.GetUserWidgetObject
	// UUserWidget* GetUserWidgetObject();                                                                                      // [0x1e22af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetRenderTarget
	// UTextureRenderTarget2D* GetRenderTarget();                                                                               // [0x1e22ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetOwnerPlayer
	// ULocalPlayer* GetOwnerPlayer();                                                                                          // [0x1e229e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetMaterialInstance
	// UMaterialInstanceDynamic* GetMaterialInstance();                                                                         // [0x1e22790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetComponent.GetDrawSize
	// FVector2D GetDrawSize();                                                                                                 // [0x1e226e0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x01F0 (0x000290 - 0x000480)
class UWidgetInteractionComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(UMulticastDelegate)                        OnHoveredWidgetChanged                                      OFFSET(get<T>, {0x290, 16, 0, 0})
	DMember(int32_t)                                   VirtualUserIndex                                            OFFSET(get<int32_t>, {0x2B0, 4, 0, 0})
	DMember(float)                                     PointerIndex                                                OFFSET(get<float>, {0x2B4, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                OFFSET(get<T>, {0x2B8, 1, 0, 0})
	DMember(float)                                     InteractionDistance                                         OFFSET(get<float>, {0x2BC, 4, 0, 0})
	CMember(EWidgetInteractionSource)                  InteractionSource                                           OFFSET(get<T>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bEnableHitTesting                                           OFFSET(get<bool>, {0x2C1, 1, 0, 0})
	DMember(bool)                                      bShowDebug                                                  OFFSET(get<bool>, {0x2C2, 1, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  OFFSET(getStruct<T>, {0x2C4, 16, 0, 0})
	SMember(FHitResult)                                CustomHitResult                                             OFFSET(getStruct<T>, {0x350, 136, 0, 0})
	SMember(FVector2D)                                 LocalHitLocation                                            OFFSET(getStruct<T>, {0x3D8, 8, 0, 0})
	SMember(FVector2D)                                 LastLocalHitLocation                                        OFFSET(getStruct<T>, {0x3E0, 8, 0, 0})
	CMember(UWidgetComponent*)                         HoveredWidgetComponent                                      OFFSET(get<T>, {0x3E8, 8, 0, 0})
	SMember(FHitResult)                                LastHitResult                                               OFFSET(getStruct<T>, {0x3F0, 136, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetInteractable                                OFFSET(get<bool>, {0x478, 1, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetFocusable                                   OFFSET(get<bool>, {0x479, 1, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetHitTestVisible                              OFFSET(get<bool>, {0x47A, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetInteractionComponent.SetCustomHitResult
	// void SetCustomHitResult(FHitResult& HitResult);                                                                          // [0x1e23670] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.SendKeyChar
	// bool SendKeyChar(FString Characters, bool bRepeat);                                                                      // [0x1e234b0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ScrollWheel
	// void ScrollWheel(float ScrollDelta);                                                                                     // [0x1e23430] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleasePointerKey
	// void ReleasePointerKey(FKey Key);                                                                                        // [0x1e232c0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.ReleaseKey
	// bool ReleaseKey(FKey Key);                                                                                               // [0x1e231c0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressPointerKey
	// void PressPointerKey(FKey Key);                                                                                          // [0x1e22fc0] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressKey
	// bool PressKey(FKey Key, bool bRepeat);                                                                                   // [0x1e22e80] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.PressAndReleaseKey
	// bool PressAndReleaseKey(FKey Key);                                                                                       // [0x1e22d80] Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverInteractableWidget
	// bool IsOverInteractableWidget();                                                                                         // [0x1e22d50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
	// bool IsOverHitTestVisibleWidget();                                                                                       // [0x1e22d20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.IsOverFocusableWidget
	// bool IsOverFocusableWidget();                                                                                            // [0x1e22cf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetLastHitResult
	// FHitResult GetLastHitResult();                                                                                           // [0x1e22750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
	// UWidgetComponent* GetHoveredWidgetComponent();                                                                           // [0x1e22720] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UMG.WidgetInteractionComponent.Get2DHitLocation
	// FVector2D Get2DHitLocation();                                                                                            // [0x1e22640] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
	// UVerticalBoxSlot* SlotAsVerticalBoxSlot(UWidget* Widget);                                                                // [0x1e24410] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
	// UUniformGridSlot* SlotAsUniformGridSlot(UWidget* Widget);                                                                // [0x1e24390] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
	// UOverlaySlot* SlotAsOverlaySlot(UWidget* Widget);                                                                        // [0x1e24310] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
	// UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(UWidget* Widget);                                                            // [0x1e24290] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsGridSlot
	// UGridSlot* SlotAsGridSlot(UWidget* Widget);                                                                              // [0x1e24210] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
	// UCanvasPanelSlot* SlotAsCanvasSlot(UWidget* Widget);                                                                     // [0x1e24190] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.SlotAsBorderSlot
	// UBorderSlot* SlotAsBorderSlot(UWidget* Widget);                                                                          // [0x1e24110] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.RemoveAllWidgets
	// void RemoveAllWidgets(UObject* WorldContextObject);                                                                      // [0x1e233a0] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
	// bool ProjectWorldLocationToWidgetPosition(APlayerController* PlayerController, FVector WorldLocation, FVector2D& ScreenPosition); // [0x1e230a0] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
	// FGeometry GetViewportWidgetGeometry(UObject* WorldContextObject);                                                        // [0x1e22c40] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportSize
	// FVector2D GetViewportSize(UObject* WorldContextObject);                                                                  // [0x1e22bb0] Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetViewportScale
	// float GetViewportScale(UObject* WorldContextObject);                                                                     // [0x1e22b20] Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
	// FGeometry GetPlayerScreenWidgetGeometry(APlayerController* PlayerController);                                            // [0x1e22a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
	// bool GetMousePositionScaledByDPI(APlayerController* Player, float& LocationX, float& LocationY);                         // [0x1e22890] Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
	// FVector2D GetMousePositionOnViewport(UObject* WorldContextObject);                                                       // [0x1e22800] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
	// FVector2D GetMousePositionOnPlatform();                                                                                  // [0x1e227c0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00F0 (0x000028 - 0x000118)
class UWidgetNavigation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FWidgetNavigationData)                     Up                                                          OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FWidgetNavigationData)                     Down                                                        OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FWidgetNavigationData)                     Left                                                        OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FWidgetNavigationData)                     Right                                                       OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FWidgetNavigationData)                     Next                                                        OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FWidgetNavigationData)                     Previous                                                    OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WidgetSwitcherSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e23e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e23bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WidgetSwitcherSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e238c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UWidget*)                                  RootWidget                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<UWidget*>)                          AllWidgets                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000118 - 0x000138)
class UWindowTitleBarArea : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(bool)                                      bWindowButtonsEnabled                                       OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bDoubleClickTogglesFullscreen                               OFFSET(get<bool>, {0x119, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WindowTitleBarArea.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e23f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e23c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarArea.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e23940] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x49, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e23f80] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e23ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e239c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0020 (0x000118 - 0x000138)
class UWrapBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FVector2D)                                 InnerSlotPadding                                            OFFSET(getStruct<T>, {0x118, 8, 0, 0})
	DMember(float)                                     WrapWidth                                                   OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(bool)                                      bExplicitWrapWidth                                          OFFSET(get<bool>, {0x124, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WrapBox.SetInnerSlotPadding
	// void SetInnerSlotPadding(FVector2D InPadding);                                                                           // [0x1e23ac0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UMG.WrapBox.AddChildWrapBox
	// UWrapBoxSlot* AddChildWrapBox(UWidget* Content);                                                                         // [0x1e225b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWrapBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bFillEmptySpace                                             OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     FillSpanWhenLessThan                                        OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x51, 1, 0, 0})


	/// Functions
	// Function /Script/UMG.WrapBoxSlot.SetVerticalAlignment
	// void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);                                          // [0x1e24000] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetPadding
	// void SetPadding(FMargin InPadding);                                                                                      // [0x1e23d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetHorizontalAlignment
	// void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);                                    // [0x1e23a40] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillSpanWhenLessThan
	// void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);                                                              // [0x1e23840] Final|Native|Public|BlueprintCallable 
	// Function /Script/UMG.WrapBoxSlot.SetFillEmptySpace
	// void SetFillEmptySpace(bool InbFillEmptySpace);                                                                          // [0x1e237b0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FEventReply : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x001C (0x000000 - 0x00001C)
class FWidgetTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector2D)                                 Translation                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Scale                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FVector2D)                                 Shear                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
class FPaintContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
class FShapedTextOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bOverride_TextShapingMethod                                 OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bOverride_TextFlowDirection                                 OFFSET(get<bool>, {0x0, 1, 1, 1})
	CMember(ETextShapingMethod)                        TextShapingMethod                                           OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ETextFlowDirection)                        TextFlowDirection                                           OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FNamedSlotBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(UWidget*)                                  Content                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0028 (0x000000 - 0x000028)
class FAnchorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMargin)                                   Offsets                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FAnchors)                                  Anchors                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 Alignment                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0010 (0x000000 - 0x000010)
class FDynamicPropertyPath : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FPropertyPathSegment>)              Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/UMG.PropertyPathSegment
/// Size: 0x0020 (0x000000 - 0x000020)
class FPropertyPathSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(UStruct*)                                  Struct                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UField*)                                   Field                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/UMG.MovieScene2DTransformSectionTemplate
/// Size: 0x0318 (0x000048 - 0x000360)
class FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FRichCurve)                                Translation                                                 OFFSET(getStruct<T>, {0x48, 224, 0, 0})
	SMember(FRichCurve)                                Rotation                                                    OFFSET(getStruct<T>, {0x128, 112, 0, 0})
	SMember(FRichCurve)                                Scale                                                       OFFSET(getStruct<T>, {0x198, 224, 0, 0})
	SMember(FRichCurve)                                Shear                                                       OFFSET(getStruct<T>, {0x278, 224, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0x358, 1, 0, 0})
};

/// Struct /Script/UMG.MovieSceneMarginSectionTemplate
/// Size: 0x01C8 (0x000048 - 0x000210)
class FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FRichCurve)                                TopCurve                                                    OFFSET(getStruct<T>, {0x48, 112, 0, 0})
	SMember(FRichCurve)                                LeftCurve                                                   OFFSET(getStruct<T>, {0xB8, 112, 0, 0})
	SMember(FRichCurve)                                RightCurve                                                  OFFSET(getStruct<T>, {0x128, 112, 0, 0})
	SMember(FRichCurve)                                BottomCurve                                                 OFFSET(getStruct<T>, {0x198, 112, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0x208, 1, 0, 0})
};

/// Struct /Script/UMG.MovieSceneWidgetMaterialSectionTemplate
/// Size: 0x0010 (0x000050 - 0x000060)
class FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FName>)                             BrushPropertyNamePath                                       OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x01E0 (0x000008 - 0x0001E8)
class FRichTextStyleRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x8, 480, 0, 0})
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x0088 (0x000008 - 0x000090)
class FRichImageRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FSlateBrush)                               Brush                                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
class FSlateMeshVertex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FVector2D)                                 Position                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FVector2D)                                 UV0                                                         OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FVector2D)                                 UV1                                                         OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	SMember(FVector2D)                                 UV2                                                         OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FVector2D)                                 UV3                                                         OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FVector2D)                                 UV4                                                         OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	SMember(FVector2D)                                 UV5                                                         OFFSET(getStruct<T>, {0x34, 8, 0, 0})
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
class FSlateChildSize : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ESlateSizeRule>)               SizeRule                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FWidgetAnimationBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     WidgetName                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SlotWidgetName                                              OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FGuid)                                     AnimationGuid                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bIsRootWidget                                               OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0038 (0x000000 - 0x000038)
class FDelegateRuntimeBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ObjectName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FDynamicPropertyPath)                      SourcePath                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(EBindingKind)                              Kind                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x0028 (0x000000 - 0x000028)
class FWidgetNavigationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EUINavigationRule)                         Rule                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     WidgetToFocus                                               OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  Widget                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Enum /Script/UMG.ESlateVisibility
/// Size: 0x06
enum ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible0                                                       = 0,
	ESlateVisibility__Collapsed1                                                     = 1,
	ESlateVisibility__Hidden2                                                        = 2,
	ESlateVisibility__HitTestInvisible3                                              = 3,
	ESlateVisibility__SelfHitTestInvisible4                                          = 4,
	ESlateVisibility__ESlateVisibility_MAX5                                          = 5
};

/// Enum /Script/UMG.EVirtualKeyboardType
/// Size: 0x07
enum EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default0                                                   = 0,
	EVirtualKeyboardType__Number1                                                    = 1,
	EVirtualKeyboardType__Web2                                                       = 2,
	EVirtualKeyboardType__Email3                                                     = 3,
	EVirtualKeyboardType__Password4                                                  = 4,
	EVirtualKeyboardType__AlphaNumeric5                                              = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX6                                  = 6
};

/// Enum /Script/UMG.EUMGSequencePlayMode
/// Size: 0x04
enum EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward0                                                   = 0,
	EUMGSequencePlayMode__Reverse1                                                   = 1,
	EUMGSequencePlayMode__PingPong2                                                  = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX3                                  = 3
};

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never0                                                     = 0,
	EWidgetTickFrequency__Auto1                                                      = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX2                                  = 2
};

/// Enum /Script/UMG.EDragPivot
/// Size: 0x11
enum EDragPivot : uint8_t
{
	EDragPivot__MouseDown0                                                           = 0,
	EDragPivot__TopLeft1                                                             = 1,
	EDragPivot__TopCenter2                                                           = 2,
	EDragPivot__TopRight3                                                            = 3,
	EDragPivot__CenterLeft4                                                          = 4,
	EDragPivot__CenterCenter5                                                        = 5,
	EDragPivot__CenterRight6                                                         = 6,
	EDragPivot__BottomLeft7                                                          = 7,
	EDragPivot__BottomCenter8                                                        = 8,
	EDragPivot__BottomRight9                                                         = 9,
	EDragPivot__EDragPivot_MAX10                                                     = 10
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic0                                                       = 0,
	ESlateSizeRule__Fill1                                                            = 1,
	ESlateSizeRule__ESlateSizeRule_MAX2                                              = 2
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x05
enum EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None0                                                        = 0,
	EWidgetDesignFlags__Designing1                                                   = 1,
	EWidgetDesignFlags__ShowOutline2                                                 = 2,
	EWidgetDesignFlags__ExecutePreConstruct3                                         = 4,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX4                                      = 5
};

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum EBindingKind : uint8_t
{
	EBindingKind__Function0                                                          = 0,
	EBindingKind__Property1                                                          = 1,
	EBindingKind__EBindingKind_MAX2                                                  = 2
};

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane0                                                      = 0,
	EWidgetGeometryMode__Cylinder1                                                   = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX2                                    = 2
};

/// Enum /Script/UMG.EWidgetBlendMode
/// Size: 0x04
enum EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque0                                                        = 0,
	EWidgetBlendMode__Masked1                                                        = 1,
	EWidgetBlendMode__Transparent2                                                   = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX3                                          = 3
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime0                                                   = 0,
	EWidgetTimingPolicy__GameTime1                                                   = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX2                                    = 2
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum EWidgetSpace : uint8_t
{
	EWidgetSpace__World0                                                             = 0,
	EWidgetSpace__Screen1                                                            = 1,
	EWidgetSpace__EWidgetSpace_MAX2                                                  = 2
};

/// Enum /Script/UMG.EWidgetInteractionSource
/// Size: 0x05
enum EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World0                                                 = 0,
	EWidgetInteractionSource__Mouse1                                                 = 1,
	EWidgetInteractionSource__CenterScreen2                                          = 2,
	EWidgetInteractionSource__Custom3                                                = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX4                          = 4
};

