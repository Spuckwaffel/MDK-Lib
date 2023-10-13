
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/SlateCore.FontBulkData
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UFontBulkData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/SlateCore.FontFaceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontFaceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.FontProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFontProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.SlateTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SlateCore.SlateWidgetStyleAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USlateWidgetStyleContainerBase*)           CustomStyle                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerBase
/// Size: 0x0008 (0x000028 - 0x000030)
class USlateWidgetStyleContainerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SlateCore.SlateWidgetStyleContainerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USlateWidgetStyleContainerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SlateCore.Geometry
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SlateCore.SlateBrush
/// Size: 0x0088 (0x000000 - 0x000088)
class FSlateBrush : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector2D)                                 ImageSize                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FSlateColor)                               TintColor                                                   OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	CMember(UObject*)                                  ResourceObject                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FName)                                     ResourceName                                                OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FBox2D)                                    UVRegion                                                    OFFSET(getStruct<T>, {0x58, 20, 0, 0})
	CMember(TEnumAsByte<ESlateBrushDrawType>)          DrawAs                                                      OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushTileType>)          Tiling                                                      OFFSET(get<T>, {0x6D, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushMirrorType>)        Mirroring                                                   OFFSET(get<T>, {0x6E, 1, 0, 0})
	CMember(TEnumAsByte<ESlateBrushImageType>)         ImageType                                                   OFFSET(get<T>, {0x6F, 1, 0, 0})
	DMember(bool)                                      bIsDynamicallyLoaded                                        OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bHasUObject                                                 OFFSET(get<bool>, {0x80, 1, 1, 1})
};

/// Struct /Script/SlateCore.SlateColor
/// Size: 0x0028 (0x000000 - 0x000028)
class FSlateColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              SpecifiedColor                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<ESlateColorStylingMode>)       ColorUseRule                                                OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/SlateCore.Margin
/// Size: 0x0010 (0x000000 - 0x000010)
class FMargin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Left                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Top                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Right                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Bottom                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/SlateCore.InputEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FInputEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/SlateCore.PointerEvent
/// Size: 0x0058 (0x000018 - 0x000070)
class FPointerEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/SlateCore.CharacterEvent
/// Size: 0x0008 (0x000018 - 0x000020)
class FCharacterEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SlateCore.KeyEvent
/// Size: 0x0020 (0x000018 - 0x000038)
class FKeyEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/SlateCore.NavigationEvent
/// Size: 0x0008 (0x000018 - 0x000020)
class FNavigationEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/SlateCore.AnalogInputEvent
/// Size: 0x0008 (0x000038 - 0x000040)
class FAnalogInputEvent : public FKeyEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/SlateCore.SlateFontInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FSlateFontInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UObject*)                                  FontObject                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  FontMaterial                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFontOutlineSettings)                      OutlineSettings                                             OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FName)                                     TypefaceFontName                                            OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   Size                                                        OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/SlateCore.FontOutlineSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FFontOutlineSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   OutlineSize                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bSeparateFillAlpha                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(UObject*)                                  OutlineMaterial                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              OutlineColor                                                OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SlateCore.SlateWidgetStyle
/// Size: 0x0008 (0x000000 - 0x000008)
class FSlateWidgetStyle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.TableRowStyle
/// Size: 0x06B0 (0x000008 - 0x0006B8)
class FTableRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1720;

