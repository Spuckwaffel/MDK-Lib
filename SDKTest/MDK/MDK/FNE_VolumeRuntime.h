
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: PlayspaceSystem

/// Class /Script/FNE_VolumeRuntime.FNE_Volume
/// Size: 0x0000 (0x000330 - 0x000330)
class AFNE_Volume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
};

/// Class /Script/FNE_VolumeRuntime.FNE_VolumeComponent
/// Size: 0x00A0 (0x0002F0 - 0x000390)
class UFNE_VolumeComponent : public UChildActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FMulticastInlineDelegate)                  OnPlayerStateBeginOverlap                                   OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerStateEndOverlap                                     OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorBeginOverlap                                    OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOtherActorEndOverlap                                      OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      bEnableOverlap                                              OFFSET(get<bool>, {0x330, 1, 0, 0})
	CMember(TMap<EFNEVolumeShapeTypeEnum, UStaticMesh*>) FNEVolumeShapeMap                                         OFFSET(get<T>, {0x338, 80, 0, 0})
	CMember(USpatialGameplayActorTrackerComponent*)    SpatialGameplayActorTracker                                 OFFSET(get<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UpdateOverLapShape
	// void UpdateOverLapShape(EFNEVolumeShapeTypeEnum EShape, bool bUseCustomShape, UStaticMesh* CustomShape);                 // [0xa31f5c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorEndOverlap
	// void UnBindFromOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                       // [0xa31f524] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.UnBindFromOnOtherActorBeginOverlap
	// void UnBindFromOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                     // [0xa31f480] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetStaticMeshForBoundsComponent
	// bool SetStaticMeshForBoundsComponent(UStaticMesh* NewMesh);                                                              // [0xa31f3f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetRelativeScale3DForBoundsComponent
	// void SetRelativeScale3DForBoundsComponent(FVector& Scale3D);                                                             // [0xa31f32c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.SetEnableOverlap
	// void SetEnableOverlap(bool bEnable);                                                                                     // [0xa31f2ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateEndOverlap
	// void HandleNotifyPlayerStateEndOverlap(APlayerState* TouchingPlayerState, AGameplayVolume* Volume);                      // [0xa31f1e8] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyPlayerStateBeginOverlap
	// void HandleNotifyPlayerStateBeginOverlap(APlayerState* TouchingPlayerState, AGameplayVolume* Volume);                    // [0xa31f124] Final|Native|Protected 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorEndOverlap
	// void HandleNotifyActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);                                           // [0xa31f060] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.HandleNotifyActorBeginOverlap
	// void HandleNotifyActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);                                         // [0xa31ef9c] Final|Native|Private 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolumeBoundsComponent
	// UOverlapComponent* GetSpawnedVolumeBoundsComponent();                                                                    // [0xa31ef78] Final|Native|Public|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetSpawnedVolume
	// AFNE_Volume* GetSpawnedVolume();                                                                                         // [0xa31ef54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetEnableOverlap
	// bool GetEnableOverlap();                                                                                                 // [0x9e02214] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllTrackedActors
	// TArray<AActor*> GetAllTrackedActors();                                                                                   // [0xa31ef14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerStates
	// TArray<APlayerState*> GetAllPlayerStates();                                                                              // [0xa31eed4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.GetAllPlayerPawns
	// TArray<APawn*> GetAllPlayerPawns();                                                                                      // [0xa31ee68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorEndOverlap
	// bool BindToOnOtherActorEndOverlap(FDelegateProperty& InEvent);                                                           // [0xa31edb8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/FNE_VolumeRuntime.FNE_VolumeComponent.BindToOnOtherActorBeginOverlap
	// bool BindToOnOtherActorBeginOverlap(FDelegateProperty& InEvent);                                                         // [0xa31ed08] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Enum /Script/FNE_VolumeRuntime.EFNEVolumeShapeTypeEnum
/// Size: 0x04
enum EFNEVolumeShapeTypeEnum : uint8_t
{
	EFNEVolumeShapeTypeEnum__BoxVolume0                                              = 0,
	EFNEVolumeShapeTypeEnum__CylinderVolume1                                         = 1,
	EFNEVolumeShapeTypeEnum__SphereVolume2                                           = 2,
	EFNEVolumeShapeTypeEnum__EFNEVolumeShapeTypeEnum_MAX3                            = 3
};

