
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
	SMember(FText)                                     Title                                                       ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	SMember(FText)                                     Body                                                        ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	CMember(UDataTable*)                               TextStyleSet                                                ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FText)                                     Button01_MainText                                           ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FText)                                     Button02_MainText                                           ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FText)                                     Button03_MainText                                           ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FText)                                     Button04_MainText                                           ___ OFFSET(get<T>, {0xE8, 24, 0, 0})
	SMember(FText)                                     Button05_MainText                                           ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FText)                                     Button06_MainText                                           ___ OFFSET(get<T>, {0x118, 24, 0, 0})
	SMember(FText)                                     Button01_SubText                                            ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FText)                                     Button02_SubText                                            ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	SMember(FText)                                     Button03_SubText                                            ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FText)                                     Button04_SubText                                            ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FText)                                     Button05_SubText                                            ___ OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FText)                                     Button06_SubText                                            ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
	CMember(UTexture2D*)                               Art01_Image                                                 ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UTexture2D*)                               Art02_Image                                                 ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(ECreativeModalDialogAlignmentOption)       ContentAlignment                                            ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(bool)                                      bShowBackground                                             ___ OFFSET(get<bool>, {0x1D1, 1, 0, 0})
	DMember(float)                                     DialogBackgroundAlpha                                       ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(ECreativeModalDialogTimerOption)           TimerOption                                                 ___ OFFSET(get<T>, {0x1D8, 1, 0, 0})
	DMember(float)                                     Timeout                                                     ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     RemainingTimeForTimeout                                     ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(int32_t)                                   NumberOfButtons                                             ___ OFFSET(get<int32_t>, {0x1E4, 4, 0, 0})
	CMember(ECreativeModalBackActionBoundButtonOption) BackActionBoundButton                                       ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	CMember(ECreativeModalDialogViewmodelResponse)     Response                                                    ___ OFFSET(get<T>, {0x1E9, 1, 0, 0})
};

/// Class /Script/CRD_ModalDialogUI.CreativeModalDialogWidget
/// Size: 0x0010 (0x0003E8 - 0x0003F8)
class UCreativeModalDialogWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      ___ OFFSET(get<T>, {0x3E8, 16, 0, 0})
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