public:
	SMember(FSlateBrush)                               SelectorFocusedBrush                                        OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveHoveredBrush                                          OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveBrush                                                 OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveHoveredBrush                                        OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveBrush                                               OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundHoveredBrush                               OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	SMember(FSlateBrush)                               EvenRowBackgroundBrush                                      OFFSET(getStruct<T>, {0x338, 136, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundHoveredBrush                                OFFSET(getStruct<T>, {0x3C0, 136, 0, 0})
	SMember(FSlateBrush)                               OddRowBackgroundBrush                                       OFFSET(getStruct<T>, {0x448, 136, 0, 0})
	SMember(FSlateColor)                               TextColor                                                   OFFSET(getStruct<T>, {0x4D0, 40, 0, 0})
	SMember(FSlateColor)                               SelectedTextColor                                           OFFSET(getStruct<T>, {0x4F8, 40, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Above                                         OFFSET(getStruct<T>, {0x520, 136, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Onto                                          OFFSET(getStruct<T>, {0x5A8, 136, 0, 0})
	SMember(FSlateBrush)                               DropIndicator_Below                                         OFFSET(getStruct<T>, {0x630, 136, 0, 0})
};

/// Struct /Script/SlateCore.ComboBoxStyle
/// Size: 0x03D0 (0x000008 - 0x0003D8)
class FComboBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FComboButtonStyle)                         ComboButtonStyle                                            OFFSET(getStruct<T>, {0x8, 928, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x3A8, 24, 0, 0})
	SMember(FSlateSound)                               SelectionChangeSlateSound                                   OFFSET(getStruct<T>, {0x3C0, 24, 0, 0})
};

/// Struct /Script/SlateCore.SlateSound
/// Size: 0x0018 (0x000000 - 0x000018)
class FSlateSound : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UObject*)                                  ResourceObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/SlateCore.ComboButtonStyle
/// Size: 0x0398 (0x000008 - 0x0003A0)
class FComboButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FButtonStyle)                              ButtonStyle                                                 OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0x280, 136, 0, 0})
	SMember(FSlateBrush)                               MenuBorderBrush                                             OFFSET(getStruct<T>, {0x308, 136, 0, 0})
	SMember(FMargin)                                   MenuBorderPadding                                           OFFSET(getStruct<T>, {0x390, 16, 0, 0})
};

/// Struct /Script/SlateCore.ButtonStyle
/// Size: 0x0270 (0x000008 - 0x000278)
class FButtonStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	SMember(FSlateBrush)                               Normal                                                      OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               Hovered                                                     OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               Pressed                                                     OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               Disabled                                                    OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FMargin)                                   NormalPadding                                               OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMargin)                                   PressedPadding                                              OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x248, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x260, 24, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextStyle
/// Size: 0x0210 (0x000008 - 0x000218)
class FEditableTextStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 80, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageSelected                                     OFFSET(getStruct<T>, {0x80, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageComposing                                    OFFSET(getStruct<T>, {0x108, 136, 0, 0})
	SMember(FSlateBrush)                               CaretImage                                                  OFFSET(getStruct<T>, {0x190, 136, 0, 0})
};

/// Struct /Script/SlateCore.EditableTextBoxStyle
/// Size: 0x07E8 (0x000008 - 0x0007F0)
class FEditableTextBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FSlateBrush)                               BackgroundImageNormal                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageHovered                                      OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageFocused                                      OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundImageReadOnly                                     OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x238, 80, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FSlateColor)                               ReadOnlyForegroundColor                                     OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	SMember(FMargin)                                   HScrollBarPadding                                           OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FMargin)                                   VScrollBarPadding                                           OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FScrollBarStyle)                           ScrollBarStyle                                              OFFSET(getStruct<T>, {0x320, 1232, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBarStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
class FScrollBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FSlateBrush)                               HorizontalBackgroundImage                                   OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               VerticalBackgroundImage                                     OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               VerticalTopSlotImage                                        OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               HorizontalTopSlotImage                                      OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               VerticalBottomSlotImage                                     OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateBrush)                               HorizontalBottomSlotImage                                   OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x338, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredThumbImage                                           OFFSET(getStruct<T>, {0x3C0, 136, 0, 0})
	SMember(FSlateBrush)                               DraggedThumbImage                                           OFFSET(getStruct<T>, {0x448, 136, 0, 0})
};

/// Struct /Script/SlateCore.TextBlockStyle
/// Size: 0x01D8 (0x000008 - 0x0001E0)
class FTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x8, 80, 0, 0})
	SMember(FSlateColor)                               ColorAndOpacity                                             OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColorAndOpacity                                       OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FSlateColor)                               SelectedBackgroundColor                                     OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FLinearColor)                              HighlightColor                                              OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FSlateBrush)                               HighlightShape                                              OFFSET(getStruct<T>, {0xD0, 136, 0, 0})
	SMember(FSlateBrush)                               UnderlineBrush                                              OFFSET(getStruct<T>, {0x158, 136, 0, 0})
};

