
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/PointLight.PointLightNativeComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UPointLightNativeComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(UTimelineComponent*)                       ShortCircuitTimelineComponent                               OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FLinearColor)                              FlickerColor                                                OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(float)                                     ShortCircuitMinDelay                                        OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     ShortCircuitMaxDelay                                        OFFSET(get<float>, {0x164, 4, 0, 0})


	/// Functions
	// Function /Script/PointLight.PointLightNativeComponent.UpdateShortCircuit
	// void UpdateShortCircuit();                                                                                               // [0x9c82e8c] Final|Native|Private 
	// Function /Script/PointLight.PointLightNativeComponent.UpdateDeviceSettings
	// void UpdateDeviceSettings(FPointLightRhythmParameters& RhythmParameters);                                                // [0x9c82dfc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StopShortCircuitUpdate
	// void StopShortCircuitUpdate();                                                                                           // [0x9c82de8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StartShortCircuitUpdate
	// void StartShortCircuitUpdate(UTimelineComponent* ShortCircuitTimeline);                                                  // [0x9c82c48] Final|Native|Public|BlueprintCallable 
	// Function /Script/PointLight.PointLightNativeComponent.StartRhythmUpdate
	// void StartRhythmUpdate(FTimerHandle& TimerHandle, float Rate);                                                           // [0x9c82b10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/PointLight.PointLightRhythmParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FPointLightRhythmParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              LightColor                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(ULightComponent*)                          ActiveLight                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMeshComponent                                         OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   ColorBands                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(float)                                     RhythmFrequencyValue                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     WindAmplitudeSpotLight                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     FlashFactor                                                 OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     SizeBasedIntensity                                          OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(EPointLightDeviceLightType)                LightType                                                   OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(EPointLightDeviceModes)                    RhythmMode                                                  OFFSET(get<T>, {0x35, 1, 0, 0})
};

/// Enum /Script/PointLight.EPointLightDeviceModes
/// Size: 0x08
enum EPointLightDeviceModes : uint8_t
{
	EPointLightDeviceModes__Constant0                                                = 0,
	EPointLightDeviceModes__Flicker1                                                 = 1,
	EPointLightDeviceModes__Wave2                                                    = 2,
	EPointLightDeviceModes__ShortCircuit3                                            = 3,
	EPointLightDeviceModes__Party4                                                   = 4,
	EPointLightDeviceModes__Windy5                                                   = 5,
	EPointLightDeviceModes__Flash6                                                   = 6,
	EPointLightDeviceModes__EPointLightDeviceModes_MAX7                              = 7
};

/// Enum /Script/PointLight.EPointLightDeviceLightType
/// Size: 0x03
enum EPointLightDeviceLightType : uint8_t
{
	EPointLightDeviceLightType__Point0                                               = 0,
	EPointLightDeviceLightType__Spot1                                                = 1,
	EPointLightDeviceLightType__EPointLightDeviceLightType_MAX2                      = 2
};

