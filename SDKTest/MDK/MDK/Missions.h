
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: Characters
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UMissionBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_LockThenRotateInPlace
	// void NPC_LockThenRotateInPlace(bool LockedInPlace, AFortPlayerPawn* PlayerPawn, AFortAIPawn* SurvivorPawn, UObject* __WorldContext); // [0x154a140] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetControllersNearActorThatRequireQuestObjective
	// void GetControllersNearActorThatRequireQuestObjective(float Distance, AActor* Actor, UFortQuestItemDefinition* Quest Item, FName Quest Item Backend Objective Name, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersNearbyThatRequireQuest, bool& SuccessfullyFoundPlayer); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HaveAllPlayersCompletedQuest
	// void HaveAllPlayersCompletedQuest(UFortQuestItemDefinition* QuestItem, UObject* __WorldContext, bool& AllPlayersCompletedQuest); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjectiveHandle
	// void HasPlayerCompletedQuestObjectiveHandle(AFortPlayerController* PlayerController, UFortQuestItemDefinition* QuestReference, FDataTableRowHandle QuestBackendObjectiveHandle, UObject* __WorldContext, AFortPlayerController*& PlayerControllerOut, bool& CompletedQuestObjective); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyPlayerRequireQuestObjective
	// void DoesAnyPlayerRequireQuestObjective(UFortQuestItemDefinition* QuestReference, FDataTableRowHandle QuestObjectiveHandle, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersWhoRequireObjective, bool& SomebodyRequiresObjective); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HideParticleComponentsAttachedToMesh
	// void HideParticleComponentsAttachedToMesh(UStaticMeshComponent* MeshComponent, UObject* __WorldContext, bool& SuccessfullyDeactivatedParticle); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjective
	// void HasPlayerCompletedQuestObjective(AFortPlayerController* PlayerController, UFortQuestItemDefinition* QuestReference, FName QuestBackendObjectiveName, UObject* __WorldContext, AFortPlayerController*& PlayerControllerOut, bool& CompletedQuestObjective); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor
	// void GetContributingControllersNearActor(float Distance, AActor* Actor, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayerControllersNearby, bool& SuccessfullyFoundPlayer); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors
	// void PointLocationsBetweenTwoVectors(FVector Vector 1, FVector Vector 2, int32_t HowManyPoints, UObject* __WorldContext, TArray<FVector>& VectorPoints, bool& SuccessfullyFoundPoints); // [0x154a140] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
	// void GetCurrentDifficulty(UObject* __WorldContext, float& Difficulty, bool& Success);                                    // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
	// void ApplyDifficultyOffset(FName RowName, float BaseDifficulty, UObject* __WorldContext, bool& Success);                 // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
	// void DistanceBetweenTwoVectors(FVector vector1, FVector Vector2, UObject* __WorldContext, float& Distance);              // [0x154a140] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
	// void HasPlayerCompletedQuest(AFortPlayerController* PlayerController, UFortQuestItemDefinition* QuestReference, FName QuestBackendName, UObject* __WorldContext, AFortPlayerController*& PlayerControllerOut, bool& CompletedQuest); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
	// void SeperatePlayersWhoNeedQuest(UFortQuestItemDefinition* QuestItemReference, FName QuestObjectiveBackendName, UObject* __WorldContext, TArray<AFortPlayerController*>& PlayersWhoNeedQuest, TArray<AFortPlayerController*>& PlayersWhoDoNotNeedQuest); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
	// void BasicBuildingItemDrop(TEnumAsByte<EnumEventWorldItemDrop> Item Drop Level, FVector LootDropLocation, UObject* __WorldContext); // [0x154a140] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GrantSurvivorBadge
	// void GrantSurvivorBadge(int32_t LootLevelIn, TEnumAsByte<SurvivorBadgeTypes> BadgeType, UObject* __WorldContext, UFortItemDefinition*& NewParam); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
	// void GetBuildingRecommendation(FName RowName, UObject* __WorldContext, int32_t& BuildingCount, bool& RowFound);          // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
	// void Random_360_VectorInRange(float MinDistance, float MaxDistance, UObject* __WorldContext, FVector& Random Vector Result ); // [0x154a140] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
	// void AnyPawnNearActor(float DistanceToCheck, AActor* Actor, UObject* __WorldContext, bool& IsPawnNearActor, TArray<AFortPawn*>& PawnsNearActor); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
	// void GiveQuestUpdateToPlayers(UFortQuestItemDefinition* Quest Reference, FName Quest Objective Backend Name, FDataTableRowHandle ObjectiveStatEvent, TArray<AFortPlayerController*>& PlayerControllersForUpdate, UObject* __WorldContext); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
	// void DropChance(float DropPercentChance, UObject* __WorldContext, bool& DropResult);                                     // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
	// void AnyPlayerNearActor(float DistanceToCheck, AActor* Actor, UObject* __WorldContext, bool& IsPlayerNearActor, TArray<AFortPlayerPawn*>& PlayersNearActor); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
	// void FlashObjectiveUI(AFortObjectiveBase* Objective Reference, UObject* __WorldContext);                                 // [0x154a140] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
	// void NPC_DroneStopRescue(AActor* Actor, AActor* Instigator, UObject* __WorldContext);                                    // [0x154a140] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
	// void NPC_DroneStartRescue(AActor* Actor, AActor* Instigator, UObject* __WorldContext);                                   // [0x154a140] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
	// void ListPlayersWhoNeedQuest(UFortQuestItemDefinition* Quest Reference, FName Quest Backend Name, UObject* __WorldContext, TArray<AFortPlayerController*>& Player Controllers Who Require The Quest, bool& DoesAnyoneRequireTheQuest); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
	// void DoesAnyoneRequireQuest(UFortQuestItemDefinition* QuestReference, FName Quest Backend Name, UObject* __WorldContext, bool& SomePlayerNeedsTheQuest); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved
	// void QuestObjectiveCountAchieved(AFortPlayerController* PlayerControllerReference, UFortQuestItemDefinition* Quest Item Reference, FDataTableRowHandle ObjectiveStatHandle, UObject* __WorldContext, int32_t& Quest Count Achieved, int32_t& Quest Count Required, bool& SuccessfullyFoundCount); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
	// void HighlightQuestActor(AActor* ActorToHighlight, bool HighlightEnabled, UObject* __WorldContext);                      // [0x154a140] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
	// void DoesPlayerHaveQuest(AFortPlayerController* PlayerController, UFortQuestItemDefinition* Quest Item Reference, FName Quest Item Objective Backend Name, UObject* __WorldContext, bool& QuestValid, AFortPlayerController*& PlayerControllerRef); // [0x154a140] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
	// void GetObjectiveBadgeIconBrush(AFortObjectiveBase* Objective, FGameplayTag RewardTag, UObject* __WorldContext, FSlateBrush& IconBrush); // [0x154a140] Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
	// void UnRegisterUI UpdatesWithDamageEvents(AActor* ActorToUnRegisterWith, AFortMissionState* MissionState, UObject* __WorldContext); // [0x154a140] Static|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/FunctionLibrary/MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
	// void RegisterUI UpdatesWithDamageEvents(AActor* ActorToRegisterWith, AFortMissionState* MissionState, UObject* __WorldContext); // [0x154a140] Static|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Missions/Primary/DeliverTheBomb/Particles/B_DtB_LightningZap.B_DtB_LightningZap_C
