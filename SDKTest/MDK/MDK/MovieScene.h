
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MovieScene.MovieSceneSignedObject
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UMovieSceneSignedObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FGuid)                                     Signature                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSection
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UMovieSceneSection : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMovieSceneSectionEvalOptions)             EvalOptions                                                 OFFSET(getStruct<T>, {0xB0, 2, 0, 0})
	SMember(FMovieSceneEasingSettings)                 Easing                                                      OFFSET(getStruct<T>, {0xB8, 56, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   OverlapPriority                                             OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x100, 1, 1, 0})
	DMember(bool)                                      bIsLocked                                                   OFFSET(get<bool>, {0x100, 1, 1, 1})
	DMember(bool)                                      bIsInfinite                                                 OFFSET(get<bool>, {0x100, 1, 1, 2})
	DMember(float)                                     PrerollTime                                                 OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     PostrollTime                                                OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FOptionalMovieSceneBlendType)              BlendType                                                   OFFSET(getStruct<T>, {0x10C, 2, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneTrack
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMovieSceneTrack : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMovieSceneTrackEvalOptions)               EvalOptions                                                 OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneNameableTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneNameableTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieScene.MovieScene
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UMovieScene : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FMovieSceneSpawnable>)              Spawnables                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FMovieScenePossessable>)            Possessables                                                OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FMovieSceneBinding>)                ObjectBindings                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<UMovieSceneTrack*>)                 MasterTracks                                                OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(UMovieSceneTrack*)                         CameraCutTrack                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FFloatRange)                               SelectionRange                                              OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FFloatRange)                               PlaybackRange                                               OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      bForceFixedFrameIntervalPlayback                            OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(float)                                     FixedFrameInterval                                          OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     InTime                                                      OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     OutTime                                                     OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0x12C, 4, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneBindingOverrides
/// Size: 0x0070 (0x000028 - 0x000098)
class UMovieSceneBindingOverrides : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FMovieSceneBindingOverrideData>)    BindingData                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneBindingOverridesInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneBindingOverridesInterface : public UInterface
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

/// Class /Script/MovieScene.MovieSceneBuiltInEasingFunction
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneBuiltInEasingFunction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EMovieSceneBuiltInEasing)                  Type                                                        OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneEasingExternalCurve
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneEasingExternalCurve : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UCurveFloat*)                              Curve                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneEasingFunction
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneEasingFunction : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MovieScene.MovieSceneEasingFunction.OnEvaluate
	// float OnEvaluate(float Interp);                                                                                          // [0x154a140] Event|Protected|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MovieScene.MovieSceneFolder