/// Struct /Script/SlateCore.SpinBoxStyle
/// Size: 0x02E0 (0x000008 - 0x0002E8)
class FSpinBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredBackgroundBrush                                      OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveFillBrush                                             OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveFillBrush                                           OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               ArrowsImage                                                 OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FMargin)                                   TextPadding                                                 OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
};

/// Struct /Script/SlateCore.FocusEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFocusEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.MotionEvent
/// Size: 0x0030 (0x000018 - 0x000048)
class FMotionEvent : public FInputEvent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/SlateCore.ScrollBoxStyle
/// Size: 0x0220 (0x000008 - 0x000228)
class FScrollBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               LeftShadowBrush                                             OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               RightShadowBrush                                            OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
};

/// Struct /Script/SlateCore.CheckBoxStyle
/// Size: 0x0578 (0x000008 - 0x000580)
class FCheckBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TEnumAsByte<ESlateCheckBoxType>)           CheckBoxType                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FSlateBrush)                               UncheckedImage                                              OFFSET(getStruct<T>, {0x10, 136, 0, 0})
	SMember(FSlateBrush)                               UncheckedHoveredImage                                       OFFSET(getStruct<T>, {0x98, 136, 0, 0})
	SMember(FSlateBrush)                               UncheckedPressedImage                                       OFFSET(getStruct<T>, {0x120, 136, 0, 0})
	SMember(FSlateBrush)                               CheckedImage                                                OFFSET(getStruct<T>, {0x1A8, 136, 0, 0})
	SMember(FSlateBrush)                               CheckedHoveredImage                                         OFFSET(getStruct<T>, {0x230, 136, 0, 0})
	SMember(FSlateBrush)                               CheckedPressedImage                                         OFFSET(getStruct<T>, {0x2B8, 136, 0, 0})
	SMember(FSlateBrush)                               UndeterminedImage                                           OFFSET(getStruct<T>, {0x340, 136, 0, 0})
	SMember(FSlateBrush)                               UndeterminedHoveredImage                                    OFFSET(getStruct<T>, {0x3C8, 136, 0, 0})
	SMember(FSlateBrush)                               UndeterminedPressedImage                                    OFFSET(getStruct<T>, {0x450, 136, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x4D8, 16, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0x4E8, 40, 0, 0})
	SMember(FSlateColor)                               BorderBackgroundColor                                       OFFSET(getStruct<T>, {0x510, 40, 0, 0})
	SMember(FSlateSound)                               CheckedSlateSound                                           OFFSET(getStruct<T>, {0x538, 24, 0, 0})
	SMember(FSlateSound)                               UncheckedSlateSound                                         OFFSET(getStruct<T>, {0x550, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x568, 24, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFont
/// Size: 0x0038 (0x000000 - 0x000038)
class FCompositeFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FTypeface)                                 DefaultTypeface                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCompositeFallbackFont)                    FallbackTypeface                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TArray<FCompositeSubFont>)                 SubTypefaces                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SlateCore.CompositeFallbackFont
/// Size: 0x0018 (0x000000 - 0x000018)
class FCompositeFallbackFont : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FTypeface)                                 Typeface                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ScalingFactor                                               OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/SlateCore.Typeface
/// Size: 0x0010 (0x000000 - 0x000010)
class FTypeface : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTypefaceEntry>)                    Fonts                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SlateCore.TypefaceEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FTypefaceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FFontData)                                 Font                                                        OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/SlateCore.FontData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFontData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   FontFilename                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EFontHinting)                              Hinting                                                     OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EFontLoadingPolicy)                        LoadingPolicy                                               OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(UObject*)                                  FontFaceAsset                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/SlateCore.CompositeSubFont
/// Size: 0x0020 (0x000018 - 0x000038)
class FCompositeSubFont : public FCompositeFallbackFont
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FInt32Range>)                       CharacterRanges                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Cultures                                                    OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/SlateCore.CaptureLostEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureLostEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/SlateCore.WindowStyle
/// Size: 0x0FC8 (0x000008 - 0x000FD0)
class FWindowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4048;

