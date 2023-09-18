/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TemplateSequence.

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0130 (0x000000 - 0x000130)
class FTemplateSectionPropertyScale : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FGuid)                                     ObjectBinding                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FMovieScenePropertyBinding)                PropertyBinding                                             ___ OFFSET(get<T>, {0x10, 12, 0, 0})
	CMember(ETemplateSectionPropertyScaleType)         PropertyScaleType                                           ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                ___ OFFSET(get<T>, {0x20, 272, 0, 0})
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
class FTemplateSequenceBindingOverrideData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Object                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UTemplateSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UMovieScene*)                              MovieScene                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BoundActorClass                                             ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TMap<FGuid, FName>)                        BoundActorComponents                                        ___ OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequence
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCameraAnimationSequence : public UTemplateSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceCameraStandIn
/// Size: 0x0808 (0x000028 - 0x000830)
class UCameraAnimationSequenceCameraStandIn : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	DMember(float)                                     FieldOfView                                                 ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bConstrainAspectRatio                                       ___ OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(float)                                     AspectRatio                                                 ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         ___ OFFSET(get<T>, {0x40, 1760, 0, 0})
	DMember(float)                                     PostProcessBlendWeight                                      ___ OFFSET(get<float>, {0x720, 4, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    ___ OFFSET(get<T>, {0x724, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                ___ OFFSET(get<T>, {0x730, 28, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               ___ OFFSET(get<T>, {0x750, 88, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          ___ OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             ___ OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        ___ OFFSET(get<float>, {0x7B0, 4, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x0370 (0x000028 - 0x000398)
class UCameraAnimationSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UObject*)                                  BoundObjectOverride                                         ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UMovieSceneSequence*)                      Sequence                                                    ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        ___ OFFSET(get<T>, {0x2A8, 136, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSpawnableSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationSpawnableSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationBoundObjectInstantiator
/// Size: 0x0000 (0x000040 - 0x000040)
class UCameraAnimationBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationEntitySystemLinker
/// Size: 0x0000 (0x000738 - 0x000738)
class UCameraAnimationEntitySystemLinker : public UMovieSceneEntitySystemLinker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
};

/// Class /Script/TemplateSequence.CameraAnimationSequenceSubsystem
/// Size: 0x0018 (0x000030 - 0x000048)
class UCameraAnimationSequenceSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UMovieSceneEntitySystemLinker*)            Linker                                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0010 (0x000138 - 0x000148)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<FTemplateSectionPropertyScale>)     PropertyScales                                              ___ OFFSET(get<T>, {0x138, 16, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0050 (0x000028 - 0x000078)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UCameraAnimationSequence*)                 Sequence                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     RandomSegmentDuration                                       ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bRandomSegment                                              ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(UCameraAnimationSequencePlayer*)           Player                                                      ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UCameraAnimationSequenceCameraStandIn*)    CameraStandIn                                               ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSystem
/// Size: 0x0070 (0x000040 - 0x0000B0)
class UTemplateSequenceSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/TemplateSequence.TemplateSequenceActor
/// Size: 0x0058 (0x000290 - 0x0002E8)
class ATemplateSequenceActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            ___ OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(UTemplateSequencePlayer*)                  SequencePlayer                                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FSoftObjectPath)                           TemplateSequence                                            ___ OFFSET(get<T>, {0x2C0, 24, 0, 0})
	SMember(FTemplateSequenceBindingOverrideData)      BindingOverride                                             ___ OFFSET(get<T>, {0x2D8, 12, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequencePlayer
/// Size: 0x0008 (0x0004C8 - 0x0004D0)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
};

/// Class /Script/TemplateSequence.SequenceCameraShakeTestUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class USequenceCameraShakeTestUtil : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TemplateSequence.TemplateSequenceTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Enum /Script/TemplateSequence.ETemplateSectionPropertyScaleType
/// Size: 0x04
enum ETemplateSectionPropertyScaleType : uint8_t
{
	ETemplateSectionPropertyScaleType__FloatProperty0                                = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly1                = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly2                = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX3        = 3
};