/// Size: 0x0048 (0x000028 - 0x000070)
class UMovieSceneFolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     FolderName                                                  OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(TArray<UMovieSceneFolder*>)                ChildFolders                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UMovieSceneTrack*>)                 ChildMasterTracks                                           OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FString>)                           ChildObjectBindingStrings                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSegmentCompilerTestTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bHighPassFilter                                             OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               SectionArray                                                OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSegmentCompilerTestSection
/// Size: 0x0000 (0x000110 - 0x000110)
class UMovieSceneSegmentCompilerTestSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /Script/MovieScene.MovieSceneSequence
/// Size: 0x0300 (0x0000B0 - 0x0003B0)
class UMovieSceneSequence : public UMovieSceneSignedObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FMovieSceneEvaluationTemplate)             PrecompiledEvaluationTemplate                               OFFSET(getStruct<T>, {0xB0, 752, 0, 0})
	CMember(EMovieSceneCompletionMode)                 DefaultCompletionMode                                       OFFSET(get<T>, {0x3A0, 1, 0, 0})
	DMember(bool)                                      bParentContextsAreSignificant                               OFFSET(get<bool>, {0x3A1, 1, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSequencePlayer
/// Size: 0x07D8 (0x000028 - 0x000800)
class UMovieSceneSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	CMember(UMulticastDelegate)                        OnPlay                                                      OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnPlayReverse                                               OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnStop                                                      OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnPause                                                     OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFinished                                                  OFFSET(get<T>, {0x3B0, 16, 0, 0})
	CMember(TEnumAsByte<EMovieScenePlayerStatus>)      Status                                                      OFFSET(get<T>, {0x3C0, 1, 0, 0})
	DMember(bool)                                      bReversePlayback                                            OFFSET(get<bool>, {0x3C4, 1, 1, 0})
	DMember(bool)                                      bPendingFirstUpdate                                         OFFSET(get<bool>, {0x3C4, 1, 1, 1})
	CMember(UMovieSceneSequence*)                      Sequence                                                    OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(float)                                     TimeCursorPosition                                          OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0x3E0, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumLoops                                             OFFSET(get<int32_t>, {0x3E4, 4, 0, 0})
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x3F8, 48, 0, 0})


	/// Functions
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Stop
	// void Stop();                                                                                                             // [0x1cdc700] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.StartPlayingNextTick
	// void StartPlayingNextTick();                                                                                             // [0x1cdc6e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlayRate
	// void SetPlayRate(float PlayRate);                                                                                        // [0x1cdc520] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlaybackRange
	// void SetPlaybackRange(float NewStartTime, float NewEndTime);                                                             // [0x1cdc620] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
	// void SetPlaybackPosition(float NewPlaybackPosition);                                                                     // [0x1cdc5a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
	// void SetDisableCameraCuts(bool bInDisableCameraCuts);                                                                    // [0x1cdc4a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Scrub
	// void Scrub();                                                                                                            // [0x1cdc480] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayReverse
	// void PlayReverse();                                                                                                      // [0x1cdc460] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.PlayLooping
	// void PlayLooping(int32_t NumLoops);                                                                                      // [0x1cdc3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Play
	// void Play();                                                                                                             // [0x1cdc3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.Pause
	// void Pause();                                                                                                            // [0x1cdc3a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.JumpToPosition
	// void JumpToPosition(float NewPlaybackPosition);                                                                          // [0x1cdc320] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x1cdc2f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x1cdc2c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
	// void GoToEndAndStop();                                                                                                   // [0x1cdc2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0x1cdc200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlaybackStart
	// float GetPlaybackStart();                                                                                                // [0x1cdc280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlaybackPosition
	// float GetPlaybackPosition();                                                                                             // [0x1cdc250] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetPlaybackEnd
	// float GetPlaybackEnd();                                                                                                  // [0x1cdc230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetLength
	// float GetLength();                                                                                                       // [0x1cdc1d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
	// bool GetDisableCameraCuts();                                                                                             // [0x1cdc1b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.GetBoundObjects
	// TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);                                              // [0x1cdc0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
	// void ChangePlaybackDirection();                                                                                          // [0x1cdc090] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MovieScene.MovieSceneSubSection
/// Size: 0x0070 (0x000110 - 0x000180)
class UMovieSceneSubSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMovieSceneSectionParameters)              Parameters                                                  OFFSET(getStruct<T>, {0x110, 20, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     TimeScale                                                   OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     PrerollTime                                                 OFFSET(get<float>, {0x12C, 4, 0, 0})
	CMember(UMovieSceneSequence*)                      SubSequence                                                 OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(AActor*)                                   ActorToRecord                                               OFFSET(get<T>, {0x138, 28, 0, 0})
	SMember(FString)                                   TargetSequenceName                                          OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FDirectoryPath)                            TargetPathToRecordTo                                        OFFSET(getStruct<T>, {0x168, 16, 0, 0})
};

