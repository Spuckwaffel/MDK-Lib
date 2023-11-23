
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMotorSim
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer
/// Size: 0x00C0 (0x0000B0 - 0x000170)
class UFortMotorSimComponent_PatternPlayer : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(float)                                     PatternResetCooldown                                        OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FFortMotorSimPatternState)                 DriftState                                                  OFFSET(getStruct<T>, {0xB8, 48, 0, 0})
	SMember(FFortMotorSimPatternState)                 AirState                                                    OFFSET(getStruct<T>, {0xE8, 48, 0, 0})
	SMember(FFortMotorSimPatternState)                 StartlineState                                              OFFSET(getStruct<T>, {0x118, 48, 0, 0})
	CMember(UCurveVector*)                             CurrentCurve                                                OFFSET(get<T>, {0x168, 8, 0, 0})
};

/// Class /Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UFortMotorSimComponent_SurfaceModifier : public UAudioMotorSimComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TMap<FName, UCurveFloat*>)                 Surfaces                                                    OFFSET(get<T>, {0xB0, 80, 0, 0})
	SMember(FVector2f)                                 ThrottleRange                                               OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     OnsetInterpTime                                             OFFSET(get<float>, {0x108, 4, 0, 0})
	CMember(UCurveFloat*)                              CurrentCurve                                                OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier.SetSurface
	// void SetSurface(FName NewSurface);                                                                                       // [0x9e8962c] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/VehicleAudioRuntime.VehicleAudioLifecycleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicleAudioLifecycleInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VehicleAudioRuntime.FortVehicleAudioController
/// Size: 0x0070 (0x000290 - 0x000300)
class AFortVehicleAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UFortVehicleSoundData*)                    VehicleSoundData                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(int32_t)                                   CurrentSignificance                                         OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	DMember(bool)                                      bListenerInRange                                            OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bForceUpdatePastListenerRange                               OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(bool)                                      bRedlineAllowed                                             OFFSET(get<bool>, {0x2AA, 1, 0, 0})
	DMember(float)                                     JitterTime                                                  OFFSET(get<float>, {0x2AC, 4, 0, 0})
	CMember(AFortAthenaVehicle*)                       VehicleBase                                                 OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UFortPhysicsVehicleConfigs*)               PhysicsVehicleConfigs                                       OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               LayeredAudioComponent                                       OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UAudioParameterComponent*)                 AudioParameterComponent                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UAudioMotorModelComponent*)                AudioMotorModelComponent                                    OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UREVComponent*)                            REVComponent                                                OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UAudioComponent*)                          EngineComponent                                             OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TArray<UFortVehicleSoundComponent*>)       VehicleSoundComponents                                      OFFSET(get<T>, {0x2E8, 16, 0, 0})


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.UseMetasounds
	// bool UseMetasounds();                                                                                                    // [0x9e89838] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.UpdateMotorModelNative
	// void UpdateMotorModelNative(float DeltaSeconds);                                                                         // [0x9e897b4] Native|Protected|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Update
	// void Update(float DeltaSeconds);                                                                                         // [0x9e896ac] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Shutdown
	// void Shutdown();                                                                                                         // [0x2af8708] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetVehicle
	// void SetVehicle(AFortAthenaVehicle* InVehicle);                                                                          // [0x7b20814] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetRedlineActive
	// void SetRedlineActive(bool bEnabled);                                                                                    // [0x718c14c] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.SetLayeredAudioComponent
	// void SetLayeredAudioComponent(UFortLayeredAudioComponent* InComponent);                                                  // [0x931e9f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.IsNativizationEnabled
	// bool IsNativizationEnabled();                                                                                            // [0x9e89584] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.Init
	// void Init();                                                                                                             // [0x1d0868c] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetVehicleActor
	// AFortAthenaVehicle* GetVehicleActor();                                                                                   // [0x589f408] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetThrottleNative
	// float GetThrottleNative();                                                                                               // [0x59d99b4] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetREVComponent
	// UREVComponent* GetREVComponent();                                                                                        // [0x582ed14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetRedlineActive
	// bool GetRedlineActive();                                                                                                 // [0x2376048] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetPhysicsVehicleConfigs
	// UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs();                                                                  // [0x9e89418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetLayeredAudioComponent
	// UFortLayeredAudioComponent* GetLayeredAudioComponent();                                                                  // [0x931e6a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetJitterTime
	// float GetJitterTime();                                                                                                   // [0x9e893a4] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetEngineAudioComponent
	// UAudioComponent* GetEngineAudioComponent();                                                                              // [0x8df34cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetBrakingNative
	// float GetBrakingNative();                                                                                                // [0x59d9988] Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetAudioParameterComponent
	// UAudioParameterComponent* GetAudioParameterComponent();                                                                  // [0x242dfb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.GetAudioMotorModelComponent
	// UAudioMotorModelComponent* GetAudioMotorModelComponent();                                                                // [0x33a58e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleAudioController.CacheJitterTime
	// void CacheJitterTime();                                                                                                  // [0x726a7b8] Native|Public|BlueprintCallable 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortVehicleSoundComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortVehicleAudioController*>) AudioController                                          OFFSET(get<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Update
	// void Update(float DeltaSeconds);                                                                                         // [0x9e89730] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Shutdown
	// void Shutdown();                                                                                                         // [0x64771e4] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.Init
	// void Init();                                                                                                             // [0x5ea45e4] Native|Public|BlueprintCallable 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetVehicleActor
	// AFortAthenaVehicle* GetVehicleActor();                                                                                   // [0x9e89560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetUseMetasounds
	// bool GetUseMetasounds();                                                                                                 // [0x9e89514] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetRootComponent
	// USceneComponent* GetRootComponent();                                                                                     // [0x9e894cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetREVComponent
	// UREVComponent* GetREVComponent();                                                                                        // [0x9e89484] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetPhysicsVehicleConfigs
	// UFortPhysicsVehicleConfigs* GetPhysicsVehicleConfigs();                                                                  // [0x9e89438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetMotorModelComponent
	// UAudioMotorModelComponent* GetMotorModelComponent();                                                                     // [0x9e893f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetLayeredAudioComponent
	// UFortLayeredAudioComponent* GetLayeredAudioComponent();                                                                  // [0x9e893d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetEngineAudioComponent
	// UAudioComponent* GetEngineAudioComponent();                                                                              // [0x9e8935c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioParameterComponent
	// UAudioParameterComponent* GetAudioParameterComponent();                                                                  // [0x9e89314] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioController
	// AFortVehicleAudioController* GetAudioController();                                                                       // [0x9e892ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Speed
