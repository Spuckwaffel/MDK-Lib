/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayCameras.

/// Struct /Script/GameplayCameras.FOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FFOscillator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<EInitialOscillatorOffset>)     InitialOffset                                               ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EOscillatorWaveform)                       Waveform                                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/GameplayCameras.ROscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FROscillator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              Pitch                                                       ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Yaw                                                         ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Roll                                                        ___ OFFSET(get<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.VOscillator
/// Size: 0x0024 (0x000000 - 0x000024)
class FVOscillator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FFOscillator)                              X                                                           ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FFOscillator)                              Y                                                           ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FFOscillator)                              Z                                                           ___ OFFSET(get<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/GameplayCameras.CameraAnimationParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FCameraAnimationParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(ECameraAnimationEasingType)                EaseInType                                                  ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     EaseInDuration                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(ECameraAnimationEasingType)                EaseOutType                                                 ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     EaseOutDuration                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   StartOffset                                                 ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bRandomStartTime                                            ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     DurationOverride                                            ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(ECameraAnimationPlaySpace)                 Playspace                                                   ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FRotator)                                  UserPlaySpaceRot                                            ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/GameplayCameras.CameraAnimationHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FCameraAnimationHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/GameplayCameras.ActiveCameraAnimationInfo
/// Size: 0x0078 (0x000000 - 0x000078)
class FActiveCameraAnimationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UCameraAnimationSequence*)                 Sequence                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCameraAnimationParams)                    Params                                                      ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FCameraAnimationHandle)                    Handle                                                      ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	CMember(UCameraAnimationSequencePlayer*)           Player                                                      ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UCameraAnimationSequenceCameraStandIn*)    CameraStandIn                                               ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(float)                                     EaseInCurrentTime                                           ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     EaseOutCurrentTime                                          ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bIsEasingIn                                                 ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bIsEasingOut                                                ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Struct /Script/GameplayCameras.PerlinNoiseShaker
/// Size: 0x0008 (0x000000 - 0x000008)
class FPerlinNoiseShaker : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amplitude                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayCameras.WaveOscillator
/// Size: 0x000C (0x000000 - 0x00000C)
class FWaveOscillator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Amplitude                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EInitialWaveOscillatorOffsetType)          InitialOffsetType                                           ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Class /Script/GameplayCameras.LegacyCameraShake
/// Size: 0x0110 (0x0000E0 - 0x0001F0)
class ULegacyCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(float)                                     OscillationDuration                                         ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     OscillationBlendInTime                                      ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     OscillationBlendOutTime                                     ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	SMember(FROscillator)                              RotOscillation                                              ___ OFFSET(get<T>, {0xE4, 36, 0, 0})
	SMember(FVOscillator)                              LocOscillation                                              ___ OFFSET(get<T>, {0x108, 36, 0, 0})
	SMember(FFOscillator)                              FOVOscillation                                              ___ OFFSET(get<T>, {0x12C, 12, 0, 0})
	DMember(float)                                     AnimPlayRate                                                ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     AnimScale                                                   ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     AnimBlendInTime                                             ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     AnimBlendOutTime                                            ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     RandomAnimSegmentDuration                                   ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(UCameraAnimationSequence*)                 AnimSequence                                                ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	DMember(bool)                                      bRandomAnimSegment                                          ___ OFFSET(get<bool>, {0x158, 1, 1, 0})
	DMember(float)                                     OscillatorTimeRemaining                                     ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	CMember(USequenceCameraShakePattern*)              SequenceShakePattern                                        ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/GameplayCameras.LegacyCameraShakePattern
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayCameras.LegacyCameraShakeFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayCameras.CameraAnimationCameraModifier
/// Size: 0x0018 (0x000048 - 0x000060)
class UCameraAnimationCameraModifier : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FActiveCameraAnimationInfo>)        ActiveAnimations                                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(uint16_t)                                  NextInstanceSerialNumber                                    ___ OFFSET(get<uint16_t>, {0x58, 2, 0, 0})
};

