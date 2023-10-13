
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Blueprints/BluGloRequestHandler.BluGloRequestHandler_C
/// Size: 0x0048 (0x000078 - 0x0000C0)
class UBluGloRequestHandler_C : public UEnvQueryInstanceBlueprintWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	CMember(UMulticastDelegate)                        OnBluGloQueryFinished                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(int32_t)                                   NumBluGloToSpawn                                            OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	CMember(AActor*)                                   ActorToSpawnFrom                                            OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FVector)                                   LocationToSpawnFrom                                         OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	CMember(TArray<FVector>)                           LocationsToSpawnTo                                          OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Game/Blueprints/BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsRandomly
	// void BuildLocationsRandomly();                                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloRequestHandler.BluGloRequestHandler_C.BuildLocationsFromQueryLocations
	// void BuildLocationsFromQueryLocations(TArray<FVector>& QueryResultLocations);                                            // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloRequestHandler.BluGloRequestHandler_C.EQSQueryFinished
	// void EQSQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloRequestHandler.BluGloRequestHandler_C.InitializeBluGloRequestHandler
	// void InitializeBluGloRequestHandler(int32_t NumBluGloToSpawn, AActor* ActorToSpawnFrom, FVector LocationToSpawnFromIfActorInvalid); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloRequestHandler.BluGloRequestHandler_C.ExecuteUbergraph_BluGloRequestHandler
	// void ExecuteUbergraph_BluGloRequestHandler(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
	// Function /Game/Blueprints/BluGloRequestHandler.BluGloRequestHandler_C.OnBluGloQueryFinished__DelegateSignature
	// void OnBluGloQueryFinished__DelegateSignature(AActor* ActorToSpawnFrom, FVector LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32_t NumBluGloToSpawn); // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/BluGloManager.BluGloManager_C
