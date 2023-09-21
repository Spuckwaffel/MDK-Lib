
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: GameFeatures
/// dependency: GameplayTags

/// Class /Script/SoundLibrary.SoundLibraryContext
/// Size: 0x0030 (0x000028 - 0x000058)
class USoundLibraryContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FGameplayTag)                              BaseEventName                                               OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(bool)                                      bForwardToActorOwner                                        OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bForwardToAttachedActors                                    OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bAutoResetContext                                           OFFSET(get<bool>, {0x36, 1, 0, 0})
	SMember(FGameplayTagContainer)                     PlaybackTags                                                OFFSET(get<T>, {0x38, 32, 0, 0})
};



	/// Functions
	// Function /Script/SoundLibrary.SoundLibraryContext.Play
	// bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents);                         // [0x11e1098] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryContext.OnRemovedFromActor
	// void OnRemovedFromActor(AActor* InActor);                                                                                // [0x65f840c] Native|Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryContext.OnAddedToActor
	// void OnAddedToActor(AActor* InActor);                                                                                    // [0x65f8388] Native|Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryContext.GatherActorTargets
	// bool GatherActorTargets(TArray<AActor*>& OutActors);                                                                     // [0x16d0584] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/SoundLibrary.SoundLibraryContext.CreateEventName
	// bool CreateEventName(FGameplayTag& OutEventName);                                                                        // [0x16d0ba4] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
/// Class /Script/SoundLibrary.SoundLibraryAnimContext
/// Size: 0x0040 (0x000058 - 0x000098)
class USoundLibraryAnimContext : public USoundLibraryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSoundLibraryAnimContextSettings)          AnimSettings                                                OFFSET(get<T>, {0x58, 36, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequenceBase*>)        Animation                                                   OFFSET(get<T>, {0x7C, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   MeshComponent                                               OFFSET(get<T>, {0x84, 8, 0, 0})
	DMember(bool)                                      bSupportsNotifyEnd                                          OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(float)                                     AnimRate                                                    OFFSET(get<float>, {0x90, 4, 0, 0})
};



	/// Functions
	// Function /Script/SoundLibrary.SoundLibraryAnimContext.ConfigureContext
	// void ConfigureContext(AActor* OwningActor, UAnimSequenceBase* InAnimation, FSoundLibraryAnimContextSettings& InSettings); // [0x65f7d18] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Class /Script/SoundLibrary.SoundLibraryAnimNotifyHelper
/// Size: 0x0010 (0x000028 - 0x000038)
class USoundLibraryAnimNotifyHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<TWeakObjectPtr>)                    PlayingComps                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/SoundLibrary.AnimNotify_SoundLibrary
/// Size: 0x0010 (0x000038 - 0x000048)
class UAnimNotify_SoundLibrary : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(USoundLibraryContext*)                     SoundContext                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(USoundLibraryAnimNotifyHelper*)            NotifyHelper                                                OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/SoundLibrary.AnimNotifyState_SoundLibrary
/// Size: 0x0010 (0x000030 - 0x000040)
class UAnimNotifyState_SoundLibrary : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USoundLibraryContext*)                     SoundContext                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(USoundLibraryAnimNotifyHelper*)            NotifyHelper                                                OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/SoundLibrary.GameFeatureAction_AddSoundLibraryCollection
/// Size: 0x0030 (0x000028 - 0x000058)
class UGameFeatureAction_AddSoundLibraryCollection : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<TWeakObjectPtr>)                    CollectionList                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    TrackedSubsystems                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/SoundLibrary.SoundLibrary
/// Size: 0x0148 (0x000028 - 0x000170)
class USoundLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(TMap<FGameplayTag, TWeakObjectPtr>)        Sounds                                                      OFFSET(get<T>, {0x28, 80, 0, 0})
	SMember(FAudioGameplayRequirements)                LibraryRequirements                                         OFFSET(get<T>, {0x78, 80, 0, 0})
	SMember(FGameplayTag)                              Channel                                                     OFFSET(get<T>, {0xC8, 4, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0xCC, 4, 0, 0})
	SMember(FGameplayTagContainer)                     MetaData                                                    OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TMap<FGameplayTag, TWeakObjectPtr>)        FullLibrary                                                 OFFSET(get<T>, {0xF0, 80, 0, 0})
	CMember(TArray<USoundBase*>)                       LoadedSoundObjects                                          OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Assets                                                      OFFSET(get<T>, {0x150, 16, 0, 0})
};



	/// Functions
	// Function /Script/SoundLibrary.SoundLibrary.SetPriority
	// void SetPriority(int32_t InPriority);                                                                                    // [0x65f8e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrary.SetChannel
	// void SetChannel(FGameplayTag InTag);                                                                                     // [0x65f8d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrary.FindSound
	// USoundBase* FindSound(FGameplayTag InTag);                                                                               // [0x65f80ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SoundLibrary.SoundLibrary.AddSound
	// void AddSound(FGameplayTag InTag, USoundBase* InSound);                                                                  // [0x65f7aa4] Final|Native|Public|BlueprintCallable 
