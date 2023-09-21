
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C
/// Size: 0x0120 (0x000290 - 0x0003B0)
class ACameraAnimationTransition_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4      OFFSET(get<float>, {0x2A0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4      OFFSET(get<T>, {0x2A4, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraBR                                                    OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FTransform)                                CameraLocationBR                                            OFFSET(get<T>, {0x2C0, 96, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraBR16Player                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraCreative                                              OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraCreative16Player                                      OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FTransform)                                CameraLocationCreative                                      OFFSET(get<T>, {0x340, 96, 0, 0})
	DMember(double)                                    FOVPostion1                                                 OFFSET(get<double>, {0x3A0, 8, 0, 0})
	DMember(double)                                    FOVPostion2                                                 OFFSET(get<double>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp
	// void MoveCameraUp();                                                                                                     // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown
	// void MoveCameraDown();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition
	// void ExecuteUbergraph_CameraAnimationTransition(int32_t EntryPoint);                                                     // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
/// Size: 0x008C (0x000290 - 0x00031C)
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 796;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(ADirectionalLight*)                        DirectionLight                                              OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(ASkyLight*)                                SkyLight                                                    OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<APointLight*>)                      Pointlights                                                 OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(AExponentialHeightFog*)                    ExponentialHeightFog                                        OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(ADirectionalLight*)                        DirectionalLight_LowDetailMode                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<AEmitter*>)                         ParticleSystems                                             OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      DebugLOWQualityLighting                                     OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	CMember(ASkyLight*)                                SkyLight_LowDetailMode                                      OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(AExponentialHeightFog*)                    ExponentialHeightfog_LowDetailMode                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      LOW_FX_Setting_Use_MobileLighting                           OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      IsLightalreadyActive                                        OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightVector                                    OFFSET(get<T>, {0x2FC, 16, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightColor                                     OFFSET(get<T>, {0x30C, 16, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofDetailSpecificMeshes
	// void SetVisiblityofDetailSpecificMeshes();                                                                               // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting
	// void SetVisiblityofSceneLighting(bool Activate);                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting
	// void EnableLobbySetLighting();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting
	// void DisableLobbySetLighting();                                                                                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher
	// void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32_t EntryPoint);                                                 // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
/// Size: 0x0071 (0x000A00 - 0x000A71)
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2673;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0xA08, 8, 0, 0})
	SMember(FTransform)                                SavedTransform                                              OFFSET(get<T>, {0xA10, 96, 0, 0})
	DMember(bool)                                      Active                                                      OFFSET(get<bool>, {0xA70, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.Reset Location
	// void Reset Location();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ManualActivate
	// void ManualActivate();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
	// void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint);                                                  // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_DetailLevelMesh.BP_DetailLevelMesh_C
/// Size: 0x001A (0x000290 - 0x0002AA)
class ABP_DetailLevelMesh_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 682;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      AlwaysVisible                                               OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      NotVisibleOnSwitch                                          OFFSET(get<bool>, {0x2A9, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BP_DetailLevelMesh.BP_DetailLevelMesh_C.ExecuteUbergraph_BP_DetailLevelMesh
	// void ExecuteUbergraph_BP_DetailLevelMesh(int32_t EntryPoint);                                                            // [0x1ebf994] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C
/// Size: 0x01DC (0x000648 - 0x000824)
class APartyDisplayManagerBP_C : public APartyDisplayManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2084;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UChildActorComponent*)                     PrefabActorComp                                             OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ScalePivot                                                  OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     PivotHolder                                                 OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 CelebratoryFX                                               OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x680, 8, 0, 0})
	DMember(float)                                     HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8    OFFSET(get<float>, {0x688, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8 OFFSET(get<T>, {0x68C, 1, 0, 0})
	CMember(UTimelineComponent*)                       HoloMatColorPulse                                           OFFSET(get<T>, {0x690, 8, 0, 0})
	DMember(float)                                     ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC    OFFSET(get<float>, {0x698, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC OFFSET(get<T>, {0x69C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleAnimEvolve                                             OFFSET(get<T>, {0x6A0, 8, 0, 0})
	DMember(float)                                     ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43     OFFSET(get<float>, {0x6A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43  OFFSET(get<T>, {0x6AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleAnimLevel                                              OFFSET(get<T>, {0x6B0, 8, 0, 0})
	SMember(FTimerHandle)                              TimerHandle                                                 OFFSET(get<T>, {0x6B8, 8, 0, 0})
	DMember(double)                                    Rotation                                                    OFFSET(get<double>, {0x6C0, 8, 0, 0})
	CMember(UFortItem*)                                ItemToRepresent                                             OFFSET(get<T>, {0x6C8, 8, 0, 0})
	DMember(bool)                                      PreviewRotation                                             OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	CMember(UCurveFloat*)                              RotationAnimation                                           OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UParticleSystem*)                          LevelUpFX                                                   OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(UParticleSystem*)                          EvolveUpFX                                                  OFFSET(get<T>, {0x6E8, 8, 0, 0})
	SMember(FVector)                                   FXTargetLocation                                            OFFSET(get<T>, {0x6F0, 24, 0, 0})
	DMember(bool)                                      IsCharacter                                                 OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      IsEvolve                                                    OFFSET(get<bool>, {0x709, 1, 0, 0})
	CMember(UParticleSystem*)                          CharLevelUpFX                                               OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UParticleSystem*)                          CharEvolveUpFX                                              OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 UIoverrideMID                                               OFFSET(get<T>, {0x720, 8, 0, 0})
	DMember(bool)                                      HasResetVisuals                                             OFFSET(get<bool>, {0x728, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem1                                             OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem2                                             OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UParticleSystem*)                          CharSwapTransitionFX                                        OFFSET(get<T>, {0x740, 8, 0, 0})
	DMember(bool)                                      IsCharacterVisible                                          OFFSET(get<bool>, {0x748, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          HeroPawn                                                    OFFSET(get<T>, {0x750, 8, 0, 0})
	DMember(bool)                                      SanityChecker                                               OFFSET(get<bool>, {0x758, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_HoloMaterial                                            OFFSET(get<T>, {0x760, 8, 0, 0})
	SMember(FName)                                     HideElement                                                 OFFSET(get<T>, {0x768, 4, 0, 0})
	SMember(FName)                                     VertexRange                                                 OFFSET(get<T>, {0x76C, 4, 0, 0})
	SMember(FName)                                     HideElement1                                                OFFSET(get<T>, {0x770, 4, 0, 0})
	SMember(FName)                                     HideElement2                                                OFFSET(get<T>, {0x774, 4, 0, 0})
	SMember(FName)                                     HideElement3                                                OFFSET(get<T>, {0x778, 4, 0, 0})
	SMember(FName)                                     HideElement4                                                OFFSET(get<T>, {0x77C, 4, 0, 0})
	SMember(FName)                                     HideElement5                                                OFFSET(get<T>, {0x780, 4, 0, 0})
	SMember(FName)                                     HideElement6                                                OFFSET(get<T>, {0x784, 4, 0, 0})
	SMember(FName)                                     HideElement7                                                OFFSET(get<T>, {0x788, 4, 0, 0})
	SMember(FName)                                     HideElement8                                                OFFSET(get<T>, {0x78C, 4, 0, 0})
	SMember(FName)                                     HideElement9                                                OFFSET(get<T>, {0x790, 4, 0, 0})
	SMember(FVector)                                   ScalePivotPreScaleLocation                                  OFFSET(get<T>, {0x798, 24, 0, 0})
	SMember(FVector)                                   StaticMeshPreScaleLocation                                  OFFSET(get<T>, {0x7B0, 24, 0, 0})
	SMember(FVector)                                   SkelMeshPreScaleLocation                                    OFFSET(get<T>, {0x7C8, 24, 0, 0})
	SMember(FVector)                                   PrefabPreScaleLocation                                      OFFSET(get<T>, {0x7E0, 24, 0, 0})
	CMember(UParticleSystemComponent*)                 GhostPistolVFX                                              OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Ghost_Sword_VFX                                             OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Ghost_Sword_Mesh                                            OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 TransitionFXComponent                                       OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(UParticleSystem*)                          CharSwapTransitionFXLoop                                    OFFSET(get<T>, {0x818, 8, 0, 0})
	SMember(FName)                                     HideElementsOnlyConsidersRedChannel                         OFFSET(get<T>, {0x820, 4, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetPreScaleLocations
	// void ResetPreScaleLocations();                                                                                           // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.RestoreTeleportMIDsInProgress
	// void RestoreTeleportMIDsInProgress(AFortPlayerPawn* Pawn);                                                               // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandlePartyMemberInProgressDisplayChanges
	// void HandlePartyMemberInProgressDisplayChanges(AFortPlayerPawn* Pawn);                                                   // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PartyMemberInProgressCheck
	// void PartyMemberInProgressCheck(AFortPlayerPawn* Pawn);                                                                  // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPrefabActorForCurrentDisplayedItem
	// AActor* GetPrefabActorForCurrentDisplayedItem();                                                                         // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals
	// void PostSetupPrefabVisuals();                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
	// void GetMeshForCurrentDisplayedItem(UMeshComponent*& OutDisplayedMesh);                                                  // [0x1ebf994] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
	// void GetItemDefinitionToShow(UFortItemDefinition*& ItemDefinition);                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
	// void SetUIOverrideVisuals(UTexture2D* Large Texture, UFortItemDefinition* Item, EFortRarity Rarity);                     // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
	// FTransform GetWeaponPlacementTransform();                                                                                // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
	// void UpdatePreviewMeshTransforms();                                                                                      // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
	// FTransform GetItemPreviewOffset(UFortItemDefinition* ItemDefinition);                                                    // [0x1ebf994] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
	// FTransform GetPreviewMeshWorldTransform();                                                                               // [0x1ebf994] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
	// void SetupStaticMeshVisuals(UStaticMesh* NewMesh);                                                                       // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
	// void SetupSkeletalMeshVisuals(USkeletalMesh* NewMesh);                                                                   // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
	// void ResetVisuals();                                                                                                     // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
	// void ScaleAnimLevel__FinishedFunc();                                                                                     // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
	// void ScaleAnimLevel__UpdateFunc();                                                                                       // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
	// void ScaleAnimEvolve__FinishedFunc();                                                                                    // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
	// void ScaleAnimEvolve__UpdateFunc();                                                                                      // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__FinishedFunc
	// void HoloMatColorPulse__FinishedFunc();                                                                                  // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__UpdateFunc
	// void HoloMatColorPulse__UpdateFunc();                                                                                    // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.Completed_01D864884864692DBB7035B0996A5437
	// void Completed_01D864884864692DBB7035B0996A5437(UFortItem* Item, FGuid RequestID);                                       // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
	// void ShowItem(UFortItem* ItemToView, FGuid& RequestID);                                                                  // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
	// void PlayLevelUpEffect();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
	// void PlayEvolutionEffect();                                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
	// void CelebrateWithFX();                                                                                                  // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
	// void PerformScaleMeshFX();                                                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
	// void HandleLoadingAssetsForItemCompleted(UFortItem* ItemWhoseAssetsWereLoaded, TArray<UObject*>& LoadedAssets, FGuid& RequestID); // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility
	// void Set Character Parts Visibility(bool NewVisible);                                                                    // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CharacterCustomizationFinished
	// void CharacterCustomizationFinished(AFortPlayerPawn* Pawn);                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnPlayerPawnAddedToLobby
	// void OnPlayerPawnAddedToLobby(AFortPlayerPawn* Pawn);                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResOutPawnFromLobby
	// void ResOutPawnFromLobby(AFortPlayerPawn* Pawn, int32_t PartyIndex);                                                     // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
	// void SetupPrefabVisuals();                                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnEmoteSetupFinished
	// void OnEmoteSetupFinished();                                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.OnMeshLODStreamingFinished
	// void OnMeshLODStreamingFinished();                                                                                       // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
	// void ExecuteUbergraph_PartyDisplayManagerBP(int32_t EntryPoint);                                                         // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C
/// Size: 0x00F0 (0x0006B0 - 0x0007A0)
class AItemOnPawnPreview_C : public AFortItemPreviewOnPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow1                                                      OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               Directional_Light_For_Atmosphere_PC                         OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightPC                                                  OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight_StandaloneForSwitch                                OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight5                                                   OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight6                                                   OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLigh3                                                    OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight2                                                   OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(USpotLightComponent*)                      BounceRear1                                                 OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLowerRight1                                              OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLeft1                                                    OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimTopRight1                                                OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimBottomLeft1                                              OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(USpotLightComponent*)                      Bounce1                                                     OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(USceneComponent*)                          LightTransform                                              OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Plane                                                       OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Sample_Mesh                                                 OFFSET(get<T>, {0x750, 8, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x758, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x759, 1, 0, 0})
	DMember(bool)                                      debugConstructionLighting                                   OFFSET(get<bool>, {0x75A, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 ObscuringLoopEmitter                                        OFFSET(get<T>, {0x760, 8, 0, 0})
	SMember(FRotator)                                  ToonLightRotatio                                            OFFSET(get<T>, {0x768, 24, 0, 0})
	DMember(bool)                                      bIsBattlePassReward                                         OFFSET(get<bool>, {0x780, 1, 0, 0})
	SMember(FTimerHandle)                              LOD_StreamingSafetyTimer                                    OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultFloorMaterial                                        OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UMaterialInterface*)                       CustomFloorMaterial                                         OFFSET(get<T>, {0x798, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.Get LOD Streaming Safety Duration
	// void Get LOD Streaming Safety Duration();                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchErebusLighting
	// void SwitchErebusLighting(bool Visibility);                                                                              // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SetFloorEnabled
	// void SetFloorEnabled(bool Show Floor);                                                                                   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.LightControl
	// void LightControl(bool Active);                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool NewParam);                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnSetFloorMaterial
	// void OnSetFloorMaterial(UMaterialInterface* InMaterialInstance);                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnAllLODStreamingComplete
	// void OnAllLODStreamingComplete();                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnCurrentVisualsCleanedUp
	// void OnCurrentVisualsCleanedUp();                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.OnUpdateFloorMaterial
	// void OnUpdateFloorMaterial(bool bEnableAutotestBackground);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.Backup_LODStreamingFailed
	// void Backup_LODStreamingFailed();                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.SpawnSoundPlayback
	// void SpawnSoundPlayback();                                                                                               // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C.ExecuteUbergraph_ItemOnPawnPreview
	// void ExecuteUbergraph_ItemOnPawnPreview(int32_t EntryPoint);                                                             // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AVaultWeaponPlacementHelper_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CUBE                                                        OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Sparkle                                         OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl02                                         OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl01                                         OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CharacterPlacement                                          OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher                                          OFFSET(get<T>, {0x2D0, 16, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
	// void GetFrontendAnimInstance();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
	// void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
	// void Initialize();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
	// void InitializeContextEvents();                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
	// void ItemRez();                                                                                                          // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
	// void ExecuteUbergraph_VaultWeaponPlacementHelper(int32_t EntryPoint);                                                    // [0x1ebf994] Final                
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
	// void NewEventDispatcher_0__DelegateSignature();                                                                          // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
/// Size: 0x00C8 (0x000290 - 0x000358)
class AVaultCharacterPlacementHelper_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CharacterPlacement                                          OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FTransform)                                OriginalTransform                                           OFFSET(get<T>, {0x2B0, 96, 0, 0})
	SMember(FVector)                                   OffsetTranslate                                             OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(FRotator)                                  OffsetRotate                                                OFFSET(get<T>, {0x328, 24, 0, 0})
	DMember(bool)                                      Athena                                                      OFFSET(get<bool>, {0x340, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnZoomLevelUpdated                                          OFFSET(get<T>, {0x348, 16, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera
	// void UpdatePosition For Camera(EFrontEndCamera FrontEndCamera);                                                          // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event
	// void SubGameChanged_Event(ESubGame SubGame);                                                                             // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged
	// void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                      // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
	// void ExecuteUbergraph_VaultCharacterPlacementHelper(int32_t EntryPoint);                                                 // [0x1ebf994] Final|HasDefaults    
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnZoomLevelUpdated__DelegateSignature
	// void OnZoomLevelUpdated__DelegateSignature(double CurrentZoomLevel);                                                     // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UUI_Background_Strings_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CustomString                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FText)                                     CustomText                                                  OFFSET(get<T>, {0x2B8, 24, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C.ExecuteUbergraph_UI_Background_Strings
	// void ExecuteUbergraph_UI_Background_Strings(int32_t EntryPoint);                                                         // [0x1ebf994] Final                
};

/// Class /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C
/// Size: 0x0040 (0x000290 - 0x0002D0)
class ABP_Background_Raytracing_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UStaticMeshComponent*)                     SM_InvertedSphere_BackPlate_Half                            OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      FullSphere                                                  OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	DMember(bool)                                      UseCubemap                                                  OFFSET(get<bool>, {0x2A1, 1, 0, 0})
	DMember(double)                                    Brightness                                                  OFFSET(get<double>, {0x2A8, 8, 0, 0})
	CMember(UTexture*)                                 _2dTexture                                                  OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UTexture*)                                 Cubemap                                                     OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FLinearColor)                              FadeColor                                                   OFFSET(get<T>, {0x2C0, 16, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/BackPlates/CMSLobbyDirector.CMSLobbyDirector_C
/// Size: 0x0008 (0x000460 - 0x000468)
class ACMSLobbyDirector_C : public ADynamicBackgroundDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x460, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ABP_CharacterRimlightDisabler_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C.ExecuteUbergraph_BP_CharacterRimlightDisabler
	// void ExecuteUbergraph_BP_CharacterRimlightDisabler(int32_t EntryPoint);                                                  // [0x1ebf994] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
/// Size: 0x0020 (0x000A00 - 0x000A20)
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         CameraActor                                                 OFFSET(get<T>, {0xA08, 8, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0xA10, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          CachedPawn                                                  OFFSET(get<T>, {0xA18, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress
	// void HandleMousePress();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease
	// void HandleMouseRelease();                                                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnActivated
	// void BP_OnActivated(AFortPlayerController* PlayerController);                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.BP_OnDeactivated
	// void BP_OnDeactivated(AFortPlayerController* PlayerController);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera
	// void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32_t EntryPoint);                                                // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C
/// Size: 0x00D0 (0x000290 - 0x000360)
class AVaultCharacterLightingBP_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow1                                                      OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight4                                                   OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight3                                                   OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight2                                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_Mobile                                          OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_LOWPC                                           OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight_LOWPC                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LOWPC                                      OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobil                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLowerRight                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLeft                                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimTopRight                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimBottomLeft                                               OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight                                                    OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(USpotLightComponent*)                      Bounce                                                      OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USpotLightComponent*)                      BounceRear                                                  OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USceneComponent*)                          SharedRoot                                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      DebugMobile_Lighting                                        OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             OFFSET(get<bool>, {0x339, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x33A, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x33B, 1, 0, 0})
	DMember(bool)                                      DebugLighting_LOWDetailPC                                   OFFSET(get<bool>, {0x33C, 1, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightVector                                    OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightColor                                     OFFSET(get<T>, {0x350, 16, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail
	// void SwitchPCLighting_LOWDetail(bool Visibility);                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibilty);                                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting
	// void ToggleLighting();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING
	// void OVERRIDELIGHTING();                                                                                                 // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
	// void LightControl(bool NewParam);                                                                                        // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
	// void ExecuteUbergraph_VaultCharacterLightingBP(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C
/// Size: 0x0009 (0x000338 - 0x000341)
class AVaultWorld_C : public AFortItemPreviewWorld
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 833;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      bIsPrimaryBackgroundActive                                  OFFSET(get<bool>, {0x340, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.GetVaultRotator
	// void GetVaultRotator(AVaultRotator_C*& VaultRotator);                                                                    // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C.ExecuteUbergraph_VaultWorld
	// void ExecuteUbergraph_VaultWorld(int32_t EntryPoint);                                                                    // [0x1ebf994] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C
/// Size: 0x0087 (0x000341 - 0x0003C8)
class ASpecialEventVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_1EDCEF5F41216A9DADD25897C8B68493       OFFSET(get<float>, {0x358, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_1EDCEF5F41216A9DADD25897C8B68493     OFFSET(get<T>, {0x35C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ItemDetails                                                 OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_37382717410D795E9E7E0990FC3EFCC2 OFFSET(get<float>, {0x368, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_37382717410D795E9E7E0990FC3EFCC2 OFFSET(get<T>, {0x36C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Floor_Visibility                                            OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_7B5688E44724D9F68D3C20A520093829 OFFSET(get<float>, {0x378, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_7B5688E44724D9F68D3C20A520093829 OFFSET(get<T>, {0x37C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Background_Effects                                          OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_FDB9DC244ED5578954F07A87EDA84CA5 OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     TransitionForward_Pre_TransitionOffset_FDB9DC244ED5578954F07A87EDA84CA5 OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_FDB9DC244ED5578954F07A87EDA84CA5  OFFSET(get<float>, {0x390, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_FDB9DC244ED5578954F07A87EDA84CA5 OFFSET(get<T>, {0x394, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionForward                                           OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_9CCDE9524354AF859735079DD2ED12AA OFFSET(get<float>, {0x3A0, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Pre_Transition_Offset_9CCDE9524354AF859735079DD2ED12AA OFFSET(get<float>, {0x3A4, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_9CCDE9524354AF859735079DD2ED12AA OFFSET(get<float>, {0x3A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_9CCDE9524354AF859735079DD2ED12AA OFFSET(get<T>, {0x3AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionBackward                                          OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UMaterialInstance*)                        FloorMI                                                     OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FloorMID                                                    OFFSET(get<T>, {0x3C0, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double PreTransitionOffset, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double PreTransitionOffset, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, UMaterialInstanceDynamic* Mid); // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                                  // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                    // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                                 // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                   // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                                 // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                   // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                   // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                     // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                        // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                          // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnSetupBackground
	// void OnSetupBackground(UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);                  // [0x1ebf994] HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.OnUpdateMaterialIndex
	// void OnUpdateMaterialIndex(int32_t MaterialIndex);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C.ExecuteUbergraph_SpecialEventVaultWorld
	// void ExecuteUbergraph_SpecialEventVaultWorld(int32_t EntryPoint);                                                        // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C
/// Size: 0x0180 (0x0003D0 - 0x000550)
class AItemPreviewSideSwap_C : public AItemPreviewSwapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_Mobile                                          OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight_LOWPC                                              OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_LOWPC                                           OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LOWPC                                      OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(USceneComponent*)                          DirectionalLights                                           OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(USceneComponent*)                          GenericLighting                                             OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(float)                                     Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870 OFFSET(get<float>, {0x428, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870      OFFSET(get<T>, {0x42C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    OFFSET(get<T>, {0x430, 8, 0, 0})
	DMember(float)                                     Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45       OFFSET(get<float>, {0x438, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45      OFFSET(get<T>, {0x43C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline1                                                   OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FVector)                                   MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1      OFFSET(get<T>, {0x448, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1    OFFSET(get<T>, {0x460, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveOutRight                                                OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FVector)                                   MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE       OFFSET(get<T>, {0x470, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE     OFFSET(get<T>, {0x488, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveInRight                                                 OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FVector)                                   MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47        OFFSET(get<T>, {0x498, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47      OFFSET(get<T>, {0x4B0, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveInLeft                                                  OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(FVector)                                   MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1       OFFSET(get<T>, {0x4C0, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1     OFFSET(get<T>, {0x4D8, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveOutLeft                                                 OFFSET(get<T>, {0x4E0, 8, 0, 0})
	DMember(bool)                                      DebugMobile_Lighting                                        OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             OFFSET(get<bool>, {0x4E9, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x4EA, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x4EB, 1, 0, 0})
	DMember(bool)                                      DebugLighting_LOWDetailPC                                   OFFSET(get<bool>, {0x4EC, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  On_New_Item_Spawned                                         OFFSET(get<T>, {0x4F0, 16, 0, 0})
	DMember(double)                                    CurrentZoomLevel                                            OFFSET(get<double>, {0x500, 8, 0, 0})
	DMember(double)                                    TargetZoomLevel                                             OFFSET(get<double>, {0x508, 8, 0, 0})
	SMember(FRotator)                                  TargetRotationOffset                                        OFFSET(get<T>, {0x510, 24, 0, 0})
	SMember(FRotator)                                  OrigRotationOffset                                          OFFSET(get<T>, {0x528, 24, 0, 0})
	CMember(UFortAccountItemDefinition*)               Primary_Requested_Item                                      OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortAccountItemDefinition*)               Previous_Requested_Item                                     OFFSET(get<T>, {0x548, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.LightControl
	// void LightControl(bool Active);                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchPCLighting_LOWDetail
	// void SwitchPCLighting_LOWDetail(bool Visibility);                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibility);                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__FinishedFunc
	// void MoveOutLeft__FinishedFunc();                                                                                        // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutLeft__UpdateFunc
	// void MoveOutLeft__UpdateFunc();                                                                                          // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__FinishedFunc
	// void MoveInLeft__FinishedFunc();                                                                                         // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInLeft__UpdateFunc
	// void MoveInLeft__UpdateFunc();                                                                                           // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__FinishedFunc
	// void MoveInRight__FinishedFunc();                                                                                        // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveInRight__UpdateFunc
	// void MoveInRight__UpdateFunc();                                                                                          // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__FinishedFunc
	// void MoveOutRight__FinishedFunc();                                                                                       // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.MoveOutRight__UpdateFunc
	// void MoveOutRight__UpdateFunc();                                                                                         // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__FinishedFunc
	// void Timeline_1__FinishedFunc();                                                                                         // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.Timeline_1__UpdateFunc
	// void Timeline_1__UpdateFunc();                                                                                           // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnReadyToSwap
	// void OnReadyToSwap(UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& Options);                  // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnNewSceneRequested
	// void OnNewSceneRequested(UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& TransitionOptions);  // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetZoomLevelSet
	// void OnTargetZoomLevelSet(float TargetZoomLevel);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.OnTargetRotationOffsetSet
	// void OnTargetRotationOffsetSet(FRotator& TargetRotationOffset);                                                          // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.ExecuteUbergraph_ItemPreviewSideSwap
	// void ExecuteUbergraph_ItemPreviewSideSwap(int32_t EntryPoint);                                                           // [0x1ebf994] Final|HasDefaults    
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C.On New Item Spawned__DelegateSignature
	// void On New Item Spawned__DelegateSignature(bool Should Show Floor);                                                     // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C
/// Size: 0x00E7 (0x000341 - 0x000428)
class ABattlePassVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(float)                                     TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A     OFFSET(get<float>, {0x35C, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A  OFFSET(get<float>, {0x360, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A OFFSET(get<T>, {0x364, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionForward                                           OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23 OFFSET(get<float>, {0x370, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23 OFFSET(get<T>, {0x374, 1, 0, 0})
	CMember(UTimelineComponent*)                       BackgroundIntenstiy                                         OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700 OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700 OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(UTimelineComponent*)                       ItemDetailsIntensity                                        OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27 OFFSET(get<float>, {0x390, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27 OFFSET(get<T>, {0x394, 1, 0, 0})
	CMember(UTimelineComponent*)                       Background_Effects                                          OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(float)                                     IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC    OFFSET(get<float>, {0x3A0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC    OFFSET(get<T>, {0x3A4, 1, 0, 0})
	CMember(UTimelineComponent*)                       IconDissolve                                                OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(float)                                     ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781  OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781       OFFSET(get<float>, {0x3B4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781     OFFSET(get<T>, {0x3B8, 1, 0, 0})
	CMember(UTimelineComponent*)                       ItemDetails                                                 OFFSET(get<T>, {0x3C0, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50 OFFSET(get<float>, {0x3C8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50 OFFSET(get<T>, {0x3CC, 1, 0, 0})
	CMember(UTimelineComponent*)                       Floor_Visibility                                            OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8 OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8    OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8 OFFSET(get<float>, {0x3E0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8 OFFSET(get<T>, {0x3E4, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionBackward                                          OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UMaterialInstance*)                        FloorMI                                                     OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FloorMID                                                    OFFSET(get<T>, {0x3F8, 8, 0, 0})
	DMember(double)                                    BG_Intensity_Max                                            OFFSET(get<double>, {0x400, 8, 0, 0})
	DMember(double)                                    BG_Intensity_Mid                                            OFFSET(get<double>, {0x408, 8, 0, 0})
	DMember(double)                                    BG_Intensity_Min                                            OFFSET(get<double>, {0x410, 8, 0, 0})
	DMember(bool)                                      bIsTransitioning                                            OFFSET(get<bool>, {0x418, 1, 0, 0})
	CMember(EBackgroundIntensityLevel)                 Intensity_Transition                                        OFFSET(get<T>, {0x419, 1, 0, 0})
	DMember(bool)                                      bIsPageA_Max                                                OFFSET(get<bool>, {0x41A, 1, 0, 0})
	DMember(bool)                                      bIsPageB_Max                                                OFFSET(get<bool>, {0x41B, 1, 0, 0})
	DMember(float)                                     PageA_X_Offset                                              OFFSET(get<float>, {0x41C, 4, 0, 0})
	DMember(float)                                     PageB_X_Offset                                              OFFSET(get<float>, {0x420, 4, 0, 0})
	DMember(float)                                     X_Offset_Anim_Distance                                      OFFSET(get<float>, {0x424, 4, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.PageTransitionIntensityUpdate
	// void PageTransitionIntensityUpdate(UMaterialInstanceDynamic* MID_Background, UMaterialInstanceDynamic* MID_Floor);       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundBackward
	// void TransitionBackgroundBackward(double Backward, double Fade, double FXTransitionFade, UMaterialInstanceDynamic* Mid); // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackgroundForward
	// void TransitionBackgroundForward(double Forward, double Fade, double FXTransitionFade, UMaterialInstanceDynamic* Mid);   // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.SetupBackgroundMaterial
	// void SetupBackgroundMaterial(UTexture2D*& TextureBackground, FVaultWorldBackgroundData& BackgroundInfo, UMaterialInstanceDynamic* Mid); // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x1ebf994] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__FinishedFunc
	// void TransitionForward__FinishedFunc();                                                                                  // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionForward__UpdateFunc
	// void TransitionForward__UpdateFunc();                                                                                    // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__FinishedFunc
	// void TransitionBackward__FinishedFunc();                                                                                 // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.TransitionBackward__UpdateFunc
	// void TransitionBackward__UpdateFunc();                                                                                   // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__FinishedFunc
	// void Background-Effects__FinishedFunc();                                                                                 // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Background-Effects__UpdateFunc
	// void Background-Effects__UpdateFunc();                                                                                   // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__FinishedFunc
	// void Floor-Visibility__FinishedFunc();                                                                                   // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.Floor-Visibility__UpdateFunc
	// void Floor-Visibility__UpdateFunc();                                                                                     // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__FinishedFunc
	// void ItemDetails__FinishedFunc();                                                                                        // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetails__UpdateFunc
	// void ItemDetails__UpdateFunc();                                                                                          // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__FinishedFunc
	// void IconDissolve__FinishedFunc();                                                                                       // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.IconDissolve__UpdateFunc
	// void IconDissolve__UpdateFunc();                                                                                         // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__FinishedFunc
	// void ItemDetailsIntensity__FinishedFunc();                                                                               // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ItemDetailsIntensity__UpdateFunc
	// void ItemDetailsIntensity__UpdateFunc();                                                                                 // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__FinishedFunc
	// void BackgroundIntenstiy__FinishedFunc();                                                                                // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.BackgroundIntenstiy__UpdateFunc
	// void BackgroundIntenstiy__UpdateFunc();                                                                                  // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionBackground
	// void OnTransitionBackground(bool bPlayForward, EBackgroundIntensityLevel IntensityTransition);                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnUpdateDisplay
	// void OnUpdateDisplay(bool bShowFloor, bool bShowEffects);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnInitialBackgroundTransition
	// void OnInitialBackgroundTransition();                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bShowItemDetails);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnIntensityChange
	// void OnIntensityChange(bool bToLowIntensity);                                                                            // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupTextureBackground
	// void OnSetupTextureBackground(UTexture2D* LoadedBackgroundTexture, FVaultWorldBackgroundData& BackgroundInfo);           // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.OnSetupMaterialBackground
	// void OnSetupMaterialBackground(UMaterialInterface* LoadedBackgroundMaterial, FVaultWorldBackgroundData& BackgroundInfo); // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C.ExecuteUbergraph_BattlePassVaultWorld
	// void ExecuteUbergraph_BattlePassVaultWorld(int32_t EntryPoint);                                                          // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C
/// Size: 0x01B8 (0x0003C8 - 0x000580)
class AVaultRotator_C : public AItemPreviewRotator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LOWPC                                      OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(USceneComponent*)                          DirectionalLights                                           OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight_LOWPC                                              OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_Mobile                                          OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_LOWPC                                           OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(USceneComponent*)                          GenericLighting                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(float)                                     Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B OFFSET(get<float>, {0x420, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B OFFSET(get<T>, {0x424, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline_YawRotation                                        OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(float)                                     Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39    OFFSET(get<float>, {0x430, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39   OFFSET(get<T>, {0x434, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline_Zoom                                               OFFSET(get<T>, {0x438, 8, 0, 0})
	SMember(FVector)                                   CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714 OFFSET(get<T>, {0x440, 24, 0, 0})
	SMember(FVector)                                   CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714 OFFSET(get<T>, {0x458, 24, 0, 0})
	DMember(float)                                     CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714 OFFSET(get<float>, {0x470, 4, 0, 0})
	DMember(float)                                     CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714  OFFSET(get<float>, {0x474, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714 OFFSET(get<T>, {0x478, 1, 0, 0})
	CMember(UTimelineComponent*)                       CameraTurn_180_to                                           OFFSET(get<T>, {0x480, 8, 0, 0})
	SMember(FVector)                                   CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 OFFSET(get<T>, {0x488, 24, 0, 0})
	SMember(FVector)                                   CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 OFFSET(get<T>, {0x4A0, 24, 0, 0})
	DMember(float)                                     CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 OFFSET(get<float>, {0x4B8, 4, 0, 0})
	DMember(float)                                     CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0    OFFSET(get<float>, {0x4BC, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 OFFSET(get<T>, {0x4C0, 1, 0, 0})
	CMember(UTimelineComponent*)                       CameraTurn_0_to                                             OFFSET(get<T>, {0x4C8, 8, 0, 0})
	SMember(FTransform)                                InitialCameraTransform                                      OFFSET(get<T>, {0x4D0, 96, 0, 0})
	CMember(USoundBase*)                               ClockwiseSound                                              OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(USoundBase*)                               CounterClockwiseSound                                       OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(bool)                                      DebugMobile_Lighting                                        OFFSET(get<bool>, {0x540, 1, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             OFFSET(get<bool>, {0x541, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x542, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x543, 1, 0, 0})
	DMember(bool)                                      DebugLighting_LOWDetailPC                                   OFFSET(get<bool>, {0x544, 1, 0, 0})
	DMember(double)                                    TargetZoomLevel                                             OFFSET(get<double>, {0x548, 8, 0, 0})
	SMember(FRotator)                                  StartingRotationOffset                                      OFFSET(get<T>, {0x550, 24, 0, 0})
	SMember(FRotator)                                  TargetRotationOffset                                        OFFSET(get<T>, {0x568, 24, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.PlaySoundWhenEnabled
	// void PlaySoundWhenEnabled(USoundBase* sound);                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SetBackgroundColor
	// void SetBackgroundColor(FLinearColor RGBA0, FLinearColor RGBA1);                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ToggleBackgroundText
	// void ToggleBackgroundText(bool bDisplayText);                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.LightControl
	// void LightControl(bool Active);                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchPCLighting_LOWDetail
	// void SwitchPCLighting_LOWDetail(bool Visibility);                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibility);                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.SetBackgroundString
	// void SetBackgroundString(FText CustomText);                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_0_to_180__FinishedFunc
	// void CameraTurn_0_to_180__FinishedFunc();                                                                                // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_0_to_180__UpdateFunc
	// void CameraTurn_0_to_180__UpdateFunc();                                                                                  // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_180_to_360__FinishedFunc
	// void CameraTurn_180_to_360__FinishedFunc();                                                                              // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.CameraTurn_180_to_360__UpdateFunc
	// void CameraTurn_180_to_360__UpdateFunc();                                                                                // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_Zoom__FinishedFunc
	// void Timeline_Zoom__FinishedFunc();                                                                                      // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_Zoom__UpdateFunc
	// void Timeline_Zoom__UpdateFunc();                                                                                        // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_YawRotation__FinishedFunc
	// void Timeline_YawRotation__FinishedFunc();                                                                               // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.Timeline_YawRotation__UpdateFunc
	// void Timeline_YawRotation__UpdateFunc();                                                                                 // [0x1ebf994] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnCameraTransitionReady
	// void OnCameraTransitionReady(bool bPrimaryToSecondary, UFortAccountItemDefinition* PrimaryRequestedItem, FSceneTransitionOptions& Options); // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetZoomLevelSet
	// void OnTargetZoomLevelSet(float TargetZoomLevel);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnSetBackgroundMessageText
	// void OnSetBackgroundMessageText(FText& BackgroundMessageText);                                                           // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnUpdateBackgroundColor
	// void OnUpdateBackgroundColor(bool bEnableAutotestBackground);                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetRotationOffsetSet
	// void OnTargetRotationOffsetSet(FRotator& TargetRotationOffset);                                                          // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetRotationOffsetCanceled
	// void OnTargetRotationOffsetCanceled();                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.OnTargetZoomLevelCanceled
	// void OnTargetZoomLevelCanceled();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C.ExecuteUbergraph_VaultRotator
	// void ExecuteUbergraph_VaultRotator(int32_t EntryPoint);                                                                  // [0x1ebf994] Final|HasDefaults    
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultSceneSinglePedestal.VaultSceneSinglePedestal_C
/// Size: 0x0000 (0x000360 - 0x000360)
class AVaultSceneSinglePedestal_C : public AItemPreviewScene
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C
/// Size: 0x0009 (0x0005E8 - 0x0005F1)
class AItemPreviewPedestal_C : public AFortCameraTargetPedestal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1521;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      Floor_Enabled                                               OFFSET(get<bool>, {0x5F0, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.Remove Floor
	// void Remove Floor(AFortItemPreviewActor* Preview);                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.OnItemDisplayed
	// void OnItemDisplayed(EFortItemType ItemType);                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewPedestal.ItemPreviewPedestal_C.ExecuteUbergraph_ItemPreviewPedestal
	// void ExecuteUbergraph_ItemPreviewPedestal(int32_t EntryPoint);                                                           // [0x1ebf994] Final                
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C
/// Size: 0x00B4 (0x000560 - 0x000614)
class AWrapPreview_C : public AAthenaWrapPreviewActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1556;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightPC                                                  OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   AssaultRiflePreview                                         OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   MechPreview                                                 OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight_StandaloneForSwitch                                OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLigh4                                                    OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight7                                                   OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight8                                                   OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight3                                                   OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLowerRight2                                              OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLeft2                                                    OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(USpotLightComponent*)                      Bounce2                                                     OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(USpotLightComponent*)                      BounceRear2                                                 OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimTopRight2                                                OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimBottomLeft2                                              OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(USceneComponent*)                          LightingPivot                                               OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Plane                                                       OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bLightsScaledForVehicle                                     OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(double)                                    DeltaScale                                                  OFFSET(get<double>, {0x608, 8, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x611, 1, 0, 0})
	DMember(bool)                                      FloorEverAllowed                                            OFFSET(get<bool>, {0x612, 1, 0, 0})
	DMember(bool)                                      debugConstructionLighting                                   OFFSET(get<bool>, {0x613, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateFloorVisibility
	// void UpdateFloorVisibility();                                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchErebusLighting
	// void SwitchErebusLighting(bool Visibility);                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateLightingScale
	// void UpdateLightingScale();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SetFloorEnabled
	// void SetFloorEnabled(bool Floor Enabled);                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.LightControl
	// void LightControl(bool Active);                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool NewParam);                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.HandleLightingScale
	// void HandleLightingScale();                                                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnSetFloorMaterial
	// void OnSetFloorMaterial(UMaterialInterface* InMaterialInstance);                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnPreviewVisualsSpawned
	// void OnPreviewVisualsSpawned(bool bUseSecondaryTransitionEffects, bool bShowFloor);                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.OnUpdateFloorMaterial
	// void OnUpdateFloorMaterial(bool bEnableAutotestBackground);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C.ExecuteUbergraph_WrapPreview
	// void ExecuteUbergraph_WrapPreview(int32_t EntryPoint);                                                                   // [0x1ebf994] Final                
};