/// Size: 0x0060 (0x0003A8 - 0x000408)
class ABluGloManager_C : public AFortBluGloManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3A8, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TArray<ATiered_BluGlo_Parent_C*>)          PossibleSpawnLocationsArray                                 OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<ATiered_BluGlo_Parent_C*>)          OccupiedNodes                                               OFFSET(get<T>, {0x3C8, 16, 0, 0})
	DMember(int32_t)                                   AmountOfBluGloToSpawn                                       OFFSET(get<int32_t>, {0x3D8, 4, 0, 0})
	CMember(AActor*)                                   QueryActor                                                  OFFSET(get<T>, {0x3E0, 8, 0, 0})
	DMember(bool)                                      _1stRequestArraySet                                         OFFSET(get<bool>, {0x3E8, 1, 0, 0})
	DMember(float)                                     BluGloNavigablePointRadius                                  OFFSET(get<float>, {0x3EC, 4, 0, 0})
	CMember(USoundBase*)                               Reward_Start_Sound                                          OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(USoundBase*)                               Reward_Appear_Sound                                         OFFSET(get<T>, {0x3F8, 8, 0, 0})
	DMember(int32_t)                                   LocationLength                                              OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	DMember(float)                                     BluGloSpawnAnimationTime                                    OFFSET(get<float>, {0x404, 4, 0, 0})


	/// Functions
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.PrintDebugInfoForBluGloToSpawn
	// void PrintDebugInfoForBluGloToSpawn(TArray<ATiered_BluGlo_Parent_C*>& TargetArray);                                      // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.IssueBluGloRequestForMission
	// void IssueBluGloRequestForMission(AFortMission* Mission, AActor* ActorToSpawnBluGloFrom);                                // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.StartSpawnFXAndAudio
	// void StartSpawnFXAndAudio(FVector SpawnCenter, UParticleSystemComponent*& SpawnFXEmitter);                               // [0x154a140] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.SpawnBluGloGroup
	// void SpawnBluGloGroup(AActor* ActorToSpawnFrom, FVector LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32_t NumBluGloToSpawn); // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.ChooseSpawnCenter
	// void ChooseSpawnCenter(AActor* ActorToSpawnFrom, FVector LocationToSpawnFrom, FVector& SpawnCenter);                     // [0x154a140] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.BuildSpawnLocationsRandomly
	// void BuildSpawnLocationsRandomly(FVector LocationToSpawnFrom, int32_t NumBluGloToSpawn, TArray<FVector>& LocationsForSpawningBluGlo); // [0x154a140] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.BuildSpawnLocationsFromQueryLocations
	// void BuildSpawnLocationsFromQueryLocations(int32_t NumBluGloToSpawn, TArray<FVector>& QueryResultLocations, TArray<FVector>& LocationsForSpawningBluGlo); // [0x154a140] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.BuildSpawnLocations
	// void BuildSpawnLocations(TEnumAsByte<EEnvQueryStatus> QueryStatus, UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32_t NumBluGloToSpawn, FVector SpawnCenter, TArray<FVector>& LocationsForSpawningBluGlo); // [0x154a140] Private|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.IssueBluGloRequest
	// void IssueBluGloRequest(int32_t NumBluGloToSpawn, AActor* ActorToSpawnFrom, FVector LocationToSpawnFromIfActorInvalid);  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.SpawnBluGlo
	// void SpawnBluGlo(FVector SpawnLocation, FVector SpawnFromLocation);                                                      // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.RemoveOccupiedNodes
	// void RemoveOccupiedNodes();                                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.RequestedBluGo
	// void RequestedBluGo(AFortMission* Mission, FVector EQS Start Location, AActor* Actor);                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseEQS
	// void HandleMissionEvent_RequestBluGloSpawnUseEQS(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32_t GenericInt, float GenericFloat, FText& GenericText, FGameplayTagContainer GameplayTags, FFortMissionEvent& MissionEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.Start/StopSpawnFX
	// void Start/StopSpawnFX(bool On/off);                                                                                     // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.HandleMissionEvent_RequestBluGloSpawnUseActor
	// void HandleMissionEvent_RequestBluGloSpawnUseActor(FGuid InMissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32_t GenericInt, float GenericFloat, FText& GenericText, FGameplayTagContainer GameplayTags, FFortMissionEvent& MissionEvent); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.OnBluGloQueryFinished
	// void OnBluGloQueryFinished(AActor* ActorToSpawnFrom, FVector LocationToSpawnFromIfActorInvalid, TEnumAsByte<EEnvQueryStatus> QueryStatus, UEnvQueryInstanceBlueprintWrapper* QueryInstance, int32_t NumBluGloToSpawn); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.SpawnFXComplete
	// void SpawnFXComplete(UParticleSystemComponent* PSystem);                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.SpawnBluGloGroupEvent
	// void SpawnBluGloGroupEvent(FVector SpawnCenter);                                                                         // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.AddMoreBluGloInWorld
	// void AddMoreBluGloInWorld(AFortMission* Mission);                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/BluGloManager.BluGloManager_C.ExecuteUbergraph_BluGloManager
	// void ExecuteUbergraph_BluGloManager(int32_t EntryPoint);                                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterfaceAIStates_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.PortalCollision
	// void PortalCollision(bool Collide?);                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.PortalFX
	// void PortalFX();                                                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.PortalGet
	// void PortalGet(ABuildingActor* BuildingActor, TArray<ABuildingActor*>& BuildingActorList, AActor* BT);                   // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckInterrupted
	// void TakerSoulSuckInterrupted();                                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.PortalClear
	// void PortalClear();                                                                                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.PortalAdd
	// void PortalAdd(ABuildingActor* BuildingActor, TArray<ABuildingActor*>& BuildingActorList);                               // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundEnd
	// void TakerSoulSuckSoundEnd();                                                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.TakerSoulSuckSoundBegin
	// void TakerSoulSuckSoundBegin(bool Success);                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.TakerAttackFSM
	// void TakerAttackFSM(bool SuccessfulHit);                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.IsTakerWallPortalAvailable
	// void IsTakerWallPortalAvailable(bool Portal Available?);                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.TakerWallPortalBehavior
	// void TakerWallPortalBehavior(AActor* BuildingPart, UBTTask_BlueprintBase* Task, FVector DesiredMoveLocation, bool Debug); // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.EndTakerSwoopAttack
	// void EndTakerSwoopAttack();                                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.BeginTakerSwoopAttack
	// void BeginTakerSwoopAttack();                                                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.ResetTakerSpecialAttackTimer
	// void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.VerifyTakerAttack
	// void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul Suck, bool Portal);                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.HuskEvadeStart
	// void HuskEvadeStart();                                                                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.MantleEnd
	// void MantleEnd();                                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfaceAIStates.InterfaceAIStates_C.MantleStart
	// void MantleStart(FVector StartPos, FVector MidPos, FVector EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall); // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P.PlayerCameraMode1P_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UPlayerCameraMode1P_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/FirstPerson/PlayerCameraMode1P_Targeting.PlayerCameraMode1P_Targeting_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UPlayerCameraMode1P_Targeting_C : public UPlayerCameraMode1P_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/PlayerTakeDamage_CameraShake.PlayerTakeDamage_CameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UPlayerTakeDamage_CameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterfacePlayerPawn_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
	// void FootStepRight();                                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
	// void FootStepLeft();                                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
	// void Melee_Effect_Color(FVector& Melee_Color_Set);                                                                       // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
	// void MeleeSwingLeft();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
	// void MeleeSwingRight();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeBase.Athena_PlayerCameraModeBase_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeBase.v1_PlayerCameraModeBase_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv1_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeBase.v2_PlayerCameraModeBase_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv2_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeBase.v3_PlayerCameraModeBase_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeBase_C : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeRanged.v3_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeRanged_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingVeryShortRange.v3_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeTargetingVeryShortRange_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingScope.v3_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeTargetingScope_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingRifle.v3_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeTargetingRifle_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingPistol.v3_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeTargetingPistol_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeTargetingAssault.v3_PlayerCameraModeTargetingAssault_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeTargetingAssault_C : public Uv3_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/v3_PlayerCameraModeMelee.v3_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv3_PlayerCameraModeMelee_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v3_MPR/PlayerCameraMode_DBNO.PlayerCameraMode_DBNO_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UPlayerCameraMode_DBNO_C : public Uv3_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeRanged.v2_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv2_PlayerCameraModeRanged_C : public Uv2_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingVeryShortRange.v2_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv2_PlayerCameraModeTargetingVeryShortRange_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingScope.v2_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv2_PlayerCameraModeTargetingScope_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingRifle.v2_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv2_PlayerCameraModeTargetingRifle_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeTargetingPistol.v2_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv2_PlayerCameraModeTargetingPistol_C : public Uv2_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/v2_OverShoulder/v2_PlayerCameraModeMelee.v2_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv2_PlayerCameraModeMelee_C : public Uv2_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_VeryShortRange.Targeting3PCamera_VeryShortRange_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UTargeting3PCamera_VeryShortRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_Scope.Targeting3PCamera_Scope_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UTargeting3PCamera_Scope_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_MidRange.Targeting3PCamera_MidRange_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UTargeting3PCamera_MidRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera_LongRange.Targeting3PCamera_LongRange_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UTargeting3PCamera_LongRange_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/Targeting3PCamera.Targeting3PCamera_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UTargeting3PCamera_C : public UFort3PCam_Targeting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/Sniper3PCamera.Sniper3PCamera_C
