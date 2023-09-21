
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: PropertyPath

/// Class /Script/UMG.Visual
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisual : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.Widget
/// Size: 0x0150 (0x000028 - 0x000178)
class UWidget : public UVisual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(UPanelSlot*)                               Slot                                                        ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FDelegateProperty)                         bIsEnabledDelegate                                          ___ OFFSET(get<T>, {0x38, 12, 0, 0})
	SMember(FText)                                     ToolTipText                                                 ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FDelegateProperty)                         ToolTipTextDelegate                                         ___ OFFSET(get<T>, {0x60, 12, 0, 0})
	CMember(UWidget*)                                  ToolTipWidget                                               ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FDelegateProperty)                         ToolTipWidgetDelegate                                       ___ OFFSET(get<T>, {0x78, 12, 0, 0})
	SMember(FDelegateProperty)                         VisibilityDelegate                                          ___ OFFSET(get<T>, {0x84, 12, 0, 0})
	SMember(FWidgetTransform)                          RenderTransform                                             ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	SMember(FVector2D)                                 RenderTransformPivot                                        ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(EFlowDirectionPreference)                  FlowDirectionPreference                                     ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bIsVariable                                                 ___ OFFSET(get<bool>, {0xD9, 1, 1, 0})
	DMember(bool)                                      bCreatedByConstructionScript                                ___ OFFSET(get<bool>, {0xD9, 1, 1, 1})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0xD9, 1, 1, 2})
	DMember(bool)                                      bOverride_Cursor                                            ___ OFFSET(get<bool>, {0xD9, 1, 1, 3})
	DMember(bool)                                      bIsVolatile                                                 ___ OFFSET(get<bool>, {0xD9, 1, 1, 4})
	CMember(TEnumAsByte<EMouseCursor>)                 Cursor                                                      ___ OFFSET(get<T>, {0xDA, 1, 0, 0})
	CMember(EWidgetClipping)                           Clipping                                                    ___ OFFSET(get<T>, {0xDB, 1, 0, 0})
	CMember(ESlateVisibility)                          Visibility                                                  ___ OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(float)                                     RenderOpacity                                               ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(EWidgetPixelSnapping)                      PixelSnapping                                               ___ OFFSET(get<T>, {0xE4, 1, 0, 0})
	CMember(USlateAccessibleWidgetData*)               AccessibleWidgetData                                        ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UWidgetNavigation*)                        Navigation                                                  ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<UPropertyBinding*>)                 NativeBindings                                              ___ OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Class /Script/UMG.ListViewBase
/// Size: 0x0120 (0x000178 - 0x000298)
class UListViewBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FMulticastInlineDelegate)                  BP_OnEntryGenerated                                         ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(UClass*)                                   EntryWidgetClass                                            ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	DMember(float)                                     WheelScrollMultiplier                                       ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bEnableScrollAnimation                                      ___ OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	DMember(bool)                                      AllowOverscroll                                             ___ OFFSET(get<bool>, {0x1A5, 1, 0, 0})
	DMember(bool)                                      bEnableRightClickScrolling                                  ___ OFFSET(get<bool>, {0x1A6, 1, 0, 0})
	DMember(bool)                                      bEnableTouchScrolling                                       ___ OFFSET(get<bool>, {0x1A7, 1, 0, 0})
	DMember(bool)                                      bEnableFixedLineOffset                                      ___ OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(float)                                     FixedLineScrollOffset                                       ___ OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(bool)                                      bAllowDragging                                              ___ OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnEntryReleased                                          ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
	SMember(FUserWidgetPool)                           EntryWidgetPool                                             ___ OFFSET(get<T>, {0x1C8, 136, 0, 0})
};

