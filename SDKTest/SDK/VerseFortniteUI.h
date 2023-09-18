/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VerseFortniteUI.

/// Struct /Script/VerseFortniteUI.VerseFortniteUIPresenterElement
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseFortniteUIPresenterElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UVerseFortniteUINamedSlot*)                SlotWidget                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UWidget*)                                  UMGWidget                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseFortniteUI.VerseFortniteUIFrameworkSliderValue
/// Size: 0x000C (0x000000 - 0x00000C)
class FVerseFortniteUIFrameworkSliderValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ClientId                                                    ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ServerID                                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortnitePlayspaceHUDController
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UVerseFortnitePlayspaceHUDController : public UVerseFortnitePlayspaceExtensionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FHUDElementVisibilityRepData)              VisibilityData                                              ___ OFFSET(get<T>, {0x38, 120, 0, 0})
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
	CMember(UVerseFortniteUINamedSlot*)                MainSlot                                                    ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       MainMenuInputRowHandle                                      ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	CMember(TArray<FGameplayTagContainer>)             HudToDeactivateOnInitialization                             ___ OFFSET(get<T>, {0x408, 16, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIPresenter
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UVerseFortniteUIPresenter : public UUIFrameworkGameViewportPresenter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Pending                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FVerseFortniteUIPresenterElement>)  Created                                                     ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(UVerseFortniteUIOverlay*)                  PlayerGameViewport                                          ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UVerseFortniteUIOverlay*)                  ContentGameViewport                                         ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UVerseFortniteUIActivableWidgetBase*)      PopupContainer                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetForDynamicUI                                          ___ OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomainForDynamicUI                                    ___ OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Class /Script/VerseFortniteUI.VerseFortniteUIFrameworkButton_Base
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UVerseFortniteUIFrameworkButton_Base : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     ___ OFFSET(get<T>, {0xE0, 48, 0, 0})
};

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
	SMember(FVerseFortniteUIFrameworkSliderValue)      Value                                                       ___ OFFSET(get<T>, {0xC8, 12, 0, 0})
	DMember(float)                                     MinValue                                                    ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     StepSize                                                    ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
};

