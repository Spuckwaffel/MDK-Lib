
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MovieScene.MovieSceneBlenderSystemSupport
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBlenderSystemSupport : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneBoundObjectProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBoundObjectProxy : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneChannelOverrideProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneChannelOverrideProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneDeterminismSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneDeterminismSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneEvaluationHook
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEvaluationHook : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneMetaDataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneMetaDataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieScenePlaybackClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePlaybackClient : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneSequencePlayerObserver
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequencePlayerObserver : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneBindingOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBindingOwnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneCachedTrack
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCachedTrack : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneEasingFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEasingFunction : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneKeyProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneKeyProxy : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneSequenceTickManagerClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneSequenceTickManagerClient : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneSignedObject
/// Size: 0x0030 (0x000028 - 0x000058)
class UMovieSceneSignedObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     Signature                                                   ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneChannelOverrideContainer
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieScene.MovieSceneSectionChannelOverrideRegistry
/// Size: 0x0050 (0x000028 - 0x000078)
class UMovieSceneSectionChannelOverrideRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FName, UMovieSceneChannelOverrideContainer*>) Overrides                                           ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneTrackTemplateProducer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTrackTemplateProducer : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneCompiledData
/// Size: 0x03D0 (0x000028 - 0x0003F8)
class UMovieSceneCompiledData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FMovieSceneEvaluationTemplate)             EvaluationTemplate                                          ___ OFFSET(get<T>, {0x28, 352, 0, 0})
	SMember(FMovieSceneSequenceHierarchy)              Hierarchy                                                   ___ OFFSET(get<T>, {0x188, 280, 0, 0})
	SMember(FMovieSceneEntityComponentField)           EntityComponentField                                        ___ OFFSET(get<T>, {0x2A0, 240, 0, 0})
	SMember(FMovieSceneEvaluationField)                TrackTemplateField                                          ___ OFFSET(get<T>, {0x390, 48, 0, 0})
	CMember(TArray<FFrameTime>)                        DeterminismFences                                           ___ OFFSET(get<T>, {0x3C0, 16, 0, 0})
	SMember(FGuid)                                     CompiledSignature                                           ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FGuid)                                     CompilerVersion                                             ___ OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FMovieSceneSequenceCompilerMaskStruct)     AccumulatedMask                                             ___ OFFSET(get<T>, {0x3F0, 1, 0, 0})
	SMember(FMovieSceneSequenceCompilerMaskStruct)     AllocatedMask                                               ___ OFFSET(get<T>, {0x3F1, 1, 0, 0})
	CMember(EMovieSceneSequenceFlags)                  AccumulatedFlags                                            ___ OFFSET(get<T>, {0x3F2, 1, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneCompiledDataManager
/// Size: 0x0208 (0x000028 - 0x000230)
class UMovieSceneCompiledDataManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TMap<int32_t, FMovieSceneSequenceHierarchy>) Hierarchies                                               ___ OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TMap<int32_t, FMovieSceneEvaluationTemplate>) TrackTemplates                                           ___ OFFSET(get<T>, {0x128, 80, 0, 0})
	CMember(TMap<int32_t, FMovieSceneEvaluationField>) TrackTemplateFields                                         ___ OFFSET(get<T>, {0x178, 80, 0, 0})
	CMember(TMap<int32_t, FMovieSceneEntityComponentField>) EntityComponentFields                                  ___ OFFSET(get<T>, {0x1C8, 80, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneEntityProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEntityProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneEntitySystem
/// Size: 0x0018 (0x000028 - 0x000040)
class UMovieSceneEntitySystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UMovieSceneEntitySystemLinker*)            Linker                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneBlenderSystem
/// Size: 0x0028 (0x000040 - 0x000068)
class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MovieScene.MovieSceneEntityInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieScene.MovieSceneGenericBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieScene.MovieSceneBoundSceneComponentInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieScene.MovieSceneValueDecomposer
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneValueDecomposer : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneEntitySystemLinker
/// Size: 0x0710 (0x000028 - 0x000738)
class UMovieSceneEntitySystemLinker : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
	SMember(FMovieSceneEntitySystemGraph)              SystemGraph                                                 ___ OFFSET(get<T>, {0x2A0, 400, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneEvalTimeSystem
/// Size: 0x0170 (0x000040 - 0x0001B0)
class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
};

/// Class /Script/MovieScene.MovieSceneEvaluationHookSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer>) PendingEventsByRootInstance ___ OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Class /Script/MovieScene.MovieScenePreAnimatedStateSystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieScenePreAnimatedStateSystemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneCachePreAnimatedStateSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieScene.MovieSceneRestorePreAnimatedStateSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieScene.MovieSceneRootInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieScene.MovieSceneSpawnablesSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieScene.MovieSceneTrackInstance
/// Size: 0x0028 (0x000028 - 0x000050)
class UMovieSceneTrackInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UObject*>)                  WeakAnimatedObject                                          ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIsRootTrackInstance                                        ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(UMovieSceneEntitySystemLinker*)            PrivateLinker                                               ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FMovieSceneTrackInstanceInput>)     Inputs                                                      ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceInstantiator
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/MovieScene.MovieSceneTrackInstanceSystem
/// Size: 0x0008 (0x000040 - 0x000048)
class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UMovieSceneTrackInstanceInstantiator*)     Instantiator                                                ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneCustomClockSource
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCustomClockSource : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneBuiltInEasingFunction
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneBuiltInEasingFunction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EMovieSceneBuiltInEasing)                  Type                                                        ___ OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneEasingExternalCurve
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneEasingExternalCurve : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UCurveFloat*)                              Curve                                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MovieScene.NodeAndChannelMappings
/// Size: 0x0000 (0x000028 - 0x000028)
class UNodeAndChannelMappings : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroup
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneNodeGroupCollection
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneNodeGroupCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieScene
/// Size: 0x0100 (0x000058 - 0x000158)
class UMovieScene : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FMovieSceneSpawnable>)              Spawnables                                                  ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FMovieScenePossessable>)            Possessables                                                ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FMovieSceneBinding>)                ObjectBindings                                              ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TMap<FName, FMovieSceneObjectBindingIDs>)  BindingGroups                                               ___ OFFSET(get<T>, {0x90, 80, 0, 0})
	CMember(TArray<UMovieSceneTrack*>)                 Tracks                                                      ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(UMovieSceneTrack*)                         CameraCutTrack                                              ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FMovieSceneFrameRange)                     SelectionRange                                              ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FMovieSceneFrameRange)                     PlaybackRange                                               ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FFrameRate)                                TickResolution                                              ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FFrameRate)                                DisplayRate                                                 ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(EMovieSceneEvaluationType)                 EvaluationType                                              ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(EUpdateClockSource)                        ClockSource                                                 ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	SMember(FSoftObjectPath)                           CustomClockSourcePath                                       ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	CMember(TArray<FMovieSceneMarkedFrame>)            MarkedFrames                                                ___ OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneBindingOverrides
