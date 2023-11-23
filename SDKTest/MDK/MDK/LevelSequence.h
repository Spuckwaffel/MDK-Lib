
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: UMG

/// Class /Script/LevelSequence.DefaultLevelSequenceInstanceData
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UDefaultLevelSequenceInstanceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(AActor*)                                   TransformOriginActor                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FTransform)                                TransformOrigin                                             OFFSET(getStruct<T>, {0x40, 96, 0, 0})
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0028 (0x000028 - 0x000050)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGuid)                                     SkelTrackGuid                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToLevelSequence                                         OFFSET(getStruct<T>, {0x38, 24, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x01B8 (0x000068 - 0x000220)
class ULevelSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UMovieScene*)                              MovieScene                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FLevelSequenceObjectReferenceMap)          ObjectReferences                                            OFFSET(getStruct<T>, {0x78, 80, 0, 0})
	SMember(FLevelSequenceBindingReferences)           BindingReferences                                           OFFSET(getStruct<T>, {0xC8, 240, 0, 0})
	CMember(TMap<FString, FLevelSequenceObject>)       PossessedObjects                                            OFFSET(get<T>, {0x1B8, 80, 0, 0})
	CMember(UClass*)                                   DirectorClass                                               OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               OFFSET(get<T>, {0x210, 16, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	// void RemoveMetaDataByClass(UClass* InClass);                                                                             // [0x582f168] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// UObject* FindOrAddMetaDataByClass(UClass* InClass);                                                                      // [0x582e3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	// UObject* FindMetaDataByClass(UClass* InClass);                                                                           // [0x582e3f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	// UObject* CopyMetaData(UObject* InMetaData);                                                                              // [0x582e158] Final|Native|Public|BlueprintCallable 
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


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                            // [0x582f830] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x00A8 (0x000290 - 0x000338)
class ALevelSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	CMember(ULevelSequencePlayer*)                     SequencePlayer                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(ULevelSequence*)                           LevelSequenceAsset                                          OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FLevelSequenceCameraSettings)              CameraSettings                                              OFFSET(getStruct<T>, {0x2E0, 2, 0, 0})
	CMember(ULevelSequenceBurnInOptions*)              BurnInOptions                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UMovieSceneBindingOverrides*)              BindingOverrides                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x2F8, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceData                                       OFFSET(get<bool>, {0x2F8, 1, 1, 1})
	DMember(bool)                                      bReplicatePlayback                                          OFFSET(get<bool>, {0x2F8, 1, 1, 2})
	CMember(UObject*)                                  DefaultInstanceData                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(ULevelSequenceBurnIn*)                     BurnInInstance                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(bool)                                      bShowBurnin                                                 OFFSET(get<bool>, {0x310, 1, 0, 0})
	SMember(FWorldPartitionResolveData)                WorldPartitionResolveData                                   OFFSET(getStruct<T>, {0x318, 32, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	// void ShowBurnin();                                                                                                       // [0x582fa94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(ULevelSequence* InSequence);                                                                            // [0x582fa14] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x582f994] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                           // [0x582f684] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x582f38c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                    // [0x582f348] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x582f1e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// void RemoveBindingByTag(FName tag, AActor* Actor);                                                                       // [0x582f0a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);                                                   // [0x582ee5c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                         // [0x101681c] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	// void HideBurnin();                                                                                                       // [0x582ee18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	// ULevelSequencePlayer* GetSequencePlayer();                                                                               // [0x582edbc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// ULevelSequence* GetSequence();                                                                                           // [0x582ed14] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName tag);                                                         // [0x582e548] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	// FMovieSceneObjectBindingID FindNamedBinding(FName tag);                                                                  // [0x582e478] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	// void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);                                     // [0x582e060] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);                        // [0x582dd38] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.ReplicatedLevelSequenceActor
/// Size: 0x0000 (0x000338 - 0x000338)
class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Script/LevelSequence.LevelSequenceAnimSequenceLink
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelSequenceAnimSequenceLink : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FLevelSequenceAnimSequenceLinkItem>) AnimSequenceLinks                                          OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C8 (0x0002C0 - 0x000388)
class ULevelSequenceBurnIn : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FLevelSequencePlayerSnapshot)              FrameInformation                                            OFFSET(getStruct<T>, {0x2C0, 192, 0, 0})
	CMember(ALevelSequenceActor*)                      LevelSequenceActor                                          OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(UObject* InSettings);                                                                                   // [0x101681c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// UClass* GetSettingsClass();                                                                                              // [0x582ede0] RequiredAPI|Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelSequenceDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ULevelSequencePlayer*)                     Player                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   SubSequenceID                                               OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MovieScenePlayerIndex                                       OFFSET(get<int32_t>, {0x34, 4, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceDirector.OnCreated
	// void OnCreated();                                                                                                        // [0x101681c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	// UMovieSceneSequence* GetSequence();                                                                                      // [0x582ed44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetRootSequenceTime
	// FQualifiedFrameTime GetRootSequenceTime();                                                                               // [0x582ece4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
	// FQualifiedFrameTime GetMasterSequenceTime();                                                                             // [0x582ecb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x582ec84] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x582eaf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	// UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                                       // [0x582e97c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x582e7ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	// AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                         // [0x582e674] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.LegacyLevelSequenceDirectorBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/LevelSequence.LevelSequencePlayer