public:
	SMember(FButtonStyle)                              MinimizeButtonStyle                                         OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FButtonStyle)                              MaximizeButtonStyle                                         OFFSET(getStruct<T>, {0x280, 632, 0, 0})
	SMember(FButtonStyle)                              RestoreButtonStyle                                          OFFSET(getStruct<T>, {0x4F8, 632, 0, 0})
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0x770, 632, 0, 0})
	SMember(FTextBlockStyle)                           TitleTextStyle                                              OFFSET(getStruct<T>, {0x9E8, 480, 0, 0})
	SMember(FSlateBrush)                               ActiveTitleBrush                                            OFFSET(getStruct<T>, {0xBC8, 136, 0, 0})
	SMember(FSlateBrush)                               InactiveTitleBrush                                          OFFSET(getStruct<T>, {0xC50, 136, 0, 0})
	SMember(FSlateBrush)                               FlashTitleBrush                                             OFFSET(getStruct<T>, {0xCD8, 136, 0, 0})
	SMember(FSlateColor)                               BackgroundColor                                             OFFSET(getStruct<T>, {0xD60, 40, 0, 0})
	SMember(FSlateBrush)                               OutlineBrush                                                OFFSET(getStruct<T>, {0xD88, 136, 0, 0})
	SMember(FSlateColor)                               OutlineColor                                                OFFSET(getStruct<T>, {0xE10, 40, 0, 0})
	SMember(FSlateBrush)                               BorderBrush                                                 OFFSET(getStruct<T>, {0xE38, 136, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0xEC0, 136, 0, 0})
	SMember(FSlateBrush)                               ChildBackgroundBrush                                        OFFSET(getStruct<T>, {0xF48, 136, 0, 0})
};

/// Struct /Script/SlateCore.ScrollBorderStyle
/// Size: 0x0110 (0x000008 - 0x000118)
class FScrollBorderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FSlateBrush)                               TopShadowBrush                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               BottomShadowBrush                                           OFFSET(getStruct<T>, {0x90, 136, 0, 0})
};

/// Struct /Script/SlateCore.DockTabStyle
/// Size: 0x06F8 (0x000008 - 0x000700)
class FDockTabStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	SMember(FButtonStyle)                              CloseButtonStyle                                            OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x280, 136, 0, 0})
	SMember(FSlateBrush)                               ActiveBrush                                                 OFFSET(getStruct<T>, {0x308, 136, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayTabBrush                                        OFFSET(getStruct<T>, {0x390, 136, 0, 0})
	SMember(FSlateBrush)                               ColorOverlayIconBrush                                       OFFSET(getStruct<T>, {0x418, 136, 0, 0})
	SMember(FSlateBrush)                               ForegroundBrush                                             OFFSET(getStruct<T>, {0x4A0, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x528, 136, 0, 0})
	SMember(FSlateBrush)                               ContentAreaBrush                                            OFFSET(getStruct<T>, {0x5B0, 136, 0, 0})
	SMember(FSlateBrush)                               TabWellBrush                                                OFFSET(getStruct<T>, {0x638, 136, 0, 0})
	SMember(FMargin)                                   TabPadding                                                  OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	DMember(float)                                     OverlapWidth                                                OFFSET(get<float>, {0x6D0, 4, 0, 0})
	SMember(FSlateColor)                               FlashColor                                                  OFFSET(getStruct<T>, {0x6D8, 40, 0, 0})
};

/// Struct /Script/SlateCore.HeaderRowStyle
/// Size: 0x0B68 (0x000008 - 0x000B70)
class FHeaderRowStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	SMember(FTableColumnHeaderStyle)                   ColumnStyle                                                 OFFSET(getStruct<T>, {0x8, 1232, 0, 0})
	SMember(FTableColumnHeaderStyle)                   LastColumnStyle                                             OFFSET(getStruct<T>, {0x4D8, 1232, 0, 0})
	SMember(FSplitterStyle)                            ColumnSplitterStyle                                         OFFSET(getStruct<T>, {0x9A8, 280, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0xAC0, 136, 0, 0})
	SMember(FSlateColor)                               ForegroundColor                                             OFFSET(getStruct<T>, {0xB48, 40, 0, 0})
};

/// Struct /Script/SlateCore.SplitterStyle
/// Size: 0x0110 (0x000008 - 0x000118)
class FSplitterStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FSlateBrush)                               HandleNormalBrush                                           OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               HandleHighlightBrush                                        OFFSET(getStruct<T>, {0x90, 136, 0, 0})
};

