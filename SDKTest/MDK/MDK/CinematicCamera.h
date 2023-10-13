
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CinematicCamera.CineCameraActor
/// Size: 0x0040 (0x000870 - 0x0008B0)
class ACineCameraActor : public ACameraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	SMember(FCameraLookatTrackingSettings)             LookatTrackingSettings                                      OFFSET(getStruct<T>, {0x870, 48, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent
	// UCineCameraComponent* GetCineCameraComponent();                                                                          // [0x1e275a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CineCameraComponent
/// Size: 0x00E0 (0x000830 - 0x000910)
class UCineCameraComponent : public UCameraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2320;

public:
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0x830, 12, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x83C, 20, 0, 0})
	SMember(FCameraFocusSettings)                      FocusSettings                                               OFFSET(getStruct<T>, {0x850, 56, 0, 0})
	DMember(float)                                     CurrentFocalLength                                          OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(float)                                     CurrentAperture                                             OFFSET(get<float>, {0x88C, 4, 0, 0})
	DMember(float)                                     CurrentFocusDistance                                        OFFSET(get<float>, {0x890, 4, 0, 0})
	CMember(UStaticMesh*)                              FocusPlaneVisualizationMesh                                 OFFSET(get<T>, {0x8A0, 8, 0, 0})
	CMember(UMaterial*)                                FocusPlaneVisualizationMaterial                             OFFSET(get<T>, {0x8A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     DebugFocusPlaneComponent                                    OFFSET(get<T>, {0x8B0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DebugFocusPlaneMID                                          OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(TArray<FNamedFilmbackPreset>)              FilmbackPresets                                             OFFSET(get<T>, {0x8C0, 16, 0, 0})
	CMember(TArray<FNamedLensPreset>)                  LensPresets                                                 OFFSET(get<T>, {0x8D0, 16, 0, 0})
	SMember(FString)                                   DefaultFilmbackPresetName                                   OFFSET(getStruct<T>, {0x8E0, 16, 0, 0})
	SMember(FString)                                   DefaultLensPresetName                                       OFFSET(getStruct<T>, {0x8F0, 16, 0, 0})
	DMember(float)                                     DefaultLensFocalLength                                      OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     DefaultLensFStop                                            OFFSET(get<float>, {0x904, 4, 0, 0})


	/// Functions
	// Function /Script/CinematicCamera.CineCameraComponent.SetLensPresetByName
	// void SetLensPresetByName(FString InPresetName);                                                                          // [0x1e277c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.SetFilmbackPresetByName
	// void SetFilmbackPresetByName(FString InPresetName);                                                                      // [0x1e27720] Final|Native|Public|BlueprintCallable 
	// Function /Script/CinematicCamera.CineCameraComponent.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x1e276f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetLensPresetName
	// FString GetLensPresetName();                                                                                             // [0x1e27670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x1e27640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CinematicCamera.CineCameraComponent.GetFilmbackPresetName
	// FString GetFilmbackPresetName();                                                                                         // [0x1e275c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CinematicCamera.CameraRig_Crane
/// Size: 0x0030 (0x000318 - 0x000348)
class ACameraRig_Crane : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	DMember(float)                                     CranePitch                                                  OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     CraneYaw                                                    OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     CraneArmLength                                              OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(bool)                                      bLockMountPitch                                             OFFSET(get<bool>, {0x324, 1, 0, 0})
	DMember(bool)                                      bLockMountYaw                                               OFFSET(get<bool>, {0x325, 1, 0, 0})
	CMember(USceneComponent*)                          TransformComponent                                          OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USceneComponent*)                          CraneYawControl                                             OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(USceneComponent*)                          CranePitchControl                                           OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USceneComponent*)                          CraneCameraMount                                            OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/CinematicCamera.CameraRig_Rail
/// Size: 0x0020 (0x000318 - 0x000338)
class ACameraRig_Rail : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	DMember(float)                                     CurrentPositionOnRail                                       OFFSET(get<float>, {0x318, 4, 0, 0})
	CMember(USceneComponent*)                          TransformComponent                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USplineComponent*)                         RailSplineComponent                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USceneComponent*)                          RailCameraMount                                             OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraFocusSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FCameraFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ECameraFocusMethod)                        FocusMethod                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ManualFocusDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FCameraTrackingFocusSettings)              TrackingFocusSettings                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bDrawDebugFocusPlane                                        OFFSET(get<bool>, {0x20, 1, 1, 0})
	SMember(FColor)                                    DebugFocusPlaneColor                                        OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bSmoothFocusChanges                                         OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(float)                                     FocusSmoothingInterpSpeed                                   OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     FocusOffset                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraTrackingFocusSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FCameraTrackingFocusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AActor*)                                   ActorToTrack                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bDrawDebugTrackingFocusPoint                                OFFSET(get<bool>, {0x14, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.CameraLensSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FCameraLensSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     MinFocalLength                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxFocalLength                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinFStop                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxFStop                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinimumFocusDistance                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraFilmbackSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FCameraFilmbackSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     SensorWidth                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SensorHeight                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SensorAspectRatio                                           OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CinematicCamera.CameraLookatTrackingSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FCameraLookatTrackingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnableLookAtTracking                                       OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDrawDebugLookAtTrackingPosition                            OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(float)                                     LookAtTrackingInterpSpeed                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(AActor*)                                   ActorToTrack                                                OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FVector)                                   RelativeOffset                                              OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(bool)                                      bAllowRoll                                                  OFFSET(get<bool>, {0x2C, 1, 1, 0})
};

/// Struct /Script/CinematicCamera.NamedLensPreset
/// Size: 0x0028 (0x000000 - 0x000028)
class FNamedLensPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraLensSettings)                       LensSettings                                                OFFSET(getStruct<T>, {0x10, 20, 0, 0})
};

/// Struct /Script/CinematicCamera.NamedFilmbackPreset
/// Size: 0x0020 (0x000000 - 0x000020)
class FNamedFilmbackPreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FCameraFilmbackSettings)                   FilmbackSettings                                            OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Enum /Script/CinematicCamera.ECameraFocusMethod
/// Size: 0x04
enum ECameraFocusMethod : uint8_t
{
	ECameraFocusMethod__None0                                                        = 0,
	ECameraFocusMethod__Manual1                                                      = 1,
	ECameraFocusMethod__Tracking2                                                    = 2,
	ECameraFocusMethod__ECameraFocusMethod_MAX3                                      = 3
};

