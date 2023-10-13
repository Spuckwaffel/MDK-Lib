
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MovieScene

/// Class /Script/MovieSceneTracks.MovieScenePropertyTrack
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	SMember(FString)                                   PropertyPath                                                OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOrigin
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTransformOrigin : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
	// FTransform BP_GetTransformOrigin();                                                                                      // [0x154a140] Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintSection
/// Size: 0x0030 (0x000110 - 0x000140)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FGuid)                                     ConstraintId                                                OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMovieSceneObjectBindingID)                ConstraintBindingID                                         OFFSET(getStruct<T>, {0x120, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachSection
/// Size: 0x0010 (0x000140 - 0x000150)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     AttachSocketName                                            OFFSET(getStruct<T>, {0x138, 8, 0, 0})
	SMember(FName)                                     AttachComponentName                                         OFFSET(getStruct<T>, {0x140, 8, 0, 0})
	CMember(EAttachmentRule)                           AttachmentLocationRule                                      OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRotationRule                                      OFFSET(get<T>, {0x149, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentScaleRule                                         OFFSET(get<T>, {0x14A, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentLocationRule                                      OFFSET(get<T>, {0x14B, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentRotationRule                                      OFFSET(get<T>, {0x14C, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentScaleRule                                         OFFSET(get<T>, {0x14D, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               ConstraintSections                                          OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathSection
/// Size: 0x0070 (0x000140 - 0x0001B0)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FRichCurve)                                TimingCurve                                                 OFFSET(getStruct<T>, {0x138, 112, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              FrontAxisEnum                                               OFFSET(get<T>, {0x1A8, 1, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              UpAxisEnum                                                  OFFSET(get<T>, {0x1A9, 1, 0, 0})
	DMember(bool)                                      bFollow                                                     OFFSET(get<bool>, {0x1AC, 1, 1, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x1AC, 1, 1, 1})
	DMember(bool)                                      bForceUpright                                               OFFSET(get<bool>, {0x1AC, 1, 1, 2})
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSection
/// Size: 0x0470 (0x000110 - 0x000580)
class UMovieScene3DTransformSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FMovieSceneTransformMask)                  TransformMask                                               OFFSET(getStruct<T>, {0x118, 4, 0, 0})
	SMember(FRichCurve)                                Translation                                                 OFFSET(getStruct<T>, {0x120, 336, 0, 0})
	SMember(FRichCurve)                                Rotation                                                    OFFSET(getStruct<T>, {0x270, 336, 0, 0})
	SMember(FRichCurve)                                Scale                                                       OFFSET(getStruct<T>, {0x3C0, 336, 0, 0})
	SMember(FRichCurve)                                ManualWeight                                                OFFSET(getStruct<T>, {0x510, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection
/// Size: 0x00A0 (0x000110 - 0x0001B0)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FIntegralCurve)                            ActorGuidIndexCurve                                         OFFSET(getStruct<T>, {0x118, 112, 0, 0})
	CMember(TArray<FString>)                           ActorGuidStrings                                            OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSection
/// Size: 0x0140 (0x000110 - 0x000250)
class UMovieSceneAudioSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(USoundBase*)                               Sound                                                       OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     AudioStartTime                                              OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     AudioDilationFactor                                         OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     AudioVolume                                                 OFFSET(get<float>, {0x124, 4, 0, 0})
	SMember(FRichCurve)                                SoundVolume                                                 OFFSET(getStruct<T>, {0x128, 112, 0, 0})
	SMember(FRichCurve)                                PitchMultiplier                                             OFFSET(getStruct<T>, {0x198, 112, 0, 0})
	DMember(bool)                                      bSuppressSubtitles                                          OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(bool)                                      bOverrideAttenuation                                        OFFSET(get<bool>, {0x209, 1, 0, 0})
	CMember(USoundAttenuation*)                        AttenuationSettings                                         OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UMulticastDelegate)                        OnAudioFinished                                             OFFSET(get<T>, {0x228, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnAudioPlaybackPercent                                      OFFSET(get<T>, {0x238, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               AudioSections                                               OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolSection
/// Size: 0x0080 (0x000110 - 0x000190)
class UMovieSceneBoolSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(bool)                                      DefaultValue                                                OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FIntegralCurve)                            BoolCurve                                                   OFFSET(getStruct<T>, {0x120, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneByteSection
/// Size: 0x0080 (0x000110 - 0x000190)
class UMovieSceneByteSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FIntegralCurve)                            ByteCurve                                                   OFFSET(getStruct<T>, {0x118, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneByteTrack
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UEnum*)                                    Enum                                                        OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraAnimSection
/// Size: 0x0040 (0x000110 - 0x000150)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMovieSceneCameraAnimSectionData)          AnimData                                                    OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	CMember(UCameraAnim*)                              CameraAnim                                                  OFFSET(get<T>, {0x130, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     PlayScale                                                   OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x148, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraAnimTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               CameraAnimSections                                          OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutSection
/// Size: 0x0030 (0x000110 - 0x000140)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FGuid)                                     CameraGuid                                                  OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMovieSceneObjectBindingID)                CameraBindingID                                             OFFSET(getStruct<T>, {0x120, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection
/// Size: 0x0040 (0x000110 - 0x000150)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMovieSceneCameraShakeSectionData)         ShakeData                                                   OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	CMember(UClass*)                                   ShakeClass                                                  OFFSET(get<T>, {0x130, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   OFFSET(get<float>, {0x138, 4, 0, 0})
	CMember(TEnumAsByte<ECameraAnimPlaySpace>)         PlaySpace                                                   OFFSET(get<T>, {0x13C, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        OFFSET(getStruct<T>, {0x140, 12, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               CameraShakeSections                                         OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
/// Size: 0x0020 (0x000180 - 0x0001A0)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FString)                                   ShotDisplayName                                             OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x188, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorSection
/// Size: 0x01D0 (0x000110 - 0x0002E0)
class UMovieSceneColorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FRichCurve)                                RedCurve                                                    OFFSET(getStruct<T>, {0x118, 112, 0, 0})
	SMember(FRichCurve)                                GreenCurve                                                  OFFSET(getStruct<T>, {0x188, 112, 0, 0})
	SMember(FRichCurve)                                BlueCurve                                                   OFFSET(getStruct<T>, {0x1F8, 112, 0, 0})
	SMember(FRichCurve)                                AlphaCurve                                                  OFFSET(getStruct<T>, {0x268, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneColorTrack
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bIsSlateColor                                               OFFSET(get<bool>, {0xE0, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumSection
/// Size: 0x0080 (0x000110 - 0x000190)
class UMovieSceneEnumSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FIntegralCurve)                            EnumCurve                                                   OFFSET(getStruct<T>, {0x118, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumTrack
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UEnum*)                                    Enum                                                        OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSection
/// Size: 0x0110 (0x000110 - 0x000220)
class UMovieSceneEventSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FNameCurve)                                Events                                                      OFFSET(getStruct<T>, {0x110, 104, 0, 0})
	SMember(FMovieSceneEventSectionData)               EventData                                                   OFFSET(getStruct<T>, {0x178, 32, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTrack
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bFireEventsWhenForwards                                     OFFSET(get<bool>, {0xB8, 1, 1, 0})
	DMember(bool)                                      bFireEventsWhenBackwards                                    OFFSET(get<bool>, {0xB8, 1, 1, 1})
	CMember(EFireEventsAtPosition)                     EventPosition                                               OFFSET(get<T>, {0xBC, 1, 0, 0})
	CMember(TArray<FMovieSceneObjectBindingID>)        EventReceivers                                              OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatSection
/// Size: 0x0080 (0x000110 - 0x000190)
class UMovieSceneFloatSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRichCurve)                                FloatCurve                                                  OFFSET(getStruct<T>, {0x118, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSection
/// Size: 0x0010 (0x000190 - 0x0001A0)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FLinearColor)                              FadeColor                                                   OFFSET(getStruct<T>, {0x188, 16, 0, 0})
	DMember(bool)                                      bFadeAudio                                                  OFFSET(get<bool>, {0x198, 1, 1, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerSection
/// Size: 0x0080 (0x000110 - 0x000190)
class UMovieSceneIntegerSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FIntegralCurve)                            IntegerCurve                                                OFFSET(getStruct<T>, {0x118, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
/// Size: 0x0020 (0x000110 - 0x000130)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(ELevelVisibility)                          Visibility                                                  OFFSET(get<T>, {0x110, 1, 0, 0})
	CMember(TArray<FName>)                             LevelNames                                                  OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSection
/// Size: 0x0030 (0x000110 - 0x000140)
class UMovieSceneParameterSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<FScalarParameterNameAndCurve>)      ScalarParameterNamesAndCurves                               OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FVectorParameterNameAndCurves>)     VectorParameterNamesAndCurves                               OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FColorParameterNameAndCurves>)      ColorParameterNamesAndCurves                                OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleSection
/// Size: 0x0070 (0x000110 - 0x000180)
class UMovieSceneParticleSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FIntegralCurve)                            ParticleKeys                                                OFFSET(getStruct<T>, {0x110, 112, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               ParticleSections                                            OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
/// Size: 0x00C0 (0x000110 - 0x0001D0)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FMovieSceneSkeletalAnimationParams)        Params                                                      OFFSET(getStruct<T>, {0x110, 144, 0, 0})
	CMember(UAnimSequence*)                            AnimSequence                                                OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        Animation                                                   OFFSET(get<T>, {0x1A8, 8, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x1BC, 1, 1, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x1C0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<UMovieSceneSection*>)               AnimationSections                                           OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bUseLegacySectionIndexBlend                                 OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoSection
/// Size: 0x0000 (0x000190 - 0x000190)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSpawnSection
/// Size: 0x0000 (0x000190 - 0x000190)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSpawnTrack
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FGuid)                                     ObjectGuid                                                  OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneStringSection
/// Size: 0x0080 (0x000110 - 0x000190)
class UMovieSceneStringSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FStringCurve)                              StringCurve                                                 OFFSET(getStruct<T>, {0x118, 120, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneStringTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneVectorSection
/// Size: 0x01D0 (0x000110 - 0x0002E0)
class UMovieSceneVectorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FRichCurve)                                Curves                                                      OFFSET(getStruct<T>, {0x118, 448, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneVectorTrack
/// Size: 0x0010 (0x0000E0 - 0x0000F0)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(int32_t)                                   NumChannelsUsed                                             OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Struct /Script/MovieSceneTracks.MovieScene3DAttachSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
class FMovieScene3DAttachSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMovieSceneObjectBindingID)                AttachBindingID                                             OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FName)                                     AttachSocketName                                            OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     AttachComponentName                                         OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	CMember(EAttachmentRule)                           AttachmentLocationRule                                      OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRotationRule                                      OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentScaleRule                                         OFFSET(get<T>, {0x4A, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentLocationRule                                      OFFSET(get<T>, {0x4B, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentRotationRule                                      OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentScaleRule                                         OFFSET(get<T>, {0x4D, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
/// Size: 0x0090 (0x000020 - 0x0000B0)
class FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMovieSceneObjectBindingID)                PathBindingID                                               OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FRichCurve)                                TimingCurve                                                 OFFSET(getStruct<T>, {0x38, 112, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              FrontAxisEnum                                               OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              UpAxisEnum                                                  OFFSET(get<T>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bFollow                                                     OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0xAC, 1, 1, 1})
	DMember(bool)                                      bForceUpright                                               OFFSET(get<bool>, {0xAC, 1, 1, 2})
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTransformMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Mask                                                        OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
/// Size: 0x0070 (0x000008 - 0x000078)
class FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
class FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
class FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
class FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneComponentTransformSectionTemplate
/// Size: 0x0468 (0x000020 - 0x000488)
class FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FMovieScene3DTransformTemplateData)        TemplateData                                                OFFSET(getStruct<T>, {0x20, 1128, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformTemplateData
/// Size: 0x0468 (0x000000 - 0x000468)
class FMovieScene3DTransformTemplateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FRichCurve)                                TranslationCurve                                            OFFSET(getStruct<T>, {0x0, 336, 0, 0})
	SMember(FRichCurve)                                RotationCurve                                               OFFSET(getStruct<T>, {0x150, 336, 0, 0})
	SMember(FRichCurve)                                ScaleCurve                                                  OFFSET(getStruct<T>, {0x2A0, 336, 0, 0})
	SMember(FRichCurve)                                ManualWeight                                                OFFSET(getStruct<T>, {0x3F0, 112, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0x460, 1, 0, 0})
	SMember(FMovieSceneTransformMask)                  Mask                                                        OFFSET(getStruct<T>, {0x464, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
/// Size: 0x00A8 (0x000020 - 0x0000C8)
class FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMovieScenePropertySectionData)            PropertyData                                                OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	SMember(FIntegralCurve)                            ActorGuidIndexCurve                                         OFFSET(getStruct<T>, {0x48, 112, 0, 0})
	CMember(TArray<FGuid>)                             ActorGuids                                                  OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplate
/// Size: 0x0140 (0x000020 - 0x000160)
class FMovieSceneAudioSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMovieSceneAudioSectionTemplateData)       AudioData                                                   OFFSET(getStruct<T>, {0x20, 320, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioSectionTemplateData
/// Size: 0x0140 (0x000000 - 0x000140)
class FMovieSceneAudioSectionTemplateData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(USoundBase*)                               Sound                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     AudioStartOffset                                            OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FFloatRange)                               AudioRange                                                  OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	SMember(FRichCurve)                                AudioPitchMultiplierCurve                                   OFFSET(getStruct<T>, {0x20, 112, 0, 0})
	SMember(FRichCurve)                                AudioVolumeCurve                                            OFFSET(getStruct<T>, {0x90, 112, 0, 0})
	DMember(int32_t)                                   RowIndex                                                    OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	DMember(bool)                                      bOverrideAttenuation                                        OFFSET(get<bool>, {0x104, 1, 0, 0})
	CMember(USoundAttenuation*)                        AttenuationSettings                                         OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UMulticastDelegate)                        OnAudioFinished                                             OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnAudioPlaybackPercent                                      OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneCameraAnimSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UCameraAnim*)                              CameraAnim                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PlayScale                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneAdditiveCameraAnimationTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
class FMovieSceneAdditiveCameraAnimationTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
class FMovieSceneCameraShakeSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMovieSceneCameraShakeSectionData)         SourceData                                                  OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	DMember(float)                                     SectionStartTime                                            OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneCameraShakeSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UClass*)                                   ShakeClass                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<ECameraAnimPlaySpace>)         PlaySpace                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraAnimSectionTemplate
/// Size: 0x0028 (0x000020 - 0x000048)
class FMovieSceneCameraAnimSectionTemplate : public FMovieSceneAdditiveCameraAnimationTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMovieSceneCameraAnimSectionData)          SourceData                                                  OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	DMember(float)                                     SectionStartTime                                            OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraCutSectionTemplate
/// Size: 0x0060 (0x000020 - 0x000080)
class FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMovieSceneObjectBindingID)                CameraBindingID                                             OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FTransform)                                CutTransform                                                OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	DMember(bool)                                      bHasCutTransform                                            OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorKeyStruct
/// Size: 0x0058 (0x000008 - 0x000060)
class FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorSectionTemplate
/// Size: 0x01C8 (0x000048 - 0x000210)
class FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FRichCurve)                                Curves                                                      OFFSET(getStruct<T>, {0x48, 448, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0x208, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionData
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneEventSectionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             KeyTimes                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FEventPayload>)                     KeyValues                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.EventPayload
/// Size: 0x0030 (0x000000 - 0x000030)
class FEventPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     EventName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FMovieSceneEventParameters)                Parameters                                                  OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEventParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
/// Size: 0x0038 (0x000020 - 0x000058)
class FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMovieSceneEventSectionData)               EventData                                                   OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TArray<FMovieSceneObjectBindingID>)        EventReceivers                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bFireEventsWhenForwards                                     OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bFireEventsWhenBackwards                                    OFFSET(get<bool>, {0x50, 1, 1, 1})
};

/// Struct /Script/MovieSceneTracks.MovieSceneFadeSectionTemplate
/// Size: 0x0088 (0x000020 - 0x0000A8)
class FMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FRichCurve)                                FadeCurve                                                   OFFSET(getStruct<T>, {0x20, 112, 0, 0})
	SMember(FLinearColor)                              FadeColor                                                   OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bFadeAudio                                                  OFFSET(get<bool>, {0xA0, 1, 1, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneLevelVisibilitySectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
class FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ELevelVisibility)                          Visibility                                                  OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<FName>)                             LevelNames                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
class FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FScalarParameterNameAndCurve>)      Scalars                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVectorParameterNameAndCurves>)     Vectors                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FColorParameterNameAndCurves>)      Colors                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ColorParameterNameAndCurves
/// Size: 0x01D0 (0x000000 - 0x0001D0)
class FColorParameterNameAndCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                RedCurve                                                    OFFSET(getStruct<T>, {0x10, 112, 0, 0})
	SMember(FRichCurve)                                GreenCurve                                                  OFFSET(getStruct<T>, {0x80, 112, 0, 0})
	SMember(FRichCurve)                                BlueCurve                                                   OFFSET(getStruct<T>, {0xF0, 112, 0, 0})
	SMember(FRichCurve)                                AlphaCurve                                                  OFFSET(getStruct<T>, {0x160, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.VectorParameterNameAndCurves
/// Size: 0x0160 (0x000000 - 0x000160)
class FVectorParameterNameAndCurves : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                XCurve                                                      OFFSET(getStruct<T>, {0x10, 112, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(getStruct<T>, {0x80, 112, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(getStruct<T>, {0xF0, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ScalarParameterNameAndCurve
/// Size: 0x0080 (0x000000 - 0x000080)
class FScalarParameterNameAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                ParameterCurve                                              OFFSET(getStruct<T>, {0x10, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTemplate
/// Size: 0x0008 (0x000050 - 0x000058)
class FMovieSceneMaterialParameterCollectionTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UMaterialParameterCollection*)             MPC                                                         OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneComponentMaterialSectionTemplate
/// Size: 0x0008 (0x000050 - 0x000058)
class FMovieSceneComponentMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
/// Size: 0x0000 (0x000050 - 0x000050)
class FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate
/// Size: 0x0070 (0x000020 - 0x000090)
class FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FIntegralCurve)                            ParticleKeys                                                OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformPropertySectionTemplate
/// Size: 0x0468 (0x000048 - 0x0004B0)
class FMovieSceneTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FMovieScene3DTransformTemplateData)        TemplateData                                                OFFSET(getStruct<T>, {0x48, 1128, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorPropertySectionTemplate
/// Size: 0x01C8 (0x000048 - 0x000210)
class FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FRichCurve)                                ComponentCurves                                             OFFSET(getStruct<T>, {0x48, 448, 0, 0})
	DMember(int32_t)                                   NumChannelsUsed                                             OFFSET(get<int32_t>, {0x208, 4, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0x20C, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringPropertySectionTemplate
/// Size: 0x0078 (0x000048 - 0x0000C0)
class FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FStringCurve)                              StringCurve                                                 OFFSET(getStruct<T>, {0x48, 120, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneIntegerPropertySectionTemplate
/// Size: 0x0078 (0x000048 - 0x0000C0)
class FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FIntegralCurve)                            IntegerCurve                                                OFFSET(getStruct<T>, {0x48, 112, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEnumPropertySectionTemplate
/// Size: 0x0070 (0x000048 - 0x0000B8)
class FMovieSceneEnumPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FIntegralCurve)                            EnumCurve                                                   OFFSET(getStruct<T>, {0x48, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneBytePropertySectionTemplate
/// Size: 0x0070 (0x000048 - 0x0000B8)
class FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FIntegralCurve)                            ByteCurve                                                   OFFSET(getStruct<T>, {0x48, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatPropertySectionTemplate
/// Size: 0x0078 (0x000048 - 0x0000C0)
class FMovieSceneFloatPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FRichCurve)                                FloatCurve                                                  OFFSET(getStruct<T>, {0x48, 112, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
/// Size: 0x0070 (0x000048 - 0x0000B8)
class FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FIntegralCurve)                            BoolCurve                                                   OFFSET(getStruct<T>, {0x48, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
/// Size: 0x0090 (0x000000 - 0x000090)
class FMovieSceneSkeletalAnimationParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UAnimSequenceBase*)                        Animation                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     StartOffset                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x14, 1, 1, 0})
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FRichCurve)                                Weight                                                      OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplate
/// Size: 0x0098 (0x000020 - 0x0000B8)
class FMovieSceneSkeletalAnimationSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMovieSceneSkeletalAnimationSectionTemplateParameters) Params                                          OFFSET(getStruct<T>, {0x20, 152, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSectionTemplateParameters
/// Size: 0x0008 (0x000090 - 0x000098)
class FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     SectionStartTime                                            OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     SectionEndTime                                              OFFSET(get<float>, {0x94, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate
/// Size: 0x0070 (0x000020 - 0x000090)
class FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRichCurve)                                SlomoCurve                                                  OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSpawnSectionTemplate
/// Size: 0x0070 (0x000020 - 0x000090)
class FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FIntegralCurve)                            Curve                                                       OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorKeyStructBase
/// Size: 0x0048 (0x000008 - 0x000050)
class FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4KeyStruct
/// Size: 0x0010 (0x000050 - 0x000060)
class FMovieSceneVector4KeyStruct : public FMovieSceneVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector4)                                  Vector                                                      OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVectorKeyStruct
/// Size: 0x0010 (0x000050 - 0x000060)
class FMovieSceneVectorKeyStruct : public FMovieSceneVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x50, 12, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
/// Size: 0x0008 (0x000050 - 0x000058)
class FMovieSceneVector2DKeyStruct : public FMovieSceneVectorKeyStructBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVisibilitySectionTemplate
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bTemporarilyHiddenInGame                                    OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Enum /Script/MovieSceneTracks.MovieScene3DPathSection_Axis
/// Size: 0x07
enum MovieScene3DPathSection_Axis : uint8_t
{
	MovieScene3DPathSection_Axis__X0                                                 = 0,
	MovieScene3DPathSection_Axis__Y1                                                 = 1,
	MovieScene3DPathSection_Axis__Z2                                                 = 2,
	MovieScene3DPathSection_Axis__NEG_X3                                             = 3,
	MovieScene3DPathSection_Axis__NEG_Y4                                             = 4,
	MovieScene3DPathSection_Axis__NEG_Z5                                             = 5,
	MovieScene3DPathSection_Axis__MovieScene3DPathSection_MAX6                       = 6
};

/// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
/// Size: 0x04
enum EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation0                                      = 0,
	EFireEventsAtPosition__AtEndOfEvaluation1                                        = 1,
	EFireEventsAtPosition__AfterSpawn2                                               = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX3                                = 3
};

/// Enum /Script/MovieSceneTracks.ELevelVisibility
/// Size: 0x03
enum ELevelVisibility : uint8_t
{
	ELevelVisibility__Visible0                                                       = 0,
	ELevelVisibility__Hidden1                                                        = 1,
	ELevelVisibility__ELevelVisibility_MAX2                                          = 2
};

/// Enum /Script/MovieSceneTracks.EParticleKey
/// Size: 0x04
enum EParticleKey : uint8_t
{
	EParticleKey__Activate0                                                          = 0,
	EParticleKey__Deactivate1                                                        = 1,
	EParticleKey__Trigger2                                                           = 2,
	EParticleKey__EParticleKey_MAX3                                                  = 3
};