/// Size: 0x0068 (0x000028 - 0x000090)
class UMovieSceneBindingOverrides : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FMovieSceneBindingOverrideData>)    BindingData                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MovieScene.BuiltInDynamicBindingResolverLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBuiltInDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieScene.MovieSceneFolder
/// Size: 0x0048 (0x000028 - 0x000070)
class UMovieSceneFolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     FolderName                                                  ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(TArray<UMovieSceneFolder*>)                ChildFolders                                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UMovieSceneTrack*>)                 ChildTracks                                                 ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FString>)                           ChildObjectBindingStrings                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneMetaData
/// Size: 0x0030 (0x000028 - 0x000058)
class UMovieSceneMetaData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Author                                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FDateTime)                                 Created                                                     ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FString)                                   Notes                                                       ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneTrack
/// Size: 0x0040 (0x000058 - 0x000098)
class UMovieSceneTrack : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMovieSceneTrackEvalOptions)               EvalOptions                                                 ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bIsEvalDisabled                                             ___ OFFSET(get<bool>, {0x5D, 1, 0, 0})
	CMember(TArray<int32_t>)                           RowsDisabled                                                ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FGuid)                                     EvaluationFieldGuid                                         ___ OFFSET(get<T>, {0x74, 16, 0, 0})
	SMember(FMovieSceneTrackEvaluationField)           EvaluationField                                             ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneNameableTrack
/// Size: 0x0000 (0x000098 - 0x000098)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/MovieScene.MovieSceneSection
/// Size: 0x0098 (0x000058 - 0x0000F0)
class UMovieSceneSection : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMovieSceneSectionEvalOptions)             EvalOptions                                                 ___ OFFSET(get<T>, {0x58, 2, 0, 0})
	SMember(FMovieSceneEasingSettings)                 Easing                                                      ___ OFFSET(get<T>, {0x60, 56, 0, 0})
	SMember(FMovieSceneFrameRange)                     SectionRange                                                ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FFrameNumber)                              PreRollFrames                                               ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FFrameNumber)                              PostRollFrames                                              ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    ___ OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   OverlapPriority                                             ___ OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bIsActive                                                   ___ OFFSET(get<bool>, {0xB8, 1, 1, 0})
	DMember(bool)                                      bIsLocked                                                   ___ OFFSET(get<bool>, {0xB8, 1, 1, 1})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     EndTime                                                     ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     PrerollTime                                                 ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     PostrollTime                                                ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bIsInfinite                                                 ___ OFFSET(get<bool>, {0xCC, 1, 1, 0})
	DMember(bool)                                      bSupportsInfiniteRange                                      ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	SMember(FOptionalMovieSceneBlendType)              BlendType                                                   ___ OFFSET(get<T>, {0xD1, 2, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSequence
/// Size: 0x0010 (0x000058 - 0x000068)
class UMovieSceneSequence : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UMovieSceneCompiledData*)                  CompiledData                                                ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(EMovieSceneCompletionMode)                 DefaultCompletionMode                                       ___ OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(bool)                                      bParentContextsAreSignificant                               ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bPlayableDirectly                                           ___ OFFSET(get<bool>, {0x62, 1, 0, 0})
	CMember(EMovieSceneSequenceFlags)                  SequenceFlags                                               ___ OFFSET(get<T>, {0x63, 1, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSequencePlayer
/// Size: 0x04A0 (0x000028 - 0x0004C8)
class UMovieSceneSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	CMember(TScriptInterface<Class>)                   Observer                                                    ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlay                                                      ___ OFFSET(get<T>, {0x238, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayReverse                                               ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStop                                                      ___ OFFSET(get<T>, {0x258, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPause                                                     ___ OFFSET(get<T>, {0x268, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  ___ OFFSET(get<T>, {0x278, 16, 0, 0})
	CMember(TEnumAsByte<EMovieScenePlayerStatus>)      Status                                                      ___ OFFSET(get<T>, {0x288, 1, 0, 0})
	DMember(bool)                                      bReversePlayback                                            ___ OFFSET(get<bool>, {0x28C, 1, 1, 0})
	CMember(UMovieSceneSequence*)                      Sequence                                                    ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FFrameNumber)                              StartTime                                                   ___ OFFSET(get<T>, {0x298, 4, 0, 0})
	DMember(int32_t)                                   DurationFrames                                              ___ OFFSET(get<int32_t>, {0x29C, 4, 0, 0})
	DMember(float)                                     DurationSubFrames                                           ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumLoops                                             ___ OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(int32_t)                                   SerialNumber                                                ___ OFFSET(get<int32_t>, {0x2A8, 4, 0, 0})
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            ___ OFFSET(get<T>, {0x2AC, 32, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        ___ OFFSET(get<T>, {0x2D0, 136, 0, 0})
	SMember(FMovieSceneSequenceReplProperties)         NetSyncProps                                                ___ OFFSET(get<T>, {0x3E8, 20, 0, 0})
	CMember(TScriptInterface<Class>)                   PlaybackClient                                              ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	CMember(UMovieSceneSequenceTickManager*)           TickManager                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSequenceTickManager
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovieSceneSequenceTickManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/MovieScene.MovieSceneBoolSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneBoolSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(bool)                                      DefaultValue                                                ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FMovieSceneBoolChannel)                    BoolCurve                                                   ___ OFFSET(get<T>, {0xF8, 256, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneHookSection
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UMovieSceneHookSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bRequiresRangedHook                                         ___ OFFSET(get<bool>, {0x100, 1, 1, 0})
	DMember(bool)                                      bRequiresTriggerHooks                                       ___ OFFSET(get<bool>, {0x100, 1, 1, 1})
};

/// Class /Script/MovieScene.MovieSceneSpawnSection
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/MovieScene.MovieSceneSubSection
/// Size: 0x0048 (0x0000F0 - 0x000138)
class UMovieSceneSubSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMovieSceneSectionParameters)              Parameters                                                  ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	DMember(float)                                     StartOffset                                                 ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     TimeScale                                                   ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     PrerollTime                                                 ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(char)                                      NetworkMask                                                 ___ OFFSET(get<char>, {0x12C, 1, 0, 0})
	CMember(UMovieSceneSequence*)                      SubSequence                                                 ___ OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Class /Script/MovieScene.TestMovieSceneTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UTestMovieSceneTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bHighPassFilter                                             ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               SectionArray                                                ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/MovieScene.TestMovieSceneSection
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UTestMovieSceneSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/MovieScene.TestMovieSceneSequence
/// Size: 0x0008 (0x000068 - 0x000070)
class UTestMovieSceneSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UMovieScene*)                              MovieScene                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSubTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieScene.TestMovieSceneSubTrack
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UMovieSceneSection*>)               SectionArray                                                ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/MovieScene.TestMovieSceneSubSection
/// Size: 0x0000 (0x000138 - 0x000138)
class UTestMovieSceneSubSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/MovieScene.TestMovieSceneEvalHookTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               SectionArray                                                ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieScene.TestMovieSceneEvalHookSection
/// Size: 0x0018 (0x000108 - 0x000120)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/MovieScene.MovieSceneSpawnTrack
/// Size: 0x0020 (0x000098 - 0x0000B8)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FGuid)                                     ObjectGuid                                                  ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/MovieScene.ActorForWorldTransforms
/// Size: 0x0014 (0x000000 - 0x000014)
class FActorForWorldTransforms : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          Component                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDeterminismData
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneDeterminismData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FFrameTime>)                        Fences                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bParentSequenceRequiresLowerFence                           ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bParentSequenceRequiresUpperFence                           ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEmptyStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FMovieSceneEmptyStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplateBase
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneEvalTemplateBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MovieScene.MovieSceneEvaluationKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneEvaluationKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMovieSceneSequenceID)                     SequenceID                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneTrackIdentifier)                TrackIdentifier                                             ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  SectionIndex                                                ___ OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTrackIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceID
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneSequenceID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationOperand
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneEvaluationOperand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ObjectBindingID                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMovieSceneSequenceID)                     SequenceID                                                  ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneKeyStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneKeyStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MovieScene.GeneratedMovieSceneKeyStruct
/// Size: 0x0050 (0x000000 - 0x000050)
class FGeneratedMovieSceneKeyStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/MovieScene.MovieSceneKeyTimeStruct
/// Size: 0x0020 (0x000008 - 0x000028)
class FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieScenePropertyBinding
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieScenePropertyBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     PropertyName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PropertyPath                                                ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bCanUseClassLookup                                          ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSectionParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneSectionParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              StartFrameOffset                                            ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bCanLoop                                                    ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(float)                                     TimeScale                                                   ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   HierarchicalBias                                            ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(EMovieSceneSubSectionFlags)                Flags                                                       ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	DMember(float)                                     StartOffset                                                 ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     PrerollTime                                                 ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PostrollTime                                                ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSegmentIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneSegmentIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   IdentifierIndex                                             ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.SectionEvaluationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FSectionEvaluationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   ImplIndex                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FFrameNumber)                              ForcedTime                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(ESectionEvaluationFlags)                   Flags                                                       ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSegment
/// Size: 0x0058 (0x000000 - 0x000058)
class FMovieSceneSegment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/MovieScene.MovieSceneSequenceLoopCount
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneSequenceLoopCount : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneSequencePlaybackSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bAutoPlay                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FMovieSceneSequenceLoopCount)              LoopCount                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FMovieSceneSequenceTickInterval)           TickInterval                                                ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bRandomStartTime                                            ___ OFFSET(get<bool>, {0x1C, 1, 1, 0})
	DMember(bool)                                      bRestoreState                                               ___ OFFSET(get<bool>, {0x1C, 1, 1, 1})
	DMember(bool)                                      bDisableMovementInput                                       ___ OFFSET(get<bool>, {0x1C, 1, 1, 2})
	DMember(bool)                                      bDisableLookAtInput                                         ___ OFFSET(get<bool>, {0x1C, 1, 1, 3})
	DMember(bool)                                      bHidePlayer                                                 ___ OFFSET(get<bool>, {0x1C, 1, 1, 4})
	DMember(bool)                                      bHideHUD                                                    ___ OFFSET(get<bool>, {0x1C, 1, 1, 5})
	DMember(bool)                                      bDisableCameraCuts                                          ___ OFFSET(get<bool>, {0x1C, 1, 1, 6})
	DMember(bool)                                      bPauseAtEnd                                                 ___ OFFSET(get<bool>, {0x1C, 1, 1, 7})
	DMember(bool)                                      bInheritTickIntervalFromOwner                               ___ OFFSET(get<bool>, {0x1D, 1, 1, 0})
	DMember(bool)                                      bDynamicWeighting                                           ___ OFFSET(get<bool>, {0x1D, 1, 1, 1})
};

/// Struct /Script/MovieScene.MovieSceneSequenceTickInterval
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneSequenceTickInterval : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     TickIntervalSeconds                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     EvaluationBudgetMicroseconds                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bTickWhenPaused                                             ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bAllowRounding                                              ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTimeTransform
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneTimeTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     TimeScale                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FFrameTime)                                Offset                                                      ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneChannel
/// Size: 0x0050 (0x000000 - 0x000050)
class FMovieSceneChannel : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/MovieScene.MovieSceneAudioTriggerChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneAudioTriggerChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<bool>)                              Values                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneKeyHandleMap
/// Size: 0x0000 (0x000088 - 0x000088)
class FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/MovieScene.MovieSceneBoolChannel
/// Size: 0x00B0 (0x000050 - 0x000100)
class FMovieSceneBoolChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      DefaultValue                                                ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
	CMember(TArray<bool>)                              Values                                                      ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x78, 136, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneByteChannel
/// Size: 0x00B8 (0x000050 - 0x000108)
class FMovieSceneByteChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(char)                                      DefaultValue                                                ___ OFFSET(get<char>, {0x60, 1, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
	CMember(TArray<char>)                              Values                                                      ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UEnum*)                                    Enum                                                        ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x80, 136, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTangentData
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneTangentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ArriveTangent                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LeaveTangent                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ArriveTangentWeight                                         ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LeaveTangentWeight                                          ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentWeightMode>)  TangentWeightMode                                           ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDoubleValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneDoubleValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(FMovieSceneTangentData)                    Tangent                                                     ___ OFFSET(get<T>, {0x8, 20, 0, 0})
	CMember(TEnumAsByte<ERichCurveInterpMode>)         InterpMode                                                  ___ OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentMode>)        TangentMode                                                 ___ OFFSET(get<T>, {0x1D, 1, 0, 0})
	DMember(char)                                      PaddingByte                                                 ___ OFFSET(get<char>, {0x1E, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDoubleChannel
/// Size: 0x00C8 (0x000050 - 0x000118)
class FMovieSceneDoubleChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PreInfinityExtrap                                           ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PostInfinityExtrap                                          ___ OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FMovieSceneDoubleValue>)            Values                                                      ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(double)                                    DefaultValue                                                ___ OFFSET(get<double>, {0x78, 8, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x88, 136, 0, 0})
	SMember(FFrameRate)                                TickResolution                                              ___ OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneFloatValue
/// Size: 0x001C (0x000000 - 0x00001C)
class FMovieSceneFloatValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FMovieSceneTangentData)                    Tangent                                                     ___ OFFSET(get<T>, {0x4, 20, 0, 0})
	CMember(TEnumAsByte<ERichCurveInterpMode>)         InterpMode                                                  ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveTangentMode>)        TangentMode                                                 ___ OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(char)                                      PaddingByte                                                 ___ OFFSET(get<char>, {0x1A, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneFloatChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
class FMovieSceneFloatChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PreInfinityExtrap                                           ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<ERichCurveExtrapolation>)      PostInfinityExtrap                                          ___ OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatValue>)             Values                                                      ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     DefaultValue                                                ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            ___ OFFSET(get<bool>, {0x7C, 1, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x80, 136, 0, 0})
	SMember(FFrameRate)                                TickResolution                                              ___ OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneIntegerChannel
/// Size: 0x00B0 (0x000050 - 0x000100)
class FMovieSceneIntegerChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   DefaultValue                                                ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	CMember(TArray<int32_t>)                           Values                                                      ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x78, 136, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannelKeyValue
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneObjectPathChannelKeyValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SoftPtr                                                     ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(UObject*)                                  HardPtr                                                     ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneObjectPathChannel
/// Size: 0x00D8 (0x000050 - 0x000128)
class FMovieSceneObjectPathChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UClass*)                                   PropertyClass                                               ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FMovieSceneObjectPathChannelKeyValue>) Values                                                   ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMovieSceneObjectPathChannelKeyValue)      DefaultValue                                                ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0xA0, 136, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceCompilerMaskStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FMovieSceneSequenceCompilerMaskStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bHierarchy                                                  ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bEvaluationTemplate                                         ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bEvaluationTemplateField                                    ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bEntityComponentField                                       ___ OFFSET(get<bool>, {0x0, 1, 1, 3})
};

/// Struct /Script/MovieScene.MovieSceneCompiledSequenceFlagStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FMovieSceneCompiledSequenceFlagStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bParentSequenceRequiresLowerFence                           ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bParentSequenceRequiresUpperFence                           ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
};

/// Struct /Script/MovieScene.EasingComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FEasingComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UMovieSceneSection*)                       Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceComponent
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneTrackInstanceComponent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMovieSceneSection*)                       Owner                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   TrackInstanceClass                                          ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookComponent
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneEvaluationHookComponent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TScriptInterface<Class>)                   Interface                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.TrackInstanceInputComponent
/// Size: 0x0010 (0x000000 - 0x000010)
class FTrackInstanceInputComponent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMovieSceneSection*)                       Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   OutputIndex                                                 ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNode
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEntitySystemGraphNode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UMovieSceneEntitySystem*)                  System                                                      ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraphNodes
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneEntitySystemGraphNodes : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/MovieScene.MovieSceneEntitySystemGraph
/// Size: 0x0190 (0x000000 - 0x000190)
class FMovieSceneEntitySystemGraph : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMovieSceneEntitySystemGraphNodes)         Nodes                                                       ___ OFFSET(get<T>, {0xB8, 56, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookEvent
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneEvaluationHookEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMovieSceneEvaluationHookComponent)        Hook                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationHookEventContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneEvaluationHookEventContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMovieSceneEvaluationHookEvent>)    Events                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationInstanceKey
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneEvaluationInstanceKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceInput
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneTrackInstanceInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMovieSceneSection*)                       Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackInstanceEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneTrackInstanceEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  BoundObject                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMovieSceneTrackInstance*)                 TrackInstance                                               ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/MovieScene.OptionalMovieSceneBlendType
/// Size: 0x0002 (0x000000 - 0x000002)
class FOptionalMovieSceneBlendType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EMovieSceneBlendType)                      BlendType                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsValid                                                    ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplate
/// Size: 0x0010 (0x000010 - 0x000020)
class FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EMovieSceneCompletionMode)                 CompletionMode                                              ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TWeakObjectPtr<UMovieSceneSection*>)       SourceSectionPtr                                            ___ OFFSET(get<T>, {0x14, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplatePtr
/// Size: 0x0088 (0x000000 - 0x000088)
class FMovieSceneEvalTemplatePtr : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneEvaluationFieldEntityKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UObject*>)                  EntityOwner                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint32_t)                                  EntityID                                                    ___ OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntity
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneEvaluationFieldEntity : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMovieSceneEvaluationFieldEntityKey)       Key                                                         ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	DMember(int32_t)                                   SharedMetaDataIndex                                         ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneEvaluationFieldSharedEntityMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     ObjectBindingID                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneEvaluationFieldEntityMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   OverrideBoundPropertyPath                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFrameNumber)                              ForcedTime                                                  ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ESectionEvaluationFlags)                   Flags                                                       ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      bEvaluateInSequencePreRoll                                  ___ OFFSET(get<bool>, {0x15, 1, 1, 0})
	DMember(bool)                                      bEvaluateInSequencePostRoll                                 ___ OFFSET(get<bool>, {0x15, 1, 1, 1})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldEntityTree
/// Size: 0x0060 (0x000000 - 0x000060)
class FMovieSceneEvaluationFieldEntityTree : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/MovieScene.MovieSceneEntityComponentField
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMovieSceneEntityComponentField : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMovieSceneEvaluationFieldEntityTree)      PersistentEntityTree                                        ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FMovieSceneEvaluationFieldEntityTree)      OneShotEntityTree                                           ___ OFFSET(get<T>, {0x60, 96, 0, 0})
	CMember(TArray<FMovieSceneEvaluationFieldEntity>)  Entities                                                    ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FMovieSceneEvaluationFieldEntityMetaData>) EntityMetaData                                       ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FMovieSceneEvaluationFieldSharedEntityMetaData>) SharedMetaData                                 ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldTrackPtr
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneEvaluationFieldTrackPtr : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FMovieSceneSequenceID)                     SequenceID                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneTrackIdentifier)                TrackIdentifier                                             ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr
/// Size: 0x0004 (0x000008 - 0x00000C)
class FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMovieSceneSegmentIdentifier)              SegmentID                                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_EvaluationTrack
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneFieldEntry_EvaluationTrack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMovieSceneEvaluationFieldTrackPtr)        TrackPtr                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  NumChildren                                                 ___ OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneFieldEntry_ChildTemplate
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneFieldEntry_ChildTemplate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  ChildIndex                                                  ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	CMember(ESectionEvaluationFlags)                   Flags                                                       ___ OFFSET(get<T>, {0x2, 1, 0, 0})
	SMember(FFrameNumber)                              ForcedTime                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroupLUTIndex
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneEvaluationGroupLUTIndex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumInitPtrs                                                 ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumEvalPtrs                                                 ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroup
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneEvaluationGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FMovieSceneEvaluationGroupLUTIndex>) LUTIndices                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMovieSceneFieldEntry_EvaluationTrack>) TrackLUT                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMovieSceneFieldEntry_ChildTemplate>) SectionLUT                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneOrderedEvaluationKey
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneOrderedEvaluationKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMovieSceneEvaluationKey)                  Key                                                         ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	DMember(uint16_t)                                  SetupIndex                                                  ___ OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(uint16_t)                                  TearDownIndex                                               ___ OFFSET(get<uint16_t>, {0xE, 2, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneEvaluationMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FMovieSceneSequenceID>)             ActiveSequences                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMovieSceneOrderedEvaluationKey>)   ActiveEntities                                              ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationField
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneEvaluationField : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FMovieSceneFrameRange>)             Ranges                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMovieSceneEvaluationGroup>)        Groups                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMovieSceneEvaluationMetaData>)     MetaData                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneFrameRange
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneFrameRange : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MovieScene.MovieSceneTemplateGenerationLedger
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FMovieSceneTemplateGenerationLedger : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMovieSceneTrackIdentifier)                LastTrackIdentifier                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TMap<FGuid, FMovieSceneTrackIdentifier>)   TrackSignatureToTrackIdentifier                             ___ OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FGuid, FMovieSceneFrameRange>)        SubSectionRanges                                            ___ OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSubSectionData
/// Size: 0x001C (0x000000 - 0x00001C)
class FMovieSceneSubSectionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<UMovieSceneSubSection*>)    Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     ObjectBindingID                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ESectionEvaluationFlags)                   Flags                                                       ___ OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplateSerialNumber
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneEvaluationTemplateSerialNumber : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplate
/// Size: 0x0160 (0x000000 - 0x000160)
class FMovieSceneEvaluationTemplate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack>) Tracks                                   ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FGuid)                                     SequenceSignature                                           ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMovieSceneEvaluationTemplateSerialNumber) TemplateSerialNumber                                        ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FMovieSceneTemplateGenerationLedger)       TemplateLedger                                              ___ OFFSET(get<T>, {0xB8, 168, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTrack
/// Size: 0x0070 (0x000000 - 0x000070)
class FMovieSceneEvaluationTrack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGuid)                                     ObjectBindingID                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(uint16_t)                                  EvaluationPriority                                          ___ OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	CMember(EEvaluationMethod)                         EvaluationMethod                                            ___ OFFSET(get<T>, {0x12, 1, 0, 0})
	CMember(TWeakObjectPtr<UMovieSceneTrack*>)         SourceTrack                                                 ___ OFFSET(get<T>, {0x14, 8, 0, 0})
	CMember(TArray<FMovieSceneEvalTemplatePtr>)        ChildTemplates                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FMovieSceneTrackImplementationPtr)         TrackTemplate                                               ___ OFFSET(get<T>, {0x30, 56, 0, 0})
	SMember(FName)                                     EvaluationGroup                                             ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bEvaluateInPreroll                                          ___ OFFSET(get<bool>, {0x6C, 1, 1, 0})
	DMember(bool)                                      bEvaluateInPostroll                                         ___ OFFSET(get<bool>, {0x6C, 1, 1, 1})
	DMember(bool)                                      bTearDownPriority                                           ___ OFFSET(get<bool>, {0x6C, 1, 1, 2})
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementationPtr
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneTrackImplementationPtr : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
/// Size: 0x0088 (0x000000 - 0x000088)
class FMovieSceneRootEvaluationTemplateInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UMovieSceneSequence*>)      WeakRootSequence                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMovieSceneCompiledDataManager*)           CompiledDataManager                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UMovieSceneEntitySystemLinker*)            EntitySystemLinker                                          ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TMap<FMovieSceneSequenceID, UObject*>)     DirectorInstances                                           ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/MovieScene.MovieScenePropertySectionData
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieScenePropertySectionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     PropertyName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   PropertyPath                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieScenePropertySectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
class FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMovieScenePropertySectionData)            PropertyData                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceData
/// Size: 0x0110 (0x000000 - 0x000110)
class FMovieSceneSubSequenceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FSoftObjectPath)                           Sequence                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FMovieSceneSequenceTransform)              OuterToInnerTransform                                       ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	SMember(FMovieSceneSequenceTransform)              RootToSequenceTransform                                     ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FFrameRate)                                TickResolution                                              ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FMovieSceneSequenceID)                     DeterministicSequenceID                                     ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FMovieSceneFrameRange)                     ParentPlayRange                                             ___ OFFSET(get<T>, {0x64, 16, 0, 0})
	SMember(FFrameNumber)                              ParentStartFrameOffset                                      ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FFrameNumber)                              ParentEndFrameOffset                                        ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FFrameNumber)                              ParentFirstLoopStartFrameOffset                             ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bCanLoop                                                    ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FMovieSceneFrameRange)                     PlayRange                                                   ___ OFFSET(get<T>, {0x84, 16, 0, 0})
	SMember(FMovieSceneFrameRange)                     FullPlayRange                                               ___ OFFSET(get<T>, {0x94, 16, 0, 0})
	SMember(FMovieSceneFrameRange)                     UnwarpedPlayRange                                           ___ OFFSET(get<T>, {0xA4, 16, 0, 0})
	SMember(FMovieSceneFrameRange)                     PreRollRange                                                ___ OFFSET(get<T>, {0xB4, 16, 0, 0})
	SMember(FMovieSceneFrameRange)                     PostRollRange                                               ___ OFFSET(get<T>, {0xC4, 16, 0, 0})
	DMember(int16_t)                                   HierarchicalBias                                            ___ OFFSET(get<int16_t>, {0xD4, 2, 0, 0})
	CMember(EMovieSceneSubSectionFlags)                AccumulatedFlags                                            ___ OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FMovieSceneSequenceInstanceDataPtr)        InstanceData                                                ___ OFFSET(get<T>, {0xE0, 24, 0, 0})
	SMember(FGuid)                                     SubSectionSignature                                         ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceDataPtr
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneSequenceInstanceDataPtr : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MovieScene.MovieSceneSequenceTransform
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneSequenceTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMovieSceneTimeTransform)                  LinearTransform                                             ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	CMember(TArray<FMovieSceneNestedSequenceTransform>) NestedTransforms                                           ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneNestedSequenceTransform
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneNestedSequenceTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FMovieSceneTimeTransform)                  LinearTransform                                             ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FMovieSceneTimeWarping)                    Warping                                                     ___ OFFSET(get<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTimeWarping
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneTimeWarping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FFrameNumber)                              Start                                                       ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FFrameNumber)                              End                                                         ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchyNode
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneSequenceHierarchyNode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMovieSceneSequenceID)                     ParentID                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMovieSceneSequenceID>)             Children                                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTreeEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneSubSequenceTreeEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceTree
/// Size: 0x0060 (0x000000 - 0x000060)
class FMovieSceneSubSequenceTree : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchy
/// Size: 0x0118 (0x000000 - 0x000118)
class FMovieSceneSequenceHierarchy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMovieSceneSequenceHierarchyNode)          RootNode                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FMovieSceneSubSequenceTree)                Tree                                                        ___ OFFSET(get<T>, {0x18, 96, 0, 0})
	CMember(TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData>) SubSequences                                  ___ OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode>) Hierarchy                               ___ OFFSET(get<T>, {0xC8, 80, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneWarpCounter
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneWarpCounter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<uint32_t>)                          WarpCounts                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementation
/// Size: 0x0000 (0x000010 - 0x000010)
class FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MovieScene.MovieSceneExpansionState
/// Size: 0x0001 (0x000000 - 0x000001)
class FMovieSceneExpansionState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bExpanded                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEditorData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMovieSceneEditorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FString, FMovieSceneExpansionState>)  ExpansionStates                                             ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FString>)                           PinnedNodes                                                 ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(double)                                    ViewStart                                                   ___ OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    ViewEnd                                                     ___ OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(double)                                    WorkStart                                                   ___ OFFSET(get<double>, {0x70, 8, 0, 0})
	DMember(double)                                    WorkEnd                                                     ___ OFFSET(get<double>, {0x78, 8, 0, 0})
	CMember(TSet<FFrameNumber>)                        MarkedFrames                                                ___ OFFSET(get<T>, {0x80, 80, 0, 0})
	SMember(FFloatRange)                               WorkingRange                                                ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FFloatRange)                               ViewRange                                                   ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackLabels
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneTrackLabels : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Strings                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingIDs
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneObjectBindingIDs : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMovieSceneObjectBindingID>)        Ids                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingID
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneObjectBindingID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SequenceID                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   ResolveParentIndex                                          ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSectionGroup
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneSectionGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<TWeakObjectPtr>)                    Sections                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneMarkedFrame
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneMarkedFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FFrameNumber)                              FrameNumber                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Label                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsDeterminismFence                                         ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneBinding
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     ObjectGuid                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   BindingName                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UMovieSceneTrack*>)                 Tracks                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneBindingOverrideData
/// Size: 0x0040 (0x000000 - 0x000040)
class FMovieSceneBindingOverrideData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FMovieSceneObjectBindingID)                ObjectBindingID                                             ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Object                                                      ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneBindingProxy
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneBindingProxy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGuid)                                     BindingID                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UMovieSceneSequence*)                      Sequence                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDynamicBindingPayloadVariable
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneDynamicBindingPayloadVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDynamicBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneDynamicBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UFunction*)                                Function                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDynamicBindingResolveParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneDynamicBindingResolveParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UMovieSceneSequence*)                      Sequence                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     ObjectBindingID                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(UMovieSceneSequence*)                      RootSequence                                                ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDynamicBindingResolveResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneDynamicBindingResolveResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  Object                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsPossessedObject                                          ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneDynamicBindingContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneDynamicBindingContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMovieSceneDynamicBinding)                 DynamicBinding                                              ___ OFFSET(get<T>, {0x0, 40, 0, 0})
};

