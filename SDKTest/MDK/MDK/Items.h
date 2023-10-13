
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C
/// Size: 0x0050 (0x000F10 - 0x000F60)
class ATrap_Floor_Hoverboard_Speed_C : public ABuildingTrapFloor_Hoverboard
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xF10, 8, 0, 0})
	CMember(UDecalComponent*)                          Decal                                                       OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_SpeedBoost_Idle                                           OFFSET(get<T>, {0xF20, 8, 0, 0})
	CMember(UBoxComponent*)                            Trigger                                                     OFFSET(get<T>, {0xF28, 8, 0, 0})
	CMember(USceneComponent*)                          Scene1                                                      OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Placed_Sound                                           OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Ready_Sound                                            OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound                                             OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Reload_Sound                                           OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Explode_Sound                                          OFFSET(get<T>, {0xF58, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.BP_ShouldTrigger
	// bool BP_ShouldTrigger(TArray<AActor*>& TouchingActors);                                                                  // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Hoverboard_Speed.Trap_Floor_Hoverboard_Speed_C.ExecuteUbergraph_Trap_Floor_Hoverboard_Speed
	// void ExecuteUbergraph_Trap_Floor_Hoverboard_Speed(int32_t EntryPoint);                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C
/// Size: 0x0080 (0x000EE0 - 0x000F60)
class ATrap_Wall_Electric_Athena_C : public ABuildingTrapWall
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE0, 8, 0, 0})
	CMember(UBoxComponent*)                            SoundTriggerComponent                                       OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(UBoxComponent*)                            TriggerComponent                                            OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleFX_Coil_R                                               OFFSET(get<T>, {0xEF8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleFX_Coil_L                                               OFFSET(get<T>, {0xF00, 8, 0, 0})
	CMember(UPointLightComponent*)                     Light_onFire                                                OFFSET(get<T>, {0xF08, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleFX_Arcs_R                                               OFFSET(get<T>, {0xF10, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleFX_Arcs_L                                               OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0xF20, 8, 0, 0})
	DMember(float)                                     FadeLight_Brightness_C184AADC4D731F4EF02D419DFF483ED3       OFFSET(get<float>, {0xF28, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FadeLight__Direction_C184AADC4D731F4EF02D419DFF483ED3       OFFSET(get<T>, {0xF2C, 1, 0, 0})
	CMember(UTimelineComponent*)                       FadeLight                                                   OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(USoundCue*)                                Activate_Sound_Cue                                          OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(USoundCue*)                                Placed_Sound_Cue                                            OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(USoundCue*)                                Explode_Sound_Cue                                           OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound_Cue                                         OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(UAudioComponent*)                          ChargeSoundInst                                             OFFSET(get<T>, {0xF58, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.PlayActivationSoundAndFX
	// void PlayActivationSoundAndFX();                                                                                         // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.FadeLight__FinishedFunc
	// void FadeLight__FinishedFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.FadeLight__UpdateFunc
	// void FadeLight__UpdateFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnReloadEnd
	// void OnReloadEnd();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
	// void GameplayCue.Abilities.Activation.Traps.ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Electric_Athena.Trap_Wall_Electric_Athena_C.ExecuteUbergraph_Trap_Wall_Electric_Athena
	// void ExecuteUbergraph_Trap_Wall_Electric_Athena(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C
/// Size: 0x0050 (0x000EE0 - 0x000F30)
class ATrap_Floor_Player_Jump_Free_Direction_Pad_C : public ABuildingTrapFloor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 JumpParticleSystem                                          OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(UBoxComponent*)                            Trigger                                                     OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(USceneComponent*)                          Scene1                                                      OFFSET(get<T>, {0xEF8, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Placed_Sound                                           OFFSET(get<T>, {0xF00, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Active_Sound                                           OFFSET(get<T>, {0xF08, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound                                             OFFSET(get<T>, {0xF10, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Reload_Sound                                           OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Explode_Sound                                          OFFSET(get<T>, {0xF20, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 JumpMaterial                                                OFFSET(get<T>, {0xF28, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnReloadEnd
	// void OnReloadEnd();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
	// void GameplayCue.Abilities.Activation.Traps.ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
	// void GameplayCue.Abilities.Activation.Traps.ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Free_Direction_Pad.Trap_Floor_Player_Jump_Free_Direction_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad
	// void ExecuteUbergraph_Trap_Floor_Player_Jump_Free_Direction_Pad(int32_t EntryPoint);                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C
/// Size: 0x00B1 (0x000F00 - 0x000FB1)
class ATrap_Ceiling_Falling_C : public ABuildingTrapCeiling_Falling
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4017;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xF00, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Door                                                        OFFSET(get<T>, {0xF08, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Door1                                                       OFFSET(get<T>, {0xF10, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_FallingDirt                                               OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire                                                        OFFSET(get<T>, {0xF20, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire1                                                       OFFSET(get<T>, {0xF28, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire2                                                       OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire3                                                       OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire4                                                       OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire5                                                       OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire6                                                       OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire7                                                       OFFSET(get<T>, {0xF58, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Tire8                                                       OFFSET(get<T>, {0xF60, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh1                                                 OFFSET(get<T>, {0xF68, 8, 0, 0})
	CMember(UBoxComponent*)                            Box                                                         OFFSET(get<T>, {0xF70, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0xF78, 8, 0, 0})
	DMember(float)                                     OpenDoor_Rotation_679D553A46783E44EDCECCA7D120A863          OFFSET(get<float>, {0xF80, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           OpenDoor__Direction_679D553A46783E44EDCECCA7D120A863        OFFSET(get<T>, {0xF84, 1, 0, 0})
	CMember(UTimelineComponent*)                       OpenDoor                                                    OFFSET(get<T>, {0xF88, 8, 0, 0})
	DMember(bool)                                      SocketTransforms                                            OFFSET(get<bool>, {0xF90, 1, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             Tires                                                       OFFSET(get<T>, {0xF98, 16, 0, 0})
	SMember(FTimerHandle)                              TimerHandle                                                 OFFSET(getStruct<T>, {0xFA8, 8, 0, 0})
	DMember(bool)                                      bActivated                                                  OFFSET(get<bool>, {0xFB0, 1, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTiresAndFX
	// void ToggleTiresAndFX();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleDoors
	// void ToggleDoors(bool bToggle);                                                                                          // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnRep_bActivated
	// void OnRep_bActivated();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ToggleTireVisibility
	// void ToggleTireVisibility(bool NewHidden);                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__FinishedFunc
	// void OpenDoor__FinishedFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoor__UpdateFunc
	// void OpenDoor__UpdateFunc();                                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.TrapActivated
	// void TrapActivated(float CooldownDuration);                                                                              // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ShowTires
	// void ShowTires();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.FireDustFX
	// void FireDustFX();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.OpenDoors
	// void OpenDoors();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.CloseDoors
	// void CloseDoors();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Falling.Trap_Ceiling_Falling_C.ExecuteUbergraph_Trap_Ceiling_Falling
	// void ExecuteUbergraph_Trap_Ceiling_Falling(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C
/// Size: 0x0060 (0x000EE0 - 0x000F40)
class ATrap_Ceiling_ElectricWeak_Athena_C : public ABuildingTrapCeiling
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE0, 8, 0, 0})
	CMember(UBoxComponent*)                            SoundTriggerComponent                                       OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleElectricFX                                              OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(UPointLightComponent*)                     Light                                                       OFFSET(get<T>, {0xEF8, 8, 0, 0})
	CMember(UBoxComponent*)                            TriggerComponent                                            OFFSET(get<T>, {0xF00, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0xF08, 8, 0, 0})
	DMember(float)                                     ScaleOutLight_Brightness_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5   OFFSET(get<float>, {0xF10, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleOutLight__Direction_3AA74E0F4FE4CCC5C65C10AB9EBF8ED5   OFFSET(get<T>, {0xF14, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleOutLight                                               OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Placed_Sound                                           OFFSET(get<T>, {0xF20, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound                                             OFFSET(get<T>, {0xF28, 8, 0, 0})
	CMember(USoundCue*)                                Explosion_Sound                                             OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(UAudioComponent*)                          ChargeSoundInst                                             OFFSET(get<T>, {0xF38, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ScaleOutLight__FinishedFunc
	// void ScaleOutLight__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ScaleOutLight__UpdateFunc
	// void ScaleOutLight__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnReloadEnd
	// void OnReloadEnd();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
	// void GameplayCue.Abilities.Activation.Traps.ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__SoundTriggerComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_ElectricWeak_Athena.Trap_Ceiling_ElectricWeak_Athena_C.ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena
	// void ExecuteUbergraph_Trap_Ceiling_ElectricWeak_Athena(int32_t EntryPoint);                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C
/// Size: 0x00B8 (0x000EE0 - 0x000F98)
class ATrap_Floor_Spikes_C : public ABuildingTrapFloor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Spike_Mesh                                                  OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(UBoxComponent*)                            Trigger                                                     OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0xEF8, 8, 0, 0})
	DMember(float)                                     ResetSpikes_LERP_FCB6779D4DCA9F66ECE8A7B3FDDF9459           OFFSET(get<float>, {0xF00, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ResetSpikes__Direction_FCB6779D4DCA9F66ECE8A7B3FDDF9459     OFFSET(get<T>, {0xF04, 1, 0, 0})
	CMember(UTimelineComponent*)                       ResetSpikes                                                 OFFSET(get<T>, {0xF08, 8, 0, 0})
	DMember(float)                                     Retract_LERP_0B9D97AE4B5C790D47D67889C6EAE1CD               OFFSET(get<float>, {0xF10, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Retract__Direction_0B9D97AE4B5C790D47D67889C6EAE1CD         OFFSET(get<T>, {0xF14, 1, 0, 0})
	CMember(UTimelineComponent*)                       Retract                                                     OFFSET(get<T>, {0xF18, 8, 0, 0})
	DMember(float)                                     Fire_LERP_31BA074043AA09D9C415BAAA81B9DCBF                  OFFSET(get<float>, {0xF20, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Fire__Direction_31BA074043AA09D9C415BAAA81B9DCBF            OFFSET(get<T>, {0xF24, 1, 0, 0})
	CMember(UTimelineComponent*)                       Fire                                                        OFFSET(get<T>, {0xF28, 8, 0, 0})
	CMember(USoundCue*)                                Place_Trap_Sound                                            OFFSET(get<T>, {0xF30, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Active_Sound                                           OFFSET(get<T>, {0xF38, 8, 0, 0})
	CMember(USoundCue*)                                Reload_Sound                                                OFFSET(get<T>, {0xF40, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Explode_Sound                                          OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound                                             OFFSET(get<T>, {0xF50, 8, 0, 0})
	DMember(float)                                     SpikeRestingScale                                           OFFSET(get<float>, {0xF58, 4, 0, 0})
	DMember(float)                                     SpikeActiveScale                                            OFFSET(get<float>, {0xF5C, 4, 0, 0})
	DMember(float)                                     SpikeHoldOnFireLength                                       OFFSET(get<float>, {0xF60, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SpikesMID                                                   OFFSET(get<T>, {0xF68, 8, 0, 0})
	DMember(float)                                     SweepExponent                                               OFFSET(get<float>, {0xF70, 4, 0, 0})
	SMember(FLinearColor)                              SweepColor                                                  OFFSET(getStruct<T>, {0xF74, 16, 0, 0})
	DMember(float)                                     SweepSpeed                                                  OFFSET(get<float>, {0xF84, 4, 0, 0})
	CMember(UMaterialInterface*)                       FriendlyTrapMaterial                                        OFFSET(get<T>, {0xF88, 8, 0, 0})
	CMember(UMaterialInterface*)                       NormalSpikeMaterial                                         OFFSET(get<T>, {0xF90, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.ChangeToNormalMaterial
	// void ChangeToNormalMaterial();                                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C. ChangeToFriendlyMaterial
	// void  ChangeToFriendlyMaterial();                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.MaterialSweepOnSpikes
	// void MaterialSweepOnSpikes(float SweepSpeed, FLinearColor SweepColor, float SweepExponent);                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.SetSpikePosition
	// void SetSpikePosition(float NewSpikePosition);                                                                           // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__FinishedFunc
	// void Fire__FinishedFunc();                                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.Fire__UpdateFunc
	// void Fire__UpdateFunc();                                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__FinishedFunc
	// void Retract__FinishedFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__UpdateFunc
	// void Retract__UpdateFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.Retract__Sounds__EventFunc
	// void Retract__Sounds__EventFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__FinishedFunc
	// void ResetSpikes__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.ResetSpikes__UpdateFunc
	// void ResetSpikes__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnReloadEnd
	// void OnReloadEnd();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
	// void GameplayCue.Abilities.Activation.Traps.ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.OnInitTeam
	// void OnInitTeam();                                                                                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Spikes.Trap_Floor_Spikes_C.ExecuteUbergraph_Trap_Floor_Spikes
	// void ExecuteUbergraph_Trap_Floor_Spikes(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C
/// Size: 0x00B0 (0x000EE0 - 0x000F90)
class ATrap_Wall_Spikes_Metal_C : public ABuildingTrapWall
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Spike_Mesh                                                  OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(UBoxComponent*)                            Trigger                                                     OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0xEF8, 8, 0, 0})
	DMember(float)                                     Fire_LERP_CFD6D2C040DF90D91F040D9A924D36CF                  OFFSET(get<float>, {0xF00, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Fire__Direction_CFD6D2C040DF90D91F040D9A924D36CF            OFFSET(get<T>, {0xF04, 1, 0, 0})
	CMember(UTimelineComponent*)                       Fire                                                        OFFSET(get<T>, {0xF08, 8, 0, 0})
	DMember(float)                                     Retract_LERP_AC88BE164FBDF2A4A64C6A9354AC1707               OFFSET(get<float>, {0xF10, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Retract__Direction_AC88BE164FBDF2A4A64C6A9354AC1707         OFFSET(get<T>, {0xF14, 1, 0, 0})
	CMember(UTimelineComponent*)                       Retract                                                     OFFSET(get<T>, {0xF18, 8, 0, 0})
	DMember(float)                                     ResetSpikes_LERP_01EE177443B1DE06DCD587B8987EE659           OFFSET(get<float>, {0xF20, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ResetSpikes__Direction_01EE177443B1DE06DCD587B8987EE659     OFFSET(get<T>, {0xF24, 1, 0, 0})
	CMember(UTimelineComponent*)                       ResetSpikes                                                 OFFSET(get<T>, {0xF28, 8, 0, 0})
	DMember(float)                                     SweepExponent                                               OFFSET(get<float>, {0xF30, 4, 0, 0})
	SMember(FLinearColor)                              SweepColor                                                  OFFSET(getStruct<T>, {0xF34, 16, 0, 0})
	DMember(float)                                     SweepSpeed                                                  OFFSET(get<float>, {0xF44, 4, 0, 0})
	DMember(float)                                     SpikeRestingScale                                           OFFSET(get<float>, {0xF48, 4, 0, 0})
	CMember(USoundCue*)                                Trap_Active_Sound                                           OFFSET(get<T>, {0xF50, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SpikesMID                                                   OFFSET(get<T>, {0xF58, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound                                             OFFSET(get<T>, {0xF60, 8, 0, 0})
	DMember(float)                                     SpikeActiveScale                                            OFFSET(get<float>, {0xF68, 4, 0, 0})
	DMember(float)                                     SpikeHoldOnFireLength                                       OFFSET(get<float>, {0xF6C, 4, 0, 0})
	CMember(USoundCue*)                                Trap_Explode_Sound                                          OFFSET(get<T>, {0xF70, 8, 0, 0})
	CMember(USoundCue*)                                Reload_Sound                                                OFFSET(get<T>, {0xF78, 8, 0, 0})
	CMember(USoundCue*)                                Place_Trap_Sound                                            OFFSET(get<T>, {0xF80, 8, 0, 0})
	CMember(UMaterialInterface*)                       FriendlySpikeMaterial                                       OFFSET(get<T>, {0xF88, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ChangeToFriendlyMaterial
	// void ChangeToFriendlyMaterial();                                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.MaterialSweepOnSpikes
	// void MaterialSweepOnSpikes(float SweepSpeed , FLinearColor SweepColor , float SweepExponent );                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.SetSpikePosition
	// void SetSpikePosition(float SpikePosition);                                                                              // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Fire__FinishedFunc
	// void Fire__FinishedFunc();                                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Fire__UpdateFunc
	// void Fire__UpdateFunc();                                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__FinishedFunc
	// void Retract__FinishedFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__UpdateFunc
	// void Retract__UpdateFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.Retract__Sounds__EventFunc
	// void Retract__Sounds__EventFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ResetSpikes__FinishedFunc
	// void ResetSpikes__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ResetSpikes__UpdateFunc
	// void ResetSpikes__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnReloadEnd
	// void OnReloadEnd();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
	// void GameplayCue.Abilities.Activation.Traps.ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.OnInitTeam
	// void OnInitTeam();                                                                                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Wall_Spikes_Metal.Trap_Wall_Spikes_Metal_C.ExecuteUbergraph_Trap_Wall_Spikes_Metal
	// void ExecuteUbergraph_Trap_Wall_Spikes_Metal(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C
/// Size: 0x0050 (0x000EE0 - 0x000F30)
class ATrap_Floor_Player_Jump_Pad_C : public ABuildingTrapFloor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 JumpParticleEffect                                          OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(UBoxComponent*)                            Trigger                                                     OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(USceneComponent*)                          Scene1                                                      OFFSET(get<T>, {0xEF8, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Placed_Sound                                           OFFSET(get<T>, {0xF00, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Active_Sound                                           OFFSET(get<T>, {0xF08, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound                                             OFFSET(get<T>, {0xF10, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Reload_Sound                                           OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Explode_Sound                                          OFFSET(get<T>, {0xF20, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 JumpMaterial                                                OFFSET(get<T>, {0xF28, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnReloadEnd
	// void OnReloadEnd();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ReloadBegin
	// void GameplayCue.Abilities.Activation.Traps.ReloadBegin(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
	// void GameplayCue.Abilities.Activation.Traps.ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Floor_Player_Jump_Pad.Trap_Floor_Player_Jump_Pad_C.ExecuteUbergraph_Trap_Floor_Player_Jump_Pad
	// void ExecuteUbergraph_Trap_Floor_Player_Jump_Pad(int32_t EntryPoint);                                                    // [0x154a140] HasDefaults          
};

/// Class /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C
/// Size: 0x00B0 (0x000EE0 - 0x000F90)
class ATrap_Ceiling_Spikes_C : public ABuildingTrapCeiling
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xEE0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Spike_Mesh                                                  OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(UBoxComponent*)                            Trigger                                                     OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0xEF8, 8, 0, 0})
	DMember(float)                                     ResetSpikes_LERP_B972DA5E46CD8AF9C0846C9688D21D08           OFFSET(get<float>, {0xF00, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ResetSpikes__Direction_B972DA5E46CD8AF9C0846C9688D21D08     OFFSET(get<T>, {0xF04, 1, 0, 0})
	CMember(UTimelineComponent*)                       ResetSpikes                                                 OFFSET(get<T>, {0xF08, 8, 0, 0})
	DMember(float)                                     Retract_LERP_A98FB7C244D5AEB5FA8508BA3FC97EBF               OFFSET(get<float>, {0xF10, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Retract__Direction_A98FB7C244D5AEB5FA8508BA3FC97EBF         OFFSET(get<T>, {0xF14, 1, 0, 0})
	CMember(UTimelineComponent*)                       Retract                                                     OFFSET(get<T>, {0xF18, 8, 0, 0})
	DMember(float)                                     Fire_LERP_99DF8D624D8879F22C8EDA82317252E5                  OFFSET(get<float>, {0xF20, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Fire__Direction_99DF8D624D8879F22C8EDA82317252E5            OFFSET(get<T>, {0xF24, 1, 0, 0})
	CMember(UTimelineComponent*)                       Fire                                                        OFFSET(get<T>, {0xF28, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SpikesMID                                                   OFFSET(get<T>, {0xF30, 8, 0, 0})
	DMember(float)                                     SweepExponent                                               OFFSET(get<float>, {0xF38, 4, 0, 0})
	SMember(FLinearColor)                              SweepColor                                                  OFFSET(getStruct<T>, {0xF3C, 16, 0, 0})
	DMember(float)                                     SweepSpeed                                                  OFFSET(get<float>, {0xF4C, 4, 0, 0})
	CMember(USoundCue*)                                Trap_Active_Sound                                           OFFSET(get<T>, {0xF50, 8, 0, 0})
	DMember(float)                                     SpikeRestingScale                                           OFFSET(get<float>, {0xF58, 4, 0, 0})
	CMember(USoundCue*)                                Trap_Fire_Sound                                             OFFSET(get<T>, {0xF60, 8, 0, 0})
	DMember(float)                                     SpikeActiveScale                                            OFFSET(get<float>, {0xF68, 4, 0, 0})
	DMember(float)                                     SpikeHoldOnFireLength                                       OFFSET(get<float>, {0xF6C, 4, 0, 0})
	CMember(USoundCue*)                                Reload_Sound                                                OFFSET(get<T>, {0xF70, 8, 0, 0})
	CMember(USoundCue*)                                Trap_Explode_Sound                                          OFFSET(get<T>, {0xF78, 8, 0, 0})
	CMember(USoundCue*)                                Place_Trap_Sound                                            OFFSET(get<T>, {0xF80, 8, 0, 0})
	CMember(UMaterialInterface*)                       FriendlySpikeMaterial                                       OFFSET(get<T>, {0xF88, 8, 0, 0})


	/// Functions
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C. ChangeToFriendlyMaterial
	// void  ChangeToFriendlyMaterial();                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.MaterialSweepOnSpikes
	// void MaterialSweepOnSpikes(float SweepSpeed, FLinearColor SweepColor, float SweepExponent);                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.SetSpikePosition
	// void SetSpikePosition(float NewSpikePosition);                                                                           // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Fire__FinishedFunc
	// void Fire__FinishedFunc();                                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Fire__UpdateFunc
	// void Fire__UpdateFunc();                                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Retract__FinishedFunc
	// void Retract__FinishedFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Retract__UpdateFunc
	// void Retract__UpdateFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.Retract__Sounds__EventFunc
	// void Retract__Sounds__EventFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.ResetSpikes__FinishedFunc
	// void ResetSpikes__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.ResetSpikes__UpdateFunc
	// void ResetSpikes__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnReloadEnd
	// void OnReloadEnd();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnFinishedBuilding
	// void OnFinishedBuilding();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
	// void GameplayCue.Abilities.Activation.Traps.ActivateTrap(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnOutOfDurability
	// void OnOutOfDurability();                                                                                                // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.OnInitTeam
	// void OnInitTeam();                                                                                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Items/Traps/Blueprints/Trap_Ceiling_Spikes.Trap_Ceiling_Spikes_C.ExecuteUbergraph_Trap_Ceiling_Spikes
	// void ExecuteUbergraph_Trap_Ceiling_Spikes(int32_t EntryPoint);                                                           // [0x154a140] HasDefaults          
};