/// Size: 0x0000 (0x000128 - 0x000128)
class USniper3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/Ranged3PCamera.Ranged3PCamera_C
/// Size: 0x0000 (0x000128 - 0x000128)
class URanged3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/HoverboardCameraMode.HoverboardCameraMode_C
/// Size: 0x0000 (0x000130 - 0x000130)
class UHoverboardCameraMode_C : public UFortHoverboardCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Game/Blueprints/Camera/Original/Default3PCamera.Default3PCamera_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UDefault3PCamera_C : public UFort3PCam_Default
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Original/CinematicCamera_MatineeTransition.CinematicCamera_MatineeTransition_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UCinematicCamera_MatineeTransition_C : public UFortCinematicCamera
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingVeryShortRange.v1_PlayerCameraModeTargetingVeryShortRange_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv1_PlayerCameraModeTargetingVeryShortRange_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingScope.v1_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv1_PlayerCameraModeTargetingScope_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingRifle.v1_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv1_PlayerCameraModeTargetingRifle_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeTargetingPistol.v1_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv1_PlayerCameraModeTargetingPistol_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeRanged.v1_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv1_PlayerCameraModeRanged_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Laurent_v1/v1_PlayerCameraModeMelee.v1_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x000128 - 0x000128)
class Uv1_PlayerCameraModeMelee_C : public Uv1_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveParachute.Athena_PlayerCameraModeSkydiveParachute_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeSkydiveParachute_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveGlide.Athena_PlayerCameraModeSkydiveGlide_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeSkydiveGlide_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSkydiveDive.Athena_PlayerCameraModeSkydiveDive_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeSkydiveDive_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeMelee.Athena_PlayerCameraModeMelee_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeMelee_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCamera_DBNO.Athena_PlayerCamera_DBNO_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCamera_DBNO_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/PlaylistManager.PlaylistManager_C
/// Size: 0x0000 (0x000038 - 0x000038)
class UPlaylistManager_C : public UFortPlaylistManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Game/Blueprints/CombatManager.CombatManager_C
/// Size: 0x0008 (0x000B90 - 0x000B98)
class ACombatManager_C : public AFortCombatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0xB90, 8, 0, 0})
};

