
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000290 - 0x0002C0)
class ACameraRig_Crane : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(float)                                     CranePitch                                                  ___ OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     CraneYaw                                                    ___ OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(float)                                     CraneArmLength                                              ___ OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(bool)                                      bLockMountPitch                                             ___ OFFSET(get<bool>, {0x29C, 1, 0, 0})
	DMember(bool)                                      bLockMountYaw                                               ___ OFFSET(get<bool>, {0x29D, 1, 0, 0})
	CMember(USceneComponent*)                          TransformComponent                                          ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USceneComponent*)                          CraneYawControl                                             ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USceneComponent*)                          CranePitchControl                                           ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(USceneComponent*)                          CraneCameraMount                                            ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000290 - 0x0002B0)
class ACameraRig_Rail : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	DMember(float)                                     CurrentPositionOnRail                                       ___ OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(bool)                                      bLockOrientationToRail                                      ___ OFFSET(get<bool>, {0x294, 1, 0, 0})
	CMember(USceneComponent*)                          TransformComponent                                          ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USplineComponent*)                         RailSplineComponent                                         ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USceneComponent*)                          RailCameraMount                                             ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0070 (0x0009A0 - 0x000A10)
class ACineCameraActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2576;

public:
	SMember(FCameraLookatTrackingSettings)             LookatTrackingSettings                                      ___ OFFSET(get<T>, {0x9A0, 96, 0, 0})
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x0110 (0x000A30 - 0x000B40)
class UCineCameraComponent : public UCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            ___ OFFSET(get<T>, {0xA30, 12, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    ___ OFFSET(get<T>, {0xA3C, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                ___ OFFSET(get<T>, {0xA48, 28, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               ___ OFFSET(get<T>, {0xA68, 88, 0, 0})
	SMember(FPlateCropSettings)                        CropSettings                                                ___ OFFSET(get<T>, {0xAC0, 4, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          ___ OFFSET(get<float>, {0xAC4, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             ___ OFFSET(get<float>, {0xAC8, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        ___ OFFSET(get<float>, {0xACC, 4, 0, 0})
	DMember(bool)                                      bOverride_CustomNearClippingPlane                           ___ OFFSET(get<bool>, {0xAD0, 1, 1, 0})
	DMember(float)                                     CustomNearClippingPlane                                     ___ OFFSET(get<float>, {0xAD4, 4, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             ___ OFFSET(get<T>, {0xAE0, 16, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 ___ OFFSET(get<T>, {0xAF0, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPresetName                                   ___ OFFSET(get<T>, {0xB00, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPreset                                       ___ OFFSET(get<T>, {0xB10, 16, 0, 0})
	SMember(FString)                                   DefaultLensPresetName                                       ___ OFFSET(get<T>, {0xB20, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      ___ OFFSET(get<float>, {0xB30, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            ___ OFFSET(get<float>, {0xB34, 4, 0, 0})
};

/// Class /Script/CinematicCamera.CineCameraSettings
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UCineCameraSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   DefaultLensPresetName                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPreset                                       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   DefaultCropPresetName                                       ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FNamedPlateCropPreset>)             CropPresets                                                 ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FCameraFocusSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ECameraFocusMethod)                        FocusMethod                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ManualFocusDistance                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FCameraTrackingFocusSettings)              TrackingFocusSettings                                       ___ OFFSET(get<T>, {0x8, 64, 0, 0})
	DMember(bool)                                      bSmoothFocusChanges                                         ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(float)                                     FocusSmoothingInterpSpeed                                   ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     FocusOffset                                                 ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FCameraTrackingFocusSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<AActor*>)                   ActorToTrack                                                ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bDrawDebugTrackingFocusPoint                                ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FCameraLensSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     MinFocalLength                                              ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxFocalLength                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinFStop                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxFStop                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinimumFocusDistance                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SqueezeFactor                                               ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DiaphragmBladeCount                                         ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FCameraFilmbackSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     SensorWidth                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SensorHeight                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SensorAspectRatio                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FCameraLookatTrackingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bEnableLookAtTracking                                       ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDrawDebugLookAtTrackingPosition                            ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(float)                                     LookAtTrackingInterpSpeed                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   ActorToTrack                                                ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bAllowRoll                                                  ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
class FNamedFilmbackPreset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            ___ OFFSET(get<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0030 (0x000000 - 0x000030)
class FNamedLensPreset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                ___ OFFSET(get<T>, {0x10, 28, 0, 0})
};

/// Struct /Script/CinematicCamera.PlateCropSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlateCropSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     AspectRatio                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedPlateCropPreset
/// Size: 0x0018 (0x000000 - 0x000018)
class FNamedPlateCropPreset : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FPlateCropSettings)                        CropSettings                                                ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x05
enum ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__DoNotOverride0                                               = 0,
	ECameraFocusMethod__Manual1                                                      = 1,
	ECameraFocusMethod__Tracking2                                                    = 2,
	ECameraFocusMethod__Disable3                                                     = 3,
	ECameraFocusMethod__MAX4                                                         = 4
};

