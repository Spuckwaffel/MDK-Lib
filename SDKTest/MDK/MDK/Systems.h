
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
/// Size: 0x0053 (0x0002A8 - 0x0002FB)
class UWBP_UIKit_Block_Base_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 763;

public:
	DMember(double)                                    TimeHovering                                                ___ OFFSET(get<double>, {0x2A8, 8, 0, 0})
	DMember(double)                                    TimeUnhovering                                              ___ OFFSET(get<double>, {0x2B0, 8, 0, 0})
	DMember(double)                                    TimeFocusing                                                ___ OFFSET(get<double>, {0x2B8, 8, 0, 0})
	DMember(double)                                    TimeUnfocusing                                              ___ OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(double)                                    TimePressing                                                ___ OFFSET(get<double>, {0x2C8, 8, 0, 0})
	DMember(double)                                    TimeReleasing                                               ___ OFFSET(get<double>, {0x2D0, 8, 0, 0})
	DMember(double)                                    TimeDisabling                                               ___ OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    TimeEnabling                                                ___ OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    TimeSelecting                                               ___ OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    TimeDeselecting                                             ___ OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      IsSelectable                                                ___ OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      IsSelected                                                  ___ OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	DMember(bool)                                      IsLocked                                                    ___ OFFSET(get<bool>, {0x2FA, 1, 0, 0})
};

/// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C
/// Size: 0x0570 (0x001480 - 0x0019F0)
class UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6640;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1480, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Base                                           ___ OFFSET(get<T>, {0x1488, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Base                                           ___ OFFSET(get<T>, {0x1490, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonBackground_CTA_C*)        Background                                                  ___ OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(UGridPanel*)                               Button                                                      ___ OFFSET(get<T>, {0x14A0, 8, 0, 0})
	CMember(UImage*)                                   HoldIcon                                                    ___ OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(UImage*)                                   HoldProgressBar                                             ___ OFFSET(get<T>, {0x14B0, 8, 0, 0})
	CMember(UGridPanel*)                               Prompt                                                      ___ OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UGridPanel*)                               PromptAlignment                                             ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonText_CTA_C*)              SecondaryTextBlock                                          ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonText_CTA_C*)              TextBlock                                                   ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Text                                            ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(TEnumAsByte<ModularButtonSize>)            ButtonSize                                                  ___ OFFSET(get<T>, {0x14E0, 1, 0, 0})
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x14E8, 24, 0, 0})
	SMember(FText)                                     TextSecondary                                               ___ OFFSET(get<T>, {0x1500, 24, 0, 0})
	CMember(TArray<UWBP_UIKit_Block_Base_C*>)          ModularBlocks                                               ___ OFFSET(get<T>, {0x1518, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 InputActionProgressMaterial                                 ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UMaterialInstance*)                        BorderMaterial                                              ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	DMember(bool)                                      IsBorderAdditive                                            ___ OFFSET(get<bool>, {0x1540, 1, 0, 0})
	DMember(int32_t)                                   LargeHeight                                                 ___ OFFSET(get<int32_t>, {0x1544, 4, 0, 0})
	DMember(int32_t)                                   MediumHeight                                                ___ OFFSET(get<int32_t>, {0x1548, 4, 0, 0})
	DMember(int32_t)                                   SmallHeight                                                 ___ OFFSET(get<int32_t>, {0x154C, 4, 0, 0})
	SMember(FMargin)                                   SingleTextLargePadding                                      ___ OFFSET(get<T>, {0x1550, 16, 0, 0})
	SMember(FMargin)                                   SingleTextMediumPadding                                     ___ OFFSET(get<T>, {0x1560, 16, 0, 0})
	SMember(FMargin)                                   SingleTextSmallPadding                                      ___ OFFSET(get<T>, {0x1570, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextLargePadding                                      ___ OFFSET(get<T>, {0x1580, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextMediumPadding                                     ___ OFFSET(get<T>, {0x1590, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSmallPadding                                      ___ OFFSET(get<T>, {0x15A0, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryLargePadding                             ___ OFFSET(get<T>, {0x15B0, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryMediumPadding                            ___ OFFSET(get<T>, {0x15C0, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondarySmallPadding                             ___ OFFSET(get<T>, {0x15D0, 16, 0, 0})
	DMember(int32_t)                                   GridUnit                                                    ___ OFFSET(get<int32_t>, {0x15E0, 4, 0, 0})
	SMember(FSlateFontInfo)                            LargePrimaryFont                                            ___ OFFSET(get<T>, {0x15E8, 88, 0, 0})
	SMember(FSlateFontInfo)                            MediumPrimaryFont                                           ___ OFFSET(get<T>, {0x1640, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallPrimaryFont                                            ___ OFFSET(get<T>, {0x1698, 88, 0, 0})
	SMember(FSlateFontInfo)                            LargeSecondaryFont                                          ___ OFFSET(get<T>, {0x16F0, 88, 0, 0})
	SMember(FSlateFontInfo)                            MeduimSecondaryFont                                         ___ OFFSET(get<T>, {0x1748, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallSecondaryFont                                          ___ OFFSET(get<T>, {0x17A0, 88, 0, 0})
	SMember(FWidgetTransform)                          LeftToRightTransform                                        ___ OFFSET(get<T>, {0x17F8, 56, 0, 0})
	SMember(FWidgetTransform)                          RightToLeftTransform                                        ___ OFFSET(get<T>, {0x1830, 56, 0, 0})
	DMember(bool)                                      SingleText                                                  ___ OFFSET(get<bool>, {0x1868, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusChanged                                              ___ OFFSET(get<T>, {0x1870, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierLarge                               ___ OFFSET(get<double>, {0x1880, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierMedium                              ___ OFFSET(get<double>, {0x1888, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSmall                               ___ OFFSET(get<double>, {0x1890, 8, 0, 0})
	DMember(int32_t)                                   MobileMinWidth                                              ___ OFFSET(get<int32_t>, {0x1898, 4, 0, 0})
	DMember(bool)                                      OverrideDefaultHeight                                       ___ OFFSET(get<bool>, {0x189C, 1, 0, 0})
	DMember(int32_t)                                   MobileMinHeight                                             ___ OFFSET(get<int32_t>, {0x18A0, 4, 0, 0})
	DMember(int32_t)                                   MobileLargeHeight                                           ___ OFFSET(get<int32_t>, {0x18A4, 4, 0, 0})
	DMember(int32_t)                                   MobileMediumHeight                                          ___ OFFSET(get<int32_t>, {0x18A8, 4, 0, 0})
	DMember(int32_t)                                   MobileSmallHeight                                           ___ OFFSET(get<int32_t>, {0x18AC, 4, 0, 0})
	SMember(FMargin)                                   MobileSingleTextLargePadding                                ___ OFFSET(get<T>, {0x18B0, 16, 0, 0})
	SMember(FMargin)                                   MobileSingleTextMediumPadding                               ___ OFFSET(get<T>, {0x18C0, 16, 0, 0})
	SMember(FMargin)                                   MobileSingleTextSmallPadding                                ___ OFFSET(get<T>, {0x18D0, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextLargePadding                                ___ OFFSET(get<T>, {0x18E0, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextMediumPadding                               ___ OFFSET(get<T>, {0x18F0, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSmallPadding                                ___ OFFSET(get<T>, {0x1900, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondaryLargePadding                       ___ OFFSET(get<T>, {0x1910, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondaryMediumPadding                      ___ OFFSET(get<T>, {0x1920, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondarySmallPadding                       ___ OFFSET(get<T>, {0x1930, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryLarge                      ___ OFFSET(get<double>, {0x1940, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryMedium                     ___ OFFSET(get<double>, {0x1948, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondarySmall                      ___ OFFSET(get<double>, {0x1950, 8, 0, 0})
	DMember(bool)                                      OverrideDefaultMobileFontSizeMultiplier                     ___ OFFSET(get<bool>, {0x1958, 1, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierOverride                            ___ OFFSET(get<double>, {0x1960, 8, 0, 0})
	DMember(bool)                                      LastEnabledEvent                                            ___ OFFSET(get<bool>, {0x1968, 1, 0, 0})
	DMember(double)                                    FadeInTime                                                  ___ OFFSET(get<double>, {0x1970, 8, 0, 0})
	DMember(double)                                    FadeOutTime                                                 ___ OFFSET(get<double>, {0x1978, 8, 0, 0})
	CMember(USoundBase*)                               PressedSound                                                ___ OFFSET(get<T>, {0x1980, 8, 0, 0})
	CMember(USoundBase*)                               HoveredSound                                                ___ OFFSET(get<T>, {0x1988, 8, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            ___ OFFSET(get<T>, {0x1990, 1, 0, 0})
	DMember(bool)                                      OverrideSecondaryTextSize                                   ___ OFFSET(get<bool>, {0x1991, 1, 0, 0})
	DMember(double)                                    OverrideSecondaryTextSizeMultiplier                         ___ OFFSET(get<double>, {0x1998, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoldCompleted                                             ___ OFFSET(get<T>, {0x19A0, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryOverride                   ___ OFFSET(get<double>, {0x19B0, 8, 0, 0})
	CMember(USoundBase*)                               HoldPressedSound                                            ___ OFFSET(get<T>, {0x19B8, 8, 0, 0})
	CMember(USoundBase*)                               HoldSound                                                   ___ OFFSET(get<T>, {0x19C0, 8, 0, 0})
	CMember(USoundBase*)                               HoldReleasedSound                                           ___ OFFSET(get<T>, {0x19C8, 8, 0, 0})
	CMember(USoundBase*)                               HoldCompletedSound                                          ___ OFFSET(get<T>, {0x19D0, 8, 0, 0})
	CMember(UAudioComponent*)                          HoldSoundAudioComponent                                     ___ OFFSET(get<T>, {0x19D8, 8, 0, 0})
	CMember(UAudioComponent*)                          PressedSoundAudioComponent                                  ___ OFFSET(get<T>, {0x19E0, 8, 0, 0})
	DMember(double)                                    CurrentHoldProgress                                         ___ OFFSET(get<double>, {0x19E8, 8, 0, 0})
};

/// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C
/// Size: 0x0050 (0x0002A8 - 0x0002F8)
class UWBP_UIKit_Scrim_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_FadeOut                                                ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_FadeIn                                                 ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UBackgroundBlur*)                          BlurWidget                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UButton*)                                  ClickCatcher                                                ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UBorder*)                                  DimBorder                                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(double)                                    Blur                                                        ___ OFFSET(get<double>, {0x2D8, 8, 0, 0})
	SMember(FLinearColor)                              Dim_Color                                                   ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(UMaterialInstance*)                        Dim_Material                                                ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C
/// Size: 0x0538 (0x0003E8 - 0x000920)
class UWBP_UIKit_Dialog_Base_C : public UUIKitDialogBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OnDeactivate_Base                                      ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OnActivate_Base                                        ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UHorizontalBox*)                           ButtonsContainer                                            ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UGridPanel*)                               Content                                                     ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(USizeBox*)                                 ContentSize                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   Image_Background                                            ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   Image_BottomBar                                             ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UGridPanel*)                               Main                                                        ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Body                                               ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UGridPanel*)                               Root                                                        ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UWBP_UIKit_Scrim_C*)                       Scrim                                                       ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Content                                                ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Main                                                   ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(TArray<UWBP_UIKit_ButtonCTA_Base_C*>)      ButtonWidgets                                               ___ OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup                                                 ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FS_UI_DialogStyle)                         DialogStyle                                                 ___ OFFSET(get<T>, {0x480, 1152, 0, 0})
	SMember(FMulticastInlineDelegate)                  DialogButtonClickedDispatcher                               ___ OFFSET(get<T>, {0x900, 16, 0, 0})
	DMember(int32_t)                                   StartFocusButton                                            ___ OFFSET(get<int32_t>, {0x910, 4, 0, 0})
	DMember(bool)                                      ImageMatchTextureSize                                       ___ OFFSET(get<bool>, {0x914, 1, 0, 0})
	CMember(UDataTable*)                               DefaultInputActionDataTable                                 ___ OFFSET(get<T>, {0x918, 8, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_SizeBox.S_UI_SizeBox
/// Size: 0x0080 (0x000000 - 0x000080)
class FS_UI_SizeBox : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      UseWidthOverride_72_BA6840BC46D2FCB3C33564AA0BCC88B7        ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(double)                                    WidthOverride_28_A94CBD4C4E96C298CF51F6B49895AE3D           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(bool)                                      UseHeightOverride_73_4C3EEBD24F01FABDFDF46EA8948AAB5D       ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(double)                                    HeightOverride_30_985448F847722BFC0ECD01B46F54E873          ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(bool)                                      UseMinDesiredWidth_74_D5A0686649714C9EFFA370887C3F1CAA      ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(double)                                    MinDesiredWidth_32_AB4B30464E6C5F6D4923D7BB59F1DCA1         ___ OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(bool)                                      UseMinDesiredHeight_75_2437CEFB49C112B12BDAD5B825FA1CA0     ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(double)                                    MinDesiredHeight_34_F14D30CC4F7BF3A05A0342AFF4F2C7FF        ___ OFFSET(get<double>, {0x38, 8, 0, 0})
	DMember(bool)                                      UseMaxDesiredWidth_76_65A135704F09BC785AF7EDB477AD84A4      ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(double)                                    MaxDesiredWidth_36_74DF0470480CF4662560B786F6878973         ___ OFFSET(get<double>, {0x48, 8, 0, 0})
	DMember(bool)                                      UseMaxDesiredHeight_77_3DD826AB4F381CD08BF25787E9DB9BD5     ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(double)                                    MaxDesiredHeight_38_F6C9BD4C471DCA757638EB8D32FC28C7        ___ OFFSET(get<double>, {0x58, 8, 0, 0})
	DMember(bool)                                      UseMinAspectRatio_78_1F5494B4432A23F9546CAFAA1051E04C       ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(double)                                    MinAspectRatio_40_0E556247436783AE9300D3939DB064AA          ___ OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(bool)                                      UseMaxAspectRatio_80_EC81EB044C1A0BD57CCB4FA58394E246       ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(double)                                    MaxAspectRatio_42_F1DC874242251011C0B1E2BD2F2B46D3          ___ OFFSET(get<double>, {0x78, 8, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_GridCell.S_UI_GridCell
/// Size: 0x0028 (0x000000 - 0x000028)
class FS_UI_GridCell : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Row_15_A94CBD4C4E96C298CF51F6B49895AE3D                     ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RowSpan_17_A0786E70484526B60C8B42A95AD3AB35                 ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Column_19_EE61B90B4EE25EADECB506AEC3137A46                  ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan_21_37271BC54501DA614C3829B82CDFEA3E              ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Layer_23_5EB8311C4EBCD402805DEE9E676A7772                   ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FVector2D)                                 Nudge_26_A5E5651A47EF74CCA30424AB0F22341D                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_Placement.S_UI_Placement
/// Size: 0x0040 (0x000000 - 0x000040)
class FS_UI_Placement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment_4_A94CBD4C4E96C298CF51F6B49895AE3D      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment_5_BC3E4CD143DBC026850F4BAE098F6937        ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FMargin)                                   Padding_8_030D86C14EBE7996733C89A951279A61                  ___ OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FS_UI_GridCell)                            Grid_19_3148B55D43C5889FC5D1FF82667A7D01                    ___ OFFSET(get<T>, {0x18, 40, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogText.S_UI_DialogText
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FS_UI_DialogText : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FS_UI_Placement)                           Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D               ___ OFFSET(get<T>, {0x0, 64, 0, 0})
	SMember(FSlateFontInfo)                            Font_45_B587C32B43943172D2272F8558ACC8B2                    ___ OFFSET(get<T>, {0x40, 88, 0, 0})
	SMember(FSlateColor)                               Color_65_9CB9A5174FD065187E30878106948A3B                   ___ OFFSET(get<T>, {0x98, 20, 0, 0})
	CMember(ETextTransformPolicy)                      TransformPolicy_49_52395AC7440E291527A8768E37D08B2A         ___ OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification_52_5897D4F946C704E9C5D67E9DD207EF16           ___ OFFSET(get<T>, {0xAD, 1, 0, 0})
	DMember(double)                                    LineHeightPercentage_55_2509C2B04F6144283C7BADBF36AAA8F6    ___ OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      AutoWrapText_58_064D5C3A4DD3D362216942A761DDC8D0            ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   WrapTextAt_68_39091237442DEAE1CAFAE3AB75A757F1              ___ OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogImage.S_UI_DialogImage
/// Size: 0x0050 (0x000000 - 0x000050)
class FS_UI_DialogImage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FS_UI_Placement)                           Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D               ___ OFFSET(get<T>, {0x0, 64, 0, 0})
	SMember(FVector2D)                                 ImageSize_72_3E7C183E49CE6543B65BBEB8E5C3DEF9               ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogButtons.S_UI_DialogButtons
/// Size: 0x0064 (0x000000 - 0x000064)
class FS_UI_DialogButtons : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FS_UI_Placement)                           GroupPlacement_71_A94CBD4C4E96C298CF51F6B49895AE3D          ___ OFFSET(get<T>, {0x0, 64, 0, 0})
	DMember(double)                                    SpaceBetweenButtons_62_39091237442DEAE1CAFAE3AB75A757F1     ___ OFFSET(get<double>, {0x40, 8, 0, 0})
	CMember(TEnumAsByte<ModularButtonSize>)            EachButtonSize_74_7A1E34E243F1F10533E9EA910463B328          ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         EachButtonHorizontalAlignment_67_3A1B89E0481CE49778D5E39C0BD7E90C ___ OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           EachButtonVerticalAlignment_68_68D332304FA9E9F9D60D0E8B410EE23F ___ OFFSET(get<T>, {0x4A, 1, 0, 0})
	DMember(int32_t)                                   EachButtonMinWidth_77_CA4A0FEF4CF6FF0700E0DB8F95AC917B      ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       CTAButtonstypes_81_963DA1ED40E4193862297D976DA12A11         ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   FocuseButton_85_CC6A212C4012DDFDC810689A87324E54            ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/S_UI_DialogStyle.S_UI_DialogStyle
/// Size: 0x0478 (0x000000 - 0x000478)
class FS_UI_DialogStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FS_UI_SizeBox)                             DialogSize_55_CE6987424DF46947352F678CF5E52CC1              ___ OFFSET(get<T>, {0x0, 128, 0, 0})
	SMember(FS_UI_Placement)                           DialogPlacement_65_59E2551640BABE52A5754CA2E5941FCF         ___ OFFSET(get<T>, {0x80, 64, 0, 0})
	SMember(FSlateBrush)                               BackgroundMaterial_52_853CB3A44926A4DC7A0AF6AFEDF77E4A      ___ OFFSET(get<T>, {0xC0, 192, 0, 0})
	SMember(FSlateBrush)                               BottomBarMaterial_72_59B1CCA84957A7878829E9819798B47E       ___ OFFSET(get<T>, {0x180, 192, 0, 0})
	SMember(FS_UI_DialogText)                          Title_47_7E0D422D440CE71F166354B2BFE6C254                   ___ OFFSET(get<T>, {0x240, 192, 0, 0})
	SMember(FS_UI_DialogText)                          Text_48_23B8288A403C2D3FE669F581F37D77B0                    ___ OFFSET(get<T>, {0x300, 192, 0, 0})
	SMember(FS_UI_DialogImage)                         Image_69_F993EDF444B2B22A5DEFDDBA00055A97                   ___ OFFSET(get<T>, {0x3C0, 80, 0, 0})
	SMember(FS_UI_DialogButtons)                       ButtonsGroup_66_9B96F603486F8FBAC3896087AA45CDDB            ___ OFFSET(get<T>, {0x410, 104, 0, 0})
};

/// Enum /FortUILibrary/Systems/ModularButton/Data/E_UI_CTAButtonType.E_UI_CTAButtonType
/// Size: 0x04
enum E_UI_CTAButtonType : uint8_t
{
	E_UI_CTAButtonType__NewEnumerator00                                              = 0,
	E_UI_CTAButtonType__NewEnumerator11                                              = 1,
	E_UI_CTAButtonType__NewEnumerator22                                              = 2,
	E_UI_CTAButtonType__E_UI_MAX3                                                    = 3
};

/// Enum /FortUILibrary/Systems/ModularButton/ModularButtonSize.ModularButtonSize
/// Size: 0x04
enum ModularButtonSize : uint8_t
{
	ModularButtonSize__NewEnumerator00                                               = 0,
	ModularButtonSize__NewEnumerator11                                               = 1,
	ModularButtonSize__NewEnumerator22                                               = 2,
	ModularButtonSize__ModularButtonSize_MAX3                                        = 3
};

/// Enum /FortUILibrary/Systems/Dialog/Data/E_UI_ButtonVisualType.E_UI_ButtonVisualType
/// Size: 0x03
enum E_UI_ButtonVisualType : uint8_t
{
	E_UI_ButtonVisualType__NewEnumerator00                                           = 0,
	E_UI_ButtonVisualType__NewEnumerator11                                           = 1,
	E_UI_ButtonVisualType__E_UI_MAX2                                                 = 2
};

