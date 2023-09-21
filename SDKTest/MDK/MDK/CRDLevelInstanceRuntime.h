
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: PlayspaceSystem

/// Class /Script/CRDLevelInstanceRuntime.FortAthenaMutator_LevelInstanceDevice
/// Size: 0x0008 (0x000338 - 0x000340)
class AFortAthenaMutator_LevelInstanceDevice : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(TWeakObjectPtr<ALevelInstanceGameplayVolume*>) CachedGameplayVolume                                    OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume
/// Size: 0x0188 (0x000330 - 0x0004B8)
class ALevelInstanceGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceResolved                                     OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDisabledStateChanged                                      OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceGuidChanged                                  OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceNameChanged                                  OFFSET(get<T>, {0x398, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceSizeChanged                                  OFFSET(get<T>, {0x3A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLevelInstanceContentCollectionChanged                     OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(bool)                                      bEditMode                                                   OFFSET(get<bool>, {0x3C9, 1, 0, 0})
	DMember(bool)                                      bDisabled                                                   OFFSET(get<bool>, {0x3CA, 1, 0, 0})
	CMember(ESpatialLoadingState)                      LoadingState                                                OFFSET(get<T>, {0x3CB, 1, 0, 0})
	SMember(FString)                                   LevelInstanceName                                           OFFSET(get<T>, {0x3D0, 16, 0, 0})
	DMember(bool)                                      bInstanceLoaded                                             OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(bool)                                      bWantsLevelLoaded                                           OFFSET(get<bool>, {0x3E1, 1, 0, 0})
	DMember(bool)                                      bConvertStructuresToProps                                   OFFSET(get<bool>, {0x3E3, 1, 0, 0})
	CMember(AFortMinigame*)                            CachedMinigame                                              OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UFortMutatorListComponent*)                MutatorListComponent                                        OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UFortClassTrackerComponent*)               ClassFilterComponent                                        OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(TArray<UClass*>)                           BlacklistedClasses                                          OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FGuid)                                     LevelInstanceSaveActorGuid                                  OFFSET(get<T>, {0x460, 16, 0, 0})
	CMember(AFortLevelInstanceSaveActor*)              LevelInstanceSaveActor                                      OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded
	// void SetWantsLevelLoaded(bool bInWantsLevelLoaded);                                                                      // [0x9ac5644] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation
	// void SetReadyForInstantiation(bool bReady);                                                                              // [0x9ac55c4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName
	// void SetLevelInstanceName(FString InName);                                                                               // [0x9ac4f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection
	// void SetLevelInstanceContentCollection(TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection);                 // [0x9ac4e1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid
	// void SetLevelInstanceActorGuid(FGuid InLevelInstanceActorGuid);                                                          // [0x9ac4cb4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode
	// void SetEditMode(bool bInEditMode);                                                                                      // [0x9ac4bfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay
	// void RemoveActorWhenEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                   // [0x9ac4b38] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied
	// void RemoveActorWhenDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x9ac4484] Final|Native|Protected|HasDefaults 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged
	// void OnVolumeChanged();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled
	// void OnRep_IsDisabled();                                                                                                 // [0x9ac4470] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded
	// void OnRep_InstanceLoaded();                                                                                             // [0x9ac4470] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode
	// void OnRep_EditMode();                                                                                                   // [0x9ac4470] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged
	// void OnMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);                                  // [0x9ac43ac] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged
	// void LevelInstanceSizeChanged(AActor* InstigatorActor);                                                                  // [0x9ac432c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged
	// void LevelInstanceNameChanged(FString Name);                                                                             // [0x9ac3c78] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged
	// void LevelInstanceContentCollectionChanged(AActor* InstigatorActor, TWeakObjectPtr<UFortCreativeActorCollection*> ContentCollection); // [0x9ac3b4c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged
	// void LevelInstanceContentChanged(AActor* InstigatorActor);                                                               // [0x9ac3acc] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed
	// void LevelInstanceBeingDestroyed();                                                                                      // [0x9ac3ab8] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor
	// bool IsPreviewActor();                                                                                                   // [0x9ac3a94] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode
	// bool IsInEditMode();                                                                                                     // [0x9ac3a7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled
	// bool IsDisabled();                                                                                                       // [0x9ac3a64] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor
	// void InstantiateFromLevelInstanceSaveActor();                                                                            // [0x9ac3a50] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged
	// void HandleActorHealthChanged(AActor* Actor, float NewHealth);                                                           // [0x9ac399c] Final|Native|Protected 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName
	// FString GetLevelInstanceName();                                                                                          // [0x9ac3980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor
	// AFortLevelInstanceSaveActor* CreateLevelInstanceSaveActor();                                                             // [0x9ac395c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes
	// void CheckForOverlappingVolumes();                                                                                       // [0x9ac3948] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CRDLevelInstanceRuntime.LevelInstanceItemListComponent
/// Size: 0x0000 (0x000128 - 0x000128)
class ULevelInstanceItemListComponent : public UFortMinigameItemContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

