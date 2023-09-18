/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioShapes.

/// Class /Script/AudioShapes.AudioShapeComponent
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UAudioShapeComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     MaxDistanceOffset                                           ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     SmoothingDistance                                           ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     FadeInTime                                                  ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     FadeOutTime                                                 ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudibleStateChanged                                       ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TMap<FName, UAudioComponent*>)             AudioComponents                                             ___ OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TArray<APlayerController*>)                LocalControllers                                            ___ OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/AudioShapes.AudioShapePrimitiveComponent
/// Size: 0x0088 (0x000140 - 0x0001C8)
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(USoundBase*)                               SoundOnEdge                                                 ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnInside                                               ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInsideStateChanged                                        ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bUseOwningActorTransform                                    ___ OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bAutoRefreshShape                                           ___ OFFSET(get<bool>, {0x161, 1, 0, 0})
	SMember(FVector)                                   ActorTransformScale                                         ___ OFFSET(get<T>, {0x168, 24, 0, 0})
};

/// Class /Script/AudioShapes.AudioShapeBoxComponent
/// Size: 0x0068 (0x0001C8 - 0x000230)
class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FTransform)                                BoxTransform                                                ___ OFFSET(get<T>, {0x1D0, 96, 0, 0})
};

/// Class /Script/AudioShapes.AudioShapeCylinderComponent
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(float)                                     HalfHeight                                                  ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x1CC, 4, 0, 0})
};

/// Class /Script/AudioShapes.AudioShapeLineComponent
/// Size: 0x0030 (0x0001C8 - 0x0001F8)
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FVector)                                   StartPoint                                                  ___ OFFSET(get<T>, {0x1C8, 24, 0, 0})
	SMember(FVector)                                   EndPoint                                                    ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
};

/// Class /Script/AudioShapes.AudioShapeLineListComponent
/// Size: 0x0018 (0x0001C8 - 0x0001E0)
class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FVector>)                           PointList                                                   ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	DMember(bool)                                      bClosedLoop                                                 ___ OFFSET(get<bool>, {0x1D8, 1, 0, 0})
};

/// Class /Script/AudioShapes.AudioShapeSphereComponent
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
};

/// Class /Script/AudioShapes.AudioShapeSubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UAudioShapeSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<UAudioShapeComponent*>)             AudioShapes                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<APlayerController*>)                LocalControllers                                            ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Enum /Script/AudioShapes.EAudioShapeComponentState
/// Size: 0x04
enum EAudioShapeComponentState : uint8_t
{
	EAudioShapeComponentState__Inactive0                                             = 0,
	EAudioShapeComponentState__Active1                                               = 1,
	EAudioShapeComponentState__Count2                                                = 2,
	EAudioShapeComponentState__EAudioShapeComponentState_MAX3                        = 3
};

