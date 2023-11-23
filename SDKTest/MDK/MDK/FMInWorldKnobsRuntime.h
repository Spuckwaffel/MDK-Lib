
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FabricRuntime
/// dependency: FortniteGame

/// Class /Script/FMInWorldKnobsRuntime.FabricChildActorComponent
/// Size: 0x0070 (0x0002F0 - 0x000360)
class UFabricChildActorComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UFMDeviceCableModulatorPortComponent*)     InWorldKnobModulatorPort                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bUseScreenGrid                                              OFFSET(get<bool>, {0x308, 1, 0, 0})
	SMember(FVector2D)                                 ScreenGridPosition                                          OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FModulatorPortSaveData)                    ModulatorPortSaveData                                       OFFSET(getStruct<T>, {0x320, 32, 0, 0})
	CMember(UClass*)                                   CableManagerClassForModulatorPorts                          OFFSET(get<T>, {0x358, 8, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.OnModulatorPortDisconnected
	// void OnModulatorPortDisconnected(UFMDeviceCablePortComponent* DisconnectedPort);                                         // [0xa51dd60] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.OnModulatorPortConnected
	// void OnModulatorPortConnected(UFMDeviceCablePortComponent* ConnectedPort);                                               // [0xa51dd60] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetKnobOptionKey
	// FString GetKnobOptionKey();                                                                                              // [0xa51a9c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsInWorldKnobActorBase
	// AFMInWorldKnobActorBase* GetChildActorAsInWorldKnobActorBase();                                                          // [0xa51a5ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsFabricInteractable
	// TScriptInterface<Class> GetChildActorAsFabricInteractable();                                                             // [0xa51a5b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.GetChildActorAsFabricButton
	// AFabricButtonBase* GetChildActorAsFabricButton();                                                                        // [0xa51a594] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricChildActorComponent.CreateModulatorPortIfNeeded
	// UFMDeviceCableModulatorPortComponent* CreateModulatorPortIfNeeded();                                                     // [0xa51a570] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.FabricScreenComponent
/// Size: 0x0090 (0x0002A0 - 0x000330)
class UFabricScreenComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMulticastInlineDelegate)                  OnWidgetAdded                                               OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	CMember(TWeakObjectPtr<UFabricScreenWidget*>)      ScreenWidget                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UWidgetComponent*)                         ScreenWidgetComponent                                       OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TMap<UFMInWorldKnobActorCopyComponent*, FScreenWidgetLayoutInfo>) CopyComponentsToWidget               OFFSET(get<T>, {0x2D8, 80, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.SnapUnrealLocationToScreenGrid
	// FVector SnapUnrealLocationToScreenGrid(FVector UnrealPosition);                                                          // [0xa51ee60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.SetScreenSize
	// void SetScreenSize(int32_t InWidth, int32_t InHeight);                                                                   // [0xa51ebb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.OnCopiedKnobActorSet
	// void OnCopiedKnobActorSet(UFMInWorldKnobActorCopyComponent* CopyComponent, AFMInWorldKnobActorBase* NewKnobActor);       // [0xa51bad0] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.Initialize
	// void Initialize(UWidgetComponent* InScreenWidgetComponent, int32_t InWidth, int32_t InHeight, UFabricScreenLayoutDataAsset* ScreenLayout); // [0xa51b688] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.GetScreenGridWidth
	// int32_t GetScreenGridWidth();                                                                                            // [0x59fefe0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.GetScreenGridHeight
	// int32_t GetScreenGridHeight();                                                                                           // [0xa51b010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.ConvertUnrealLocationToGridPosition
	// FVector2D ConvertUnrealLocationToGridPosition(FVector UnrealPosition);                                                   // [0xa51a384] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricScreenComponent.ConvertGridPositionToUnrealLocation
	// FVector ConvertGridPositionToUnrealLocation(FVector2D GridPosition);                                                     // [0xa51a21c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMInWorldKnobsRuntime.FabricScreenLayoutDataAsset
/// Size: 0x0018 (0x000030 - 0x000048)
class UFabricScreenLayoutDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FFabricScreenLayout>)               Layout                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UClass*)                                   FabricScreenWidgetClass                                     OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricUserOptionPresetAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FFabricUserOptionPresetCollection)         UserOptionPreset                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveModulatable
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFabricUserOptionSaveModulatable : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent
/// Size: 0x0168 (0x0000A0 - 0x000208)
class UFabricUserOptionSaveComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TArray<FString>)                           UserOptionsToSave                                           OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(int32_t)                                   MaxSaveSlots                                                OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	SMember(FString)                                   SaveIndexParam                                              OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<UFabricUserOptionPresetAsset*>)     PresetAssets                                                OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FString)                                   PresetIndexParam                                            OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FString)                                   ApplyIndexImmediatelyToggleParam                            OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveOverridesChanged                                    OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(ABuildingActor*)                           Owner                                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(UFabricUserOptionSaveModulatable*)         UserOptionSaveModulatable                                   OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<FFabricUserOptionSaveData>)         Presets                                                     OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FFabricUserOptionSaveData>)         Saves                                                       OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TSet<FString>)                             FloatUserOptions                                            OFFSET(get<T>, {0x148, 80, 0, 0})
	DMember(int32_t)                                   ActiveSaveIndex                                             OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	DMember(int32_t)                                   ActivePresetIndex                                           OFFSET(get<int32_t>, {0x19C, 4, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetSaveSlot
	// void SetSaveSlot(int32_t SaveSlotIndex);                                                                                 // [0xa51eb38] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetPreset
	// void SetPreset(int32_t PresetIndex);                                                                                     // [0xa51eab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.SetMusicClock
	// void SetMusicClock(UMusicClockComponent* MusicClockComponent);                                                           // [0xa51e934] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                               // [0xa51b934] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.OnActiveOverridesChanged__DelegateSignature
	// void OnActiveOverridesChanged__DelegateSignature();                                                                      // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.IsApplyingOverrides
	// bool IsApplyingOverrides();                                                                                              // [0xa51b7c4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.HasOverrideForParam
	// bool HasOverrideForParam(FString Param);                                                                                 // [0xa51b074] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveComponent.GetOverrideForParam
	// FString GetOverrideForParam(FString Param);                                                                              // [0xa51aa08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldCableOptionsComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFMInWorldCableOptionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase
/// Size: 0x0110 (0x000290 - 0x0003A0)
class AFMInWorldKnobActorBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FMulticastInlineDelegate)                  OnModulatedPropertyValueChanged                             OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobRuntimeValueChanged                                   OFFSET(getStruct<T>, {0x2B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobSerializedValueChanged                                OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderConnectionChanged                            OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	SMember(FString)                                   OptionKey                                                   OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FText)                                     OverriddenTitle                                             OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
	DMember(bool)                                      bCanBeModulated                                             OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bKnobEnabled                                                OFFSET(get<bool>, {0x311, 1, 0, 0})
	DMember(bool)                                      bKnobDisplayOnly                                            OFFSET(get<bool>, {0x312, 1, 0, 0})
	CMember(USceneComponent*)                          ModulatorPortParent                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UFMDeviceCableModulatorPortComponent*)     ModulatorPort                                               OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UPlaylistUserOptionBase*)                  MyUserOption                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    CurrentFloatProviders                                       OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TWeakObjectPtr<UFabricFloatProviderBase*>) ActiveFloatProvider                                         OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USceneComponent*)                          HitComponent                                                OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        InteractingController                                       OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(EFabricInteractableType)                   InteractableType                                            OFFSET(get<T>, {0x360, 1, 0, 0})
	CMember(TWeakObjectPtr<UFabricInteractableViewModel*>) WidgetViewModel                                         OFFSET(get<T>, {0x364, 8, 0, 0})
	CMember(TArray<FText>)                             OptionLabels                                                OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(TArray<FString>)                           OptionValues                                                OFFSET(get<T>, {0x380, 16, 0, 0})
	DMember(int32_t)                                   SerializedOptionIndex                                       OFFSET(get<int32_t>, {0x390, 4, 0, 0})
	DMember(int32_t)                                   CurrentOptionIndex                                          OFFSET(get<int32_t>, {0x394, 4, 0, 0})
	DMember(float)                                     ClampedKnobValue                                            OFFSET(get<float>, {0x398, 4, 0, 0})
	DMember(bool)                                      bTrackingInput                                              OFFSET(get<bool>, {0x39C, 1, 0, 0})
	DMember(bool)                                      bIsVisibilityBound                                          OFFSET(get<bool>, {0x39D, 1, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateInteractableVisuals
	// void UpdateInteractableVisuals(bool bInteractable);                                                                      // [0xa51f158] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateFocusVisuals
	// void UpdateFocusVisuals(bool bFocused);                                                                                  // [0xa51f0d4] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateEnabledVisuals
	// void UpdateEnabledVisuals(bool bEnabled);                                                                                // [0xa51f050] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.UpdateDisplayOnlyVisuals
	// void UpdateDisplayOnlyVisuals(bool bDisplayOnly);                                                                        // [0xa51efcc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.StopTrackingInput
	// void StopTrackingInput();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.StartTrackingInput
	// void StartTrackingInput(APlayerController* PlayerController);                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetWidgetViewModel
	// void SetWidgetViewModel(UFabricInteractableViewModel* ViewModel);                                                        // [0xa51ede0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetTitle
	// void SetTitle(FText& Title);                                                                                             // [0xa51ed40] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetSelectedIndex
	// void SetSelectedIndex(int32_t Index, bool SnapToSelection);                                                              // [0xa51ec78] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetNumberOptions
	// void SetNumberOptions(int32_t NumberOptions);                                                                            // [0xa51ea34] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetKnobEnabled
	// void SetKnobEnabled(bool bEnabled);                                                                                      // [0xa51e884] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetKnobDisplayOnly
	// void SetKnobDisplayOnly(bool bDisplayOnly);                                                                              // [0xa51e7d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.SetCurrentKnobPosition
	// void SetCurrentKnobPosition(float KnobPosition);                                                                         // [0x877a998] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.ResetToDefaultValue
	// void ResetToDefaultValue(APlayerController* PlayerController);                                                           // [0xa51e530] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.ReceiveOnWidgetViewModelSet
	// void ReceiveOnWidgetViewModelSet();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnReceiveFloatProvidersFromPort
	// void OnReceiveFloatProvidersFromPort(TArray<UFabricFloatProviderBase*>& FloatProvider);                                  // [0xa51de04] Final|Native|Private|HasOutParms 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnKnobIsVisible
	// void OnKnobIsVisible(bool bInIsVisible);                                                                                 // [0xa51dce0] Final|Native|Protected 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.OnFloatProviderFloatUpdated
	// void OnFloatProviderFloatUpdated(float NewFloat);                                                                        // [0xa51bb94] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.KnobValueChanged
	// void KnobValueChanged(int32_t NewIndex, bool SnapToSelection, APlayerController* PlayerController);                      // [0xa51b804] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.IsOverriddenByPort
	// bool IsOverriddenByPort();                                                                                               // [0xa51b7dc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.HitComponentUpdated
	// void HitComponentUpdated(USceneComponent* NewHitComponent);                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.HasActiveFloatProvider
	// bool HasActiveFloatProvider();                                                                                           // [0xa51b050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetWidgetViewModel
	// UFabricInteractableViewModel* GetWidgetViewModel();                                                                      // [0xa51b028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetNumberOptions
	// int32_t GetNumberOptions();                                                                                              // [0x3249a10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetInteractingController
	// APlayerController* GetInteractingController();                                                                           // [0xa51a9a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetHitComponent
	// USceneComponent* GetHitComponent();                                                                                      // [0x976c20c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueLabel
	// FText GetCurrentValueLabel();                                                                                            // [0xa51a95c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsString
	// FString GetCurrentValueAsString();                                                                                       // [0xa51a91c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsName
	// FName GetCurrentValueAsName();                                                                                           // [0xa51a8f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsInt
	// int32_t GetCurrentValueAsInt();                                                                                          // [0xa51a894] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsFloat
	// float GetCurrentValueAsFloat();                                                                                          // [0xa51a86c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsEnum
	// char GetCurrentValueAsEnum();                                                                                            // [0xa51a7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentValueAsBool
	// bool GetCurrentValueAsBool();                                                                                            // [0xa51a7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCurrentOptionIndex
	// int32_t GetCurrentOptionIndex();                                                                                         // [0xa51a788] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCopyWidgetClassInternal
	// UClass* GetCopyWidgetClassInternal();                                                                                    // [0xa51a704] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetCopyClassInternal
	// UClass* GetCopyClassInternal();                                                                                          // [0x1aeaa38] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.GetConsumeInteractionFromChildInteractable
	// bool GetConsumeInteractionFromChildInteractable(APlayerController* PlayerController);                                    // [0xa51a610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.CopyAttributesFromOtherKnobInternal
	// void CopyAttributesFromOtherKnobInternal(AFMInWorldKnobActorBase* OtherKnob);                                            // [0x8727824] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorBase.CopyAttributesFromOtherKnob
	// void CopyAttributesFromOtherKnob(AFMInWorldKnobActorBase* OtherKnob);                                                    // [0xa51a4f0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent
/// Size: 0x0120 (0x000360 - 0x000480)
class UFMInWorldKnobActorCopyComponent : public UFabricChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FMulticastInlineDelegate)                  OnModulatedPropertyValueChanged                             OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobRuntimeValueChanged                                   OFFSET(getStruct<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobSerializedValueChanged                                OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderConnectionChanged                            OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnKnobActorSet                                              OFFSET(getStruct<T>, {0x3B8, 16, 0, 0})
	CMember(UClass*)                                   DefaultKnobActorClass                                       OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(AFMInWorldKnobActorBase*)                  InWorldKnobActor                                            OFFSET(get<T>, {0x3D0, 8, 0, 0})
	SMember(FString)                                   OptionKey                                                   OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})
	SMember(FText)                                     OverriddenTitle                                             OFFSET(getStruct<T>, {0x3E8, 24, 0, 0})
	DMember(bool)                                      bCanBeModulated                                             OFFSET(get<bool>, {0x400, 1, 0, 0})
	DMember(bool)                                      bKnobEnabled                                                OFFSET(get<bool>, {0x401, 1, 0, 0})
	CMember(UPlaylistUserOptionBase*)                  OuterUserOption                                             OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UPlaylistUserOptionBase*)                  CopiedUserOption                                            OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.SetCopiedInWorldKnob
	// void SetCopiedInWorldKnob(UObject* InWorldKnobObject);                                                                   // [0xa51e5b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobSerializedValueChanged
	// void OnInWorldKnobSerializedValueChanged(FString Value, UPlaylistUserOptionBase* Option, APlayerController* PlayerController); // [0xa51d654] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobRuntimeValueChanged
	// void OnInWorldKnobRuntimeValueChanged(FString Value, UPlaylistUserOptionBase* Option);                                   // [0xa51c978] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobModulatedPropertyValueChanged
	// void OnInWorldKnobModulatedPropertyValueChanged(FString Value, UObject* ModulatorObject);                                // [0xa51bcd8] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.OnInWorldKnobFloatProviderConnectionChanged
	// void OnInWorldKnobFloatProviderConnectionChanged(bool bConnected, UObject* ModulatorObject);                             // [0xa51bc14] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.GetCurrentKnobValueBP
	// FString GetCurrentKnobValueBP();                                                                                         // [0xa51a73c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobActorCopyComponent.ClearCopiedInWorldKnob
	// void ClearCopiedInWorldKnob();                                                                                           // [0xa51a208] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMInWorldKnobsRuntime.InWorldKnobInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UInWorldKnobInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent
