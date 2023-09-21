
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility
/// Size: 0x0080 (0x000B28 - 0x000BA8)
class UCreativeVideoPlayerFullscreenGameplayAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
	CMember(UClass*)                                   NoCollisionGameplayEffectClass                              OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   NoDamageGameplayEffectClass                                 OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(TArray<UClass*>)                           AnimationStateGameplayEffectClasses                         OFFSET(get<T>, {0xB38, 16, 0, 0})
	CMember(UClass*)                                   FullscreenWidgetClass                                       OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(ECreativeVideoPlayerFullscreenEffects)     FullscreenEffects                                           OFFSET(get<T>, {0xB50, 1, 0, 0})
	DMember(bool)                                      bPromptToConfirmFullscreen                                  OFFSET(get<bool>, {0xB51, 1, 0, 0})
	DMember(bool)                                      bIsDismissable                                              OFFSET(get<bool>, {0xB52, 1, 0, 0})
	CMember(UFortInputComponent*)                      OverrideMovementInputComponent                              OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(UFortInputComponent*)                      SelectFullscreenModeInputComponent                          OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(TArray<FActiveGameplayEffectHandle>)       ActiveGameplayEffects                                       OFFSET(get<T>, {0xB68, 16, 0, 0})
	CMember(ECreativeVideoPlayerFullscreenEffects)     RequestedFullscreenEffects                                  OFFSET(get<T>, {0xB78, 1, 0, 0})
	CMember(UUserWidget*)                              VideoPlayerWidget                                           OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(UMediaTexture*)                            ExtMediaTextureCached                                       OFFSET(get<T>, {0xB88, 8, 0, 0})
	CMember(USoundSourceBus*)                          ExtSourceBusCached                                          OFFSET(get<T>, {0xB90, 8, 0, 0})
	CMember(UMediaSoundComponent*)                     ExtMediaSoundComponentCached                                OFFSET(get<T>, {0xB98, 8, 0, 0})
	DMember(bool)                                      bExtComponentsSet                                           OFFSET(get<bool>, {0xBA0, 1, 0, 0})
	DMember(bool)                                      bActivatedFullscreen                                        OFFSET(get<bool>, {0xBA1, 1, 0, 0})


	/// Functions
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.SetExternalComponents
	// void SetExternalComponents(UMediaTexture* ExtMediaTexture, USoundSourceBus* ExtSourceBus, UMediaSoundComponent* ExtMediaSoundComponent); // [0x9a63304] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerLeaveFullscreenMode
	// void ServerLeaveFullscreenMode();                                                                                        // [0x7616518] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ServerEnterFullscreenMode
	// void ServerEnterFullscreenMode();                                                                                        // [0x875e078] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.OnFullscreenUIEnds
	// void OnFullscreenUIEnds();                                                                                               // [0x9a632f0] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionReleased
	// void HandleEnterFullscreenActionReleased();                                                                              // [0x9a632dc] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.HandleEnterFullscreenActionPressed
	// void HandleEnterFullscreenActionPressed();                                                                               // [0x2d79908] Final|Native|Private 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ExitFullscreenState
	// void ExitFullscreenState();                                                                                              // [0x9a632b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenStateWithOptions
	// void EnterFullscreenStateWithOptions(FCreativeVideoPlayerFullscreenOptions Options);                                     // [0x9a63150] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.EnterFullscreenState
	// void EnterFullscreenState();                                                                                             // [0x9a63124] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientTransitionToFullscreenVideo
	// void ClientTransitionToFullscreenVideo();                                                                                // [0x7616530] Final|Net|NetReliableNative|Event|Private|NetClient 
	// Function /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenGameplayAbility.ClientLeaveFullscreenVideo
	// void ClientLeaveFullscreenVideo();                                                                                       // [0x7616438] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeVideoPlayerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerWorldSubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UCreativeVideoPlayerWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMulticastInlineDelegate)                  OnNotifyFullscreenChange                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CreativeVideoPlayerRuntime.CreativeVideoPlayerFullscreenOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FCreativeVideoPlayerFullscreenOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(ECreativeVideoPlayerFullscreenEffects)     GameplayEffects                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bPromptFirst                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Enum /Script/CreativeVideoPlayerRuntime.ECreativeVideoPlayerFullscreenEffects
/// Size: 0x05
enum ECreativeVideoPlayerFullscreenEffects : uint8_t
{
	ECreativeVideoPlayerFullscreenEffects__None0                                     = 0,
	ECreativeVideoPlayerFullscreenEffects__NoCollisionOnly1                          = 1,
	ECreativeVideoPlayerFullscreenEffects__NoDamageOnly2                             = 2,
	ECreativeVideoPlayerFullscreenEffects__NoCollisionAndNoDamage3                   = 3,
	ECreativeVideoPlayerFullscreenEffects__ECreativeVideoPlayerFullscreenEffects_MAX4 = 4
};

