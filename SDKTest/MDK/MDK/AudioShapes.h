
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioShapes.AudioShapeComponent
/// Size: 0x0098 (0x0000A8 - 0x000140)
class UAudioShapeComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(float)                                     MaxDistanceOffset                                           OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     SmoothingDistance                                           OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     FadeInTime                                                  OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     FadeOutTime                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudibleStateChanged                                       OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TMap<FName, UAudioComponent*>)             AudioComponents                                             OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TArray<APlayerController*>)                LocalControllers                                            OFFSET(get<T>, {0x120, 16, 0, 0})
};



	/// Functions
	// Function /Script/AudioShapes.AudioShapeComponent.UpdateAudioShape
	// void UpdateAudioShape(TArray<APlayerController*>& InLocalControllers);                                                   // [0x6c76354] Final|Native|Public|HasOutParms 
	// Function /Script/AudioShapes.AudioShapeComponent.Enable
	// void Enable();                                                                                                           // [0x1284298] Native|Protected|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeComponent.Disable
	// void Disable();                                                                                                          // [0x2326950] Native|Protected|BlueprintCallable 
/// Class /Script/AudioShapes.AudioShapePrimitiveComponent
/// Size: 0x0088 (0x000140 - 0x0001C8)
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(USoundBase*)                               SoundOnEdge                                                 OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnInside                                               OFFSET(get<T>, {0x148, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInsideStateChanged                                        OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bUseOwningActorTransform                                    OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bAutoRefreshShape                                           OFFSET(get<bool>, {0x161, 1, 0, 0})
	SMember(FVector)                                   ActorTransformScale                                         OFFSET(get<T>, {0x168, 24, 0, 0})
};



	/// Functions
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
	// bool GetIsPlayerInside();                                                                                                // [0x6c75fa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
	// UAudioComponent* GetInsideAudioComponent();                                                                              // [0x6c75f50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
	// UAudioComponent* GetEdgeAudioComponent();                                                                                // [0x6c75efc] Final|Native|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/AudioShapes.AudioShapeBoxComponent
/// Size: 0x0068 (0x0001C8 - 0x000230)
class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FTransform)                                BoxTransform                                                OFFSET(get<T>, {0x1D0, 96, 0, 0})
};



	/// Functions
	// Function /Script/AudioShapes.AudioShapeBoxComponent.SetBoxTransform
	// void SetBoxTransform(FTransform& InTransform);                                                                           // [0x6c76104] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
/// Class /Script/AudioShapes.AudioShapeCylinderComponent
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(float)                                     HalfHeight                                                  OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1CC, 4, 0, 0})
};



	/// Functions
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x6c762c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
	// void SetHalfHeight(float InHalfHeight);                                                                                  // [0x6c7623c] Final|Native|Public|BlueprintCallable 
/// Class /Script/AudioShapes.AudioShapeLineComponent
/// Size: 0x0030 (0x0001C8 - 0x0001F8)
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FVector)                                   StartPoint                                                  OFFSET(get<T>, {0x1C8, 24, 0, 0})
	SMember(FVector)                                   EndPoint                                                    OFFSET(get<T>, {0x1E0, 24, 0, 0})
};



	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetStartPoint
	// void SetStartPoint(FVector& InStartPoint);                                                                               // [0x2a0e0ec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetEndPoint
	// void SetEndPoint(FVector& InEndPoint);                                                                                   // [0x2a0e1e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
/// Class /Script/AudioShapes.AudioShapeLineListComponent
/// Size: 0x0018 (0x0001C8 - 0x0001E0)
class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TArray<FVector>)                           PointList                                                   OFFSET(get<T>, {0x1C8, 16, 0, 0})
	DMember(bool)                                      bClosedLoop                                                 OFFSET(get<bool>, {0x1D8, 1, 0, 0})
};



	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineListComponent.UpdatePoint
	// bool UpdatePoint(int32_t InIndex, FVector& InPoint);                                                                     // [0x6c763f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.RemovePoint
	// bool RemovePoint(int32_t InIndex);                                                                                       // [0x6c76060] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.GetPoints
	// void GetPoints(TArray<FVector>& OutPoints);                                                                              // [0x6c75fc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.AddPoint
	// int32_t AddPoint(FVector& InPoint);                                                                                      // [0x6c75dc8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
/// Class /Script/AudioShapes.AudioShapeSphereComponent
/// Size: 0x0008 (0x0001C8 - 0x0001D0)
class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x1C8, 4, 0, 0})
};



	/// Functions
	// Function /Script/AudioShapes.AudioShapeSphereComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x6c7623c] Final|Native|Public|BlueprintCallable 
/// Class /Script/AudioShapes.AudioShapeSubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UAudioShapeSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<UAudioShapeComponent*>)             AudioShapes                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<APlayerController*>)                LocalControllers                                            OFFSET(get<T>, {0x68, 16, 0, 0})
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