/// Size: 0x0208 (0x0000A0 - 0x0002A8)
class UFMInWorldKnobOptionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FMulticastInlineDelegate)                  OnInitialKnobValuesLoaded                                   OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllKnobsLoaded                                            OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyKnobRuntimeValueChanged                                OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyKnobSerializedValueChanged                             OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(TSet<UObject*>)                            InWorldKnobInterfaceObjects                                 OFFSET(get<T>, {0xE8, 80, 0, 0})
	CMember(TArray<UObject*>)                          ReplicatedInWorldKnobInterfaceObjects                       OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<UObject*>)                          ReplicatedFabricInteractableObjects                         OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<UFMDeviceCableModulatorPortComponent*>) ReplicatedModulatorPorts                                OFFSET(get<T>, {0x158, 16, 0, 0})
	CMember(ABuildingActor*)                           BuildingActorOwner                                          OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(UClass*)                                   OwnerClass                                                  OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(UFabricUserOptionSaveComponent*)           SaveComponent                                               OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(TMap<FString, UPlaylistUserOptionBase*>)   PropertiesEditedByUserOptions                               OFFSET(get<T>, {0x180, 80, 0, 0})
	CMember(TMap<FString, UObject*>)                   OptionKeyToInWorldKnobObject                                OFFSET(get<T>, {0x1D0, 80, 0, 0})
	CMember(TMap<FString, UFMDeviceCableModulatorPortComponent*>) OptionKeyToModulatorPort                         OFFSET(get<T>, {0x220, 80, 0, 0})
	CMember(TArray<UFabricModulatable*>)               PendingFabricModulatables                                   OFFSET(get<T>, {0x270, 16, 0, 0})
	SMember(FTimerHandle)                              ActorSaveRequestTimer                                       OFFSET(getStruct<T>, {0x280, 8, 0, 0})


	/// Functions
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OwnsInWorldKnobObject
	// bool OwnsInWorldKnobObject(UObject* InWorldKnobObject);                                                                  // [0xa51e478] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnSaveOverridesChanged
	// void OnSaveOverridesChanged();                                                                                           // [0xa51e464] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedModulatorPorts
	// void OnRep_ReplicatedModulatorPorts();                                                                                   // [0xa51e450] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedInWorldKnobInterfaceObjects
	// void OnRep_ReplicatedInWorldKnobInterfaceObjects();                                                                      // [0xa51e43c] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnRep_ReplicatedFabricInteractableObjects
	// void OnRep_ReplicatedFabricInteractableObjects();                                                                        // [0xa51e428] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                                  // [0xa51ddf0] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInWorldKnobSerializedOptionChanged
	// void OnInWorldKnobSerializedOptionChanged(FString Value, UPlaylistUserOptionBase* Option, APlayerController* PlayerController); // [0xa51cfc8] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInWorldKnobRuntimeOptionChanged
	// void OnInWorldKnobRuntimeOptionChanged(FString Value, UPlaylistUserOptionBase* Option);                                  // [0xa51c328] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnInitialKnobValuesLoaded__DelegateSignature
	// void OnInitialKnobValuesLoaded__DelegateSignature();                                                                     // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                               // [0xa51b920] Final|Native|Private 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyKnobSerializedValueChanged__DelegateSignature
	// void OnAnyKnobSerializedValueChanged__DelegateSignature();                                                               // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAnyKnobRuntimeValueChanged__DelegateSignature
	// void OnAnyKnobRuntimeValueChanged__DelegateSignature();                                                                  // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.OnAllKnobsLoaded__DelegateSignature
	// void OnAllKnobsLoaded__DelegateSignature();                                                                              // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.CanMakeUserOptionChanges
	// bool CanMakeUserOptionChanges();                                                                                         // [0xa51a1e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.AreAllKnobsLoadedForNotify
	// bool AreAllKnobsLoadedForNotify();                                                                                       // [0xa51a1cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMInWorldKnobsRuntime.FMInWorldKnobOptionsComponent.ActorHasValidControllerBP
	// bool ActorHasValidControllerBP(AActor* Actor, AFortPlayerPawn*& OutFortPlayerPawn, APlayerController*& OutPlayerController); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FMInWorldKnobsRuntime.PlaylistUserOptionFMOutgoingCableConnection