/// Struct /Script/MovieScene.MovieScenePossessable
/// Size: 0x0080 (0x000000 - 0x000080)
class FMovieScenePossessable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMovieSceneDynamicBinding)                 DynamicBinding                                              ___ OFFSET(get<T>, {0x10, 40, 0, 0})
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FGuid)                                     ParentGuid                                                  ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FMovieSceneObjectBindingID)                SpawnableObjectBindingID                                    ___ OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSectionEvalOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FMovieSceneSectionEvalOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bCanEditCompletionMode                                      ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EMovieSceneCompletionMode)                 CompletionMode                                              ___ OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEasingSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneEasingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   AutoEaseInDuration                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AutoEaseOutDuration                                         ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   EaseIn                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bManualEaseIn                                               ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   ManualEaseInDuration                                        ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   EaseOut                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bManualEaseOut                                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   ManualEaseOutDuration                                       ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTimecodeSource
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneTimecodeSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FTimecode)                                 Timecode                                                    ___ OFFSET(get<T>, {0x0, 20, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneSequenceInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MovieScene.MovieSceneSequenceReplProperties
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneSequenceReplProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FFrameTime)                                LastKnownPosition                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<EMovieScenePlayerStatus>)      LastKnownStatus                                             ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   LastKnownNumLoops                                           ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   LastKnownSerialNumber                                       ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneSequencePlaybackParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameTime)                                Frame                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Time                                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FString)                                   MarkedFrame                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(EMovieScenePositionType)                   PositionType                                                ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EUpdatePositionMethod)                     UpdateMethod                                                ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	DMember(bool)                                      bHasJumped                                                  ___ OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequencePlayToParams
/// Size: 0x0001 (0x000000 - 0x000001)
class FMovieSceneSequencePlayToParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bExclusive                                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSpawnable
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FMovieSceneSpawnable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                SpawnTransform                                              ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bContinuouslyRespawn                                        ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bNetAddressableName                                         ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
	SMember(FMovieSceneDynamicBinding)                 DynamicBinding                                              ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(UObject*)                                  ObjectTemplate                                              ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<FGuid>)                             ChildPossessables                                           ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(ESpawnOwnership)                           Ownership                                                   ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	SMember(FName)                                     LevelName                                                   ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackEvalOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTrackEvalOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bCanEvaluateNearestSection                                  ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bEvalNearestSection                                         ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bEvaluateInPreroll                                          ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bEvaluateInPostroll                                         ___ OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bEvaluateNearestSection                                     ___ OFFSET(get<bool>, {0x0, 1, 1, 4})
};

