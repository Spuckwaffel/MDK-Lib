
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: UMG

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0048 (0x000028 - 0x000070)
class UDefaultLevelSequenceInstanceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(AActor*)                                   TransformOriginActor                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FTransform)                                TransformOrigin                                             OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x00F0 (0x0003B0 - 0x0004A0)
class ULevelSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(UMovieScene*)                              MovieScene                                                  OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FLevelSequenceObjectReferenceMap)          ObjectReferences                                            OFFSET(getStruct<T>, {0x3B0, 80, 0, 0})
	SMember(FLevelSequenceBindingReferences)           BindingReferences                                           OFFSET(getStruct<T>, {0x400, 80, 0, 0})
	CMember(TMap<FString, FLevelSequenceObject>)       PossessedObjects                                            OFFSET(get<T>, {0x450, 80, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceBurnInInitSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class ULevelSequenceBurnInInitSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LevelSequence.LevelSequenceBurnInOptions
/// Size: 0x0028 (0x000028 - 0x000050)
class ULevelSequenceBurnInOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bUseBurnIn                                                  OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSoftClassPath)                            BurnInClass                                                 OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(ULevelSequenceBurnInInitSettings*)         Settings                                                    OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x0098 (0x000318 - 0x0003B0)
class ALevelSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x320, 1, 0, 0})
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x328, 48, 0, 0})
	CMember(ULevelSequencePlayer*)                     SequencePlayer                                              OFFSET(get<T>, {0x358, 8, 0, 0})
	SMember(FSoftObjectPath)                           LevelSequence                                               OFFSET(getStruct<T>, {0x360, 24, 0, 0})
	CMember(TArray<AActor*>)                           AdditionalEventReceivers                                    OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(ULevelSequenceBurnInOptions*)              BurnInOptions                                               OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UMovieSceneBindingOverrides*)              BindingOverrides                                            OFFSET(get<T>, {0x390, 8, 0, 0})
	DMember(bool)                                      bOverrideInstanceData                                       OFFSET(get<bool>, {0x398, 1, 0, 0})
	CMember(UObject*)                                  DefaultInstanceData                                         OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(ULevelSequenceBurnIn*)                     BurnInInstance                                              OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(ULevelSequence* InSequence);                                                                            // [0x1f6e580] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetEventReceivers
	// void SetEventReceivers(TArray<AActor*> AdditionalReceivers);                                                             // [0x1f6e4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x1f6e350] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                    // [0x1f6e2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x1f6e200] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);                                                   // [0x1f6e0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);                                                         // [0x1f6e010] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);                        // [0x1f6dce0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x0050 (0x000208 - 0x000258)
class ULevelSequenceBurnIn : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FLevelSequencePlayerSnapshot)              FrameInformation                                            OFFSET(getStruct<T>, {0x208, 72, 0, 0})
	CMember(ALevelSequenceActor*)                      LevelSequenceActor                                          OFFSET(get<T>, {0x250, 8, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(UObject* InSettings);                                                                                   // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// UClass* GetSettingsClass();                                                                                              // [0x2693e70] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x00A0 (0x000800 - 0x0008A0)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2208;

public:
	CMember(UMulticastDelegate)                        OnCameraCut                                                 OFFSET(get<T>, {0x7F8, 16, 0, 0})
	CMember(TArray<UObject*>)                          AdditionalEventReceivers                                    OFFSET(get<T>, {0x838, 16, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor); // [0x1f6de30] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
class FBoundActorProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x0050 (0x000000 - 0x000050)
class FLevelSequenceBindingReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, FLevelSequenceBindingReferenceArray>) BindingIdToReferences                                OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FLevelSequenceBindingReferenceArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FLevelSequenceBindingReference>)    References                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (0x000000 - 0x000038)
class FLevelSequenceBindingReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   PackageName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           ExternalObjectPath                                          OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FString)                                   ObjectPath                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FLevelSequenceObjectReferenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
class FLevelSequenceLegacyObjectReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0038 (0x000000 - 0x000038)
class FLevelSequenceObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UObject*)                                  ObjectOrOwner                                               OFFSET(get<T>, {0x0, 28, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CachedComponent                                             OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x0048 (0x000000 - 0x000048)
class FLevelSequencePlayerSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   MasterName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     MasterTime                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   CurrentShotName                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(float)                                     CurrentShotLocalTime                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(UCameraComponent*)                         CameraComponent                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FLevelSequenceSnapshotSettings)            Settings                                                    OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FMovieSceneSequenceID)                     ShotID                                                      OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceSnapshotSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FLevelSequenceSnapshotSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(unsigned char)                             ZeroPadAmount                                               OFFSET(get<unsigned char>, {0x0, 1, 0, 0})
	DMember(float)                                     FrameRate                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

