
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

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogAllowedConversionFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeModalDialogAllowedConversionFunction : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogConversionFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeModalDialogConversionFunction : public UCreativeModalDialogAllowedConversionFunction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel
/// Size: 0x0188 (0x000068 - 0x0001F0)
class UCreativeModalDialogViewmodel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FText)                                     Body                                                        OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	CMember(UDataTable*)                               TextStyleSet                                                OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FText)                                     Button01_MainText                                           OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FText)                                     Button02_MainText                                           OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FText)                                     Button03_MainText                                           OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FText)                                     Button04_MainText                                           OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	SMember(FText)                                     Button05_MainText                                           OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FText)                                     Button06_MainText                                           OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	SMember(FText)                                     Button01_SubText                                            OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FText)                                     Button02_SubText                                            OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	SMember(FText)                                     Button03_SubText                                            OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FText)                                     Button04_SubText                                            OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FText)                                     Button05_SubText                                            OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FText)                                     Button06_SubText                                            OFFSET(getStruct<T>, {0x1A8, 24, 0, 0})
	CMember(UTexture2D*)                               Art01_Image                                                 OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UTexture2D*)                               Art02_Image                                                 OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(ECreativeModalDialogAlignmentOption)       ContentAlignment                                            OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(bool)                                      bShowBackground                                             OFFSET(get<bool>, {0x1D1, 1, 0, 0})
	DMember(float)                                     DialogBackgroundAlpha                                       OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(ECreativeModalDialogTimerOption)           TimerOption                                                 OFFSET(get<T>, {0x1D8, 1, 0, 0})
	DMember(float)                                     Timeout                                                     OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     RemainingTimeForTimeout                                     OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(int32_t)                                   NumberOfButtons                                             OFFSET(get<int32_t>, {0x1E4, 4, 0, 0})
	CMember(ECreativeModalBackActionBoundButtonOption) BackActionBoundButton                                       OFFSET(get<T>, {0x1E8, 1, 0, 0})
	CMember(ECreativeModalDialogViewmodelResponse)     Response                                                    OFFSET(get<T>, {0x1E9, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton6UseFallbackDefaultInputAction
	// bool ShouldButton6UseFallbackDefaultInputAction();                                                                       // [0x9c6f190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton5UseFallbackDefaultInputAction
	// bool ShouldButton5UseFallbackDefaultInputAction();                                                                       // [0x9c6f164] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton4UseFallbackDefaultInputAction
	// bool ShouldButton4UseFallbackDefaultInputAction();                                                                       // [0x9c6f138] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton3UseFallbackDefaultInputAction
	// bool ShouldButton3UseFallbackDefaultInputAction();                                                                       // [0x9c6f10c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton2UseFallbackDefaultInputAction
	// bool ShouldButton2UseFallbackDefaultInputAction();                                                                       // [0x9c6f0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.ShouldButton1UseFallbackDefaultInputAction
	// bool ShouldButton1UseFallbackDefaultInputAction();                                                                       // [0x9c6f0b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsTimerVisible
	// bool IsTimerVisible();                                                                                                   // [0x9c6f084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton6Visible
	// bool IsButton6Visible();                                                                                                 // [0x9c6f068] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton5Visible
	// bool IsButton5Visible();                                                                                                 // [0x9c6f04c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton4Visible
	// bool IsButton4Visible();                                                                                                 // [0x9c6f030] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton3Visible
	// bool IsButton3Visible();                                                                                                 // [0x9c6f014] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton2Visible
	// bool IsButton2Visible();                                                                                                 // [0x9c6eff8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.IsButton1Visible
	// bool IsButton1Visible();                                                                                                 // [0x9c6efdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetVerticalAlignment
	// TEnumAsByte<EVerticalAlignment> GetVerticalAlignment();                                                                  // [0x9c6ef64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimerVisibility
	// ESlateVisibility GetTimerVisibility();                                                                                   // [0x9c6ef2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetTimeoutProgress
	// float GetTimeoutProgress();                                                                                              // [0x9c6ef08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetHorizontalAlignment
	// TEnumAsByte<EHorizontalAlignment> GetHorizontalAlignment();                                                              // [0x9c6e390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6Visibility
	// ESlateVisibility GetButton6Visibility();                                                                                 // [0x9c6e054] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton6TriggeringInputAction
	// FDataTableRowHandle GetButton6TriggeringInputAction();                                                                   // [0x9c6e01c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5Visibility
	// ESlateVisibility GetButton5Visibility();                                                                                 // [0x9c6e000] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton5TriggeringInputAction
	// FDataTableRowHandle GetButton5TriggeringInputAction();                                                                   // [0x9c6dfc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4Visibility
	// ESlateVisibility GetButton4Visibility();                                                                                 // [0x9c6dfac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton4TriggeringInputAction
	// FDataTableRowHandle GetButton4TriggeringInputAction();                                                                   // [0x9c6df74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3Visibility
	// ESlateVisibility GetButton3Visibility();                                                                                 // [0x9c6df58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton3TriggeringInputAction
	// FDataTableRowHandle GetButton3TriggeringInputAction();                                                                   // [0x9c6df20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2Visibility
	// ESlateVisibility GetButton2Visibility();                                                                                 // [0x9c6df04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton2TriggeringInputAction
	// FDataTableRowHandle GetButton2TriggeringInputAction();                                                                   // [0x9c6decc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1Visibility
	// ESlateVisibility GetButton1Visibility();                                                                                 // [0x9c6deb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetButton1TriggeringInputAction
	// FDataTableRowHandle GetButton1TriggeringInputAction();                                                                   // [0x9c6de78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRD_ModalDialogUI.CreativeModalDialogViewmodel.GetBackgroundVisibility
	// ESlateVisibility GetBackgroundVisibility();                                                                              // [0x9c6de54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogWidget
/// Size: 0x0010 (0x000400 - 0x000410)
class UCreativeModalDialogWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      OFFSET(getStruct<T>, {0x400, 16, 0, 0})
};

/// Enum /Script/CRD_ModalDialogUI.ECreativeModalDialogViewmodelResponse
/// Size: 0x08
enum ECreativeModalDialogViewmodelResponse : uint8_t
{
	ECreativeModalDialogViewmodelResponse__None0                                     = 0,
	ECreativeModalDialogViewmodelResponse__Button11                                  = 1,
	ECreativeModalDialogViewmodelResponse__Button22                                  = 2,
	ECreativeModalDialogViewmodelResponse__Button33                                  = 3,
	ECreativeModalDialogViewmodelResponse__Button44                                  = 4,
	ECreativeModalDialogViewmodelResponse__Button55                                  = 5,
	ECreativeModalDialogViewmodelResponse__Button66                                  = 6,
	ECreativeModalDialogViewmodelResponse__ECreativeModalDialogViewmodelResponse_MAX7 = 7
};

