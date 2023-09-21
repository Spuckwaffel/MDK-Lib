
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
	SMember(FTransform)                                TransformOrigin                                             OFFSET(get<T>, {0x40, 96, 0, 0})
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0028 (0x000028 - 0x000050)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGuid)                                     SkelTrackGuid                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToLevelSequence                                         OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x01B8 (0x000068 - 0x000220)
class ULevelSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UMovieScene*)                              MovieScene                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FLevelSequenceObjectReferenceMap)          ObjectReferences                                            OFFSET(get<T>, {0x78, 80, 0, 0})
	SMember(FLevelSequenceBindingReferences)           BindingReferences                                           OFFSET(get<T>, {0xC8, 240, 0, 0})
	CMember(TMap<FString, FLevelSequenceObject>)       PossessedObjects                                            OFFSET(get<T>, {0x1B8, 80, 0, 0})
	CMember(UClass*)                                   DirectorClass                                               OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               OFFSET(get<T>, {0x210, 16, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequence.RemoveMetaDataByClass
	// void RemoveMetaDataByClass(UClass* InClass);                                                                             // [0x56ba1a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindOrAddMetaDataByClass
	// UObject* FindOrAddMetaDataByClass(UClass* InClass);                                                                      // [0x59914f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequence.FindMetaDataByClass
	// UObject* FindMetaDataByClass(UClass* InClass);                                                                           // [0x59914f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequence.CopyMetaData
	// UObject* CopyMetaData(UObject* InMetaData);                                                                              // [0x59914f8] Final|Native|Public|BlueprintCallable 
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
	SMember(FSoftClassPath)                            BurnInClass                                                 OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(ULevelSequenceBurnInInitSettings*)         Settings                                                    OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnInOptions.SetBurnIn
	// void SetBurnIn(FSoftClassPath InBurnInClass);                                                                            // [0x5992da0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x00A0 (0x000290 - 0x000330)
class ALevelSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(get<T>, {0x2A8, 32, 0, 0})
	CMember(ULevelSequencePlayer*)                     SequencePlayer                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(ULevelSequence*)                           LevelSequenceAsset                                          OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FLevelSequenceCameraSettings)              CameraSettings                                              OFFSET(get<T>, {0x2D8, 2, 0, 0})
	CMember(ULevelSequenceBurnInOptions*)              BurnInOptions                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UMovieSceneBindingOverrides*)              BindingOverrides                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0x2F0, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceData                                       OFFSET(get<bool>, {0x2F0, 1, 1, 1})
	DMember(bool)                                      bReplicatePlayback                                          OFFSET(get<bool>, {0x2F0, 1, 1, 2})
	CMember(UObject*)                                  DefaultInstanceData                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(ULevelSequenceBurnIn*)                     BurnInInstance                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bShowBurnin                                                 OFFSET(get<bool>, {0x308, 1, 0, 0})
	SMember(FWorldPartitionResolveData)                WorldPartitionResolveData                                   OFFSET(get<T>, {0x310, 32, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceActor.ShowBurnin
	// void ShowBurnin();                                                                                                       // [0x599301c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetSequence
	// void SetSequence(ULevelSequence* InSequence);                                                                            // [0x5992f9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetReplicatePlayback
	// void SetReplicatePlayback(bool ReplicatePlayback);                                                                       // [0x5992f1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBindingByTag
	// void SetBindingByTag(FName BindingTag, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);                           // [0x5992c08] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.SetBinding
	// void SetBinding(FMovieSceneObjectBindingID Binding, TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);              // [0x59928f4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBindings
	// void ResetBindings();                                                                                                    // [0x59928b0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.ResetBinding
	// void ResetBinding(FMovieSceneObjectBindingID Binding);                                                                   // [0x5992730] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBindingByTag
	// void RemoveBindingByTag(FName tag, AActor* Actor);                                                                       // [0x599266c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.RemoveBinding
	// void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);                                                   // [0x59923c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.OnLevelSequenceLoaded__DelegateSignature
	// void OnLevelSequenceLoaded__DelegateSignature();                                                                         // [0x1ebf994] Public|Delegate      
	// Function /Script/LevelSequence.LevelSequenceActor.HideBurnin
	// void HideBurnin();                                                                                                       // [0x599237c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequencePlayer
	// ULevelSequencePlayer* GetSequencePlayer();                                                                               // [0x599232c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.GetSequence
	// ULevelSequence* GetSequence();                                                                                           // [0x3583ee0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBindings
	// TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName tag);                                                         // [0x5991a60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.FindNamedBinding
	// FMovieSceneObjectBindingID FindNamedBinding(FName tag);                                                                  // [0x5991990] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBindingByTag
	// void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);                                     // [0x5991400] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceActor.AddBinding
	// void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);                        // [0x5991058] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/LevelSequence.ReplicatedLevelSequenceActor
/// Size: 0x0000 (0x000330 - 0x000330)
class AReplicatedLevelSequenceActor : public ALevelSequenceActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

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
/// Size: 0x00C8 (0x0002A8 - 0x000370)
class ULevelSequenceBurnIn : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FLevelSequencePlayerSnapshot)              FrameInformation                                            OFFSET(get<T>, {0x2A8, 192, 0, 0})
	CMember(ALevelSequenceActor*)                      LevelSequenceActor                                          OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequenceBurnIn.SetSettings
	// void SetSettings(UObject* InSettings);                                                                                   // [0x1ebf994] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceBurnIn.GetSettingsClass
	// UClass* GetSettingsClass();                                                                                              // [0x599234c] RequiredAPI|Native|Event|Public|BlueprintEvent|Const 
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
	// void OnCreated();                                                                                                        // [0x1ebf994] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetSequence
	// UMovieSceneSequence* GetSequence();                                                                                      // [0x59922b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetRootSequenceTime
	// FQualifiedFrameTime GetRootSequenceTime();                                                                               // [0x599226c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetMasterSequenceTime
	// FQualifiedFrameTime GetMasterSequenceTime();                                                                             // [0x599223c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetCurrentTime
	// FQualifiedFrameTime GetCurrentTime();                                                                                    // [0x599220c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x599205c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundObject
	// UObject* GetBoundObject(FMovieSceneObjectBindingID ObjectBinding);                                                       // [0x5991ecc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActors
	// TArray<AActor*> GetBoundActors(FMovieSceneObjectBindingID ObjectBinding);                                                // [0x5991d1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceDirector.GetBoundActor
	// AActor* GetBoundActor(FMovieSceneObjectBindingID ObjectBinding);                                                         // [0x5991b8c] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
/// Size: 0x0130 (0x0004C8 - 0x0005F8)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	SMember(FMulticastInlineDelegate)                  OnCameraCut                                                 OFFSET(get<T>, {0x4C8, 16, 0, 0})


	/// Functions
	// Function /Script/LevelSequence.LevelSequencePlayer.GetActiveCameraComponent
	// UCameraComponent* GetActiveCameraComponent();                                                                            // [0x5991b64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequencePlayer.CreateLevelSequencePlayer
	// ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor); // [0x5991568] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bDefaultLockEngineToDisplayRate                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   DefaultDisplayRate                                          OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultTickResolution                                       OFFSET(get<T>, {0x48, 16, 0, 0})
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
	// void SynchronizeToServer(float DesyncThresholdSeconds);                                                                  // [0x5993038] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.Play
	// void Play();                                                                                                             // [0x59923ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LevelSequence.LevelSequenceMediaController.OnRep_ServerStartTimeSeconds
	// void OnRep_ServerStartTimeSeconds();                                                                                     // [0x5992398] Final|RequiredAPI|Native|Private 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetSequence
	// ALevelSequenceActor* GetSequence();                                                                                      // [0x599229c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LevelSequence.LevelSequenceMediaController.GetMediaComponent
	// UMediaComponent* GetMediaComponent();                                                                                    // [0x591a5ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FLevelSequenceCameraSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bOverrideAspectRatioAxisConstraint                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EAspectRatioAxisConstraint>)   AspectRatioAxisConstraint                                   OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceLegacyObjectReference
/// Size: 0x0020 (0x000000 - 0x000020)
class FLevelSequenceLegacyObjectReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/LevelSequence.LevelSequenceObjectReferenceMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FLevelSequenceObjectReferenceMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/LevelSequence.BoundActorProxy
/// Size: 0x0001 (0x000000 - 0x000001)
class FBoundActorProxy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/LevelSequence.LevelSequenceAnimSequenceLinkItem
/// Size: 0x0030 (0x000000 - 0x000030)
class FLevelSequenceAnimSequenceLinkItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     SkelTrackGuid                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToAnimSequence                                          OFFSET(get<T>, {0x10, 24, 0, 0})
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
class FLevelSequenceBindingReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   PackageName                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           ExternalObjectPath                                          OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FString)                                   ObjectPath                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FLevelSequenceBindingReferenceArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FLevelSequenceBindingReference>)    References                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FLevelSequenceBindingReferences : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FGuid, FLevelSequenceBindingReferenceArray>) BindingIdToReferences                                OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FGuid>)                               AnimSequenceInstances                                       OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TSet<FGuid>)                               PostProcessInstances                                        OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0030 (0x000000 - 0x000030)
class FLevelSequenceObject : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TLazyObjectPtr<UObject*>)                  ObjectOrOwner                                               OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   ComponentName                                               OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CachedComponent                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FLevelSequencePlayerSnapshot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   RootName                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       RootTime                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       SourceTime                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   CurrentShotName                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotLocalTime                                        OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotSourceTime                                       OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   SourceTimecode                                              OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TWeakObjectPtr<UCameraComponent*>)         CameraComponent                                             OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(ULevelSequence*)                           ActiveShot                                                  OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FMovieSceneSequenceID)                     ShotID                                                      OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FString)                                   MasterName                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       MasterTime                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
};