/// Class /Script/GameplayCameras.GameplayCamerasFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayCameras.CompositeCameraShakePattern
/// Size: 0x0010 (0x000028 - 0x000038)
class UCompositeCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UCameraShakePattern*>)              ChildPatterns                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayCameras.DefaultCameraShakeBase
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UDefaultCameraShakeBase : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/GameplayCameras.GameplayCamerasSubsystem
/// Size: 0x0000 (0x000030 - 0x000030)
class UGameplayCamerasSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GameplayCameras.SimpleCameraShakePattern
/// Size: 0x0030 (0x000028 - 0x000058)
class USimpleCameraShakePattern : public UCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     BlendInTime                                                 ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     BlendOutTime                                                ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/GameplayCameras.PerlinNoiseCameraShakePattern
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        X                                                           ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Y                                                           ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Z                                                           ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FPerlinNoiseShaker)                        Pitch                                                       ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Yaw                                                         ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        Roll                                                        ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FPerlinNoiseShaker)                        FOV                                                         ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/GameplayCameras.TestCameraShake
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UTestCameraShake : public UCameraShakeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/GameplayCameras.ConstantCameraShakePattern
/// Size: 0x0030 (0x000058 - 0x000088)
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   LocationOffset                                              ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FRotator)                                  RotationOffset                                              ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Class /Script/GameplayCameras.WaveOscillatorCameraShakePattern
/// Size: 0x00A0 (0x000058 - 0x0000F8)
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(float)                                     LocationAmplitudeMultiplier                                 ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LocationFrequencyMultiplier                                 ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FWaveOscillator)                           X                                                           ___ OFFSET(get<T>, {0x60, 12, 0, 0})
	SMember(FWaveOscillator)                           Y                                                           ___ OFFSET(get<T>, {0x6C, 12, 0, 0})
	SMember(FWaveOscillator)                           Z                                                           ___ OFFSET(get<T>, {0x78, 12, 0, 0})
	DMember(float)                                     RotationAmplitudeMultiplier                                 ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     RotationFrequencyMultiplier                                 ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	SMember(FWaveOscillator)                           Pitch                                                       ___ OFFSET(get<T>, {0x8C, 12, 0, 0})
	SMember(FWaveOscillator)                           Yaw                                                         ___ OFFSET(get<T>, {0x98, 12, 0, 0})
	SMember(FWaveOscillator)                           Roll                                                        ___ OFFSET(get<T>, {0xA4, 12, 0, 0})
	SMember(FWaveOscillator)                           FOV                                                         ___ OFFSET(get<T>, {0xB0, 12, 0, 0})
};

/// Enum /Script/GameplayCameras.EOscillatorWaveform
/// Size: 0x03
enum EOscillatorWaveform : uint8_t
{
	EOscillatorWaveform__SineWave0                                                   = 0,
	EOscillatorWaveform__PerlinNoise1                                                = 1,
	EOscillatorWaveform__EOscillatorWaveform_MAX2                                    = 2
};

/// Enum /Script/GameplayCameras.EInitialOscillatorOffset
/// Size: 0x03
enum EInitialOscillatorOffset : uint8_t
{
	EOO_OffsetRandom0                                                                = 0,
	EOO_OffsetZero1                                                                  = 1,
	EOO_MAX2                                                                         = 2
};

/// Enum /Script/GameplayCameras.ECameraAnimationPlaySpace
/// Size: 0x04
enum ECameraAnimationPlaySpace : uint8_t
{
	ECameraAnimationPlaySpace__CameraLocal0                                          = 0,
	ECameraAnimationPlaySpace__World1                                                = 1,
	ECameraAnimationPlaySpace__UserDefined2                                          = 2,
	ECameraAnimationPlaySpace__ECameraAnimationPlaySpace_MAX3                        = 3
};

/// Enum /Script/GameplayCameras.ECameraAnimationEasingType
/// Size: 0x09
enum ECameraAnimationEasingType : uint8_t
{
	ECameraAnimationEasingType__Linear0                                              = 0,
	ECameraAnimationEasingType__Sinusoidal1                                          = 1,
	ECameraAnimationEasingType__Quadratic2                                           = 2,
	ECameraAnimationEasingType__Cubic3                                               = 3,
	ECameraAnimationEasingType__Quartic4                                             = 4,
	ECameraAnimationEasingType__Quintic5                                             = 5,
	ECameraAnimationEasingType__Exponential6                                         = 6,
	ECameraAnimationEasingType__Circular7                                            = 7,
	ECameraAnimationEasingType__ECameraAnimationEasingType_MAX8                      = 8
};

/// Enum /Script/GameplayCameras.EInitialWaveOscillatorOffsetType
/// Size: 0x03
enum EInitialWaveOscillatorOffsetType : uint8_t
{
	EInitialWaveOscillatorOffsetType__Random0                                        = 0,
	EInitialWaveOscillatorOffsetType__Zero1                                          = 1,
	EInitialWaveOscillatorOffsetType__EInitialWaveOscillatorOffsetType_MAX2          = 2
};

