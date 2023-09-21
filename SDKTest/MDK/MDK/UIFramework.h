
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
	CMember(TWeakObjectPtr<UObject*>)                  ErrorResource                                               ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  LoadingResource                                             ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkPlayerComponent
/// Size: 0x0438 (0x0000A0 - 0x0004D8)
class UUIFrameworkPlayerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	SMember(FUIFrameworkGameLayerSlotList)             RootList                                                    ___ OFFSET(get<T>, {0xA8, 288, 0, 0})
	SMember(FUIFrameworkWidgetTree)                    WidgetTree                                                  ___ OFFSET(get<T>, {0x1C8, 504, 0, 0})
	CMember(UUIFrameworkPresenter*)                    Presenter                                                   ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(TSet<int32_t>)                             NetReplicationPending                                       ___ OFFSET(get<T>, {0x3C8, 80, 0, 0})
	CMember(TSet<int32_t>)                             AddPending                                                  ___ OFFSET(get<T>, {0x418, 80, 0, 0})
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
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	CMember(ESlateVisibility)                          Visibility                                                  ___ OFFSET(get<T>, {0x69, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetClass                                                 ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	SMember(FUIFrameworkWidgetId)                      ID                                                          ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   Wrapper                                                     ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FUIFrameworkParentWidget)                  AuthorityParent                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(UWidget*)                                  LocalUMGWidget                                              ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkButton
/// Size: 0x0058 (0x0000C8 - 0x000120)
class UUIFrameworkButton : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FUIFrameworkSimpleSlot)                    Slot                                                        ___ OFFSET(get<T>, {0xE0, 64, 0, 0})
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
	SMember(FUIFrameworkCanvasBoxSlotList)             ReplicatedSlotList                                          ___ OFFSET(get<T>, {0xC8, 288, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkColorBlock
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class UUIFrameworkColorBlock : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FVector2f)                                 DesiredSize                                                 ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkImageBlock
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UUIFrameworkImageBlock : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FUIFrameworkImageBlockData)                Data                                                        ___ OFFSET(get<T>, {0xC8, 64, 0, 0})
	DMember(bool)                                      bWaitForResourceToBeLoaded                                  ___ OFFSET(get<bool>, {0x108, 1, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkOverlay
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkOverlay : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FUIFrameworkOverlaySlotList)               ReplicatedSlotList                                          ___ OFFSET(get<T>, {0xC8, 288, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkSimpleButton
/// Size: 0x0058 (0x0000C8 - 0x000120)
class UUIFrameworkSimpleButton : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     ___ OFFSET(get<T>, {0xE0, 48, 0, 0})
	SMember(FUIFrameworkClickEventArgument)            ClickEvent                                                  ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkStackBox
/// Size: 0x0128 (0x0000C8 - 0x0001F0)
class UUIFrameworkStackBox : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	SMember(FUIFrameworkStackBoxSlotList)              ReplicatedSlotList                                          ___ OFFSET(get<T>, {0xD0, 288, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkTextBase
/// Size: 0x0060 (0x0000C8 - 0x000128)
class UUIFrameworkTextBase : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
	SMember(FLocalizableMessage)                       Message                                                     ___ OFFSET(get<T>, {0xE0, 48, 0, 0})
	SMember(FLinearColor)                              TextColor                                                   ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification                                               ___ OFFSET(get<T>, {0x120, 1, 0, 0})
	CMember(ETextOverflowPolicy)                       OverflowPolicy                                              ___ OFFSET(get<T>, {0x121, 1, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkTextBlock
/// Size: 0x0018 (0x000128 - 0x000140)
class UUIFrameworkTextBlock : public UUIFrameworkTextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector2f)                                 ShadowOffset                                                ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColor                                                 ___ OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/UIFramework.UIFrameworkUserWidget
/// Size: 0x0120 (0x0000C8 - 0x0001E8)
class UUIFrameworkUserWidget : public UUIFrameworkWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FUIFrameworkUserWidgetSlotList)            ReplicatedSlotList                                          ___ OFFSET(get<T>, {0xC8, 288, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkSimpleEventArgument
/// Size: 0x0010 (0x000000 - 0x000010)
class FUIFrameworkSimpleEventArgument : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(APlayerController*)                        PlayerController                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UUIFrameworkWidget*)                       Sender                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
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
	CMember(APlayerController*)                        PlayerController                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGameInstance*)                            GameInstance                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UWorld*)                                   World                                                       ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkParentWidget
/// Size: 0x0010 (0x000000 - 0x000010)
class FUIFrameworkParentWidget : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  Parent                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkSlotBase
/// Size: 0x001C (0x00000C - 0x000028)
class FUIFrameworkSlotBase : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UUIFrameworkWidget*)                       Widget                                                      ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      WidgetId                                                    ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      LocalPreviousWidgetId                                       ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkWidgetId
/// Size: 0x0008 (0x000000 - 0x000008)
class FUIFrameworkWidgetId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Key                                                         ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkSimpleSlot
/// Size: 0x0018 (0x000028 - 0x000040)
class FUIFrameworkSimpleSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x39, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkWidgetTreeEntry
/// Size: 0x0024 (0x00000C - 0x000030)
class FUIFrameworkWidgetTreeEntry : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UUIFrameworkWidget*)                       Parent                                                      ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UUIFrameworkWidget*)                       Child                                                       ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      ParentID                                                    ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FUIFrameworkWidgetId)                      ChildId                                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkWidgetTree
/// Size: 0x00F0 (0x000108 - 0x0001F8)
class FUIFrameworkWidgetTree : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	CMember(TArray<FUIFrameworkWidgetTreeEntry>)       Entries                                                     ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(AActor*)                                   ReplicatedOwner                                             ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkGameLayerSlot
/// Size: 0x0008 (0x000028 - 0x000030)
class FUIFrameworkGameLayerSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   ZOrder                                                      ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(EUIFrameworkInputMode)                     InputMode                                                   ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(EUIFrameworkGameLayerType)                 Type                                                        ___ OFFSET(get<T>, {0x2D, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkGameLayerSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkGameLayerSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkGameLayerSlot>)         Entries                                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkPlayerComponent*)              Owner                                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkCanvasBoxSlot
/// Size: 0x0048 (0x000028 - 0x000070)
class FUIFrameworkCanvasBoxSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FAnchors)                                  Anchors                                                     ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FMargin)                                   Offsets                                                     ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FVector2D)                                 Alignment                                                   ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   ZOrder                                                      ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bSizeToContent                                              ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkCanvasBoxSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkCanvasBoxSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkCanvasBoxSlot>)         Slots                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkCanvasBox*)                    Owner                                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkImageBlockData
/// Size: 0x0040 (0x000000 - 0x000040)
class FUIFrameworkImageBlockData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FLinearColor)                              Tint                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ResourceObject                                              ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FVector2f)                                 DesiredSize                                                 ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TEnumAsByte<ESlateBrushTileType>)          Tiling                                                      ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bUseTextureSize                                             ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkOverlaySlot
/// Size: 0x0018 (0x000028 - 0x000040)
class FUIFrameworkOverlaySlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkOverlaySlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkOverlaySlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkOverlaySlot>)           Slots                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkOverlay*)                      Owner                                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkStackBoxSlot
/// Size: 0x0020 (0x000028 - 0x000048)
class FUIFrameworkStackBoxSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
	SMember(FSlateChildSize)                           Size                                                        ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkStackBoxSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkStackBoxSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkStackBoxSlot>)          Slots                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkStackBox*)                     Owner                                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkUserWidgetSlot
/// Size: 0x0008 (0x000028 - 0x000030)
class FUIFrameworkUserWidgetSlot : public FUIFrameworkSlotBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SlotName                                                    ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/UIFramework.UIFrameworkUserWidgetSlotList
/// Size: 0x0018 (0x000108 - 0x000120)
class FUIFrameworkUserWidgetSlotList : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FUIFrameworkUserWidgetSlot>)        Slots                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UUIFrameworkUserWidget*)                   Owner                                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
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

