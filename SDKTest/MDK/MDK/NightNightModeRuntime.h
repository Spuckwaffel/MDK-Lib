
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/NightNightModeRuntime.FortCameraMode_NightNight
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortCameraMode_NightNight : public UFortCinematicCamera
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/NightNightModeRuntime.FortPawnComponent_NightNight
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortPawnComponent_NightNight : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bAutoPossess                                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAllowUIViewTarget                                          OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(UClass*)                                   CameraModeOverrideClass                                     OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/NightNightModeRuntime.FortPawnComponent_NightNight.SetAllowUIViewTarget
	// void SetAllowUIViewTarget(bool bAllow);                                                                                  // [0xa6bde60] Final|Native|Public|BlueprintCallable 
	// Function /Script/NightNightModeRuntime.FortPawnComponent_NightNight.OnUIViewTargetChanged
	// void OnUIViewTargetChanged(UFortUICameraManagerComponent* InUICameraManagerComponent, AActor* OldUIViewTarget, AActor* NewUIViewTarget); // [0xa6bdd68] Final|Native|Private 
};

