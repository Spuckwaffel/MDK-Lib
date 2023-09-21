
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ImagePlate.ImagePlate
/// Size: 0x0008 (0x000290 - 0x000298)
class AImagePlate : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UImagePlateComponent*)                     ImagePlate                                                  ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateComponent
/// Size: 0x0150 (0x000570 - 0x0006C0)
class UImagePlateComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	SMember(FImagePlateParameters)                     Plate                                                       ___ OFFSET(get<T>, {0x568, 64, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UImagePlateSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   ProxyName                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateFileSequence
/// Size: 0x0028 (0x000028 - 0x000050)
class UImagePlateFileSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FDirectoryPath)                            SequencePath                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   FileWildcard                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     FrameRate                                                   ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Class /Script/ImagePlate.ImagePlateFrustumComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class UImagePlateFrustumComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Struct /Script/ImagePlate.ImagePlateParameters
/// Size: 0x0040 (0x000000 - 0x000040)
class FImagePlateParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     TextureParameterName                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bFillScreen                                                 ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FVector2D)                                 FillScreenAmount                                            ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector2D)                                 FixedSize                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(UTexture*)                                 RenderTexture                                               ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DynamicMaterial                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