/// Size: 0x0030 (0x0001D0 - 0x000200)
class UPlaylistUserOptionFMOutgoingCableConnection : public UPlaylistUserOptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FFMOutgoingCableConnection)                DefaultValue                                                OFFSET(getStruct<T>, {0x1D0, 48, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionSaveData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricUserOptionSaveData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFabricUserOptionSavedValue>)       SavedUserOptions                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionSavedValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricUserOptionSavedValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.ScreenMeshArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FScreenMeshArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<TWeakObjectPtr>)                    ScreenMeshArrayByHeight                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.ScreenWidgetLayoutInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FScreenWidgetLayoutInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricScreenLayout
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricScreenLayout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector2D)                                 GridPosition                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     UserOptionName                                              OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(UClass*)                                   FabricWidgetClass                                           OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValue
/// Size: 0x0008 (0x000000 - 0x000008)
class FFabricUserOptionValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueInt
/// Size: 0x0008 (0x000008 - 0x000010)
class FFabricUserOptionValueInt : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueFloat
/// Size: 0x0008 (0x000008 - 0x000010)
class FFabricUserOptionValueFloat : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueEnum
/// Size: 0x0010 (0x000008 - 0x000018)
class FFabricUserOptionValueEnum : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueBool
/// Size: 0x0008 (0x000008 - 0x000010)
class FFabricUserOptionValueBool : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionValueString
/// Size: 0x0010 (0x000008 - 0x000018)
class FFabricUserOptionValueString : public FFabricUserOptionValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionPreset
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricUserOptionPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   UserOption                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FInstancedStruct)                          UserOptionValue                                             OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FabricUserOptionPresetCollection
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricUserOptionPresetCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFabricUserOptionPreset>)           UserOptionPresets                                           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.FMOutgoingCableConnection
/// Size: 0x0030 (0x000000 - 0x000030)
class FFMOutgoingCableConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     OutputPortName                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Device                                                      OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FName)                                     ComponentName                                               OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/FMInWorldKnobsRuntime.UserOptionDefinitionFMOutgoingConnectionMetaData
/// Size: 0x0030 (0x000008 - 0x000038)
class FUserOptionDefinitionFMOutgoingConnectionMetaData : public FUserOptionDefinitionMetaData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FFMOutgoingCableConnection)                DefaultValue                                                OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

