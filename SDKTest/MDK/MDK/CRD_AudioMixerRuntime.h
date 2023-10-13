
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice
/// Size: 0x0090 (0x000BC8 - 0x000C58)
class ACreativeAudioMixerDevice : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3160;

public:
	CMember(USoundControlBusMix*)                      Mix                                                         OFFSET(get<T>, {0xBD0, 8, 0, 0})
	CMember(USoundControlBus*)                         Bus                                                         OFFSET(get<T>, {0xBD8, 8, 0, 0})
	DMember(float)                                     FaderValue                                                  OFFSET(get<float>, {0xBE0, 4, 0, 0})
	CMember(ECreativeRegisteredPlayerGroups)           CanBeHeardBy                                                OFFSET(get<T>, {0xBE4, 1, 0, 0})
	DMember(bool)                                      bActivateInEditMode                                         OFFSET(get<bool>, {0xBE5, 1, 0, 0})
	DMember(bool)                                      bActivateOnGameStart                                        OFFSET(get<bool>, {0xBE6, 1, 0, 0})
	CMember(UCreativeProxyManagerComponent*)           CreativeProxyManagerComponent                               OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(UFortMinigameProgressComponent*)           FortMinigameProgressComponent                               OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(UCreativeRegisteredPlayersManagerComponent*) CreativeRegisteredPlayersManagerComponent                 OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(UFortActorOptionsComponent*)               FortActorOptionsComponent                                   OFFSET(get<T>, {0xC00, 8, 0, 0})
	DMember(bool)                                      bCachedIsActive                                             OFFSET(get<bool>, {0xC08, 1, 0, 0})
	CMember(AController*)                              CachedInstigator                                            OFFSET(get<T>, {0xC10, 8, 0, 0})
	CMember(ACreativeAudioMixerReplicationProxy*)      ClientCachedProxy                                           OFFSET(get<T>, {0xC18, 8, 0, 0})
	CMember(USoundControlBusMix*)                      CachedBusMix                                                OFFSET(get<T>, {0xC20, 8, 0, 0})
	SMember(FName)                                     CachedBusMixName                                            OFFSET(getStruct<T>, {0xC28, 4, 0, 0})
	DMember(bool)                                      bIsActiveForEveryone                                        OFFSET(get<bool>, {0xC2C, 1, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  RegisteredPlayerIds                                         OFFSET(get<T>, {0xC30, 16, 0, 0})
	CMember(TArray<FUniqueNetIdRepl>)                  NonRegisteredPlayerIds                                      OFFSET(get<T>, {0xC40, 16, 0, 0})
	DMember(bool)                                      bHasUpdatedStateInEditMode                                  OFFSET(get<bool>, {0xC50, 1, 0, 0})
	DMember(bool)                                      bHasUpdatedStateInGameplay                                  OFFSET(get<bool>, {0xC51, 1, 0, 0})


	/// Functions
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnRep_IsActiveForEveryone
	// void OnRep_IsActiveForEveryone();                                                                                        // [0x9c289a0] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnProxyDataChanged
	// void OnProxyDataChanged(ACreativePlayerReplicationProxy* ProxyData);                                                     // [0x9c28918] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerUnregistered
	// void OnPlayerUnregistered(AFortPlayerState* PlayerState);                                                                // [0x9c28894] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerRegistered
	// void OnPlayerRegistered(AFortPlayerState* PlayerState);                                                                  // [0x9c28810] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnPlayerAdded
	// void OnPlayerAdded(FUniqueNetIdRepl NetId, bool bIsLocalPlayer);                                                         // [0x9c28534] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0x9c28518] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnMinigameEnded
	// void OnMinigameEnded();                                                                                                  // [0x9c284fc] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnAnyPropertyChanged
	// void OnAnyPropertyChanged();                                                                                             // [0x9c284e4] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.OnAllPlayersUnregistered
	// void OnAllPlayersUnregistered();                                                                                         // [0x4012660] Final|Native|Private 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.DeactivateMix
	// void DeactivateMix();                                                                                                    // [0x2cf4738] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRD_AudioMixerRuntime.CreativeAudioMixerDevice.ActivateMix
	// void ActivateMix();                                                                                                      // [0x2cf4738] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CRD_AudioMixerRuntime.CreativeAudioMixerReplicationProxy
/// Size: 0x0008 (0x000298 - 0x0002A0)
class ACreativeAudioMixerReplicationProxy : public ACreativePlayerReplicationProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x298, 1, 0, 0})
};