/// Struct /Script/SlateCore.TableColumnHeaderStyle
/// Size: 0x04C8 (0x000008 - 0x0004D0)
class FTableColumnHeaderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FSlateBrush)                               SortPrimaryAscendingImage                                   OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               SortPrimaryDescendingImage                                  OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryAscendingImage                                 OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               SortSecondaryDescendingImage                                OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	SMember(FSlateBrush)                               NormalBrush                                                 OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FSlateBrush)                               HoveredBrush                                                OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownImage                                           OFFSET(getStruct<T>, {0x338, 136, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownNormalBorderBrush                               OFFSET(getStruct<T>, {0x3C0, 136, 0, 0})
	SMember(FSlateBrush)                               MenuDropdownHoveredBorderBrush                              OFFSET(getStruct<T>, {0x448, 136, 0, 0})
};

/// Struct /Script/SlateCore.InlineTextImageStyle
/// Size: 0x0090 (0x000008 - 0x000098)
class FInlineTextImageStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSlateBrush)                               Image                                                       OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	DMember(int16_t)                                   Baseline                                                    OFFSET(get<int16_t>, {0x90, 2, 0, 0})
};

/// Struct /Script/SlateCore.VolumeControlStyle
/// Size: 0x04D8 (0x000008 - 0x0004E0)
class FVolumeControlStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	SMember(FSliderStyle)                              SliderStyle                                                 OFFSET(getStruct<T>, {0x8, 560, 0, 0})
	SMember(FSlateBrush)                               HighVolumeImage                                             OFFSET(getStruct<T>, {0x238, 136, 0, 0})
	SMember(FSlateBrush)                               MidVolumeImage                                              OFFSET(getStruct<T>, {0x2C0, 136, 0, 0})
	SMember(FSlateBrush)                               LowVolumeImage                                              OFFSET(getStruct<T>, {0x348, 136, 0, 0})
	SMember(FSlateBrush)                               NoVolumeImage                                               OFFSET(getStruct<T>, {0x3D0, 136, 0, 0})
	SMember(FSlateBrush)                               MutedImage                                                  OFFSET(getStruct<T>, {0x458, 136, 0, 0})
};

/// Struct /Script/SlateCore.SliderStyle
/// Size: 0x0228 (0x000008 - 0x000230)
class FSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FSlateBrush)                               NormalBarImage                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               DisabledBarImage                                            OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x118, 136, 0, 0})
	SMember(FSlateBrush)                               DisabledThumbImage                                          OFFSET(getStruct<T>, {0x1A0, 136, 0, 0})
	DMember(float)                                     BarThickness                                                OFFSET(get<float>, {0x228, 4, 0, 0})
};

/// Struct /Script/SlateCore.SearchBoxStyle
/// Size: 0x0A78 (0x000008 - 0x000A80)
class FSearchBoxStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2688;

public:
	SMember(FEditableTextBoxStyle)                     TextBoxStyle                                                OFFSET(getStruct<T>, {0x8, 2032, 0, 0})
	SMember(FSlateFontInfo)                            ActiveFontInfo                                              OFFSET(getStruct<T>, {0x7F8, 80, 0, 0})
	SMember(FSlateBrush)                               UpArrowImage                                                OFFSET(getStruct<T>, {0x848, 136, 0, 0})
	SMember(FSlateBrush)                               DownArrowImage                                              OFFSET(getStruct<T>, {0x8D0, 136, 0, 0})
	SMember(FSlateBrush)                               GlassImage                                                  OFFSET(getStruct<T>, {0x958, 136, 0, 0})
	SMember(FSlateBrush)                               ClearImage                                                  OFFSET(getStruct<T>, {0x9E0, 136, 0, 0})
	SMember(FMargin)                                   ImagePadding                                                OFFSET(getStruct<T>, {0xA68, 16, 0, 0})
	DMember(bool)                                      bLeftAlignButtons                                           OFFSET(get<bool>, {0xA78, 1, 0, 0})
};

/// Struct /Script/SlateCore.ExpandableAreaStyle
/// Size: 0x0118 (0x000008 - 0x000120)
class FExpandableAreaStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FSlateBrush)                               CollapsedImage                                              OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               ExpandedImage                                               OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	DMember(float)                                     RolloutAnimationSeconds                                     OFFSET(get<float>, {0x118, 4, 0, 0})
};