/// Struct /Script/MovieScene.MovieSceneTrackDisplayOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTrackDisplayOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bShowVerticalFrames                                         ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneTrackEvaluationFieldEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UMovieSceneSection*)                       Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumberRange)                         Range                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FFrameNumber)                              ForcedTime                                                  ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(ESectionEvaluationFlags)                   Flags                                                       ___ OFFSET(get<T>, {0x1C, 1, 0, 0})
	DMember(int16_t)                                   LegacySortOrder                                             ___ OFFSET(get<int16_t>, {0x1E, 2, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackEvaluationField
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneTrackEvaluationField : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMovieSceneTrackEvaluationFieldEntry>) Entries                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.TestMovieSceneEvalTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
class FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Enum /Script/MovieScene.EMovieSceneKeyInterpolation
/// Size: 0x07
enum EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto0                                               = 0,
	EMovieSceneKeyInterpolation__User1                                               = 1,
	EMovieSceneKeyInterpolation__Break2                                              = 2,
	EMovieSceneKeyInterpolation__Linear3                                             = 3,
	EMovieSceneKeyInterpolation__Constant4                                           = 4,
	EMovieSceneKeyInterpolation__SmartAuto5                                          = 5,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX6                    = 6
};

/// Enum /Script/MovieScene.EMovieSceneCompletionMode
/// Size: 0x04
enum EMovieSceneCompletionMode : uint8_t
{
	EMovieSceneCompletionMode__KeepState0                                            = 0,
	EMovieSceneCompletionMode__RestoreState1                                         = 1,
	EMovieSceneCompletionMode__ProjectDefault2                                       = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX3                        = 3
};

/// Enum /Script/MovieScene.EMovieScenePlayerStatus
/// Size: 0x07
enum EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped0                                                = 0,
	EMovieScenePlayerStatus__Playing1                                                = 1,
	EMovieScenePlayerStatus__Scrubbing2                                              = 2,
	EMovieScenePlayerStatus__Jumping3                                                = 3,
	EMovieScenePlayerStatus__Stepping4                                               = 4,
	EMovieScenePlayerStatus__Paused5                                                 = 5,
	EMovieScenePlayerStatus__MAX6                                                    = 6
};

/// Enum /Script/MovieScene.EMovieSceneEvaluationType
/// Size: 0x03
enum EMovieSceneEvaluationType : uint8_t
{
	EMovieSceneEvaluationType__FrameLocked0                                          = 0,
	EMovieSceneEvaluationType__WithSubFrames1                                        = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX2                        = 2
};

/// Enum /Script/MovieScene.EUpdateClockSource
/// Size: 0x08
enum EUpdateClockSource : uint8_t
{
	EUpdateClockSource__Tick0                                                        = 0,
	EUpdateClockSource__Platform1                                                    = 1,
	EUpdateClockSource__Audio2                                                       = 2,
	EUpdateClockSource__RelativeTimecode3                                            = 3,
	EUpdateClockSource__Timecode4                                                    = 4,
	EUpdateClockSource__PlayEveryFrame5                                              = 5,
	EUpdateClockSource__Custom6                                                      = 6,
	EUpdateClockSource__EUpdateClockSource_MAX7                                      = 7
};

/// Enum /Script/MovieScene.EMovieSceneSequenceFlags
/// Size: 0x06
enum EMovieSceneSequenceFlags : uint8_t
{
	EMovieSceneSequenceFlags__None0                                                  = 0,
	EMovieSceneSequenceFlags__Volatile1                                              = 1,
	EMovieSceneSequenceFlags__BlockingEvaluation2                                    = 2,
	EMovieSceneSequenceFlags__DynamicWeighting3                                      = 4,
	EMovieSceneSequenceFlags__InheritedFlags4                                        = 1,
	EMovieSceneSequenceFlags__EMovieSceneSequenceFlags_MAX5                          = 5
};

