
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene

/// Class /Script/TemplateSequence.TemplateSequence
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UTemplateSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UMovieScene*)                              MovieScene                                                  OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BoundActorClass                                             OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TMap<FGuid, FName>)                        BoundActorComponents                                        OFFSET(get<T>, {0x90, 80, 0, 0})
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
	DMember(float)                                     FieldOfView                                                 OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bConstrainAspectRatio                                       OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FPostProcessSettings)                      PostProcessSettings                                         OFFSET(getStruct<T>, {0x40, 1760, 0, 0})
	DMember(float)                                     PostProcessBlendWeight                                      OFFSET(get<float>, {0x720, 4, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0x724, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x730, 28, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0x750, 88, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0x7B0, 4, 0, 0})
};

/// Class /Script/TemplateSequence.CameraAnimationSequencePlayer
/// Size: 0x0370 (0x000028 - 0x000398)
class UCameraAnimationSequencePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UObject*)                                  BoundObjectOverride                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UMovieSceneSequence*)                      Sequence                                                    OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FMovieSceneRootEvaluationTemplateInstance) RootTemplateInstance                                        OFFSET(getStruct<T>, {0x2A8, 136, 0, 0})
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
	CMember(UMovieSceneEntitySystemLinker*)            Linker                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/TemplateSequence.TemplateSequenceSection
/// Size: 0x0010 (0x000138 - 0x000148)
class UTemplateSequenceSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(TArray<FTemplateSectionPropertyScale>)     PropertyScales                                              OFFSET(get<T>, {0x138, 16, 0, 0})
};

/// Class /Script/TemplateSequence.SequenceCameraShakePattern
/// Size: 0x0050 (0x000028 - 0x000078)
class USequenceCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UCameraAnimationSequence*)                 Sequence                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     RandomSegmentDuration                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bRandomSegment                                              OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(UCameraAnimationSequencePlayer*)           Player                                                      OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UCameraAnimationSequenceCameraStandIn*)    CameraStandIn                                               OFFSET(get<T>, {0x50, 8, 0, 0})
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
	SMember(FMovieSceneSequencePlaybackSettings)       PlaybackSettings                                            OFFSET(getStruct<T>, {0x298, 32, 0, 0})
	CMember(UTemplateSequencePlayer*)                  SequencePlayer                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FSoftObjectPath)                           TemplateSequence                                            OFFSET(getStruct<T>, {0x2C0, 24, 0, 0})
	SMember(FTemplateSequenceBindingOverrideData)      BindingOverride                                             OFFSET(getStruct<T>, {0x2D8, 12, 0, 0})


	/// Functions
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetSequence
	// void SetSequence(UTemplateSequence* InSequence);                                                                         // [0x6ca6c74] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.SetBinding
	// void SetBinding(AActor* Actor, bool bOverridesDefault);                                                                  // [0x6ca6adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/TemplateSequence.TemplateSequenceActor.LoadSequence
	// UTemplateSequence* LoadSequence();                                                                                       // [0x6ca6ab8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequencePlayer
	// UTemplateSequencePlayer* GetSequencePlayer();                                                                            // [0x6ca6a8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TemplateSequence.TemplateSequenceActor.GetSequence
	// UTemplateSequence* GetSequence();                                                                                        // [0x6ca6a68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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

/// Struct /Script/TemplateSequence.TemplateSectionPropertyScale
/// Size: 0x0130 (0x000000 - 0x000130)
class FTemplateSectionPropertyScale : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FGuid)                                     ObjectBinding                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FMovieScenePropertyBinding)                PropertyBinding                                             OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(ETemplateSectionPropertyScaleType)         PropertyScaleType                                           OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(getStruct<T>, {0x20, 272, 0, 0})
};

/// Struct /Script/TemplateSequence.TemplateSequenceBindingOverrideData
/// Size: 0x000C (0x000000 - 0x00000C)
class FTemplateSequenceBindingOverrideData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverridesDefault                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
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