/// Size: 0x002C (0x000318 - 0x000344)
class AB_DtB_LightningZap_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 836;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_DtBRiftLightningZap                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FVector)                                   RiftLocation                                                OFFSET(getStruct<T>, {0x330, 12, 0, 0})
	DMember(float)                                     TickDuration                                                OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(float)                                     TickCounter                                                 OFFSET(get<float>, {0x340, 4, 0, 0})


	/// Functions
	// Function /Game/Missions/Primary/DeliverTheBomb/Particles/B_DtB_LightningZap.B_DtB_LightningZap_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Particles/B_DtB_LightningZap.B_DtB_LightningZap_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Particles/B_DtB_LightningZap.B_DtB_LightningZap_C.FireLightning
	// void FireLightning();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Particles/B_DtB_LightningZap.B_DtB_LightningZap_C.ExecuteUbergraph_B_DtB_LightningZap
	// void ExecuteUbergraph_B_DtB_LightningZap(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C
/// Size: 0x0128 (0x000770 - 0x000898)
class AB_DtB_FloatingRift_C : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2200;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x770, 8, 0, 0})
	CMember(UAudioComponent*)                          Electricity_Spark_Zaps_Audio_Component                      OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     dtb_rift_ground_04                                          OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     dtb_rift_ground_03                                          OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     dtb_rift_ground_02                                          OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     dtb_rift_ground_01                                          OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(USphereComponent*)                         DispatcherCallOutVolume                                     OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UDecalComponent*)                          Decal_Ground                                                OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_DtB_GroundFog                                            OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_DtB_GroundTendril                                        OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     dtb_rift_orb_01                                             OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh2                                                 OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh1                                                 OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     dtb_rift_floating_pieces_01                                 OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Elevation_Ground_Z                                        OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     dtb_rift_center_01                                          OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_StormFog                                                  OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UAudioComponent*)                          AmbientClose_small                                          OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UAudioComponent*)                          AmbientLoopingSound_large                                   OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    FortMiniMap                                                 OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(UCapsuleComponent*)                        KillVolume                                                  OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(USphereComponent*)                         StaminaVolume                                               OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(USphereComponent*)                         DamageVolume                                                OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Rift_Arcs                                                 OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(UBoxComponent*)                            RiftArcTriggerVolume                                        OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 CampSlime                                                   OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess                                                 OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(USphereComponent*)                         PostProcessVolume                                           OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_DtBRiftCoreFloating                                       OFFSET(get<T>, {0x858, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x860, 8, 0, 0})
	DMember(bool)                                      bIsRiftArcsActive_                                          OFFSET(get<bool>, {0x868, 1, 0, 0})
	CMember(UFortAbilitySystemComponent*)              AIPawnAbilitySystemComponent                                OFFSET(get<T>, {0x870, 8, 0, 0})
	CMember(UMulticastDelegate)                        RiftLocated                                                 OFFSET(get<T>, {0x878, 16, 0, 0})
	CMember(UMulticastDelegate)                        CallOutVolumeOverlap                                        OFFSET(get<T>, {0x888, 16, 0, 0})


	/// Functions
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.OnRep_bIsRiftArcsActive?
	// void OnRep_bIsRiftArcsActive?();                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__RiftArcTriggerVolume_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x154a140] BlueprintEvent       
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__KillVolume_K2Node_ComponentBoundEvent_84_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.HandleMissionEvent_NewPlayer
	// void HandleMissionEvent_NewPlayer(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32_t GenericInt, float GenericFloat, FText& GenericText, FGameplayTagContainer GameplayTags, FFortMissionEvent& MissionEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__DispatcherCallOutVolume_K2Node_ComponentBoundEvent_70_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature
	// void BndEvt__P_DtBRiftCore_K2Node_ComponentBoundEvent_12_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32_t ParticleCount); // [0x154a140] BlueprintEvent       
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.ExecuteUbergraph_B_DtB_FloatingRift
	// void ExecuteUbergraph_B_DtB_FloatingRift(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.CallOutVolumeOverlap__DelegateSignature
	// void CallOutVolumeOverlap__DelegateSignature(AFortPlayerPawn* FortPlayerPawn);                                           // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/DeliverTheBomb/Props/B_DtB_FloatingRift.B_DtB_FloatingRift_C.RiftLocated__DelegateSignature
	// void RiftLocated__DelegateSignature(AFortPlayerPawn* FortPlayPawn);                                                      // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C
