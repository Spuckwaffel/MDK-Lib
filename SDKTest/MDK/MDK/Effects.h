
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C
/// Size: 0x0230 (0x000318 - 0x000548)
class ABP_SplineVolumeTrail_v1b_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UArrowComponent*)                          DebugArrow                                                  OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           DebugRotateTimeline__Direction_A8B473E74A53FB0F346216B4D4D23AC9 OFFSET(get<T>, {0x330, 1, 0, 0})
	CMember(UTimelineComponent*)                       DebugRotateTimeline                                         OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USplineComponent*)                         Spline                                                      OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Skeletal_Mesh                                               OFFSET(get<T>, {0x348, 8, 0, 0})
	SMember(FName)                                     Socket_Attach_Point                                         OFFSET(getStruct<T>, {0x350, 8, 0, 0})
	CMember(UStaticMesh*)                              SplineMeshTemplate                                          OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UMaterialInterface*)                       SplineMeshMaterialOverride                                  OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UParticleSystem*)                          Particles                                                   OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     LifeTime                                                    OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     Lifetime_Buffer                                             OFFSET(get<float>, {0x374, 4, 0, 0})
	DMember(float)                                     SplineSystemDuration                                        OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     LifetimeAfterCompletion                                     OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(bool)                                      KeepTickEnabledWhenCompleting                               OFFSET(get<bool>, {0x380, 1, 0, 0})
	DMember(int32_t)                                   NumberOfSplineMeshesToUpdate                                OFFSET(get<int32_t>, {0x384, 4, 0, 0})
	DMember(float)                                     Initial_Size                                                OFFSET(get<float>, {0x388, 4, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             SplineMeshes                                                OFFSET(get<T>, {0x390, 16, 0, 0})
	DMember(float)                                     SplineDistanceThreshold                                     OFFSET(get<float>, {0x3A0, 4, 0, 0})
	DMember(float)                                     SplineDistanceThresholdEmpty                                OFFSET(get<float>, {0x3A4, 4, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             SplineMeshesHidden                                          OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TArray<float>)                             SplineTimestamps                                            OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	DMember(bool)                                      SplineSystemActive                                          OFFSET(get<bool>, {0x3CC, 1, 0, 0})
	DMember(float)                                     CompletionTimestamp                                         OFFSET(get<float>, {0x3D0, 4, 0, 0})
	DMember(float)                                     LifetimeAdjusted                                            OFFSET(get<float>, {0x3D4, 4, 0, 0})
	CMember(UCurveLinearColor*)                        SizeOverLife                                                OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MIDs                                                        OFFSET(get<T>, {0x3E0, 16, 0, 0})
	CMember(UCurveLinearColor*)                        ColorAndAlphaOverLife                                       OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticlesComponent                                          OFFSET(get<T>, {0x3F8, 8, 0, 0})
	DMember(int32_t)                                   SplineID                                                    OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	CMember(USplineMeshComponent*)                     Current_Spline_Mesh                                         OFFSET(get<T>, {0x408, 8, 0, 0})
	DMember(float)                                     Initial_Rotation__Roll_                                     OFFSET(get<float>, {0x410, 4, 0, 0})
	CMember(UCurveFloat*)                              RotationOverLife                                            OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(bool)                                      DebugMode                                                   OFFSET(get<bool>, {0x420, 1, 0, 0})
	SMember(FVector)                                   DebugPositionOffset                                         OFFSET(getStruct<T>, {0x424, 12, 0, 0})
	SMember(FRotator)                                  DebugRotationRate                                           OFFSET(getStruct<T>, {0x430, 12, 0, 0})
	DMember(float)                                     DebugTickDelta                                              OFFSET(get<float>, {0x43C, 4, 0, 0})
	DMember(float)                                     DebugPreviousTickTimestamp                                  OFFSET(get<float>, {0x440, 4, 0, 0})
	SMember(FTimerHandle)                              Spline_System_Duration_Event_Handle                         OFFSET(getStruct<T>, {0x448, 8, 0, 0})
	DMember(bool)                                      Use_Tick_Interval_LODs                                      OFFSET(get<bool>, {0x450, 1, 0, 0})
	SMember(FTimerHandle)                              Tick_Interval_Event_Handle                                  OFFSET(getStruct<T>, {0x458, 8, 0, 0})
	DMember(float)                                     Tick_Interval_LOD_Check_Rate                                OFFSET(get<float>, {0x460, 4, 0, 0})
	CMember(TArray<int32_t>)                           Tick_Interval_LOD_Distances                                 OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(TArray<float>)                             Tick_Actor_Intervals                                        OFFSET(get<T>, {0x478, 16, 0, 0})
	DMember(int32_t)                                   LOD_Array_Index                                             OFFSET(get<int32_t>, {0x488, 4, 0, 0})
	DMember(bool)                                      Use_Recently_Rendered_LOD                                   OFFSET(get<bool>, {0x48C, 1, 0, 0})
	DMember(float)                                     Recently_Rendered_Check_Rate                                OFFSET(get<float>, {0x490, 4, 0, 0})
	SMember(FTimerHandle)                              Recently_Rendered_Event_Handle                              OFFSET(getStruct<T>, {0x498, 8, 0, 0})
	DMember(bool)                                      RecentlyRendered                                            OFFSET(get<bool>, {0x4A0, 1, 0, 0})
	DMember(float)                                     Recently_Rendered_Tolerance                                 OFFSET(get<float>, {0x4A4, 4, 0, 0})
	SMember(FVector)                                   SplineDefaultUpVector                                       OFFSET(getStruct<T>, {0x4A8, 12, 0, 0})
	DMember(bool)                                      SplineDefaultUpVectorInWorldSpace                           OFFSET(get<bool>, {0x4B4, 1, 0, 0})
	CMember(TEnumAsByte<En_SplineForwardAxes_01>)      SplineMeshForwardAxis                                       OFFSET(get<T>, {0x4B5, 1, 0, 0})
	DMember(bool)                                      CeaseAndDetachSplineUponCompletion                          OFFSET(get<bool>, {0x4B6, 1, 0, 0})
	DMember(bool)                                      CanNewSplinePointsBeCreated                                 OFFSET(get<bool>, {0x4B7, 1, 0, 0})
	DMember(bool)                                      LinearColorOverLengthOfSpline                               OFFSET(get<bool>, {0x4B8, 1, 0, 0})
	CMember(TArray<int32_t>)                           IndiciesToDelete                                            OFFSET(get<T>, {0x4C0, 16, 0, 0})
	DMember(bool)                                      RedistributePointsAlongSplineWhenCreated                    OFFSET(get<bool>, {0x4D0, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 CurveBakeMID                                                OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   RenderTarget                                                OFFSET(get<T>, {0x4E0, 8, 0, 0})
	SMember(FVector2D)                                 RenderTextureResolution                                     OFFSET(getStruct<T>, {0x4E8, 8, 0, 0})
	CMember(TArray<UCurveLinearColor*>)                LinearColorCurvesToBake                                     OFFSET(get<T>, {0x4F0, 16, 0, 0})
	DMember(bool)                                      WriteBakedCurveDataToDisk                                   OFFSET(get<bool>, {0x500, 1, 0, 0})
	SMember(FString)                                   File_Path                                                   OFFSET(getStruct<T>, {0x508, 16, 0, 0})
	SMember(FString)                                   File_Name                                                   OFFSET(getStruct<T>, {0x518, 16, 0, 0})
	CMember(TArray<FLinearColor>)                      LinearColorArray                                            OFFSET(get<T>, {0x528, 16, 0, 0})
	DMember(bool)                                      UseCheapSplines                                             OFFSET(get<bool>, {0x538, 1, 0, 0})
	CMember(UTexture*)                                 LinearColorTexture                                          OFFSET(get<T>, {0x540, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateCheapSplinesWPOVectors
	// void UpdateCheapSplinesWPOVectors();                                                                                     // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetSocketLocationWS
	// void GetSocketLocationWS(FName Socket Name, FVector& LocationWS, bool& Skeletal Mesh InValid, bool& Socket Invalid);     // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndAllSplineMeshes
	// void SetStartAndEndAllSplineMeshes(bool Update All Spline Meshes);                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DestroyAllSplineMeshes
	// void DestroyAllSplineMeshes();                                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.BakeLinearColor
	// void BakeLinearColor(UCurveLinearColor* Curve Linear Color, int32_t Pixel (X), FLinearColor& LinearColorOut);            // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReturnSplineMeshToPool
	// void ReturnSplineMeshToPool(USplineMeshComponent* SplineMesh, int32_t IndexToRemove);                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineUpdateOnTick
	// void SplineUpdateOnTick();                                                                                               // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RedistributePointsAlongSpline
	// void RedistributePointsAlongSpline();                                                                                    // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GetLinearColorFromCurveAtTime
	// void GetLinearColorFromCurveAtTime(UCurveLinearColor* Curve Linear Color, int32_t Index, FLinearColor& LinearColorOut);  // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.TickIntervalLODCheck
	// void TickIntervalLODCheck();                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetWasRecentlyRendered
	// void SetWasRecentlyRendered();                                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineDistanceCheck
	// bool AddSplineDistanceCheck();                                                                                           // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetNewSplinePointsBool
	// void SetNewSplinePointsBool();                                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetForwardAxisOnSplineMesh
	// void SetForwardAxisOnSplineMesh(USplineMeshComponent* SplineMesh);                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.RollSplineMesh
	// void RollSplineMesh();                                                                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateParticleSystemPosition
	// void UpdateParticleSystemPosition();                                                                                     // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateMID
	// void UpdateMID();                                                                                                        // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ScaleSplineMesh
	// void ScaleSplineMesh();                                                                                                  // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineTimestampManagement
	// void SplineTimestampManagement();                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UpdateSplinePointPosition
	// void UpdateSplinePointPosition();                                                                                        // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplinePoint
	// void AddSplinePoint();                                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SetStartAndEndSplineMesh
	// void SetStartAndEndSplineMesh(bool Update Spline Mesh);                                                                  // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.AddSplineMesh
	// void AddSplineMesh();                                                                                                    // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__FinishedFunc
	// void DebugRotateTimeline__FinishedFunc();                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugRotateTimeline__UpdateFunc
	// void DebugRotateTimeline__UpdateFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.SplineSystemDurationReached
	// void SplineSystemDurationReached();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.DebugMode_Rotate
	// void DebugMode_Rotate();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ManuallyStopSplineSystem
	// void ManuallyStopSplineSystem();                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Tick Interval LOD Check
	// void Tick Interval LOD Check();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.Recently Rendered Check
	// void Recently Rendered Check();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ClearRenderTarget
	// void ClearRenderTarget();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.GenerateCurveTextures
	// void GenerateCurveTextures();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/SplineTrails/Blueprints/BP_SplineVolumeTrail_v1b.BP_SplineVolumeTrail_v1b_C.ExecuteUbergraph_BP_SplineVolumeTrail_v1b
	// void ExecuteUbergraph_BP_SplineVolumeTrail_v1b(int32_t EntryPoint);                                                      // [0x154a140] HasDefaults          
};

/// Class /Game/Effects/Fort_Effects/BluGlow/BluGlow_MorphAnimation.BluGlow_MorphAnimation_C
/// Size: 0x0070 (0x000318 - 0x000388)
class ABluGlow_MorphAnimation_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UPointLightComponent*)                     PointLight                                                  OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 NewParticleSystem                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BluGlowModel                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(float)                                     Timeline_0_Additional_Texture_Rotation_Rate_4CFA454F41B86B7BE42429BB2A905B1E OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     Timeline_0_Scale_4CFA454F41B86B7BE42429BB2A905B1E           OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     Timeline_0_Morph_4CFA454F41B86B7BE42429BB2A905B1E           OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     Timeline_0_Glow_4CFA454F41B86B7BE42429BB2A905B1E            OFFSET(get<float>, {0x34C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_4CFA454F41B86B7BE42429BB2A905B1E      OFFSET(get<T>, {0x350, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Mid                                                         OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(int32_t)                                   IntCounter                                                  OFFSET(get<int32_t>, {0x368, 4, 0, 0})
	DMember(float)                                     Initial_Sphere_Scale                                        OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     Additional_Texture_Rotation_Rate                            OFFSET(get<float>, {0x370, 4, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x374, 12, 0, 0})
	DMember(float)                                     Number_Of_Morph_Targets                                     OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(int32_t)                                   NumberOfMorphTargets                                        OFFSET(get<int32_t>, {0x384, 4, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/BluGlow/BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluGlow/BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluGlow/BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluGlow/BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.Timeline_0__ChangeTargetFrame__EventFunc
	// void Timeline_0__ChangeTargetFrame__EventFunc();                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluGlow/BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluGlow/BluGlow_MorphAnimation.BluGlow_MorphAnimation_C.ExecuteUbergraph_BluGlow_MorphAnimation
	// void ExecuteUbergraph_BluGlow_MorphAnimation(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_LensEffect_Direction.B_PlayerShieldDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x000400 - 0x000400)
class AB_PlayerShieldDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
/// Size: 0x0000 (0x000400 - 0x000400)
class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
/// Size: 0x0008 (0x0003D0 - 0x0003D8)
class AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.PassParticle_Parameter
	// void PassParticle_Parameter(float NewParam, bool First_Hit);                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect
	// void ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32_t EntryPoint);                                         // [0x154a140] None                 
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C
/// Size: 0x0008 (0x0003D8 - 0x0003E0)
class AB_PlayerShieldDamage_CameraLensEffect_C : public AB_PlayerHealthDamage_CameraLensEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.PassParticle_Parameter_Shield
	// void PassParticle_Parameter_Shield(float NewParam);                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_PlayerShieldDamage_CameraLensEffect.B_PlayerShieldDamage_CameraLensEffect_C.ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect
	// void ExecuteUbergraph_B_PlayerShieldDamage_CameraLensEffect(int32_t EntryPoint);                                         // [0x154a140] None                 
};

/// Class /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C
/// Size: 0x014C (0x000318 - 0x000464)
class ADuplicateResOutMesh_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1124;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_FirstPassComplete_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_LightIntensity_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(float)                                     CharacterSpawnInTimeline_zHieght_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<float>, {0x330, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CharacterSpawnInTimeline__Direction_2AB89084476E64255664E9B2D45E14C1 OFFSET(get<T>, {0x334, 1, 0, 0})
	CMember(UTimelineComponent*)                       CharacterSpawnInTimeline                                    OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Skeletal_Mesh_Duplicate                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(bool)                                      Gun_True                                                    OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(float)                                     BoundsRadius                                                OFFSET(get<float>, {0x34C, 4, 0, 0})
	DMember(float)                                     NewVar                                                      OFFSET(get<float>, {0x350, 4, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         midArray                                                    OFFSET(get<T>, {0x358, 16, 0, 0})
	SMember(FVector)                                   World_location_for_the_dissolve_location                    OFFSET(getStruct<T>, {0x368, 12, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Current_MID                                                 OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     Head_Space                                                  OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(float)                                     Leg_Space                                                   OFFSET(get<float>, {0x384, 4, 0, 0})
	CMember(UPointLightComponent*)                     Spawn_Light                                                 OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     light_intensity                                             OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(int32_t)                                   Number_of_Base_skeletal_mesh_materials                      OFFSET(get<int32_t>, {0x394, 4, 0, 0})
	DMember(float)                                     FirstPassComplete                                           OFFSET(get<float>, {0x398, 4, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           ExternalSkeletalMeshComponent                               OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FTransform)                                Box_Local_Transform                                         OFFSET(getStruct<T>, {0x3B0, 48, 0, 0})
	DMember(float)                                     Timeline_Play_Length                                        OFFSET(get<float>, {0x3E0, 4, 0, 0})
	DMember(bool)                                      TeleportOut_                                                OFFSET(get<bool>, {0x3E4, 1, 0, 0})
	CMember(AActor*)                                   ExternalActor                                               OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           InternalSkeletalMeshComponents                              OFFSET(get<T>, {0x3F0, 16, 0, 0})
	DMember(int32_t)                                   CurrentMeshMidIndex                                         OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	CMember(USkeletalMeshComponent*)                   External_Base_Mesh_Component                                OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         ExternalMidArray                                            OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   ExternalRootMeshComponent                                   OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               ListOfMaterialsExemptFromReparenting                        OFFSET(get<T>, {0x428, 16, 0, 0})
	DMember(bool)                                      MaterialParentIsValid                                       OFFSET(get<bool>, {0x438, 1, 0, 0})
	CMember(UMaterialInterface*)                       CurrentParentMaterial                                       OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UMaterialInterface*)                       CurrentMaterial                                             OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Original_MIDs                                               OFFSET(get<T>, {0x450, 16, 0, 0})
	DMember(int32_t)                                   Increment_End                                               OFFSET(get<int32_t>, {0x460, 4, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Store Original Material for Teleport In
	// void Store Original Material for Teleport In();                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.External Mesh Masked Setup
	// void External Mesh Masked Setup(TArray<USkeletalMeshComponent*>& External Mesh Component Array, TArray<UMaterialInstanceDynamic*>& Corrected Mid Array); // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ProcessSpawnInTimeline
	// void ProcessSpawnInTimeline(float ZHeight, float LightIntensity);                                                        // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make internal mids and append external and intermal mids to mid array
	// void Make internal mids and append external and intermal mids to mid array();                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Make and slave internal meshes
	// void Make and slave internal meshes();                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Spawn  Light
	// void Spawn  Light();                                                                                                     // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.Find Bounds
	// void Find Bounds();                                                                                                      // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.initializeExternalSkeletalMeshArray
	// void initializeExternalSkeletalMeshArray();                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__FinishedFunc
	// void CharacterSpawnInTimeline__FinishedFunc();                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.CharacterSpawnInTimeline__UpdateFunc
	// void CharacterSpawnInTimeline__UpdateFunc();                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.UpdateExternalParameters
	// void UpdateExternalParameters(TArray<UMaterialInstanceDynamic*>& MID Array, TArray<USkeletalMeshComponent*>& External Mesh Component Array); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Effects/Characters/Generic/ResIn/DuplicateResOutMesh.DuplicateResOutMesh_C.ExecuteUbergraph_DuplicateResOutMesh
	// void ExecuteUbergraph_DuplicateResOutMesh(int32_t EntryPoint);                                                           // [0x154a140] HasDefaults          
};

/// Class /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C
/// Size: 0x0060 (0x000370 - 0x0003D0)
class ALightningLsystem_C : public AFortLightningActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x370, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Sm_LightningStrikes_C_01                                    OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UBillboardComponent*)                      Base                                                        OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Sm_LightningStrikes_B_01                                    OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Sm_LightningStrikes_A_01                                    OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BoltMesh                                                    OFFSET(get<T>, {0x398, 8, 0, 0})
	SMember(FVector)                                   Start_Location                                              OFFSET(getStruct<T>, {0x3A0, 12, 0, 0})
	SMember(FVector)                                   End_Location                                                OFFSET(getStruct<T>, {0x3AC, 12, 0, 0})
	DMember(bool)                                      isDebugMode                                                 OFFSET(get<bool>, {0x3B8, 1, 0, 0})
	DMember(float)                                     BoltLifetimeMin                                             OFFSET(get<float>, {0x3BC, 4, 0, 0})
	DMember(float)                                     BoltLifetimeMax                                             OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(float)                                     BoltLifetime                                                OFFSET(get<float>, {0x3C4, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BoltMID                                                     OFFSET(get<T>, {0x3C8, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.GetRandomMesh
	// void GetRandomMesh();                                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.CleanupMesh
	// void CleanupMesh();                                                                                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.OnLightingCleanup
	// void OnLightingCleanup();                                                                                                // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.SetupLightning
	// void SetupLightning(FVector Start Location, FVector End Location);                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.DebugStrike
	// void DebugStrike();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.OnLightingInitialized
	// void OnLightingInitialized();                                                                                            // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.EndLightning
	// void EndLightning();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/World/Enviroment/Lightning/LightningLSystem.LightningLsystem_C.ExecuteUbergraph_LightningLsystem
	// void ExecuteUbergraph_LightningLsystem(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C
/// Size: 0x027C (0x000410 - 0x00068C)
class AB_SoundIndicator_01_C : public AFortSoundCameraLensEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1676;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	DMember(bool)                                      Chest                                                       OFFSET(get<bool>, {0x418, 1, 0, 0})
	DMember(bool)                                      FootSteps                                                   OFFSET(get<bool>, {0x419, 1, 0, 0})
	DMember(bool)                                      Gunshot                                                     OFFSET(get<bool>, {0x41A, 1, 0, 0})
	DMember(bool)                                      Generic                                                     OFFSET(get<bool>, {0x41B, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Long_Range                                  OFFSET(getStruct<T>, {0x420, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        Chest_Falloff                                               OFFSET(getStruct<T>, {0x498, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        Footsteps_Falloff                                           OFFSET(getStruct<T>, {0x510, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Mid_Range                                   OFFSET(getStruct<T>, {0x588, 120, 0, 0})
	SMember(FRuntimeFloatCurve)                        Gunshot_Falloff_Melee                                       OFFSET(getStruct<T>, {0x600, 120, 0, 0})
	DMember(float)                                     OppositeFacingGunshotStrength                               OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(float)                                     FacingGunshotExponentNear                                   OFFSET(get<float>, {0x67C, 4, 0, 0})
	DMember(float)                                     ForwardFacingGunshotStrength                                OFFSET(get<float>, {0x680, 4, 0, 0})
	DMember(float)                                     FacingGunshotExponentFar                                    OFFSET(get<float>, {0x684, 4, 0, 0})
	DMember(float)                                     DistanceDivisor                                             OFFSET(get<float>, {0x688, 4, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.CalculateFiringAngle
	// void CalculateFiringAngle(float& DotResult);                                                                             // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve
	// FRuntimeFloatCurve GetWeaponCurve();                                                                                     // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.UpdateEmitterStates
	// void UpdateEmitterStates();                                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.OnEffectActivated
	// void OnEffectActivated();                                                                                                // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Camera_Effects/B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01
	// void ExecuteUbergraph_B_SoundIndicator_01(int32_t EntryPoint);                                                           // [0x154a140] HasDefaults          
};

/// Class /Game/Effects/Fort_Effects/BluePrints/CameraShakes/B_Small_Vertical_Jolt_CameraShake.B_Small_Vertical_Jolt_CameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UB_Small_Vertical_Jolt_CameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C
/// Size: 0x01E9 (0x000368 - 0x000551)
class AB_Pickups_Parent_C : public AFortPickupEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1361;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x368, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     MobileSelectedTL_LerpInteactoIcon_FF208F9641BE589B76EF698B94309EA7 OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     MobileSelectedTL_LerpObject_FF208F9641BE589B76EF698B94309EA7 OFFSET(get<float>, {0x37C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MobileSelectedTL__Direction_FF208F9641BE589B76EF698B94309EA7 OFFSET(get<T>, {0x380, 1, 0, 0})
	CMember(UTimelineComponent*)                       MobileSelectedTL                                            OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(FVector)                                   Pivot_Offset                                                OFFSET(getStruct<T>, {0x390, 12, 0, 0})
	SMember(FRotator)                                  Rotation_Bias                                               OFFSET(getStruct<T>, {0x39C, 12, 0, 0})
	CMember(UStaticMeshComponent*)                     Static_Mesh_Pickup                                          OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Skeletal_Mesh_Pickup                                        OFFSET(get<T>, {0x3B0, 8, 0, 0})
	DMember(bool)                                      IsSkeletalMesh                                              OFFSET(get<bool>, {0x3B8, 1, 0, 0})
	DMember(bool)                                      Is_a_Backpack                                               OFFSET(get<bool>, {0x3B9, 1, 0, 0})
	CMember(UPrimitiveComponent*)                      SkeletalOrStaticMeshAssetPrimitive                          OFFSET(get<T>, {0x3C0, 8, 0, 0})
	DMember(int32_t)                                   CurrentElementIndex                                         OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         midArray                                                    OFFSET(get<T>, {0x3D0, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               CurrentMaterial                                             OFFSET(get<T>, {0x3E0, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               CurrentParentMaterial                                       OFFSET(get<T>, {0x3F0, 16, 0, 0})
	DMember(bool)                                      Tossed                                                      OFFSET(get<bool>, {0x400, 1, 0, 0})
	DMember(bool)                                      Activate_Rarity_Particle_Systems                            OFFSET(get<bool>, {0x401, 1, 0, 0})
	SMember(FLinearColor)                              Rarity_Color                                                OFFSET(getStruct<T>, {0x404, 16, 0, 0})
	DMember(int32_t)                                   Rarity_Level                                                OFFSET(get<int32_t>, {0x414, 4, 0, 0})
	CMember(TArray<float>)                             Sweep_Brightness                                            OFFSET(get<T>, {0x418, 16, 0, 0})
	CMember(TArray<float>)                             Sweep_Speed                                                 OFFSET(get<T>, {0x428, 16, 0, 0})
	DMember(float)                                     Component_Radius__Scaled_                                   OFFSET(get<float>, {0x438, 4, 0, 0})
	DMember(float)                                     Component_Radius_Multiplier                                 OFFSET(get<float>, {0x43C, 4, 0, 0})
	CMember(TArray<FLinearColor>)                      Outline_Rarity_Colors                                       OFFSET(get<T>, {0x440, 16, 0, 0})
	DMember(float)                                     Component_Radius                                            OFFSET(get<float>, {0x450, 4, 0, 0})
	DMember(float)                                     Picked_Up_Delay_Before_Glow                                 OFFSET(get<float>, {0x454, 4, 0, 0})
	DMember(float)                                     Picked_Up_Fade_In_Time                                      OFFSET(get<float>, {0x458, 4, 0, 0})
	DMember(float)                                     Picked_Up_Hold_Time                                         OFFSET(get<float>, {0x45C, 4, 0, 0})
	DMember(float)                                     Picked_Up_Fade_Out_Time                                     OFFSET(get<float>, {0x460, 4, 0, 0})
	DMember(float)                                     Picked_Up_Sweep_Speed                                       OFFSET(get<float>, {0x464, 4, 0, 0})
	DMember(bool)                                      IsBluglo                                                    OFFSET(get<bool>, {0x468, 1, 0, 0})
	CMember(UParticleSystem*)                          Picked_Up_Trail_PS                                          OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(TArray<float>)                             Sparkle_Spawn_Rate__Picked_Up_                              OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(TArray<float>)                             Lifetime__Picked_Up_                                        OFFSET(get<T>, {0x488, 16, 0, 0})
	DMember(bool)                                      IsLootGiftForOthers                                         OFFSET(get<bool>, {0x498, 1, 0, 0})
	CMember(UForceFeedbackEffect*)                     PickupForceFeedback                                         OFFSET(get<T>, {0x4A0, 8, 0, 0})
	DMember(bool)                                      Is_Violentium                                               OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	CMember(TArray<int32_t>)                           MIDsNeedingRelease                                          OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(TArray<FString>)                           Names_of_Materials_And_Parents_Exempt_from_Repartening      OFFSET(get<T>, {0x4C0, 16, 0, 0})
	DMember(float)                                     Max_Draw_Distance_Save_the_World                            OFFSET(get<float>, {0x4D0, 4, 0, 0})
	DMember(float)                                     Max_Draw_Distance_Athena                                    OFFSET(get<float>, {0x4D4, 4, 0, 0})
	DMember(float)                                     Max_Draw_Distance_Bacchus                                   OFFSET(get<float>, {0x4D8, 4, 0, 0})
	DMember(bool)                                      HasUniqueMaterialIds                                        OFFSET(get<bool>, {0x4DC, 1, 0, 0})
	CMember(TArray<float>)                             Sweep_Brightness_Test                                       OFFSET(get<T>, {0x4E0, 16, 0, 0})
	CMember(UParticleSystemComponent*)                 BackgroundParticleSystem                                    OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(TArray<FLinearColor>)                      BackgroundRarityColors                                      OFFSET(get<T>, {0x4F8, 16, 0, 0})
	DMember(float)                                     ViewDistance                                                OFFSET(get<float>, {0x508, 4, 0, 0})
	DMember(float)                                     Random_Rotation                                             OFFSET(get<float>, {0x50C, 4, 0, 0})
	SMember(FVector)                                   MobileSelectedOffset                                        OFFSET(getStruct<T>, {0x510, 12, 0, 0})
	SMember(FVector)                                   MobileSelectedScale                                         OFFSET(getStruct<T>, {0x51C, 12, 0, 0})
	CMember(UStaticMeshComponent*)                     MobileInteractIcon                                          OFFSET(get<T>, {0x528, 8, 0, 0})
	SMember(FVector)                                   MobileInteractIconLocation                                  OFFSET(getStruct<T>, {0x530, 12, 0, 0})
	SMember(FVector)                                   MobileInteractIconScale                                     OFFSET(getStruct<T>, {0x53C, 12, 0, 0})
	CMember(UMaterialInterface*)                       MobileInteractionMaterial                                   OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(bool)                                      PickedUp                                                    OFFSET(get<bool>, {0x550, 1, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Initial Parenting Setup
	// void Initial Parenting Setup();                                                                                          // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Mobile Interation Icon Setup
	// void Mobile Interation Icon Setup();                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Randomize Mesh Rotation for BR
	// void Randomize Mesh Rotation for BR();                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Set Draw Distance
	// void Set Draw Distance();                                                                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetVisibleMobileInteractIcon
	// void SetVisibleMobileInteractIcon(bool Visible);                                                                         // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetActiveBackgroundParticleSystem
	// void SetActiveBackgroundParticleSystem(bool Active, bool Reset);                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetInitialHologramParams
	// void SetInitialHologramParams(UMaterialInstanceDynamic* Mid);                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.Unique Material MIDs
	// void Unique Material MIDs();                                                                                             // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetupStretchMIDs
	// void SetupStretchMIDs();                                                                                                 // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetupBaseMIDs
	// void SetupBaseMIDs();                                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHiddenBackgroundVisualComponents
	// void SetHiddenBackgroundVisualComponents(bool Hidden);                                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DestroyBackgroundVisualComponents
	// void DestroyBackgroundVisualComponents();                                                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReleaseStretchMIDs
	// void ReleaseStretchMIDs();                                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ScaleHologramTimingsForPvP
	// void ScaleHologramTimingsForPvP();                                                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetHologramPickedUpParams
	// void SetHologramPickedUpParams(bool Tier 0);                                                                             // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SpawnPickedUpTrailPS
	// void SpawnPickedUpTrailPS();                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.SetRarityColor
	// void SetRarityColor();                                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__FinishedFunc
	// void MobileSelectedTL__FinishedFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.MobileSelectedTL__UpdateFunc
	// void MobileSelectedTL__UpdateFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnPickedUp
	// void OnPickedUp();                                                                                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnAboutToEnterBackpack
	// void OnAboutToEnterBackpack(AFortPawn* PickupTarget);                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.OnTossed
	// void OnTossed();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.EnableBacchusHighlight
	// void EnableBacchusHighlight();                                                                                           // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.DisableBacchusHighlight
	// void DisableBacchusHighlight();                                                                                          // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Parent.B_Pickups_Parent_C.ExecuteUbergraph_B_Pickups_Parent
	// void ExecuteUbergraph_B_Pickups_Parent(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C
/// Size: 0x001F (0x000551 - 0x000570)
class AB_Pickups_Default_C : public AB_Pickups_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x558, 8, 0, 0})
	CMember(USpotLightComponent*)                      SpotLight                                                   OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Background                                                  OFFSET(get<T>, {0x568, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Set Initial BKGD Param
	// void Set Initial BKGD Param(UMaterialInstanceDynamic* Mid);                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Setup Light
	// void Setup Light();                                                                                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.Randomize Mesh Rotation for BR
	// void Randomize Mesh Rotation for BR();                                                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnTossed
	// void OnTossed();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.OnPickedUp
	// void OnPickedUp();                                                                                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/Gameplay/Pickups/B_Pickups_Default.B_Pickups_Default_C.ExecuteUbergraph_B_Pickups_Default
	// void ExecuteUbergraph_B_Pickups_Default(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C
/// Size: 0x0098 (0x000360 - 0x0003F8)
class AWeakSpot_C : public ABuildingWeakSpot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ConnectTheDotsComponent                                     OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleComponent                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UCapsuleComponent*)                        CollisionComponent                                          OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     ScaleDownParticleTL_ScaleDown_544AE05F40294D09C3C361AB7BCF6C4E OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleDownParticleTL__Direction_544AE05F40294D09C3C361AB7BCF6C4E OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleDownParticleTL                                         OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(USoundBase*)                               SpawnSound                                                  OFFSET(get<T>, {0x390, 8, 0, 0})
	SMember(FVector)                                   Particle_Location                                           OFFSET(getStruct<T>, {0x398, 12, 0, 0})
	CMember(TArray<USoundBase*>)                       Crack_sounds                                                OFFSET(get<T>, {0x3A8, 16, 0, 0})
	DMember(float)                                     ConnectTheDotsWidth                                         OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     ConnectTheDotsDuration                                      OFFSET(get<float>, {0x3BC, 4, 0, 0})
	DMember(float)                                     ConnectTheDotsTimeoutFromPreviousHit                        OFFSET(get<float>, {0x3C0, 4, 0, 0})
	DMember(float)                                     ConnectTheDotsDurationScale                                 OFFSET(get<float>, {0x3C4, 4, 0, 0})
	DMember(float)                                     ConnectTheDotsMaxDuration                                   OFFSET(get<float>, {0x3C8, 4, 0, 0})
	DMember(float)                                     ConnectTheDotsTileScale                                     OFFSET(get<float>, {0x3CC, 4, 0, 0})
	DMember(float)                                     ConnectTheDotsMinLength                                     OFFSET(get<float>, {0x3D0, 4, 0, 0})
	DMember(float)                                     ConnectTheDotsMaxLength                                     OFFSET(get<float>, {0x3D4, 4, 0, 0})
	CMember(UParticleSystem*)                          DamageTemplate                                              OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UParticleSystem*)                          IdleTemplate                                                OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ConnectMID                                                  OFFSET(get<T>, {0x3E8, 8, 0, 0})
	SMember(FTimerHandle)                              HideMeshTimer                                               OFFSET(getStruct<T>, {0x3F0, 8, 0, 0})


	/// Functions
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc
	// void ScaleDownParticleTL__FinishedFunc();                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc
	// void ScaleDownParticleTL__UpdateFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnHit
	// void OnHit();                                                                                                            // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.HideMesh
	// void HideMesh();                                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnFadeOut
	// void OnFadeOut();                                                                                                        // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnStartDirectionEffect
	// void OnStartDirectionEffect();                                                                                           // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot
	// void ExecuteUbergraph_WeakSpot(int32_t EntryPoint);                                                                      // [0x154a140] HasDefaults          
};

/// Struct /Game/Effects/FrontEnd_VFXStorage.FrontEnd_VFXStorage
/// Size: 0x0320 (0x000000 - 0x000320)
class FFrontEnd_VFXStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TMap<USkeletalMesh*, UParticleSystem*>)    PickAxeVFX1_8_9F24534A48EEC9548F370C85E07AFC16              OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FName>)               PickAxeVFX1AttachPointName_27_C3C6A99D414B273C3F2F4D83065E1F93 OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FVector>)             PickAxeVFX1LocationOffsets_13_E94D17BD41E2A1E9B4F2A3992A88A9A2 OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FRotator>)            PickAxeVFX1RotationValues_30_530C9B024EF0D3495130BEB05A7C9DB5 OFFSET(get<T>, {0xF0, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FVector>)             PickAxeVFX1ScaleValues_19_B790CD784F54FD8585F547AD90432108  OFFSET(get<T>, {0x140, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, UParticleSystem*>)    PickAxeVFX2_10_F5BE108344031B4970BDAD97279D79EA             OFFSET(get<T>, {0x190, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FName>)               PickAxeVFX2AttachPointName_29_B410A96742FDD4099417DF8CA199B996 OFFSET(get<T>, {0x1E0, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FVector>)             PickAxeVFX2LocationOffsets_15_ED578CEC48BC2913F76226B1B016824C OFFSET(get<T>, {0x230, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FRotator>)            PickAxeVFX2RotationValues_31_9A48DA3E422CB2EDC97145A59E7D176E OFFSET(get<T>, {0x280, 80, 0, 0})
	CMember(TMap<USkeletalMesh*, FVector>)             PickAxeVFX2ScaleValues_23_9FC074A54C37F11135B1D6BD790088E1  OFFSET(get<T>, {0x2D0, 80, 0, 0})
};

/// Enum /Game/Effects/SplineTrails/Blueprints/En_SplineForwardAxes_01.En_SplineForwardAxes_01
/// Size: 0x04
enum En_SplineForwardAxes_01 : uint8_t
{
	En_SplineForwardAxes_01__NewEnumerator00                                         = 0,
	En_SplineForwardAxes_01__NewEnumerator11                                         = 1,
	En_SplineForwardAxes_01__NewEnumerator22                                         = 2,
	En_SplineForwardAxes_01__En_SplineForwardAxes_MAX3                               = 3
};