/// Class /Game/Blueprints/Camera/Original/MainPlayerCamera.MainPlayerCamera_C
/// Size: 0x0000 (0x002C00 - 0x002C00)
class AMainPlayerCamera_C : public AFortPlayerCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 11264;

public:
};

/// Class /Game/Blueprints/MusicManager.MusicManager_C
/// Size: 0x0087 (0x000378 - 0x0003FF)
class AMusicManager_C : public AFortMusicManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1023;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x378, 8, 0, 0})
	DMember(float)                                     Gameplay_Music_Fader_Volume_869161D741AED71C8F0239859977BB00 OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Gameplay_Music_Fader__Direction_869161D741AED71C8F0239859977BB00 OFFSET(get<T>, {0x384, 1, 0, 0})
	CMember(UTimelineComponent*)                       Gameplay_Music_Fader                                        OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(USoundBase*)                               MusicFrontend                                               OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(USoundBase*)                               MusicLobby                                                  OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(USoundBase*)                               StingerReturningToAmbientMusic                              OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	SMember(FName)                                     GameMode_Current                                            OFFSET(getStruct<T>, {0x3B0, 8, 0, 0})
	SMember(FName)                                     GameMode_Lobby                                              OFFSET(getStruct<T>, {0x3B8, 8, 0, 0})
	SMember(FName)                                     GameMode_Frontend                                           OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	SMember(FName)                                     GameMode_InGame                                             OFFSET(getStruct<T>, {0x3C8, 8, 0, 0})
	DMember(bool)                                      PlayStingerWhenReturningToAmbientMusic                      OFFSET(get<bool>, {0x3D0, 1, 0, 0})
	DMember(bool)                                      PlayingAmbientMusic                                         OFFSET(get<bool>, {0x3D1, 1, 0, 0})
	DMember(bool)                                      PlayingThreatMusic                                          OFFSET(get<bool>, {0x3D2, 1, 0, 0})
	DMember(bool)                                      PlayingNearbyEnemiesMusic                                   OFFSET(get<bool>, {0x3D3, 1, 0, 0})
	DMember(bool)                                      PlayingHuskLowMusic                                         OFFSET(get<bool>, {0x3D4, 1, 0, 0})
	DMember(bool)                                      PlayingHuskHighMusic                                        OFFSET(get<bool>, {0x3D5, 1, 0, 0})
	DMember(bool)                                      PlayingLargeEnemyMusic                                      OFFSET(get<bool>, {0x3D6, 1, 0, 0})
	DMember(float)                                     LastTimeMusicWasStartedOrContinued                          OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(int32_t)                                   CurrentMusicIntensityLevel                                  OFFSET(get<int32_t>, {0x3DC, 4, 0, 0})
	CMember(TEnumAsByte<EFortDayPhase>)                CurrentDayPhase                                             OFFSET(get<T>, {0x3E0, 1, 0, 0})
	DMember(float)                                     MusicLogicUpdateTickTime                                    OFFSET(get<float>, {0x3E4, 4, 0, 0})
	DMember(float)                                     MinDurationBeforeMusicCanIncreaseIntensity                  OFFSET(get<float>, {0x3E8, 4, 0, 0})
	DMember(float)                                     IntensityIncreaseFadeTime                                   OFFSET(get<float>, {0x3EC, 4, 0, 0})
	CMember(TEnumAsByte<EMusicFadeStyles>)             IntensityIncreaseFadeStyle                                  OFFSET(get<T>, {0x3F0, 1, 0, 0})
	DMember(float)                                     MinDurationBeforeMusicCanDecreaseInIntensity                OFFSET(get<float>, {0x3F4, 4, 0, 0})
	DMember(float)                                     IntensityDecreaseFadeTime                                   OFFSET(get<float>, {0x3F8, 4, 0, 0})
	CMember(TEnumAsByte<EMusicFadeStyles>)             IntensityDecreaseFadeStyle                                  OFFSET(get<T>, {0x3FC, 1, 0, 0})
	DMember(bool)                                      MusicShouldStop                                             OFFSET(get<bool>, {0x3FD, 1, 0, 0})
	DMember(bool)                                      PlayingStingerMusic                                         OFFSET(get<bool>, {0x3FE, 1, 0, 0})


	/// Functions
	// Function /Game/Blueprints/MusicManager.MusicManager_C.ResetMusicBools
	// void ResetMusicBools();                                                                                                  // [0x154a140] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.Gameplay Music Fader__FinishedFunc
	// void Gameplay Music Fader__FinishedFunc();                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Blueprints/MusicManager.MusicManager_C.Gameplay Music Fader__UpdateFunc
	// void Gameplay Music Fader__UpdateFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Blueprints/MusicManager.MusicManager_C.OnDayPhaseChanged
	// void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase> CurrentDayPhase, TEnumAsByte<EFortDayPhase> PreviousDayPhase, bool bAtCreation); // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.OnUpdateMusic
	// void OnUpdateMusic();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.PlayAmbientMusic
	// void PlayAmbientMusic();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.On Music Tick
	// void On Music Tick();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.PlayStinger
	// void PlayStinger(UFortMusicAsset* NewMusicAsset);                                                                        // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.Music Fade In
	// void Music Fade In(float Time);                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.Music Fade Out
	// void Music Fade Out(float Time);                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.On Stinger Completed
	// void On Stinger Completed(UFortMusicVoice* Voice);                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
	// void ExecuteUbergraph_MusicManager(int32_t EntryPoint);                                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C
