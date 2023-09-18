/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package StoreSelectionUI.

/// Struct /Script/StoreSelectionUI.ItemData
/// Size: 0x0040 (0x000000 - 0x000040)
class FItemData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FText)                                     Name                                                        ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionData
/// Size: 0x0050 (0x000498 - 0x0004E8)
class UFortStoreSelectionData : public UFortGameFeatureData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	CMember(TWeakObjectPtr<UClass*>)                   StoreSelectionScreenClass                                   ___ OFFSET(get<T>, {0x498, 32, 0, 0})
	SMember(FText)                                     RegularStoreSelectedText                                    ___ OFFSET(get<T>, {0x4B8, 24, 0, 0})
	SMember(FText)                                     NonRegularStoreSelectedText                                 ___ OFFSET(get<T>, {0x4D0, 24, 0, 0})
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionOptionEntry
/// Size: 0x0020 (0x0014C0 - 0x0014E0)
class UFortStoreSelectionOptionEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(UFortLazyImage*)                           Image_Icon                                                  ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Price                                                  ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Label                                              ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
};

/// Class /Script/StoreSelectionUI.FortStoreSelectionScreen
/// Size: 0x03B8 (0x000520 - 0x0008D8)
class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2264;

public:
	CMember(UCommonButtonGroupLegacy*)                 EntryBoxButtonGroup                                         ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UFortRealMoneyOffer*)                      StoreOffer                                                  ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         StoreOfferLoadGuard                                         ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_Options                                     ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Continue                                             ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Cancel                                               ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_InitiallySelectedHint                              ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   PurchaseChoiceOwner                                         ___ OFFSET(get<T>, {0x568, 16, 0, 0})
	CMember(TArray<FItemData>)                         StoreOptions                                                ___ OFFSET(get<T>, {0x578, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortMtxOfferData*>)        SoftDisplayAsset                                            ___ OFFSET(get<T>, {0x588, 32, 0, 0})
	SMember(FItemData)                                 ItemData                                                    ___ OFFSET(get<T>, {0x5A8, 768, 0, 0})
	SMember(FText)                                     OptionalLabels                                              ___ OFFSET(get<T>, {0x8A8, 48, 0, 0})
};

/// Enum /Script/StoreSelectionUI.EOptionalLabel
/// Size: 0x03
enum EOptionalLabel : uint8_t
{
	EOptionalLabel__Label_DS0                                                        = 0,
	EOptionalLabel__Label_NM1                                                        = 1,
	EOptionalLabel__Max2                                                             = 2
};

