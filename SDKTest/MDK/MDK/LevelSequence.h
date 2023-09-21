
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
	CMember(AActor*)                                   TransformOriginActor                                        ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FTransform)                                TransformOrigin                                             ___ OFFSET(get<T>, {0x40, 96, 0, 0})
};

/// Class /Script/LevelSequence.AnimSequenceLevelSequenceLink
/// Size: 0x0028 (0x000028 - 0x000050)
class UAnimSequenceLevelSequenceLink : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGuid)                                     SkelTrackGuid                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToLevelSequence                                         ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequence
/// Size: 0x01B8 (0x000068 - 0x000220)
class ULevelSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UMovieScene*)                              MovieScene                                                  ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FLevelSequenceObjectReferenceMap)          ObjectReferences                                            ___ OFFSET(get<T>, {0x78, 80, 0, 0})
	SMember(FLevelSequenceBindingReferences)           BindingReferences                                           ___ OFFSET(get<T>, {0xC8, 240, 0, 0})
	CMember(TMap<FString, FLevelSequenceObject>)       PossessedObjects                                            ___ OFFSET(get<T>, {0x1B8, 80, 0, 0})
	CMember(UClass*)                                   DirectorClass                                               ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               ___ OFFSET(get<T>, {0x210, 16, 0, 0})
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
	DMember(bool)                                      bUseBurnIn                                                  ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSoftClassPath)                            BurnInClass                                                 ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(ULevelSequenceBurnInInitSettings*)         Settings                                                    ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceActor
/// Size: 0x00A0 (0x000290 - 0x000330)
class ALevelSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            ___ OFFSET(get<T>, {0x2A8, 32, 0, 0})
	CMember(ULevelSequencePlayer*)                     SequencePlayer                                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(ULevelSequence*)                           LevelSequenceAsset                                          ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FLevelSequenceCameraSettings)              CameraSettings                                              ___ OFFSET(get<T>, {0x2D8, 2, 0, 0})
	CMember(ULevelSequenceBurnInOptions*)              BurnInOptions                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UMovieSceneBindingOverrides*)              BindingOverrides                                            ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   ___ OFFSET(get<bool>, {0x2F0, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceData                                       ___ OFFSET(get<bool>, {0x2F0, 1, 1, 1})
	DMember(bool)                                      bReplicatePlayback                                          ___ OFFSET(get<bool>, {0x2F0, 1, 1, 2})
	CMember(UObject*)                                  DefaultInstanceData                                         ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(ULevelSequenceBurnIn*)                     BurnInInstance                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bShowBurnin                                                 ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
	SMember(FWorldPartitionResolveData)                WorldPartitionResolveData                                   ___ OFFSET(get<T>, {0x310, 32, 0, 0})
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
	CMember(TArray<FLevelSequenceAnimSequenceLinkItem>) AnimSequenceLinks                                          ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceBurnIn
/// Size: 0x00C8 (0x0002A8 - 0x000370)
class ULevelSequenceBurnIn : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FLevelSequencePlayerSnapshot)              FrameInformation                                            ___ OFFSET(get<T>, {0x2A8, 192, 0, 0})
	CMember(ALevelSequenceActor*)                      LevelSequenceActor                                          ___ OFFSET(get<T>, {0x368, 8, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceDirector
/// Size: 0x0010 (0x000028 - 0x000038)
class ULevelSequenceDirector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ULevelSequencePlayer*)                     Player                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   SubSequenceID                                               ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MovieScenePlayerIndex                                       ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  OnCameraCut                                                 ___ OFFSET(get<T>, {0x4C8, 16, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceProjectSettings
/// Size: 0x0030 (0x000030 - 0x000060)
class ULevelSequenceProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bDefaultLockEngineToDisplayRate                             ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   DefaultDisplayRate                                          ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   DefaultTickResolution                                       ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(EUpdateClockSource)                        DefaultClockSource                                          ___ OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /Script/LevelSequence.LevelSequenceMediaController
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ALevelSequenceMediaController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(ALevelSequenceActor*)                      Sequence                                                    ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UMediaComponent*)                          MediaComponent                                              ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(float)                                     ServerStartTimeSeconds                                      ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceCameraSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FLevelSequenceCameraSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bOverrideAspectRatioAxisConstraint                          ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EAspectRatioAxisConstraint>)   AspectRatioAxisConstraint                                   ___ OFFSET(get<T>, {0x1, 1, 0, 0})
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
	SMember(FGuid)                                     SkelTrackGuid                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           PathToAnimSequence                                          ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bExportTransforms                                           ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bExportMorphTargets                                         ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bExportAttributeCurves                                      ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bExportMaterialCurves                                       ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
	CMember(EAnimInterpolationType)                    Interpolation                                               ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveInterpMode>)         CurveInterpolation                                          ___ OFFSET(get<T>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bRecordInWorldSpace                                         ___ OFFSET(get<bool>, {0x2E, 1, 0, 0})
	DMember(bool)                                      bEvaluateAllSkeletalMeshComponents                          ___ OFFSET(get<bool>, {0x2F, 1, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReference
/// Size: 0x0038 (0x000000 - 0x000038)
class FLevelSequenceBindingReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   PackageName                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSoftObjectPath)                           ExternalObjectPath                                          ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FString)                                   ObjectPath                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferenceArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FLevelSequenceBindingReferenceArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FLevelSequenceBindingReference>)    References                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceBindingReferences
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FLevelSequenceBindingReferences : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FGuid, FLevelSequenceBindingReferenceArray>) BindingIdToReferences                                ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TSet<FGuid>)                               AnimSequenceInstances                                       ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TSet<FGuid>)                               PostProcessInstances                                        ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequenceObject
/// Size: 0x0030 (0x000000 - 0x000030)
class FLevelSequenceObject : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TLazyObjectPtr<UObject*>)                  ObjectOrOwner                                               ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   ComponentName                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  CachedComponent                                             ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/LevelSequence.LevelSequencePlayerSnapshot
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FLevelSequencePlayerSnapshot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FString)                                   RootName                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       RootTime                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       SourceTime                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   CurrentShotName                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotLocalTime                                        ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       CurrentShotSourceTime                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   SourceTimecode                                              ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TWeakObjectPtr<UCameraComponent*>)         CameraComponent                                             ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(ULevelSequence*)                           ActiveShot                                                  ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FMovieSceneSequenceID)                     ShotID                                                      ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	SMember(FString)                                   MasterName                                                  ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FQualifiedFrameTime)                       MasterTime                                                  ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