/// Struct /Script/SlateCore.ProgressBarStyle
/// Size: 0x0198 (0x000008 - 0x0001A0)
class FProgressBarStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x8, 136, 0, 0})
	SMember(FSlateBrush)                               FillImage                                                   OFFSET(getStruct<T>, {0x90, 136, 0, 0})
	SMember(FSlateBrush)                               MarqueeImage                                                OFFSET(getStruct<T>, {0x118, 136, 0, 0})
};

/// Struct /Script/SlateCore.InlineEditableTextBlockStyle
/// Size: 0x09D0 (0x000008 - 0x0009D8)
class FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2520;

public:
	SMember(FEditableTextBoxStyle)                     EditableTextBoxStyle                                        OFFSET(getStruct<T>, {0x8, 2032, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x7F8, 480, 0, 0})
};

/// Struct /Script/SlateCore.HyperlinkStyle
/// Size: 0x0468 (0x000008 - 0x000470)
class FHyperlinkStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FButtonStyle)                              UnderlineStyle                                              OFFSET(getStruct<T>, {0x8, 632, 0, 0})
	SMember(FTextBlockStyle)                           TextStyle                                                   OFFSET(getStruct<T>, {0x280, 480, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x460, 16, 0, 0})
};

/// Enum /Script/SlateCore.ECheckBoxState
/// Size: 0x04
enum ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked0                                                       = 0,
	ECheckBoxState__Checked1                                                         = 1,
	ECheckBoxState__Undetermined2                                                    = 2,
	ECheckBoxState__ECheckBoxState_MAX3                                              = 3
};

/// Enum /Script/SlateCore.EWidgetClipping
/// Size: 0x06
enum EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit0                                                        = 0,
	EWidgetClipping__ClipToBounds1                                                   = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting2                                = 2,
	EWidgetClipping__ClipToBoundsAlways3                                             = 3,
	EWidgetClipping__OnDemand4                                                       = 4,
	EWidgetClipping__EWidgetClipping_MAX5                                            = 5
};

/// Enum /Script/SlateCore.ESlateBrushImageType
/// Size: 0x04
enum ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage0                                                   = 0,
	ESlateBrushImageType__FullColor1                                                 = 1,
	ESlateBrushImageType__Linear2                                                    = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX3                                  = 3
};

/// Enum /Script/SlateCore.ESlateBrushMirrorType
/// Size: 0x05
enum ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror0                                                 = 0,
	ESlateBrushMirrorType__Horizontal1                                               = 1,
	ESlateBrushMirrorType__Vertical2                                                 = 2,
	ESlateBrushMirrorType__Both3                                                     = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX4                                = 4
};

/// Enum /Script/SlateCore.ESlateBrushTileType
/// Size: 0x05
enum ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile0                                                     = 0,
	ESlateBrushTileType__Horizontal1                                                 = 1,
	ESlateBrushTileType__Vertical2                                                   = 2,
	ESlateBrushTileType__Both3                                                       = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX4                                    = 4
};

/// Enum /Script/SlateCore.ESlateBrushDrawType
/// Size: 0x05
enum ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType0                                                 = 0,
	ESlateBrushDrawType__Box1                                                        = 1,
	ESlateBrushDrawType__Border2                                                     = 2,
	ESlateBrushDrawType__Image3                                                      = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX4                                    = 4
};

/// Enum /Script/SlateCore.ESlateColorStylingMode
/// Size: 0x05
enum ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified0                                      = 0,
	ESlateColorStylingMode__UseColor_Specified_Link1                                 = 1,
	ESlateColorStylingMode__UseColor_Foreground2                                     = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued3                             = 3,
	ESlateColorStylingMode__UseColor_MAX4                                            = 4
};

/// Enum /Script/SlateCore.EUINavigationRule
/// Size: 0x08
enum EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape0                                                       = 0,
	EUINavigationRule__Explicit1                                                     = 1,
	EUINavigationRule__Wrap2                                                         = 2,
	EUINavigationRule__Stop3                                                         = 3,
	EUINavigationRule__Custom4                                                       = 4,
	EUINavigationRule__CustomBoundary5                                               = 5,
	EUINavigationRule__Invalid6                                                      = 6,
	EUINavigationRule__EUINavigationRule_MAX7                                        = 7
};

