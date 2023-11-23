
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Paper2D.PaperCharacter
/// Size: 0x0010 (0x000660 - 0x000670)
class APaperCharacter : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(UPaperFlipbookComponent*)                  Sprite                                                      OFFSET(get<T>, {0x660, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbook
/// Size: 0x0028 (0x000028 - 0x000050)
class UPaperFlipbook : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     FramesPerSecond                                             OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(TArray<FPaperFlipbookKeyFrame>)            Keyframes                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMaterial                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TEnumAsByte<EFlipbookCollisionMode>)       CollisionSource                                             OFFSET(get<T>, {0x48, 1, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperFlipbook.IsValidKeyFrameIndex
	// bool IsValidKeyFrameIndex(int32_t Index);                                                                                // [0x6a0e3ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetTotalDuration
	// float GetTotalDuration();                                                                                                // [0x6a0e374] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtTime
	// UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds);                                                            // [0x6a0d888] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetSpriteAtFrame
	// UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex);                                                                      // [0x6a0d7fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumKeyFrames
	// int32_t GetNumKeyFrames();                                                                                               // [0x5adf300] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0x6a0d76c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
	// int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds);                                                           // [0x6a0d4a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Paper2D.PaperFlipbookActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperFlipbookActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperFlipbookComponent*)                  RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperFlipbookComponent
/// Size: 0x0050 (0x0005B0 - 0x000600)
class UPaperFlipbookComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(UPaperFlipbook*)                           SourceFlipbook                                              OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x5B8, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x5C0, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x5C4, 1, 1, 0})
	DMember(bool)                                      bReversePlayback                                            OFFSET(get<bool>, {0x5C4, 1, 1, 1})
	DMember(bool)                                      bPlaying                                                    OFFSET(get<bool>, {0x5C4, 1, 1, 2})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0x5C8, 4, 0, 0})
	DMember(int32_t)                                   CachedFrameIndex                                            OFFSET(get<int32_t>, {0x5CC, 4, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	CMember(UBodySetup*)                               CachedBodySetup                                             OFFSET(get<T>, {0x5E0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishedPlaying                                           OFFSET(getStruct<T>, {0x5E8, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperFlipbookComponent.Stop
	// void Stop();                                                                                                             // [0x6a0fc70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0x6a0f418] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlayRate
	// void SetPlayRate(float NewRate);                                                                                         // [0x6a0f204] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
	// void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents);                                            // [0x6a0f344] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetPlaybackPosition
	// void SetPlaybackPosition(float NewPosition, bool bFireEvents);                                                           // [0x6a0f284] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetNewTime
	// void SetNewTime(float NewTime);                                                                                          // [0x6a0f184] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetLooping
	// void SetLooping(bool bNewLooping);                                                                                       // [0x6a0f0f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.SetFlipbook
	// bool SetFlipbook(UPaperFlipbook* NewFlipbook);                                                                           // [0x6a0ec14] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.ReverseFromEnd
	// void ReverseFromEnd();                                                                                                   // [0x6a0eb04] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Reverse
	// void Reverse();                                                                                                          // [0x6a0eaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.PlayFromStart
	// void PlayFromStart();                                                                                                    // [0x6a0e95c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.Play
	// void Play();                                                                                                             // [0x6a0e948] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
	// void OnRep_SourceFlipbook(UPaperFlipbook* OldFlipbook);                                                                  // [0x6a0e89c] Final|Native|Protected 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsReversing
	// bool IsReversing();                                                                                                      // [0x6a0e3cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x6a0e3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.IsLooping
	// bool IsLooping();                                                                                                        // [0x6a0e394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetSpriteColor
	// FLinearColor GetSpriteColor();                                                                                           // [0x6a0d950] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlayRate
	// float GetPlayRate();                                                                                                     // [0x6a0d78c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
	// int32_t GetPlaybackPositionInFrames();                                                                                   // [0x6a0d7a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetPlaybackPosition
	// float GetPlaybackPosition();                                                                                             // [0x6a0d2cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
	// int32_t GetFlipbookLengthInFrames();                                                                                     // [0x6a0d2ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookLength
	// float GetFlipbookLength();                                                                                               // [0x6a0d28c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
	// float GetFlipbookFramerate();                                                                                            // [0x6a0d26c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperFlipbookComponent.GetFlipbook
	// UPaperFlipbook* GetFlipbook();                                                                                           // [0x6a0d244] Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/Paper2D.PaperGroupedSpriteActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperGroupedSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperGroupedSpriteComponent*)             RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperGroupedSpriteComponent
/// Size: 0x0030 (0x0005B0 - 0x0005E0)
class UPaperGroupedSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(TArray<UMaterialInterface*>)               InstanceMaterials                                           OFFSET(get<T>, {0x5B0, 16, 0, 0})
	CMember(TArray<FSpriteInstanceData>)               PerInstanceSpriteData                                       OFFSET(get<T>, {0x5C0, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
	// bool UpdateInstanceTransform(int32_t InstanceIndex, FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // [0x6a0ff10] Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
	// bool UpdateInstanceColor(int32_t InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);              // [0x6a0fc88] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
	// void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);                                                                 // [0x6a0fb20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.RemoveInstance
	// bool RemoveInstance(int32_t InstanceIndex);                                                                              // [0x6a0e99c] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
	// bool GetInstanceTransform(int32_t InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace);                    // [0x6a0d2e4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
	// int32_t GetInstanceCount();                                                                                              // [0x6a0d2cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.ClearInstances
	// void ClearInstances();                                                                                                   // [0x6a0d068] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperGroupedSpriteComponent.AddInstance
	// int32_t AddInstance(FTransform& Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);                  // [0x6a0c8d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UPaperSprite : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UTexture*>)                         AdditionalSourceTextures                                    OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FVector2D)                                 BakedSourceUV                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FVector2D)                                 BakedSourceDimension                                        OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(UTexture2D*)                               BakedSourceTexture                                          OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultMaterial                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UMaterialInterface*)                       AlternateMaterial                                           OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TArray<FPaperSpriteSocket>)                Sockets                                                     OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         OFFSET(get<float>, {0x94, 4, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(int32_t)                                   AlternateMaterialSplitIndex                                 OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<FVector4>)                          BakedRenderData                                             OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/Paper2D.PaperSpriteActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperSpriteActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperSpriteComponent*)                    RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
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
};

/// Class /Script/Paper2D.PaperSpriteComponent
/// Size: 0x0020 (0x0005B0 - 0x0005D0)
class UPaperSpriteComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(UPaperSprite*)                             SourceSprite                                                OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UMaterialInterface*)                       MaterialOverride                                            OFFSET(get<T>, {0x5B8, 8, 0, 0})
	SMember(FLinearColor)                              SpriteColor                                                 OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperSpriteComponent.SetSpriteColor
	// void SetSpriteColor(FLinearColor NewColor);                                                                              // [0x6a0f55c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.SetSprite
	// bool SetSprite(UPaperSprite* NewSprite);                                                                                 // [0x6a0ec14] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperSpriteComponent.GetSprite
	// UPaperSprite* GetSprite();                                                                                               // [0x6a0d244] Native|Public|BlueprintCallable|BlueprintPure 
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
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UPaperTileMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(int32_t)                                   MapWidth                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(float)                                     PixelsPerUnrealUnit                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SeparationPerTileX                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SeparationPerTileY                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SeparationPerLayer                                          OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(TWeakObjectPtr<UPaperTileSet*>)            SelectedTileSet                                             OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<UPaperTileLayer*>)                  TileLayers                                                  OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(TEnumAsByte<ETileMapProjectionMode>)       ProjectionMode                                              OFFSET(get<T>, {0x85, 1, 0, 0})
	DMember(int32_t)                                   HexSideLength                                               OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(UBodySetup*)                               BodySetup                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(int32_t)                                   LayerNameIndex                                              OFFSET(get<int32_t>, {0x98, 4, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapActor
/// Size: 0x0008 (0x000290 - 0x000298)
class APaperTileMapActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UPaperTileMapComponent*)                   RenderComponent                                             OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTileMapComponent
/// Size: 0x0050 (0x0005B0 - 0x000600)
class UPaperTileMapComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	DMember(int32_t)                                   MapWidth                                                    OFFSET(get<int32_t>, {0x5B0, 4, 0, 0})
	DMember(int32_t)                                   MapHeight                                                   OFFSET(get<int32_t>, {0x5B4, 4, 0, 0})
	DMember(int32_t)                                   TileWidth                                                   OFFSET(get<int32_t>, {0x5B8, 4, 0, 0})
	DMember(int32_t)                                   TileHeight                                                  OFFSET(get<int32_t>, {0x5BC, 4, 0, 0})
	CMember(UPaperTileSet*)                            DefaultLayerTileSet                                         OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(TArray<UPaperTileLayer*>)                  TileLayers                                                  OFFSET(get<T>, {0x5D0, 16, 0, 0})
	SMember(FLinearColor)                              TileMapColor                                                OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	DMember(int32_t)                                   UseSingleLayerIndex                                         OFFSET(get<int32_t>, {0x5F0, 4, 0, 0})
	DMember(bool)                                      bUseSingleLayer                                             OFFSET(get<bool>, {0x5F4, 1, 0, 0})
	CMember(UPaperTileMap*)                            TileMap                                                     OFFSET(get<T>, {0x5F8, 8, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMapColor
	// void SetTileMapColor(FLinearColor NewColor);                                                                             // [0x6a0f9dc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTileMap
	// bool SetTileMap(UPaperTileMap* NewTileMap);                                                                              // [0x6a0ec14] Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetTile
	// void SetTile(int32_t X, int32_t Y, int32_t Layer, FPaperTileInfo NewValue);                                              // [0x6a0f7e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerColor
	// void SetLayerColor(FLinearColor NewColor, int32_t Layer);                                                                // [0x6a0eecc] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetLayerCollision
	// void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // [0x6a0eca8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
	// void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision);                                              // [0x6a0eb38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.ResizeMap
	// void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles);                                                       // [0x6a0ea30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.RebuildCollision
	// void RebuildCollision();                                                                                                 // [0x6a0e988] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.OwnsTileMap
	// bool OwnsTileMap();                                                                                                      // [0x6a0e928] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.MakeTileMapEditable
	// void MakeTileMapEditable();                                                                                              // [0x6a0e83c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTilePolygon
	// void GetTilePolygon(int32_t TileX, int32_t TileY, TArray<FVector>& Points, int32_t LayerIndex, bool bWorldSpace);        // [0x6a0dd6c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileMapColor
	// FLinearColor GetTileMapColor();                                                                                          // [0x6a0dd50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCornerPosition
	// FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0x6a0dbfc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTileCenterPosition
	// FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace);                       // [0x6a0daa8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetTile
	// FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer);                                                             // [0x6a0d96c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.GetMapSize
	// void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers);                                              // [0x6a0d618] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.GetLayerColor
	// FLinearColor GetLayerColor(int32_t Layer);                                                                               // [0x6a0d56c] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Paper2D.PaperTileMapComponent.CreateNewTileMap
	// void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // [0x6a0d080] Final|Native|Public|BlueprintCallable 
	// Function /Script/Paper2D.PaperTileMapComponent.AddNewLayer
	// UPaperTileLayer* AddNewLayer();                                                                                          // [0x6a0cbe8] Final|Native|Public|BlueprintCallable 
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

/// Class /Script/Paper2D.MaterialExpressionSpriteTextureSampler
/// Size: 0x0020 (0x000238 - 0x000258)
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	DMember(bool)                                      bSampleAdditionalTextures                                   OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(int32_t)                                   AdditionalSlotIndex                                         OFFSET(get<int32_t>, {0x23C, 4, 0, 0})
	SMember(FText)                                     SlotDisplayName                                             OFFSET(getStruct<T>, {0x240, 24, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class APaperTerrainActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(USceneComponent*)                          DummyRoot                                                   OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UPaperTerrainSplineComponent*)             SplineComponent                                             OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UPaperTerrainComponent*)                   RenderComponent                                             OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/Paper2D.PaperTerrainComponent
/// Size: 0x0050 (0x000580 - 0x0005D0)
class UPaperTerrainComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(UPaperTerrainMaterial*)                    TerrainMaterial                                             OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(bool)                                      bClosedSpline                                               OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      bFilledSpline                                               OFFSET(get<bool>, {0x581, 1, 0, 0})
	CMember(UPaperTerrainSplineComponent*)             AssociatedSpline                                            OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(float)                                     SegmentOverlapAmount                                        OFFSET(get<float>, {0x594, 4, 0, 0})
	SMember(FLinearColor)                              TerrainColor                                                OFFSET(getStruct<T>, {0x598, 16, 0, 0})
	DMember(int32_t)                                   ReparamStepsPerSegment                                      OFFSET(get<int32_t>, {0x5A8, 4, 0, 0})
	CMember(TEnumAsByte<ESpriteCollisionMode>)         SpriteCollisionDomain                                       OFFSET(get<T>, {0x5AC, 1, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x5B0, 4, 0, 0})
	CMember(UBodySetup*)                               CachedBodySetup                                             OFFSET(get<T>, {0x5B8, 8, 0, 0})


	/// Functions
	// Function /Script/Paper2D.PaperTerrainComponent.SetTerrainColor
	// void SetTerrainColor(FLinearColor NewColor);                                                                             // [0x6a0f6a0] Final|Native|Public|HasDefaults|BlueprintCallable 
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
/// Size: 0x0010 (0x000680 - 0x000690)
class UPaperTerrainSplineComponent : public USplineComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
};

/// Class /Script/Paper2D.TileMapBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
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

/// Struct /Script/Paper2D.SpriteDrawCallRecord
/// Size: 0x0140 (0x000000 - 0x000140)
class FSpriteDrawCallRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector)                                   Destination                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(UTexture*)                                 BaseTexture                                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(getStruct<T>, {0x50, 4, 0, 0})
};

/// Struct /Script/Paper2D.SpriteGeometryShape
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpriteGeometryShape : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ESpriteShapeType)                          ShapeType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FVector2D>)                         Vertices                                                    OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 BoxSize                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FVector2D)                                 BoxPosition                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bNegativeWinding                                            OFFSET(get<bool>, {0x3C, 1, 0, 0})
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

/// Struct /Script/Paper2D.SpriteAssetInitParameters
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpriteAssetInitParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
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
/// Size: 0x0090 (0x000000 - 0x000090)
class FSpriteInstanceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMatrix)                                   Transform                                                   OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	CMember(UPaperSprite*)                             SourceSprite                                                OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteSocket
/// Size: 0x0070 (0x000000 - 0x000070)
class FPaperSpriteSocket : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x60, 4, 0, 0})
};

/// Struct /Script/Paper2D.PaperSpriteAtlasSlot
/// Size: 0x0038 (0x000000 - 0x000038)
class FPaperSpriteAtlasSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UPaperSprite*>)             SpriteRef                                                   OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   AtlasIndex                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   X                                                           OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Width                                                       OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      OFFSET(get<int32_t>, {0x30, 4, 0, 0})
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

/// Struct /Script/Paper2D.PaperTileMetadata
/// Size: 0x0040 (0x000000 - 0x000040)
class FPaperTileMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     UserDataName                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FSpriteGeometryCollection)                 CollisionData                                               OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(char)                                      TerrainMembership                                           OFFSET(get<char>, {0x38, 4, 0, 0})
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

/// Enum /Script/Paper2D.ESpriteCollisionMode
/// Size: 0x04
enum ESpriteCollisionMode : uint8_t
{
	ESpriteCollisionMode__None0                                                      = 0,
	ESpriteCollisionMode__Use2DPhysics1                                              = 1,
	ESpriteCollisionMode__Use3DPhysics2                                              = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX3                                  = 3
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

