
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

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultRotator.VaultRotator_C
/// Size: 0x01B8 (0x0003C8 - 0x000580)
class AVaultRotator_C : public AItemPreviewRotator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LOWPC                                      ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(USceneComponent*)                          DirectionalLights                                           ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight_LOWPC                                              ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_Mobile                                          ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_LOWPC                                           ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(USceneComponent*)                          GenericLighting                                             ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(float)                                     Timeline_YawRotation_YawInterpAlpha_F13714DD4AFE0C9C8857E2950BEC127B ___ OFFSET(get<float>, {0x420, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_YawRotation__Direction_F13714DD4AFE0C9C8857E2950BEC127B ___ OFFSET(get<T>, {0x424, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline_YawRotation                                        ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(float)                                     Timeline_Zoom_ZoomLevel_6FFD6729471BD965D850258DA1C0AF39    ___ OFFSET(get<float>, {0x430, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_Zoom__Direction_6FFD6729471BD965D850258DA1C0AF39   ___ OFFSET(get<T>, {0x434, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline_Zoom                                               ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	SMember(FVector)                                   CameraTurn_180_to_360_CameraRotationOffset_DF51680448A0BDB5D459C9BB5786D714 ___ OFFSET(get<T>, {0x440, 24, 0, 0})
	SMember(FVector)                                   CameraTurn_180_to_360_CameraPositionOffset_DF51680448A0BDB5D459C9BB5786D714 ___ OFFSET(get<T>, {0x458, 24, 0, 0})
	DMember(float)                                     CameraTurn_180_to_360_DirectionRotation_DF51680448A0BDB5D459C9BB5786D714 ___ OFFSET(get<float>, {0x470, 4, 0, 0})
	DMember(float)                                     CameraTurn_180_to_360_FoV_DF51680448A0BDB5D459C9BB5786D714  ___ OFFSET(get<float>, {0x474, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CameraTurn_180_to_360__Direction_DF51680448A0BDB5D459C9BB5786D714 ___ OFFSET(get<T>, {0x478, 1, 0, 0})
	CMember(UTimelineComponent*)                       CameraTurn_180_to                                           ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	SMember(FVector)                                   CameraTurn_0_to_180_CameraRotationOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 ___ OFFSET(get<T>, {0x488, 24, 0, 0})
	SMember(FVector)                                   CameraTurn_0_to_180_CameraPositionOffset_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 ___ OFFSET(get<T>, {0x4A0, 24, 0, 0})
	DMember(float)                                     CameraTurn_0_to_180_DirectionalRotation_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 ___ OFFSET(get<float>, {0x4B8, 4, 0, 0})
	DMember(float)                                     CameraTurn_0_to_180_FoV_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0    ___ OFFSET(get<float>, {0x4BC, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CameraTurn_0_to_180__Direction_EEFFCB9D4EE2DC181BC00CBD7C0E7EF0 ___ OFFSET(get<T>, {0x4C0, 1, 0, 0})
	CMember(UTimelineComponent*)                       CameraTurn_0_to                                             ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	SMember(FTransform)                                InitialCameraTransform                                      ___ OFFSET(get<T>, {0x4D0, 96, 0, 0})
	CMember(USoundBase*)                               ClockwiseSound                                              ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(USoundBase*)                               CounterClockwiseSound                                       ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(bool)                                      DebugMobile_Lighting                                        ___ OFFSET(get<bool>, {0x540, 1, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             ___ OFFSET(get<bool>, {0x541, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x542, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    ___ OFFSET(get<bool>, {0x543, 1, 0, 0})
	DMember(bool)                                      DebugLighting_LOWDetailPC                                   ___ OFFSET(get<bool>, {0x544, 1, 0, 0})
	DMember(double)                                    TargetZoomLevel                                             ___ OFFSET(get<double>, {0x548, 8, 0, 0})
	SMember(FRotator)                                  StartingRotationOffset                                      ___ OFFSET(get<T>, {0x550, 24, 0, 0})
	SMember(FRotator)                                  TargetRotationOffset                                        ___ OFFSET(get<T>, {0x568, 24, 0, 0})
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      Floor_Enabled                                               ___ OFFSET(get<bool>, {0x5F0, 1, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/WrapPreview.WrapPreview_C
/// Size: 0x00B4 (0x000560 - 0x000614)
class AWrapPreview_C : public AAthenaWrapPreviewActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1556;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightPC                                                  ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   AssaultRiflePreview                                         ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   MechPreview                                                 ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight_StandaloneForSwitch                                ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLigh4                                                    ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight7                                                   ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight8                                                   ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight3                                                   ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLowerRight2                                              ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLeft2                                                    ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(USpotLightComponent*)                      Bounce2                                                     ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(USpotLightComponent*)                      BounceRear2                                                 ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimTopRight2                                                ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimBottomLeft2                                              ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(USceneComponent*)                          LightingPivot                                               ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Plane                                                       ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bLightsScaledForVehicle                                     ___ OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(double)                                    DeltaScale                                                  ___ OFFSET(get<double>, {0x608, 8, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    ___ OFFSET(get<bool>, {0x611, 1, 0, 0})
	DMember(bool)                                      FloorEverAllowed                                            ___ OFFSET(get<bool>, {0x612, 1, 0, 0})
	DMember(bool)                                      debugConstructionLighting                                   ___ OFFSET(get<bool>, {0x613, 1, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C
/// Size: 0x01DC (0x000648 - 0x000824)
class APartyDisplayManagerBP_C : public APartyDisplayManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2084;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UChildActorComponent*)                     PrefabActorComp                                             ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ScalePivot                                                  ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     PivotHolder                                                 ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 CelebratoryFX                                               ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	DMember(float)                                     HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8    ___ OFFSET(get<float>, {0x688, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8 ___ OFFSET(get<T>, {0x68C, 1, 0, 0})
	CMember(UTimelineComponent*)                       HoloMatColorPulse                                           ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	DMember(float)                                     ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC    ___ OFFSET(get<float>, {0x698, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC ___ OFFSET(get<T>, {0x69C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleAnimEvolve                                             ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	DMember(float)                                     ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43     ___ OFFSET(get<float>, {0x6A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43  ___ OFFSET(get<T>, {0x6AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleAnimLevel                                              ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	SMember(FTimerHandle)                              TimerHandle                                                 ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	DMember(double)                                    Rotation                                                    ___ OFFSET(get<double>, {0x6C0, 8, 0, 0})
	CMember(UFortItem*)                                ItemToRepresent                                             ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	DMember(bool)                                      PreviewRotation                                             ___ OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	CMember(UCurveFloat*)                              RotationAnimation                                           ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UParticleSystem*)                          LevelUpFX                                                   ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(UParticleSystem*)                          EvolveUpFX                                                  ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	SMember(FVector)                                   FXTargetLocation                                            ___ OFFSET(get<T>, {0x6F0, 24, 0, 0})
	DMember(bool)                                      IsCharacter                                                 ___ OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      IsEvolve                                                    ___ OFFSET(get<bool>, {0x709, 1, 0, 0})
	CMember(UParticleSystem*)                          CharLevelUpFX                                               ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UParticleSystem*)                          CharEvolveUpFX                                              ___ OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 UIoverrideMID                                               ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	DMember(bool)                                      HasResetVisuals                                             ___ OFFSET(get<bool>, {0x728, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem1                                             ___ OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem2                                             ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UParticleSystem*)                          CharSwapTransitionFX                                        ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	DMember(bool)                                      IsCharacterVisible                                          ___ OFFSET(get<bool>, {0x748, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          HeroPawn                                                    ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	DMember(bool)                                      SanityChecker                                               ___ OFFSET(get<bool>, {0x758, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_HoloMaterial                                            ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	SMember(FName)                                     HideElement                                                 ___ OFFSET(get<T>, {0x768, 4, 0, 0})
	SMember(FName)                                     VertexRange                                                 ___ OFFSET(get<T>, {0x76C, 4, 0, 0})
	SMember(FName)                                     HideElement1                                                ___ OFFSET(get<T>, {0x770, 4, 0, 0})
	SMember(FName)                                     HideElement2                                                ___ OFFSET(get<T>, {0x774, 4, 0, 0})
	SMember(FName)                                     HideElement3                                                ___ OFFSET(get<T>, {0x778, 4, 0, 0})
	SMember(FName)                                     HideElement4                                                ___ OFFSET(get<T>, {0x77C, 4, 0, 0})
	SMember(FName)                                     HideElement5                                                ___ OFFSET(get<T>, {0x780, 4, 0, 0})
	SMember(FName)                                     HideElement6                                                ___ OFFSET(get<T>, {0x784, 4, 0, 0})
	SMember(FName)                                     HideElement7                                                ___ OFFSET(get<T>, {0x788, 4, 0, 0})
	SMember(FName)                                     HideElement8                                                ___ OFFSET(get<T>, {0x78C, 4, 0, 0})
	SMember(FName)                                     HideElement9                                                ___ OFFSET(get<T>, {0x790, 4, 0, 0})
	SMember(FVector)                                   ScalePivotPreScaleLocation                                  ___ OFFSET(get<T>, {0x798, 24, 0, 0})
	SMember(FVector)                                   StaticMeshPreScaleLocation                                  ___ OFFSET(get<T>, {0x7B0, 24, 0, 0})
	SMember(FVector)                                   SkelMeshPreScaleLocation                                    ___ OFFSET(get<T>, {0x7C8, 24, 0, 0})
	SMember(FVector)                                   PrefabPreScaleLocation                                      ___ OFFSET(get<T>, {0x7E0, 24, 0, 0})
	CMember(UParticleSystemComponent*)                 GhostPistolVFX                                              ___ OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Ghost_Sword_VFX                                             ___ OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Ghost_Sword_Mesh                                            ___ OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 TransitionFXComponent                                       ___ OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(UParticleSystem*)                          CharSwapTransitionFXLoop                                    ___ OFFSET(get<T>, {0x818, 8, 0, 0})
	SMember(FName)                                     HideElementsOnlyConsidersRedChannel                         ___ OFFSET(get<T>, {0x820, 4, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemOnPawnPreview.ItemOnPawnPreview_C
/// Size: 0x00F0 (0x0006B0 - 0x0007A0)
class AItemOnPawnPreview_C : public AFortItemPreviewOnPawnActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow1                                                      ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               Directional_Light_For_Atmosphere_PC                         ___ OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightPC                                                  ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight_StandaloneForSwitch                                ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight5                                                   ___ OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight6                                                   ___ OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLigh3                                                    ___ OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight2                                                   ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(USpotLightComponent*)                      BounceRear1                                                 ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLowerRight1                                              ___ OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLeft1                                                    ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimTopRight1                                                ___ OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimBottomLeft1                                              ___ OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(USpotLightComponent*)                      Bounce1                                                     ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(USceneComponent*)                          LightTransform                                              ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Plane                                                       ___ OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Sample_Mesh                                                 ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    ___ OFFSET(get<bool>, {0x758, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x759, 1, 0, 0})
	DMember(bool)                                      debugConstructionLighting                                   ___ OFFSET(get<bool>, {0x75A, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 ObscuringLoopEmitter                                        ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	SMember(FRotator)                                  ToonLightRotatio                                            ___ OFFSET(get<T>, {0x768, 24, 0, 0})
	DMember(bool)                                      bIsBattlePassReward                                         ___ OFFSET(get<bool>, {0x780, 1, 0, 0})
	SMember(FTimerHandle)                              LOD_StreamingSafetyTimer                                    ___ OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultFloorMaterial                                        ___ OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UMaterialInterface*)                       CustomFloorMaterial                                         ___ OFFSET(get<T>, {0x798, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AVaultWeaponPlacementHelper_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CUBE                                                        ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Sparkle                                         ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl02                                         ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl01                                         ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CharacterPlacement                                          ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UStaticMesh*)                              Mesh                                                        ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher                                          ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
/// Size: 0x00C8 (0x000290 - 0x000358)
class AVaultCharacterPlacementHelper_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CharacterPlacement                                          ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FTransform)                                OriginalTransform                                           ___ OFFSET(get<T>, {0x2B0, 96, 0, 0})
	SMember(FVector)                                   OffsetTranslate                                             ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(FRotator)                                  OffsetRotate                                                ___ OFFSET(get<T>, {0x328, 24, 0, 0})
	DMember(bool)                                      Athena                                                      ___ OFFSET(get<bool>, {0x340, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnZoomLevelUpdated                                          ___ OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/BackgroundString/UI_Background_Strings.UI_Background_Strings_C
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UUI_Background_Strings_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CustomString                                                ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FText)                                     CustomText                                                  ___ OFFSET(get<T>, {0x2B8, 24, 0, 0})
};

/// Class /Game/Environments/FrontEnd/BackPlates/Blueprint/BP_Background_Raytracing.BP_Background_Raytracing_C
/// Size: 0x0040 (0x000290 - 0x0002D0)
class ABP_Background_Raytracing_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UStaticMeshComponent*)                     SM_InvertedSphere_BackPlate_Half                            ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      FullSphere                                                  ___ OFFSET(get<bool>, {0x2A0, 1, 0, 0})
	DMember(bool)                                      UseCubemap                                                  ___ OFFSET(get<bool>, {0x2A1, 1, 0, 0})
	DMember(double)                                    Brightness                                                  ___ OFFSET(get<double>, {0x2A8, 8, 0, 0})
	CMember(UTexture*)                                 _2dTexture                                                  ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UTexture*)                                 Cubemap                                                     ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FLinearColor)                              FadeColor                                                   ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
};

/// Class /Game/Environments/FrontEnd/BackPlates/CMSLobbyDirector.CMSLobbyDirector_C
/// Size: 0x0008 (0x000460 - 0x000468)
class ACMSLobbyDirector_C : public ADynamicBackgroundDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x460, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_CharacterRimlightDisabler.BP_CharacterRimlightDisabler_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ABP_CharacterRimlightDisabler_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
/// Size: 0x0020 (0x000A00 - 0x000A20)
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UCameraComponent*)                         CameraActor                                                 ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	DMember(bool)                                      MouseDown                                                   ___ OFFSET(get<bool>, {0xA10, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          CachedPawn                                                  ___ OFFSET(get<T>, {0xA18, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C
/// Size: 0x00D0 (0x000290 - 0x000360)
class AVaultCharacterLightingBP_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow1                                                      ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight4                                                   ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight3                                                   ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight2                                                   ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_Mobile                                          ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_LOWPC                                           ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight_LOWPC                                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LOWPC                                      ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobil                                            ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLowerRight                                               ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimLeft                                                     ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimTopRight                                                 ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimBottomLeft                                               ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(USpotLightComponent*)                      KeyLight                                                    ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(USpotLightComponent*)                      Bounce                                                      ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USpotLightComponent*)                      BounceRear                                                  ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USceneComponent*)                          SharedRoot                                                  ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      DebugMobile_Lighting                                        ___ OFFSET(get<bool>, {0x338, 1, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             ___ OFFSET(get<bool>, {0x339, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x33A, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    ___ OFFSET(get<bool>, {0x33B, 1, 0, 0})
	DMember(bool)                                      DebugLighting_LOWDetailPC                                   ___ OFFSET(get<bool>, {0x33C, 1, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightVector                                    ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightColor                                     ___ OFFSET(get<T>, {0x350, 16, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C
/// Size: 0x0120 (0x000290 - 0x0003B0)
class ACameraAnimationTransition_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4      ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4      ___ OFFSET(get<T>, {0x2A4, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraBR                                                    ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FTransform)                                CameraLocationBR                                            ___ OFFSET(get<T>, {0x2C0, 96, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraBR16Player                                            ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraCreative                                              ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(AFortnitePartyBackdrop_Camera_C*)          CameraCreative16Player                                      ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FTransform)                                CameraLocationCreative                                      ___ OFFSET(get<T>, {0x340, 96, 0, 0})
	DMember(double)                                    FOVPostion1                                                 ___ OFFSET(get<double>, {0x3A0, 8, 0, 0})
	DMember(double)                                    FOVPostion2                                                 ___ OFFSET(get<double>, {0x3A8, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
/// Size: 0x008C (0x000290 - 0x00031C)
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 796;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(ADirectionalLight*)                        DirectionLight                                              ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(ASkyLight*)                                SkyLight                                                    ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<APointLight*>)                      Pointlights                                                 ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(AExponentialHeightFog*)                    ExponentialHeightFog                                        ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(ADirectionalLight*)                        DirectionalLight_LowDetailMode                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<AEmitter*>)                         ParticleSystems                                             ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      DebugLOWQualityLighting                                     ___ OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	CMember(ASkyLight*)                                SkyLight_LowDetailMode                                      ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(AExponentialHeightFog*)                    ExponentialHeightfog_LowDetailMode                          ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      LOW_FX_Setting_Use_MobileLighting                           ___ OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      IsLightalreadyActive                                        ___ OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightVector                                    ___ OFFSET(get<T>, {0x2FC, 16, 0, 0})
	SMember(FLinearColor)                              MPC_ManualSunlightColor                                     ___ OFFSET(get<T>, {0x30C, 16, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
/// Size: 0x0071 (0x000A00 - 0x000A71)
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2673;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	SMember(FTransform)                                SavedTransform                                              ___ OFFSET(get<T>, {0xA10, 96, 0, 0})
	DMember(bool)                                      Active                                                      ___ OFFSET(get<bool>, {0xA70, 1, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_DetailLevelMesh.BP_DetailLevelMesh_C
/// Size: 0x001A (0x000290 - 0x0002AA)
class ABP_DetailLevelMesh_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 682;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(bool)                                      AlwaysVisible                                               ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      NotVisibleOnSwitch                                          ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/VaultWorld.VaultWorld_C
/// Size: 0x0009 (0x000338 - 0x000341)
class AVaultWorld_C : public AFortItemPreviewWorld
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 833;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      bIsPrimaryBackgroundActive                                  ___ OFFSET(get<bool>, {0x340, 1, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/SpecialEventVaultWorld.SpecialEventVaultWorld_C
/// Size: 0x0087 (0x000341 - 0x0003C8)
class ASpecialEventVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_1EDCEF5F41216A9DADD25897C8B68493       ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_1EDCEF5F41216A9DADD25897C8B68493     ___ OFFSET(get<T>, {0x35C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ItemDetails                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_37382717410D795E9E7E0990FC3EFCC2 ___ OFFSET(get<float>, {0x368, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_37382717410D795E9E7E0990FC3EFCC2 ___ OFFSET(get<T>, {0x36C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Floor_Visibility                                            ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_7B5688E44724D9F68D3C20A520093829 ___ OFFSET(get<float>, {0x378, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_7B5688E44724D9F68D3C20A520093829 ___ OFFSET(get<T>, {0x37C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Background_Effects                                          ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_FDB9DC244ED5578954F07A87EDA84CA5 ___ OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     TransitionForward_Pre_TransitionOffset_FDB9DC244ED5578954F07A87EDA84CA5 ___ OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_FDB9DC244ED5578954F07A87EDA84CA5  ___ OFFSET(get<float>, {0x390, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_FDB9DC244ED5578954F07A87EDA84CA5 ___ OFFSET(get<T>, {0x394, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionForward                                           ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_9CCDE9524354AF859735079DD2ED12AA ___ OFFSET(get<float>, {0x3A0, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Pre_Transition_Offset_9CCDE9524354AF859735079DD2ED12AA ___ OFFSET(get<float>, {0x3A4, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_9CCDE9524354AF859735079DD2ED12AA ___ OFFSET(get<float>, {0x3A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_9CCDE9524354AF859735079DD2ED12AA ___ OFFSET(get<T>, {0x3AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionBackward                                          ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UMaterialInstance*)                        FloorMI                                                     ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FloorMID                                                    ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/ItemPreviewSideSwap.ItemPreviewSideSwap_C
/// Size: 0x0180 (0x0003D0 - 0x000550)
class AItemPreviewSideSwap_C : public AItemPreviewSwapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_Mobile                                          ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobile                                           ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight_LOWPC                                              ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_LOWPC                                           ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LOWPC                                      ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(USceneComponent*)                          DirectionalLights                                           ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(USceneComponent*)                          GenericLighting                                             ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(float)                                     Timeline_1_RotationOffsetLerp_F81FDC884C74C17EBF78B0B928138870 ___ OFFSET(get<float>, {0x428, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_1__Direction_F81FDC884C74C17EBF78B0B928138870      ___ OFFSET(get<T>, {0x42C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	DMember(float)                                     Timeline_0_ZoomLevel_F92CF88A423F8300F5A67CB744A0DA45       ___ OFFSET(get<float>, {0x438, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_F92CF88A423F8300F5A67CB744A0DA45      ___ OFFSET(get<T>, {0x43C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline1                                                   ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FVector)                                   MoveOutRight_Location_89D9209D4024EFFF08326CBAE53949F1      ___ OFFSET(get<T>, {0x448, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveOutRight__Direction_89D9209D4024EFFF08326CBAE53949F1    ___ OFFSET(get<T>, {0x460, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveOutRight                                                ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FVector)                                   MoveInRight_Location_3FE1D8EB4B6BCBA0C3D120B521728FCE       ___ OFFSET(get<T>, {0x470, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveInRight__Direction_3FE1D8EB4B6BCBA0C3D120B521728FCE     ___ OFFSET(get<T>, {0x488, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveInRight                                                 ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FVector)                                   MoveInLeft_Location_B344DA1A46B3CB2F19E2E0A1F7E36A47        ___ OFFSET(get<T>, {0x498, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveInLeft__Direction_B344DA1A46B3CB2F19E2E0A1F7E36A47      ___ OFFSET(get<T>, {0x4B0, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveInLeft                                                  ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(FVector)                                   MoveOutLeft_Location_6890893D4037128B5CB3B2AE9A4AE0A1       ___ OFFSET(get<T>, {0x4C0, 24, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           MoveOutLeft__Direction_6890893D4037128B5CB3B2AE9A4AE0A1     ___ OFFSET(get<T>, {0x4D8, 1, 0, 0})
	CMember(UTimelineComponent*)                       MoveOutLeft                                                 ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	DMember(bool)                                      DebugMobile_Lighting                                        ___ OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             ___ OFFSET(get<bool>, {0x4E9, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x4EA, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    ___ OFFSET(get<bool>, {0x4EB, 1, 0, 0})
	DMember(bool)                                      DebugLighting_LOWDetailPC                                   ___ OFFSET(get<bool>, {0x4EC, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  On_New_Item_Spawned                                         ___ OFFSET(get<T>, {0x4F0, 16, 0, 0})
	DMember(double)                                    CurrentZoomLevel                                            ___ OFFSET(get<double>, {0x500, 8, 0, 0})
	DMember(double)                                    TargetZoomLevel                                             ___ OFFSET(get<double>, {0x508, 8, 0, 0})
	SMember(FRotator)                                  TargetRotationOffset                                        ___ OFFSET(get<T>, {0x510, 24, 0, 0})
	SMember(FRotator)                                  OrigRotationOffset                                          ___ OFFSET(get<T>, {0x528, 24, 0, 0})
	CMember(UFortAccountItemDefinition*)               Primary_Requested_Item                                      ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortAccountItemDefinition*)               Previous_Requested_Item                                     ___ OFFSET(get<T>, {0x548, 8, 0, 0})
};

/// Class /Game/Environments/FrontEnd/Blueprints/ItemPreview/BattlePassVaultWorld.BattlePassVaultWorld_C
/// Size: 0x00E7 (0x000341 - 0x000428)
class ABattlePassVaultWorld_C : public AVaultWorld_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     floor                                                       ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     TransitionForward_FX_Transition_Fade_46DACBD74D0A8B2278950785C007984A ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(float)                                     TransitionForward_Fade_46DACBD74D0A8B2278950785C007984A     ___ OFFSET(get<float>, {0x35C, 4, 0, 0})
	DMember(float)                                     TransitionForward_Forward_46DACBD74D0A8B2278950785C007984A  ___ OFFSET(get<float>, {0x360, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionForward__Direction_46DACBD74D0A8B2278950785C007984A ___ OFFSET(get<T>, {0x364, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionForward                                           ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     BackgroundIntenstiy_Intensity_8C51F99C4026F0204F2184AD9661CD23 ___ OFFSET(get<float>, {0x370, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           BackgroundIntenstiy__Direction_8C51F99C4026F0204F2184AD9661CD23 ___ OFFSET(get<T>, {0x374, 1, 0, 0})
	CMember(UTimelineComponent*)                       BackgroundIntenstiy                                         ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(float)                                     ItemDetailsIntensity_TextureIntensity_1EC6205345E5A708DA53B5A9449F1700 ___ OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetailsIntensity__Direction_1EC6205345E5A708DA53B5A9449F1700 ___ OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(UTimelineComponent*)                       ItemDetailsIntensity                                        ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(float)                                     Background_Effects_SetStreaks_50767E4640E86998EC96B7B2D57E5E27 ___ OFFSET(get<float>, {0x390, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Background_Effects__Direction_50767E4640E86998EC96B7B2D57E5E27 ___ OFFSET(get<T>, {0x394, 1, 0, 0})
	CMember(UTimelineComponent*)                       Background_Effects                                          ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(float)                                     IconDissolve_NewTrack_0_983A4DA644BE5CFAED0C378063FC66FC    ___ OFFSET(get<float>, {0x3A0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           IconDissolve__Direction_983A4DA644BE5CFAED0C378063FC66FC    ___ OFFSET(get<T>, {0x3A4, 1, 0, 0})
	CMember(UTimelineComponent*)                       IconDissolve                                                ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(float)                                     ItemDetails_Icon_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781  ___ OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(float)                                     ItemDetails_X_Offset_F4D1C4E246C708FA1F53EDA5A3FEE781       ___ OFFSET(get<float>, {0x3B4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ItemDetails__Direction_F4D1C4E246C708FA1F53EDA5A3FEE781     ___ OFFSET(get<T>, {0x3B8, 1, 0, 0})
	CMember(UTimelineComponent*)                       ItemDetails                                                 ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	DMember(float)                                     Floor_Visibility_FloorMask_CE7E338346E82397065B65AA77823F50 ___ OFFSET(get<float>, {0x3C8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Floor_Visibility__Direction_CE7E338346E82397065B65AA77823F50 ___ OFFSET(get<T>, {0x3CC, 1, 0, 0})
	CMember(UTimelineComponent*)                       Floor_Visibility                                            ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(float)                                     TransitionBackward_fx_Transition_fade_7073CD0840227233D3A64795A5A1B1B8 ___ OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Fade_7073CD0840227233D3A64795A5A1B1B8    ___ OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(float)                                     TransitionBackward_Backward_7073CD0840227233D3A64795A5A1B1B8 ___ OFFSET(get<float>, {0x3E0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TransitionBackward__Direction_7073CD0840227233D3A64795A5A1B1B8 ___ OFFSET(get<T>, {0x3E4, 1, 0, 0})
	CMember(UTimelineComponent*)                       TransitionBackward                                          ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UMaterialInstance*)                        FloorMI                                                     ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FloorMID                                                    ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	DMember(double)                                    BG_Intensity_Max                                            ___ OFFSET(get<double>, {0x400, 8, 0, 0})
	DMember(double)                                    BG_Intensity_Mid                                            ___ OFFSET(get<double>, {0x408, 8, 0, 0})
	DMember(double)                                    BG_Intensity_Min                                            ___ OFFSET(get<double>, {0x410, 8, 0, 0})
	DMember(bool)                                      bIsTransitioning                                            ___ OFFSET(get<bool>, {0x418, 1, 0, 0})
	CMember(EBackgroundIntensityLevel)                 Intensity_Transition                                        ___ OFFSET(get<T>, {0x419, 1, 0, 0})
	DMember(bool)                                      bIsPageA_Max                                                ___ OFFSET(get<bool>, {0x41A, 1, 0, 0})
	DMember(bool)                                      bIsPageB_Max                                                ___ OFFSET(get<bool>, {0x41B, 1, 0, 0})
	DMember(float)                                     PageA_X_Offset                                              ___ OFFSET(get<float>, {0x41C, 4, 0, 0})
	DMember(float)                                     PageB_X_Offset                                              ___ OFFSET(get<float>, {0x420, 4, 0, 0})
	DMember(float)                                     X_Offset_Anim_Distance                                      ___ OFFSET(get<float>, {0x424, 4, 0, 0})
};