/// Enum /Script/SlateCore.EUINavigation
/// Size: 0x09
enum EUINavigation : uint8_t
{
	EUINavigation__Left0                                                             = 0,
	EUINavigation__Right1                                                            = 1,
	EUINavigation__Up2                                                               = 2,
	EUINavigation__Down3                                                             = 3,
	EUINavigation__Next4                                                             = 4,
	EUINavigation__Previous5                                                         = 5,
	EUINavigation__Num6                                                              = 6,
	EUINavigation__Invalid7                                                          = 7,
	EUINavigation__EUINavigation_MAX8                                                = 8
};

/// Enum /Script/SlateCore.ESelectInfo
/// Size: 0x05
enum ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress0                                                         = 0,
	ESelectInfo__OnNavigation1                                                       = 1,
	ESelectInfo__OnMouseClick2                                                       = 2,
	ESelectInfo__Direct3                                                             = 3,
	ESelectInfo__ESelectInfo_MAX4                                                    = 4
};

/// Enum /Script/SlateCore.ETextCommit
/// Size: 0x05
enum ETextCommit : uint8_t
{
	ETextCommit__Default0                                                            = 0,
	ETextCommit__OnEnter1                                                            = 1,
	ETextCommit__OnUserMovedFocus2                                                   = 2,
	ETextCommit__OnCleared3                                                          = 3,
	ETextCommit__ETextCommit_MAX4                                                    = 4
};

/// Enum /Script/SlateCore.ETextShapingMethod
/// Size: 0x04
enum ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto0                                                        = 0,
	ETextShapingMethod__KerningOnly1                                                 = 1,
	ETextShapingMethod__FullShaping2                                                 = 2,
	ETextShapingMethod__ETextShapingMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EHorizontalAlignment
/// Size: 0x05
enum EHorizontalAlignment : uint8_t
{
	HAlign_Fill0                                                                     = 0,
	HAlign_Left1                                                                     = 1,
	HAlign_Center2                                                                   = 2,
	HAlign_Right3                                                                    = 3,
	HAlign_MAX4                                                                      = 4
};

/// Enum /Script/SlateCore.EVerticalAlignment
/// Size: 0x05
enum EVerticalAlignment : uint8_t
{
	VAlign_Fill0                                                                     = 0,
	VAlign_Top1                                                                      = 1,
	VAlign_Center2                                                                   = 2,
	VAlign_Bottom3                                                                   = 3,
	VAlign_MAX4                                                                      = 4
};

/// Enum /Script/SlateCore.EFontLayoutMethod
/// Size: 0x03
enum EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics0                                                      = 0,
	EFontLayoutMethod__BoundingBox1                                                  = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX2                                        = 2
};

/// Enum /Script/SlateCore.EFontLoadingPolicy
/// Size: 0x04
enum EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad0                                                    = 0,
	EFontLoadingPolicy__Stream1                                                      = 1,
	EFontLoadingPolicy__Inline2                                                      = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EFontHinting
/// Size: 0x06
enum EFontHinting : uint8_t
{
	EFontHinting__Default0                                                           = 0,
	EFontHinting__Auto1                                                              = 1,
	EFontHinting__AutoLight2                                                         = 2,
	EFontHinting__Monochrome3                                                        = 3,
	EFontHinting__None4                                                              = 4,
	EFontHinting__EFontHinting_MAX5                                                  = 5
};

/// Enum /Script/SlateCore.EFocusCause
/// Size: 0x07
enum EFocusCause : uint8_t
{
	EFocusCause__Mouse0                                                              = 0,
	EFocusCause__Navigation1                                                         = 1,
	EFocusCause__SetDirectly2                                                        = 2,
	EFocusCause__Cleared3                                                            = 3,
	EFocusCause__OtherWidgetLostFocus4                                               = 4,
	EFocusCause__WindowActivate5                                                     = 5,
	EFocusCause__EFocusCause_MAX6                                                    = 6
};