/// Size: 0x0040 (0x0000B0 - 0x0000F0)
class UFortVehicleSoundComponent_Speed : public UFortVehicleSoundComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FFortAudioFloatParameter)                  Speed                                                       OFFSET(getStruct<T>, {0xB0, 56, 0, 0})


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Speed.OnReversedChanged
	// void OnReversedChanged(bool bReversing);                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface
/// Size: 0x00A8 (0x0000B0 - 0x000158)
class UFortVehicleSoundComponent_Surface : public UFortVehicleSoundComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FFortVehicleSoundComponent_SurfaceContext) Context                                                     OFFSET(getStruct<T>, {0xB0, 168, 0, 0})


	/// Functions
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSurfaceChanged
	// void OnSurfaceChanged(TEnumAsByte<EPhysicalSurface> NewSurface);                                                         // [0x9e895ac] Final|Native|Public  
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSkiddingChanged
	// void OnSkiddingChanged(bool bNewState);                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnInAirChanged
	// void OnInAirChanged(bool bNewState);                                                                                     // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnBrakingChanged
	// void OnBrakingChanged(bool bNewState);                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/VehicleAudioRuntime.FortVehicleSoundData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortVehicleSoundData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<UFortVehicleSoundComponent*>)       SoundComponents                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(float)                                     MaxListenerDistance                                         OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUpdateDataFromController                                   OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     MaxBrakeThreshold                                           OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     ThrottleMultiplier                                          OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     SurfaceFrictionModifier                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     MotorFrictionModifier                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	SMember(FVector2D)                                 FrictionJitter                                              OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bCanShiftOverride                                           OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/VehicleAudioRuntime.FortMotorSimPatternState
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortMotorSimPatternState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<UCurveVector*>)                     Curves                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     OnsetInterpSpeed                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ThrottleThreshold                                           OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     RpmFallRate                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     SpeedMin                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     SpeedMax                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     RpmOffsetMin                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     RpmOffsetMax                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bLoopCurves                                                 OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/VehicleAudioRuntime.FortVehicleSoundSurfaceParam
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortVehicleSoundSurfaceParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TEnumAsByte<EPhysicalSurface>)             Surface                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/VehicleAudioRuntime.FortVehicleSoundComponent_SurfaceContext
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FFortVehicleSoundComponent_SurfaceContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     BrakingHardStopThreshold                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BrakingSoftStopThreshold                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SurfaceParamInterpSpeed                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TMap<TEnumAsByte, TEnumAsByte>)            SurfaceMap                                                  OFFSET(get<T>, {0x10, 80, 0, 0})
	SMember(FName)                                     WaterParamName                                              OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	DMember(float)                                     WaterParamInterpSpeed                                       OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FName)                                     AirParamName                                                OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(float)                                     AirParamAttackInterpSpeed                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     AirParamReleaseInterpSpeed                                  OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MinSpeedForSkidFX                                           OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     MaxSpeedForSkidFX                                           OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FName)                                     SkiddingParamName                                           OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	DMember(float)                                     SkiddingParamInterpSpeed                                    OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             CurrentSurface                                              OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(TArray<FFortVehicleSoundSurfaceParam>)     SurfaceParams                                               OFFSET(get<T>, {0x88, 16, 0, 0})
};