/// Enum /Script/MovieScene.EMovieSceneServerClientMask
/// Size: 0x05
enum EMovieSceneServerClientMask : uint8_t
{
	EMovieSceneServerClientMask__None0                                               = 0,
	EMovieSceneServerClientMask__Server1                                             = 1,
	EMovieSceneServerClientMask__Client2                                             = 2,
	EMovieSceneServerClientMask__All3                                                = 3,
	EMovieSceneServerClientMask__EMovieSceneServerClientMask_MAX4                    = 4
};

/// Enum /Script/MovieScene.EMovieSceneSubSectionFlags
/// Size: 0x07
enum EMovieSceneSubSectionFlags : uint8_t
{
	EMovieSceneSubSectionFlags__None0                                                = 0,
	EMovieSceneSubSectionFlags__OverrideKeepState1                                   = 1,
	EMovieSceneSubSectionFlags__OverrideRestoreState2                                = 2,
	EMovieSceneSubSectionFlags__IgnoreHierarchicalBias3                              = 4,
	EMovieSceneSubSectionFlags__BlendHierarchicalBias4                               = 8,
	EMovieSceneSubSectionFlags__AnyRestoreStateOverride5                             = 3,
	EMovieSceneSubSectionFlags__EMovieSceneSubSectionFlags_MAX6                      = 9
};

/// Enum /Script/MovieScene.ESectionEvaluationFlags
/// Size: 0x06
enum ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None0                                                   = 0,
	ESectionEvaluationFlags__PreRoll1                                                = 1,
	ESectionEvaluationFlags__PostRoll2                                               = 2,
	ESectionEvaluationFlags__ForceKeepState3                                         = 4,
	ESectionEvaluationFlags__ForceRestoreState4                                      = 8,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX5                            = 9
};

/// Enum /Script/MovieScene.EMovieSceneBlendType
/// Size: 0x06
enum EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Invalid0                                                   = 0,
	EMovieSceneBlendType__Absolute1                                                  = 1,
	EMovieSceneBlendType__Additive2                                                  = 2,
	EMovieSceneBlendType__Relative3                                                  = 4,
	EMovieSceneBlendType__AdditiveFromBase4                                          = 8,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX5                                  = 9
};

/// Enum /Script/MovieScene.EEvaluationMethod
/// Size: 0x03
enum EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static0                                                       = 0,
	EEvaluationMethod__Swept1                                                        = 1,
	EEvaluationMethod__EEvaluationMethod_MAX2                                        = 2
};

/// Enum /Script/MovieScene.EMovieSceneBuiltInEasing
/// Size: 0x26
enum EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear0                                                = 0,
	EMovieSceneBuiltInEasing__SinIn1                                                 = 1,
	EMovieSceneBuiltInEasing__SinOut2                                                = 2,
	EMovieSceneBuiltInEasing__SinInOut3                                              = 3,
	EMovieSceneBuiltInEasing__QuadIn4                                                = 4,
	EMovieSceneBuiltInEasing__QuadOut5                                               = 5,
	EMovieSceneBuiltInEasing__QuadInOut6                                             = 6,
	EMovieSceneBuiltInEasing__Cubic7                                                 = 7,
	EMovieSceneBuiltInEasing__CubicIn8                                               = 8,
	EMovieSceneBuiltInEasing__CubicOut9                                              = 9,
	EMovieSceneBuiltInEasing__CubicInOut10                                           = 10,
	EMovieSceneBuiltInEasing__HermiteCubicInOut11                                    = 11,
	EMovieSceneBuiltInEasing__QuartIn12                                              = 12,
	EMovieSceneBuiltInEasing__QuartOut13                                             = 13,
	EMovieSceneBuiltInEasing__QuartInOut14                                           = 14,
	EMovieSceneBuiltInEasing__QuintIn15                                              = 15,
	EMovieSceneBuiltInEasing__QuintOut16                                             = 16,
	EMovieSceneBuiltInEasing__QuintInOut17                                           = 17,
	EMovieSceneBuiltInEasing__ExpoIn18                                               = 18,
	EMovieSceneBuiltInEasing__ExpoOut19                                              = 19,
	EMovieSceneBuiltInEasing__ExpoInOut20                                            = 20,
	EMovieSceneBuiltInEasing__CircIn21                                               = 21,
	EMovieSceneBuiltInEasing__CircOut22                                              = 22,
	EMovieSceneBuiltInEasing__CircInOut23                                            = 23,
	EMovieSceneBuiltInEasing__Custom24                                               = 24,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX25                         = 25
};

/// Enum /Script/MovieScene.EMovieSceneObjectBindingSpace
/// Size: 0x04
enum EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local0                                            = 0,
	EMovieSceneObjectBindingSpace__Root1                                             = 1,
	EMovieSceneObjectBindingSpace__Unused2                                           = 2,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX3                = 3
};

/// Enum /Script/MovieScene.EUpdatePositionMethod
/// Size: 0x04
enum EUpdatePositionMethod : uint8_t
{
	EUpdatePositionMethod__Play0                                                     = 0,
	EUpdatePositionMethod__Jump1                                                     = 1,
	EUpdatePositionMethod__Scrub2                                                    = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX3                                = 3
};

/// Enum /Script/MovieScene.EMovieScenePositionType
/// Size: 0x04
enum EMovieScenePositionType : uint8_t
{
	EMovieScenePositionType__Frame0                                                  = 0,
	EMovieScenePositionType__Time1                                                   = 1,
	EMovieScenePositionType__MarkedFrame2                                            = 2,
	EMovieScenePositionType__EMovieScenePositionType_MAX3                            = 3
};

/// Enum /Script/MovieScene.ESpawnOwnership
/// Size: 0x04
enum ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence0                                                  = 0,
	ESpawnOwnership__RootSequence1                                                   = 1,
	ESpawnOwnership__External2                                                       = 2,
	ESpawnOwnership__ESpawnOwnership_MAX3                                            = 3
};

