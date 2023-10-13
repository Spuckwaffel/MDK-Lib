
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler
/// Size: 0x0020 (0x0001A8 - 0x0001C8)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	DMember(bool)                                      bSampleAdditionalTextures                                   OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(int32_t)                                   AdditionalSlotIndex                                         OFFSET(get<int32_t>, {0x1AC, 4, 0, 0})
	SMember(FText)                                     SlotDisplayName                                             OFFSET(getStruct<T>, {0x1B0, 24, 0, 0})
};

/// Class /Script/Paper2D.PaperCharacter
/// Size: 0x0010 (0x000730 - 0x000740)
class APaperCharacter : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	CMember(UPaperFlipbookComponent*)                  Sprite                                                      OFFSET(get<T>, {0x730, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbook
/// Size: 0x0028 (0x000028 - 0x000050)
class UPaperFlipbook : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     FramesPerSecond                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TArray<FPaperFlipbookKeyFrame>)            KeyFrames                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMaterial                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TEnumAsByte<EFlipbookCollisionMode>)       CollisionSource                                             OFFSET(get<T>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	// bool IsValidKeyFrameIndex(int32_t Index);                                                                                // [0x6b4430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetTotalDuration
	// float GetTotalDuration();                                                                                                // [0x6b4370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtTime
	// UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);                                                            // [0x6b3b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtFrame
	// UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);                                                                      // [0x6b3ae0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumKeyFrames
	// int32_t GetNumKeyFrames();                                                                                               // [0x6b3a30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0x6b3a00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	// int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);                                                           // [0x6b3750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Paper2D.PaperFlipbookActor
/// Size: 0x0008 (0x000318 - 0x000320)
class APaperFlipbookActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UPaperFlipbookComponent*)                  RenderComponent                                             OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbookComponent
/// Size: 0x0040 (0x000670 - 0x0006B0)
class UPaperFlipbookComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	CMember(UPaperFlipbook*)                           SourceFlipbook                                              OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x670, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x67C, 1, 1, 0})
	DMember(bool)                                      bReversePlayback                                            OFFSET(get<bool>, {0x67C, 1, 1, 1})
	DMember(bool)                                      bPlaying                                                    OFFSET(get<bool>, {0x67C, 1, 1, 2})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0x680, 4, 0, 0})
	DMember(int32_t)                                   CachedFrameIndex                                            OFFSET(get<int32_t>, {0x684, 4, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 OFFSET(getStruct<T>, {0x688, 16, 0, 0})
	CMember(UBodySetup*)                               CachedBodySetup                                             OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UMulticastDelegate)                        OnFinishedPlaying                                           OFFSET(get<T>, {0x6A0, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperFlipbookComponent.Stop
	// void Stop();                                                                                                             // [0x6b55b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0x6b51c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlayRate
	// void SetPlayRate(float NewRate);                                                                                         // [0x6b4fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	// void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);                                            // [0x6b5100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	// void SetPlaybackPosition(float NewPosition, bool bFireEvents);                                                           // [0x6b5030] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetNewTime
	// void SetNewTime(float NewTime);                                                                                          // [0x6b4f30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x6b4ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetFlipbook
	// bool SetFlipbook(UPaperFlipbook* NewFlipbook);                                                                           // [0x2729990] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.ReverseFromEnd
	// void ReverseFromEnd();                                                                                                   // [0x6b4ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Reverse
	// void Reverse();                                                                                                          // [0x6b4aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x6b4900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Play
	// void Play();                                                                                                             // [0x6b48e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	// void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);                                                                  // [0x6b4830] Final|Native|Protected 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsReversing
	// bool IsReversing();                                                                                                      // [0x6b4400] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x6b43d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x6b43a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0x6b3a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	// int32_t GetPlaybackPositionInFrames();                                                                                   // [0x6b3ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	// float GetPlaybackPosition();                                                                                             // [0x6b3a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	// int32_t GetFlipbookLengthInFrames();                                                                                     // [0x6b3590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLength
	// float GetFlipbookLength();                                                                                               // [0x6b3560] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	// float GetFlipbookFramerate();                                                                                            // [0x6b3530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbook
	// UPaperFlipbook* GetFlipbook();                                                                                           // [0x6b3500] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperGroupedSpriteActor
/// Size: 0x0008 (0x000318 - 0x000320)
class APaperGroupedSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UPaperGroupedSpriteComponent*)             RenderComponent                                             OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperGroupedSpriteComponent
/// Size: 0x0030 (0x000670 - 0x0006A0)
class UPaperGroupedSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	CMember(TArray<UMaterialInterface*>)               InstanceMaterials                                           OFFSET(get<T>, {0x668, 16, 0, 0})
	CMember(TArray<FSpriteInstanceData>)               PerInstanceSpriteData                                       OFFSET(get<T>, {0x678, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	// bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // [0x6b56e0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	// bool UpdateInstanceColor(int32_t InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);              // [0x6b55d0] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	// void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);                                                                 // [0x6b5520] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	// bool RemoveInstance(int32_t InstanceIndex);                                                                              // [0x6b4940] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	// bool GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);                    // [0x6b35f0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	// int32_t GetInstanceCount();                                                                                              // [0x6b35c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.ClearInstances
	// void ClearInstances();                                                                                                   // [0x120cb90] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.AddInstance
	// int32_t AddInstance(FTransform& Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);                  // [0x6b2f40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperRuntimeSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UPaperRuntimeSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bEnableSpriteAtlasGroups                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bEnableTerrainSplineEditing                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bResizeSpriteDataToMatchTextures                            OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/Paper2D.PaperSprite
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UPaperSprite : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector2D)                                 SourceUV                                                    OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	SMember(FVector2D)                                 SourceDimension                                             OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	CMember(UTexture2D*)                               SourceTexture                                               OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<UTexture*>)                         AdditionalSourceTextures                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FVector2D)                                 BakedSourceUV                                               OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	SMember(FVector2D)                                 BakedSourceDimension                                        OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	CMember(UTexture2D*)                               BakedSourceTexture                                          OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMaterial                                             OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UMaterialInterface*)                       AlternateMaterial                                           OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TArray<FPaperSpriteSocket>)                Sockets                                                     OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x98, 1, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         OFFSET(get<float>, {0x9C, 4, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(int32_t)                                   AlternateMaterialSplitIndex                                 OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(TArray<FVector4>)                          BakedRenderData                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperSpriteActor
/// Size: 0x0008 (0x000318 - 0x000320)
class APaperSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UPaperSpriteComponent*)                    RenderComponent                                             OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperSpriteAtlas
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteAtlas : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Paper2D.PaperSpriteBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite
	// FSlateBrush MakeBrushFromSprite(UPaperSprite* Sprite, int32_t Width, int32_t Height);                                    // [0x6b44d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperSpriteComponent
/// Size: 0x0020 (0x000670 - 0x000690)
class UPaperSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	CMember(UPaperSprite*)                             SourceSprite                                                OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride                                            OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 OFFSET(getStruct<T>, {0x678, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperSpriteComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0x6b5240] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.SetSprite
	// bool SetSprite(UPaperSprite* NewSprite);                                                                                 // [0x2729990] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.GetSprite
	// UPaperSprite* GetSprite();                                                                                               // [0x6b3500] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperTerrainActor
/// Size: 0x0018 (0x000318 - 0x000330)
class APaperTerrainActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(USceneComponent*)                          DummyRoot                                                   OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UPaperTerrainSplineComponent*)             SplineComponent                                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UPaperTerrainComponent*)                   RenderComponent                                             OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainComponent
/// Size: 0x0060 (0x000640 - 0x0006A0)
class UPaperTerrainComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	CMember(UPaperTerrainMaterial*)                    TerrainMaterial                                             OFFSET(get<T>, {0x640, 8, 0, 0})
	DMember(bool)                                      bClosedSpline                                               OFFSET(get<bool>, {0x648, 1, 0, 0})
	DMember(bool)                                      bFilledSpline                                               OFFSET(get<bool>, {0x649, 1, 0, 0})
	CMember(UPaperTerrainSplineComponent*)             AssociatedSpline                                            OFFSET(get<T>, {0x650, 8, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x658, 4, 0, 0})
	DMember(float)                                     SegmentOverlapAmount                                        OFFSET(get<float>, {0x65C, 4, 0, 0})
	SMember(FLinearColor)                              TerrainColor                                                OFFSET(getStruct<T>, {0x660, 16, 0, 0})
	DMember(int32_t)                                   ReparamStepsPerSegment                                      OFFSET(get<int32_t>, {0x670, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x674, 1, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x678, 4, 0, 0})
	CMember(UBodySetup*)                               CachedBodySetup                                             OFFSET(get<T>, {0x680, 8, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperTerrainComponent.SetTerrainColor
	// void SetTerrainColor(FLinearColor NewColor);                                                                             // [0x6b52c0] Final|Native|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperTerrainMaterial
/// Size: 0x0018 (0x000030 - 0x000048)
class UPaperTerrainMaterial : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPaperTerrainMaterialRule>)         Rules                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UPaperSprite*)                             InteriorFill                                                OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainSplineComponent
/// Size: 0x0040 (0x000730 - 0x000770)
class UPaperTerrainSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
};

