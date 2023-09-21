
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/LiveLinkInterface.LiveLinkController
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameInterpolationProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFrameInterpolationProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkFramePreProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFramePreProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkRole : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceSettings
/// Size: 0x0080 (0x000028 - 0x0000A8)
class ULiveLinkSourceSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(ELiveLinkSourceMode)                       Mode                                                        ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FLiveLinkSourceBufferManagementSettings)   BufferSettings                                              ___ OFFSET(get<T>, {0x30, 96, 0, 0})
	SMember(FString)                                   ConnectionString                                            ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(UClass*)                                   Factory                                                     ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkCurveRemapSettings
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FLiveLinkCurveConversionSettings)          CurveConversionSettings                                     ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkFrameTranslator
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkFrameTranslator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSourceFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkSourceFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkSubjectSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class ULiveLinkSubjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<ULiveLinkFramePreProcessor*>)       PreProcessors                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(ULiveLinkFrameInterpolationProcessor*)     InterpolationProcessor                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<ULiveLinkFrameTranslator*>)         Translators                                                 ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UClass*)                                   Role                                                        ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FFrameRate)                                FrameRate                                                   ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bRebroadcastSubject                                         ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkVirtualSubject
/// Size: 0x0130 (0x000028 - 0x000158)
class ULiveLinkVirtualSubject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UClass*)                                   Role                                                        ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FLiveLinkSubjectName>)              Subjects                                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<ULiveLinkFrameTranslator*>)         FrameTranslators                                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bRebroadcastSubject                                         ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/LiveLinkInterface.LiveLinkBasicRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkBasicRole : public ULiveLinkRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkAnimationRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkTransformRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkCameraRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LiveLinkInterface.LiveLinkLightRole
/// Size: 0x0000 (0x000028 - 0x000028)
class ULiveLinkLightRole : public ULiveLinkTransformRole
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FLiveLinkSourceHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseStaticData
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkBaseStaticData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FName>)                             PropertyNames                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSkeletonStaticData
/// Size: 0x0020 (0x000010 - 0x000030)
class FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FName>)                             BoneNames                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           BoneParents                                                 ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseFrameData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FLiveLinkBaseFrameData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FLiveLinkWorldTime)                        WorldTime                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLiveLinkMetaData)                         MetaData                                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(TArray<float>)                             PropertyValues                                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkMetaData
/// Size: 0x0060 (0x000000 - 0x000060)
class FLiveLinkMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<FName, FString>)                      StringMetaData                                              ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FQualifiedFrameTime)                       SceneTime                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkWorldTime
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkWorldTime : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Time                                                        ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Offset                                                      ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkAnimationFrameData
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkBaseBlueprintData
/// Size: 0x0008 (0x000000 - 0x000008)
class FLiveLinkBaseBlueprintData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkBasicBlueprintData
/// Size: 0x00B0 (0x000008 - 0x0000B8)
class FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FLiveLinkBaseStaticData)                   StaticData                                                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FLiveLinkBaseFrameData)                    FrameData                                                   ___ OFFSET(get<T>, {0x18, 160, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformStaticData
/// Size: 0x0008 (0x000010 - 0x000018)
class FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bIsLocationSupported                                        ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bIsRotationSupported                                        ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bIsScaleSupported                                           ___ OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraStaticData
/// Size: 0x0010 (0x000018 - 0x000028)
class FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsFieldOfViewSupported                                     ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bIsAspectRatioSupported                                     ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bIsFocalLengthSupported                                     ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      bIsProjectionModeSupported                                  ___ OFFSET(get<bool>, {0x1B, 1, 0, 0})
	DMember(float)                                     FilmBackWidth                                               ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilmBackHeight                                              ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bIsApertureSupported                                        ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bIsFocusDistanceSupported                                   ___ OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bIsDepthOfFieldSupported                                    ___ OFFSET(get<bool>, {0x26, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformFrameData
/// Size: 0x0060 (0x0000A0 - 0x000100)
class FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0xA0, 96, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraFrameData
/// Size: 0x0020 (0x000100 - 0x000120)
class FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     FieldOfView                                                 ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     AspectRatio                                                 ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     FocalLength                                                 ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     Aperture                                                    ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     FocusDistance                                               ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(ELiveLinkCameraProjectionMode)             ProjectionMode                                              ___ OFFSET(get<T>, {0x114, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCameraBlueprintData
/// Size: 0x0148 (0x000008 - 0x000150)
class FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FLiveLinkCameraStaticData)                 StaticData                                                  ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FLiveLinkCameraFrameData)                  FrameData                                                   ___ OFFSET(get<T>, {0x30, 288, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightStaticData
/// Size: 0x0010 (0x000018 - 0x000028)
class FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsTemperatureSupported                                     ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bIsIntensitySupported                                       ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(bool)                                      bIsLightColorSupported                                      ___ OFFSET(get<bool>, {0x1A, 1, 0, 0})
	DMember(bool)                                      bIsInnerConeAngleSupported                                  ___ OFFSET(get<bool>, {0x1B, 1, 0, 0})
	DMember(bool)                                      bIsOuterConeAngleSupported                                  ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bIsAttenuationRadiusSupported                               ___ OFFSET(get<bool>, {0x1D, 1, 0, 0})
	DMember(bool)                                      bIsSourceLenghtSupported                                    ___ OFFSET(get<bool>, {0x1E, 1, 0, 0})
	DMember(bool)                                      bIsSourceRadiusSupported                                    ___ OFFSET(get<bool>, {0x1F, 1, 0, 0})
	DMember(bool)                                      bIsSoftSourceRadiusSupported                                ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightFrameData
/// Size: 0x0030 (0x000100 - 0x000130)
class FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(float)                                     Temperature                                                 ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     Intensity                                                   ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FColor)                                    LightColor                                                  ___ OFFSET(get<T>, {0x108, 4, 0, 0})
	DMember(float)                                     InnerConeAngle                                              ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     OuterConeAngle                                              ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     AttenuationRadius                                           ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     SourceRadius                                                ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     SoftSourceRadius                                            ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     SourceLength                                                ___ OFFSET(get<float>, {0x120, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkLightBlueprintData
/// Size: 0x0158 (0x000008 - 0x000160)
class FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FLiveLinkLightStaticData)                  StaticData                                                  ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FLiveLinkLightFrameData)                   FrameData                                                   ___ OFFSET(get<T>, {0x30, 304, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourcePreset
/// Size: 0x0030 (0x000000 - 0x000030)
class FLiveLinkSourcePreset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ULiveLinkSourceSettings*)                  Settings                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FText)                                     SourceType                                                  ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectPreset
/// Size: 0x0038 (0x000000 - 0x000038)
class FLiveLinkSubjectPreset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLiveLinkSubjectKey)                       Key                                                         ___ OFFSET(get<T>, {0x0, 20, 0, 0})
	CMember(UClass*)                                   Role                                                        ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(ULiveLinkSubjectSettings*)                 Settings                                                    ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(ULiveLinkVirtualSubject*)                  VirtualSubject                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectKey
/// Size: 0x0014 (0x000000 - 0x000014)
class FLiveLinkSubjectKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     Source                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectName
/// Size: 0x0004 (0x000000 - 0x000004)
class FLiveLinkSubjectName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkRefSkeleton
/// Size: 0x0020 (0x000000 - 0x000020)
class FLiveLinkRefSkeleton : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FName>)                             BoneNames                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           BoneParents                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSubjectRepresentation
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkSubjectRepresentation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FLiveLinkSubjectName)                      Subject                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   Role                                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransformBlueprintData
/// Size: 0x0118 (0x000008 - 0x000120)
class FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FLiveLinkTransformStaticData)              StaticData                                                  ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FLiveLinkTransformFrameData)               FrameData                                                   ___ OFFSET(get<T>, {0x20, 256, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveConversionSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FLiveLinkCurveConversionSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FSoftObjectPath>)            CurveConversionAssetMap                                     ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceBufferManagementSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FLiveLinkSourceBufferManagementSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bValidEngineTimeEnabled                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ValidEngineTime                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EngineTimeOffset                                            ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(double)                                    EngineTimeClockOffset                                       ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    SmoothEngineTimeOffset                                      ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(bool)                                      bGenerateSubFrame                                           ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FFrameRate)                                DetectedFrameRate                                           ___ OFFSET(get<T>, {0x24, 8, 0, 0})
	DMember(bool)                                      bUseTimecodeSmoothLatest                                    ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	SMember(FFrameRate)                                SourceTimecodeFrameRate                                     ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bValidTimecodeFrameEnabled                                  ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   ValidTimecodeFrame                                          ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     TimecodeFrameOffset                                         ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(double)                                    TimecodeClockOffset                                         ___ OFFSET(get<double>, {0x48, 8, 0, 0})
	DMember(int32_t)                                   LatestOffset                                                ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfFrameToBuffered                                  ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      bKeepAtLeastOneFrame                                        ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkSourceDebugInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FLiveLinkSourceDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FLiveLinkSubjectName)                      SubjectName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SnapshotIndex                                               ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumberOfBufferAtSnapshot                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeSynchronizationSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLiveLinkTimeSynchronizationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FFrameRate)                                FrameRate                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFrameNumber)                              FrameOffset                                                 ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkInterpolationSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FLiveLinkInterpolationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bUseInterpolation                                           ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     InterpolationOffset                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTime
/// Size: 0x0018 (0x000000 - 0x000018)
class FLiveLinkTime : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    WorldTime                                                   ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(FQualifiedFrameTime)                       SceneTime                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameRate
/// Size: 0x0000 (0x000008 - 0x000008)
class FLiveLinkFrameRate : public FFrameRate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
/// Size: 0x0010 (0x000000 - 0x000010)
class FLiveLinkTimeCode_Base_DEPRECATED : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Seconds                                                     ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Frames                                                      ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FLiveLinkFrameRate)                        FrameRate                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkTimeCode
/// Size: 0x0000 (0x000010 - 0x000010)
class FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkCurveElement
/// Size: 0x0008 (0x000000 - 0x000008)
class FLiveLinkCurveElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     CurveName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     CurveValue                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/LiveLinkInterface.LiveLinkFrameData
/// Size: 0x0090 (0x000000 - 0x000090)
class FLiveLinkFrameData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FLiveLinkCurveElement>)             CurveElements                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FLiveLinkWorldTime)                        WorldTime                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FLiveLinkMetaData)                         MetaData                                                    ___ OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Struct /Script/LiveLinkInterface.SubjectMetadata
/// Size: 0x0070 (0x000000 - 0x000070)
class FSubjectMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TMap<FName, FString>)                      StringMetaData                                              ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FTimecode)                                 SceneTimecode                                               ___ OFFSET(get<T>, {0x50, 20, 0, 0})
	SMember(FFrameRate)                                SceneFramerate                                              ___ OFFSET(get<T>, {0x64, 8, 0, 0})
};