/// Size: 0x00D8 (0x000E00 - 0x000ED8)
class ABluGlo_Node_C : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE00, 8, 0, 0})
	CMember(UPointLightComponent*)                     bluLight                                                    OFFSET(get<T>, {0xE08, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleParticles                                               OFFSET(get<T>, {0xE10, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     bluglomesh                                                  OFFSET(get<T>, {0xE18, 8, 0, 0})
	CMember(UAudioComponent*)                          Fort_BluGlo_loop_AudioComponent                             OFFSET(get<T>, {0xE20, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    FortMiniMap                                                 OFFSET(get<T>, {0xE28, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 BluGloSpawnparticle                                         OFFSET(get<T>, {0xE30, 8, 0, 0})
	DMember(float)                                     Trail_HorizontalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F   OFFSET(get<float>, {0xE38, 4, 0, 0})
	DMember(float)                                     Trail_VerticalMovement_EEEFB2FD467DE31D5FDEDEA006F5C10F     OFFSET(get<float>, {0xE3C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Trail__Direction_EEEFB2FD467DE31D5FDEDEA006F5C10F           OFFSET(get<T>, {0xE40, 1, 0, 0})
	CMember(UTimelineComponent*)                       Trail                                                       OFFSET(get<T>, {0xE48, 8, 0, 0})
	DMember(bool)                                      ActivateEffects                                             OFFSET(get<bool>, {0xE50, 1, 0, 0})
	DMember(bool)                                      DeActivateEffects                                           OFFSET(get<bool>, {0xE51, 1, 0, 0})
	DMember(bool)                                      CanInteract                                                 OFFSET(get<bool>, {0xE52, 1, 0, 0})
	SMember(FText)                                     BluGloQuantity                                              OFFSET(getStruct<T>, {0xE58, 24, 0, 0})
	CMember(AFortPawn*)                                NewVar                                                      OFFSET(get<T>, {0xE70, 8, 0, 0})
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0xE78, 12, 0, 0})
	CMember(UParticleSystemComponent*)                 TrailEffect                                                 OFFSET(get<T>, {0xE88, 8, 0, 0})
	CMember(USoundBase*)                               Sound_BluGloLoop                                            OFFSET(get<T>, {0xE90, 8, 0, 0})
	SMember(FRotator)                                  RandomSpawnRotation                                         OFFSET(getStruct<T>, {0xE98, 12, 0, 0})
	CMember(ABluGlow_MorphAnimation_C*)                BlugloRef                                                   OFFSET(get<T>, {0xEA8, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     PickupForceFeedback                                         OFFSET(get<T>, {0xEB0, 8, 0, 0})
	CMember(UFortWorldItemDefinition*)                 BlugloItemDef                                               OFFSET(get<T>, {0xEB8, 8, 0, 0})
	SMember(FText)                                     CollectText                                                 OFFSET(getStruct<T>, {0xEC0, 24, 0, 0})


	/// Functions
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.BlueprintGetInteractionString
	// FText BlueprintGetInteractionString(AFortPawn* InteractingPawn);                                                         // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.OnRep_CanInteract
	// void OnRep_CanInteract();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.BlueprintCanInteract
	// bool BlueprintCanInteract(AFortPawn* InteractingPawn);                                                                   // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.OnRep_DeActivateEffects
	// void OnRep_DeActivateEffects();                                                                                          // [0x154a140] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.OnRep_ActivateEffects
	// void OnRep_ActivateEffects();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.Trail__FinishedFunc
	// void Trail__FinishedFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.Trail__UpdateFunc
	// void Trail__UpdateFunc();                                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.BlueprintOnInteract
	// void BlueprintOnInteract(AFortPawn* InteractingPawn);                                                                    // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.HandleMissionEvent_LocateBluGlo
	// void HandleMissionEvent_LocateBluGlo(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32_t GenericInt, float GenericFloat, FText& GenericText, FGameplayTagContainer GameplayTags, FFortMissionEvent& MissionEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.ShowSpawnTrail
	// void ShowSpawnTrail(FVector StartLocation, float AnimDelay);                                                             // [0x154a140] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/BluGlo/BluGlo_Node.BluGlo_Node_C.ExecuteUbergraph_BluGlo_Node
	// void ExecuteUbergraph_BluGlo_Node(int32_t EntryPoint);                                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C
/// Size: 0x0060 (0x000DB0 - 0x000E10)
class AMimic_Chest_C : public ABuildingSMActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3600;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xDB0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Chest_SmokeSheet                                          OFFSET(get<T>, {0xDB8, 8, 0, 0})
	CMember(UCapsuleComponent*)                        Capsule                                                     OFFSET(get<T>, {0xDC0, 8, 0, 0})
	CMember(UBoxComponent*)                            Box                                                         OFFSET(get<T>, {0xDC8, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    FortMiniMap                                                 OFFSET(get<T>, {0xDD0, 8, 0, 0})
	CMember(UAudioComponent*)                          ChestAudio                                                  OFFSET(get<T>, {0xDD8, 8, 0, 0})
	DMember(float)                                     Twitch_Scale_CE105FFA4C580F811CE19C91346CC37D               OFFSET(get<float>, {0xDE0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Twitch__Direction_CE105FFA4C580F811CE19C91346CC37D          OFFSET(get<T>, {0xDE4, 1, 0, 0})
	CMember(UTimelineComponent*)                       TWITCH                                                      OFFSET(get<T>, {0xDE8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          InteractingPawn                                             OFFSET(get<T>, {0xDF0, 8, 0, 0})
	DMember(bool)                                      bBlockedByStairs_                                           OFFSET(get<bool>, {0xDF8, 1, 0, 0})
	CMember(USoundBase*)                               Mimic_Chest_Shake_Sound                                     OFFSET(get<T>, {0xE00, 8, 0, 0})
	CMember(USoundBase*)                               Mimic_Chest_Break_Sound                                     OFFSET(get<T>, {0xE08, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.BlueprintGetInteractionString
	// FText BlueprintGetInteractionString(AFortPawn* InteractingPawn);                                                         // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.OnRep_bBlockedByStairs?
	// void OnRep_bBlockedByStairs?();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.BlueprintCanInteract
	// bool BlueprintCanInteract(AFortPawn* InteractingPawn);                                                                   // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.Twitch__FinishedFunc
	// void Twitch__FinishedFunc();                                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.Twitch__UpdateFunc
	// void Twitch__UpdateFunc();                                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.OnDeathPlayEffects
	// void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.BlueprintOnBeginInteract
	// void BlueprintOnBeginInteract();                                                                                         // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.BlueprintOnInteract
	// void BlueprintOnInteract(AFortPawn* InteractingPawn);                                                                    // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mimic_Chest.Mimic_Chest_C.ExecuteUbergraph_Mimic_Chest
	// void ExecuteUbergraph_Mimic_Chest(int32_t EntryPoint);                                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C
/// Size: 0x0151 (0x000690 - 0x0007E1)
class AMimic_Mission_C : public AFortMission
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2017;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x690, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(AHuskPawn_Mimic_C*)                        MimicPawn                                                   OFFSET(get<T>, {0x6A0, 8, 0, 0})
	DMember(float)                                     SavedMimicHealth                                            OFFSET(get<float>, {0x6A8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     KillMimicObjectiveHandle                                    OFFSET(getStruct<T>, {0x6B0, 32, 0, 0})
	SMember(FText)                                     DefeatMimicText                                             OFFSET(getStruct<T>, {0x6D0, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ChestInteractObjectiveHandle                                OFFSET(getStruct<T>, {0x6E8, 32, 0, 0})
	CMember(AMimic_Chest_C*)                           MimicChest                                                  OFFSET(get<T>, {0x708, 8, 0, 0})
	SMember(FText)                                     FindMimicText                                               OFFSET(getStruct<T>, {0x710, 24, 0, 0})
	SMember(FFortMissionWeightedReward)                ChosenReward                                                OFFSET(getStruct<T>, {0x728, 152, 0, 0})
	SMember(FText)                                     MimicHealthBarText                                          OFFSET(getStruct<T>, {0x7C0, 24, 0, 0})
	CMember(UFortAIEncounterInfo*)                     Encounter                                                   OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(EFortObjectiveStatus)                      ObjectiveStatus                                             OFFSET(get<T>, {0x7E0, 1, 0, 0})


	/// Functions
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.OnMimicSpawned
	// void OnMimicSpawned(AHuskPawn_Mimic_C* MimicPawn);                                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.OnChestInteract
	// void OnChestInteract();                                                                                                  // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.HideFoundMimicText
	// void HideFoundMimicText();                                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.InitializeMimicChest
	// void InitializeMimicChest(AMimic_Chest_C* MimicChest, bool bWakeOnDamage);                                               // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.TryGiveRewards
	// void TryGiveRewards();                                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.RestartDormantChest
	// void RestartDormantChest();                                                                                              // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.InitMission
	// void InitMission();                                                                                                      // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_MissionSucceeded
	// void HandleMissionEvent_MissionSucceeded(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32_t GenericInt, float GenericFloat, FText& GenericText, FGameplayTagContainer GameplayTags, FFortMissionEvent& MissionEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_ObjectiveSucceeded
	// void HandleMissionEvent_ObjectiveSucceeded(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32_t GenericInt, float GenericFloat, FText& GenericText, FGameplayTagContainer GameplayTags, FFortMissionEvent& MissionEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.HandleMissionEvent_LocateSecondary
	// void HandleMissionEvent_LocateSecondary(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32_t GenericInt, float GenericFloat, FText& GenericText, FGameplayTagContainer GameplayTags, FFortMissionEvent& MissionEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.OnMimicDied_Event
	// void OnMimicDied_Event(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.OnEncounterEnemySpawned
	// void OnEncounterEnemySpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.OnInteractingPlayerDied_Event
	// void OnInteractingPlayerDied_Event(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.OnMimicChestDamaged
	// void OnMimicChestDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.BlueprintOnActivated
	// void BlueprintOnActivated();                                                                                             // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.Event_OnMimicDestroyed
	// void Event_OnMimicDestroyed(AActor* DestroyedActor);                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/Mission/Mimic_Mission.Mimic_Mission_C.ExecuteUbergraph_Mimic_Mission
	// void ExecuteUbergraph_Mimic_Mission(int32_t EntryPoint);                                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Missions/GenericObjectives/Gen_Interact/Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C
/// Size: 0x0008 (0x000028 - 0x000030)
class UGen_Interact_UnregisterFocus_C : public UFortMissionEventParams
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(AActor*)                                   ActorToUnregister                                           OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/GenericObjectives/Gen_Interact/Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.BreakParams
	// void BreakParams(AActor*& ActorToUnregisterRegister);                                                                    // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Missions/GenericObjectives/Gen_Interact/Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C.SetParams
	// void SetParams(AActor* ActorToUnregister, UGen_Interact_UnregisterFocus_C*& ThisObject);                                 // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C
/// Size: 0x0080 (0x002180 - 0x002200)
class AHuskPawn_Mimic_C : public AHuskPawn_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8704;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2180, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Quad                                                     OFFSET(get<T>, {0x2188, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Mimic_Trail_Right                                         OFFSET(get<T>, {0x2190, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Mimic_Trail_Left                                          OFFSET(get<T>, {0x2198, 8, 0, 0})
	CMember(UAudioComponent*)                          Troll_Fleeing_Loop                                          OFFSET(get<T>, {0x21A0, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    FortMiniMap1                                                OFFSET(get<T>, {0x21A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ChestTop                                                    OFFSET(get<T>, {0x21B0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem1                                             OFFSET(get<T>, {0x21B8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ChestBottom                                                 OFFSET(get<T>, {0x21C0, 8, 0, 0})
	DMember(bool)                                      IsBecomingChest                                             OFFSET(get<bool>, {0x21C8, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          ActivatingPlayerPawn                                        OFFSET(get<T>, {0x21D0, 8, 0, 0})
	DMember(float)                                     TimeInSecondsBeforeReturningToSpawn                         OFFSET(get<float>, {0x21D8, 4, 0, 0})
	SMember(FName)                                     ShouldBecomeChestBBKey                                      OFFSET(getStruct<T>, {0x21E0, 8, 0, 0})
	SMember(FName)                                     SpawnRotationKey                                            OFFSET(getStruct<T>, {0x21E8, 8, 0, 0})
	SMember(FName)                                     SpawnLocationKey                                            OFFSET(getStruct<T>, {0x21F0, 8, 0, 0})
	CMember(UGen_Interact_UnregisterFocus_C*)          UnregisterFocusParams_Kill                                  OFFSET(get<T>, {0x21F8, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.KillPawnOnceTransformedToChest
	// void KillPawnOnceTransformedToChest();                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChest
	// void BecomeChest();                                                                                                      // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChestIfConditionsSatisfied
	// void BecomeChestIfConditionsSatisfied();                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.InitMimic
	// void InitMimic();                                                                                                        // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.OnDeathPlayEffects
	// void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.TryToBecomeChest
	// void TryToBecomeChest();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.Event_LastTimeDamaged
	// void Event_LastTimeDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.ReturnToSpawnAndBecomeChest
	// void ReturnToSpawnAndBecomeChest();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.ResetTimerForBecomingChest
	// void ResetTimerForBecomingChest();                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.ReceivePossessed
	// void ReceivePossessed(AController* NewController);                                                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.DisableRibbons
	// void DisableRibbons();                                                                                                   // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.EnableRibbons
	// void EnableRibbons();                                                                                                    // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Secondary/Mimic/HuskPawn_Mimic.HuskPawn_Mimic_C.ExecuteUbergraph_HuskPawn_Mimic
	// void ExecuteUbergraph_HuskPawn_Mimic(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Missions/EQSQueries/UsedPlacementActorsContext.UsedPlacementActorsContext_C
/// Size: 0x0048 (0x000030 - 0x000078)
class UUsedPlacementActorsContext_C : public UEnvQueryContext_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagQuery)                         UsedTagsAddedQuery                                          OFFSET(getStruct<T>, {0x30, 72, 0, 0})


	/// Functions
	// Function /Game/Missions/EQSQueries/UsedPlacementActorsContext.UsedPlacementActorsContext_C.ProvideActorsSet
	// void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet);                // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Missions/EQSQueries/UsedProximityDangerZoneContext.UsedProximityDangerZoneContext_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UUsedProximityDangerZoneContext_C : public UUsedPlacementActorsContext_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Missions/EQSQueries/UsedPrimaryMissionPlacementActorsContext.UsedPrimaryMissionPlacementActorsContext_C
/// Size: 0x0000 (0x000078 - 0x000078)
class UUsedPrimaryMissionPlacementActorsContext_C : public UUsedPlacementActorsContext_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Game/Missions/SharedMissionLists.SharedMissionLists_C
/// Size: 0x0000 (0x000178 - 0x000178)
class USharedMissionLists_C : public UFortSharedMissionLists
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Class /Game/Missions/Primary/Outpost/Props/BPI_StormShieldinterface.BPI_StormShieldInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_StormShieldInterface_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Missions/Primary/Outpost/Props/BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
	// void GetOutpostReadyState(bool& ReadyToExpand, bool& ReadyToInstallAmplifier);                                           // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/Outpost/Props/BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
	// void CanLeaveOutpost(bool& AllowedToLeave);                                                                              // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Missions/Primary/Outpost/BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C
/// Size: 0x0019 (0x002CC0 - 0x002CD9)
class ABP_PlayerControllerOutpost_C : public AFortPlayerControllerOutpost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 11481;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2CC0, 8, 0, 0})
	CMember(AOutpostStructureBase*)                    NewVar                                                      OFFSET(get<T>, {0x2CC8, 8, 0, 0})
	CMember(AOutpostStructureBase*)                    NewVar1                                                     OFFSET(get<T>, {0x2CD0, 8, 0, 0})
	DMember(bool)                                      GetHelp                                                     OFFSET(get<bool>, {0x2CD8, 1, 0, 0})


	/// Functions
	// Function /Game/Missions/Primary/Outpost/BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/Outpost/BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ServerStartExpandingOutpost
	// void ServerStartExpandingOutpost(bool GetHelp);                                                                          // [0x154a140] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/Primary/Outpost/BP_PlayerControllerOutpost.BP_PlayerControllerOutpost_C.ExecuteUbergraph_BP_PlayerControllerOutpost
	// void ExecuteUbergraph_BP_PlayerControllerOutpost(int32_t EntryPoint);                                                    // [0x154a140] None                 
};

/// Class /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_NoDurability.Announce_NoDurability_C
/// Size: 0x0010 (0x000470 - 0x000480)
class AAnnounce_NoDurability_C : public AFortClientAnnouncement_Basic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_NoDurability.Announce_NoDurability_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_NoDurability.Announce_NoDurability_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_NoDurability.Announce_NoDurability_C.ExecuteUbergraph_Announce_NoDurability
	// void ExecuteUbergraph_Announce_NoDurability(int32_t EntryPoint);                                                         // [0x154a140] None                 
};

/// Class /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowHeath.Announce_LowHeath_C
/// Size: 0x0010 (0x000470 - 0x000480)
class AAnnounce_LowHeath_C : public AFortClientAnnouncement_Basic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowHeath.Announce_LowHeath_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowHeath.Announce_LowHeath_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowHeath.Announce_LowHeath_C.ExecuteUbergraph_Announce_LowHeath
	// void ExecuteUbergraph_Announce_LowHeath(int32_t EntryPoint);                                                             // [0x154a140] None                 
};

/// Class /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowDurability.Announce_LowDurability_C
/// Size: 0x0010 (0x000470 - 0x000480)
class AAnnounce_LowDurability_C : public AFortClientAnnouncement_Basic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowDurability.Announce_LowDurability_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowDurability.Announce_LowDurability_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_LowDurability.Announce_LowDurability_C.ExecuteUbergraph_Announce_LowDurability
	// void ExecuteUbergraph_Announce_LowDurability(int32_t EntryPoint);                                                        // [0x154a140] None                 
};

/// Class /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C
/// Size: 0x0010 (0x000470 - 0x000480)
class AAnnounce_HeadshotStreak_5x_C : public AFortClientAnnouncement_Basic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_HeadshotStreak_5x.Announce_HeadshotStreak_5x_C.ExecuteUbergraph_Announce_HeadshotStreak_5x
	// void ExecuteUbergraph_Announce_HeadshotStreak_5x(int32_t EntryPoint);                                                    // [0x154a140] None                 
};

/// Class /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BuildingDamaged.Announce_BuildingDamaged_C
/// Size: 0x0010 (0x000470 - 0x000480)
class AAnnounce_BuildingDamaged_C : public AFortClientAnnouncement_Basic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BuildingDamaged.Announce_BuildingDamaged_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BuildingDamaged.Announce_BuildingDamaged_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BuildingDamaged.Announce_BuildingDamaged_C.ExecuteUbergraph_Announce_BuildingDamaged
	// void ExecuteUbergraph_Announce_BuildingDamaged(int32_t EntryPoint);                                                      // [0x154a140] None                 
};

/// Class /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BackpackFull.Announce_BackpackFull_C
/// Size: 0x0010 (0x000470 - 0x000480)
class AAnnounce_BackpackFull_C : public AFortClientAnnouncement_Basic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BackpackFull.Announce_BackpackFull_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BackpackFull.Announce_BackpackFull_C.OnClientAnnouncementStart
	// void OnClientAnnouncementStart();                                                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Missions/GenericAnnouncements/StatEventAnnouncements/Announce_BackpackFull.Announce_BackpackFull_C.ExecuteUbergraph_Announce_BackpackFull
	// void ExecuteUbergraph_Announce_BackpackFull(int32_t EntryPoint);                                                         // [0x154a140] None                 
};

/// Enum /Game/Missions/Secondary/SurvivorShelters/SurvivorBadgeTypes.SurvivorBadgeTypes
/// Size: 0x04
enum SurvivorBadgeTypes : uint8_t
{
	SurvivorBadgeTypes__NewEnumerator00                                              = 0,
	SurvivorBadgeTypes__NewEnumerator11                                              = 1,
	SurvivorBadgeTypes__NewEnumerator22                                              = 2,
	SurvivorBadgeTypes__SurvivorBadgeTypes_MAX3                                      = 3
};

/// Enum /Game/Missions/Secondary/Events/SatelliteSalvage/EnumEventWorldItemDrop.EnumEventWorldItemDrop
/// Size: 0x05
enum EnumEventWorldItemDrop : uint8_t
{
	EnumEventWorldItemDrop__NewEnumerator00                                          = 0,
	EnumEventWorldItemDrop__NewEnumerator11                                          = 1,
	EnumEventWorldItemDrop__NewEnumerator22                                          = 2,
	EnumEventWorldItemDrop__NewEnumerator33                                          = 3,
	EnumEventWorldItemDrop__EnumEventWorldItemDrop_MAX4                              = 4
};

