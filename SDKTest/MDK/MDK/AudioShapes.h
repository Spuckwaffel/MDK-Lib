
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
	SMember(FMulticastInlineDelegate)                  OnAudibleStateChanged                                       OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(TMap<FName, UAudioComponent*>)             AudioComponents                                             OFFSET(get<T>, {0xD0, 80, 0, 0})
	CMember(TArray<APlayerController*>)                LocalControllers                                            OFFSET(get<T>, {0x120, 16, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeComponent.UpdateAudioShape
	// void UpdateAudioShape(TArray<APlayerController*>& InLocalControllers);                                                   // [0x6ed4920] Final|Native|Public|HasOutParms 
	// Function /Script/AudioShapes.AudioShapeComponent.Enable
	// void Enable();                                                                                                           // [0x5d4e118] Native|Protected|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeComponent.Disable
	// void Disable();                                                                                                          // [0x64771e4] Native|Protected|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapePrimitiveComponent
/// Size: 0x00C0 (0x000140 - 0x000200)
class UAudioShapePrimitiveComponent : public UAudioShapeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(USoundBase*)                               SoundOnEdge                                                 OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnInside                                               OFFSET(get<T>, {0x148, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInsideStateChanged                                        OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bUseOwningActorTransform                                    OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bAutoRefreshShape                                           OFFSET(get<bool>, {0x161, 1, 0, 0})
	SMember(FVector)                                   ActorTransformScale                                         OFFSET(getStruct<T>, {0x168, 24, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
	// bool GetIsPlayerInside();                                                                                                // [0x6ed43c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
	// UAudioComponent* GetInsideAudioComponent();                                                                              // [0x6ed4374] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
	// UAudioComponent* GetEdgeAudioComponent();                                                                                // [0x6ed4320] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AudioShapes.AudioShapeBoxComponent
/// Size: 0x0060 (0x000200 - 0x000260)
class UAudioShapeBoxComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FTransform)                                BoxTransform                                                OFFSET(getStruct<T>, {0x200, 96, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeBoxComponent.SetBoxTransform
	// void SetBoxTransform(FTransform& InTransform);                                                                           // [0x6ed4528] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeCylinderComponent
/// Size: 0x0000 (0x000200 - 0x000200)
class UAudioShapeCylinderComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:


	/// Functions
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x6ed47c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
	// void SetHalfHeight(float InHalfHeight);                                                                                  // [0x6ed4734] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeLineComponent
/// Size: 0x0030 (0x000200 - 0x000230)
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FVector)                                   StartPoint                                                  OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FVector)                                   EndPoint                                                    OFFSET(getStruct<T>, {0x210, 24, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetStartPoint
	// void SetStartPoint(FVector& InStartPoint);                                                                               // [0x6ed484c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineComponent.SetEndPoint
	// void SetEndPoint(FVector& InEndPoint);                                                                                   // [0x6ed4660] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeLineListComponent
/// Size: 0x0010 (0x000200 - 0x000210)
class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(TArray<FVector>)                           PointList                                                   OFFSET(get<T>, {0x1F8, 16, 0, 0})
	DMember(bool)                                      bClosedLoop                                                 OFFSET(get<bool>, {0x208, 1, 0, 0})


	/// Functions
	// Function /Script/AudioShapes.AudioShapeLineListComponent.UpdatePoint
	// bool UpdatePoint(int32_t InIndex, FVector& InPoint);                                                                     // [0x6ed49bc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.RemovePoint
	// bool RemovePoint(int32_t InIndex);                                                                                       // [0x6ed4484] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.GetPoints
	// void GetPoints(TArray<FVector>& OutPoints);                                                                              // [0x6ed43e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioShapes.AudioShapeLineListComponent.AddPoint
	// int32_t AddPoint(FVector& InPoint);                                                                                      // [0x6ed4210] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AudioShapes.AudioShapeSphereComponent
/// Size: 0x0000 (0x000200 - 0x000200)
class UAudioShapeSphereComponent : public UAudioShapePrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:


	/// Functions
	// Function /Script/AudioShapes.AudioShapeSphereComponent.SetRadius
	// void SetRadius(float InRadius);                                                                                          // [0x6ed4734] Final|Native|Public|BlueprintCallable 
};

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