/// Enum /Script/SlateCore.EColorVisionDeficiency
/// Size: 0x05
enum EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision0                                            = 0,
	EColorVisionDeficiency__Deuteranope1                                             = 1,
	EColorVisionDeficiency__Protanope2                                               = 2,
	EColorVisionDeficiency__Tritanope3                                               = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX4                              = 4
};

/// Enum /Script/SlateCore.EScrollDirection
/// Size: 0x03
enum EScrollDirection : uint8_t
{
	Scroll_Down0                                                                     = 0,
	Scroll_Up1                                                                       = 1,
	Scroll_MAX2                                                                      = 2
};

/// Enum /Script/SlateCore.EOrientation
/// Size: 0x03
enum EOrientation : uint8_t
{
	Orient_Horizontal0                                                               = 0,
	Orient_Vertical1                                                                 = 1,
	Orient_MAX2                                                                      = 2
};

/// Enum /Script/SlateCore.EMenuPlacement
/// Size: 0x14
enum EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor0                                                       = 0,
	MenuPlacement_CenteredBelowAnchor1                                               = 1,
	MenuPlacement_BelowRightAnchor2                                                  = 2,
	MenuPlacement_ComboBox3                                                          = 3,
	MenuPlacement_ComboBoxRight4                                                     = 4,
	MenuPlacement_MenuRight5                                                         = 5,
	MenuPlacement_AboveAnchor6                                                       = 6,
	MenuPlacement_CenteredAboveAnchor7                                               = 7,
	MenuPlacement_AboveRightAnchor8                                                  = 8,
	MenuPlacement_MenuLeft9                                                          = 9,
	MenuPlacement_Center10                                                           = 10,
	MenuPlacement_RightLeftCenter11                                                  = 11,
	MenuPlacement_MatchBottomLeft12                                                  = 12,
	MenuPlacement_MAX13                                                              = 13
};

/// Enum /Script/SlateCore.ENavigationGenesis
/// Size: 0x04
enum ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard0                                                    = 0,
	ENavigationGenesis__Controller1                                                  = 1,
	ENavigationGenesis__User2                                                        = 2,
	ENavigationGenesis__ENavigationGenesis_MAX3                                      = 3
};

/// Enum /Script/SlateCore.ENavigationSource
/// Size: 0x03
enum ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget0                                                = 0,
	ENavigationSource__WidgetUnderCursor1                                            = 1,
	ENavigationSource__ENavigationSource_MAX2                                        = 2
};

/// Enum /Script/SlateCore.EButtonPressMethod
/// Size: 0x04
enum EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp0                                                   = 0,
	EButtonPressMethod__ButtonPress1                                                 = 1,
	EButtonPressMethod__ButtonRelease2                                               = 2,
	EButtonPressMethod__EButtonPressMethod_MAX3                                      = 3
};

/// Enum /Script/SlateCore.EButtonTouchMethod
/// Size: 0x03
enum EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp0                                                   = 0,
	EButtonTouchMethod__PreciseTap1                                                  = 1,
	EButtonTouchMethod__EButtonTouchMethod_MAX2                                      = 2
};

/// Enum /Script/SlateCore.EButtonClickMethod
/// Size: 0x05
enum EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp0                                                   = 0,
	EButtonClickMethod__MouseDown1                                                   = 1,
	EButtonClickMethod__MouseUp2                                                     = 2,
	EButtonClickMethod__PreciseClick3                                                = 3,
	EButtonClickMethod__EButtonClickMethod_MAX4                                      = 4
};

/// Enum /Script/SlateCore.EFontFallback
/// Size: 0x04
enum EFontFallback : uint8_t
{
	EFontFallback__FF_NoFallback0                                                    = 0,
	EFontFallback__FF_LocalizedFallback1                                             = 1,
	EFontFallback__FF_LastResortFallback2                                            = 2,
	EFontFallback__FF_Max3                                                           = 3
};

/// Enum /Script/SlateCore.ESlateCheckBoxType
/// Size: 0x03
enum ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox0                                                    = 0,
	ESlateCheckBoxType__ToggleButton1                                                = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX2                                      = 2
};

/// Enum /Script/SlateCore.EConsumeMouseWheel
/// Size: 0x04
enum EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible0                                       = 0,
	EConsumeMouseWheel__Always1                                                      = 1,
	EConsumeMouseWheel__Never2                                                       = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX3                                      = 3
};