/// Class /Script/SoundLibrary.SoundLibraryComponent
/// Size: 0x0090 (0x0000A8 - 0x000138)
class USoundLibraryComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FGameplayTag)                              ComponentTag                                                OFFSET(get<T>, {0xB0, 4, 0, 0})
	CMember(UClass*)                                   ContextClass                                                OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<USoundLibrary*>)                    Libraries                                                   OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSoundLibraryPlayEvent                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(USoundLibraryContext*)                     Context                                                     OFFSET(get<T>, {0x130, 8, 0, 0})
};



	/// Functions
	// Function /Script/SoundLibrary.SoundLibraryComponent.StopEvent
	// bool StopEvent(FGameplayTag InEventName);                                                                                // [0x2b43980] Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.RemoveLibrary
	// void RemoveLibrary(USoundLibrary* InLibrary);                                                                            // [0x65f8c78] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.RemoveLibraries
	// void RemoveLibraries(TArray<USoundLibrary*>& InLibraries);                                                               // [0x65f8bd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.PlayEvent
	// FSoundLibraryPlayResult PlayEvent(FGameplayTag InEventName);                                                             // [0x296d714] Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnSoundStoppedBP
	// void OnSoundStoppedBP(FGameplayTag InEventName, UAudioComponent* InComponent, bool& bHandledInBlueprint);                // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnSoundStopped
	// void OnSoundStopped(FGameplayTag InEventName, UAudioComponent* InComponent, bool& bStopped);                             // [0x65f870c] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnSoundPlayedBP
	// void OnSoundPlayedBP(FGameplayTag InEventName, UAudioComponent* InComponent);                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.OnSoundPlayed
	// void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent* InComponent);                                              // [0x65f8490] Native|Event|Public|BlueprintEvent 
	// Function /Script/SoundLibrary.SoundLibraryComponent.IsEventActive
	// bool IsEventActive(FGameplayTag InEventName);                                                                            // [0x1fd142c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SoundLibrary.SoundLibraryComponent.GetContext
	// USoundLibraryContext* GetContext();                                                                                      // [0x2b10250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SoundLibrary.SoundLibraryComponent.AddLibrary
	// void AddLibrary(USoundLibrary* InLibrary);                                                                               // [0x65f79ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibraryComponent.AddLibraries
	// void AddLibraries(TArray<USoundLibrary*>& InLibraries);                                                                  // [0x65f794c] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Class /Script/SoundLibrary.SoundLibraryProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundLibraryProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SoundLibrary.SoundLibraryCollection
/// Size: 0x0050 (0x000030 - 0x000080)
class USoundLibraryCollection : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FGameplayTag, FSoundLibrarySet>)      Libraries                                                   OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/SoundLibrary.SoundLibrarySettings
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundLibrarySettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<USoundLibraryCollection*>)  CommonLibraries                                             OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/SoundLibrary.SoundLibrarySimpleContext
/// Size: 0x0058 (0x000058 - 0x0000B0)
class USoundLibrarySimpleContext : public USoundLibraryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSoundLibrarySimpleContextSettings)        Settings                                                    OFFSET(get<T>, {0x58, 88, 0, 0})
};



	/// Functions
	// Function /Script/SoundLibrary.SoundLibrarySimpleContext.ConfigureContext
	// void ConfigureContext(AActor* OwningActor, FSoundLibrarySimpleContextSettings& InSettings);                              // [0x65f7f40] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Class /Script/SoundLibrary.SoundLibrarySubsystem