/// Size: 0x0048 (0x000378 - 0x0003C0)
class ABP_VictoryDrone_C : public APawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x378, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PlayerTeleportEffect                                        OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 SpawnEffect                                                 OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UMulticastDelegate)                        SpawnOutAnimEndedDispatcher                                 OFFSET(get<T>, {0x3A0, 16, 0, 0})
	DMember(float)                                     AnimPlayRate                                                OFFSET(get<float>, {0x3B0, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 StaticMeshMID                                               OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered
	// void NotifyTeleportFinishedTriggered();                                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnOutAnim
	// void PlaySpawnOutAnim();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.InitDrone
	// void InitDrone();                                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.TriggerPlayerSpawnEffects
	// void TriggerPlayerSpawnEffects();                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded
	// void OnSpawnOutAnimEnded(UAnimMontage* Montage, bool bInterrupted);                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone
	// void ExecuteUbergraph_BP_VictoryDrone(int32_t EntryPoint);                                                               // [0x154a140] None                 
	// Function /Game/Blueprints/Adventures/SpawnTeleporter/BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature
	// void SpawnOutAnimEndedDispatcher__DelegateSignature(ABP_VictoryDrone_C* Drone);                                          // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Blueprints/StatEventManager.StatEventManager_C
/// Size: 0x0000 (0x000088 - 0x000088)
class UStatEventManager_C : public UFortStatEventManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRangedTargeting.Athena_PlayerCameraModeRangedTargeting_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeRangedTargeting_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingAssault.Athena_PlayerCameraModeTargetingAssault_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingAssault_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingSMG.Athena_PlayerCameraModeTargetingSMG_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingSMG_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingPistol.Athena_PlayerCameraModeTargetingPistol_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingPistol_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingShotgun.Athena_PlayerCameraModeTargetingShotgun_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingShotgun_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRanged.Athena_PlayerCameraModeRanged_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeRanged_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeSniper.Athena_PlayerCameraModeSniper_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeSniper_C : public UAthena_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingScope.Athena_PlayerCameraModeTargetingScope_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingScope_C : public UAthena_PlayerCameraModeSniper_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingScopeMidRange.Athena_PlayerCameraModeTargetingScopeMidRange_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingScopeMidRange_C : public UAthena_PlayerCameraModeSniper_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingMiniGun.Athena_PlayerCameraModeTargetingMiniGun_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingMiniGun_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherGrenade.Athena_PlayerCameraModeTargetingLauncherGrenade_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingLauncherGrenade_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherRocket.Athena_PlayerCameraModeTargetingLauncherRocket_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingLauncherRocket_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingLauncherRCRocket.Athena_PlayerCameraModeTargetingLauncherRCRocket_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingLauncherRCRocket_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeRocket.Athena_PlayerCameraModeRocket_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeRocket_C : public UAthena_PlayerCameraModeRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingRifle.Athena_PlayerCameraModeTargetingRifle_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingRifle_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargetingIronSight.Athena_PlayerCameraModeTargetingIronSight_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargetingIronSight_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /Game/Blueprints/Camera/Athena/Athena_PlayerCameraModeTargeting_1P.Athena_PlayerCameraModeTargeting_1P_C
/// Size: 0x0000 (0x000128 - 0x000128)
class UAthena_PlayerCameraModeTargeting_1P_C : public UAthena_PlayerCameraModeRangedTargeting_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