/// Class /Script/MovieScene.MovieSceneSubTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplateBase
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneEvalTemplateBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplate
/// Size: 0x0010 (0x000010 - 0x000020)
class FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EMovieSceneCompletionMode)                 CompletionMode                                              OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(UMovieSceneSection*)                       SourceSection                                               OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieScenePropertySectionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieScenePropertySectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   PropertyPath                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     FunctionName                                                OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     NotifyFunctionName                                          OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackLabels
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneTrackLabels : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Strings                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEditorData
/// Size: 0x0070 (0x000000 - 0x000070)
class FMovieSceneEditorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TMap<FString, FMovieSceneExpansionState>)  ExpansionStates                                             OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FFloatRange)                               WorkingRange                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FFloatRange)                               ViewRange                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneExpansionState
/// Size: 0x0001 (0x000000 - 0x000001)
class FMovieSceneExpansionState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bExpanded                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneBinding
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneBinding : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     ObjectGuid                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   BindingName                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<UMovieSceneTrack*>)                 Tracks                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneBindingOverrideData
/// Size: 0x0024 (0x000000 - 0x000024)
class FMovieSceneBindingOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FMovieSceneObjectBindingID)                ObjectBindingId                                             OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Object                                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneObjectBindingID
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneObjectBindingID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SequenceID                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(EMovieSceneObjectBindingSpace)             Space                                                       OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MovieScene.OptionalMovieSceneBlendType
/// Size: 0x0002 (0x000000 - 0x000002)
class FOptionalMovieSceneBlendType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvalTemplatePtr
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneEvalTemplatePtr : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/MovieScene.MovieSceneEmptyStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FMovieSceneEmptyStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MovieScene.MovieSceneEvaluationField
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneEvaluationField : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FFloatRange>)                       Ranges                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMovieSceneEvaluationGroup>)        Groups                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FMovieSceneEvaluationMetaData>)     MetaData                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationMetaData
/// Size: 0x0070 (0x000000 - 0x000070)
class FMovieSceneEvaluationMetaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FMovieSceneSequenceID>)             ActiveSequences                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMovieSceneOrderedEvaluationKey>)   ActiveEntities                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TMap<FMovieSceneSequenceID, FGuid>)        SubSequenceSignatures                                       OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceID
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneSequenceID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneOrderedEvaluationKey
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneOrderedEvaluationKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMovieSceneEvaluationKey)                  Key                                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(uint32_t)                                  EvaluationIndex                                             OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneEvaluationKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMovieSceneSequenceID)                     SequenceID                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneTrackIdentifier)                TrackIdentifier                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  SectionIndex                                                OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTrackIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroup
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneEvaluationGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FMovieSceneEvaluationGroupLUTIndex>) LUTIndices                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMovieSceneEvaluationFieldSegmentPtr>) SegmentPtrLUT                                            OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldTrackPtr
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneEvaluationFieldTrackPtr : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FMovieSceneSequenceID)                     SequenceID                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneTrackIdentifier)                TrackIdentifier                                             OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationFieldSegmentPtr
/// Size: 0x0004 (0x000008 - 0x00000C)
class FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FMovieSceneSegmentIdentifier)              SegmentID                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSegmentIdentifier
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneSegmentIdentifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   IdentifierIndex                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationGroupLUTIndex
/// Size: 0x000C (0x000000 - 0x00000C)
class FMovieSceneEvaluationGroupLUTIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   LUTOffset                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumInitPtrs                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumEvalPtrs                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationOperand
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneEvaluationOperand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ObjectBindingId                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMovieSceneSequenceID)                     SequenceID                                                  OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTemplate
/// Size: 0x02F0 (0x000000 - 0x0002F0)
class FMovieSceneEvaluationTemplate : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack>) Tracks                                   OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FMovieSceneEvaluationField)                EvaluationField                                             OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	SMember(FMovieSceneSequenceHierarchy)              Hierarchy                                                   OFFSET(getStruct<T>, {0xD0, 160, 0, 0})
	SMember(FGuid)                                     SequenceSignature                                           OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	SMember(FMovieSceneTemplateGenerationLedger)       TemplateLedger                                              OFFSET(getStruct<T>, {0x180, 168, 0, 0})
	SMember(FMovieSceneTrackFieldData)                 TrackFieldData                                              OFFSET(getStruct<T>, {0x228, 96, 0, 0})
	SMember(FMovieSceneSubSectionFieldData)            SubSectionFieldData                                         OFFSET(getStruct<T>, {0x288, 96, 0, 0})
	DMember(bool)                                      bKeepStaleTracks                                            OFFSET(get<bool>, {0x2E8, 1, 1, 0})
};

