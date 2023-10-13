
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MovieScene
/// dependency: MovieSceneTracks

/// Class /Script/ImagePlate.ImagePlate
/// Size: 0x0008 (0x000318 - 0x000320)
class AImagePlate : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UImagePlateComponent*)                     ImagePlate                                                  OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateComponent
/// Size: 0x00D0 (0x000640 - 0x000710)
class UImagePlateComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	SMember(FImagePlateParameters)                     Plate                                                       OFFSET(getStruct<T>, {0x640, 56, 0, 0})


	/// Functions
	// Function /Script/ImagePlate.ImagePlateComponent.SetImagePlate
	// void SetImagePlate(FImagePlateParameters Plate);                                                                         // [0x5d12b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ImagePlate.ImagePlateComponent.OnRenderTextureChanged
	// void OnRenderTextureChanged();                                                                                           // [0x5d1290] Final|Native|Public  
	// Function /Script/ImagePlate.ImagePlateComponent.GetPlate
	// FImagePlateParameters GetPlate();                                                                                        // [0x5d1240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ImagePlate.ImagePlateSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UImagePlateSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ProxyName                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateFileSequence
/// Size: 0x0028 (0x000028 - 0x000050)
class UImagePlateFileSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FDirectoryPath)                            SequencePath                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   FileWildcard                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(float)                                     FrameRate                                                   OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateFrustumComponent
/// Size: 0x0000 (0x000640 - 0x000640)
class UImagePlateFrustumComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
};

/// Class /Script/ImagePlate.MovieSceneImagePlateSection
/// Size: 0x0010 (0x000110 - 0x000120)
class UMovieSceneImagePlateSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UImagePlateFileSequence*)                  FileSequence                                                OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(bool)                                      bReuseExistingTexture                                       OFFSET(get<bool>, {0x118, 1, 0, 0})
};

/// Class /Script/ImagePlate.MovieSceneImagePlateTrack
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UMovieSceneImagePlateTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Struct /Script/ImagePlate.ImagePlateParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FImagePlateParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     TextureParameterName                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bFillScreen                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FVector2D)                                 FillScreenAmount                                            OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	SMember(FVector2D)                                 FixedSize                                                   OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	CMember(UTexture*)                                 RenderTexture                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DynamicMaterial                                             OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/ImagePlate.MovieSceneImagePlateSectionTemplate
/// Size: 0x0040 (0x000020 - 0x000060)
class FMovieSceneImagePlateSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMovieScenePropertySectionData)            PropertyData                                                OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	SMember(FMovieSceneImagePlateSectionParams)        Params                                                      OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Struct /Script/ImagePlate.MovieSceneImagePlateSectionParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovieSceneImagePlateSectionParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SectionStartTime                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(UImagePlateFileSequence*)                  FileSequence                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bReuseExistingTexture                                       OFFSET(get<bool>, {0x10, 1, 0, 0})
};

