
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizerConfig
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortVariantSprayCustomizerConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FFortVariantSprayCustomizerCosmeticOptions>) SprayCustomizerOptions                 OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/MeshCosmeticsUI.FortVariantRedirectorTile
/// Size: 0x00D8 (0x0003A8 - 0x000480)
class UFortVariantRedirectorTile : public UFortVariantEditorWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(UDynamicEntryBox*)                         EntryBox_VariantOptions                                     OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_VariantName                                            OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SprayCustomizerClass                                        OFFSET(get<T>, {0x3B8, 32, 0, 0})
	CMember(UFortVariantSprayCustomizerConfig*)        SprayCustomizerConfig                                       OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllSlotsInputAction                                    OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RandomizeSpraysInputAction                                  OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(TWeakObjectPtr<UAthenaCosmeticItemDefinition*>) ItemDefinition                                         OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(TArray<FFortVariantRedirectorTileLoadedEmoteToRandomize>) LoadedEmotesToRandomize                      OFFSET(get<T>, {0x408, 16, 0, 0})


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantRedirectorTile.HandleBoundaryNavigation
	// UWidget* HandleBoundaryNavigation(EUINavigation InNavigation);                                                           // [0x9c0a34c] Final|Native|Private 
};

/// Class /Script/MeshCosmeticsUI.FortVariantRedirectorTileButton
/// Size: 0x0060 (0x001470 - 0x0014D0)
class UFortVariantRedirectorTileButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(UOverlay*)                                 ImageOverlay                                                OFFSET(get<T>, {0x1470, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_TileIcon                                          OFFSET(get<T>, {0x1478, 8, 0, 0})
	CMember(ERedirectorTileDisplayMode)                DisplayMode                                                 OFFSET(get<T>, {0x1480, 4, 0, 0})
	DMember(float)                                     SlotOpacitySprayAssigned                                    OFFSET(get<float>, {0x1484, 4, 0, 0})
	DMember(float)                                     SlotOpacitySprayNotAssigned                                 OFFSET(get<float>, {0x1488, 4, 0, 0})
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizer
/// Size: 0x0160 (0x000708 - 0x000868)
class UFortVariantSprayCustomizer : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2152;

public:
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Confirm                                              OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_HideArchivedItems                                    OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowArchivedItems                                    OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UWidget*)                                  Widget_ArchivedItemsButtons                                 OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SpraysTab                                            OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SettingsTab                                          OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchClose                                           OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_TabLeft                                        OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget_TabRight                                       OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_Tabs                                               OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UWidget*)                                  Widget_Sprays                                               OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UWidget*)                                  Widget_Settings                                             OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UFortVariantItemTexturePicker*)            TexturePicker_Sprays                                        OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UFortVariantSprayCustomizerSetting*)       Setting_Saturation                                          OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UFortVariantSprayCustomizerSetting*)       Setting_Wear                                                OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UFortVariantSprayCustomizerSetting*)       Setting_Scale                                               OFFSET(get<T>, {0x788, 8, 0, 0})
	SMember(FDataTableRowHandle)                       TabLeftAction                                               OFFSET(get<T>, {0x790, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TabRightAction                                              OFFSET(get<T>, {0x7A0, 16, 0, 0})
	SMember(FGameplayTag)                              ItemShopPreviewSceneChangerTag                              OFFSET(get<T>, {0x7B0, 4, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 TabButtonGroup                                              OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAthenaCosmeticItemDefinition*>) ItemDefinition                                         OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UFortCustomizableObjectSprayVariant*)      SprayVariant                                                OFFSET(get<T>, {0x7C8, 8, 0, 0})


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetVariantEditorMode
	// void BP_SetVariantEditorMode(bool bIsLockerMode);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizer.BP_SetChannelSlotIcon
	// void BP_SetChannelSlotIcon(TWeakObjectPtr<UObject*>& ChannelSlotIcon);                                                   // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting
/// Size: 0x0040 (0x0002A8 - 0x0002E8)
class UFortVariantSprayCustomizerSetting : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UAnalogSlider*)                            Slider_Value                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(float)                                     CommitDelay                                                 OFFSET(get<float>, {0x2B0, 4, 0, 0})


	/// Functions
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.HandleSliderValueChanged
	// void HandleSliderValueChanged(float NormalizedValue);                                                                    // [0x9c0a3dc] Final|Native|Private 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnSetConstraints
	// void BP_OnSetConstraints(FFloatRange& Constraints);                                                                      // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/MeshCosmeticsUI.FortVariantSprayCustomizerSetting.BP_OnChangeValue
	// void BP_OnChangeValue(float Value, float NormalizedValue);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Struct /Script/MeshCosmeticsUI.FortVariantSprayCustomizerChannelOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortVariantSprayCustomizerChannelOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRotator)                                  RotationOffset                                              OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/MeshCosmeticsUI.FortVariantSprayCustomizerCosmeticOptions
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortVariantSprayCustomizerCosmeticOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<TWeakObjectPtr>)                    ItemShopPreviewStyles                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FGameplayTag, FFortVariantSprayCustomizerChannelOptions>) ChannelOptions                          OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/MeshCosmeticsUI.FortVariantRedirectorTileLoadedEmoteToRandomize
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortVariantRedirectorTileLoadedEmoteToRandomize : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortItemDefinition*)                      LoadedEmote                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/MeshCosmeticsUI.ERedirectorTileDisplayMode
/// Size: 0x04
enum ERedirectorTileDisplayMode : uint8_t
{
	ERedirectorTileDisplayMode__DisplaySprayTexture0                                 = 0,
	ERedirectorTileDisplayMode__ChangeOpacity1                                       = 1,
	ERedirectorTileDisplayMode__SwitchTextures2                                      = 2,
	ERedirectorTileDisplayMode__ERedirectorTileDisplayMode_MAX3                      = 3
};

