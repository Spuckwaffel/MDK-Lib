
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/FabricUI.FabricInteractableViewModel
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UFabricInteractableViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FText)                                     Label                                                       OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FText)                                     Value                                                       OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x99, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricButtonBaseViewModel
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFabricButtonBaseViewModel : public UFabricInteractableViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0xA0, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricCarouselViewModel
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFabricCarouselViewModel : public UFabricInteractableViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bPresetEnabled                                              OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bShowBorder                                                 OFFSET(get<bool>, {0xA1, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricGridStyle
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricGridStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   RowSpan                                                     OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/FabricUI.FabricKnobViewModel
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFabricKnobViewModel : public UFabricInteractableViewModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bValueVisible                                               OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricPageInfoViewModel
/// Size: 0x0008 (0x000068 - 0x000070)
class UFabricPageInfoViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bHasContent                                                 OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bActivePage                                                 OFFSET(get<bool>, {0x69, 1, 0, 0})
};

/// Class /Script/FabricUI.FabricScreenWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFabricScreenWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UInvalidationBox*)                         InvalidationBox_RootBox                                     OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_ScreenScale                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_ScreenGrid                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(USpacer*)                                  Spacer_ElementSpacer                                        OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FabricUI.FabricScreenWidget.SetScreenGridDimensions
	// void SetScreenGridDimensions(FVector2D& InNewDimensions);                                                                // [0xa483444] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricUI.FabricScreenWidget.AttachFabricWidget
	// UFabricWidget* AttachFabricWidget(UClass*& FabricWidgetClass, FVector2D& GridPosition);                                  // [0xa4832e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/FabricUI.FabricWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFabricWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UClass*)                                   GridStyle                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UClass*)                                   ViewModelClass                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricUI.FabricWidget.GetFabricViewModel
	// UFabricInteractableViewModel* GetFabricViewModel();                                                                      // [0x8551de8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/FabricUI.FabricWidgetComponent
/// Size: 0x0000 (0x0006F0 - 0x0006F0)
class UFabricWidgetComponent : public UWidgetComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:


	/// Functions
	// Function /Script/FabricUI.FabricWidgetComponent.SetShouldSuscribeToSignificanceSubsystem
	// void SetShouldSuscribeToSignificanceSubsystem(bool ShouldSuscribe);                                                      // [0xa4834d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricUI.FabricWidgetComponent.GetTickMode
	// ETickMode GetTickMode();                                                                                                 // [0x3249654] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricUI.FabricWidgetTickControlSubsystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UFabricWidgetTickControlSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

