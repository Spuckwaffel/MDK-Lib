
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem

/// Class /Script/FabricRuntime.FabricAnimatableButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAnimatableButtonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricButtonBase
/// Size: 0x0078 (0x000290 - 0x000308)
class AFabricButtonBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FMulticastInlineDelegate)                  ToggleStateChanged                                          OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(double)                                    OpenTimeSeconds                                             OFFSET(get<double>, {0x2B0, 8, 0, 0})
	DMember(double)                                    CloseTimeSeconds                                            OFFSET(get<double>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bHasToggle                                                  OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x2C1, 1, 0, 0})
	CMember(APlayerController*)                        InteractingController                                       OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FString)                                   ButtonId                                                    OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	SMember(FText)                                     ButtonLabel                                                 OFFSET(getStruct<T>, {0x2E0, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	DMember(bool)                                      bPressed                                                    OFFSET(get<bool>, {0x2FA, 1, 0, 0})
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0x2FB, 1, 0, 0})
	CMember(UFabricInteractableViewModel*)             WidgetViewModel                                             OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(APlayerController* InteractingController, bool IsToggle);                     // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonBase.SwapToggle
	// void SwapToggle();                                                                                                       // [0xa48e0d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetWidgetViewModel
	// void SetWidgetViewModel(UFabricInteractableViewModel* ViewModel);                                                        // [0xa48dfb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                                 // [0xa48dd9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0xa48db1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonBase.OnUnhovered
	// void OnUnhovered();                                                                                                      // [0x2af8708] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                              // [0x718b858] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnHovered
	// void OnHovered();                                                                                                        // [0x5884834] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnEnabled
	// void OnEnabled();                                                                                                        // [0x24f0248] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnDisabled
	// void OnDisabled();                                                                                                       // [0x1d0868c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonReleased
	// void OnButtonReleased();                                                                                                 // [0x726a7a0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonPressed
	// void OnButtonPressed();                                                                                                  // [0x726a7b8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                            // [0x29e47ec] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0x1d09150] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.IsToggledOn
	// bool IsToggledOn();                                                                                                      // [0xa48d434] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsPressed
	// bool IsPressed();                                                                                                        // [0x7c754c8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsHovered
	// bool IsHovered();                                                                                                        // [0x88ab260] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x5ae42f8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                            // [0x5cf0260] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x8720e20] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x17be5e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                              // [0x7a12054] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                        // [0x1d5ab84] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x1d5a2e8] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonBase.GetOpenTimeline
	// UTimelineComponent* GetOpenTimeline();                                                                                   // [0x5b96f14] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonBase.GetCloseTimeline
	// UTimelineComponent* GetCloseTimeline();                                                                                  // [0x5b96f14] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
};