/// Size: 0x0118 (0x0004D0 - 0x0005E8)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1512;

public:
	SMember(FMulticastInlineDelegate)                  OnCameraCut                                                 OFFSET(getStruct<T>, {0x4D8, 16, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// UCameraComponent* GetActiveCameraComponent();                                                                            // [0x582e64c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor); // [0x582e1c8] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bDefaultLockEngineToDisplayRate                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   DefaultDisplayRate                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultTickResolution                                       OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(EUpdateClockSource)                        DefaultClockSource                                          OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ALevelSequenceMediaController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(ALevelSequenceActor*)                      Sequence                                                    OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UMediaComponent*)                          MediaComponent                                              OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(float)                                     ServerStartTimeSeconds                                      OFFSET(get<float>, {0x2A8, 4, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceMediaController.SynchronizeToServer
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                                  // [0x582fab0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	// void Play();                                                                                                             // [0x582ee48] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// void OnRep_ServerStartTimeSeconds();                                                                                     // [0x582ee34] Final|RequiredAPI|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	// ALevelSequenceActor* GetSequence();                                                                                      // [0x582ed2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// UMediaComponent* GetMediaComponent();                                                                                    // [0x57aaeec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FLevelSequenceCameraSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bOverrideAspectRatioAxisConstraint                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EAspectRatioAxisConstraint>)   AspectRatioAxisConstraint                                   OFFSET(get<T>, {0x1, 1, 0, 0})
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

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FLevelSequenceObjectReferenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
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

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0030 (0x000000 - 0x000030)
class FLevelSequenceAnimSequenceLinkItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     SkelTrackGuid                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToAnimSequence                                          OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bExportTransforms                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bExportMorphTargets                                         OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bExportAttributeCurves                                      OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bExportMaterialCurves                                       OFFSET(get<bool>, {0x2B, 1, 0, 0})
	CMember(EAnimInterpolationType)                    Interpolation                                               OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveInterpMode>)         CurveInterpolation                                          OFFSET(get<T>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bRecordInWorldSpace                                         OFFSET(get<bool>, {0x2E, 1, 0, 0})
	DMember(bool)                                      bEvaluateAllSkeletalMeshComponents                          OFFSET(get<bool>, {0x2F, 1, 0, 0})
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

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FLevelSequenceBindingReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FGuid, FLevelSequenceBindingReferenceArray>) BindingIdToReferences                                OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FGuid>)                               AnimSequenceInstances                                       OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TSet<FGuid>)                               PostProcessInstances                                        OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0030 (0x000000 - 0x000030)
class FLevelSequenceObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TLazyObjectPtr<UObject*>)                  ObjectOrOwner                                               OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CachedComponent                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FLevelSequencePlayerSnapshot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   RootName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       RootTime                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       SourceTime                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   CurrentShotName                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotLocalTime                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotSourceTime                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   SourceTimecode                                              OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(TWeakObjectPtr<UCameraComponent*>)         CameraComponent                                             OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(ULevelSequence*)                           ActiveShot                                                  OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FMovieSceneSequenceID)                     ShotID                                                      OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	SMember(FString)                                   MasterName                                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       MasterTime                                                  OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
};