/// Class /Script/Paper2D.PaperTileLayer
/// Size: 0x0070 (0x000028 - 0x000098)
class UPaperTileLayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FText)                                     LayerName                                                   OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   LayerWidth                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   LayerHeight                                                 OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bHiddenInGame                                               OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bLayerCollides                                              OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverrideCollisionThickness                                 OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideCollisionOffset                                    OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(float)                                     CollisionThicknessOverride                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     CollisionOffsetOverride                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FLinearColor)                              LayerColor                                                  OFFSET(getStruct<T>, {0x54, 16, 0, 0})
	DMember(int32_t)                                   AllocatedWidth                                              OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   AllocatedHeight                                             OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	CMember(TArray<FPaperTileInfo>)                    AllocatedCells                                              OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UPaperTileSet*)                            TileSet                                                     OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TArray<int32_t>)                           AllocatedGrid                                               OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMap
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPaperTileMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   MapWidth                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SeparationPerTileX                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SeparationPerTileY                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SeparationPerLayer                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(UPaperTileSet*)                            SelectedTileSet                                             OFFSET(get<T>, {0x48, 40, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<UPaperTileLayer*>)                  TileLayers                                                  OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x8C, 1, 0, 0})
	CMember(TEnumAsByte<ETileMapProjectionMode>)       ProjectionMode                                              OFFSET(get<T>, {0x8D, 1, 0, 0})
	DMember(int32_t)                                   HexSideLength                                               OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(int32_t)                                   LayerNameIndex                                              OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapActor
/// Size: 0x0008 (0x000318 - 0x000320)
class APaperTileMapActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UPaperTileMapComponent*)                   RenderComponent                                             OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapComponent
/// Size: 0x0050 (0x000670 - 0x0006C0)
class UPaperTileMapComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1728;

public:
	DMember(int32_t)                                   MapWidth                                                    OFFSET(get<int32_t>, {0x668, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   OFFSET(get<int32_t>, {0x66C, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x670, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x674, 4, 0, 0})
	CMember(UPaperTileSet*)                            DefaultLayerTileSet                                         OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(TArray<UPaperTileLayer*>)                  TileLayers                                                  OFFSET(get<T>, {0x688, 16, 0, 0})
	SMember(FLinearColor)                              TileMapColor                                                OFFSET(getStruct<T>, {0x698, 16, 0, 0})
	DMember(int32_t)                                   UseSingleLayerIndex                                         OFFSET(get<int32_t>, {0x6A8, 4, 0, 0})
	DMember(bool)                                      bUseSingleLayer                                             OFFSET(get<bool>, {0x6AC, 1, 0, 0})
	CMember(UPaperTileMap*)                            TileMap                                                     OFFSET(get<T>, {0x6B0, 8, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMapColor
	// void SetTileMapColor(FLinearColor NewColor);                                                                             // [0x6b54a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMap
	// bool SetTileMap(UPaperTileMap* NewTileMap);                                                                              // [0x2729990] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTile
	// void SetTile(int32_t X, int32_t Y, int32_t Layer, FPaperTileInfo NewValue);                                              // [0x6b5340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerColor
	// void SetLayerColor(FLinearColor NewColor, int32_t Layer);                                                                // [0x6b4dd0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerCollision
	// void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // [0x6b4bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	// void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);                                              // [0x6b4ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.ResizeMap
	// void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);                                                       // [0x6b49e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.RebuildCollision
	// void RebuildCollision();                                                                                                 // [0x6b4920] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.OwnsTileMap
	// bool OwnsTileMap();                                                                                                      // [0x6b48b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.MakeTileMapEditable
	// void MakeTileMapEditable();                                                                                              // [0x6b4810] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTilePolygon
	// void GetTilePolygon(int32_t TileX, int32_t TileY, TArray<FVector>& Points, int32_t LayerIndex, bool bWorldSpace);        // [0x6b4050] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileMapColor
	// FLinearColor GetTileMapColor();                                                                                          // [0x6b4010] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCornerPosition
	// FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0x6b3eb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCenterPosition
	// FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0x6b3d50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTile
	// FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);                                                             // [0x6b3c40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetMapSize
	// void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);                                              // [0x6b38c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetLayerColor
	// FLinearColor GetLayerColor(int32_t Layer);                                                                               // [0x6b3820] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.CreateNewTileMap
	// void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // [0x6b3350] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.AddNewLayer
	// UPaperTileLayer* AddNewLayer();                                                                                          // [0x6b3100] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Paper2D.PaperTileSet
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPaperTileSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FIntPoint)                                 TileSize                                                    OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               TileSheet                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<UTexture*>)                         AdditionalSourceTextures                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FIntMargin)                                BorderMargin                                                OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FIntPoint)                                 PerTileSpacing                                              OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	SMember(FIntPoint)                                 DrawingOffset                                               OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	DMember(int32_t)                                   WidthInTiles                                                OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   HeightInTiles                                               OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   AllocatedWidth                                              OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   AllocatedHeight                                             OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	CMember(TArray<FPaperTileMetadata>)                PerTileData                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FPaperTileSetTerrain>)              Terrains                                                    OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(int32_t)                                   Margin                                                      OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   Spacing                                                     OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
};

