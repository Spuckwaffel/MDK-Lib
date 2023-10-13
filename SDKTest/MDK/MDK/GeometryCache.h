
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GeometryCache.GeometryCache
/// Size: 0x0038 (0x000028 - 0x000060)
class UGeometryCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<UMaterialInterface*>)               Materials                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UGeometryCacheTrack*>)              Tracks                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GeometryCache.GeometryCacheActor
/// Size: 0x0008 (0x000318 - 0x000320)
class AGeometryCacheActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UGeometryCacheComponent*)                  GeometryCacheComponent                                      OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
	// UGeometryCacheComponent* GetGeometryCacheComponent();                                                                    // [0x1f5ee40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheComponent
/// Size: 0x0070 (0x000670 - 0x0006E0)
class UGeometryCacheComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(UGeometryCache*)                           GeometryCache                                               OFFSET(get<T>, {0x668, 8, 0, 0})
	DMember(bool)                                      bRunning                                                    OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x671, 1, 0, 0})
	DMember(float)                                     StartTimeOffset                                             OFFSET(get<float>, {0x674, 4, 0, 0})
	DMember(float)                                     PlaybackSpeed                                               OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(int32_t)                                   NumTracks                                                   OFFSET(get<int32_t>, {0x67C, 4, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x680, 4, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheComponent.Stop
	// void Stop();                                                                                                             // [0x1f5f290] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetStartTimeOffset
	// void SetStartTimeOffset(float NewStartTimeOffset);                                                                       // [0x1f5f210] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
	// void SetPlaybackSpeed(float NewPlaybackSpeed);                                                                           // [0x1f5f190] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x1f5efd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.SetGeometryCache
	// bool SetGeometryCache(UGeometryCache* NewGeomCache);                                                                     // [0x2729990] Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
	// void PlayReversedFromEnd();                                                                                              // [0x1f5efb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayReversed
	// void PlayReversed();                                                                                                     // [0x1f5ef90] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x1f5ef70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Play
	// void Play();                                                                                                             // [0x1f5ef50] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.Pause
	// void Pause();                                                                                                            // [0x1f5ef30] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlayingReversed
	// bool IsPlayingReversed();                                                                                                // [0x1f5ef00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x1f5eed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x1f5eea0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetStartTimeOffset
	// float GetStartTimeOffset();                                                                                              // [0x1136310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
	// float GetPlaybackSpeed();                                                                                                // [0x1f5ee70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCache.GeometryCacheTrack
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCacheTrack : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation
/// Size: 0x0028 (0x000050 - 0x000078)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  NumMeshSamples                                              OFFSET(get<uint32_t>, {0x50, 4, 0, 0})


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
	// void AddMeshSample(FGeometryCacheMeshData& MeshData, float SampleTime);                                                  // [0x1f5ecd0] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformAnimation
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x1f5f060] Final|Native|Public|HasOutParms 
};

/// Class /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Script/GeometryCache.GeometryCacheTrack_TransformGroupAnimation.SetMesh
	// void SetMesh(FGeometryCacheMeshData& NewMeshData);                                                                       // [0x1f5f060] Final|Native|Public|HasOutParms 
};

/// Struct /Script/GeometryCache.TrackRenderData
/// Size: 0x0050 (0x000000 - 0x000050)
class FTrackRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGeometryCacheMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/GeometryCache.GeometryCacheMeshBatchInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCacheMeshBatchInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

