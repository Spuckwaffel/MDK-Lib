/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GeometryCacheTracks.

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
/// Size: 0x0040 (0x000000 - 0x000040)
class FMovieSceneGeometryCacheParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UGeometryCache*)                           GeometryCacheAsset                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumber)                              FirstLoopStartFrameOffset                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FFrameNumber)                              StartFrameOffset                                            ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FFrameNumber)                              EndFrameOffset                                              ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(float)                                     StartOffset                                                 ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     EndOffset                                                   ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FSoftObjectPath)                           GeometryCache                                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
/// Size: 0x0008 (0x000040 - 0x000048)
class FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FFrameNumber)                              SectionStartTime                                            ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FFrameNumber)                              SectionEndTime                                              ___ OFFSET(get<T>, {0x44, 4, 0, 0})
};

/// Struct /Script/GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
/// Size: 0x0048 (0x000020 - 0x000068)
class FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMovieSceneGeometryCacheSectionTemplateParameters) Params                                              ___ OFFSET(get<T>, {0x20, 72, 0, 0})
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheSection
/// Size: 0x0040 (0x0000F0 - 0x000130)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FMovieSceneGeometryCacheParams)            Params                                                      ___ OFFSET(get<T>, {0xF0, 64, 0, 0})
};

/// Class /Script/GeometryCacheTracks.MovieSceneGeometryCacheTrack
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<UMovieSceneSection*>)               AnimationSections                                           ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