/// Struct /Script/LiveLinkInterface.CachedSubjectFrame
/// Size: 0x0160 (0x000000 - 0x000160)
class FCachedSubjectFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/LiveLinkInterface.LiveLinkTransform
/// Size: 0x0020 (0x000000 - 0x000020)
class FLiveLinkTransform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/LiveLinkInterface.SubjectFrameHandle
/// Size: 0x0010 (0x000008 - 0x000018)
class FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/LiveLinkInterface.ELiveLinkCameraProjectionMode
/// Size: 0x03
enum ELiveLinkCameraProjectionMode : uint8_t
{
	ELiveLinkCameraProjectionMode__Perspective0                                      = 0,
	ELiveLinkCameraProjectionMode__Orthographic1                                     = 1,
	ELiveLinkCameraProjectionMode__ELiveLinkCameraProjectionMode_MAX2                = 2
};

/// Enum /Script/LiveLinkInterface.ELiveLinkSourceMode
/// Size: 0x04
enum ELiveLinkSourceMode : uint8_t
{
	ELiveLinkSourceMode__Latest0                                                     = 0,
	ELiveLinkSourceMode__EngineTime1                                                 = 1,
	ELiveLinkSourceMode__Timecode2                                                   = 2,
	ELiveLinkSourceMode__ELiveLinkSourceMode_MAX3                                    = 3
};

