
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/DynamicUI.DynamicUITransitionableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUITransitionableWidgetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DynamicUI.DynamicUIDirectorBase
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ADynamicUIDirectorBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<UDynamicUIScene*>)                  DefaultScenes                                               OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             OwningLocalPlayer                                           OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      bEnabledDuringReplay                                        OFFSET(get<bool>, {0x2A8, 1, 0, 0})


	/// Functions
	// Function /Script/DynamicUI.DynamicUIDirectorBase.RemoveScene
	// void RemoveScene(UDynamicUIScene* Scene);                                                                                // [0x6bcb430] Final|Native|Public|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController
	// APlayerController* GetOwningLocalPlayerController();                                                                     // [0x2f01734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer
	// ULocalPlayer* GetOwningLocalPlayer();                                                                                    // [0x6bcb408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DynamicUI.DynamicUIDirectorBase.AddScene
	// void AddScene(UDynamicUIScene* Scene);                                                                                   // [0x14336a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DynamicUI.DynamicUIConstraintBase
/// Size: 0x0048 (0x000028 - 0x000070)
class UDynamicUIConstraintBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector2D)                                 Offset                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(UDynamicUIConstraintOverrideBase*)         ConstraintOverride                                          OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bUseOffset                                                  OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(bool)                                      bUseOverride                                                OFFSET(get<bool>, {0x68, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUIConstraintPosition
/// Size: 0x0018 (0x000070 - 0x000088)
class UDynamicUIConstraintPosition : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector2D)                                 Position                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(EDynamicUIAnchor)                          Anchor                                                      OFFSET(get<T>, {0x80, 4, 0, 0})
	DMember(bool)                                      bUseSafeZone                                                OFFSET(get<bool>, {0x84, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIConstraintAlignment
/// Size: 0x0018 (0x000070 - 0x000088)
class UDynamicUIConstraintAlignment : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           OFFSET(get<T>, {0x71, 1, 0, 0})
	CMember(EDynamicUIAnchor)                          Anchor                                                      OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FDynamicUIAspectRatio)                     MaxAspectRatio                                              OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bUseSafeZone                                                OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bUseMaxAspectRatio                                          OFFSET(get<bool>, {0x80, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUIConstraintWidget
/// Size: 0x0088 (0x000070 - 0x0000F8)
class UDynamicUIConstraintWidget : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(EDynamicUIAnchor)                          Anchor                                                      OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FDynamicUIWidgetTarget)                    TargetWidget                                                OFFSET(getStruct<T>, {0x78, 96, 0, 0})
	CMember(EDynamicUIAnchor)                          TargetAnchor                                                OFFSET(get<T>, {0xD8, 4, 0, 0})
	CMember(TArray<UDynamicUIConstraintBase*>)         Fallbacks                                                   OFFSET(get<T>, {0xE0, 16, 0, 0})
	DMember(bool)                                      bConstrainToUnallowedWidgets                                OFFSET(get<bool>, {0xF0, 1, 1, 0})
	DMember(bool)                                      bUseFallbacks                                               OFFSET(get<bool>, {0xF0, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUIConstraintContainer
/// Size: 0x0028 (0x000070 - 0x000098)
class UDynamicUIConstraintContainer : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FDynamicUIWidgetTarget>)            WidgetsToContain                                            OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMargin)                                   Padding                                                     OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bMustMatchAllWidgets                                        OFFSET(get<bool>, {0x90, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIConstraintReplace
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UDynamicUIConstraintReplace : public UDynamicUIConstraintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FDynamicUIWidgetTarget)                    TargetWidget                                                OFFSET(getStruct<T>, {0x70, 96, 0, 0})
	CMember(TArray<UDynamicUIConstraintBase*>)         Fallbacks                                                   OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      bUseFallbacks                                               OFFSET(get<bool>, {0xE0, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIConstraintOverrideBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUIConstraintOverrideBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DynamicUI.DynamicUIConstraintPlatformOverride
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDynamicUIConstraintPlatformOverride : public UDynamicUIConstraintOverrideBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<FName, UDynamicUIConstraintBase*>)    PlatformVisibilityControls                                  OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<ECommonInputType, UDynamicUIConstraintBase*>) InputTypeVisibilityControls                         OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIManager
/// Size: 0x0068 (0x000030 - 0x000098)
class UDynamicUIManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<TWeakObjectPtr, FDynamicUIPlayerData>) PlayerDataMap                                              OFFSET(get<T>, {0x48, 80, 0, 0})


	/// Functions
	// Function /Script/DynamicUI.DynamicUIManager.RemoveScenes
	// void RemoveScenes(TArray<UDynamicUIScene*> Scenes, APlayerController*& Player);                                          // [0x6bcbd70] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer
	// void RemoveSceneFromFirstLocalPlayer(UDynamicUIScene* Scene);                                                            // [0x6bcb92c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.RemoveScene
	// void RemoveScene(UDynamicUIScene* Scene, APlayerController*& Player);                                                    // [0x6bcb4b0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer
	// void AddSceneToFirstLocalPlayer(UDynamicUIScene* Scene);                                                                 // [0x6bcaed0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddScenes
	// void AddScenes(TArray<UDynamicUIScene*> Scenes, APlayerController*& Player);                                             // [0x6bcb2e0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/DynamicUI.DynamicUIManager.AddScene
	// void AddScene(UDynamicUIScene* Scene, APlayerController*& Player);                                                       // [0x6bcaa88] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/DynamicUI.DynamicUIScene
/// Size: 0x0038 (0x000030 - 0x000068)
class UDynamicUIScene : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(char)                                      LayerID                                                     OFFSET(get<char>, {0x30, 1, 0, 0})
	CMember(TArray<FDynamicUIAllowed>)                 Allowed                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UDynamicUIUnallowBase*>)            Unallow                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FDynamicUIPreload>)                 Preload                                                     OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UDynamicUISizeBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UDynamicUISizeOverrideBase*)               SizeOverride                                                OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bUseOverride                                                OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bUseRenderTransform                                         OFFSET(get<bool>, {0x58, 1, 1, 1})
};