/// Class /Script/FabricRuntime.FabricButtonComponentBase
/// Size: 0x0070 (0x000640 - 0x0006B0)
class UFabricButtonComponentBase : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FMulticastInlineDelegate)                  ToggleStateChanged                                          OFFSET(getStruct<T>, {0x648, 16, 0, 0})
	DMember(double)                                    OpenTimeSeconds                                             OFFSET(get<double>, {0x658, 8, 0, 0})
	DMember(double)                                    CloseTimeSeconds                                            OFFSET(get<double>, {0x660, 8, 0, 0})
	DMember(bool)                                      bHasToggle                                                  OFFSET(get<bool>, {0x668, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x669, 1, 0, 0})
	CMember(APlayerController*)                        InteractingController                                       OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FString)                                   ButtonId                                                    OFFSET(getStruct<T>, {0x678, 16, 0, 0})
	SMember(FText)                                     ButtonLabel                                                 OFFSET(getStruct<T>, {0x688, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x6A0, 1, 0, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x6A1, 1, 0, 0})
	DMember(bool)                                      bPressed                                                    OFFSET(get<bool>, {0x6A2, 1, 0, 0})
	CMember(ECheckBoxState)                            ToggleState                                                 OFFSET(get<T>, {0x6A3, 1, 0, 0})
	CMember(UFabricInteractableViewModel*)             WidgetViewModel                                             OFFSET(get<T>, {0x6A8, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ToggleStateChanged__DelegateSignature
	// void ToggleStateChanged__DelegateSignature(APlayerController* InteractingController, bool IsToggle);                     // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SwapToggle
	// void SwapToggle();                                                                                                       // [0xa48e0e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetWidgetViewModel
	// void SetWidgetViewModel(UFabricInteractableViewModel* ViewModel);                                                        // [0xa48e034] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetToggleState
	// void SetToggleState(bool bNewToggleState, bool bBroadcast, bool bForce);                                                 // [0xa48dea8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.SetEnabled
	// void SetEnabled(bool bNewEnabled);                                                                                       // [0xa48db9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnUnhovered
	// void OnUnhovered();                                                                                                      // [0xa48db04] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnToggleStateChanged
	// void OnToggleStateChanged(bool bIsToggled);                                                                              // [0xa48da80] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnHovered
	// void OnHovered();                                                                                                        // [0xa48d4cc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnEnabled
	// void OnEnabled();                                                                                                        // [0x104e188] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnDisabled
	// void OnDisabled();                                                                                                       // [0x7e719dc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonReleased
	// void OnButtonReleased();                                                                                                 // [0xa48d4b4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonPressed
	// void OnButtonPressed();                                                                                                  // [0xa48d49c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonDoubleClicked
	// void OnButtonDoubleClicked();                                                                                            // [0xa48d484] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.OnButtonClicked
	// void OnButtonClicked();                                                                                                  // [0xa48d46c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsToggledOn
	// bool IsToggledOn();                                                                                                      // [0xa48d450] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsPressed
	// bool IsPressed();                                                                                                        // [0xa48d41c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsHovered
	// bool IsHovered();                                                                                                        // [0xa48d404] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xa48d3ec] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonUnhovered
	// void HandleButtonUnhovered();                                                                                            // [0xa48d3d4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0xa48d3bc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x32bdedc] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonHovered
	// void HandleButtonHovered();                                                                                              // [0xa48d3a4] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                        // [0xa48d38c] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0xa48d374] Native|Event|Public|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetOpenTimeline
	// UTimelineComponent* GetOpenTimeline();                                                                                   // [0x5b96f14] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.GetCloseTimeline
	// UTimelineComponent* GetCloseTimeline();                                                                                  // [0x5b96f14] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/FabricRuntime.FabricButtonComponentBase.ConstructButton
	// void ConstructButton();                                                                                                  // [0x2bc2fa8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricDevice : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMetaSoundPatchOwner : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricAudioGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricAudioModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioModifier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricAudioReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricAudioReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricFloatGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricFloatReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricFloatReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricTextureGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricTextureModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureModifier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricTextureReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricTextureReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricMeshGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricMeshModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshModifier : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricMeshReceiver
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricMeshReceiver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricModulationNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricModulationNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UFabricFloatProviderBase*>)         FloatProviders                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/FabricRuntime.FabricModulatable
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UFabricModulatable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<AActor*>)                   ModulatedActor                                              OFFSET(get<T>, {0x2C, 8, 0, 0})
	CMember(TArray<FString>)                           ModulatorParams                                             OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             Modulators                                                  OFFSET(get<T>, {0x48, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ModulatorSources                                            OFFSET(get<T>, {0x98, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricModulatable.OnOptionsLoaded
	// void OnOptionsLoaded();                                                                                                  // [0xa4973c4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatorFloatProviderConnectionChanged
	// void OnModulatorFloatProviderConnectionChanged(bool bConnected, UObject* ModulatorObject);                               // [0xa497eac] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnModulatedPropertyChanged
	// void OnModulatedPropertyChanged(FString Value, UObject* ModulatorObject);                                                // [0xa49785c] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricModulatable.OnAnyOptionUpdated
	// void OnAnyOptionUpdated();                                                                                               // [0xa4973c4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricModulatable.IsParamModulated
	// bool IsParamModulated(FString Param);                                                                                    // [0xa496d2c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulator
	// TScriptInterface<Class> GetModulator(FString Param);                                                                     // [0xa49666c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedString
	// bool GetModulatedString(FString Param, FMidiSongPos& SongPos, FString& OutString);                                       // [0xa495f6c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedInt
	// bool GetModulatedInt(FString Param, FMidiSongPos& SongPos, int32_t& OutInt);                                             // [0xa495880] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedFloat
	// bool GetModulatedFloat(FString Param, FMidiSongPos& SongPos, float& OutFloat);                                           // [0xa49510c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedEnum
	// bool GetModulatedEnum(FString Param, FMidiSongPos& SongPos, char& OutEnum);                                              // [0xa494a20] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedBool
	// bool GetModulatedBool(FString Param, FMidiSongPos& SongPos, bool& OutBool);                                              // [0xa4942ac] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricModulatable.GetModulatedActor
	// AActor* GetModulatedActor();                                                                                             // [0x71f883c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderBase
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFabricFloatProviderBase : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMulticastInlineDelegate)                  OnFloatChanged                                              OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     CurrentFloat                                                OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(TWeakObjectPtr<UMusicClockComponent*>)     MusicClock                                                  OFFSET(get<T>, {0xC4, 8, 0, 0})
	CMember(UFabricMetaSoundModulatorPatchWrapper*)    AssociatedPatchWrapper                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FString)                                   EnabledParam                                                OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bAlwaysModulates                                            OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bBindBlueprintOnFloatChanged                                OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0xEA, 1, 0, 0})
	DMember(bool)                                      bModulatorValueChanged                                      OFFSET(get<bool>, {0xEB, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetProviderEnabled
	// void SetProviderEnabled(bool bInIsEnabled);                                                                              // [0xa48dd1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetMusicClock
	// void SetMusicClock(UMusicClockComponent* NewMusicClock);                                                                 // [0xa48dc1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.SetAssociatedPatchWrapper
	// void SetAssociatedPatchWrapper(UFabricMetaSoundModulatorPatchWrapper* PatchWrapper);                                     // [0x931f25c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.OnFloatChanged__DelegateSignature
	// void OnFloatChanged__DelegateSignature(float float);                                                                     // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatProviderType
	// EFabricFloatProviderType GetFloatProviderType();                                                                         // [0x596aa88] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetFloatAtSongPos
	// float GetFloatAtSongPos(FMidiSongPos& SongPos);                                                                          // [0xa48d214] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPosWithOffset
	// FMidiSongPos GetCurrentSongPosWithOffset(float OffsetSeconds);                                                           // [0xa48d16c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentSongPos
	// FMidiSongPos GetCurrentSongPos();                                                                                        // [0xa48d130] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetCurrentFloat
	// float GetCurrentFloat();                                                                                                 // [0x92d948c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderBase.GetAssociatedPatchWrapper
	// UFabricMetaSoundModulatorPatchWrapper* GetAssociatedPatchWrapper();                                                      // [0x85e915c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderWave
/// Size: 0x0150 (0x0000F0 - 0x000240)
class UFabricFloatProviderWave : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FString)                                   WaveShapeParam                                              OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   FreeHzParam                                                 OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FString)                                   MinParam                                                    OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FString)                                   MaxParam                                                    OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   BeatDurationParam                                           OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FString)                                   BeatOffsetParam                                             OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FString)                                   ShapeParam                                                  OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FString)                                   StyleParam                                                  OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	DMember(int32_t)                                   PhaseCPDIndex                                               OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   ValueCPDIndex                                               OFFSET(get<int32_t>, {0x174, 4, 0, 0})
	CMember(TSet<TWeakObjectPtr>)                      PreviewDisplayMeshes                                        OFFSET(get<T>, {0x1F0, 80, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetRandomSeedByGuid
	// void SetRandomSeedByGuid(FGuid& InRandomGuid);                                                                           // [0xa4906fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.SetFreePhase
	// void SetFreePhase(float InFreePhase);                                                                                    // [0xa4905f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.RemovePreviewDisplayMesh
	// void RemovePreviewDisplayMesh(UStaticMeshComponent* Mesh);                                                               // [0xa490054] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetRandomSeed
	// int32_t GetRandomSeed();                                                                                                 // [0x5756384] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetPreviewDisplayMeshes
	// TArray<UStaticMeshComponent*> GetPreviewDisplayMeshes();                                                                 // [0xa48f9a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentPhase
	// float GetCurrentPhase();                                                                                                 // [0xa48f778] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.GetCurrentFreePhase
	// float GetCurrentFreePhase();                                                                                             // [0xa48f73c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.ClearPreviewDisplayMeshes
	// void ClearPreviewDisplayMeshes();                                                                                        // [0xa48f4b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricFloatProviderWave.AddPreviewDisplayMesh
	// void AddPreviewDisplayMesh(UStaticMeshComponent* Mesh);                                                                  // [0xa48f2a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricFloatProviderStep
/// Size: 0x0078 (0x0000F0 - 0x000168)
class UFabricFloatProviderStep : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FString)                                   StepRateParam                                               OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   ActiveStepsParam                                            OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FString)                                   StepParamBase                                               OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(int32_t)                                   MaxSteps                                                    OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	SMember(FFabricStepGenerator)                      RuntimeGenerator                                            OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFloatProviderStepInitialized                              OFFSET(getStruct<T>, {0x148, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderStep.GetStepLengthBeats
	// float GetStepLengthBeats();                                                                                              // [0xa48fa14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricFloatProviderValueSetter
/// Size: 0x0080 (0x0000F0 - 0x000170)
class UFabricFloatProviderValueSetter : public UFabricFloatProviderBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   ValueParam                                                  OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   TransitionTimingParam                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.GetUpdateBeat
	// float GetUpdateBeat();                                                                                                   // [0x8e33728] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricFloatProviderValueSetter.BroadcastCurrentValue
	// void BroadcastCurrentValue();                                                                                            // [0xa48f3a4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricHoldable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricHoldable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricInteractableControllerComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UFabricInteractableControllerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMulticastInlineDelegate)                  OnNoInteractablesHit                                        OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(AFortPlayerController*)                    PlayerController                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortGadgetItemDefinition*>) FabricInteractionToolItemDefSoftPtr                        OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(UFortGadgetItemDefinition*)                FabricInteractionToolItemDef                                OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftFabricDeviceBaseClass                                   OFFSET(get<T>, {0xF8, 32, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerRequestDoesIslandContainFabricDevices
	// void ServerRequestDoesIslandContainFabricDevices();                                                                      // [0x5d4e118] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ServerGivePlayerFabricInteractionTool
	// void ServerGivePlayerFabricInteractionTool();                                                                            // [0x64771e4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.OnCreativeModeEnabledChangedDelegate
	// void OnCreativeModeEnabledChangedDelegate(bool bCreativeEnabled);                                                        // [0x550d6d4] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.GiveBackInteractionTool
	// void GiveBackInteractionTool();                                                                                          // [0xa48fa3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.EnsurePlayerHasInteractionTool
	// void EnsurePlayerHasInteractionTool();                                                                                   // [0xa48f5e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractableControllerComponent.ClientReceiveDoesIslandContainFabricDevices
	// void ClientReceiveDoesIslandContainFabricDevices(bool bIslandContainsFabricDevices);                                     // [0x9eced94] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/FabricRuntime.FabricInteractable
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricInteractable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricInteractablePlayspaceComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFabricInteractablePlayspaceComponent : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/FabricRuntime.FabricInteractionTool
/// Size: 0x0198 (0x001318 - 0x0014B0)
class AFabricInteractionTool : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	SMember(FMulticastInlineDelegate)                  OnInteractionStateChanged                                   OFFSET(getStruct<T>, {0x1318, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCablesGrabbed                                             OFFSET(getStruct<T>, {0x1328, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCablesDropped                                             OFFSET(getStruct<T>, {0x1338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetasoundGeneratorCrossfadeStarted                        OFFSET(getStruct<T>, {0x1348, 16, 0, 0})
	CMember(USplineComponent*)                         SplineComponent                                             OFFSET(get<T>, {0x1358, 8, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x1360, 4, 0, 0})
	DMember(float)                                     MinDragAndDropTriggerTime                                   OFFSET(get<float>, {0x1364, 4, 0, 0})
	DMember(float)                                     FiringRate                                                  OFFSET(get<float>, {0x1368, 4, 0, 0})
	DMember(float)                                     SplineEndForwardMultiplier                                  OFFSET(get<float>, {0x136C, 4, 0, 0})
	DMember(float)                                     SplineStartForwardMultiplier                                OFFSET(get<float>, {0x1370, 4, 0, 0})
	CMember(UObject*)                                  HoveredInteractable                                         OFFSET(get<T>, {0x1378, 8, 0, 0})
	CMember(USceneComponent*)                          HoveredInteractableHitComponent                             OFFSET(get<T>, {0x1380, 8, 0, 0})
	CMember(UObject*)                                  PressedInteractable                                         OFFSET(get<T>, {0x1388, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  LastPressedInteractable                                     OFFSET(get<T>, {0x1390, 8, 0, 0})
	CMember(USceneComponent*)                          PressedInteractableHitComponent                             OFFSET(get<T>, {0x1398, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortCreativeDeviceProp*>)  InteractableOwnerDevice                                     OFFSET(get<T>, {0x13A0, 8, 0, 0})
	DMember(float)                                     AccumulatedDragAndDropTriggerTime                           OFFSET(get<float>, {0x13A8, 4, 0, 0})
	SMember(FInteractionData)                          ServerInteractionData                                       OFFSET(getStruct<T>, {0x13AC, 12, 0, 0})
	DMember(bool)                                      bServerTriggerPressed                                       OFFSET(get<bool>, {0x13C9, 1, 0, 0})
	DMember(bool)                                      bServerIsHoldingCable                                       OFFSET(get<bool>, {0x13CB, 1, 0, 0})
	SMember(FInteractionSplinePoints)                  ServerSplinePoints                                          OFFSET(getStruct<T>, {0x13E0, 96, 0, 0})
	DMember(float)                                     ServerContinuousInteractableValue                           OFFSET(get<float>, {0x1440, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricInteractionTool.UnholsterWeapon
	// void UnholsterWeapon();                                                                                                  // [0xa490794] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetTriggerPressed
	// void ServerSetTriggerPressed(bool bPressed);                                                                             // [0x8b1efa4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetSplinePoints
	// void ServerSetSplinePoints(FInteractionSplinePoints SplinePoints);                                                       // [0xa4903c4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetIsHoldingCable
	// void ServerSetIsHoldingCable(bool bHoldingCable);                                                                        // [0xa490340] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetInteractionData
	// void ServerSetInteractionData(FInteractionData NewData);                                                                 // [0xa4901e4] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerSetContinuousInteractableValue
	// void ServerSetContinuousInteractableValue(float Value);                                                                  // [0xa490160] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.ServerHandleFITFired
	// void ServerHandleFITFired();                                                                                             // [0x83f17fc] Net|Native|Event|Protected|NetServer 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnSplineUpdated
	// void OnSplineUpdated(EFabricInteractionToolStates NewInteractionState);                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerTriggerPressed
	// void OnRep_ServerTriggerPressed();                                                                                       // [0xa490004] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerIsHoldingCable
	// void OnRep_ServerIsHoldingCable();                                                                                       // [0xa48ffa0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerInteractionData
	// void OnRep_ServerInteractionData();                                                                                      // [0xa48ff8c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnRep_ServerContinuousInteractableValue
	// void OnRep_ServerContinuousInteractableValue();                                                                          // [0xa48ff58] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnMetasoundGeneratorCrossfadeStarted__DelegateSignature
	// void OnMetasoundGeneratorCrossfadeStarted__DelegateSignature(float CrossfadeSeconds);                                    // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnInteractionStateChanged__DelegateSignature
	// void OnInteractionStateChanged__DelegateSignature(EFabricInteractionToolStates NewState, AFortCreativeDeviceProp* Device); // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.OnCableHeldStateChanged__DelegateSignature
	// void OnCableHeldStateChanged__DelegateSignature(AFortCreativeDeviceProp* Device);                                        // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsRunningOnOwningClient
	// bool IsRunningOnOwningClient();                                                                                          // [0xa48faf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricInteractionTool.IsHoldingCables
	// bool IsHoldingCables();                                                                                                  // [0xa48fae0] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.HandleMetasoundGeneratorCrossfade
	// void HandleMetasoundGeneratorCrossfade(float CrossfadeSeconds);                                                          // [0xa48fa50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetPressedInteractable
	// UObject* GetPressedInteractable();                                                                                       // [0xa48f988] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableType
	// EFabricInteractableType GetHoveredInteractableType();                                                                    // [0xa48f7d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetHoveredInteractableHitComponent
	// USceneComponent* GetHoveredInteractableHitComponent();                                                                   // [0xa48f7bc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetFabricInteractionToolState
	// EFabricInteractionToolStates GetFabricInteractionToolState();                                                            // [0xa48f7a4] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousStateValue
	// int32_t GetContinuousStateValue();                                                                                       // [0xa48f6fc] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousMovementValue
	// float GetContinuousMovementValue();                                                                                      // [0xa48f6d4] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractionDirection
	// EFabricContinuousInteractionDirection GetContinuousInteractionDirection();                                               // [0xa48f63c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.GetContinuousInteractableValueNormalized
	// float GetContinuousInteractableValueNormalized();                                                                        // [0xa48f5f8] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricInteractionTool.DeactiveWeaponAndState
	// void DeactiveWeaponAndState();                                                                                           // [0xa48f504] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientStopInteracting
	// void ClientStopInteracting();                                                                                            // [0x7a64330] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/FabricRuntime.FabricInteractionTool.ClientDeactiveWeaponAndState
	// void ClientDeactiveWeaponAndState();                                                                                     // [0x1a7bd18] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/FabricRuntime.FabricMeshModifierBase
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFabricMeshModifierBase : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(EFabricCloneTransformBehavior)             CloneBehavior                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierTranslate
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UFabricMeshModifierTranslate : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FVector)                                   PositionOffset                                              OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierRotate
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UFabricMeshModifierRotate : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FRotator)                                  RotationAmount                                              OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierScale
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UFabricMeshModifierScale : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FVector)                                   ScaleFactor                                                 OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierClone
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UFabricMeshModifierClone : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(int32_t)                                   CloneCount                                                  OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	SMember(FVector)                                   PerCloneTranslation                                         OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	DMember(bool)                                      bCentered                                                   OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshModifierRandomize
/// Size: 0x0068 (0x0000B0 - 0x000118)
class UFabricMeshModifierRandomize : public UFabricMeshModifierBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	DMember(float)                                     LocationRandLimit                                           OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     RotationRandLimit                                           OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     ScaleRandLimit                                              OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FVector)                                   LocationRandRange                                           OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   RotationRandRange                                           OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   ScaleRandRangeAdditive                                      OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     ScaleRandRangeRangeBase                                     OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(bool)                                      bUniformScale                                               OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FRandomStream)                             RandomStream                                                OFFSET(getStruct<T>, {0x110, 8, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMeshTreeNode
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UFabricMeshTreeNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UFabricMeshModifierBase*)                  MeshModifier                                                OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FFabricMeshProviderMeshReferenceParams)    Params                                                      OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FFabricMeshProviderMeshReference)          MeshProviderReference                                       OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	CMember(TArray<UFabricMeshTreeNode*>)              Children                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(uint32_t)                                  LastCalculatedChecksum                                      OFFSET(get<uint32_t>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bAllowChecksumCalculation                                   OFFSET(get<bool>, {0xA4, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshTreeNode.Reset
	// void Reset();                                                                                                            // [0xa4928a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.GenerateMeshInstanceReferences
	// TArray<FFabricMeshInstanceReference> GenerateMeshInstanceReferences();                                                   // [0xa492294] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMeshTreeNode.CopyProperties
	// void CopyProperties(UFabricMeshTreeNode* Other);                                                                         // [0xa49204c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMeshProviderBase
/// Size: 0x0058 (0x000028 - 0x000080)
class UFabricMeshProviderBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FFabricMeshProviderMeshReference)          ReferenceMesh                                               OFFSET(getStruct<T>, {0x28, 56, 0, 0})
	CMember(TArray<FTransform>)                        InstanceMeshes                                              OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(float)                                     CurrentCableFloatValue                                      OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     CurrentCableFloatDirection                                  OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bCurrentCableFloatDirty                                     OFFSET(get<bool>, {0x78, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMeshProviderBase.SetReferenceMesh
	// void SetReferenceMesh(FFabricMeshProviderMeshReference& InMesh);                                                         // [0xa492dc4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundPatchWrapper
/// Size: 0x02C8 (0x0000A8 - 0x000370)
class UFabricMetaSoundPatchWrapper : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FName)                                     EnabledStateInputName                                       OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          MetaSoundPatch                                              OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(TMap<FString, FName>)                      UserOptionsToNodeInputs                                     OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TArray<FFabricMetaSoundDirectInputInfo>)   DirectInputs                                                OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       SimpleSignalOutputBinding                                   OFFSET(getStruct<T>, {0x138, 72, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSimpleSignalBindingUpdate                                 OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FName)                                     VisibleInputParamName                                       OFFSET(getStruct<T>, {0x190, 4, 0, 0})
	SMember(FName)                                     AudibleInputParamName                                       OFFSET(getStruct<T>, {0x194, 4, 0, 0})
	DMember(bool)                                      bCanConsumeVisibleFlag                                      OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(bool)                                      bCanConsumeAudibleFlag                                      OFFSET(get<bool>, {0x199, 1, 0, 0})
	DMember(bool)                                      bIsVisible                                                  OFFSET(get<bool>, {0x19A, 1, 0, 0})
	DMember(bool)                                      bIsAudible                                                  OFFSET(get<bool>, {0x19B, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaSoundOutputIntChangedBatch                            OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaSoundOutputFloatChangedBatch                          OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	CMember(UFabricMetaSoundManagerComponent*)         CurrentManager                                              OFFSET(get<T>, {0x1C0, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  CurrentNode                                                 OFFSET(getStruct<T>, {0x1C8, 240, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   PositionalProxyActor                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UMetasoundGeneratorHandle*>) CurrentGeneratorHandle                                     OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TWeakObjectPtr<UMetasoundGeneratorHandle*>) NewGeneratorHandle                                         OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          CurrentAudioComponent                                       OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UAudioComponent*>)          NewAudioComponent                                           OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FName)                                     CombinerMetaSoundType                                       OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	SMember(FName)                                     AnalyzerMetaSoundType                                       OFFSET(getStruct<T>, {0x2E4, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundRuntimeInputInfo>)  MetaSoundRuntimeInputInfos                                  OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<UFabricMetaSoundPatchWrapper*>)     ConnectedInputWrappers                                      OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<UFabricMetaSoundPatchWrapper*>)     PendingInputWrappers                                        OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(TArray<UFabricMetaSoundPatchWrapper*>)     PendingOutputWrappers                                       OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(TArray<FMetaSoundCombinerNodeHandle>)      CombinersInUse                                              OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(TArray<UFabricMetaSoundPatchWrapper*>)     ConnectedOutputWrappers                                     OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(EFabricMetaSoundPatchWrapperQuality)       PatchWrapperQuality                                         OFFSET(get<T>, {0x348, 1, 0, 0})
	CMember(UMetaSoundPatch*)                          LoadedMetaSoundPatch                                        OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetStringInput
	// void SetStringInput(FName& MetaSoundInputName, FString Value);                                                           // [0xa4988c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetRunsOnServer
	// void SetRunsOnServer(bool bAllowRunOnServer);                                                                            // [0xa498848] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetPositionalProxyActor
	// void SetPositionalProxyActor(AActor* InLocationProxyActor);                                                              // [0xa498748] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetNodeEnabled
	// void SetNodeEnabled(bool bEnabled);                                                                                      // [0xa498698] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetIntInput
	// void SetIntInput(FName& MetaSoundInputName, int32_t Value);                                                              // [0xa4984c8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetFloatInput
	// void SetFloatInput(FName& MetaSoundInputName, float Value);                                                              // [0xa4983bc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetEnumInput
	// void SetEnumInput(FName& MetaSoundInputName, char Value);                                                                // [0xa4982ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.SetBoolInput
	// void SetBoolInput(FName& MetaSoundInputName, bool bValue);                                                               // [0xa49813c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.RemoveFromCurrentGraph
	// void RemoveFromCurrentGraph();                                                                                           // [0x2a4dd10] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputValueChanged
	// void OnMetaSoundOutputValueChanged(FName OutputName, FMetaSoundOutput& MetaSoundOutput);                                 // [0xa497760] Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundOutputChanged
	// void OnMetaSoundOutputChanged(FName OutputName, FMetaSoundOutput& Output);                                               // [0xa49767c] Final|Native|Private|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetasoundManagerEndPlay
	// void OnMetasoundManagerEndPlay();                                                                                        // [0xa497848] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundGeneratorHandleChangedDelegate
	// void OnMetaSoundGeneratorHandleChangedDelegate(UAudioComponent* AudioComponent, UMetasoundGeneratorHandle* GeneratorHandle); // [0xa4974a0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnMetaSoundGeneratorHandleChanged
	// void OnMetaSoundGeneratorHandleChanged(UAudioComponent* AudioComponent, UMetasoundGeneratorHandle* GeneratorHandle);     // [0xa4973d8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.OnAddedToManagerGraph
	// void OnAddedToManagerGraph(UFabricMetaSoundManagerComponent* Manager);                                                   // [0xa497340] Native|Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetRunsOnServer
	// bool GetRunsOnServer();                                                                                                  // [0xa496ca8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMusicClock
	// UMusicClockComponent* GetMusicClock();                                                                                   // [0xa496c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.GetMetaSoundInputNames
	// TSet<FName> GetMetaSoundInputNames();                                                                                    // [0xa4941e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToManagerGraph
	// void AddToManagerGraph(UFabricMetaSoundManagerComponent* Manager);                                                       // [0x6cdb768] Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundPatchWrapper.AddToGraphOnFirstConnect
	// bool AddToGraphOnFirstConnect();                                                                                         // [0x57f3ae4] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper
/// Size: 0x00B0 (0x000370 - 0x000420)
class UFabricMetaSoundDrumPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FName)                                     PitchSampleInputName                                        OFFSET(getStruct<T>, {0x378, 4, 0, 0})
	SMember(FName)                                     SlotKitInputName                                            OFFSET(getStruct<T>, {0x37C, 4, 0, 0})
	CMember(TArray<FString>)                           PitchSampleParams                                           OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(TArray<FString>)                           SlotLinkParams                                              OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(TArray<FString>)                           SlotUnlinkedKitParams                                       OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FString)                                   CurrentKitParam                                             OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	DMember(int32_t)                                   NumSamplesPerKit                                            OFFSET(get<int32_t>, {0x3C0, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundPatchWrapperBinding>) DrumAmplitudes                                            OFFSET(get<T>, {0x3C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundDrumPlayerPatchDrumAmplitudesUpdate        OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})
	CMember(TArray<UObject*>)                          CurrentKitSamples                                           OFFSET(get<T>, {0x410, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundDrumPlayerPatchWrapper.LoadDrumPlayerSampleBanks
	// void LoadDrumPlayerSampleBanks(TArray<TWeakObjectPtr>& SampleBankArray, TSet<int32_t>& KitNumbersToLoad);                // [0xa4924d8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundWetDryPatchWrapper
/// Size: 0x00A0 (0x000370 - 0x000410)
class UFabricMetaSoundWetDryPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FFabricMetaSoundPatchWrapperWetDryOutputBinding) WetDryOutputBinding                                   OFFSET(getStruct<T>, {0x370, 144, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWetDryOutputSignalUpdate                                  OFFSET(getStruct<T>, {0x400, 16, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundEchoPatchWrapper
/// Size: 0x0018 (0x000410 - 0x000428)
class UFabricMetaSoundEchoPatchWrapper : public UFabricMetaSoundWetDryPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	DMember(bool)                                      bAllowWetSignalWaveformTexture                              OFFSET(get<bool>, {0x410, 1, 0, 0})
	DMember(bool)                                      bAllowDrySignalWaveformTexture                              OFFSET(get<bool>, {0x411, 1, 0, 0})
	CMember(UFabricWaveformTexture*)                   WetSignalWaveformTexture                                    OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFabricWaveformTexture*)                   DrySignalWaveformTexture                                    OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper
/// Size: 0x00E0 (0x000370 - 0x000450)
class UFabricMetaSoundInstrumentPlayerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FMulticastInlineDelegate)                  OnFFTResultsUpdated                                         OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       FFTAnalysisOutputBinding                                    OFFSET(getStruct<T>, {0x380, 72, 0, 0})
	DMember(int32_t)                                   FFTCPDStartIndex                                            OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	DMember(int32_t)                                   FFTLength                                                   OFFSET(get<int32_t>, {0x3CC, 4, 0, 0})
	CMember(TWeakObjectPtr<UFusionPatch*>)             CurrentFusionPatch                                          OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.SetFusionPatch
	// void SetFusionPatch(UFusionPatch* FusionPatch);                                                                          // [0xa492a78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundInstrumentPlayerPatchWrapper.DriveFFTDataOnPrimitive
	// void DriveFFTDataOnPrimitive(UPrimitiveComponent* Primitive);                                                            // [0xa4920cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundManagerComponent
/// Size: 0x04C8 (0x0000A0 - 0x000568)
class UFabricMetaSoundManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          HarmonixMusicProviderPatch                                  OFFSET(get<T>, {0xA8, 32, 0, 0})
	SMember(FFabricMetaSoundUtilityPatches)            MidiStreamUtilityPatches                                    OFFSET(getStruct<T>, {0xC8, 136, 0, 0})
	SMember(FFabricMetaSoundUtilityPatches)            AudioUtilityPatches                                         OFFSET(getStruct<T>, {0x150, 136, 0, 0})
	SMember(FName)                                     MusicProviderVolumeName                                     OFFSET(getStruct<T>, {0x1D8, 4, 0, 0})
	SMember(FName)                                     MusicProviderPlayTriggerName                                OFFSET(getStruct<T>, {0x1DC, 4, 0, 0})
	SMember(FName)                                     MusicProviderRestartTriggerName                             OFFSET(getStruct<T>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     MusicProviderSeekTriggerName                                OFFSET(getStruct<T>, {0x1E4, 4, 0, 0})
	SMember(FName)                                     MusicProviderPauseTriggerName                               OFFSET(getStruct<T>, {0x1E8, 4, 0, 0})
	SMember(FName)                                     MusicProviderContinueTriggerName                            OFFSET(getStruct<T>, {0x1EC, 4, 0, 0})
	SMember(FName)                                     MusicProviderStopTriggerName                                OFFSET(getStruct<T>, {0x1F0, 4, 0, 0})
	SMember(FName)                                     MusicProviderTempoName                                      OFFSET(getStruct<T>, {0x1F4, 4, 0, 0})
	SMember(FName)                                     MusicProviderSpeedName                                      OFFSET(getStruct<T>, {0x1F8, 4, 0, 0})
	SMember(FName)                                     MusicProviderRootNoteName                                   OFFSET(getStruct<T>, {0x1FC, 4, 0, 0})
	SMember(FName)                                     MusicProviderScaleName                                      OFFSET(getStruct<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     MusicProviderSeekTargetName                                 OFFSET(getStruct<T>, {0x204, 4, 0, 0})
	SMember(FName)                                     MusicProviderTimeSigNumName                                 OFFSET(getStruct<T>, {0x208, 4, 0, 0})
	SMember(FName)                                     MusicProviderTimeSigDenomName                               OFFSET(getStruct<T>, {0x20C, 4, 0, 0})
	DMember(float)                                     CrossfadeSeconds                                            OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(float)                                     RebuildTimeOutSeconds                                       OFFSET(get<float>, {0x214, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaSoundGeneratorHandleChanged                           OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetasoundGeneratorCrossfadeStarted                        OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	CMember(TArray<FFabricSignificanceBasedUpdateBucketRuntime>) SignificanceRuntimeBuckets                        OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(UFabricSignificanceAsset*)                 SignificanceBasedUpdate                                     OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     InitialCooldownTimeInSeconds                                OFFSET(get<float>, {0x2A0, 4, 0, 0})
	CMember(UMetaSoundSourceBuilder*)                  SourceBuilder                                               OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UMusicClockComponent*)                     MusicClock                                                  OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(TArray<UAudioComponent*>)                  PlaybackAudioComponents                                     OFFSET(get<T>, {0x2B8, 16, 0, 0})
	CMember(TArray<UMetasoundOfflinePlayerComponent*>) ServerPlaybackComponents                                    OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(UMetasoundGeneratorHandle*)                CurrentGeneratorHandle                                      OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UMetasoundGeneratorHandle*)                OldGeneratorHandle                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UMetasoundGeneratorHandle*)                NewGeneratorHandle                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           StartMetasoundLockDevice                                    OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  HarmonixMusicProviderNode                                   OFFSET(getStruct<T>, {0x308, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeOutputHandle)         OnPlayNodeOutput                                            OFFSET(getStruct<T>, {0x3F8, 32, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          OnFinishedNodeInput                                         OFFSET(getStruct<T>, {0x418, 32, 0, 0})
	CMember(TArray<FMetaSoundBuilderNodeInputHandle>)  AudioOutNodeInputs                                          OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(TMap<UMetaSoundPatch*, FFabricMetaSoundNodePool>) FreeMetaSoundNodes                                   OFFSET(get<T>, {0x480, 80, 0, 0})
	CMember(TMap<FName, FFabricLoadedUtilityPatches>)  UtilityNodeTypesToPatches                                   OFFSET(get<T>, {0x4D0, 80, 0, 0})
	DMember(bool)                                      bGraphDirty                                                 OFFSET(get<bool>, {0x530, 1, 0, 0})
	DMember(bool)                                      bIsAudioless                                                OFFSET(get<bool>, {0x531, 1, 0, 0})
	DMember(bool)                                      bHasCompletedInitialCooldown                                OFFSET(get<bool>, {0x532, 1, 0, 0})
	DMember(float)                                     ReplicatedReceivedSignalBufferDuration                      OFFSET(get<float>, {0x538, 4, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.UnregisterAsAudible
	// void UnregisterAsAudible(AActor* Device);                                                                                // [0xa4931cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.StopMetasound
	// void StopMetasound(ABuildingActor* InStartMetasoundLockDevice);                                                          // [0xa49305c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTimeSignature
	// void SetTimeSignature(int32_t Numerator, int32_t Denominator);                                                           // [0xa492f9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetTempo
	// void SetTempo(float Tempo);                                                                                              // [0xa492f1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetSpeed
	// void SetSpeed(float Speed);                                                                                              // [0xa492e9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicKey
	// void SetMusicKey(EMusicKey Key, EMusicKeyMode Mode);                                                                     // [0xa492d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMusicClock
	// void SetMusicClock(UMusicClockComponent* MusicClockComponent);                                                           // [0xa492c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetMetasoundGeneratorHandle
	// void SetMetasoundGeneratorHandle(UAudioComponent* AudioComponent, UMetasoundGeneratorHandle* GeneratorHandle);           // [0xa492bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SetAudioComponents
	// void SetAudioComponents(TArray<UAudioComponent*> AudioComponents);                                                       // [0xa4929cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToTimestamp
	// void SeekToTimestamp(FMusicTimestamp& Timestamp);                                                                        // [0xa492938] Final|Native|Public|HasOutParms 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.SeekToMs
	// void SeekToMs(float Ms);                                                                                                 // [0xa4928b8] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.RegisterAsAudible
	// void RegisterAsAudible(AActor* Device);                                                                                  // [0xa492824] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PlayMetasound
	// void PlayMetasound(ABuildingActor* InStartMetasoundLockDevice);                                                          // [0xa4927a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.PauseMetasound
	// void PauseMetasound();                                                                                                   // [0xa492790] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnMetasoundAuditionGeneratorHandleCreated
	// void OnMetasoundAuditionGeneratorHandleCreated(UMetasoundGeneratorHandle* GeneratorHandle);                              // [0xa492710] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.OnGeneratorJustStarted
	// void OnGeneratorJustStarted(int32_t ComponentIndex);                                                                     // [0xa492690] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.NotifyGraphChanged
	// void NotifyGraphChanged();                                                                                               // [0xa492678] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.InvalidateMetasoundGeneratorHandle
	// void InvalidateMetasoundGeneratorHandle();                                                                               // [0xa4924c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMusicClock
	// UMusicClockComponent* GetMusicClock();                                                                                   // [0x589f408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetaSoundNodeForWrapper
	// FFabricMetaSoundNodeInfo GetMetaSoundNodeForWrapper(UFabricMetaSoundPatchWrapper* PatchWrapper);                         // [0xa492348] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundInputNodeName
	// FName GetMetasoundInputNodeName(FName NodeName, FName InputName);                                                        // [0xa49240c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetMetasoundGeneratorHandle
	// UMetasoundGeneratorHandle* GetMetasoundGeneratorHandle();                                                                // [0x97a3618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetCurrentPlaystate
	// EFabricMetasoundPlayState GetCurrentPlaystate();                                                                         // [0xa492330] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.GetBuilder
	// UMetaSoundSourceBuilder* GetBuilder();                                                                                   // [0x589f574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.FreeMetaSoundNode
	// void FreeMetaSoundNode(FFabricMetaSoundNodeInfo& Node);                                                                  // [0xa4921d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AreAllPatchesReady
	// bool AreAllPatchesReady();                                                                                               // [0xa492028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddOutputNodeForOutputVertex
	// void AddOutputNodeForOutputVertex(FMetaSoundBuilderNodeOutputHandle& OutputVertex, FName& NodeName, FName& OutOutputName, EMetaSoundBuilderResult& Result); // [0xa491e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundManagerComponent.AddInputNodeForNodeByNameBP
	// void AddInputNodeForNodeByNameBP(FFabricMetaSoundNodeInfo& InOutNode, EFabricUserOptionType UserOptionType, FName& InputName); // [0xa491c9c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper
/// Size: 0x0030 (0x000370 - 0x0003A0)
class UFabricMetaSoundModulatorPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FName)                                     IntModulationOutputName                                     OFFSET(getStruct<T>, {0x370, 4, 0, 0})
	SMember(FName)                                     FloatModulationOutputName                                   OFFSET(getStruct<T>, {0x374, 4, 0, 0})
	SMember(FName)                                     BoolModulationOutputName                                    OFFSET(getStruct<T>, {0x378, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatchWrapperVisibilityChanged                             OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	CMember(UPlaylistUserOptionBase*)                  CurrentUserOption                                           OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UFabricMetaSoundUserOption*)               MetaSoundUserOption                                         OFFSET(get<T>, {0x398, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.SetUserOption
	// void SetUserOption(UPlaylistUserOptionBase* UserOption);                                                                 // [0xa498f64] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundModulatorPatchWrapper.ConnectToInput
	// bool ConnectToInput(FFabricMetaSoundNodeInfo& Node, FName InputName, FName InputType);                                   // [0xa493f18] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricNoteTriggerPatchWrapper
/// Size: 0x0068 (0x000370 - 0x0003D8)
class UFabricNoteTriggerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FName)                                     NoteOutputName                                              OFFSET(getStruct<T>, {0x370, 4, 0, 0})
	SMember(FString)                                   OctaveParam                                                 OFFSET(getStruct<T>, {0x378, 16, 0, 0})
	CMember(TArray<FString>)                           TriggerNoteParams                                           OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAnyMidiEventPassed                                        OFFSET(getStruct<T>, {0x398, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMatchingMidiEventPassed                                   OFFSET(getStruct<T>, {0x3A8, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricNoteTriggerPatchWrapper.OnMetaSoundMidiEventPassed
	// void OnMetaSoundMidiEventPassed(FName OutputName, FMetaSoundOutput& Output);                                             // [0xa497564] Final|Native|Protected|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricMetaSoundTreeNode
/// Size: 0x0020 (0x000028 - 0x000048)
class UFabricMetaSoundTreeNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EFabricMetaSoundPinDirection)              PinDirection                                                OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(UFabricMetaSoundPatchWrapper*)             AssociatedPatchWrapper                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<UFabricMetaSoundTreeNode*>)         Children                                                    OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.Reset
	// void Reset();                                                                                                            // [0xa497fa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.GetValidChildren
	// TArray<UFabricMetaSoundTreeNode*> GetValidChildren();                                                                    // [0xa496cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricMetaSoundTreeNode.ConnectToChildNodes
	// void ConnectToChildNodes();                                                                                              // [0xa493f04] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper
/// Size: 0x0008 (0x000370 - 0x000378)
class UFabricMetaSoundSequencerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(UMidiStepSequence*)                        CurrentStepSequence                                         OFFSET(get<T>, {0x370, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSequencerPatchWrapper.SetMidiStepSequence
	// void SetMidiStepSequence(UMidiStepSequence* StepSequence);                                                               // [0xa4985d4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper
/// Size: 0x0030 (0x000370 - 0x0003A0)
class UFabricMetaSoundSpeakerPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	SMember(FName)                                     SpeakerEnabledMetasoundParam                                OFFSET(getStruct<T>, {0x370, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding>) EqBands                                     OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFabricMetaSoundSpeakerPatchEqBandUpdate                   OFFSET(getStruct<T>, {0x388, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapper.SetAudioBusFromSourceBus
	// void SetAudioBusFromSourceBus(USoundSourceBus* Bus);                                                                     // [0xa497fb4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricMetaSoundSplitterPatchWrapper
/// Size: 0x0058 (0x000370 - 0x0003C8)
class UFabricMetaSoundSplitterPatchWrapper : public UFabricMetaSoundPatchWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(TMap<FName, FFabricMetaSoundNodeInfo>)     SplitterNodes                                               OFFSET(get<T>, {0x378, 80, 0, 0})
};

/// Class /Script/FabricRuntime.FabricModulator
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricModulatorSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricModulatorDevice
/// Size: 0x0000 (0x000028 - 0x000028)
class UFabricModulatorDevice : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FabricRuntime.FabricProgressorManager
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UFabricProgressorManager : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnGlobalProgressionChanged                                  OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bHasActiveGlobalProgression                                 OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   GlobalPresetNumber                                          OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	SMember(FFabricProgressionPreset)                  GlobalProgression                                           OFFSET(getStruct<T>, {0xC0, 40, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricProgressorManager.SetGlobalProgression
	// void SetGlobalProgression(FFabricProgressionPreset& InProgression, int32_t InPresetNumber);                              // [0xa49d804] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricProgressorManager.OnProgressionChanged__DelegateSignature
	// void OnProgressionChanged__DelegateSignature();                                                                          // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/FabricRuntime.FabricProgressorManager.IsProgressionGlobal
	// bool IsProgressionGlobal(FFabricProgressionPreset& InProgression);                                                       // [0xa49d00c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricProgressorManager.HasActiveGlobalProgression
	// bool HasActiveGlobalProgression();                                                                                       // [0xa49ce2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalProgression
	// FFabricProgressionPreset GetGlobalProgression();                                                                         // [0xa49bd14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricProgressorManager.GetGlobalPresetNumber
	// int32_t GetGlobalPresetNumber();                                                                                         // [0xa49bcfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricSteppedPreviewFXComponent
/// Size: 0x0070 (0x000790 - 0x000800)
class UFabricSteppedPreviewFXComponent : public UInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	DMember(int32_t)                                   NumberOfSteps                                               OFFSET(get<int32_t>, {0x790, 4, 0, 0})
	DMember(bool)                                      bManuallySpaceMeshInstances                                 OFFSET(get<bool>, {0x794, 1, 0, 0})
	DMember(bool)                                      bAlignToTransformCenter                                     OFFSET(get<bool>, {0x795, 1, 0, 0})
	DMember(float)                                     CenterAlignmentBounds                                       OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     DistanceBetweenInstances                                    OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     DistanceBetweenTripletIntances                              OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     DistanceBetweenInstanceSets                                 OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     DistanceBetweenTripletInstanceSets                          OFFSET(get<float>, {0x7A8, 4, 0, 0})
	CMember(EFabricNoteStyle)                          NoteStyle                                                   OFFSET(get<T>, {0x7AC, 1, 0, 0})
	DMember(int32_t)                                   CPDDeviceEnabled                                            OFFSET(get<int32_t>, {0x7B0, 4, 0, 0})
	DMember(int32_t)                                   CPDNumSteps                                                 OFFSET(get<int32_t>, {0x7B4, 4, 0, 0})
	DMember(int32_t)                                   PICDNoteOn                                                  OFFSET(get<int32_t>, {0x7B8, 4, 0, 0})
	DMember(int32_t)                                   PICDNoteLength                                              OFFSET(get<int32_t>, {0x7BC, 4, 0, 0})
	DMember(int32_t)                                   PICDSpanLength                                              OFFSET(get<int32_t>, {0x7C0, 4, 0, 0})
	DMember(int32_t)                                   PICDNoteTime                                                OFFSET(get<int32_t>, {0x7C4, 4, 0, 0})
	DMember(int32_t)                                   PICDGenericFloatIndex                                       OFFSET(get<int32_t>, {0x7C8, 4, 0, 0})
	DMember(float)                                     LengthStepBeats                                             OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     StepLengthQuarterNotes                                      OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(float)                                     StepBeatScale                                               OFFSET(get<float>, {0x7D4, 4, 0, 0})
	DMember(float)                                     StepBeatOffset                                              OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(float)                                     LengthTrackBeats                                            OFFSET(get<float>, {0x7DC, 4, 0, 0})
	DMember(double)                                    InstanceSpace                                               OFFSET(get<double>, {0x7E0, 8, 0, 0})
	DMember(double)                                    InstanceSetSpace                                            OFFSET(get<double>, {0x7E8, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateStepData
	// void UpdateStepData(int32_t Index, bool bMarkRenderStateDirty);                                                          // [0xa49e4f8] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateDeviceEnabledFX
	// void UpdateDeviceEnabledFX(bool bEnabled);                                                                               // [0xa49e2b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.UpdateAllCurrentStepData
	// void UpdateAllCurrentStepData(int32_t NumSteps, float StepLengthBeats);                                                  // [0xa49e1f0] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetSpanLength
	// void SetSpanLength(int32_t InstanceIndex, float SpanLengthBeats);                                                        // [0xa49deac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNumSteps
	// void SetNumSteps(int32_t NumSteps);                                                                                      // [0xa49dcec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteTime
	// void SetNoteTime(int32_t InstanceIndex, float NoteTimeOffsetBeats);                                                      // [0xa49dc28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteOn
	// void SetNoteOn(int32_t InstanceIndex, float NoteOn, bool bMarkRenderStateDirty);                                         // [0xa49db30] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetNoteLength
	// void SetNoteLength(int32_t InstanceIndex, float NoteLengthBeats);                                                        // [0xa49da6c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.SetGenericFloatValue
	// void SetGenericFloatValue(int32_t InstanceIndex, float FloatValue, bool bMarkRenderStateDirty);                          // [0xa49d6fc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNoteLength);                                                               // [0xa49d47c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                                 // [0xa49d3f8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xa49d374] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xa49d2f0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                         // [0xa49d1e8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                                // [0xa49d13c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                              // [0xa49d0b8] Native|Protected     
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.GetNoteOn
	// float GetNoteOn(int32_t InstanceIndex);                                                                                  // [0xa49c77c] Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSteppedPreviewFXComponent.ConstructPreviewVisuals
	// void ConstructPreviewVisuals(int32_t NumSteps, float StepBeatLength, bool bInTestNotesOn);                               // [0xa49ba44] Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerPreviewFXComponent
/// Size: 0x0010 (0x000800 - 0x000810)
class UFabricSequencerPreviewFXComponent : public UFabricSteppedPreviewFXComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(TWeakObjectPtr<UFabricStepSequencerComponent*>) StepSequencer                                          OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFabricStepSequencerGridComponent*>) StepSequencerGrid                                  OFFSET(get<T>, {0x800, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.UpdateNoteOn
	// void UpdateNoteOn(int32_t Index, int32_t NumSteps, bool bMarkRenderStateDirty);                                          // [0xa49e3e0] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSustainLength
	// void SetSustainLength(int32_t InstanceIndex, float SustainLengthBeats);                                                  // [0xa49e034] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.SetSingleTrackNoteOn
	// void SetSingleTrackNoteOn(int32_t InstanceIndex, int32_t TrackPICDIndex, float NoteOn, bool bMarkRenderStateDirty);      // [0xa49dd6c] Final|Native|Private|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xa49d500] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xa49d1c0] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerPreviewFXComponent.InitializePreviewFXComponent
	// void InitializePreviewFXComponent(UFabricStepSequencerComponent* InStepSequencer, UFabricStepSequencerGridComponent* InStepSequencerGrid, bool bInTestNotesOn); // [0xa49ce44] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSequencerSustainComponent
/// Size: 0x0080 (0x000790 - 0x000810)
class UFabricSequencerSustainComponent : public UInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(TMap<FIntVector2, int32_t>)                StepToInstanceMapping                                       OFFSET(get<T>, {0x790, 80, 0, 0})
	DMember(int32_t)                                   PICDStartBeat                                               OFFSET(get<int32_t>, {0x7E0, 4, 0, 0})
	DMember(int32_t)                                   PICDEndBeat                                                 OFFSET(get<int32_t>, {0x7E4, 4, 0, 0})
	DMember(int32_t)                                   PICDLoopBeat                                                OFFSET(get<int32_t>, {0x7E8, 4, 0, 0})
	DMember(int32_t)                                   CPDDeviceEnabled                                            OFFSET(get<int32_t>, {0x7EC, 4, 0, 0})
	DMember(float)                                     GridSquareExtents                                           OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(float)                                     SustainInstanceYLocation                                    OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     SustainInstanceYScale                                       OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     SustainInstanceZScale                                       OFFSET(get<float>, {0x7FC, 4, 0, 0})
	CMember(TWeakObjectPtr<UFabricStepSequencerComponent*>) StepSequencer                                          OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(TWeakObjectPtr<UFabricStepSequencerGridComponent*>) StepSequencerGrid                                  OFFSET(get<T>, {0x808, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateVisibilityOfInstances
	// void UpdateVisibilityOfInstances();                                                                                      // [0xa49e884] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainMaterial
	// void UpdateSustainMaterial(int32_t InstanceIndex, int32_t HeadNoteStepIndex, int32_t TrackIndex);                        // [0xa49e790] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateSustainInstance
	// void UpdateSustainInstance(int32_t StepIndex, int32_t TrackIndex, int32_t PageIndex, bool bEnabled, bool bContinuous, bool bStepChanged); // [0xa49e5c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdatePipsOnGridChanged
	// void UpdatePipsOnGridChanged();                                                                                          // [0xa49e4e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.UpdateDeviceEnabledOnSustain
	// void UpdateDeviceEnabledOnSustain(bool bEnabled);                                                                        // [0xa49e34c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetStartBeat
	// void SetStartBeat(int32_t InstanceIndex, float StartBeatValue);                                                          // [0xa49df70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetLoopBeat
	// void SetLoopBeat(int32_t InstanceIndex, float LoopBeatValue);                                                            // [0xa49d9a8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.SetEndBeat
	// void SetEndBeat(int32_t InstanceIndex, float EndBeatValue);                                                              // [0xa49d638] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xa49d59c] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnPageChanged
	// void OnPageChanged(int32_t CurrentPage);                                                                                 // [0xa49d374] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xa49d2f0] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xa49d26c] Native|Protected     
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xa49d1d4] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.InitializeSustainComponent
	// void InitializeSustainComponent(UFabricStepSequencerComponent* InStepSequencer, UFabricStepSequencerGridComponent* InStepSequencerGrid); // [0xa49cf48] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindHeadNoteAndUpdateInstance
	// void FindHeadNoteAndUpdateInstance(int32_t StepIndex, int32_t TrackIndex);                                               // [0xa49bc14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.FindAndDeleteInstance
	// void FindAndDeleteInstance(int32_t StepIndex, int32_t TrackIndex);                                                       // [0xa49bb54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.ConstructSustains
	// void ConstructSustains();                                                                                                // [0xa49bb40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.CalculateSustainLength
	// float CalculateSustainLength(float NumStepsCoveredBySustain);                                                            // [0xa49b9b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricSequencerSustainComponent.AddSustainInstance
	// void AddSustainInstance(int32_t StepIndex, int32_t TrackIndex);                                                          // [0xa49b8f4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricSignificanceAsset
/// Size: 0x0010 (0x000030 - 0x000040)
class UFabricSignificanceAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FFabricSignificanceBasedUpdateBucket>) UpdateBuckets                                            OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FabricRuntime.FabricStepSequencerModulatable
/// Size: 0x0078 (0x0000A8 - 0x000120)
class UFabricStepSequencerModulatable : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(bool)                                      bIsChromatic                                                OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(bool)                                      bModulationValueChanged                                     OFFSET(get<bool>, {0x119, 1, 0, 0})
};

/// Class /Script/FabricRuntime.FabricStepSequencerComponent
/// Size: 0x0250 (0x0000A0 - 0x0002F0)
class UFabricStepSequencerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FMulticastInlineDelegate)                  OnNumTracksChanged                                          OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNumStepsChanged                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPageChanged                                               OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnQuarterNotesLengthChanged                                 OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeatScaleChanged                                          OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeatOffsetChanged                                         OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStepChanged                                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNoteStyleChanged                                          OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFullTableChanged                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPageCleared                                               OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoopEnded                                                 OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FString)                                   LengthParam                                                 OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FString)                                   DurationParam                                               OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FString)                                   PageParam                                                   OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FString)                                   AutoPageParam                                               OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	SMember(FString)                                   OctaveParam                                                 OFFSET(getStruct<T>, {0x198, 16, 0, 0})
	SMember(FString)                                   NoteStyleParam                                              OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	SMember(FString)                                   LoopParam                                                   OFFSET(getStruct<T>, {0x1B8, 16, 0, 0})
	DMember(bool)                                      bMonophonic                                                 OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	DMember(bool)                                      bSupportsContinuation                                       OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	DMember(float)                                     StepLengthQuarterNotes                                      OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     StepBeatScale                                               OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(bool)                                      bSkipFourthStepInTriplet                                    OFFSET(get<bool>, {0x1D4, 1, 0, 0})
	CMember(EFabricNoteStyle)                          NoteStyle                                                   OFFSET(get<T>, {0x1D5, 1, 0, 0})
	DMember(int32_t)                                   MaxSteps                                                    OFFSET(get<int32_t>, {0x1D8, 4, 0, 0})
	DMember(int32_t)                                   CurrentSteps                                                OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	DMember(bool)                                      bMatchStepsToTimeSignature                                  OFFSET(get<bool>, {0x1E0, 1, 0, 0})
	DMember(int32_t)                                   MaxPages                                                    OFFSET(get<int32_t>, {0x1E4, 4, 0, 0})
	DMember(int32_t)                                   CurrentPage                                                 OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
	DMember(int32_t)                                   MaxTracks                                                   OFFSET(get<int32_t>, {0x1EC, 4, 0, 0})
	DMember(int32_t)                                   CurrentTracks                                               OFFSET(get<int32_t>, {0x1F0, 4, 0, 0})
	DMember(int32_t)                                   LocalInteractionStartTrackIndex                             OFFSET(get<int32_t>, {0x1F4, 4, 0, 0})
	DMember(int32_t)                                   LocalInteractionStartStepIndex                              OFFSET(get<int32_t>, {0x1F8, 4, 0, 0})
	DMember(bool)                                      bAutoPage                                                   OFFSET(get<bool>, {0x1FC, 1, 0, 0})
	DMember(bool)                                      bAutoPagePlaysBlankPages                                    OFFSET(get<bool>, {0x1FD, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x1FE, 1, 0, 0})
	DMember(char)                                      RandomizationCommonSampleSize                               OFFSET(get<char>, {0x1FF, 1, 0, 0})
	DMember(float)                                     RandomizationRestSelectionMaxPct                            OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     RandomizationCommonPitchSelectionMaxPct                     OFFSET(get<float>, {0x204, 4, 0, 0})
	CMember(UClass*)                                   ContinuationControlClass                                    OFFSET(get<T>, {0x208, 8, 0, 0})
	SMember(FStepSequenceTable)                        LocalStepTable                                              OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FFabricStepTablePacked)                    PackedStepTable                                             OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	CMember(UFabricStepSequencerModulatable*)          StepSequencerModulatable                                    OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(AActor*)                                   CachedContinuationControl                                   OFFSET(get<T>, {0x268, 8, 0, 0})
	DMember(int32_t)                                   ContinuationRowIndex                                        OFFSET(get<int32_t>, {0x270, 4, 0, 0})
	DMember(int32_t)                                   ContinuationStepIndex                                       OFFSET(get<int32_t>, {0x274, 4, 0, 0})
	CMember(UMidiStepSequence*)                        MetaSoundMidiStepSequence                                   OFFSET(get<T>, {0x280, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabledOnPage
	// void ToggleStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                 // [0xa4a1c98] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ToggleStepEnabled
	// void ToggleStepEnabled(int32_t Row, int32_t Column);                                                                     // [0xa4a1bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabledOnPage
	// void SetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                                       // [0xa4a1a94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepEnabled
	// void SetStepEnabled(int32_t Row, int32_t Column, bool bState);                                                           // [0xa4a199c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuationOnPage
	// void SetStepContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bIsContinuation);                         // [0xa4a1860] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetStepContinuation
	// void SetStepContinuation(int32_t Row, int32_t Column, bool bIsContinuation);                                             // [0xa4a1768] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetQuarterNotesLength
	// void SetQuarterNotesLength(float QuarterNotes);                                                                          // [0xa4a16e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetPlaying
	// void SetPlaying(bool bNewPlaying);                                                                                       // [0xa4a1668] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberTracks
	// void SetNumberTracks(int32_t NumTracks);                                                                                 // [0xa4a15a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberSteps
	// void SetNumberSteps(int32_t NumSteps);                                                                                   // [0xa4a1524] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNumberPages
	// void SetNumberPages(int32_t NumPages);                                                                                   // [0xa4a1488] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteStyle
	// void SetNoteStyle(EFabricNoteStyle style);                                                                               // [0xa4a1408] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetNoteForTrack
	// void SetNoteForTrack(FMidiNote Note, int32_t Track);                                                                     // [0xa4a11e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMusicClock
	// void SetMusicClock(UMusicClockComponent* InMusicClock);                                                                  // [0xa4a10e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMonophonic
	// void SetMonophonic(bool bNewMonophonic);                                                                                 // [0xa4a1064] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetMaxSteps
	// void SetMaxSteps(int32_t NumSteps);                                                                                      // [0xa4a0fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetLoop
	// void SetLoop(bool bNewLoop);                                                                                             // [0xa4a0f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetCurrentPage
	// void SetCurrentPage(int32_t NewPage);                                                                                    // [0xa4a0dcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.SetBeatScale
	// void SetBeatScale(float BeatScale);                                                                                      // [0xa4a0ccc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizePage
	// void RandomizePage(int32_t Page);                                                                                        // [0xa4a0bcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.RandomizeCurrentPage
	// void RandomizeCurrentPage();                                                                                             // [0xa4a0bb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.OnRep_PackedStepTable
	// void OnRep_PackedStepTable();                                                                                            // [0xa4a0b04] Final|Native|Private 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrackOnPage
	// bool IsStepEnabledForAnyTrackOnPage(int32_t Page, int32_t Column);                                                       // [0xa4a056c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsStepEnabledForAnyTrack
	// bool IsStepEnabledForAnyTrack(int32_t Column);                                                                           // [0xa4a04d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.IsPageBlank
	// bool IsPageBlank(int32_t PageIndex);                                                                                     // [0xa4a0444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetSupportsContinuation
	// bool GetSupportsContinuation();                                                                                          // [0xa4a042c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartQuarterNotes
	// float GetStepStartQuarterNotes(int32_t Step);                                                                            // [0xa4a0388] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepStartBeat
	// float GetStepStartBeat(int32_t Step);                                                                                    // [0xa4a02dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuationOnPage
	// bool GetStepIsContinuationOnPage(int32_t Page, int32_t Row, int32_t Column);                                             // [0xa4a01e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepIsContinuation
	// bool GetStepIsContinuation(int32_t Row, int32_t Column);                                                                 // [0xa4a0118] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabledOnPage
	// bool GetStepEnabledOnPage(int32_t Page, int32_t Row, int32_t Column);                                                    // [0xa4a0020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepEnabled
	// bool GetStepEnabled(int32_t Row, int32_t Column);                                                                        // [0xa49ff54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLengthOnPage
	// float GetStepContinuationLengthOnPage(int32_t Page, int32_t Row, int32_t Column);                                        // [0xa49fe5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetStepContinuationLength
	// float GetStepContinuationLength(int32_t Row, int32_t Column);                                                            // [0xa49fd90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetPageData
	// void GetPageData(int32_t PageIndex, FStepSequencePage& OutPageData);                                                     // [0xa49fc78] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumUsedSteps
	// int32_t GetNumUsedSteps(int32_t TotalSteps);                                                                             // [0xa49fbbc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberTracks
	// int32_t GetNumberTracks();                                                                                               // [0xa49fc60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetNumberSteps
	// int32_t GetNumberSteps();                                                                                                // [0xa49fc48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMidiStepSequence
	// UMidiStepSequence* GetMidiStepSequence();                                                                                // [0x2d8d6d8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetMaxSteps
	// int32_t GetMaxSteps();                                                                                                   // [0x2cf311c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumnOnPage
	// float GetLongestContinuationLengthForColumnOnPage(int32_t Page, int32_t Column);                                         // [0xa49faf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLongestContinuationLengthForColumn
	// float GetLongestContinuationLengthForColumn(int32_t Column);                                                             // [0xa49fa60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackQuarterNotes
	// float GetLengthTrackQuarterNotes();                                                                                      // [0xa49fa20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthTrackBeats
	// float GetLengthTrackBeats();                                                                                             // [0xa49f9d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepQuarterNotes
	// float GetLengthStepQuarterNotes();                                                                                       // [0xa49f9b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetLengthStepBeats
	// float GetLengthStepBeats();                                                                                              // [0xa49f990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetCurrentPage
	// int32_t GetCurrentPage();                                                                                                // [0xa0aa404] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.GetContinuationFocusIndeces
	// void GetContinuationFocusIndeces(int32_t& OutRowIndex, int32_t& OutStepIndex, int32_t& OutNumContinuationSteps);         // [0xa49f4f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearPage
	// void ClearPage(int32_t Page);                                                                                            // [0xa49f474] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ClearCurrentPage
	// void ClearCurrentPage();                                                                                                 // [0xa49f45c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyTemplate
	// void ApplyTemplate(UMidiStepSequence* Template, int32_t StepSequencePageIndex);                                          // [0xa49f2b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerComponent.ApplyPage
	// void ApplyPage(int32_t PageIndex, FStepSequencePage& PageData);                                                          // [0xa49f1d8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridComponent
/// Size: 0x0070 (0x0002A0 - 0x000310)
class UFabricStepSequencerGridComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FVector2D)                                 GridExtents                                                 OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	SMember(FVector2D)                                 GridSpacing                                                 OFFSET(getStruct<T>, {0x2B0, 16, 0, 0})
	DMember(int32_t)                                   SingleTrackNumItemsPerRow                                   OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	SMember(FVector2D)                                 EditorPreviewGridSize                                       OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	CMember(UClass*)                                   GridSquareClass                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(TEnumAsByte<ESequencerType>)               SequencerType                                               OFFSET(get<T>, {0x2E0, 1, 0, 0})
	DMember(int32_t)                                   ActiveTrack                                                 OFFSET(get<int32_t>, {0x2E4, 4, 0, 0})
	CMember(UFabricStepSequencerComponent*)            StepSequencer                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TArray<FTrackRow>)                         GridRows                                                    OFFSET(get<T>, {0x2F0, 16, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetGridVisible
	// void SetGridVisible(bool bInGridVisible, bool bForceRefresh);                                                            // [0xa4a0e4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetBypassed
	// void SetBypassed(bool bBypassed);                                                                                        // [0xa4a0d4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.SetActiveTrackIndex
	// void SetActiveTrackIndex(int32_t ActiveTrackIndex);                                                                      // [0xa4a0c4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnStepChanged
	// void OnStepChanged(FFabricSequencerStepChangedInfo& StepInfo);                                                           // [0xa4a0b18] Final|Native|Protected|HasOutParms 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnQuarterNotesLengthChanged
	// void OnQuarterNotesLengthChanged(float QuarterNotesLength);                                                              // [0xa4a087c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumTracksChanged
	// void OnNumTracksChanged(int32_t NumTracks);                                                                              // [0xa4a0a84] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNumStepsChanged
	// void OnNumStepsChanged(int32_t NumSteps);                                                                                // [0xa4a0a04] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnNoteStyleChanged
	// void OnNoteStyleChanged(EFabricNoteStyle style);                                                                         // [0xa4a0988] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnFullTableChanged
	// void OnFullTableChanged();                                                                                               // [0xa4a0974] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnCurrentPageChanged
	// void OnCurrentPageChanged(int32_t NewPage);                                                                              // [0xa4a08f8] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatScaleChanged
	// void OnBeatScaleChanged(float BeatScale);                                                                                // [0xa4a087c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.OnBeatOffsetChanged
	// void OnBeatOffsetChanged(float BeatOffset);                                                                              // [0xa4a087c] Final|Native|Protected 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.NotifyInteractionFocusTargetExternallyChanged
	// void NotifyInteractionFocusTargetExternallyChanged(APlayerController* PlayerController, int32_t SourceRowIndex, int32_t SourceColumnIndex, int32_t FocusRowIndex, int32_t FocusColumnIndex, bool bIsFocused); // [0xa4a06b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsStepToggledOnForAnyTrack
	// bool IsStepToggledOnForAnyTrack(int32_t StepIndex);                                                                      // [0xa4a062c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.IsBypassed
	// bool IsBypassed();                                                                                                       // [0x94030d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareYPosition
	// float GetGridSquareYPosition(int32_t NumRows, int32_t RowIndex);                                                         // [0xa49f8cc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareXPosition
	// float GetGridSquareXPosition(int32_t NumSteps, int32_t StepIndex);                                                       // [0xa49f808] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareSize
	// FVector2D GetGridSquareSize(int32_t NumSteps, int32_t NumRows);                                                          // [0xa49f6f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridComponent.GetGridSquareExtents
	// FVector GetGridSquareExtents(int32_t RowIndex, int32_t ColumnIndex);                                                     // [0xa49f61c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricStepSequencerGridSquareComponent
/// Size: 0x00A0 (0x000640 - 0x0006E0)
class UFabricStepSequencerGridSquareComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(UClass*)                                   GridSquareIconClass                                         OFFSET(get<T>, {0x640, 8, 0, 0})
	SMember(FVector)                                   IconRelativeLocation                                        OFFSET(getStruct<T>, {0x648, 24, 0, 0})
	SMember(FVector)                                   IconRelativeScale                                           OFFSET(getStruct<T>, {0x660, 24, 0, 0})
	DMember(float)                                     ContinuationControlInteractionDelay                         OFFSET(get<float>, {0x680, 4, 0, 0})
	CMember(UFabricStepSequencerComponent*)            AssignedStepSequencer                                       OFFSET(get<T>, {0x688, 8, 0, 0})
	DMember(int32_t)                                   ActiveTrack                                                 OFFSET(get<int32_t>, {0x690, 4, 0, 0})
	DMember(int32_t)                                   AssignedStep                                                OFFSET(get<int32_t>, {0x694, 4, 0, 0})
	DMember(int32_t)                                   PreviousFocusStepIndex                                      OFFSET(get<int32_t>, {0x698, 4, 0, 0})
	CMember(UStaticMeshComponent*)                     IconComponent                                               OFFSET(get<T>, {0x6A0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.SetActiveTrack
	// void SetActiveTrack(int32_t Track);                                                                                      // [0xa4c6a8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_StartInteraction
	// void OnContinuationControl_StartInteraction(APlayerController* Controller);                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.OnContinuationControl_EndInteraction
	// void OnContinuationControl_EndInteraction(APlayerController* Controller);                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnStartInteraction
	// bool CanDoInteractionLogicOnStartInteraction();                                                                          // [0xa4c6860] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricStepSequencerGridSquareComponent.CanDoInteractionLogicOnEndInteraction
	// bool CanDoInteractionLogicOnEndInteraction();                                                                            // [0xa4c683c] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricTextureModifierBase
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFabricTextureModifierBase : public UFabricModulatable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  OnSourceTexturesChanged                                     OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(UTexture*)                                 ModifiedTexture                                             OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureModifierBase.OnSourceTextureChanged__DelegateSignature
	// void OnSourceTextureChanged__DelegateSignature(TArray<FFabricTextureProviderTexture>& Textures);                         // [0x101681c] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricTextureTreeNode
/// Size: 0x0028 (0x000028 - 0x000050)
class UFabricTextureTreeNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<UFabricTextureTreeNode*>)           Children                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FFabricTextureProviderTexture)             Texture                                                     OFFSET(getStruct<T>, {0x38, 24, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureTreeNode.Reset
	// void Reset();                                                                                                            // [0xa4c6a78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureTreeNode.CopyProperties
	// void CopyProperties(UFabricTextureTreeNode* Other);                                                                      // [0xa4c6884] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FabricRuntime.FabricTextureProviderBase
/// Size: 0x0038 (0x000028 - 0x000060)
class UFabricTextureProviderBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnTextureChanged                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FFabricTextureProviderTexture)             SourceTexture                                               OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	DMember(float)                                     CurrentCableFloatValue                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     CurrentCableFloatDirection                                  OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     TimeElapsedSinceLastCableFloatDirty                         OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bCurrentCableFloatDirty                                     OFFSET(get<bool>, {0x5C, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTextureProviderBase.SetSourceTexture
	// void SetSourceTexture(FFabricTextureProviderTexture& InTexture);                                                         // [0xa4c6b98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTextureProviderBase.OnTextureChanged__DelegateSignature
	// void OnTextureChanged__DelegateSignature(FFabricTextureProviderTexture& Texture);                                        // [0x101681c] MulticastDelegate|Public|Delegate|HasOutParms 
};

/// Class /Script/FabricRuntime.FabricTimelinePreviewComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UFabricTimelinePreviewComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(UTimelineComponent*)                       CurrentTimeline                                             OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.PreviewTimeline
	// void PreviewTimeline(UTimelineComponent* Timeline, float SecondsToPlay, bool bReverseAnimation);                         // [0xa4c6994] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelinePreviewComponent.GetShouldPreview
	// bool GetShouldPreview();                                                                                                 // [0x29d4b34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FabricRuntime.FabricTimelineSyncComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UFabricTimelineSyncComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(float)                                     ThresholdForSeekMS                                          OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     ThresholdForStartSpeedAdjustMS                              OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     ThresholdForEndOfSpeedAdjustMS                              OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SpeedAdjustFactor                                           OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bPrintToScreen                                              OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(float)                                     SpeedSyncTimeoutLength                                      OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(UFabricMetaSoundManagerComponent*)         MetaSoundManager                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UMusicClockComponent*)                     MusicClock                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMidiSongPos)                              ServerCurrentSongRenderPos                                  OFFSET(getStruct<T>, {0xC8, 64, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.SetFabricMetaSoundManager
	// void SetFabricMetaSoundManager(UFabricMetaSoundManagerComponent* MusicManagerComponent);                                 // [0xa4c6b0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnTimelinePlayingChanged
	// void OnTimelinePlayingChanged(EMusicClockState State);                                                                   // [0x77a18ec] Final|Native|Public  
	// Function /Script/FabricRuntime.FabricTimelineSyncComponent.OnRep_ServerCurrentSongPos
	// void OnRep_ServerCurrentSongPos();                                                                                       // [0xa4c697c] Final|Native|Public  
};

/// Class /Script/FabricRuntime.FabricWaveformTexture
/// Size: 0x0050 (0x000028 - 0x000078)
class UFabricWaveformTexture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   WaveformNumSamplesHeld                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   WaveformSmoothingDistance                                   OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     WaveformSmoothingFactor                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WaveformDecayPerSecond                                      OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(UTexture2D*)                               WaveformTexture                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bEnableTextureRequests                                      OFFSET(get<bool>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Script/FabricRuntime.FabricWaveformTexture.Initialize
	// void Initialize();                                                                                                       // [0xa4c6968] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.GetWaveformTexture
	// UTexture2D* GetWaveformTexture();                                                                                        // [0x556d2e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddNewValueToWaveformTexture
	// void AddNewValueToWaveformTexture(float Value);                                                                          // [0xa4c67bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FabricRuntime.FabricWaveformTexture.AddMultipleValuesToWaveformTexture
	// void AddMultipleValuesToWaveformTexture(TArray<float>& Values);                                                          // [0xa4c66e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/FabricRuntime.InteractionData
/// Size: 0x000C (0x000000 - 0x00000C)
class FInteractionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EFabricInteractionToolStates)              InteractionState                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortCreativeDeviceProp*>)  InteractableOwnerDevice                                     OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.InteractionSplinePoints
/// Size: 0x0060 (0x000000 - 0x000060)
class FInteractionSplinePoints : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector_NetQuantize10)                     SplineStartLocation                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     SplineStartForward                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     SplineEndLocation                                           OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     SplineEndForward                                            OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperBinding
/// Size: 0x0048 (0x000000 - 0x000048)
class FFabricMetaSoundPatchWrapperBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     FriendlyName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAllowOnDedicatedServer                                     OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperPeakTamer)     PeakTamer                                                   OFFSET(getStruct<T>, {0x8, 36, 0, 0})
	SMember(FName)                                     MetaSoundNodeName                                           OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(TArray<float>)                             Signals                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bBoundToWatchEvents                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperPeakTamer
/// Size: 0x0024 (0x000000 - 0x000024)
class FFabricMetaSoundPatchWrapperPeakTamer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(bool)                                      bUseGameplaySmoothing                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSortSignals                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   MaxSignalsToTame                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundPatchWrapperWetDryOutputBinding
/// Size: 0x0090 (0x000000 - 0x000090)
class FFabricMetaSoundPatchWrapperWetDryOutputBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFabricMetaSoundPatchWrapperBinding)       WetOutputSignalBinding                                      OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FFabricMetaSoundPatchWrapperBinding)       DryOutputSignalBinding                                      OFFSET(getStruct<T>, {0x48, 72, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundSpeakerPatchWrapperEqBandsBinding
/// Size: 0x0008 (0x000048 - 0x000050)
class FFabricMetaSoundSpeakerPatchWrapperEqBandsBinding : public FFabricMetaSoundPatchWrapperBinding
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   PrimitiveDataIndex                                          OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSequencerStepChangedInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricSequencerStepChangedInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Page                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Step                                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FStepSequenceCell)                         Cell                                                        OFFSET(getStruct<T>, {0xC, 2, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricProgressionPreset
/// Size: 0x0020 (0x000008 - 0x000028)
class FFabricProgressionPreset : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     ProgressionName                                             OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EHarmonicProgression)                      Interval0                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval1                                                   OFFSET(get<T>, {0x21, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval2                                                   OFFSET(get<T>, {0x22, 1, 0, 0})
	CMember(EHarmonicProgression)                      Interval3                                                   OFFSET(get<T>, {0x23, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricTextureProviderTexture
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricTextureProviderTexture : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FLinearColor)                              Tint                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricLFOGenerator
/// Size: 0x0078 (0x000000 - 0x000078)
class FFabricLFOGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EFabricWaveShape)                          WaveShape                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Shape                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   InitialSeed                                                 OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepGenerator
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricStepGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricValueSetterGenerator
/// Size: 0x0058 (0x000000 - 0x000058)
class FFabricValueSetterGenerator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   PhraseLengthInBars                                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FFabricMeshProviderMeshReferenceParamInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMaterialParameterInfo)                    MaterialParameterInfo                                       OFFSET(getStruct<T>, {0x0, 12, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Scalar
/// Size: 0x0004 (0x00000C - 0x000010)
class FFabricMeshProviderMeshReferenceParamInfo_Scalar : public FFabricMeshProviderMeshReferenceParamInfo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Scalar                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParamInfo_Color
/// Size: 0x0010 (0x00000C - 0x00001C)
class FFabricMeshProviderMeshReferenceParamInfo_Color : public FFabricMeshProviderMeshReferenceParamInfo
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xC, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReferenceParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricMeshProviderMeshReferenceParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    UniformScale                                                OFFSET(get<double>, {0x0, 8, 0, 0})
	CMember(TArray<FFabricMeshProviderMeshReferenceParamInfo_Scalar>) ScalarParams                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FFabricMeshProviderMeshReferenceParamInfo_Color>) ColorParams                                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshProviderMeshReference
/// Size: 0x0038 (0x000000 - 0x000038)
class FFabricMeshProviderMeshReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UStreamableRenderAsset*)                   Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFabricMeshProviderMeshReferenceParams)    Params                                                      OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMeshInstanceReference
/// Size: 0x0048 (0x000000 - 0x000048)
class FFabricMeshInstanceReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FFabricMeshProviderMeshReference)          MeshReference                                               OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TArray<FTransform>)                        InstanceTransforms                                          OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FFabricMetaSoundNodeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMetaSoundNodeHandle)                      NodeHandle                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMetaSoundNodeHandle)                      OutputConnectionHandle                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FMetaSoundNodeHandle)                      InputConnectionHandle                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TMap<FName, FMetaSoundBuilderNodeOutputHandle>) InputNodeNamesToHandles                                OFFSET(get<T>, {0x38, 80, 0, 0})
	SMember(FMetaSoundNodeHandle)                      AnalyzerHandle                                              OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(UMetasoundParameterPack*)                  AnalyzerParameterPack                                       OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FName)                                     AnalyzerName                                                OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FMetaSoundNodeHandle)                      SwitcherHandle                                              OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	SMember(FMetaSoundNodeHandle)                      SelectHandle                                                OFFSET(getStruct<T>, {0xB4, 16, 0, 0})
	SMember(FName)                                     NodeEnabledInput                                            OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     AnalyzerNodeVisibleInput                                    OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	CMember(TArray<FName>)                             AnalyzerOutputNames                                         OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(UMetaSoundPatch*)                          PatchSpawnedFrom                                            OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UMetasoundParameterPack*)                  ParameterPack                                               OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.MetaSoundCombinerNodeHandle
/// Size: 0x0150 (0x000000 - 0x000150)
class FMetaSoundCombinerNodeHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FFabricMetaSoundNodeInfo)                  NodeInfo                                                    OFFSET(getStruct<T>, {0x0, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          CombinerInput1                                              OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          CombinerInput2                                              OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	SMember(FMetaSoundBuilderNodeOutputHandle)         CombinedOutput                                              OFFSET(getStruct<T>, {0x130, 32, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundNodePool
/// Size: 0x0020 (0x000000 - 0x000020)
class FFabricMetaSoundNodePool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   NumberAdded                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FFabricMetaSoundNodeInfo>)          FreeNodes                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(UMetaSoundPatch*)                          PatchSpawnedFrom                                            OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityParams
/// Size: 0x0008 (0x000000 - 0x000008)
class FFabricMetaSoundUtilityParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     SwitcherEnabledParam                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SelectEnabledParam                                          OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUtilityPatches
/// Size: 0x0088 (0x000000 - 0x000088)
class FFabricMetaSoundUtilityPatches : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          CombinerNode                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          SwitcherNode                                                OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          SelectNode                                                  OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TWeakObjectPtr<UMetaSoundPatch*>)          AnalyzerNode                                                OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FFabricMetaSoundUtilityParams)             UtilityNodeParams                                           OFFSET(getStruct<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricLoadedUtilityPatches
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricLoadedUtilityPatches : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UMetaSoundPatch*)                          CombinerNode                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMetaSoundPatch*)                          SwitcherNode                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UMetaSoundPatch*)                          SelectNode                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UMetaSoundPatch*)                          AnalyzerNode                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FFabricMetaSoundUtilityParams)             UtilityNodeParams                                           OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundDirectInputInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FFabricMetaSoundDirectInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MetaSoundInputName                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EFabricUserOptionType)                     InputType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundUserOptionInputInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricMetaSoundUserOptionInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   UserOption                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     MetaSoundInputName                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricMetaSoundRuntimeInputInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricMetaSoundRuntimeInputInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFabricMetaSoundUserOptionInputInfo)       InputInfo                                                   OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EFabricMetasoundInputType)                 InputType                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(EFabricUserOptionType)                     FabricKnobType                                              OFFSET(get<T>, {0x19, 1, 0, 0})
	SMember(FName)                                     DataType                                                    OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     MetaSoundInputNodeName                                      OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	DMember(bool)                                      bIsModulated                                                OFFSET(get<bool>, {0x24, 1, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricConnectedInputWrapperInfo
/// Size: 0x0230 (0x000000 - 0x000230)
class FFabricConnectedInputWrapperInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(bool)                                      bDirectlyConnected                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UFabricMetaSoundPatchWrapper*)             Wrapper                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  OutputNode                                                  OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeOutputHandle)         ConnectedNodeOutput                                         OFFSET(getStruct<T>, {0x100, 32, 0, 0})
	SMember(FFabricMetaSoundNodeInfo)                  InputNode                                                   OFFSET(getStruct<T>, {0x120, 240, 0, 0})
	SMember(FMetaSoundBuilderNodeInputHandle)          CombinerNodeInput                                           OFFSET(getStruct<T>, {0x210, 32, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucket
/// Size: 0x0010 (0x000000 - 0x000010)
class FFabricSignificanceBasedUpdateBucket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     MinDistanceFromPlayer                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDistanceFromPlayer                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FramesPerUpdate                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxObjectsInBucket                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntimeGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricSignificanceBasedUpdateBucketRuntimeGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TWeakObjectPtr>)                    ObjectsInGroup                                              OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricSignificanceBasedUpdateBucketRuntime
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricSignificanceBasedUpdateBucketRuntime : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     ActualMinSignificance                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ActualMaxSignificance                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActualMaxObjectsInBucket                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ActualFramesPerUpdate                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   TotalObjectsInBucketCount                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TArray<FFabricSignificanceBasedUpdateBucketRuntimeGroup>) UpdateGroups                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepTrackPacked
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricStepTrackPacked : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<int32_t>)                           PackedEnabledSquares                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           PackedContinuationSquares                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   TrackIndex                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepPagePacked
/// Size: 0x0018 (0x000000 - 0x000018)
class FFabricStepPagePacked : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FFabricStepTrackPacked>)            PackedTracks                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PageNumber                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepTablePacked
/// Size: 0x0028 (0x000000 - 0x000028)
class FFabricStepTablePacked : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FFabricStepPagePacked>)             PackedPages                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FStepSequenceNote>)                 Notes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   StepSkipIndex                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/FabricRuntime.FabricStepSequencerComponentBaseInstanceData
/// Size: 0x0028 (0x000068 - 0x000090)
class FFabricStepSequencerComponentBaseInstanceData : public FActorComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFabricStepTablePacked)                    PackedStepTable                                             OFFSET(getStruct<T>, {0x68, 40, 0, 0})
};

/// Struct /Script/FabricRuntime.TrackRow
/// Size: 0x0010 (0x000000 - 0x000010)
class FTrackRow : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UFabricStepSequencerGridSquareComponent*>) GridSquares                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/FabricRuntime.EFabricContinuousInteractionDirection
/// Size: 0x03
enum EFabricContinuousInteractionDirection : uint8_t
{
	EFabricContinuousInteractionDirection__Vertical0                                 = 0,
	EFabricContinuousInteractionDirection__Horizontal1                               = 1,
	EFabricContinuousInteractionDirection__EFabricContinuousInteractionDirection_MAX2 = 2
};

/// Enum /Script/FabricRuntime.EFabricInteractionToolStates
/// Size: 0x09
enum EFabricInteractionToolStates : uint8_t
{
	EFabricInteractionToolStates__Equipped0                                          = 0,
	EFabricInteractionToolStates__HoveredControl1                                    = 1,
	EFabricInteractionToolStates__HoveredValidCablePort2                             = 2,
	EFabricInteractionToolStates__HoveredInvalid3                                    = 3,
	EFabricInteractionToolStates__ContinuousSelected4                                = 4,
	EFabricInteractionToolStates__MomentarySelected5                                 = 5,
	EFabricInteractionToolStates__CableSelected6                                     = 6,
	EFabricInteractionToolStates__None7                                              = 7,
	EFabricInteractionToolStates__EFabricInteractionToolStates_MAX8                  = 8
};

/// Enum /Script/FabricRuntime.EFabricInteractableType
/// Size: 0x05
enum EFabricInteractableType : uint8_t
{
	EFabricInteractableType__Momentary0                                              = 0,
	EFabricInteractableType__Continuous1                                             = 1,
	EFabricInteractableType__Cable2                                                  = 2,
	EFabricInteractableType__None3                                                   = 3,
	EFabricInteractableType__EFabricInteractableType_MAX4                            = 4
};

/// Enum /Script/FabricRuntime.EFabricNoteStyle
/// Size: 0x04
enum EFabricNoteStyle : uint8_t
{
	EFabricNoteStyle__Straight0                                                      = 0,
	EFabricNoteStyle__Triplet1                                                       = 1,
	EFabricNoteStyle__Dotted2                                                        = 2,
	EFabricNoteStyle__EFabricNoteStyle_MAX3                                          = 3
};

/// Enum /Script/FabricRuntime.EFabricFloatProviderType
/// Size: 0x03
enum EFabricFloatProviderType : uint8_t
{
	EFabricFloatProviderType__Continuous0                                            = 0,
	EFabricFloatProviderType__Instantaneous1                                         = 1,
	EFabricFloatProviderType__EFabricFloatProviderType_MAX2                          = 2
};

/// Enum /Script/FabricRuntime.EFabricWaveSyncType
/// Size: 0x03
enum EFabricWaveSyncType : uint8_t
{
	EFabricWaveSyncType__Free0                                                       = 0,
	EFabricWaveSyncType__BeatSync1                                                   = 1,
	EFabricWaveSyncType__EFabricWaveSyncType_MAX2                                    = 2
};

/// Enum /Script/FabricRuntime.EFabricWaveShape
/// Size: 0x07
enum EFabricWaveShape : uint8_t
{
	EFabricWaveShape__Sine0                                                          = 0,
	EFabricWaveShape__Triangle1                                                      = 1,
	EFabricWaveShape__Saw2                                                           = 2,
	EFabricWaveShape__Square3                                                        = 3,
	EFabricWaveShape__RandomStepped4                                                 = 4,
	EFabricWaveShape__RandomSmooth5                                                  = 5,
	EFabricWaveShape__EFabricWaveShape_MAX6                                          = 6
};

/// Enum /Script/FabricRuntime.EFabricValueSetterTransitionTiming
/// Size: 0x05
enum EFabricValueSetterTransitionTiming : uint8_t
{
	Immediate0                                                                       = 0,
	NextBeat1                                                                        = 1,
	NextBar2                                                                         = 2,
	NextPhrase3                                                                      = 3,
	EFabricValueSetterTransitionTiming_MAX4                                          = 4
};

/// Enum /Script/FabricRuntime.EFabricCloneTransformBehavior
/// Size: 0x06
enum EFabricCloneTransformBehavior : uint8_t
{
	EFabricCloneTransformBehavior__None0                                             = 0,
	EFabricCloneTransformBehavior__Uniform1                                          = 1,
	EFabricCloneTransformBehavior__Stepped2                                          = 2,
	EFabricCloneTransformBehavior__SteppedCentered3                                  = 3,
	EFabricCloneTransformBehavior__SteppedExponential4                               = 4,
	EFabricCloneTransformBehavior__EFabricCloneTransformBehavior_MAX5                = 5
};

/// Enum /Script/FabricRuntime.EFabricMetasoundPlayState
/// Size: 0x05
enum EFabricMetasoundPlayState : uint8_t
{
	EFabricMetasoundPlayState__Playing0                                              = 0,
	EFabricMetasoundPlayState__Rebuilding1                                           = 1,
	EFabricMetasoundPlayState__Paused2                                               = 2,
	EFabricMetasoundPlayState__Stopped3                                              = 3,
	EFabricMetasoundPlayState__EFabricMetasoundPlayState_MAX4                        = 4
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPinDirection
/// Size: 0x03
enum EFabricMetaSoundPinDirection : uint8_t
{
	EFabricMetaSoundPinDirection__Input0                                             = 0,
	EFabricMetaSoundPinDirection__Output1                                            = 1,
	EFabricMetaSoundPinDirection__EFabricMetaSoundPinDirection_MAX2                  = 2
};

/// Enum /Script/FabricRuntime.EFabricMetasoundInputType
/// Size: 0x04
enum EFabricMetasoundInputType : uint8_t
{
	EFabricMetasoundInputType__ModulatedUserOption0                                  = 0,
	EFabricMetasoundInputType__NonModulatedUserOption1                               = 1,
	EFabricMetasoundInputType__DirectInput2                                          = 2,
	EFabricMetasoundInputType__EFabricMetasoundInputType_MAX3                        = 3
};

/// Enum /Script/FabricRuntime.EFabricMetaSoundPatchWrapperQuality
/// Size: 0x03
enum EFabricMetaSoundPatchWrapperQuality : uint8_t
{
	EFabricMetaSoundPatchWrapperQuality__High0                                       = 0,
	EFabricMetaSoundPatchWrapperQuality__Low1                                        = 1,
	EFabricMetaSoundPatchWrapperQuality__EFabricMetaSoundPatchWrapperQuality_MAX2    = 2
};

/// Enum /Script/FabricRuntime.EFabricUserOptionType
/// Size: 0x06
enum EFabricUserOptionType : uint8_t
{
	EFabricUserOptionType__Boolean0                                                  = 0,
	EFabricUserOptionType__Integer1                                                  = 1,
	EFabricUserOptionType__Float2                                                    = 2,
	EFabricUserOptionType__String3                                                   = 3,
	EFabricUserOptionType__Enum4                                                     = 4,
	EFabricUserOptionType__EFabricUserOptionType_MAX5                                = 5
};

/// Enum /Script/FabricRuntime.ESequencerType
/// Size: 0x03
enum ESequencerType : uint8_t
{
	ESequencerType__MultiTrack0                                                      = 0,
	ESequencerType__SingleTrack1                                                     = 1,
	ESequencerType__ESequencerType_MAX2                                              = 2
};