/// Class /Script/UMG.ListView
/// Size: 0x0938 (0x000298 - 0x000BD0)
class UListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	SMember(FTableViewStyle)                           WidgetStyle                                                 ___ OFFSET(get<T>, {0x380, 208, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              ___ OFFSET(get<T>, {0x450, 1760, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0xB30, 1, 0, 0})
	CMember(TEnumAsByte<ESelectionMode>)               SelectionMode                                               ___ OFFSET(get<T>, {0xB31, 1, 0, 0})
	CMember(EConsumeMouseWheel)                        ConsumeMouseWheel                                           ___ OFFSET(get<T>, {0xB32, 1, 0, 0})
	DMember(bool)                                      bClearSelectionOnClick                                      ___ OFFSET(get<bool>, {0xB33, 1, 0, 0})
	DMember(bool)                                      bIsFocusable                                                ___ OFFSET(get<bool>, {0xB34, 1, 0, 0})
	DMember(bool)                                      bReturnFocusToSelection                                     ___ OFFSET(get<bool>, {0xB35, 1, 0, 0})
	CMember(TArray<UObject*>)                          ListItems                                                   ___ OFFSET(get<T>, {0xB38, 16, 0, 0})
	DMember(float)                                     HorizontalEntrySpacing                                      ___ OFFSET(get<float>, {0xB58, 4, 0, 0})
	DMember(float)                                     VerticalEntrySpacing                                        ___ OFFSET(get<float>, {0xB5C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnEntryInitialized                                       ___ OFFSET(get<T>, {0xB60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemClicked                                            ___ OFFSET(get<T>, {0xB70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemDoubleClicked                                      ___ OFFSET(get<T>, {0xB80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemIsHoveredChanged                                   ___ OFFSET(get<T>, {0xB90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemSelectionChanged                                   ___ OFFSET(get<T>, {0xBA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemScrolledIntoView                                   ___ OFFSET(get<T>, {0xBB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnListViewScrolled                                       ___ OFFSET(get<T>, {0xBC0, 16, 0, 0})
};

/// Class /Script/UMG.ListViewDesignerPreviewItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UListViewDesignerPreviewItem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.SlateAccessibleWidgetData
/// Size: 0x0058 (0x000028 - 0x000080)
class USlateAccessibleWidgetData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bCanChildrenBeAccessible                                    ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(ESlateAccessibleBehavior)                  AccessibleBehavior                                          ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(ESlateAccessibleBehavior)                  AccessibleSummaryBehavior                                   ___ OFFSET(get<T>, {0x2A, 1, 0, 0})
	SMember(FText)                                     AccessibleText                                              ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FDelegateProperty)                         AccessibleTextDelegate                                      ___ OFFSET(get<T>, {0x48, 12, 0, 0})
	SMember(FText)                                     AccessibleSummaryText                                       ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FDelegateProperty)                         AccessibleSummaryTextDelegate                               ___ OFFSET(get<T>, {0x70, 12, 0, 0})
};

/// Class /Script/UMG.UserWidgetBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UUserWidgetBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/UMG.UserWidget
/// Size: 0x0130 (0x000178 - 0x0002A8)
class UUserWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FLinearColor)                              ColorAndOpacity                                             ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FDelegateProperty)                         ColorAndOpacityDelegate                                     ___ OFFSET(get<T>, {0x190, 12, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             ___ OFFSET(get<T>, {0x19C, 20, 0, 0})
	SMember(FDelegateProperty)                         ForegroundColorDelegate                                     ___ OFFSET(get<T>, {0x1B0, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVisibilityChanged                                         ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0x1F8, 4, 0, 0})
	DMember(bool)                                      bIsFocusable                                                ___ OFFSET(get<bool>, {0x1FC, 1, 1, 0})
	DMember(bool)                                      bStopAction                                                 ___ OFFSET(get<bool>, {0x1FC, 1, 1, 1})
	CMember(TArray<UUMGSequencePlayer*>)               ActiveSequencePlayers                                       ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(UUMGSequenceTickManager*)                  AnimationTickManager                                        ___ OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(TArray<UUMGSequencePlayer*>)               StoppedSequencePlayers                                      ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<FNamedSlotBinding>)                 NamedSlotBindings                                           ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	CMember(TArray<UUserWidgetExtension*>)             Extensions                                                  ___ OFFSET(get<T>, {0x238, 16, 0, 0})
	CMember(UWidgetTree*)                              WidgetTree                                                  ___ OFFSET(get<T>, {0x248, 8, 0, 0})
	DMember(bool)                                      bHasScriptImplementedTick                                   ___ OFFSET(get<bool>, {0x250, 1, 1, 0})
	DMember(bool)                                      bHasScriptImplementedPaint                                  ___ OFFSET(get<bool>, {0x250, 1, 1, 1})
	CMember(EWidgetTickFrequency)                      TickFrequency                                               ___ OFFSET(get<T>, {0x268, 1, 0, 0})
	SMember(FWidgetChild)                              DesiredFocusWidget                                          ___ OFFSET(get<T>, {0x26C, 12, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              ___ OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(TArray<FAnimationEventBinding>)            AnimationCallbacks                                          ___ OFFSET(get<T>, {0x280, 16, 0, 0})
};

/// Class /Script/UMG.UserWidgetExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserWidgetExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClassExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintGeneratedClassExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetFieldNotificationExtension
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetFieldNotificationExtension : public UUserWidgetExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/UMG.WidgetNavigation
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UWidgetNavigation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FWidgetNavigationData)                     Up                                                          ___ OFFSET(get<T>, {0x28, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Down                                                        ___ OFFSET(get<T>, {0x44, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Left                                                        ___ OFFSET(get<T>, {0x60, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Right                                                       ___ OFFSET(get<T>, {0x7C, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Next                                                        ___ OFFSET(get<T>, {0x98, 28, 0, 0})
	SMember(FWidgetNavigationData)                     Previous                                                    ___ OFFSET(get<T>, {0xB4, 28, 0, 0})
};

/// Class /Script/UMG.MovieScene2DTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/UMG.MovieScene2DTransformSection
/// Size: 0x0780 (0x0000F0 - 0x000870)
class UMovieScene2DTransformSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	SMember(FMovieScene2DTransformMask)                TransformMask                                               ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Translation                                                 ___ OFFSET(get<T>, {0x100, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Rotation                                                    ___ OFFSET(get<T>, {0x320, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Scale                                                       ___ OFFSET(get<T>, {0x430, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Shear                                                       ___ OFFSET(get<T>, {0x650, 544, 0, 0})
};

/// Class /Script/UMG.MovieScene2DTransformTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/UMG.MovieSceneMarginPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/UMG.MovieSceneMarginSection
/// Size: 0x0448 (0x0000F0 - 0x000538)
class UMovieSceneMarginSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FMovieSceneFloatChannel)                   TopCurve                                                    ___ OFFSET(get<T>, {0xF8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   LeftCurve                                                   ___ OFFSET(get<T>, {0x208, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RightCurve                                                  ___ OFFSET(get<T>, {0x318, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BottomCurve                                                 ___ OFFSET(get<T>, {0x428, 272, 0, 0})
};

/// Class /Script/UMG.MovieSceneMarginTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialSystem
/// Size: 0x0160 (0x000040 - 0x0001A0)
class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/UMG.MovieSceneWidgetMaterialTrack
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FName>)                             BrushPropertyNamePath                                       ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FName)                                     TrackName                                                   ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
};

/// Class /Script/UMG.UMGSequencePlayer
/// Size: 0x0310 (0x000028 - 0x000338)
class UUMGSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UWidgetAnimation*)                         Animation                                                   ___ OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        ___ OFFSET(get<T>, {0x230, 136, 0, 0})
};

/// Class /Script/UMG.UMGSequenceTickManager
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUMGSequenceTickManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TMap<TWeakObjectPtr, FSequenceTickManagerWidgetData>) WeakUserWidgetData                               ___ OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(UMovieSceneEntitySystemLinker*)            Linker                                                      ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/UMG.WidgetAnimation
/// Size: 0x0030 (0x000068 - 0x000098)
class UWidgetAnimation : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UMovieScene*)                              MovieScene                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<FWidgetAnimationBinding>)           AnimationBindings                                           ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bLegacyFinishOnStop                                         ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FString)                                   DisplayLabel                                                ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/UMG.WidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintWidgetAnimationDelegateBinding>) WidgetAnimationDelegateBindings                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/UMG.WidgetAnimationPlayCallbackProxy
/// Size: 0x0018 (0x000028 - 0x000040)
class UWidgetAnimationPlayCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  Finished                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/UMG.PropertyBinding
/// Size: 0x0048 (0x000028 - 0x000070)
class UPropertyBinding : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FDynamicPropertyPath)                      SourcePath                                                  ___ OFFSET(get<T>, {0x30, 56, 0, 0})
	SMember(FName)                                     DestinationProperty                                         ___ OFFSET(get<T>, {0x68, 4, 0, 0})
};

/// Class /Script/UMG.BoolBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UBoolBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/UMG.BrushBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UBrushBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/UMG.CheckedStateBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UCheckedStateBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/UMG.ColorBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UColorBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/UMG.FloatBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UFloatBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/UMG.Int32Binding
/// Size: 0x0000 (0x000070 - 0x000070)
class UInt32Binding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/UMG.MouseCursorBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UMouseCursorBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/UMG.WidgetBinaryStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBinaryStateRegistration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetHoveredStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetHoveredStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetPressedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetPressedStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetDisabledStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetDisabledStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetSelectedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetSelectedStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetEnumStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetEnumStateRegistration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetStateSettings
/// Size: 0x0570 (0x000030 - 0x0005A0)
class UWidgetStateSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
};

/// Class /Script/UMG.TextBinding
/// Size: 0x0008 (0x000070 - 0x000078)
class UTextBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/UMG.VisibilityBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UVisibilityBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/UMG.WidgetBinding
/// Size: 0x0000 (0x000070 - 0x000070)
class UWidgetBinding : public UPropertyBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/UMG.AsyncTaskDownloadImage
/// Size: 0x0020 (0x000030 - 0x000050)
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFail                                                      ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/UMG.GameViewportSubsystem
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UGameViewportSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/UMG.UserListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntry : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.UserListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.UserObjectListEntry
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntry : public UUserListEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.UserObjectListEntryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.PanelWidget
/// Size: 0x0018 (0x000178 - 0x000190)
class UPanelWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<UPanelSlot*>)                       Slots                                                       ___ OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Class /Script/UMG.ContentWidget
/// Size: 0x0000 (0x000190 - 0x000190)
class UContentWidget : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/UMG.BackgroundBlur
/// Size: 0x0110 (0x000190 - 0x0002A0)
class UBackgroundBlur : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x1A1, 1, 0, 0})
	DMember(bool)                                      bApplyAlphaToBlur                                           ___ OFFSET(get<bool>, {0x1A2, 1, 0, 0})
	DMember(float)                                     BlurStrength                                                ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bOverrideAutoRadiusCalculation                              ___ OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(int32_t)                                   BlurRadius                                                  ___ OFFSET(get<int32_t>, {0x1AC, 4, 0, 0})
	SMember(FVector4)                                  CornerRadius                                                ___ OFFSET(get<T>, {0x1B0, 32, 0, 0})
	SMember(FSlateBrush)                               LowQualityFallbackBrush                                     ___ OFFSET(get<T>, {0x1D0, 192, 0, 0})
};

/// Class /Script/UMG.PanelSlot
/// Size: 0x0010 (0x000028 - 0x000038)
class UPanelSlot : public UVisual
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UPanelWidget*)                             Parent                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UWidget*)                                  Content                                                     ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/UMG.BackgroundBlurSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBackgroundBlurSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/UMG.Border
/// Size: 0x0170 (0x000190 - 0x000300)
class UBorder : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x191, 1, 0, 0})
	DMember(bool)                                      bShowEffectWhenDisabled                                     ___ OFFSET(get<bool>, {0x192, 1, 1, 0})
	SMember(FLinearColor)                              ContentColorAndOpacity                                      ___ OFFSET(get<T>, {0x194, 16, 0, 0})
	SMember(FDelegateProperty)                         ContentColorAndOpacityDelegate                              ___ OFFSET(get<T>, {0x1A4, 12, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FSlateBrush)                               Background                                                  ___ OFFSET(get<T>, {0x1C0, 192, 0, 0})
	SMember(FDelegateProperty)                         BackgroundDelegate                                          ___ OFFSET(get<T>, {0x280, 12, 0, 0})
	SMember(FLinearColor)                              BrushColor                                                  ___ OFFSET(get<T>, {0x28C, 16, 0, 0})
	SMember(FDelegateProperty)                         BrushColorDelegate                                          ___ OFFSET(get<T>, {0x29C, 12, 0, 0})
	SMember(FVector2D)                                 DesiredSizeScale                                            ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bFlipForRightToLeftFlowDirection                            ___ OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonDownEvent                                      ___ OFFSET(get<T>, {0x2BC, 12, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonUpEvent                                        ___ OFFSET(get<T>, {0x2C8, 12, 0, 0})
	SMember(FDelegateProperty)                         OnMouseMoveEvent                                            ___ OFFSET(get<T>, {0x2D4, 12, 0, 0})
	SMember(FDelegateProperty)                         OnMouseDoubleClickEvent                                     ___ OFFSET(get<T>, {0x2E0, 12, 0, 0})
};

/// Class /Script/UMG.BorderSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UBorderSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/UMG.Button
/// Size: 0x0440 (0x000190 - 0x0005D0)
class UButton : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	SMember(FButtonStyle)                              WidgetStyle                                                 ___ OFFSET(get<T>, {0x190, 944, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             ___ OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             ___ OFFSET(get<T>, {0x550, 16, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 ___ OFFSET(get<T>, {0x560, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 ___ OFFSET(get<T>, {0x561, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           PressMethod                                                 ___ OFFSET(get<T>, {0x562, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 ___ OFFSET(get<bool>, {0x563, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClicked                                                   ___ OFFSET(get<T>, {0x568, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPressed                                                   ___ OFFSET(get<T>, {0x578, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReleased                                                  ___ OFFSET(get<T>, {0x588, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHovered                                                   ___ OFFSET(get<T>, {0x598, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnhovered                                                 ___ OFFSET(get<T>, {0x5A8, 16, 0, 0})
};

/// Class /Script/UMG.ButtonSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UButtonSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/UMG.CanvasPanel
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UCanvasPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/UMG.CanvasPanelSlot
/// Size: 0x0050 (0x000038 - 0x000088)
class UCanvasPanelSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FAnchorData)                               LayoutData                                                  ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	DMember(bool)                                      bAutoSize                                                   ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      ___ OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
};

/// Class /Script/UMG.CheckBox
/// Size: 0x0A50 (0x000190 - 0x000BE0)
class UCheckBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3040;

public:
	CMember(ECheckBoxState)                            CheckedState                                                ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	SMember(FDelegateProperty)                         CheckedStateDelegate                                        ___ OFFSET(get<T>, {0x194, 12, 0, 0})
	SMember(FCheckBoxStyle)                            WidgetStyle                                                 ___ OFFSET(get<T>, {0x1A0, 2576, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0xBB0, 1, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 ___ OFFSET(get<T>, {0xBB1, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 ___ OFFSET(get<T>, {0xBB2, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           PressMethod                                                 ___ OFFSET(get<T>, {0xBB3, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 ___ OFFSET(get<bool>, {0xBB4, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCheckStateChanged                                         ___ OFFSET(get<T>, {0xBB8, 16, 0, 0})
};

/// Class /Script/UMG.WidgetCheckedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetCheckedStateRegistration : public UWidgetEnumStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.CircularThrobber
/// Size: 0x00F8 (0x000178 - 0x000270)
class UCircularThrobber : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	DMember(int32_t)                                   NumberOfPieces                                              ___ OFFSET(get<int32_t>, {0x178, 4, 0, 0})
	DMember(float)                                     Period                                                      ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FSlateBrush)                               Image                                                       ___ OFFSET(get<T>, {0x190, 192, 0, 0})
	DMember(bool)                                      bEnableRadius                                               ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
};

/// Class /Script/UMG.ComboBox
/// Size: 0x0718 (0x000178 - 0x000890)
class UComboBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              ___ OFFSET(get<T>, {0x180, 1760, 0, 0})
	CMember(TArray<UObject*>)                          Items                                                       ___ OFFSET(get<T>, {0x860, 16, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateWidgetEvent                                       ___ OFFSET(get<T>, {0x870, 12, 0, 0})
	DMember(bool)                                      bIsFocusable                                                ___ OFFSET(get<bool>, {0x87C, 1, 0, 0})
};

/// Class /Script/UMG.ComboBoxKey
/// Size: 0x19D8 (0x000178 - 0x001B50)
class UComboBoxKey : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
	CMember(TArray<FName>)                             Options                                                     ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FName)                                     SelectedOption                                              ___ OFFSET(get<T>, {0x188, 4, 0, 0})
	SMember(FComboBoxStyle)                            WidgetStyle                                                 ___ OFFSET(get<T>, {0x190, 1536, 0, 0})
	SMember(FTableRowStyle)                            ItemStyle                                                   ___ OFFSET(get<T>, {0x790, 3152, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              ___ OFFSET(get<T>, {0x13E0, 1760, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             ___ OFFSET(get<T>, {0x1AC0, 20, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              ___ OFFSET(get<T>, {0x1AD4, 16, 0, 0})
	DMember(float)                                     MaxListHeight                                               ___ OFFSET(get<float>, {0x1AE4, 4, 0, 0})
	DMember(bool)                                      bHasDownArrow                                               ___ OFFSET(get<bool>, {0x1AE8, 1, 0, 0})
	DMember(bool)                                      bEnableGamepadNavigationMode                                ___ OFFSET(get<bool>, {0x1AE9, 1, 0, 0})
	DMember(bool)                                      bIsFocusable                                                ___ OFFSET(get<bool>, {0x1AEA, 1, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateContentWidget                                     ___ OFFSET(get<T>, {0x1AEC, 12, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateItemWidget                                        ___ OFFSET(get<T>, {0x1AF8, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          ___ OFFSET(get<T>, {0x1B08, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOpening                                                   ___ OFFSET(get<T>, {0x1B18, 16, 0, 0})
};

/// Class /Script/UMG.ComboBoxString
/// Size: 0x1A68 (0x000178 - 0x001BE0)
class UComboBoxString : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7136;

public:
	CMember(TArray<FString>)                           DefaultOptions                                              ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FString)                                   SelectedOption                                              ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FComboBoxStyle)                            WidgetStyle                                                 ___ OFFSET(get<T>, {0x1A0, 1536, 0, 0})
	SMember(FTableRowStyle)                            ItemStyle                                                   ___ OFFSET(get<T>, {0x7A0, 3152, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              ___ OFFSET(get<T>, {0x13F0, 1760, 0, 0})
	SMember(FMargin)                                   ContentPadding                                              ___ OFFSET(get<T>, {0x1AD0, 16, 0, 0})
	DMember(float)                                     MaxListHeight                                               ___ OFFSET(get<float>, {0x1AE0, 4, 0, 0})
	DMember(bool)                                      HasDownArrow                                                ___ OFFSET(get<bool>, {0x1AE4, 1, 0, 0})
	DMember(bool)                                      EnableGamepadNavigationMode                                 ___ OFFSET(get<bool>, {0x1AE5, 1, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        ___ OFFSET(get<T>, {0x1AE8, 88, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             ___ OFFSET(get<T>, {0x1B40, 20, 0, 0})
	DMember(bool)                                      bIsFocusable                                                ___ OFFSET(get<bool>, {0x1B54, 1, 0, 0})
	SMember(FDelegateProperty)                         OnGenerateWidgetEvent                                       ___ OFFSET(get<T>, {0x1B58, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionChanged                                          ___ OFFSET(get<T>, {0x1B68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOpening                                                   ___ OFFSET(get<T>, {0x1B78, 16, 0, 0})
};

/// Class /Script/UMG.DynamicEntryBoxBase
/// Size: 0x00E0 (0x000178 - 0x000258)
class UDynamicEntryBoxBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FVector2D)                                 EntrySpacing                                                ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<FVector2D>)                         SpacingPattern                                              ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(EDynamicBoxType)                           EntryBoxType                                                ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	SMember(FSlateChildSize)                           EntrySizeRule                                               ___ OFFSET(get<T>, {0x19C, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         EntryHorizontalAlignment                                    ___ OFFSET(get<T>, {0x1A4, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           EntryVerticalAlignment                                      ___ OFFSET(get<T>, {0x1A5, 1, 0, 0})
	DMember(int32_t)                                   MaxElementSize                                              ___ OFFSET(get<int32_t>, {0x1A8, 4, 0, 0})
	SMember(FRadialBoxSettings)                        RadialBoxSettings                                           ___ OFFSET(get<T>, {0x1AC, 16, 0, 0})
	SMember(FUserWidgetPool)                           EntryWidgetPool                                             ___ OFFSET(get<T>, {0x1D0, 136, 0, 0})
};

/// Class /Script/UMG.DynamicEntryBox
/// Size: 0x0008 (0x000258 - 0x000260)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(UClass*)                                   EntryWidgetClass                                            ___ OFFSET(get<T>, {0x258, 8, 0, 0})
};

/// Class /Script/UMG.EditableText
/// Size: 0x0368 (0x000178 - 0x0004E0)
class UEditableText : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FDelegateProperty)                         TextDelegate                                                ___ OFFSET(get<T>, {0x190, 12, 0, 0})
	SMember(FText)                                     HintText                                                    ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            ___ OFFSET(get<T>, {0x1B8, 12, 0, 0})
	SMember(FEditableTextStyle)                        WidgetStyle                                                 ___ OFFSET(get<T>, {0x1D0, 704, 0, 0})
	DMember(bool)                                      IsReadOnly                                                  ___ OFFSET(get<bool>, {0x490, 1, 0, 0})
	DMember(bool)                                      IsPassword                                                  ___ OFFSET(get<bool>, {0x491, 1, 0, 0})
	DMember(float)                                     MinimumDesiredWidth                                         ___ OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(bool)                                      IsCaretMovedWhenGainFocus                                   ___ OFFSET(get<bool>, {0x498, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    ___ OFFSET(get<bool>, {0x499, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          ___ OFFSET(get<bool>, {0x49A, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  ___ OFFSET(get<bool>, {0x49B, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       ___ OFFSET(get<bool>, {0x49C, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            ___ OFFSET(get<bool>, {0x49D, 1, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                ___ OFFSET(get<T>, {0x49E, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      ___ OFFSET(get<T>, {0x49F, 1, 0, 0})
	CMember(EVirtualKeyboardTrigger)                   VirtualKeyboardTrigger                                      ___ OFFSET(get<T>, {0x4A0, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                ___ OFFSET(get<T>, {0x4A1, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               ___ OFFSET(get<T>, {0x4A2, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       OverflowPolicy                                              ___ OFFSET(get<T>, {0x4A3, 1, 0, 0})
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           ___ OFFSET(get<T>, {0x4A4, 3, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               ___ OFFSET(get<T>, {0x4A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             ___ OFFSET(get<T>, {0x4B8, 16, 0, 0})
};

/// Class /Script/UMG.EditableTextBox
/// Size: 0x0E18 (0x000178 - 0x000F90)
class UEditableTextBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3984;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FDelegateProperty)                         TextDelegate                                                ___ OFFSET(get<T>, {0x190, 12, 0, 0})
	SMember(FEditableTextBoxStyle)                     WidgetStyle                                                 ___ OFFSET(get<T>, {0x1A0, 3456, 0, 0})
	SMember(FText)                                     HintText                                                    ___ OFFSET(get<T>, {0xF20, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            ___ OFFSET(get<T>, {0xF38, 12, 0, 0})
	DMember(bool)                                      IsReadOnly                                                  ___ OFFSET(get<bool>, {0xF44, 1, 0, 0})
	DMember(bool)                                      IsPassword                                                  ___ OFFSET(get<bool>, {0xF45, 1, 0, 0})
	DMember(float)                                     MinimumDesiredWidth                                         ___ OFFSET(get<float>, {0xF48, 4, 0, 0})
	DMember(bool)                                      IsCaretMovedWhenGainFocus                                   ___ OFFSET(get<bool>, {0xF4C, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    ___ OFFSET(get<bool>, {0xF4D, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          ___ OFFSET(get<bool>, {0xF4E, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  ___ OFFSET(get<bool>, {0xF4F, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       ___ OFFSET(get<bool>, {0xF50, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            ___ OFFSET(get<bool>, {0xF51, 1, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                ___ OFFSET(get<T>, {0xF52, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      ___ OFFSET(get<T>, {0xF53, 1, 0, 0})
	CMember(EVirtualKeyboardTrigger)                   VirtualKeyboardTrigger                                      ___ OFFSET(get<T>, {0xF54, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                ___ OFFSET(get<T>, {0xF55, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               ___ OFFSET(get<T>, {0xF56, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       OverflowPolicy                                              ___ OFFSET(get<T>, {0xF57, 1, 0, 0})
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           ___ OFFSET(get<T>, {0xF58, 3, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               ___ OFFSET(get<T>, {0xF60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             ___ OFFSET(get<T>, {0xF70, 16, 0, 0})
};

/// Class /Script/UMG.ExpandableArea
/// Size: 0x02D8 (0x000178 - 0x000450)
class UExpandableArea : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FExpandableAreaStyle)                      style                                                       ___ OFFSET(get<T>, {0x180, 416, 0, 0})
	SMember(FSlateBrush)                               BorderBrush                                                 ___ OFFSET(get<T>, {0x320, 192, 0, 0})
	SMember(FSlateColor)                               BorderColor                                                 ___ OFFSET(get<T>, {0x3E0, 20, 0, 0})
	DMember(bool)                                      bIsExpanded                                                 ___ OFFSET(get<bool>, {0x3F4, 1, 0, 0})
	DMember(float)                                     MaxHeight                                                   ___ OFFSET(get<float>, {0x3F8, 4, 0, 0})
	SMember(FMargin)                                   HeaderPadding                                               ___ OFFSET(get<T>, {0x3FC, 16, 0, 0})
	SMember(FMargin)                                   AreaPadding                                                 ___ OFFSET(get<T>, {0x40C, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExpansionChanged                                          ___ OFFSET(get<T>, {0x420, 16, 0, 0})
	CMember(UWidget*)                                  HeaderContent                                               ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UWidget*)                                  BodyContent                                                 ___ OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Script/UMG.GridPanel
/// Size: 0x0030 (0x000190 - 0x0001C0)
class UGridPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<float>)                             ColumnFill                                                  ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(TArray<float>)                             RowFill                                                     ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Class /Script/UMG.GridSlot
/// Size: 0x0040 (0x000038 - 0x000078)
class UGridSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x49, 1, 0, 0})
	DMember(int32_t)                                   Row                                                         ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   RowSpan                                                     ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan                                                  ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   Layer                                                       ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FVector2D)                                 Nudge                                                       ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/UMG.HorizontalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UHorizontalBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/UMG.HorizontalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UHorizontalBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSlateChildSize)                           Size                                                        ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x59, 1, 0, 0})
};

/// Class /Script/UMG.Image
/// Size: 0x0138 (0x000178 - 0x0002B0)
class UImage : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FSlateBrush)                               Brush                                                       ___ OFFSET(get<T>, {0x180, 192, 0, 0})
	SMember(FDelegateProperty)                         BrushDelegate                                               ___ OFFSET(get<T>, {0x240, 12, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             ___ OFFSET(get<T>, {0x24C, 16, 0, 0})
	SMember(FDelegateProperty)                         ColorAndOpacityDelegate                                     ___ OFFSET(get<T>, {0x25C, 12, 0, 0})
	DMember(bool)                                      bFlipForRightToLeftFlowDirection                            ___ OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FDelegateProperty)                         OnMouseButtonDownEvent                                      ___ OFFSET(get<T>, {0x26C, 12, 0, 0})
};

/// Class /Script/UMG.InputKeySelector
/// Size: 0x0778 (0x000178 - 0x0008F0)
class UInputKeySelector : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	SMember(FButtonStyle)                              WidgetStyle                                                 ___ OFFSET(get<T>, {0x180, 944, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   ___ OFFSET(get<T>, {0x530, 784, 0, 0})
	SMember(FInputChord)                               SelectedKey                                                 ___ OFFSET(get<T>, {0x840, 32, 0, 0})
	SMember(FMargin)                                   Margin                                                      ___ OFFSET(get<T>, {0x860, 16, 0, 0})
	SMember(FText)                                     KeySelectionText                                            ___ OFFSET(get<T>, {0x870, 24, 0, 0})
	SMember(FText)                                     NoKeySpecifiedText                                          ___ OFFSET(get<T>, {0x888, 24, 0, 0})
	DMember(bool)                                      bAllowModifierKeys                                          ___ OFFSET(get<bool>, {0x8A0, 1, 0, 0})
	DMember(bool)                                      bAllowGamepadKeys                                           ___ OFFSET(get<bool>, {0x8A1, 1, 0, 0})
	CMember(TArray<FKey>)                              EscapeKeys                                                  ___ OFFSET(get<T>, {0x8A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKeySelected                                               ___ OFFSET(get<T>, {0x8B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnIsSelectingKeyChanged                                     ___ OFFSET(get<T>, {0x8C8, 16, 0, 0})
};

/// Class /Script/UMG.InvalidationBox
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UInvalidationBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(bool)                                      bCanCache                                                   ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Class /Script/UMG.MenuAnchor
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UMenuAnchor : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(UClass*)                                   MenuClass                                                   ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	SMember(FDelegateProperty)                         OnGetMenuContentEvent                                       ___ OFFSET(get<T>, {0x198, 12, 0, 0})
	SMember(FDelegateProperty)                         OnGetUserMenuContentEvent                                   ___ OFFSET(get<T>, {0x1A4, 12, 0, 0})
	CMember(TEnumAsByte<EMenuPlacement>)               Placement                                                   ___ OFFSET(get<T>, {0x1B0, 1, 0, 0})
	DMember(bool)                                      bFitInWindow                                                ___ OFFSET(get<bool>, {0x1B1, 1, 0, 0})
	DMember(bool)                                      ShouldDeferPaintingAfterWindowContent                       ___ OFFSET(get<bool>, {0x1B2, 1, 0, 0})
	DMember(bool)                                      UseApplicationMenuStack                                     ___ OFFSET(get<bool>, {0x1B3, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMenuOpenChanged                                           ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
};

/// Class /Script/UMG.TextLayoutWidget
/// Size: 0x0020 (0x000178 - 0x000198)
class UTextLayoutWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FShapedTextOptions)                        ShapedTextOptions                                           ___ OFFSET(get<T>, {0x178, 3, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               ___ OFFSET(get<T>, {0x17B, 1, 0, 0})
	CMember(ETextWrappingPolicy)                       WrappingPolicy                                              ___ OFFSET(get<T>, {0x17C, 1, 0, 0})
	DMember(bool)                                      AutoWrapText                                                ___ OFFSET(get<bool>, {0x17D, 1, 1, 0})
	DMember(float)                                     WrapTextAt                                                  ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FMargin)                                   Margin                                                      ___ OFFSET(get<T>, {0x184, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        ___ OFFSET(get<float>, {0x194, 4, 0, 0})
};

/// Class /Script/UMG.MultiLineEditableText
/// Size: 0x0398 (0x000198 - 0x000530)
class UMultiLineEditableText : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FText)                                     HintText                                                    ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            ___ OFFSET(get<T>, {0x1C8, 12, 0, 0})
	SMember(FTextBlockStyle)                           WidgetStyle                                                 ___ OFFSET(get<T>, {0x1E0, 784, 0, 0})
	DMember(bool)                                      bIsReadOnly                                                 ___ OFFSET(get<bool>, {0x4F0, 1, 0, 0})
	DMember(bool)                                      SelectAllTextWhenFocused                                    ___ OFFSET(get<bool>, {0x4F1, 1, 0, 0})
	DMember(bool)                                      ClearTextSelectionOnFocusLoss                               ___ OFFSET(get<bool>, {0x4F2, 1, 0, 0})
	DMember(bool)                                      RevertTextOnEscape                                          ___ OFFSET(get<bool>, {0x4F3, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  ___ OFFSET(get<bool>, {0x4F4, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            ___ OFFSET(get<bool>, {0x4F5, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      ___ OFFSET(get<T>, {0x4F6, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                ___ OFFSET(get<T>, {0x4F7, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               ___ OFFSET(get<T>, {0x4F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             ___ OFFSET(get<T>, {0x508, 16, 0, 0})
};

/// Class /Script/UMG.MultiLineEditableTextBox
/// Size: 0x0E08 (0x000198 - 0x000FA0)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4000;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FText)                                     HintText                                                    ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FDelegateProperty)                         HintTextDelegate                                            ___ OFFSET(get<T>, {0x1C8, 12, 0, 0})
	SMember(FEditableTextBoxStyle)                     WidgetStyle                                                 ___ OFFSET(get<T>, {0x1E0, 3456, 0, 0})
	DMember(bool)                                      bIsReadOnly                                                 ___ OFFSET(get<bool>, {0xF60, 1, 0, 0})
	DMember(bool)                                      AllowContextMenu                                            ___ OFFSET(get<bool>, {0xF61, 1, 0, 0})
	SMember(FVirtualKeyboardOptions)                   VirtualKeyboardOptions                                      ___ OFFSET(get<T>, {0xF62, 1, 0, 0})
	CMember(EVirtualKeyboardDismissAction)             VirtualKeyboardDismissAction                                ___ OFFSET(get<T>, {0xF63, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextChanged                                               ___ OFFSET(get<T>, {0xF68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTextCommitted                                             ___ OFFSET(get<T>, {0xF78, 16, 0, 0})
};

/// Class /Script/UMG.NamedSlot
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UNamedSlot : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

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
/// Size: 0x0010 (0x000178 - 0x000188)
class UNativeWidgetHost : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Script/UMG.Overlay
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UOverlay : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/UMG.OverlaySlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UOverlaySlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x51, 1, 0, 0})
};

/// Class /Script/UMG.ProgressBar
/// Size: 0x02B8 (0x000178 - 0x000430)
class UProgressBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FProgressBarStyle)                         WidgetStyle                                                 ___ OFFSET(get<T>, {0x180, 608, 0, 0})
	DMember(float)                                     Percent                                                     ___ OFFSET(get<float>, {0x3E0, 4, 0, 0})
	CMember(TEnumAsByte<EProgressBarFillType>)         BarFillType                                                 ___ OFFSET(get<T>, {0x3E4, 1, 0, 0})
	CMember(TEnumAsByte<EProgressBarFillStyle>)        BarFillStyle                                                ___ OFFSET(get<T>, {0x3E5, 1, 0, 0})
	DMember(bool)                                      bIsMarquee                                                  ___ OFFSET(get<bool>, {0x3E6, 1, 0, 0})
	SMember(FVector2D)                                 BorderPadding                                               ___ OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FDelegateProperty)                         PercentDelegate                                             ___ OFFSET(get<T>, {0x3F8, 12, 0, 0})
	SMember(FLinearColor)                              FillColorAndOpacity                                         ___ OFFSET(get<T>, {0x404, 16, 0, 0})
	SMember(FDelegateProperty)                         FillColorAndOpacityDelegate                                 ___ OFFSET(get<T>, {0x414, 12, 0, 0})
};

/// Class /Script/UMG.RetainerBox
/// Size: 0x0030 (0x000190 - 0x0001C0)
class URetainerBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	DMember(bool)                                      bRetainRender                                               ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      RenderOnInvalidation                                        ___ OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(bool)                                      RenderOnPhase                                               ___ OFFSET(get<bool>, {0x192, 1, 0, 0})
	DMember(int32_t)                                   Phase                                                       ___ OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	DMember(int32_t)                                   PhaseCount                                                  ___ OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	CMember(UMaterialInterface*)                       EffectMaterial                                              ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(FName)                                     TextureParameter                                            ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
};

/// Class /Script/UMG.RichTextBlock
/// Size: 0x0698 (0x000198 - 0x000830)
class URichTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	CMember(UDataTable*)                               TextStyleSet                                                ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TArray<UClass*>)                           DecoratorClasses                                            ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
	DMember(bool)                                      bOverrideDefaultStyle                                       ___ OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextStyleOverride                                    ___ OFFSET(get<T>, {0x1D0, 784, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             ___ OFFSET(get<float>, {0x4E0, 4, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         ___ OFFSET(get<T>, {0x4E4, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       TextOverflowPolicy                                          ___ OFFSET(get<T>, {0x4E5, 1, 0, 0})
	SMember(FTextBlockStyle)                           DefaultTextStyle                                            ___ OFFSET(get<T>, {0x4F0, 784, 0, 0})
	CMember(TArray<URichTextBlockDecorator*>)          InstanceDecorators                                          ___ OFFSET(get<T>, {0x800, 16, 0, 0})
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
	CMember(UDataTable*)                               ImageSet                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/UMG.SafeZone
/// Size: 0x0018 (0x000190 - 0x0001A8)
class USafeZone : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(bool)                                      PadLeft                                                     ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      PadRight                                                    ___ OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(bool)                                      PadTop                                                      ___ OFFSET(get<bool>, {0x192, 1, 0, 0})
	DMember(bool)                                      PadBottom                                                   ___ OFFSET(get<bool>, {0x193, 1, 0, 0})
};

/// Class /Script/UMG.SafeZoneSlot
/// Size: 0x0038 (0x000038 - 0x000070)
class USafeZoneSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bIsTitleSafe                                                ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FMargin)                                   SafeAreaScale                                               ___ OFFSET(get<T>, {0x3C, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HAlign                                                      ___ OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VAlign                                                      ___ OFFSET(get<T>, {0x4D, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/UMG.ScaleBox
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UScaleBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TEnumAsByte<EStretch>)                     Stretch                                                     ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(TEnumAsByte<EStretchDirection>)            StretchDirection                                            ___ OFFSET(get<T>, {0x191, 1, 0, 0})
	DMember(float)                                     UserSpecifiedScale                                          ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      IgnoreInheritedScale                                        ___ OFFSET(get<bool>, {0x198, 1, 0, 0})
};

/// Class /Script/UMG.ScaleBoxSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UScaleBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x39, 1, 0, 0})
};

/// Class /Script/UMG.ScrollBar
/// Size: 0x0728 (0x000178 - 0x0008A0)
class UScrollBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
	SMember(FScrollBarStyle)                           WidgetStyle                                                 ___ OFFSET(get<T>, {0x180, 1760, 0, 0})
	DMember(bool)                                      bAlwaysShowScrollbar                                        ___ OFFSET(get<bool>, {0x860, 1, 0, 0})
	DMember(bool)                                      bAlwaysShowScrollbarTrack                                   ___ OFFSET(get<bool>, {0x861, 1, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x862, 1, 0, 0})
	SMember(FVector2D)                                 Thickness                                                   ___ OFFSET(get<T>, {0x868, 16, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x878, 16, 0, 0})
};

/// Class /Script/UMG.ScrollBox
/// Size: 0x0A80 (0x000190 - 0x000C10)
class UScrollBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3088;

public:
	SMember(FScrollBoxStyle)                           WidgetStyle                                                 ___ OFFSET(get<T>, {0x190, 816, 0, 0})
	SMember(FScrollBarStyle)                           WidgetBarStyle                                              ___ OFFSET(get<T>, {0x4C0, 1760, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0xBA0, 1, 0, 0})
	CMember(ESlateVisibility)                          ScrollBarVisibility                                         ___ OFFSET(get<T>, {0xBA1, 1, 0, 0})
	CMember(EConsumeMouseWheel)                        ConsumeMouseWheel                                           ___ OFFSET(get<T>, {0xBA2, 1, 0, 0})
	SMember(FVector2D)                                 ScrollbarThickness                                          ___ OFFSET(get<T>, {0xBA8, 16, 0, 0})
	SMember(FMargin)                                   ScrollbarPadding                                            ___ OFFSET(get<T>, {0xBB8, 16, 0, 0})
	DMember(bool)                                      AlwaysShowScrollbar                                         ___ OFFSET(get<bool>, {0xBC8, 1, 0, 0})
	DMember(bool)                                      AlwaysShowScrollbarTrack                                    ___ OFFSET(get<bool>, {0xBC9, 1, 0, 0})
	DMember(bool)                                      AllowOverscroll                                             ___ OFFSET(get<bool>, {0xBCA, 1, 0, 0})
	DMember(bool)                                      BackPadScrolling                                            ___ OFFSET(get<bool>, {0xBCB, 1, 0, 0})
	DMember(bool)                                      FrontPadScrolling                                           ___ OFFSET(get<bool>, {0xBCC, 1, 0, 0})
	DMember(bool)                                      bAnimateWheelScrolling                                      ___ OFFSET(get<bool>, {0xBCD, 1, 0, 0})
	CMember(EDescendantScrollDestination)              NavigationDestination                                       ___ OFFSET(get<T>, {0xBCE, 1, 0, 0})
	DMember(float)                                     NavigationScrollPadding                                     ___ OFFSET(get<float>, {0xBD0, 4, 0, 0})
	CMember(EScrollWhenFocusChanges)                   ScrollWhenFocusChanges                                      ___ OFFSET(get<T>, {0xBD4, 1, 0, 0})
	DMember(bool)                                      bAllowRightClickDragScrolling                               ___ OFFSET(get<bool>, {0xBD5, 1, 0, 0})
	DMember(float)                                     WheelScrollMultiplier                                       ___ OFFSET(get<float>, {0xBD8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUserScrolled                                              ___ OFFSET(get<T>, {0xBE0, 16, 0, 0})
};

/// Class /Script/UMG.ScrollBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UScrollBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSlateChildSize)                           Size                                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x51, 1, 0, 0})
};

/// Class /Script/UMG.SizeBox
/// Size: 0x0038 (0x000190 - 0x0001C8)
class USizeBox : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	DMember(float)                                     WidthOverride                                               ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     HeightOverride                                              ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             ___ OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     MinDesiredHeight                                            ___ OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     MaxDesiredWidth                                             ___ OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     MaxDesiredHeight                                            ___ OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     MinAspectRatio                                              ___ OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(float)                                     MaxAspectRatio                                              ___ OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(bool)                                      bOverride_WidthOverride                                     ___ OFFSET(get<bool>, {0x1C0, 1, 1, 0})
	DMember(bool)                                      bOverride_HeightOverride                                    ___ OFFSET(get<bool>, {0x1C0, 1, 1, 1})
	DMember(bool)                                      bOverride_MinDesiredWidth                                   ___ OFFSET(get<bool>, {0x1C0, 1, 1, 2})
	DMember(bool)                                      bOverride_MinDesiredHeight                                  ___ OFFSET(get<bool>, {0x1C0, 1, 1, 3})
	DMember(bool)                                      bOverride_MaxDesiredWidth                                   ___ OFFSET(get<bool>, {0x1C0, 1, 1, 4})
	DMember(bool)                                      bOverride_MaxDesiredHeight                                  ___ OFFSET(get<bool>, {0x1C0, 1, 1, 5})
	DMember(bool)                                      bOverride_MinAspectRatio                                    ___ OFFSET(get<bool>, {0x1C0, 1, 1, 6})
	DMember(bool)                                      bOverride_MaxAspectRatio                                    ___ OFFSET(get<bool>, {0x1C0, 1, 1, 7})
};

/// Class /Script/UMG.SizeBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class USizeBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x59, 1, 0, 0})
};

/// Class /Script/UMG.Slider
/// Size: 0x0548 (0x000178 - 0x0006C0)
class USlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               ___ OFFSET(get<T>, {0x17C, 12, 0, 0})
	DMember(float)                                     MinValue                                                    ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FSliderStyle)                              WidgetStyle                                                 ___ OFFSET(get<T>, {0x190, 1184, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x630, 1, 0, 0})
	SMember(FLinearColor)                              SliderBarColor                                              ___ OFFSET(get<T>, {0x634, 16, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           ___ OFFSET(get<T>, {0x644, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                ___ OFFSET(get<bool>, {0x654, 1, 0, 0})
	DMember(bool)                                      Locked                                                      ___ OFFSET(get<bool>, {0x655, 1, 0, 0})
	DMember(bool)                                      MouseUsesStep                                               ___ OFFSET(get<bool>, {0x656, 1, 0, 0})
	DMember(bool)                                      RequiresControllerLock                                      ___ OFFSET(get<bool>, {0x657, 1, 0, 0})
	DMember(float)                                     StepSize                                                    ___ OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 ___ OFFSET(get<bool>, {0x65C, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         ___ OFFSET(get<T>, {0x660, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           ___ OFFSET(get<T>, {0x670, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    ___ OFFSET(get<T>, {0x680, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      ___ OFFSET(get<T>, {0x690, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              ___ OFFSET(get<T>, {0x6A0, 16, 0, 0})
};

/// Class /Script/UMG.Spacer
/// Size: 0x0020 (0x000178 - 0x000198)
class USpacer : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FVector2D)                                 Size                                                        ___ OFFSET(get<T>, {0x178, 16, 0, 0})
};

/// Class /Script/UMG.SpinBox
/// Size: 0x06A8 (0x000178 - 0x000820)
class USpinBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2080;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               ___ OFFSET(get<T>, {0x17C, 12, 0, 0})
	SMember(FSpinBoxStyle)                             WidgetStyle                                                 ___ OFFSET(get<T>, {0x190, 1424, 0, 0})
	DMember(int32_t)                                   MinFractionalDigits                                         ___ OFFSET(get<int32_t>, {0x720, 4, 0, 0})
	DMember(int32_t)                                   MaxFractionalDigits                                         ___ OFFSET(get<int32_t>, {0x724, 4, 0, 0})
	DMember(bool)                                      bAlwaysUsesDeltaSnap                                        ___ OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      bEnableSlider                                               ___ OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(float)                                     Delta                                                       ___ OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     SliderExponent                                              ___ OFFSET(get<float>, {0x730, 4, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        ___ OFFSET(get<T>, {0x738, 88, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               ___ OFFSET(get<T>, {0x790, 1, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             ___ OFFSET(get<float>, {0x794, 4, 0, 0})
	CMember(TEnumAsByte<EVirtualKeyboardType>)         KeyboardType                                                ___ OFFSET(get<T>, {0x798, 1, 0, 0})
	DMember(bool)                                      ClearKeyboardFocusOnCommit                                  ___ OFFSET(get<bool>, {0x799, 1, 0, 0})
	DMember(bool)                                      SelectAllTextOnCommit                                       ___ OFFSET(get<bool>, {0x79A, 1, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             ___ OFFSET(get<T>, {0x79C, 20, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              ___ OFFSET(get<T>, {0x7B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueCommitted                                            ___ OFFSET(get<T>, {0x7C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeginSliderMovement                                       ___ OFFSET(get<T>, {0x7D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEndSliderMovement                                         ___ OFFSET(get<T>, {0x7E0, 16, 0, 0})
	DMember(bool)                                      bOverride_MinValue                                          ___ OFFSET(get<bool>, {0x7F0, 1, 1, 0})
	DMember(bool)                                      bOverride_MaxValue                                          ___ OFFSET(get<bool>, {0x7F0, 1, 1, 1})
	DMember(bool)                                      bOverride_MinSliderValue                                    ___ OFFSET(get<bool>, {0x7F0, 1, 1, 2})
	DMember(bool)                                      bOverride_MaxSliderValue                                    ___ OFFSET(get<bool>, {0x7F0, 1, 1, 3})
	DMember(float)                                     MinValue                                                    ___ OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     MinSliderValue                                              ___ OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     MaxSliderValue                                              ___ OFFSET(get<float>, {0x800, 4, 0, 0})
};

/// Class /Script/UMG.StackBox
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UStackBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x190, 1, 0, 0})
};

/// Class /Script/UMG.StackBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UStackBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FSlateChildSize)                           Size                                                        ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x51, 1, 0, 0})
};

/// Class /Script/UMG.TextBlock
/// Size: 0x01B8 (0x000198 - 0x000350)
class UTextBlock : public UTextLayoutWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FDelegateProperty)                         TextDelegate                                                ___ OFFSET(get<T>, {0x1B0, 12, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             ___ OFFSET(get<T>, {0x1BC, 20, 0, 0})
	SMember(FDelegateProperty)                         ColorAndOpacityDelegate                                     ___ OFFSET(get<T>, {0x1D0, 12, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        ___ OFFSET(get<T>, {0x1E0, 88, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 ___ OFFSET(get<T>, {0x240, 192, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	SMember(FDelegateProperty)                         ShadowColorAndOpacityDelegate                               ___ OFFSET(get<T>, {0x320, 12, 0, 0})
	DMember(float)                                     MinDesiredWidth                                             ___ OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(bool)                                      bWrapWithInvalidationPanel                                  ___ OFFSET(get<bool>, {0x330, 1, 0, 0})
	CMember(ETextTransformPolicy)                      TextTransformPolicy                                         ___ OFFSET(get<T>, {0x331, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       TextOverflowPolicy                                          ___ OFFSET(get<T>, {0x332, 1, 0, 0})
	DMember(bool)                                      bSimpleTextMode                                             ___ OFFSET(get<bool>, {0x333, 1, 0, 0})
};

/// Class /Script/UMG.Throbber
/// Size: 0x00D8 (0x000178 - 0x000250)
class UThrobber : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	DMember(int32_t)                                   NumberOfPieces                                              ___ OFFSET(get<int32_t>, {0x178, 4, 0, 0})
	DMember(bool)                                      bAnimateHorizontally                                        ___ OFFSET(get<bool>, {0x17C, 1, 0, 0})
	DMember(bool)                                      bAnimateVertically                                          ___ OFFSET(get<bool>, {0x17D, 1, 0, 0})
	DMember(bool)                                      bAnimateOpacity                                             ___ OFFSET(get<bool>, {0x17E, 1, 0, 0})
	SMember(FSlateBrush)                               Image                                                       ___ OFFSET(get<T>, {0x180, 192, 0, 0})
};

/// Class /Script/UMG.TileView
/// Size: 0x0030 (0x000BD0 - 0x000C00)
class UTileView : public UListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
	DMember(float)                                     EntryHeight                                                 ___ OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     EntryWidth                                                  ___ OFFSET(get<float>, {0xBD4, 4, 0, 0})
	CMember(EListItemAlignment)                        TileAlignment                                               ___ OFFSET(get<T>, {0xBD8, 1, 0, 0})
	DMember(bool)                                      bWrapHorizontalNavigation                                   ___ OFFSET(get<bool>, {0xBD9, 1, 0, 0})
	DMember(bool)                                      bEntrySizeIncludesEntrySpacing                              ___ OFFSET(get<bool>, {0xBF0, 1, 0, 0})
};

/// Class /Script/UMG.TreeView
/// Size: 0x0060 (0x000BD0 - 0x000C30)
class UTreeView : public UListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
	SMember(FDelegateProperty)                         BP_OnGetItemChildren                                        ___ OFFSET(get<T>, {0xBE0, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnItemExpansionChanged                                   ___ OFFSET(get<T>, {0xBF0, 16, 0, 0})
};

/// Class /Script/UMG.UniformGridPanel
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UUniformGridPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FMargin)                                   SlotPadding                                                 ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	DMember(float)                                     MinDesiredSlotWidth                                         ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     MinDesiredSlotHeight                                        ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
};

/// Class /Script/UMG.UniformGridSlot
/// Size: 0x0018 (0x000038 - 0x000050)
class UUniformGridSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   Row                                                         ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/UMG.VerticalBox
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UVerticalBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/UMG.VerticalBoxSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UVerticalBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSlateChildSize)                           Size                                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x51, 1, 0, 0})
};

/// Class /Script/UMG.Viewport
/// Size: 0x0050 (0x000190 - 0x0001E0)
class UViewport : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FLinearColor)                              BackgroundColor                                             ___ OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Class /Script/UMG.WidgetComponent
/// Size: 0x0140 (0x0005A0 - 0x0006E0)
class UWidgetComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(EWidgetSpace)                              Space                                                       ___ OFFSET(get<T>, {0x5A0, 1, 0, 0})
	CMember(EWidgetTimingPolicy)                       TimingPolicy                                                ___ OFFSET(get<T>, {0x5A1, 1, 0, 0})
	CMember(UClass*)                                   WidgetClass                                                 ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(FIntPoint)                                 DrawSize                                                    ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	DMember(bool)                                      bManuallyRedraw                                             ___ OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(bool)                                      bRedrawRequested                                            ___ OFFSET(get<bool>, {0x5B9, 1, 0, 0})
	DMember(float)                                     RedrawTime                                                  ___ OFFSET(get<float>, {0x5BC, 4, 0, 0})
	SMember(FIntPoint)                                 CurrentDrawSize                                             ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	DMember(bool)                                      bDrawAtDesiredSize                                          ___ OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	SMember(FVector2D)                                 Pivot                                                       ___ OFFSET(get<T>, {0x5D8, 16, 0, 0})
	DMember(bool)                                      bReceiveHardwareInput                                       ___ OFFSET(get<bool>, {0x5E8, 1, 0, 0})
	DMember(bool)                                      bWindowFocusable                                            ___ OFFSET(get<bool>, {0x5E9, 1, 0, 0})
	CMember(EWindowVisibility)                         WindowVisibility                                            ___ OFFSET(get<T>, {0x5EA, 1, 0, 0})
	DMember(bool)                                      bApplyGammaCorrection                                       ___ OFFSET(get<bool>, {0x5EB, 1, 0, 0})
	CMember(ULocalPlayer*)                             OwnerPlayer                                                 ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	SMember(FLinearColor)                              BackgroundColor                                             ___ OFFSET(get<T>, {0x5F8, 16, 0, 0})
	SMember(FLinearColor)                              TintColorAndOpacity                                         ___ OFFSET(get<T>, {0x608, 16, 0, 0})
	DMember(float)                                     OpacityFromTexture                                          ___ OFFSET(get<float>, {0x618, 4, 0, 0})
	CMember(EWidgetBlendMode)                          BlendMode                                                   ___ OFFSET(get<T>, {0x61C, 1, 0, 0})
	DMember(bool)                                      bIsTwoSided                                                 ___ OFFSET(get<bool>, {0x61D, 1, 0, 0})
	DMember(bool)                                      TickWhenOffscreen                                           ___ OFFSET(get<bool>, {0x61E, 1, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UMaterialInterface*)                       TranslucentMaterial                                         ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UMaterialInterface*)                       TranslucentMaterial_OneSided                                ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UMaterialInterface*)                       OpaqueMaterial                                              ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UMaterialInterface*)                       OpaqueMaterial_OneSided                                     ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaskedMaterial                                              ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaskedMaterial_OneSided                                     ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   RenderTarget                                                ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MaterialInstance                                            ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(bool)                                      bAddedToScreen                                              ___ OFFSET(get<bool>, {0x668, 1, 0, 0})
	DMember(bool)                                      bEditTimeUsable                                             ___ OFFSET(get<bool>, {0x669, 1, 0, 0})
	SMember(FName)                                     SharedLayerName                                             ___ OFFSET(get<T>, {0x66C, 4, 0, 0})
	DMember(int32_t)                                   LayerZOrder                                                 ___ OFFSET(get<int32_t>, {0x670, 4, 0, 0})
	CMember(EWidgetGeometryMode)                       GeometryMode                                                ___ OFFSET(get<T>, {0x674, 1, 0, 0})
	DMember(float)                                     CylinderArcAngle                                            ___ OFFSET(get<float>, {0x678, 4, 0, 0})
	CMember(ETickMode)                                 TickMode                                                    ___ OFFSET(get<T>, {0x67C, 1, 0, 0})
	CMember(UUserWidget*)                              Widget                                                      ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
};

/// Class /Script/UMG.WidgetInteractionComponent
/// Size: 0x02C0 (0x0002A0 - 0x000560)
class UWidgetInteractionComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FMulticastInlineDelegate)                  OnHoveredWidgetChanged                                      ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	DMember(int32_t)                                   VirtualUserIndex                                            ___ OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(int32_t)                                   PointerIndex                                                ___ OFFSET(get<int32_t>, {0x2C4, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceChannel                                                ___ OFFSET(get<T>, {0x2C8, 1, 0, 0})
	DMember(float)                                     InteractionDistance                                         ___ OFFSET(get<float>, {0x2CC, 4, 0, 0})
	CMember(EWidgetInteractionSource)                  InteractionSource                                           ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      bEnableHitTesting                                           ___ OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	DMember(bool)                                      bShowDebug                                                  ___ OFFSET(get<bool>, {0x2D2, 1, 0, 0})
	DMember(float)                                     DebugSphereLineThickness                                    ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     DebugLineThickness                                          ___ OFFSET(get<float>, {0x2D8, 4, 0, 0})
	SMember(FLinearColor)                              DebugColor                                                  ___ OFFSET(get<T>, {0x2DC, 16, 0, 0})
	SMember(FHitResult)                                CustomHitResult                                             ___ OFFSET(get<T>, {0x368, 224, 0, 0})
	SMember(FVector2D)                                 LocalHitLocation                                            ___ OFFSET(get<T>, {0x448, 16, 0, 0})
	SMember(FVector2D)                                 LastLocalHitLocation                                        ___ OFFSET(get<T>, {0x458, 16, 0, 0})
	CMember(UWidgetComponent*)                         HoveredWidgetComponent                                      ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FHitResult)                                LastHitResult                                               ___ OFFSET(get<T>, {0x470, 224, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetInteractable                                ___ OFFSET(get<bool>, {0x550, 1, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetFocusable                                   ___ OFFSET(get<bool>, {0x551, 1, 0, 0})
	DMember(bool)                                      bIsHoveredWidgetHitTestVisible                              ___ OFFSET(get<bool>, {0x552, 1, 0, 0})
};

/// Class /Script/UMG.WidgetSwitcher
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UWidgetSwitcher : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   ActiveWidgetIndex                                           ___ OFFSET(get<int32_t>, {0x190, 4, 0, 0})
};

/// Class /Script/UMG.WidgetSwitcherSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWidgetSwitcherSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x51, 1, 0, 0})
};

/// Class /Script/UMG.WindowTitleBarArea
/// Size: 0x0020 (0x000190 - 0x0001B0)
class UWindowTitleBarArea : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(bool)                                      bWindowButtonsEnabled                                       ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bDoubleClickTogglesFullscreen                               ___ OFFSET(get<bool>, {0x191, 1, 0, 0})
};

/// Class /Script/UMG.WindowTitleBarAreaSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class UWindowTitleBarAreaSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/UMG.WrapBox
/// Size: 0x0028 (0x000190 - 0x0001B8)
class UWrapBox : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FVector2D)                                 InnerSlotPadding                                            ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	DMember(float)                                     WrapSize                                                    ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bExplicitWrapSize                                           ___ OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x1A5, 1, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x1A6, 1, 0, 0})
};

/// Class /Script/UMG.WrapBoxSlot
/// Size: 0x0020 (0x000038 - 0x000058)
class UWrapBoxSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     FillSpanWhenLessThan                                        ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bFillEmptySpace                                             ___ OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(bool)                                      bForceNewLine                                               ___ OFFSET(get<bool>, {0x4F, 1, 0, 0})
};

/// Class /Script/UMG.DragDropOperation
/// Size: 0x0068 (0x000028 - 0x000090)
class UDragDropOperation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   tag                                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UObject*)                                  Payload                                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UWidget*)                                  DefaultDragVisual                                           ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(EDragPivot)                                Pivot                                                       ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FVector2D)                                 Offset                                                      ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDrop                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDragCancelled                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDragged                                                   ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/UMG.SlateBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.SlateVectorArtData
/// Size: 0x0048 (0x000028 - 0x000070)
class USlateVectorArtData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FSlateMeshVertex>)                  VertexData                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<uint32_t>)                          IndexData                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FVector2D)                                 ExtentMin                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FVector2D)                                 ExtentMax                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/UMG.WidgetBlueprintGeneratedClass
/// Size: 0x0070 (0x000368 - 0x0003D8)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	CMember(UWidgetTree*)                              WidgetTree                                                  ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TArray<UWidgetBlueprintGeneratedClassExtension*>) Extensions                                           ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	DMember(bool)                                      bClassRequiresNativeTick                                    ___ OFFSET(get<bool>, {0x380, 1, 1, 0})
	CMember(TArray<FDelegateRuntimeBinding>)           Bindings                                                    ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(TArray<UWidgetAnimation*>)                 Animations                                                  ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(TArray<FName>)                             NamedSlots                                                  ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TArray<FName>)                             AvailableNamedSlots                                         ___ OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FName>)                             InstanceNamedSlots                                          ___ OFFSET(get<T>, {0x3C8, 16, 0, 0})
};

/// Class /Script/UMG.WidgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetLayoutLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UMG.WidgetTree
/// Size: 0x0060 (0x000028 - 0x000088)
class UWidgetTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UWidget*)                                  RootWidget                                                  ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FName, UWidget*>)                     NamedSlotBindings                                           ___ OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/UMG.EventReply
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FEventReply : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/UMG.WidgetTransform
/// Size: 0x0038 (0x000000 - 0x000038)
class FWidgetTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector2D)                                 Translation                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 Scale                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 Shear                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Angle                                                       ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/UMG.ShapedTextOptions
/// Size: 0x0003 (0x000000 - 0x000003)
class FShapedTextOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bOverride_TextShapingMethod                                 ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bOverride_TextFlowDirection                                 ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	CMember(ETextShapingMethod)                        TextShapingMethod                                           ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ETextFlowDirection)                        TextFlowDirection                                           ___ OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/UMG.PaintContext
/// Size: 0x0030 (0x000000 - 0x000030)
class FPaintContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/UMG.AnimationEventBinding
/// Size: 0x0020 (0x000000 - 0x000020)
class FAnimationEventBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UWidgetAnimation*)                         Animation                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FDelegateProperty)                         Delegate                                                    ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	CMember(EWidgetAnimationEvent)                     AnimationEvent                                              ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FName)                                     UserTag                                                     ___ OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/UMG.WidgetChild
/// Size: 0x000C (0x000000 - 0x00000C)
class FWidgetChild : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     WidgetName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  WidgetPtr                                                   ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/UMG.NamedSlotBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FNamedSlotBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UWidget*)                                  Content                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/UMG.AnchorData
/// Size: 0x0040 (0x000000 - 0x000040)
class FAnchorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMargin)                                   Offsets                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FAnchors)                                  Anchors                                                     ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector2D)                                 Alignment                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/UMG.WidgetEventField
/// Size: 0x0001 (0x000000 - 0x000001)
class FWidgetEventField : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/UMG.UserWidgetPool
/// Size: 0x0088 (0x000000 - 0x000088)
class FUserWidgetPool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<UUserWidget*>)                      ActiveWidgets                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UUserWidget*>)                      InactiveWidgets                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/UMG.RadialBoxSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRadialBoxSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     StartingAngle                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bDistributeItemsEvenly                                      ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     AngleBetweenItems                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SectorCentralAngle                                          ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/UMG.SlateChildSize
/// Size: 0x0008 (0x000000 - 0x000008)
class FSlateChildSize : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ESlateSizeRule>)               SizeRule                                                    ___ OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/UMG.WidgetNavigationData
/// Size: 0x001C (0x000000 - 0x00001C)
class FWidgetNavigationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EUINavigationRule)                         Rule                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     WidgetToFocus                                               ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  Widget                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDelegateProperty)                         CustomDelegate                                              ___ OFFSET(get<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/UMG.MovieScene2DTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieScene2DTransformMask : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Mask                                                        ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/UMG.SequenceTickManagerWidgetData
/// Size: 0x0002 (0x000000 - 0x000002)
class FSequenceTickManagerWidgetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
};

/// Struct /Script/UMG.WidgetAnimationBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FWidgetAnimationBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     WidgetName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SlotWidgetName                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     AnimationGuid                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsRootWidget                                               ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/UMG.BlueprintWidgetAnimationDelegateBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FBlueprintWidgetAnimationDelegateBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EWidgetAnimationEvent)                     Action                                                      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     AnimationToBind                                             ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     FunctionNameToBind                                          ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     UserTag                                                     ___ OFFSET(get<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/UMG.DynamicPropertyPath
/// Size: 0x0000 (0x000038 - 0x000038)
class FDynamicPropertyPath : public FCachedPropertyPath
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/UMG.WidgetStateBitfield
/// Size: 0x0590 (0x000000 - 0x000590)
class FWidgetStateBitfield : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
};

/// Struct /Script/UMG.GameViewportWidgetSlot
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameViewportWidgetSlot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FAnchors)                                  Anchors                                                     ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FMargin)                                   Offsets                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector2D)                                 Alignment                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/UMG.RichTextStyleRow
/// Size: 0x0318 (0x000008 - 0x000320)
class FRichTextStyleRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FTextBlockStyle)                           TextStyle                                                   ___ OFFSET(get<T>, {0x10, 784, 0, 0})
};

/// Struct /Script/UMG.RichImageRow
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRichImageRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSlateBrush)                               Brush                                                       ___ OFFSET(get<T>, {0x10, 192, 0, 0})
};

/// Struct /Script/UMG.WidgetComponentInstanceData
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class FWidgetComponentInstanceData : public FSceneComponentInstanceData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/UMG.SlateMeshVertex
/// Size: 0x003C (0x000000 - 0x00003C)
class FSlateMeshVertex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FVector2f)                                 Position                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FColor)                                    Color                                                       ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FVector2f)                                 UV0                                                         ___ OFFSET(get<T>, {0xC, 8, 0, 0})
	SMember(FVector2f)                                 UV1                                                         ___ OFFSET(get<T>, {0x14, 8, 0, 0})
	SMember(FVector2f)                                 UV2                                                         ___ OFFSET(get<T>, {0x1C, 8, 0, 0})
	SMember(FVector2f)                                 UV3                                                         ___ OFFSET(get<T>, {0x24, 8, 0, 0})
	SMember(FVector2f)                                 UV4                                                         ___ OFFSET(get<T>, {0x2C, 8, 0, 0})
	SMember(FVector2f)                                 UV5                                                         ___ OFFSET(get<T>, {0x34, 8, 0, 0})
};

/// Struct /Script/UMG.DelegateRuntimeBinding
/// Size: 0x0058 (0x000000 - 0x000058)
class FDelegateRuntimeBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   ObjectName                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     PropertyName                                                ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     FunctionName                                                ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FDynamicPropertyPath)                      SourcePath                                                  ___ OFFSET(get<T>, {0x18, 56, 0, 0})
	CMember(EBindingKind)                              Kind                                                        ___ OFFSET(get<T>, {0x50, 1, 0, 0})
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

/// Enum /Script/UMG.ESlateAccessibleBehavior
/// Size: 0x06
enum ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible0                                         = 0,
	ESlateAccessibleBehavior__Auto1                                                  = 1,
	ESlateAccessibleBehavior__Summary2                                               = 2,
	ESlateAccessibleBehavior__Custom3                                                = 3,
	ESlateAccessibleBehavior__ToolTip4                                               = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX5                          = 5
};

/// Enum /Script/UMG.ESlateSizeRule
/// Size: 0x03
enum ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic0                                                       = 0,
	ESlateSizeRule__Fill1                                                            = 1,
	ESlateSizeRule__ESlateSizeRule_MAX2                                              = 2
};

/// Enum /Script/UMG.EDynamicBoxType
/// Size: 0x07
enum EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal0                                                     = 0,
	EDynamicBoxType__Vertical1                                                       = 1,
	EDynamicBoxType__Wrap2                                                           = 2,
	EDynamicBoxType__VerticalWrap3                                                   = 3,
	EDynamicBoxType__Radial4                                                         = 4,
	EDynamicBoxType__Overlay5                                                        = 5,
	EDynamicBoxType__EDynamicBoxType_MAX6                                            = 6
};

/// Enum /Script/UMG.EWidgetDesignFlags
/// Size: 0x06
enum EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None0                                                        = 0,
	EWidgetDesignFlags__Designing1                                                   = 1,
	EWidgetDesignFlags__ShowOutline2                                                 = 2,
	EWidgetDesignFlags__ExecutePreConstruct3                                         = 4,
	EWidgetDesignFlags__Previewing4                                                  = 8,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX5                                      = 9
};

/// Enum /Script/UMG.EWidgetSpace
/// Size: 0x03
enum EWidgetSpace : uint8_t
{
	EWidgetSpace__World0                                                             = 0,
	EWidgetSpace__Screen1                                                            = 1,
	EWidgetSpace__EWidgetSpace_MAX2                                                  = 2
};

/// Enum /Script/UMG.EWidgetTimingPolicy
/// Size: 0x03
enum EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime0                                                   = 0,
	EWidgetTimingPolicy__GameTime1                                                   = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX2                                    = 2
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

/// Enum /Script/UMG.EWidgetGeometryMode
/// Size: 0x03
enum EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane0                                                      = 0,
	EWidgetGeometryMode__Cylinder1                                                   = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX2                                    = 2
};

/// Enum /Script/UMG.EWindowVisibility
/// Size: 0x03
enum EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible0                                                      = 0,
	EWindowVisibility__SelfHitTestInvisible1                                         = 1,
	EWindowVisibility__EWindowVisibility_MAX2                                        = 2
};

/// Enum /Script/UMG.ETickMode
/// Size: 0x04
enum ETickMode : uint8_t
{
	ETickMode__Disabled0                                                             = 0,
	ETickMode__Enabled1                                                              = 1,
	ETickMode__Automatic2                                                            = 2,
	ETickMode__ETickMode_MAX3                                                        = 3
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

/// Enum /Script/UMG.EWidgetTickFrequency
/// Size: 0x03
enum EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never0                                                     = 0,
	EWidgetTickFrequency__Auto1                                                      = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX2                                  = 2
};

/// Enum /Script/UMG.EWidgetAnimationEvent
/// Size: 0x03
enum EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started0                                                  = 0,
	EWidgetAnimationEvent__Finished1                                                 = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX2                                = 2
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

/// Enum /Script/UMG.EBindingKind
/// Size: 0x03
enum EBindingKind : uint8_t
{
	EBindingKind__Function0                                                          = 0,
	EBindingKind__Property1                                                          = 1,
	EBindingKind__EBindingKind_MAX2                                                  = 2
};