/// Struct /Script/MovieScene.MovieSceneSubSectionFieldData
/// Size: 0x0060 (0x000000 - 0x000060)
class FMovieSceneSubSectionFieldData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/MovieScene.MovieSceneTrackFieldData
/// Size: 0x0060 (0x000000 - 0x000060)
class FMovieSceneTrackFieldData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/MovieScene.MovieSceneTemplateGenerationLedger
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FMovieSceneTemplateGenerationLedger : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMovieSceneTrackIdentifier)                LastTrackIdentifier                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TMap<FGuid, FMovieSceneTrackIdentifier>)   TrackSignatureToTrackIdentifier                             OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FGuid, FFloatRange>)                  SubSectionRanges                                            OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchy
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FMovieSceneSequenceHierarchy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData>) SubSequences                                  OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode>) Hierarchy                               OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceHierarchyNode
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneSequenceHierarchyNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FMovieSceneSequenceID)                     ParentID                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMovieSceneSequenceID>)             Children                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSubSequenceData
/// Size: 0x0078 (0x000000 - 0x000078)
class FMovieSceneSubSequenceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSoftObjectPath)                           Sequence                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FMovieSceneSequenceTransform)              RootToSequenceTransform                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FMovieSceneSequenceID)                     DeterministicSequenceID                                     OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FFloatRange)                               PlayRange                                                   OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	SMember(FFloatRange)                               PreRollRange                                                OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	SMember(FFloatRange)                               PostRollRange                                               OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	DMember(int32_t)                                   HierarchicalBias                                            OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	SMember(FMovieSceneSequenceInstanceDataPtr)        InstanceData                                                OFFSET(getStruct<T>, {0x58, 24, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceDataPtr
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneSequenceInstanceDataPtr : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/MovieScene.MovieSceneSequenceTransform
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneSequenceTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     TimeScale                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTrack
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FMovieSceneEvaluationTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FGuid)                                     ObjectBindingId                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint16_t)                                  EvaluationPriority                                          OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	CMember(EEvaluationMethod)                         EvaluationMethod                                            OFFSET(get<T>, {0x12, 1, 0, 0})
	SMember(FMovieSceneEvaluationTrackSegments)        Segments                                                    OFFSET(getStruct<T>, {0x18, 32, 0, 0})
	CMember(UMovieSceneTrack*)                         SourceTrack                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FSectionEvaluationDataTree)                EvaluationTree                                              OFFSET(getStruct<T>, {0x40, 96, 0, 0})
	CMember(TArray<FMovieSceneEvalTemplatePtr>)        ChildTemplates                                              OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMovieSceneTrackImplementationPtr)         TrackTemplate                                               OFFSET(getStruct<T>, {0xB0, 56, 0, 0})
	SMember(FName)                                     EvaluationGroup                                             OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bEvaluateInPreroll                                          OFFSET(get<bool>, {0xF0, 1, 1, 0})
	DMember(bool)                                      bEvaluateInPostroll                                         OFFSET(get<bool>, {0xF0, 1, 1, 1})
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementationPtr
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneTrackImplementationPtr : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/MovieScene.SectionEvaluationDataTree
/// Size: 0x0060 (0x000000 - 0x000060)
class FSectionEvaluationDataTree : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/MovieScene.MovieSceneEvaluationTrackSegments
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneEvaluationTrackSegments : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<int32_t>)                           SegmentIdentifierToIndex                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FMovieSceneSegment>)                SortedSegments                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSegment
/// Size: 0x0058 (0x000000 - 0x000058)
class FMovieSceneSegment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/MovieScene.MovieSceneSubSectionData
/// Size: 0x001C (0x000000 - 0x00001C)
class FMovieSceneSubSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(TWeakObjectPtr<UMovieSceneSubSection*>)    Section                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     ObjectBindingId                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(ESectionEvaluationFlags)                   Flags                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneKeyStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneKeyStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MovieScene.MovieScenePossessable
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieScenePossessable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(UClass*)                                   PossessedObjectClass                                        OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FGuid)                                     ParentGuid                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieScenePropertySectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
class FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMovieScenePropertySectionData)            PropertyData                                                OFFSET(getStruct<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneEasingSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FMovieSceneEasingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     AutoEaseInTime                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AutoEaseOutTime                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   EaseIn                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bManualEaseIn                                               OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     ManualEaseInTime                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   EaseOut                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bManualEaseOut                                              OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     ManualEaseOutTime                                           OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSectionEvalOptions
/// Size: 0x0002 (0x000000 - 0x000002)
class FMovieSceneSectionEvalOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bCanEditCompletionMode                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EMovieSceneCompletionMode)                 CompletionMode                                              OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSectionParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneSectionParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TimeScale                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   HierarchicalBias                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     PrerollTime                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PostrollTime                                                OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/MovieScene.SectionEvaluationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FSectionEvaluationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   ImplIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     ForcedTime                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ESectionEvaluationFlags)                   Flags                                                       OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/MovieScene.TestMovieSceneEvalTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
class FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MovieScene.MovieSceneSequenceInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneSequenceInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/MovieScene.MovieSceneSequencePlaybackSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneSequencePlaybackSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   LoopCount                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bRandomStartTime                                            OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bRestoreState                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bDisableMovementInput                                       OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bDisableLookAtInput                                         OFFSET(get<bool>, {0x12, 1, 0, 0})
	DMember(bool)                                      bHidePlayer                                                 OFFSET(get<bool>, {0x13, 1, 0, 0})
	DMember(bool)                                      bHideHud                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bDisableCameraCuts                                          OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(UObject*)                                  InstanceData                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   BindingOverrides                                            OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneSpawnable
