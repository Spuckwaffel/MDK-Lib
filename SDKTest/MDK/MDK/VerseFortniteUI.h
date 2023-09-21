
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: ModelViewViewModel
/// dependency: UIFramework
/// dependency: UMG
/// dependency: VerseFortnite

/// Class /Script/VerseFortniteUI.VerseFortnitePlayspaceHUDController
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FHUDElementVisibilityRepData)              VisibilityData                                              OFFSET(get<T>, {0x38, 120, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlaySlot
/// Size: 0x0018 (0x000058 - 0x000070)
class UVerseFortniteUIOverlaySlot : public UOverlaySlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIOverlay
/// Size: 0x0018 (0x0001A0 - 0x0001B8)
class UVerseFortniteUIOverlay : public UOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUINamedSlot
/// Size: 0x0010 (0x0001A0 - 0x0001B0)
class UVerseFortniteUINamedSlot : public UNamedSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIActivableWidgetBase
/// Size: 0x0030 (0x0003E8 - 0x000418)
class UVerseFortniteUIActivableWidgetBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(UVerseFortniteUINamedSlot*)                MainSlot                                                    OFFSET(get<T>, {0x3E8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      OFFSET(get<T>, {0x3F8, 16, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             HudToDeactivateOnInitialization                             OFFSET(get<T>, {0x408, 16, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIPresenter
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Pending                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Created                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(UVerseFortniteUIOverlay*)                  PlayerGameViewport                                          OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UVerseFortniteUIOverlay*)                  ContentGameViewport                                         OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UVerseFortniteUIActivableWidgetBase*)      PopupContainer                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetForDynamicUI                                          OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomainForDynamicUI                                    OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FText)                                     Text                                                        OFFSET(get<T>, {0xC8, 24, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     OFFSET(get<T>, {0xE0, 48, 0, 0})
};



	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.ServerClick
	// void ServerClick(APlayerController* PlayerController);                                                                   // [0x5999e54] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.OnRep_Message
	// void OnRep_Message();                                                                                                    // [0xa3d53bc] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base.GetText
	// FText GetText();                                                                                                         // [0x9765d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Loud
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Loud : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Regular
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Regular : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Quiet
/// Size: 0x0000 (0x000128 - 0x000128)
class UVerseFortniteUIFrameworkButton_Quiet : public UVerseFortniteUIFrameworkButton_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkText_Base
/// Size: 0x0018 (0x000128 - 0x000140)
class UVerseFortniteUIFrameworkText_Base : public UUIFrameworkTextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkTextBlock
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkTextBlock : public UUIFrameworkTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableText
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkEditableText : public UVerseFortniteUIFrameworkText_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkEditableTextBox
/// Size: 0x0000 (0x000140 - 0x000140)
class UVerseFortniteUIFrameworkEditableTextBox : public UVerseFortniteUIFrameworkText_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider
/// Size: 0x0040 (0x0000C8 - 0x000108)
class UVerseFortniteUIFrameworkSlider : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FVerseFortniteUIFrameworkSliderValue)      Value                                                       OFFSET(get<T>, {0xC8, 12, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0xDC, 4, 0, 0})
};



	/// Functions
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetValue
	// bool SetValue(float InValue);                                                                                            // [0xa3d5868] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetStepSize
	// void SetStepSize(float InMinValue);                                                                                      // [0xa3d57e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMinValue
	// void SetMinValue(float InMinValue);                                                                                      // [0xa3d5760] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.SetMaxValue
	// void SetMaxValue(float InMaxValue);                                                                                      // [0xa3d56e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ServerValueChanged
	// void ServerValueChanged(APlayerController* PlayerController, float InNewValue, int32_t InClientID, int32_t InServerID);  // [0xa3d55a0] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_Value
	// void OnRep_Value();                                                                                                      // [0xa3d5448] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_StepSize
	// void OnRep_StepSize();                                                                                                   // [0xa3d5420] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MinValue
	// void OnRep_MinValue();                                                                                                   // [0xa3d53f8] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.OnRep_MaxValue
	// void OnRep_MaxValue();                                                                                                   // [0xa3d5394] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.HandleValueChanged
	// void HandleValueChanged(float NewValue);                                                                                 // [0xa3d5314] Final|Native|Private 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetValue
	// float GetValue();                                                                                                        // [0x59fab58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetStepSize
	// float GetStepSize();                                                                                                     // [0x893a51c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMinValue
	// float GetMinValue();                                                                                                     // [0x893a5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.GetMaxValue
	// float GetMaxValue();                                                                                                     // [0x5fcf63c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortniteUI.VerseFortniteUIFrameworkSlider.ExecuteServerValueChanged
	// void ExecuteServerValueChanged(float InNewValue, int32_t InClientID, int32_t InServerID);                                // [0xa3d521c] Final|Native|Public  
/// Struct /Script/VerseFortniteUI.VerseFortniteUIPresenterElement
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseFortniteUIPresenterElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UVerseFortniteUINamedSlot*)                SlotWidget                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UWidget*)                                  UMGWidget                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
/// Size: 0x000C (0x000000 - 0x00000C)
class FVerseFortniteUIFrameworkSliderValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ClientId                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ServerID                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

