
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: ModelViewViewModel
/// dependency: NetCore
/// dependency: UMG

/// Class /Script/UIFramework.UIFrameworkLocalSettings
/// Size: 0x0058 (0x000030 - 0x000088)
class UUIFrameworkLocalSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UObject*>)                  ErrorResource                                               OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  LoadingResource                                             OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkPlayerComponent
/// Size: 0x0438 (0x0000A0 - 0x0004D8)
class UUIFrameworkPlayerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	SMember(FUIFrameworkGameLayerSlotList)             RootList                                                    OFFSET(get<T>, {0xA8, 288, 0, 0})
	SMember(FUIFrameworkWidgetTree)                    WidgetTree                                                  OFFSET(get<T>, {0x1C8, 504, 0, 0})
	CMember(UUIFrameworkPresenter*)                    Presenter                                                   OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(TSet<int32_t>)                             NetReplicationPending                                       OFFSET(get<T>, {0x3C8, 80, 0, 0})
	CMember(TSet<int32_t>)                             AddPending                                                  OFFSET(get<T>, {0x418, 80, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkPlayerComponent.ServerRemoveWidgetRootFromTree
	// void ServerRemoveWidgetRootFromTree(FUIFrameworkWidgetId WidgetId);                                                      // [0x97663cc] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/UIFramework.UIFrameworkPlayerComponent.RemoveWidget
	// void RemoveWidget(UUIFrameworkWidget* Widget);                                                                           // [0x97662cc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkPlayerComponent.AddWidget
	// void AddWidget(FUIFrameworkGameLayerSlot Widget);                                                                        // [0x97658c4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkPresenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIFrameworkPresenter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UIFramework.UIFrameworkGameViewportPresenter
/// Size: 0x0010 (0x000028 - 0x000038)
class UUIFrameworkGameViewportPresenter : public UUIFrameworkPresenter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/UIFramework.UIFrameworkWidgetWrapperInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIFrameworkWidgetWrapperInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UIFramework.UIFrameworkWidget
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UUIFrameworkWidget : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(ESlateVisibility)                          Visibility                                                  OFFSET(get<T>, {0x69, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetClass                                                 OFFSET(get<T>, {0x70, 32, 0, 0})
	SMember(FUIFrameworkWidgetId)                      ID                                                          OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   Wrapper                                                     OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FUIFrameworkParentWidget)                  AuthorityParent                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(UWidget*)                                  LocalUMGWidget                                              OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkWidget.OnRep_Visibility
	// void OnRep_Visibility();                                                                                                 // [0x9766198] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkWidget.OnRep_IsEnabled
	// void OnRep_IsEnabled();                                                                                                  // [0x9765f6c] Final|Native|Private 
};

/// Class /Script/UIFramework.UIFrameworkButton
/// Size: 0x0058 (0x0000C8 - 0x000120)
class UUIFrameworkButton : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FUIFrameworkSimpleSlot)                    Slot                                                        OFFSET(get<T>, {0xE0, 64, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkButton.SetContent
	// void SetContent(FUIFrameworkSimpleSlot Content);                                                                         // [0x9766684] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkButton.ServerClick
	// void ServerClick(APlayerController* PlayerController);                                                                   // [0x5999e54] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/UIFramework.UIFrameworkButton.OnRep_Slot
	// void OnRep_Slot();                                                                                                       // [0x9766148] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkButton.HandleClick
	// void HandleClick();                                                                                                      // [0x9765dd0] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkButton.GetContent
	// FUIFrameworkSimpleSlot GetContent();                                                                                     // [0x9765c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIFramework.UIFrameworkButtonWidget
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UUIFrameworkButtonWidget : public UButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Script/UIFramework.UIFrameworkCanvasBox
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkCanvasBox : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FUIFrameworkCanvasBoxSlotList)             ReplicatedSlotList                                          OFFSET(get<T>, {0xC8, 288, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkCanvasBox.RemoveWidget
	// void RemoveWidget(UUIFrameworkWidget* Widget);                                                                           // [0x97661cc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkCanvasBox.AddWidget
	// void AddWidget(FUIFrameworkCanvasBoxSlot Widget);                                                                        // [0x97655e0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkColorBlock
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class UUIFrameworkColorBlock : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FVector2f)                                 DesiredSize                                                 OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkColorBlock.SetDesiredSize
	// void SetDesiredSize(FVector2f DesiredSize);                                                                              // [0x97667f4] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkColorBlock.SetColor
	// void SetColor(FLinearColor Tint);                                                                                        // [0x9766528] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkColorBlock.OnRep_DesiredSize
	// void OnRep_DesiredSize();                                                                                                // [0x9765f30] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkColorBlock.OnRep_Color
	// void OnRep_Color();                                                                                                      // [0x9765f30] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkColorBlock.GetDesiredSize
	// FVector2f GetDesiredSize();                                                                                              // [0x82ba034] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkColorBlock.GetColor
	// FLinearColor GetColor();                                                                                                 // [0x9765c54] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIFramework.UIFrameworkImageBlock
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UUIFrameworkImageBlock : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FUIFrameworkImageBlockData)                Data                                                        OFFSET(get<T>, {0xC8, 64, 0, 0})
	DMember(bool)                                      bWaitForResourceToBeLoaded                                  OFFSET(get<bool>, {0x108, 1, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetTint
	// void SetTint(FLinearColor Tint);                                                                                         // [0x9766528] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetTiling
	// void SetTiling(TEnumAsByte<ESlateBrushTileType> OverflowPolicy);                                                         // [0x9767284] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetTexture
	// void SetTexture(TWeakObjectPtr<UTexture2D*> Texture, bool bUseTextureSize);                                              // [0x9767154] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetMaterial
	// void SetMaterial(TWeakObjectPtr<UMaterialInterface*> Material);                                                          // [0x9766b14] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.SetDesiredSize
	// void SetDesiredSize(FVector2f DesiredSize);                                                                              // [0x9766944] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkImageBlock.OnRep_Data
	// void OnRep_Data();                                                                                                       // [0x9765f58] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GetTint
	// FLinearColor GetTint();                                                                                                  // [0x9765c54] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GetTiling
	// TEnumAsByte<ESlateBrushTileType> GetTiling();                                                                            // [0x9765db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GetDesiredSize
	// FVector2f GetDesiredSize();                                                                                              // [0x58167b4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkImageBlock.GeResourceObject
	// TWeakObjectPtr<UObject*> GeResourceObject();                                                                             // [0x9765ba8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIFramework.UIFrameworkOverlay
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkOverlay : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FUIFrameworkOverlaySlotList)               ReplicatedSlotList                                          OFFSET(get<T>, {0xC8, 288, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkOverlay.RemoveWidget
	// void RemoveWidget(UUIFrameworkWidget* Widget);                                                                           // [0x976624c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkOverlay.AddWidget
	// void AddWidget(FUIFrameworkOverlaySlot Widget);                                                                          // [0x9765754] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkSimpleButton
/// Size: 0x0058 (0x0000C8 - 0x000120)
class UUIFrameworkSimpleButton : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FText)                                     Text                                                        OFFSET(get<T>, {0xC8, 24, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     OFFSET(get<T>, {0xE0, 48, 0, 0})
	SMember(FUIFrameworkClickEventArgument)            ClickEvent                                                  OFFSET(get<T>, {0x110, 16, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkSimpleButton.ServerClick
	// void ServerClick(APlayerController* PlayerController);                                                                   // [0x5999e54] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/UIFramework.UIFrameworkSimpleButton.OnRep_Message
	// void OnRep_Message();                                                                                                    // [0x9765fd0] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkSimpleButton.OnClick
	// void OnClick(FMVVMEventField Field);                                                                                     // [0x9765de4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkStackBox
/// Size: 0x0128 (0x0000C8 - 0x0001F0)
class UUIFrameworkStackBox : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FUIFrameworkStackBoxSlotList)              ReplicatedSlotList                                          OFFSET(get<T>, {0xD0, 288, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkStackBox.RemoveWidget
	// void RemoveWidget(UUIFrameworkWidget* Widget);                                                                           // [0x976634c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkStackBox.OnRep_Orientation
	// void OnRep_Orientation();                                                                                                // [0x9766054] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkStackBox.AddWidget
	// void AddWidget(FUIFrameworkStackBoxSlot Widget);                                                                         // [0x9765a34] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/UIFramework.UIFrameworkTextBase
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UUIFrameworkTextBase : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FText)                                     Text                                                        OFFSET(get<T>, {0xC8, 24, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     OFFSET(get<T>, {0xE0, 48, 0, 0})
	SMember(FLinearColor)                              TextColor                                                   OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       OverflowPolicy                                              OFFSET(get<T>, {0x121, 1, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkTextBase.SetTextColor
	// void SetTextColor(FLinearColor TextColor);                                                                               // [0x9766ff8] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBase.SetOverflowPolicy
	// void SetOverflowPolicy(ETextOverflowPolicy OverflowPolicy);                                                              // [0x9766ccc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBase.SetJustification
	// void SetJustification(TEnumAsByte<ETextJustify> Justification);                                                          // [0x9766a94] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_TextColor
	// void OnRep_TextColor();                                                                                                  // [0x976615c] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_OverflowPolicy
	// void OnRep_OverflowPolicy();                                                                                             // [0x97660ac] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_Message
	// void OnRep_Message();                                                                                                    // [0x976600c] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.OnRep_Justification
	// void OnRep_Justification();                                                                                              // [0x9765fa0] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetTextColor
	// FLinearColor GetTextColor();                                                                                             // [0x9765d9c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetText
	// FText GetText();                                                                                                         // [0x9765d4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetOverflowPolicy
	// ETextOverflowPolicy GetOverflowPolicy();                                                                                 // [0x9765d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBase.GetJustification
	// TEnumAsByte<ETextJustify> GetJustification();                                                                            // [0x9765ce8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIFramework.UIFrameworkTextBlock
/// Size: 0x0018 (0x000128 - 0x000140)
class UUIFrameworkTextBlock : public UUIFrameworkTextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector2f)                                 ShadowOffset                                                OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColor                                                 OFFSET(get<T>, {0x130, 16, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkTextBlock.SetShadowOffset
	// void SetShadowOffset(FVector2f ShadowOffset);                                                                            // [0x9766ea8] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBlock.SetShadowColor
	// void SetShadowColor(FLinearColor ShadowColor);                                                                           // [0x9766d4c] Final|BlueprintAuthorityOnly|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkTextBlock.OnRep_ShadowOffset
	// void OnRep_ShadowOffset();                                                                                               // [0x9766118] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBlock.OnRep_ShadowColor
	// void OnRep_ShadowColor();                                                                                                // [0x97660dc] Final|Native|Private 
	// Function /Script/UIFramework.UIFrameworkTextBlock.GetShadowOffset
	// FVector2f GetShadowOffset();                                                                                             // [0x9765d34] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/UIFramework.UIFrameworkTextBlock.GetShadowColor
	// FLinearColor GetShadowColor();                                                                                           // [0x9765d18] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/UIFramework.UIFrameworkUserWidget
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkUserWidget : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FUIFrameworkUserWidgetSlotList)            ReplicatedSlotList                                          OFFSET(get<T>, {0xC8, 288, 0, 0})


	/// Functions
	// Function /Script/UIFramework.UIFrameworkUserWidget.SetWidgetClass
	// void SetWidgetClass(TWeakObjectPtr<UClass*> Value);                                                                      // [0x9767304] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/UIFramework.UIFrameworkUserWidget.SetNamedSlot
	// void SetNamedSlot(FName SlotName, UUIFrameworkWidget* Widget);                                                           // [0x9766c08] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Struct /Script/UIFramework.UIFrameworkSimpleEventArgument
/// Size: 0x0010 (0x000000 - 0x000010)
class FUIFrameworkSimpleEventArgument : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(APlayerController*)                        PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UUIFrameworkWidget*)                       Sender                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkClickEventArgument
/// Size: 0x0000 (0x000010 - 0x000010)
class FUIFrameworkClickEventArgument : public FUIFrameworkSimpleEventArgument
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/UIFramework.UIFrameworkWidgetOwner
/// Size: 0x0018 (0x000000 - 0x000018)
class FUIFrameworkWidgetOwner : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(APlayerController*)                        PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGameInstance*)                            GameInstance                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UWorld*)                                   World                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkParentWidget
/// Size: 0x0010 (0x000000 - 0x000010)
class FUIFrameworkParentWidget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  Parent                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkSlotBase
/// Size: 0x001C (0x00000C - 0x000028)
class FUIFrameworkSlotBase : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UUIFrameworkWidget*)                       Widget                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      WidgetId                                                    OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      LocalPreviousWidgetId                                       OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkWidgetId
/// Size: 0x0008 (0x000000 - 0x000008)
class FUIFrameworkWidgetId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Key                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkSimpleSlot
/// Size: 0x0018 (0x000028 - 0x000040)
class FUIFrameworkSimpleSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkWidgetTreeEntry
/// Size: 0x0024 (0x00000C - 0x000030)
class FUIFrameworkWidgetTreeEntry : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UUIFrameworkWidget*)                       Parent                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UUIFrameworkWidget*)                       Child                                                       OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      ParentID                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      ChildId                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkWidgetTree
/// Size: 0x00F0 (0x000108 - 0x0001F8)
class FUIFrameworkWidgetTree : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	CMember(TArray<FUIFrameworkWidgetTreeEntry>)       Entries                                                     OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(AActor*)                                   ReplicatedOwner                                             OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkGameLayerSlot
/// Size: 0x0008 (0x000028 - 0x000030)
class FUIFrameworkGameLayerSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   ZOrder                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(EUIFrameworkInputMode)                     InputMode                                                   OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(EUIFrameworkGameLayerType)                 Type                                                        OFFSET(get<T>, {0x2D, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkGameLayerSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkGameLayerSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkGameLayerSlot>)         Entries                                                     OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkPlayerComponent*)              Owner                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkCanvasBoxSlot
/// Size: 0x0048 (0x000028 - 0x000070)
class FUIFrameworkCanvasBoxSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FAnchors)                                  Anchors                                                     OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FMargin)                                   Offsets                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FVector2D)                                 Alignment                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bSizeToContent                                              OFFSET(get<bool>, {0x6C, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkCanvasBoxSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkCanvasBoxSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkCanvasBoxSlot>)         Slots                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkCanvasBox*)                    Owner                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkImageBlockData
/// Size: 0x0040 (0x000000 - 0x000040)
class FUIFrameworkImageBlockData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FLinearColor)                              Tint                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ResourceObject                                              OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector2f)                                 DesiredSize                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TEnumAsByte<ESlateBrushTileType>)          Tiling                                                      OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseTextureSize                                             OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkOverlaySlot
/// Size: 0x0018 (0x000028 - 0x000040)
class FUIFrameworkOverlaySlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMargin)                                   Padding                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkOverlaySlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkOverlaySlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkOverlaySlot>)           Slots                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkOverlay*)                      Owner                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkStackBoxSlot
/// Size: 0x0020 (0x000028 - 0x000048)
class FUIFrameworkStackBoxSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(get<T>, {0x2C, 16, 0, 0})
	SMember(FSlateChildSize)                           Size                                                        OFFSET(get<T>, {0x3C, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkStackBoxSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkStackBoxSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkStackBoxSlot>)          Slots                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkStackBox*)                     Owner                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkUserWidgetSlot
/// Size: 0x0008 (0x000028 - 0x000030)
class FUIFrameworkUserWidgetSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SlotName                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkUserWidgetSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkUserWidgetSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkUserWidgetSlot>)        Slots                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkUserWidget*)                   Owner                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Enum /Script/UIFramework.EUIFrameworkGameLayerType
/// Size: 0x03
enum EUIFrameworkGameLayerType : uint8_t
{
	EUIFrameworkGameLayerType__Viewport0                                             = 0,
	EUIFrameworkGameLayerType__PlayerScreen1                                         = 1,
	EUIFrameworkGameLayerType__EUIFrameworkGameLayerType_MAX2                        = 2
};

/// Enum /Script/UIFramework.EUIFrameworkInputMode
/// Size: 0x03
enum EUIFrameworkInputMode : uint8_t
{
	EUIFrameworkInputMode__UI0                                                       = 0,
	EUIFrameworkInputMode__Game1                                                     = 1,
	EUIFrameworkInputMode__EUIFrameworkInputMode_MAX2                                = 2
};