/// Size: 0x0070 (0x000000 - 0x000070)
class FMovieSceneSpawnable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                SpawnTransform                                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(UObject*)                                  ObjectTemplate                                              OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<FGuid>)                             ChildPossessables                                           OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(ESpawnOwnership)                           Ownership                                                   OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Struct /Script/MovieScene.MovieSceneTrackEvalOptions
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTrackEvalOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bCanEvaluateNearestSection                                  OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bEvalNearestSection                                         OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bEvaluateInPreroll                                          OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bEvaluateInPostroll                                         OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bEvaluateNearestSection                                     OFFSET(get<bool>, {0x0, 1, 1, 4})
};

/// Struct /Script/MovieScene.MovieSceneTrackImplementation
/// Size: 0x0000 (0x000010 - 0x000010)
class FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/MovieScene.EMovieSceneKeyInterpolation
/// Size: 0x06
enum EMovieSceneKeyInterpolation : uint8_t
{
	EMovieSceneKeyInterpolation__Auto0                                               = 0,
	EMovieSceneKeyInterpolation__User1                                               = 1,
	EMovieSceneKeyInterpolation__Break2                                              = 2,
	EMovieSceneKeyInterpolation__Linear3                                             = 3,
	EMovieSceneKeyInterpolation__Constant4                                           = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX5                    = 5
};

/// Enum /Script/MovieScene.EMovieSceneBlendType
/// Size: 0x04
enum EMovieSceneBlendType : uint8_t
{
	EMovieSceneBlendType__Absolute0                                                  = 1,
	EMovieSceneBlendType__Additive1                                                  = 2,
	EMovieSceneBlendType__Relative2                                                  = 4,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX3                                  = 5
};