/// Class /Script/DynamicUI.DynamicUISizeFixed
/// Size: 0x0008 (0x000060 - 0x000068)
class UDynamicUISizeFixed : public UDynamicUISizeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector2f)                                 Size                                                        OFFSET(getStruct<T>, {0x60, 8, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeScale
/// Size: 0x0008 (0x000060 - 0x000068)
class UDynamicUISizeScale : public UDynamicUISizeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector2f)                                 Scale                                                       OFFSET(getStruct<T>, {0x60, 8, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeMatchWidget
/// Size: 0x0080 (0x000060 - 0x0000E0)
class UDynamicUISizeMatchWidget : public UDynamicUISizeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FDynamicUIWidgetTarget)                    TargetWidget                                                OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	CMember(EDynamicUISizeMatch)                       MatchType                                                   OFFSET(get<T>, {0xC0, 4, 0, 0})
	CMember(TArray<UDynamicUISizeBase*>)               Fallbacks                                                   OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bUseFallbacks                                               OFFSET(get<bool>, {0xD8, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUISizeOverrideBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UDynamicUISizeOverrideBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/DynamicUI.DynamicUISizeOverridePlatform
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UDynamicUISizeOverridePlatform : public UDynamicUISizeOverrideBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<FName, UDynamicUISizeBase*>)          PlatformOverrides                                           OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<ECommonInputType, UDynamicUISizeBase*>) InputTypeOverrides                                        OFFSET(get<T>, {0x78, 80, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIUnallowBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UDynamicUIUnallowBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EDynamicUIUnallowedBehavior)               Behavior                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIUnallowWidget
/// Size: 0x0068 (0x000030 - 0x000098)
class UDynamicUIUnallowWidget : public UDynamicUIUnallowBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FDynamicUIWidgetTarget)                    Widget                                                      OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	DMember(bool)                                      bTargetAll                                                  OFFSET(get<bool>, {0x90, 1, 1, 0})
};

/// Class /Script/DynamicUI.DynamicUIUnallowLayer
/// Size: 0x0008 (0x000030 - 0x000038)
class UDynamicUIUnallowLayer : public UDynamicUIUnallowBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(char)                                      LayerID                                                     OFFSET(get<char>, {0x30, 1, 0, 0})
	CMember(EDynamicUIUnallowLayerComparison)          Comparison                                                  OFFSET(get<T>, {0x31, 1, 0, 0})
};