/// Size: 0x0068 (0x000030 - 0x000098)
class USoundLibrarySubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<USoundLibraryCollection*>)          LibraryCollections                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(USoundLibrarySimpleContext*)               SimpleContext                                               OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TMap<uint32_t, FSoundLibraryActorData>)    ActorDataMap                                                OFFSET(get<T>, {0x48, 80, 0, 0})
};



	/// Functions
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
	// void RemoveLibrary(AActor* Actor, USoundLibrary* Library);                                                               // [0x1dfa814] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibrariesFromCollections
	// void RemoveLibrariesFromCollections(AActor* Actor, FGameplayTagContainer& CollectionTags);                               // [0x1dfb230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
	// void RemoveLibraries(AActor* Actor, TArray<USoundLibrary*> Libraries);                                                   // [0x1dfb038] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.RemoveContext
	// bool RemoveContext(AActor* Actor, UClass* ContextClass);                                                                 // [0x65f8a54] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple
	// FSoundLibraryPlayResult PlaySoundSimple(AActor* OwningActor, FSoundLibrarySimpleContextSettings& InSettings);            // [0x28cd004] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.PlaySound
	// void PlaySound(USoundLibraryContext* Context, FSoundLibraryPlayResult& OutResults);                                      // [0x2dfe39c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.GetContext
	// USoundLibraryContext* GetContext(AActor* Actor, UClass* ContextClass);                                                   // [0x65f8210] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
	// void EnableEventsForActor(AActor* Actor);                                                                                // [0x65f8028] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
	// void DisableEventsForActor(AActor* Actor);                                                                               // [0x1dfa790] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibrary
	// void AddLibrary(AActor* Actor, USoundLibrary* Library);                                                                  // [0x1dfac28] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibrariesFromCollections
	// void AddLibrariesFromCollections(AActor* Actor, FGameplayTagContainer& CollectionTags);                                  // [0x2ecb58c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddLibraries
	// void AddLibraries(AActor* Actor, TArray<USoundLibrary*> Libraries);                                                      // [0x1dfb134] Final|Native|Public|BlueprintCallable 
	// Function /Script/SoundLibrary.SoundLibrarySubsystem.AddContext
	// USoundLibraryContext* AddContext(AActor* Actor, UClass* ContextClass);                                                   // [0x65f775c] Final|Native|Public|BlueprintCallable 
/// Class /Script/SoundLibrary.SoundLibraryTagHelperFunctions
/// Size: 0x0000 (0x000028 - 0x000028)
class USoundLibraryTagHelperFunctions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SoundLibrary.SoundLibraryPlayResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FSoundLibraryPlayResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              EventName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bWasBlocked                                                 OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(TArray<UAudioComponent*>)                  AudioComponents                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SoundLibrary.SoundLibraryAnimContextSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FSoundLibraryAnimContextSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFloatInterval)                            AnimRateThreshold                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              EventName                                                   OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bAttachToActor                                              OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FName)                                     AttachName                                                  OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bFadeOutOnEnd                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     FadeTime                                                    OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     NotifyTriggerChance                                         OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     VolumeMultiplier                                            OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/SoundLibrary.SoundLibraryContextEventInput
/// Size: 0x0038 (0x000000 - 0x000038)
class FSoundLibraryContextEventInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USoundBase*)                               sound                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   Owner                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FGameplayTagContainer)                     LibraryTags                                                 OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/SoundLibrary.SoundLibrarySet
/// Size: 0x0050 (0x000000 - 0x000050)
class FSoundLibrarySet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TSet<USoundLibrary*>)                      LibrarySet                                                  OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/SoundLibrary.SoundLibrarySimpleContextSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FSoundLibrarySimpleContextSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              EventName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAttachedSound                                              OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bStopWhenAttachedDestroyed                                  OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(bool)                                      bAutoDestroy                                                OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(bool)                                      bForceComponentCreation                                     OFFSET(get<bool>, {0x7, 1, 0, 0})
	DMember(float)                                     VolumeMultiplier                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PitchMultiplier                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(USoundConcurrency*)                        ConcurrencySettings                                         OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(USoundAttenuation*)                        AttenuationSettings                                         OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FName)                                     AttachName                                                  OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(USceneComponent*)                          AttachToComponent                                           OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TEnumAsByte<EAttachLocation>)              LocationType                                                OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /Script/SoundLibrary.SoundLibraryActorData
/// Size: 0x0088 (0x000000 - 0x000088)
class FSoundLibraryActorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TSet<USoundLibrary*>)                      SoundLibraries                                              OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<USoundLibraryContext*>)             SoundLibraryContexts                                        OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/SoundLibrary.SoundLibraryTag
/// Size: 0x0000 (0x000004 - 0x000004)
class FSoundLibraryTag : public FGameplayTag
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Enum /Script/SoundLibrary.ESoundLibraryNotifyTriggerType
/// Size: 0x04
enum ESoundLibraryNotifyTriggerType : uint8_t
{
	ESoundLibraryNotifyTriggerType__Play0                                            = 0,
	ESoundLibraryNotifyTriggerType__Stop1                                            = 1,
	ESoundLibraryNotifyTriggerType__None2                                            = 2,
	ESoundLibraryNotifyTriggerType__ESoundLibraryNotifyTriggerType_MAX3              = 3
};

