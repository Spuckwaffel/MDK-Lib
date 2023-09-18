/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieSceneTracks.

/// Struct /Script/MovieSceneTracks.MovieScenePreAnimatedMaterialParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieScenePreAnimatedMaterialParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UMaterialInterface*)                       PreviousMaterial                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       SoftPreviousMaterial                                        ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTrigger
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneCameraShakeSourceTrigger : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   ShakeClass                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(ECameraShakePlaySpace)                     Playspace                                                   ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneCameraShakeSourceTriggerChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneCameraShakeSourceTrigger>) KeyValues                                                 ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannel
/// Size: 0x0018 (0x000050 - 0x000068)
class FMovieSceneDoublePerlinNoiseChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPerlinNoiseParams)                        PerlinNoiseParams                                           ___ OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.PerlinNoiseParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FPerlinNoiseParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(double)                                    Amplitude                                                   ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(float)                                     Offset                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPayloadVariable
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneEventPayloadVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventPtrs
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEventPtrs : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UFunction*)                                Function                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FMovieSceneEventPtrs)                      Ptrs                                                        ___ OFFSET(get<T>, {0x0, 40, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneEventChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneEvent>)                  KeyValues                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannel
/// Size: 0x0018 (0x000050 - 0x000068)
class FMovieSceneFloatPerlinNoiseChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FPerlinNoiseParams)                        PerlinNoiseParams                                           ___ OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneStringChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
class FMovieSceneStringChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           Values                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   DefaultValue                                                ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bHasDefaultValue                                            ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x88, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
/// Size: 0x0130 (0x000020 - 0x000150)
class FMovieScene3DPathSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMovieSceneObjectBindingID)                PathBindingID                                               ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FMovieSceneFloatChannel)                   TimingCurve                                                 ___ OFFSET(get<T>, {0x38, 272, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              FrontAxisEnum                                               ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              UpAxisEnum                                                  ___ OFFSET(get<T>, {0x149, 1, 0, 0})
	DMember(bool)                                      bFollow                                                     ___ OFFSET(get<bool>, {0x14C, 1, 1, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x14C, 1, 1, 1})
	DMember(bool)                                      bForceUpright                                               ___ OFFSET(get<bool>, {0x14C, 1, 1, 2})
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceSectionTemplate
/// Size: 0x0130 (0x000020 - 0x000150)
class FMovieSceneActorReferenceSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMovieScenePropertySectionData)            PropertyData                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FMovieSceneActorReferenceData)             ActorReferenceData                                          ___ OFFSET(get<T>, {0x38, 280, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceData
/// Size: 0x00C8 (0x000050 - 0x000118)
class FMovieSceneActorReferenceData : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMovieSceneActorReferenceKey)              DefaultValue                                                ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TArray<FMovieSceneActorReferenceKey>)      KeyValues                                                   ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x90, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneActorReferenceKey
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneActorReferenceKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMovieSceneObjectBindingID)                Object                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FName)                                     ComponentName                                               ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneBaseCacheSectionTemplateParameters
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneBaseCacheSectionTemplateParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FFrameNumber)                              SectionStartTime                                            ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
class FMovieSceneCameraShakeSourceShakeSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMovieSceneCameraShakeSectionData)         SourceData                                                  ___ OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FFrameNumber)                              SectionStartTime                                            ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionData
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneCameraShakeSectionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   ShakeClass                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(ECameraShakePlaySpace)                     Playspace                                                   ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSectionTemplate
/// Size: 0x0020 (0x000020 - 0x000040)
class FMovieSceneCameraShakeSourceTriggerSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FFrameNumber>)                      TriggerTimes                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FMovieSceneCameraShakeSourceTrigger>) TriggerValues                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCameraShakeSectionTemplate
/// Size: 0x0030 (0x000020 - 0x000050)
class FMovieSceneCameraShakeSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMovieSceneCameraShakeSectionData)         SourceData                                                  ___ OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FFrameNumber)                              SectionStartTime                                            ___ OFFSET(get<T>, {0x48, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
/// Size: 0x0100 (0x000020 - 0x000120)
class FMovieSceneEventSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMovieSceneEventSectionData)               EventData                                                   ___ OFFSET(get<T>, {0x20, 248, 0, 0})
	DMember(bool)                                      bFireEventsWhenForwards                                     ___ OFFSET(get<bool>, {0x118, 1, 1, 0})
	DMember(bool)                                      bFireEventsWhenBackwards                                    ___ OFFSET(get<bool>, {0x118, 1, 1, 1})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventSectionData
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneEventSectionData : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      Times                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FEventPayload>)                     KeyValues                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  ___ OFFSET(get<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/MovieSceneTracks.EventPayload
/// Size: 0x0030 (0x000000 - 0x000030)
class FEventPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     EventName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneEventParameters)                Parameters                                                  ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FMovieSceneEventParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneObjectPropertyTemplate
/// Size: 0x0128 (0x000038 - 0x000160)
class FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMovieSceneObjectPathChannel)              ObjectChannel                                               ___ OFFSET(get<T>, {0x38, 296, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
/// Size: 0x0060 (0x000020 - 0x000080)
class FMovieSceneParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FScalarParameterNameAndCurve>)      Scalars                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FBoolParameterNameAndCurve>)        Bools                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FVector2DParameterNameAndCurves>)   Vector2Ds                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVectorParameterNameAndCurves>)     Vectors                                                     ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FColorParameterNameAndCurves>)      Colors                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FTransformParameterNameAndCurves>)  Transforms                                                  ___ OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.TransformParameterNameAndCurves
/// Size: 0x0998 (0x000000 - 0x000998)
class FTransformParameterNameAndCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2456;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Translation                                                 ___ OFFSET(get<T>, {0x8, 816, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Rotation                                                    ___ OFFSET(get<T>, {0x338, 816, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Scale                                                       ___ OFFSET(get<T>, {0x668, 816, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ColorParameterNameAndCurves
/// Size: 0x0448 (0x000000 - 0x000448)
class FColorParameterNameAndCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RedCurve                                                    ___ OFFSET(get<T>, {0x8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenCurve                                                  ___ OFFSET(get<T>, {0x118, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueCurve                                                   ___ OFFSET(get<T>, {0x228, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaCurve                                                  ___ OFFSET(get<T>, {0x338, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.VectorParameterNameAndCurves
/// Size: 0x0338 (0x000000 - 0x000338)
class FVectorParameterNameAndCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   XCurve                                                      ___ OFFSET(get<T>, {0x8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   YCurve                                                      ___ OFFSET(get<T>, {0x118, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ZCurve                                                      ___ OFFSET(get<T>, {0x228, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.Vector2DParameterNameAndCurves
/// Size: 0x0228 (0x000000 - 0x000228)
class FVector2DParameterNameAndCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   XCurve                                                      ___ OFFSET(get<T>, {0x8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   YCurve                                                      ___ OFFSET(get<T>, {0x118, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.BoolParameterNameAndCurve
/// Size: 0x0108 (0x000000 - 0x000108)
class FBoolParameterNameAndCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneBoolChannel)                    ParameterCurve                                              ___ OFFSET(get<T>, {0x8, 256, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ScalarParameterNameAndCurve
/// Size: 0x0118 (0x000000 - 0x000118)
class FScalarParameterNameAndCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ParameterCurve                                              ___ OFFSET(get<T>, {0x8, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleParameterSectionTemplate
/// Size: 0x0000 (0x000080 - 0x000080)
class FMovieSceneParticleParameterSectionTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleSectionTemplate
/// Size: 0x0108 (0x000020 - 0x000128)
class FMovieSceneParticleSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMovieSceneParticleChannel)                ParticleKeys                                                ___ OFFSET(get<T>, {0x20, 264, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneParticleChannel
/// Size: 0x0000 (0x000108 - 0x000108)
class FMovieSceneParticleChannel : public FMovieSceneByteChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Struct /Script/MovieSceneTracks.MovieSceneBoolPropertySectionTemplate
/// Size: 0x0100 (0x000038 - 0x000138)
class FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMovieSceneBoolChannel)                    BoolCurve                                                   ___ OFFSET(get<T>, {0x38, 256, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSlomoSectionTemplate
/// Size: 0x0110 (0x000020 - 0x000130)
class FMovieSceneSlomoSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FMovieSceneFloatChannel)                   SlomoCurve                                                  ___ OFFSET(get<T>, {0x20, 272, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVisibilitySectionTemplate
/// Size: 0x0000 (0x000138 - 0x000138)
class FMovieSceneVisibilitySectionTemplate : public FMovieSceneBoolPropertySectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/MovieSceneTracks.LevelVisibilityComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FLevelVisibilityComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UMovieSceneLevelVisibilitySection*)        Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneDataLayerComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneDataLayerComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UMovieSceneDataLayerSection*)              Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.ConstraintComponentData
/// Size: 0x0010 (0x000000 - 0x000010)
class FConstraintComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ConstraintName                                              ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneSkeletalAnimationComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UMovieSceneSkeletalAnimationSection*)      Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioComponentData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMovieSceneAudioComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UMovieSceneAudioSection*)                  Section                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneAudioInputData
/// Size: 0x0030 (0x000000 - 0x000030)
class FMovieSceneAudioInputData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     FloatInputs                                                 ___ OFFSET(get<T>, {0x0, 36, 0, 0})
	SMember(FName)                                     StringInput                                                 ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     BoolInput                                                   ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     IntInput                                                    ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DLocationKeyStruct
/// Size: 0x0038 (0x000008 - 0x000040)
class FMovieScene3DLocationKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DRotationKeyStruct
/// Size: 0x0038 (0x000008 - 0x000040)
class FMovieScene3DRotationKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DScaleKeyStruct
/// Size: 0x0028 (0x000008 - 0x000030)
class FMovieScene3DScaleKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector3f)                                 Scale                                                       ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x14, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
/// Size: 0x0058 (0x000008 - 0x000060)
class FMovieScene3DTransformKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FVector3f)                                 Scale                                                       ___ OFFSET(get<T>, {0x38, 12, 0, 0})
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x44, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneTransformMask
/// Size: 0x0004 (0x000000 - 0x000004)
class FMovieSceneTransformMask : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Mask                                                        ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneBaseCacheParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FMovieSceneBaseCacheParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneColorKeyStruct
/// Size: 0x0030 (0x000008 - 0x000038)
class FMovieSceneColorKeyStruct : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneConsoleVariableCollection
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneConsoleVariableCollection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TScriptInterface<Class>)                   Interface                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bOnlyIncludeChecked                                         ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneCVarOverrides
/// Size: 0x0050 (0x000000 - 0x000050)
class FMovieSceneCVarOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FString>)                    ValuesByCVar                                                ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimationParams
/// Size: 0x0148 (0x000000 - 0x000148)
class FMovieSceneSkeletalAnimationParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(UAnimSequenceBase*)                        Animation                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
	SMember(FName)                                     SlotName                                                    ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(UMirrorDataTable*)                         MirrorDataTable                                             ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      ___ OFFSET(get<T>, {0x28, 272, 0, 0})
	DMember(bool)                                      bSkipAnimNotifiers                                          ___ OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(bool)                                      bForceCustomMode                                            ___ OFFSET(get<bool>, {0x139, 1, 0, 0})
	CMember(ESwapRootBone)                             SwapRootBone                                                ___ OFFSET(get<T>, {0x13A, 1, 0, 0})
	DMember(float)                                     StartOffset                                                 ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   ___ OFFSET(get<float>, {0x140, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneFloatVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
class FMovieSceneFloatVectorKeyStructBase : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2fKeyStruct
/// Size: 0x0008 (0x000028 - 0x000030)
class FMovieSceneVector2fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector2f)                                 Vector                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector3fKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
class FMovieSceneVector3fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector3f)                                 Vector                                                      ___ OFFSET(get<T>, {0x28, 12, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4fKeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
class FMovieSceneVector4fKeyStruct : public FMovieSceneFloatVectorKeyStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4f)                                 Vector                                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneDoubleVectorKeyStructBase
/// Size: 0x0020 (0x000008 - 0x000028)
class FMovieSceneDoubleVectorKeyStructBase : public FMovieSceneKeyStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              Time                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector2DKeyStruct
/// Size: 0x0010 (0x000028 - 0x000038)
class FMovieSceneVector2DKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector2D)                                 Vector                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector3dKeyStruct
/// Size: 0x0018 (0x000028 - 0x000040)
class FMovieSceneVector3dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector3d)                                 Vector                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneVector4dKeyStruct
/// Size: 0x0028 (0x000028 - 0x000050)
class FMovieSceneVector4dKeyStruct : public FMovieSceneDoubleVectorKeyStructBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector4d)                                 Vector                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneEventTriggerData
/// Size: 0x0048 (0x000000 - 0x000048)
class FMovieSceneEventTriggerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FMovieSceneEventPtrs)                      Ptrs                                                        ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FGuid)                                     ObjectBindingID                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/MovieSceneTracks.MovieSceneSkeletalAnimRootMotionTrackParams
/// Size: 0x0080 (0x000000 - 0x000080)
class FMovieSceneSkeletalAnimRootMotionTrackParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOrigin
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneTransformOrigin : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneConsoleVariableTrackInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneConsoleVariableTrackInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDecomposerTestObject
/// Size: 0x0008 (0x000028 - 0x000030)
class UMovieSceneDecomposerTestObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     FloatProperty                                               ___ OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneTestSequence
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieSceneTestSequence : public UMovieSceneSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UMovieScene*)                              MovieScene                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<UObject*>)                          BoundObjects                                                ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FGuid>)                             BindingGuids                                                ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoublePerlinNoiseChannelContainer
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMovieSceneDoublePerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMovieSceneDoublePerlinNoiseChannel)       PerlinNoiseChannel                                          ___ OFFSET(get<T>, {0x58, 104, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatPerlinNoiseChannelContainer
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UMovieSceneFloatPerlinNoiseChannelContainer : public UMovieSceneChannelOverrideContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMovieSceneFloatPerlinNoiseChannel)        PerlinNoiseChannel                                          ___ OFFSET(get<T>, {0x58, 104, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
/// Size: 0x01B0 (0x000040 - 0x0001F0)
class UMovieSceneInterrogatedPropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeEvaluator
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCameraShakeEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintSection
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FGuid)                                     ConstraintId                                                ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMovieSceneObjectBindingID)                ConstraintBindingID                                         ___ OFFSET(get<T>, {0x100, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachSection
/// Size: 0x0018 (0x000118 - 0x000130)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     AttachSocketName                                            ___ OFFSET(get<T>, {0x120, 4, 0, 0})
	SMember(FName)                                     AttachComponentName                                         ___ OFFSET(get<T>, {0x124, 4, 0, 0})
	CMember(EAttachmentRule)                           AttachmentLocationRule                                      ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRotationRule                                      ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentScaleRule                                         ___ OFFSET(get<T>, {0x12A, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentLocationRule                                      ___ OFFSET(get<T>, {0x12B, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentRotationRule                                      ___ OFFSET(get<T>, {0x12C, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentScaleRule                                         ___ OFFSET(get<T>, {0x12D, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathSection
/// Size: 0x0118 (0x000118 - 0x000230)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FMovieSceneFloatChannel)                   TimingCurve                                                 ___ OFFSET(get<T>, {0x118, 272, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              FrontAxisEnum                                               ___ OFFSET(get<T>, {0x228, 1, 0, 0})
	CMember(MovieScene3DPathSection_Axis)              UpAxisEnum                                                  ___ OFFSET(get<T>, {0x229, 1, 0, 0})
	DMember(bool)                                      bFollow                                                     ___ OFFSET(get<bool>, {0x22C, 1, 1, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x22C, 1, 1, 1})
	DMember(bool)                                      bForceUpright                                               ___ OFFSET(get<bool>, {0x22C, 1, 1, 2})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSectionConstraints
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieScene3DTransformSectionConstraints : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FConstraintAndActiveChannel>)       ConstraintsChannels                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformSection
/// Size: 0x0B48 (0x0000F0 - 0x000C38)
class UMovieScene3DTransformSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3128;

public:
	SMember(FMovieSceneTransformMask)                  TransformMask                                               ___ OFFSET(get<T>, {0x130, 4, 0, 0})
	SMember(FMovieSceneDoubleChannel)                  Translation                                                 ___ OFFSET(get<T>, {0x138, 840, 0, 0})
	SMember(FMovieSceneDoubleChannel)                  Rotation                                                    ___ OFFSET(get<T>, {0x480, 840, 0, 0})
	SMember(FMovieSceneDoubleChannel)                  Scale                                                       ___ OFFSET(get<T>, {0x7C8, 840, 0, 0})
	SMember(FMovieSceneFloatChannel)                   ManualWeight                                                ___ OFFSET(get<T>, {0xB10, 272, 0, 0})
	CMember(UMovieSceneSectionChannelOverrideRegistry*) OverrideRegistry                                           ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	CMember(UMovieScene3DTransformSectionConstraints*) Constraints                                                 ___ OFFSET(get<T>, {0xC28, 8, 0, 0})
	DMember(bool)                                      bUseQuaternionInterpolation                                 ___ OFFSET(get<bool>, {0xC30, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceSection
/// Size: 0x01A8 (0x0000F0 - 0x000298)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	SMember(FMovieSceneActorReferenceData)             ActorReferenceData                                          ___ OFFSET(get<T>, {0xF0, 280, 0, 0})
	SMember(FIntegralCurve)                            ActorGuidIndexCurve                                         ___ OFFSET(get<T>, {0x208, 128, 0, 0})
	CMember(TArray<FString>)                           ActorGuidStrings                                            ___ OFFSET(get<T>, {0x288, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSection
/// Size: 0x0530 (0x0000F0 - 0x000620)
class UMovieSceneAudioSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	CMember(USoundBase*)                               sound                                                       ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	DMember(float)                                     StartOffset                                                 ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     AudioStartTime                                              ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     AudioDilationFactor                                         ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     AudioVolume                                                 ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   SoundVolume                                                 ___ OFFSET(get<T>, {0x118, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   PitchMultiplier                                             ___ OFFSET(get<T>, {0x228, 272, 0, 0})
	CMember(TMap<FName, FMovieSceneFloatChannel>)      Inputs_Float                                                ___ OFFSET(get<T>, {0x338, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneStringChannel>)     Inputs_String                                               ___ OFFSET(get<T>, {0x388, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneBoolChannel>)       Inputs_Bool                                                 ___ OFFSET(get<T>, {0x3D8, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneIntegerChannel>)    Inputs_Int                                                  ___ OFFSET(get<T>, {0x428, 80, 0, 0})
	CMember(TMap<FName, FMovieSceneAudioTriggerChannel>) Inputs_Trigger                                            ___ OFFSET(get<T>, {0x478, 80, 0, 0})
	SMember(FMovieSceneActorReferenceData)             AttachActorData                                             ___ OFFSET(get<T>, {0x4C8, 280, 0, 0})
	DMember(bool)                                      bLooping                                                    ___ OFFSET(get<bool>, {0x5E0, 1, 0, 0})
	DMember(bool)                                      bSuppressSubtitles                                          ___ OFFSET(get<bool>, {0x5E1, 1, 0, 0})
	DMember(bool)                                      bOverrideAttenuation                                        ___ OFFSET(get<bool>, {0x5E2, 1, 0, 0})
	CMember(USoundAttenuation*)                        AttenuationSettings                                         ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	SMember(FDelegateProperty)                         OnQueueSubtitles                                            ___ OFFSET(get<T>, {0x5F0, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudioFinished                                             ___ OFFSET(get<T>, {0x600, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudioPlaybackPercent                                      ___ OFFSET(get<T>, {0x610, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneBaseCacheSection
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UMovieSceneBaseCacheSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneByteSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneByteSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneByteChannel)                    ByteCurve                                                   ___ OFFSET(get<T>, {0xF8, 264, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutSection
/// Size: 0x00B0 (0x0000F0 - 0x0001A0)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(bool)                                      bLockPreviousCamera                                         ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
	SMember(FGuid)                                     CameraGuid                                                  ___ OFFSET(get<T>, {0xFC, 16, 0, 0})
	SMember(FMovieSceneObjectBindingID)                CameraBindingID                                             ___ OFFSET(get<T>, {0x10C, 24, 0, 0})
	SMember(FTransform)                                InitialCameraCutTransform                                   ___ OFFSET(get<T>, {0x130, 96, 0, 0})
	DMember(bool)                                      bHasInitialCameraCutTransform                               ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection
/// Size: 0x0050 (0x0000F0 - 0x000140)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FMovieSceneCameraShakeSectionData)         ShakeData                                                   ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	CMember(UClass*)                                   ShakeClass                                                  ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	DMember(float)                                     PlayScale                                                   ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	CMember(ECameraShakePlaySpace)                     Playspace                                                   ___ OFFSET(get<T>, {0x124, 1, 0, 0})
	SMember(FRotator)                                  UserDefinedPlaySpace                                        ___ OFFSET(get<T>, {0x128, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UMovieSceneCameraShakeSourceShakeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMovieSceneCameraShakeSectionData)         ShakeData                                                   ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
/// Size: 0x00F8 (0x0000F0 - 0x0001E8)
class UMovieSceneCameraShakeSourceTriggerSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FMovieSceneCameraShakeSourceTriggerChannel) Channel                                                    ___ OFFSET(get<T>, {0xF0, 248, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotSection
/// Size: 0x0028 (0x000138 - 0x000160)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FString)                                   ShotDisplayName                                             ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x148, 24, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneColorSection
/// Size: 0x0448 (0x0000F0 - 0x000538)
class UMovieSceneColorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FMovieSceneFloatChannel)                   RedCurve                                                    ___ OFFSET(get<T>, {0xF8, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenCurve                                                  ___ OFFSET(get<T>, {0x208, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueCurve                                                   ___ OFFSET(get<T>, {0x318, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaCurve                                                  ___ OFFSET(get<T>, {0x428, 272, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneConstrainedSection
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneConstrainedSection : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarSection
/// Size: 0x0068 (0x0000F0 - 0x000158)
class UMovieSceneCVarSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FMovieSceneConsoleVariableCollection>) ConsoleVariableCollections                               ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FMovieSceneCVarOverrides)                  ConsoleVariables                                            ___ OFFSET(get<T>, {0x108, 80, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneDataLayerSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FActorDataLayer>)                   DataLayers                                                  ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<UDataLayerAsset*>)                  DataLayerAssets                                             ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(EDataLayerRuntimeState)                    DesiredState                                                ___ OFFSET(get<T>, {0x118, 1, 0, 0})
	CMember(EDataLayerRuntimeState)                    PrerollState                                                ___ OFFSET(get<T>, {0x119, 1, 0, 0})
	DMember(bool)                                      bFlushOnUnload                                              ___ OFFSET(get<bool>, {0x11A, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleSection
/// Size: 0x0120 (0x0000F0 - 0x000210)
class UMovieSceneDoubleSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FMovieSceneDoubleChannel)                  DoubleCurve                                                 ___ OFFSET(get<T>, {0xF8, 280, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneEnumSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneByteChannel)                    EnumCurve                                                   ___ OFFSET(get<T>, {0xF8, 264, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSectionBase
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UMovieSceneEventSectionBase : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventRepeaterSection
/// Size: 0x0030 (0x0000F0 - 0x000120)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMovieSceneEvent)                          Event                                                       ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSection
/// Size: 0x0170 (0x0000F0 - 0x000260)
class UMovieSceneEventSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FNameCurve)                                Events                                                      ___ OFFSET(get<T>, {0xF0, 120, 0, 0})
	SMember(FMovieSceneEventSectionData)               EventData                                                   ___ OFFSET(get<T>, {0x168, 248, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTriggerSection
/// Size: 0x0100 (0x0000F0 - 0x0001F0)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FMovieSceneEventChannel)                   EventChannel                                                ___ OFFSET(get<T>, {0xF8, 248, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSection
/// Size: 0x0130 (0x0000F0 - 0x000220)
class UMovieSceneFadeSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FMovieSceneFloatChannel)                   FloatCurve                                                  ___ OFFSET(get<T>, {0xF8, 272, 0, 0})
	SMember(FLinearColor)                              FadeColor                                                   ___ OFFSET(get<T>, {0x208, 16, 0, 0})
	DMember(bool)                                      bFadeAudio                                                  ___ OFFSET(get<bool>, {0x218, 1, 1, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatSection
/// Size: 0x0128 (0x0000F0 - 0x000218)
class UMovieSceneFloatSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FMovieSceneFloatChannel)                   FloatCurve                                                  ___ OFFSET(get<T>, {0x100, 272, 0, 0})
	CMember(UMovieSceneSectionChannelOverrideRegistry*) OverrideRegistry                                           ___ OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneIntegerSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FMovieSceneIntegerChannel)                 IntegerCurve                                                ___ OFFSET(get<T>, {0xF8, 256, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySection
/// Size: 0x0020 (0x0000F0 - 0x000110)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ELevelVisibility)                          Visibility                                                  ___ OFFSET(get<T>, {0xF8, 1, 0, 0})
	CMember(TArray<FName>)                             LevelNames                                                  ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertySection
/// Size: 0x0128 (0x0000F0 - 0x000218)
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FMovieSceneObjectPathChannel)              ObjectChannel                                               ___ OFFSET(get<T>, {0xF0, 296, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSectionExtender
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneParameterSectionExtender : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneParameterSection
/// Size: 0x0068 (0x0000F0 - 0x000158)
class UMovieSceneParameterSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FBoolParameterNameAndCurve>)        BoolParameterNamesAndCurves                                 ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FScalarParameterNameAndCurve>)      ScalarParameterNamesAndCurves                               ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<FVector2DParameterNameAndCurves>)   Vector2DParameterNamesAndCurves                             ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FVectorParameterNameAndCurves>)     VectorParameterNamesAndCurves                               ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FColorParameterNameAndCurves>)      ColorParameterNamesAndCurves                                ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<FTransformParameterNameAndCurves>)  TransformParameterNamesAndCurves                            ___ OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleSection
/// Size: 0x0108 (0x0000F0 - 0x0001F8)
class UMovieSceneParticleSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FMovieSceneParticleChannel)                ParticleKeys                                                ___ OFFSET(get<T>, {0xF0, 264, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialSection
/// Size: 0x0130 (0x0000F0 - 0x000220)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FMovieSceneObjectPathChannel)              MaterialChannel                                             ___ OFFSET(get<T>, {0xF8, 296, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSection
/// Size: 0x0260 (0x0000F0 - 0x000350)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FMovieSceneSkeletalAnimationParams)        Params                                                      ___ OFFSET(get<T>, {0xF8, 328, 0, 0})
	CMember(UAnimSequence*)                            AnimSequence                                                ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(UAnimSequenceBase*)                        Animation                                                   ___ OFFSET(get<T>, {0x248, 8, 0, 0})
	DMember(float)                                     StartOffset                                                 ___ OFFSET(get<float>, {0x250, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   ___ OFFSET(get<float>, {0x254, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x25C, 1, 1, 0})
	SMember(FName)                                     SlotName                                                    ___ OFFSET(get<T>, {0x260, 4, 0, 0})
	SMember(FVector)                                   StartLocationOffset                                         ___ OFFSET(get<T>, {0x268, 24, 0, 0})
	SMember(FRotator)                                  StartRotationOffset                                         ___ OFFSET(get<T>, {0x280, 24, 0, 0})
	DMember(bool)                                      bMatchWithPrevious                                          ___ OFFSET(get<bool>, {0x298, 1, 0, 0})
	SMember(FName)                                     MatchedBoneName                                             ___ OFFSET(get<T>, {0x29C, 4, 0, 0})
	SMember(FVector)                                   MatchedLocationOffset                                       ___ OFFSET(get<T>, {0x2A0, 24, 0, 0})
	SMember(FRotator)                                  MatchedRotationOffset                                       ___ OFFSET(get<T>, {0x2B8, 24, 0, 0})
	DMember(bool)                                      bMatchTranslation                                           ___ OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      bMatchIncludeZHeight                                        ___ OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	DMember(bool)                                      bMatchRotationYaw                                           ___ OFFSET(get<bool>, {0x2D2, 1, 0, 0})
	DMember(bool)                                      bMatchRotationPitch                                         ___ OFFSET(get<bool>, {0x2D3, 1, 0, 0})
	DMember(bool)                                      bMatchRotationRoll                                          ___ OFFSET(get<bool>, {0x2D4, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoSection
/// Size: 0x0110 (0x0000F0 - 0x000200)
class UMovieSceneSlomoSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneFloatChannel)                   FloatCurve                                                  ___ OFFSET(get<T>, {0xF0, 272, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneStringSection
/// Size: 0x0118 (0x0000F0 - 0x000208)
class UMovieSceneStringSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FMovieSceneStringChannel)                  StringCurve                                                 ___ OFFSET(get<T>, {0xF8, 272, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorSection
/// Size: 0x0450 (0x0000F0 - 0x000540)
class UMovieSceneFloatVectorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FMovieSceneFloatChannel)                   Curves                                                      ___ OFFSET(get<T>, {0xF8, 1088, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                ___ OFFSET(get<int32_t>, {0x538, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorSection
/// Size: 0x0470 (0x0000F0 - 0x000560)
class UMovieSceneDoubleVectorSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FMovieSceneDoubleChannel)                  Curves                                                      ___ OFFSET(get<T>, {0xF8, 1120, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                ___ OFFSET(get<int32_t>, {0x558, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.BoolChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UBoolChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.ByteChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UByteChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.DoubleChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UDoubleChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.DoublePerlinNoiseChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UDoublePerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.FloatChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFloatChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.FloatPerlinNoiseChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UFloatPerlinNoiseChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.IntegerChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UIntegerChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePropertySystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieScenePropertySystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UMovieScenePropertyInstantiatorSystem*)    InstantiatorSystem                                          ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieScene3DTransformPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioSystem
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieSceneAudioSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneBaseValueEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneBoolPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneBytePropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneBytePropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneColorPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneComponentAttachmentInvalidatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentAttachmentSystem
/// Size: 0x0190 (0x000040 - 0x0001D0)
class UMovieSceneComponentAttachmentSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialSystem
/// Size: 0x0160 (0x000040 - 0x0001A0)
class UMovieSceneComponentMaterialSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMobilitySystem
/// Size: 0x01F0 (0x000040 - 0x000230)
class UMovieSceneComponentMobilitySystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentTransformSystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneComponentTransformSystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneConstraintSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneConstraintSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerSystem
/// Size: 0x0090 (0x000040 - 0x0000D0)
class UMovieSceneDataLayerSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDeferredComponentMovementSystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UMovieSceneDeferredComponentMovementSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDoublePropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneDoublePropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneEnumPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneEulerTransformPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventSystem
/// Size: 0x0050 (0x000040 - 0x000090)
class UMovieSceneEventSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePreSpawnEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostSpawnEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePostSpawnEventSystem : public UMovieSceneEventSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePostEvalEventSystem
/// Size: 0x0000 (0x000090 - 0x000090)
class UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeSystem
/// Size: 0x0010 (0x000040 - 0x000050)
class UMovieSceneFadeSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneFloatPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalBiasSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneHierarchicalBiasSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneInitialValueSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneInitialValueSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneIntegerPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilitySystem
/// Size: 0x0148 (0x000040 - 0x000188)
class UMovieSceneLevelVisibilitySystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionSystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UMovieSceneMaterialParameterCollectionSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterSystem
/// Size: 0x0308 (0x000040 - 0x000348)
class UMovieSceneMaterialParameterSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UMovieScenePiecewiseDoubleBlenderSystem*)  DoubleBlenderSystem                                         ___ OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMotionVectorSimulationSystem
/// Size: 0x0058 (0x000040 - 0x000098)
class UMovieSceneMotionVectorSimulationSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseBoolBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseBoolBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseByteBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseByteBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseDoubleBlenderSystem
/// Size: 0x00C8 (0x000068 - 0x000130)
class UMovieScenePiecewiseDoubleBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseEnumBlenderSystem
/// Size: 0x0028 (0x000068 - 0x000090)
class UMovieScenePiecewiseEnumBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePiecewiseIntegerBlenderSystem
/// Size: 0x0048 (0x000068 - 0x0000B0)
class UMovieScenePiecewiseIntegerBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
/// Size: 0x0050 (0x000030 - 0x000080)
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  Result                                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Failure                                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UMovieSceneSequencePlayer*)                SequencePlayer                                              ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(USceneComponent*)                          SceneComponent                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePredictionSystem
/// Size: 0x00B0 (0x000040 - 0x0000F0)
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<UMovieSceneAsyncAction_SequencePrediction*>) PendingPredictions                                 ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<UMovieSceneAsyncAction_SequencePrediction*>) ProcessingPredictions                              ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyInstantiatorSystem
/// Size: 0x0228 (0x000040 - 0x000268)
class UMovieScenePropertyInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneQuaternionBlenderSystem
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UMovieSceneQuaternionBlenderSystem : public UMovieSceneBlenderSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneQuaternionInterpolationRotationSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationSystem
/// Size: 0x00A0 (0x000040 - 0x0000E0)
class UMovieSceneSkeletalAnimationSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneStringPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneStringPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOriginInstantiatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UMovieSceneTransformOriginInstantiatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformOriginSystem
/// Size: 0x0038 (0x000040 - 0x000078)
class UMovieSceneTransformOriginSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneFloatVectorPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorPropertySystem
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneDoubleVectorPropertySystem : public UMovieScenePropertySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.ObjectPathChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UObjectPathChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.StringChannelEvaluatorSystem
/// Size: 0x0000 (0x000040 - 0x000040)
class UStringChannelEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
/// Size: 0x0098 (0x000040 - 0x0000D8)
class UMovieSceneHierarchicalEasingInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UWeightAndEasingEvaluatorSystem*)          EvaluatorSystem                                             ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneHierarchicalEasingFinalizationSystem
/// Size: 0x0008 (0x000040 - 0x000048)
class UMovieSceneHierarchicalEasingFinalizationSystem : public UMovieSceneEntityInstantiatorSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UMovieSceneHierarchicalEasingInstantiatorSystem*) InstantiatorSystem                                   ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.WeightAndEasingEvaluatorSystem
/// Size: 0x0018 (0x000040 - 0x000058)
class UWeightAndEasingEvaluatorSystem : public UMovieSceneEntitySystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrackInstance
/// Size: 0x0078 (0x000050 - 0x0000C8)
class UMovieSceneCameraCutTrackInstance : public UMovieSceneTrackInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarTrackInstance
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UMovieSceneCVarTrackInstance : public UMovieSceneTrackInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DConstraintTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               ConstraintSections                                          ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DAttachTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MovieSceneTracks.MovieScene3DPathTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/MovieSceneTracks.MovieScenePropertyTrack
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UMovieSceneSection*)                       SectionToKey                                                ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FMovieScenePropertyBinding)                PropertyBinding                                             ___ OFFSET(get<T>, {0xA0, 12, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScene3DTransformTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UClass*)                                   BlenderSystemClass                                          ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneActorReferenceTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneAudioTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               AudioSections                                               ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneBoolTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneByteTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UEnum*)                                    Enum                                                        ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraCutTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bCanBlend                                                   ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeSourceShakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<UMovieSceneSection*>)               CameraShakeSections                                         ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeSourceTriggerTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCameraShakeTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<UMovieSceneSection*>)               CameraShakeSections                                         ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCinematicShotTrack
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneColorTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bIsSlateColor                                               ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneCVarTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneCVarTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDataLayerTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneDataLayerTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneDoubleTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEnumTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UEnum*)                                    Enum                                                        ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneEulerTransformTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneEventTrack
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bFireEventsWhenForwards                                     ___ OFFSET(get<bool>, {0xA8, 1, 1, 0})
	DMember(bool)                                      bFireEventsWhenBackwards                                    ___ OFFSET(get<bool>, {0xA8, 1, 1, 1})
	CMember(EFireEventsAtPosition)                     EventPosition                                               ___ OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFadeTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneIntegerTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneLevelVisibilityTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(UMovieSceneSection*)                       SectionToKey                                                ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UMaterialParameterCollection*)             MPC                                                         ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneComponentMaterialTrack
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(int32_t)                                   MaterialIndex                                               ___ OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneObjectPropertyTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UClass*)                                   PropertyClass                                               ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleParameterTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneParticleTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<UMovieSceneSection*>)               ParticleSections                                            ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieScenePrimitiveMaterialTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(int32_t)                                   MaterialIndex                                               ___ OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSkeletalAnimationTrack
/// Size: 0x00A8 (0x000098 - 0x000140)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<UMovieSceneSection*>)               AnimationSections                                           ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bUseLegacySectionIndexBlend                                 ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FMovieSceneSkeletalAnimRootMotionTrackParams) RootMotionParams                                         ___ OFFSET(get<T>, {0xB0, 128, 0, 0})
	DMember(bool)                                      bBlendFirstChildOfRoot                                      ___ OFFSET(get<bool>, {0x130, 1, 0, 0})
	CMember(ESwapRootBone)                             SwapRootBone                                                ___ OFFSET(get<T>, {0x131, 1, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneSlomoTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneStringTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneTransformTrack
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/MovieSceneTracks.MovieSceneFloatVectorTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneFloatVectorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(int32_t)                                   NumChannelsUsed                                             ___ OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneDoubleVectorTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneDoubleVectorTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(int32_t)                                   NumChannelsUsed                                             ___ OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
};

/// Class /Script/MovieSceneTracks.MovieSceneVisibilityTrack
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
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

/// Enum /Script/MovieSceneTracks.EFireEventsAtPosition
/// Size: 0x04
enum EFireEventsAtPosition : uint8_t
{
	EFireEventsAtPosition__AtStartOfEvaluation0                                      = 0,
	EFireEventsAtPosition__AtEndOfEvaluation1                                        = 1,
	EFireEventsAtPosition__AfterSpawn2                                               = 2,
	EFireEventsAtPosition__EFireEventsAtPosition_MAX3                                = 3
};