/// Class /Script/DynamicUI.DynamicUIVisualizerWidget
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UDynamicUIVisualizerWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(TArray<UDynamicUIScene*>)                  Scenes                                                      OFFSET(get<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bRefresh                                                    OFFSET(get<bool>, {0x2B8, 1, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIUnallowed
/// Size: 0x0030 (0x000000 - 0x000030)
class FDynamicUIUnallowed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Widget                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FName)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	CMember(EDynamicUIUnallowedBehavior)               Behavior                                                    OFFSET(get<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bTargetAll                                                  OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bUseUniqueID                                                OFFSET(get<bool>, {0x28, 1, 1, 1})
};

/// Struct /Script/DynamicUI.DynamicUIManagerDebug
/// Size: 0x0001 (0x000000 - 0x000001)
class FDynamicUIManagerDebug : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DynamicUI.DynamicUIPanelDebug
/// Size: 0x0001 (0x000000 - 0x000001)
class FDynamicUIPanelDebug : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DynamicUI.DynamicUIAllowed
/// Size: 0x0068 (0x000000 - 0x000068)
class FDynamicUIAllowed : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Widget                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EDynamicUIZOrder)                          ZOrder                                                      OFFSET(get<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   CustomZOrder                                                OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FName)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomain                                                OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(UDynamicUIConstraintBase*)                 LayoutConstraint                                            OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UDynamicUISizeBase*)                       SizeModifier                                                OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(char)                                      LayerIDOverride                                             OFFSET(get<char>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsUnique                                                   OFFSET(get<bool>, {0x61, 1, 1, 0})
	DMember(bool)                                      bUseActionDomain                                            OFFSET(get<bool>, {0x61, 1, 1, 1})
	DMember(bool)                                      bUseLayerOverride                                           OFFSET(get<bool>, {0x61, 1, 1, 2})
};

/// Struct /Script/DynamicUI.DynamicUIAspectRatio
/// Size: 0x0008 (0x000000 - 0x000008)
class FDynamicUIAspectRatio : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EDynamicUIAspectRatioType)                 AspectRatio                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     CustomAspectRatio                                           OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIPreload
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicUIPreload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Widget                                                      OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUISceneData
/// Size: 0x0001 (0x000000 - 0x000001)
class FDynamicUISceneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/DynamicUI.DynamicUIDirectorData
/// Size: 0x0030 (0x000000 - 0x000030)
class FDynamicUIDirectorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   DirectorClass                                               OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Instance                                                    OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIPlayerData
/// Size: 0x0090 (0x000000 - 0x000090)
class FDynamicUIPlayerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<FString, FDynamicUIDirectorData>)     ActiveDirectors                                             OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Struct /Script/DynamicUI.DynamicUIWidgetTarget
/// Size: 0x0060 (0x000000 - 0x000060)
class FDynamicUIWidgetTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     WidgetPath                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WidgetClass                                                 OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FName)                                     UniqueID                                                    OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(bool)                                      bUseUniqueID                                                OFFSET(get<bool>, {0x2C, 1, 1, 0})
};

/// Enum /Script/DynamicUI.EDynamicUIStrength
/// Size: 0x05
enum EDynamicUIStrength : uint8_t
{
	EDynamicUIStrength__Weak0                                                        = 0,
	EDynamicUIStrength__Medium1                                                      = 1,
	EDynamicUIStrength__Strong2                                                      = 2,
	EDynamicUIStrength__Required3                                                    = 3,
	EDynamicUIStrength__EDynamicUIStrength_MAX4                                      = 4
};

/// Enum /Script/DynamicUI.EDynamicUIAnchor
/// Size: 0x10
enum EDynamicUIAnchor : uint8_t
{
	EDynamicUIAnchor__TopLeft0                                                       = 0,
	EDynamicUIAnchor__TopCenter1                                                     = 1,
	EDynamicUIAnchor__TopRight2                                                      = 2,
	EDynamicUIAnchor__CenterLeft3                                                    = 3,
	EDynamicUIAnchor__CenterCenter4                                                  = 4,
	EDynamicUIAnchor__CenterRight5                                                   = 5,
	EDynamicUIAnchor__BottomLeft6                                                    = 6,
	EDynamicUIAnchor__BottomCenter7                                                  = 7,
	EDynamicUIAnchor__BottomRight8                                                   = 8,
	EDynamicUIAnchor__MAX9                                                           = 9
};