/// Enum /Script/MovieScene.EMovieSceneBuiltInEasing
/// Size: 0x23
enum EMovieSceneBuiltInEasing : uint8_t
{
	EMovieSceneBuiltInEasing__Linear0                                                = 0,
	EMovieSceneBuiltInEasing__SinIn1                                                 = 1,
	EMovieSceneBuiltInEasing__SinOut2                                                = 2,
	EMovieSceneBuiltInEasing__SinInOut3                                              = 3,
	EMovieSceneBuiltInEasing__QuadIn4                                                = 4,
	EMovieSceneBuiltInEasing__QuadOut5                                               = 5,
	EMovieSceneBuiltInEasing__QuadInOut6                                             = 6,
	EMovieSceneBuiltInEasing__CubicIn7                                               = 7,
	EMovieSceneBuiltInEasing__CubicOut8                                              = 8,
	EMovieSceneBuiltInEasing__CubicInOut9                                            = 9,
	EMovieSceneBuiltInEasing__QuartIn10                                              = 10,
	EMovieSceneBuiltInEasing__QuartOut11                                             = 11,
	EMovieSceneBuiltInEasing__QuartInOut12                                           = 12,
	EMovieSceneBuiltInEasing__QuintIn13                                              = 13,
	EMovieSceneBuiltInEasing__QuintOut14                                             = 14,
	EMovieSceneBuiltInEasing__QuintInOut15                                           = 15,
	EMovieSceneBuiltInEasing__ExpoIn16                                               = 16,
	EMovieSceneBuiltInEasing__ExpoOut17                                              = 17,
	EMovieSceneBuiltInEasing__ExpoInOut18                                            = 18,
	EMovieSceneBuiltInEasing__CircIn19                                               = 19,
	EMovieSceneBuiltInEasing__CircOut20                                              = 20,
	EMovieSceneBuiltInEasing__CircInOut21                                            = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX22                         = 22
};

/// Enum /Script/MovieScene.EEvaluationMethod
/// Size: 0x03
enum EEvaluationMethod : uint8_t
{
	EEvaluationMethod__Static0                                                       = 0,
	EEvaluationMethod__Swept1                                                        = 1,
	EEvaluationMethod__EEvaluationMethod_MAX2                                        = 2
};

/// Enum /Script/MovieScene.EMovieScenePlayerStatus
/// Size: 0x08
enum EMovieScenePlayerStatus : uint8_t
{
	EMovieScenePlayerStatus__Stopped0                                                = 0,
	EMovieScenePlayerStatus__Playing1                                                = 1,
	EMovieScenePlayerStatus__Recording2                                              = 2,
	EMovieScenePlayerStatus__Scrubbing3                                              = 3,
	EMovieScenePlayerStatus__Jumping4                                                = 4,
	EMovieScenePlayerStatus__Stepping5                                               = 5,
	EMovieScenePlayerStatus__Paused6                                                 = 6,
	EMovieScenePlayerStatus__MAX7                                                    = 7
};

/// Enum /Script/MovieScene.EMovieSceneObjectBindingSpace
/// Size: 0x03
enum EMovieSceneObjectBindingSpace : uint8_t
{
	EMovieSceneObjectBindingSpace__Local0                                            = 0,
	EMovieSceneObjectBindingSpace__Root1                                             = 1,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX2                = 2
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

/// Enum /Script/MovieScene.ESectionEvaluationFlags
/// Size: 0x04
enum ESectionEvaluationFlags : uint8_t
{
	ESectionEvaluationFlags__None0                                                   = 0,
	ESectionEvaluationFlags__PreRoll1                                                = 1,
	ESectionEvaluationFlags__PostRoll2                                               = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX3                            = 3
};

/// Enum /Script/MovieScene.ESpawnOwnership
/// Size: 0x04
enum ESpawnOwnership : uint8_t
{
	ESpawnOwnership__InnerSequence0                                                  = 0,
	ESpawnOwnership__MasterSequence1                                                 = 1,
	ESpawnOwnership__External2                                                       = 2,
	ESpawnOwnership__ESpawnOwnership_MAX3                                            = 3
};

