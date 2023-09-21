
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSection
/// Size: 0x0140 (0x0000F0 - 0x000230)
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FLiveLinkSubjectPreset)                    SubjectPreset                                               ___ OFFSET(get<T>, {0xF0, 56, 0, 0})
	CMember(TArray<bool>)                              ChannelMask                                                 ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<UMovieSceneLiveLinkSubSection*>)    Subsections                                                 ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FName)                                     SubjectName                                                 ___ OFFSET(get<T>, {0x158, 4, 0, 0})
	SMember(FLiveLinkFrameData)                        TemplateToPush                                              ___ OFFSET(get<T>, {0x160, 144, 0, 0})
	SMember(FLiveLinkRefSkeleton)                      RefSkeleton                                                 ___ OFFSET(get<T>, {0x1F0, 32, 0, 0})
	CMember(TArray<FName>)                             CurveNames                                                  ___ OFFSET(get<T>, {0x210, 16, 0, 0})
	CMember(TArray<FMovieSceneFloatChannel>)           PropertyFloatChannels                                       ___ OFFSET(get<T>, {0x220, 16, 0, 0})
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSection
/// Size: 0x0028 (0x000028 - 0x000050)
class UMovieSceneLiveLinkSubSection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLiveLinkSubSectionData)                   SubSectionData                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UClass*)                                   SubjectRole                                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
/// Size: 0x0010 (0x000050 - 0x000060)
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
/// Size: 0x0010 (0x000050 - 0x000060)
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
/// Size: 0x0010 (0x000050 - 0x000060)
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/LiveLinkMovieScene.MovieSceneLiveLinkTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UClass*)                                   TrackRole                                                   ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
/// Size: 0x0080 (0x000038 - 0x0000B8)
class FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FLiveLinkSubjectPreset)                    SubjectPreset                                               ___ OFFSET(get<T>, {0x38, 56, 0, 0})
	CMember(TArray<bool>)                              ChannelMask                                                 ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FLiveLinkSubSectionData>)           SubSectionsData                                             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkSubSectionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkSubSectionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FLiveLinkPropertyData>)             Properties                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LiveLinkMovieScene.LiveLinkPropertyData
/// Size: 0x0058 (0x000000 - 0x000058)
class FLiveLinkPropertyData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     PropertyName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FMovieSceneFloatChannel>)           FloatChannel                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FMovieSceneStringChannel>)          StringChannel                                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FMovieSceneIntegerChannel>)         IntegerChannel                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FMovieSceneBoolChannel>)            BoolChannel                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FMovieSceneByteChannel>)            ByteChannel                                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