/// Enum /Script/DynamicUI.EDynamicUIAspectRatioType
/// Size: 0x08
enum EDynamicUIAspectRatioType : uint8_t
{
	EDynamicUIAspectRatioType__AspectRatio_10                                        = 0,
	EDynamicUIAspectRatioType__AspectRatio_41                                        = 1,
	EDynamicUIAspectRatioType__AspectRatio_52                                        = 2,
	EDynamicUIAspectRatioType__AspectRatio_163                                       = 3,
	EDynamicUIAspectRatioType__AspectRatio_164                                       = 4,
	EDynamicUIAspectRatioType__AspectRatio_215                                       = 5,
	EDynamicUIAspectRatioType__Custom6                                               = 6,
	EDynamicUIAspectRatioType__EDynamicUIAspectRatioType_MAX7                        = 7
};

/// Enum /Script/DynamicUI.EDynamicUISizeMatch
/// Size: 0x04
enum EDynamicUISizeMatch : uint8_t
{
	EDynamicUISizeMatch__Both0                                                       = 0,
	EDynamicUISizeMatch__Width1                                                      = 1,
	EDynamicUISizeMatch__Height2                                                     = 2,
	EDynamicUISizeMatch__EDynamicUISizeMatch_MAX3                                    = 3
};

/// Enum /Script/DynamicUI.EDynamicUIZOrder
/// Size: 0x09
enum EDynamicUIZOrder : uint32_t
{
	EDynamicUIZOrder__Back0                                                          = 1000,
	EDynamicUIZOrder__Middle1                                                        = 2000,
	EDynamicUIZOrder__Front2                                                         = 3000,
	EDynamicUIZOrder__Custom3                                                        = 2500,
	EDynamicUIZOrder__CustomMin4                                                     = 0,
	EDynamicUIZOrder__CustomMax5                                                     = 5000,
	EDynamicUIZOrder__Loading6                                                       = 30000,
	EDynamicUIZOrder__Top7                                                           = 50000,
	EDynamicUIZOrder__EDynamicUIZOrder_MAX8                                          = 50001
};

/// Enum /Script/DynamicUI.EDynamicUIUnallowedBehavior
/// Size: 0x04
enum EDynamicUIUnallowedBehavior : uint8_t
{
	EDynamicUIUnallowedBehavior__Hide0                                               = 0,
	EDynamicUIUnallowedBehavior__Collapse1                                           = 1,
	EDynamicUIUnallowedBehavior__Destroy2                                            = 2,
	EDynamicUIUnallowedBehavior__EDynamicUIUnallowedBehavior_MAX3                    = 3
};

/// Enum /Script/DynamicUI.EDynamicUIDebugDisplayMode
/// Size: 0x04
enum EDynamicUIDebugDisplayMode : uint8_t
{
	EDynamicUIDebugDisplayMode__Hide0                                                = 0,
	EDynamicUIDebugDisplayMode__ShowSelected1                                        = 1,
	EDynamicUIDebugDisplayMode__ShowAll2                                             = 2,
	EDynamicUIDebugDisplayMode__EDynamicUIDebugDisplayMode_MAX3                      = 3
};

/// Enum /Script/DynamicUI.EDynamicUIUnallowLayerComparison
/// Size: 0x07
enum EDynamicUIUnallowLayerComparison : uint8_t
{
	EDynamicUIUnallowLayerComparison__Equal0                                         = 0,
	EDynamicUIUnallowLayerComparison__NotEqual1                                      = 1,
	EDynamicUIUnallowLayerComparison__Less2                                          = 2,
	EDynamicUIUnallowLayerComparison__LessOrEqual3                                   = 3,
	EDynamicUIUnallowLayerComparison__Greater4                                       = 4,
	EDynamicUIUnallowLayerComparison__GreaterOrEqual5                                = 5,
	EDynamicUIUnallowLayerComparison__EDynamicUIUnallowLayerComparison_MAX6          = 6
};