/// Class /Script/Paper2D.TileMapBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Paper2D.TileMapBlueprintLibrary.MakeTile
	// FPaperTileInfo MakeTile(int32_t TileIndex, UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD);               // [0x6b4660] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileUserData
	// FName GetTileUserData(FPaperTileInfo Tile);                                                                              // [0x6b42d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.GetTileTransform
	// FTransform GetTileTransform(FPaperTileInfo Tile);                                                                        // [0x6b4200] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Paper2D.TileMapBlueprintLibrary.BreakTile
	// void BreakTile(FPaperTileInfo Tile, int32_t& TileIndex, UPaperTileSet*& TileSet, bool& bFlipH, bool& bFlipV, bool& bFlipD); // [0x6b3130] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/Paper2D.IntMargin
/// Size: 0x0010 (0x000000 - 0x000010)
class FIntMargin : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Left                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Top                                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Right                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Bottom                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperFlipbookKeyFrame
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaperFlipbookKeyFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UPaperSprite*)                             Sprite                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   FrameRun                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FSpriteInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FMatrix)                                   Transform                                                   OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	CMember(UPaperSprite*)                             SourceSprite                                                OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteSocket
/// Size: 0x0040 (0x000000 - 0x000040)
class FPaperSpriteSocket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteAtlasSlot
/// Size: 0x0040 (0x000000 - 0x000040)
class FPaperSpriteAtlasSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UPaperSprite*)                             SpriteRef                                                   OFFSET(get<T>, {0x0, 40, 0, 0})
	DMember(int32_t)                                   AtlasIndex                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTerrainMaterialRule
/// Size: 0x0038 (0x000000 - 0x000038)
class FPaperTerrainMaterialRule : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UPaperSprite*)                             StartCap                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UPaperSprite*>)                     Body                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(UPaperSprite*)                             EndCap                                                      OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     MinimumAngle                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaximumAngle                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     CollisionOffset                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   DrawOrder                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FPaperTileInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UPaperTileSet*)                            TileSet                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PackedTileIndex                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileSetTerrain
/// Size: 0x0018 (0x000000 - 0x000018)
class FPaperTileSetTerrain : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   TerrainName                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   CenterTileIndex                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperTileMetadata
/// Size: 0x0040 (0x000000 - 0x000040)
class FPaperTileMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     UserDataName                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FSpriteGeometryCollection)                 CollisionData                                               OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(unsigned char)                             TerrainMembership                                           OFFSET(get<unsigned char>, {0x38, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteGeometryCollection
/// Size: 0x0030 (0x000000 - 0x000030)
class FSpriteGeometryCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FSpriteGeometryShape>)              Shapes                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<ESpritePolygonMode>)           GeometryType                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   PixelsPerSubdivisionX                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   PixelsPerSubdivisionY                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bAvoidVertexMerging                                         OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     AlphaThreshold                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DetailAmount                                                OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     SimplifyEpsilon                                             OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteGeometryShape
/// Size: 0x0030 (0x000000 - 0x000030)
class FSpriteGeometryShape : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ESpriteShapeType)                          ShapeType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FVector2D>)                         Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 BoxSize                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FVector2D)                                 BoxPosition                                                 OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bNegativeWinding                                            OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/Paper2D.SpriteDrawCallRecord
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSpriteDrawCallRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FVector)                                   Destination                                                 OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(UTexture*)                                 BaseTexture                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteAssetInitParameters
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpriteAssetInitParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Enum /Script/Paper2D.EFlipbookCollisionMode
/// Size: 0x04
enum EFlipbookCollisionMode : uint8_t
{
	EFlipbookCollisionMode__NoCollision0                                             = 0,
	EFlipbookCollisionMode__FirstFrameCollision1                                     = 1,
	EFlipbookCollisionMode__EachFrameCollision2                                      = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX3                              = 3
};

/// Enum /Script/Paper2D.EPaperSpriteAtlasPadding
/// Size: 0x03
enum EPaperSpriteAtlasPadding : uint8_t
{
	EPaperSpriteAtlasPadding__DilateBorder0                                          = 0,
	EPaperSpriteAtlasPadding__PadWithZero1                                           = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX2                          = 2
};

/// Enum /Script/Paper2D.ETileMapProjectionMode
/// Size: 0x05
enum ETileMapProjectionMode : uint8_t
{
	ETileMapProjectionMode__Orthogonal0                                              = 0,
	ETileMapProjectionMode__IsometricDiamond1                                        = 1,
	ETileMapProjectionMode__IsometricStaggered2                                      = 2,
	ETileMapProjectionMode__HexagonalStaggered3                                      = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX4                              = 4
};

/// Enum /Script/Paper2D.ESpritePivotMode
/// Size: 0x11
enum ESpritePivotMode : uint8_t
{
	ESpritePivotMode__Top_Left0                                                      = 0,
	ESpritePivotMode__Top_Center1                                                    = 1,
	ESpritePivotMode__Top_Right2                                                     = 2,
	ESpritePivotMode__Center_Left3                                                   = 3,
	ESpritePivotMode__Center_Center4                                                 = 4,
	ESpritePivotMode__Center_Right5                                                  = 5,
	ESpritePivotMode__Bottom_Left6                                                   = 6,
	ESpritePivotMode__Bottom_Center7                                                 = 7,
	ESpritePivotMode__Bottom_Right8                                                  = 8,
	ESpritePivotMode__Custom9                                                        = 9,
	ESpritePivotMode__ESpritePivotMode_MAX10                                         = 10
};

/// Enum /Script/Paper2D.ESpritePolygonMode
/// Size: 0x06
enum ESpritePolygonMode : uint8_t
{
	ESpritePolygonMode__SourceBoundingBox0                                           = 0,
	ESpritePolygonMode__TightBoundingBox1                                            = 1,
	ESpritePolygonMode__ShrinkWrapped2                                               = 2,
	ESpritePolygonMode__FullyCustom3                                                 = 3,
	ESpritePolygonMode__Diced4                                                       = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX5                                      = 5
};

/// Enum /Script/Paper2D.ESpriteShapeType
/// Size: 0x04
enum ESpriteShapeType : uint8_t
{
	ESpriteShapeType__Box0                                                           = 0,
	ESpriteShapeType__Circle1                                                        = 1,
	ESpriteShapeType__Polygon2                                                       = 2,
	ESpriteShapeType__ESpriteShapeType_MAX3                                          = 3
};

/// Enum /Script/Paper2D.ESpriteCollisionMode
/// Size: 0x04
enum ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None0                                                      = 0,
	ESpriteCollisionMode__Use2DPhysics1                                              = 1,
	ESpriteCollisionMode__Use3DPhysics2                                              = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX3                                  = 3
};

