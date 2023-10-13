
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C
/// Size: 0x0020 (0x000B48 - 0x000B68)
class AAbilityDecoTool_SupplyDrop_C : public AFortCustomizableAbilityDecoTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})
	CMember(UClass*)                                   NewVar                                                      OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(AFortDecoHelper*)                          Helper                                                      OFFSET(get<T>, {0xB58, 8, 0, 0})
	SMember(FTimerHandle)                              HideTimerHandle                                             OFFSET(getStruct<T>, {0xB60, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideMeshAndPlacement
	// void HideMeshAndPlacement(bool bInHide);                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPOnSetDecoObjectPreview
	// void BPOnSetDecoObjectPreview(AFortDecoHelper* FortDecoHelper);                                                          // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.Show
	// void Show();                                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideFor
	// void HideFor(float InTime);                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop
	// void ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int32_t EntryPoint);                                                    // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C
/// Size: 0x0160 (0x000B48 - 0x000CA8)
class AAbilityDecoTool_AirStrike_C : public AFortCustomizableAbilityDecoTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3240;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB48, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              OFFSET(get<T>, {0xB50, 8, 0, 0})
	SMember(FGameplayAttribute)                        firingRangeSubBuilding3                                     OFFSET(getStruct<T>, {0xB58, 32, 0, 0})
	DMember(int32_t)                                   PowerLevel                                                  OFFSET(get<int32_t>, {0xB78, 4, 0, 0})
	SMember(FAirStrikeLeveledPatterns)                 DONOTEDIT_LeveledAirStrikeArrays                            OFFSET(getStruct<T>, {0xB80, 16, 0, 0})
	DMember(int32_t)                                   Current_Air_Strike_Sub_Tier_Selection                       OFFSET(get<int32_t>, {0xB90, 4, 0, 0})
	DMember(int32_t)                                   Current_Level_Max                                           OFFSET(get<int32_t>, {0xB94, 4, 0, 0})
	CMember(TArray<FVector>)                           Current_Unprocessed_Positions_Array                         OFFSET(get<T>, {0xB98, 16, 0, 0})
	CMember(TArray<FVector>)                           Position_Array_Cleaned_of_duplicates                        OFFSET(get<T>, {0xBA8, 16, 0, 0})
	CMember(TArray<int32_t>)                           Duplicate_Positions                                         OFFSET(get<T>, {0xBB8, 16, 0, 0})
	CMember(TArray<int32_t>)                           Double_Entries                                              OFFSET(get<T>, {0xBC8, 16, 0, 0})
	DMember(float)                                     Spacing_Between_the_Impacts                                 OFFSET(get<float>, {0xBD8, 4, 0, 0})
	CMember(AFortDecoHelper*)                          FortDecoHelper                                              OFFSET(get<T>, {0xBE0, 8, 0, 0})
	DMember(int32_t)                                   Old_Power_Level                                             OFFSET(get<int32_t>, {0xBE8, 4, 0, 0})
	DMember(bool)                                      Pattern_Needs_to_change                                     OFFSET(get<bool>, {0xBEC, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BombUpgrade1                                             OFFSET(getStruct<T>, {0xBF0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BombUpgrade2                                             OFFSET(getStruct<T>, {0xC10, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BombUpgrade3                                             OFFSET(getStruct<T>, {0xC30, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BombUpgrade4                                             OFFSET(getStruct<T>, {0xC50, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BombUpgrade5                                             OFFSET(getStruct<T>, {0xC70, 32, 0, 0})
	DMember(bool)                                      Onboarding                                                  OFFSET(get<bool>, {0xC90, 1, 0, 0})
	CMember(AFortDecoHelper*)                          Helper                                                      OFFSET(get<T>, {0xC98, 8, 0, 0})
	SMember(FTimerHandle)                              HideTimerHandle                                             OFFSET(getStruct<T>, {0xCA0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideMeshAndPlacement
	// void HideMeshAndPlacement(bool InHide);                                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PopulatePositionArrays
	// void PopulatePositionArrays();                                                                                           // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPOnSetDecoObjectPreview
	// void BPOnSetDecoObjectPreview(AFortDecoHelper* FortDecoHelper);                                                          // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.BPPressSecondaryFire
	// void BPPressSecondaryFire(AFortDecoHelper* FortDecoHelper);                                                              // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.PassInfo
	// void PassInfo(int32_t Power_Level);                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.HideFor
	// void HideFor(float InTime);                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.Show
	// void Show();                                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_BuildingTools/AbilityDecoTool_AirStrike.AbilityDecoTool_AirStrike_C.ExecuteUbergraph_AbilityDecoTool_AirStrike
	// void ExecuteUbergraph_AbilityDecoTool_AirStrike(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_TRAPS/Trap_SpeedBoosts/FX/BP_SpeedBoost_Camera_LensEffect.BP_SpeedBoost_Camera_LensEffect_C
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class ABP_SpeedBoost_Camera_LensEffect_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class ATracerGeneric_C : public AFortTracerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:


	/// Functions
	// Function /Game/Weapons/Tracers/TracerGeneric.TracerGeneric_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/Tracers/SubClasses/Tracer_Shotgun.Tracer_Shotgun_C
/// Size: 0x0008 (0x0003D0 - 0x0003D8)
class ATracer_Shotgun_C : public AFortTracerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3D0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/Tracers/SubClasses/Tracer_Shotgun.Tracer_Shotgun_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Tracers/SubClasses/Tracer_Shotgun.Tracer_Shotgun_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Tracers/SubClasses/Tracer_Shotgun.Tracer_Shotgun_C.ExecuteUbergraph_Tracer_Shotgun
	// void ExecuteUbergraph_Tracer_Shotgun(int32_t EntryPoint);                                                                // [0x154a140] None                 
};

/// Class /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C
/// Size: 0x0184 (0x000D08 - 0x000E8C)
class AB_Ranged_Generic_C : public AFortWeaponRanged
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xD08, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Reload_Empty_                                               OFFSET(get<T>, {0xD10, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Shells_empty_                                               OFFSET(get<T>, {0xD18, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ScopeMesh1P                                                 OFFSET(get<T>, {0xD20, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Muzzle_Empty_                                               OFFSET(get<T>, {0xD28, 8, 0, 0})
	DMember(float)                                     AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642 OFFSET(get<float>, {0xD30, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642 OFFSET(get<T>, {0xD34, 1, 0, 0})
	CMember(UTimelineComponent*)                       AnimateScopePostProcess                                     OFFSET(get<T>, {0xD38, 8, 0, 0})
	CMember(UParticleSystem*)                          MuzzleParticleSystem                                        OFFSET(get<T>, {0xD40, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0xD48, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0xD50, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0xD58, 1, 0, 0})
	DMember(bool)                                      Use_Reload_Particles                                        OFFSET(get<bool>, {0xD59, 1, 0, 0})
	CMember(UParticleSystem*)                          Reload_ParticleSystem                                       OFFSET(get<T>, {0xD60, 8, 0, 0})
	DMember(float)                                     LastPlayFXTime                                              OFFSET(get<float>, {0xD68, 4, 0, 0})
	DMember(float)                                     MinPlayFXTime                                               OFFSET(get<float>, {0xD6C, 4, 0, 0})
	DMember(bool)                                      UseShellsOnFire_                                            OFFSET(get<bool>, {0xD70, 1, 0, 0})
	DMember(bool)                                      UseShellsOnReload_                                          OFFSET(get<bool>, {0xD71, 1, 0, 0})
	DMember(bool)                                      UseShellsOnPump_                                            OFFSET(get<bool>, {0xD72, 1, 0, 0})
	CMember(UParticleSystem*)                          ShellsParticleSystemTemplate                                OFFSET(get<T>, {0xD78, 8, 0, 0})
	SMember(FName)                                     ReloadSocketName                                            OFFSET(getStruct<T>, {0xD80, 8, 0, 0})
	CMember(TArray<AFortAIPawn*>)                      Array_Of_Active_Enemy_AI                                    OFFSET(get<T>, {0xD88, 16, 0, 0})
	CMember(TArray<FWeightedBlendable>)                ScopePostProcessMaterial                                    OFFSET(get<T>, {0xD98, 16, 0, 0})
	DMember(bool)                                      Scope___Render_Enemies_To_Custom_Depth_Buffer               OFFSET(get<bool>, {0xDA8, 1, 0, 0})
	SMember(FName)                                     Shells_Socket_Name                                          OFFSET(getStruct<T>, {0xDB0, 8, 0, 0})
	CMember(TEnumAsByte<En_ShellTypes_01>)             ShellTypeSelect                                             OFFSET(get<T>, {0xDB8, 1, 0, 0})
	DMember(float)                                     Shells_Spawn_Rate_Scale                                     OFFSET(get<float>, {0xDBC, 4, 0, 0})
	SMember(FVector)                                   ShellsRotationRate                                          OFFSET(getStruct<T>, {0xDC0, 12, 0, 0})
	SMember(FVector)                                   Shells_Velocity                                             OFFSET(getStruct<T>, {0xDCC, 12, 0, 0})
	SMember(FVector)                                   Shells_Gravity                                              OFFSET(getStruct<T>, {0xDD8, 12, 0, 0})
	DMember(float)                                     Shells_Lifetime                                             OFFSET(get<float>, {0xDE4, 4, 0, 0})
	SMember(FVector)                                   Shells_Size                                                 OFFSET(getStruct<T>, {0xDE8, 12, 0, 0})
	DMember(float)                                     Shells_Time_Dilation                                        OFFSET(get<float>, {0xDF4, 4, 0, 0})
	DMember(float)                                     Target_Scope_Vignette_Blur_Screen_Percentage                OFFSET(get<float>, {0xDF8, 4, 0, 0})
	DMember(float)                                     Scope_Camera_Offset_Amount                                  OFFSET(get<float>, {0xDFC, 4, 0, 0})
	DMember(bool)                                      SmallShells                                                 OFFSET(get<bool>, {0xE00, 1, 0, 0})
	DMember(bool)                                      MediumShells                                                OFFSET(get<bool>, {0xE01, 1, 0, 0})
	DMember(bool)                                      LargeShells                                                 OFFSET(get<bool>, {0xE02, 1, 0, 0})
	DMember(bool)                                      ShotgunShells                                               OFFSET(get<bool>, {0xE03, 1, 0, 0})
	DMember(bool)                                      EnergyShells                                                OFFSET(get<bool>, {0xE04, 1, 0, 0})
	DMember(float)                                     Inherit_Parent_Velocity                                     OFFSET(get<float>, {0xE08, 4, 0, 0})
	DMember(float)                                     Cylindrical_Radius                                          OFFSET(get<float>, {0xE0C, 4, 0, 0})
	DMember(float)                                     Cylindrical_Height                                          OFFSET(get<float>, {0xE10, 4, 0, 0})
	DMember(bool)                                      DebugShellsSocket_                                          OFFSET(get<bool>, {0xE14, 1, 0, 0})
	DMember(bool)                                      Use_2_Post_Processes_For_the_Scope                          OFFSET(get<bool>, {0xE15, 1, 0, 0})
	CMember(USoundBase*)                               Sound_ScopeZoomIn                                           OFFSET(get<T>, {0xE18, 8, 0, 0})
	CMember(USoundBase*)                               Sound_ScopeZoomOut                                          OFFSET(get<T>, {0xE20, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Alteration_Ambient_PS                                       OFFSET(get<T>, {0xE28, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ReticleHUDElementTags                                       OFFSET(getStruct<T>, {0xE30, 32, 0, 0})
	DMember(bool)                                      Is_Wind_Enabled                                             OFFSET(get<bool>, {0xE50, 1, 0, 0})
	CMember(UParticleSystem*)                          MuzzleWindParticleSystem                                    OFFSET(get<T>, {0xE58, 8, 0, 0})
	CMember(UParticleSystem*)                          MuzzleParticleSystem1P                                      OFFSET(get<T>, {0xE60, 8, 0, 0})
	DMember(bool)                                      ShouldHideReticleAfterDelay                                 OFFSET(get<bool>, {0xE68, 1, 0, 0})
	CMember(UPostProcessComponent*)                    DownScopePostProcessSpawned                                 OFFSET(get<T>, {0xE70, 8, 0, 0})
	CMember(UPostProcessComponent*)                    DownScopePostProcessSpawned2                                OFFSET(get<T>, {0xE78, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 MuzzleWindParticleSpawned                                   OFFSET(get<T>, {0xE80, 8, 0, 0})
	DMember(int32_t)                                   StencilBufferValue                                          OFFSET(get<int32_t>, {0xE88, 4, 0, 0})


	/// Functions
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
	// void SetPostProcessParams(float InputPin);                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active, bool Reset);                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
	// void ShowReticle();                                                                                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
	// void HideReticle();                                                                                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
	// void ActivateOrDeactivateWindParticle(bool bNewActive);                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
	// void DeactivateMuzzleFX();                                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
	// void DeactivateReloadSmokeFX();                                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
	// void ActivateReloadSmokeFX();                                                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
	// void ActivateShellsFX(bool Bool);                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
	// void DeactivateShellsFX();                                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
	// void SetupShellFX();                                                                                                     // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
	// void UpdateShellEmittersFX();                                                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
	// void Muzzle Play Reload FX(TEnumAsByte<EFortReloadFXState> Selection);                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
	// void Muzzle Flash FX(bool Persistent Fire);                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
	// void AddRandomScale();                                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
	// void AnimateScopePostProcess__FinishedFunc();                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
	// void AnimateScopePostProcess__UpdateFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
	// void OnLoaded_4DE6158742ED7EE528BC98A240A81632(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
	// void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
	// void OnLoaded_83457BA843174AC6288682A342EBEAD9(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
	// void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
	// void OnStopWeaponFireFX();                                                                                               // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
	// void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
	// void OnSetTargeting(bool bNewIsTargeting);                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
	// void InitializeScopeVariables();                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
	// void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue);                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
	// void OnInitAlteration(UFortAlterationItemDefinition* NewAlteration);                                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod, UMaterialInstanceDynamic* DynamicMaterialInstance); // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
	// void ShellsON_(onPump)();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
	// void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit);                                                           // [0x154a140] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
	// void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit);                                                 // [0x154a140] Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible);                                                                           // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
	// void HideWeaponMesh();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
	// void ShowWeaponMesh();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
	// void HideWeapon();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
	// void ShowWeapon();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
	// void ReverseScopePP();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
	// void ResetDoonceScopeSound();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
	// void UnhideThirdPersonStuff();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
	// void PlayScopePP();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
	// void HideFirstPersonStuff();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
	// void AbortScopeFX();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
	// void HideThirdPersonStuff();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
	// void UnhideFirstPersonStuffPart2();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
	// void UnhideFirstPersonStuffPart1();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
	// void ForceScopeFX();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.SetupScopePostProcess
	// void SetupScopePostProcess();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Blueprints/B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
	// void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Generic.B_Shotgun_Generic_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Shotgun_Generic_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
/// Size: 0x06C8 (0x0003E0 - 0x000AA8)
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2728;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3E0, 8, 0, 0})
	SMember(FAnimNode_SpringBone)                      AnimGraphNode_SpringBone_985813CD40257121C24510B1EFA3045F   OFFSET(getStruct<T>, {0x3E8, 384, 0, 0})
	SMember(FAnimNode_SpringBone)                      AnimGraphNode_SpringBone_88B6F311437F6802F9D4E885AEBB612D   OFFSET(getStruct<T>, {0x568, 384, 0, 0})
	SMember(FAnimNode_SpringBone)                      AnimGraphNode_SpringBone_62132DD84DE9792F6948379FF19FE9B0   OFFSET(getStruct<T>, {0x6E8, 384, 0, 0})
	SMember(FAnimNode_SpringBone)                      AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC   OFFSET(getStruct<T>, {0x868, 384, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_209BCB204FB8EDDD0FE0ECAF3A14490E OFFSET(getStruct<T>, {0x9E8, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7         OFFSET(getStruct<T>, {0xA30, 72, 0, 0})
	SMember(FAnimNode_MeshSpaceRefPose)                AnimGraphNode_MeshRefPose_12EF14484EC26A755A1F178B81B266BF  OFFSET(getStruct<T>, {0xA78, 48, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_BuildingTools/Meshes/Blueprint_Paper_VIM.Blueprint_Paper_VIM_C.ExecuteUbergraph_Blueprint_Paper_VIM
	// void ExecuteUbergraph_Blueprint_Paper_VIM(int32_t EntryPoint);                                                           // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultEditingTool.DefaultEditingTool_C
/// Size: 0x0000 (0x000AF8 - 0x000AF8)
class ADefaultEditingTool_C : public AFortWeap_EditingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/Blueprints/DefaultBuildingTool.DefaultBuildingTool_C
/// Size: 0x0000 (0x000C30 - 0x000C30)
class ADefaultBuildingTool_C : public AFortWeap_BuildingTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
};

/// Class /Game/Weapons/FORT_BuildingTools/DecoTool.DecoTool_C
/// Size: 0x0000 (0x000B18 - 0x000B18)
class ADecoTool_C : public AFortDecoTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2840;

public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Graffiti/Meshes/SK_Pickaxe_Graffiti_Dyn_AnimBP.SK_Pickaxe_Graffiti_Dyn_AnimBP_C
/// Size: 0x06E0 (0x000410 - 0x000AF0)
class USK_Pickaxe_Graffiti_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_E8F720E645BA2B717EC6CBAF1E3445A0         OFFSET(getStruct<T>, {0x418, 72, 0, 0})
	SMember(FAnimNode_SubInput)                        AnimGraphNode_SubInput_5044A18743B86B01C04446B2B5000267     OFFSET(getStruct<T>, {0x460, 104, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_47CF91C54D9803ABB8CCA9BD7A049816    OFFSET(getStruct<T>, {0x4D0, 1424, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_72A284864185995BDCE82699CC2DE952 OFFSET(getStruct<T>, {0xA60, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_F07672D147C05CE0E10F4BACDC4D5FBB OFFSET(getStruct<T>, {0xAA8, 72, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Graffiti/Meshes/SK_Pickaxe_Graffiti_Dyn_AnimBP.SK_Pickaxe_Graffiti_Dyn_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_Graffiti_Dyn_AnimBP
	// void ExecuteUbergraph_SK_Pickaxe_Graffiti_Dyn_AnimBP(int32_t EntryPoint);                                                // [0x154a140] None                 
};

/// Class /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_AssaultRifle_FrontClip_SideAction_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_BA9A03134DBA089D49100DBE71EF86F5         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_4E27AC5C48BE291AEB818BA0DAEA04EB         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_B63DE5144515FA5CE71B26B8581D7149 OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction
	// void ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32_t EntryPoint);                                          // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Pistols/Mesh/Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C
/// Size: 0x0170 (0x000360 - 0x0004D0)
class UPistol_Revolver_SideAction_AnimBP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_4B9C316E43FA08653813BBBCA2D3C1CC         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_7B68B15D437D89F24C3E878507F22BD7         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_13AC6DBF4FB71657F72EF3BFDFE4EBE8 OFFSET(getStruct<T>, {0x420, 176, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Pistols/Mesh/Pistol_Revolver_SideAction_AnimBP.Pistol_Revolver_SideAction_AnimBP_C.ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP
	// void ExecuteUbergraph_Pistol_Revolver_SideAction_AnimBP(int32_t EntryPoint);                                             // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C
/// Size: 0x0028 (0x000910 - 0x000938)
class AB_Prj_Bullet_Sniper_C : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2360;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x910, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_SR_Ribbon_SmokeTrail                                      OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Trail                                                     OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(USoundBase*)                               Sniper_Rifle_SurfaceImpactSound                             OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(USoundBase*)                               Sniper_Rifle_PlayerImpactSound                              OFFSET(get<T>, {0x930, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.OnTouched
	// void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult& HitResult, bool bIsOverlap);              // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper.B_Prj_Bullet_Sniper_C.ExecuteUbergraph_B_Prj_Bullet_Sniper
	// void ExecuteUbergraph_B_Prj_Bullet_Sniper(int32_t EntryPoint);                                                           // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_BuildingTools/TrapTool.TrapTool_C
/// Size: 0x0000 (0x000B18 - 0x000B18)
class ATrapTool_C : public AFortTrapTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2840;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Harvest_CameraShake.Harvest_CameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UHarvest_CameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_3869FE004A7A40326F179A99947D40FD         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_42C4DC6D490B221E6A9F9A92B3FEA82E         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_844915D14C4D660AA45FB1B5C63743BF OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Rifles/Mesh/SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint
	// void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32_t EntryPoint);                                     // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Rifles/Mesh/SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C
/// Size: 0x06E0 (0x000360 - 0x000A40)
class USK_M249_Skeleton_Dynamic_AnimBP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_8E0F65D247E6D62D018C2FBA102CD862 OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_FFE83FF1460937477A33C495556479A8 OFFSET(getStruct<T>, {0x3B0, 72, 0, 0})
	SMember(FAnimNode_SubInput)                        AnimGraphNode_SubInput_7B49CE394F90BE5C65D9C0A9ADF6EB63     OFFSET(getStruct<T>, {0x3F8, 104, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_ABE25BC349D1D197C1C97D9008555ECD         OFFSET(getStruct<T>, {0x460, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_2A536FC14BBB64BCB3DB19A790BB45C4    OFFSET(getStruct<T>, {0x4B0, 1424, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Rifles/Mesh/SK_M249_Skeleton_Dynamic_AnimBP.SK_M249_Skeleton_Dynamic_AnimBP_C.ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP
	// void ExecuteUbergraph_SK_M249_Skeleton_Dynamic_AnimBP(int32_t EntryPoint);                                               // [0x154a140] None                 
};

/// Class /Game/Weapons/Prototype/FlareGun/Blueprints/B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C
/// Size: 0x00C8 (0x000318 - 0x0003E0)
class AB_SprayDecalTest_Flare_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     _1x1x1BoxCenterAligned                                      OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(float)                                     Fade_Decal_Out_Timeline_Fade_7EF328CF43B35714D32880AEAEB340F4 OFFSET(get<float>, {0x330, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Fade_Decal_Out_Timeline__Direction_7EF328CF43B35714D32880AEAEB340F4 OFFSET(get<T>, {0x334, 1, 0, 0})
	CMember(UTimelineComponent*)                       Fade_Decal_Out_Timeline                                     OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UMaterialInterface*)                       Decal_Material                                              OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(float)                                     Decal_Scale_Min                                             OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     Decal_Scale_Max                                             OFFSET(get<float>, {0x34C, 4, 0, 0})
	SMember(FRotator)                                  Decal_Rotation                                              OFFSET(getStruct<T>, {0x350, 12, 0, 0})
	SMember(FVector)                                   Decal_Location                                              OFFSET(getStruct<T>, {0x35C, 12, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Decal_MID                                                   OFFSET(get<T>, {0x368, 8, 0, 0})
	SMember(FLinearColor)                              Decal_Color                                                 OFFSET(getStruct<T>, {0x370, 16, 0, 0})
	SMember(FTransform)                                Decal_Transform                                             OFFSET(getStruct<T>, {0x380, 48, 0, 0})
	DMember(float)                                     Decal_Lifetime                                              OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(float)                                     Decal_Fadeout_Time                                          OFFSET(get<float>, {0x3B4, 4, 0, 0})
	DMember(float)                                     Decal_RT_Delay                                              OFFSET(get<float>, {0x3B8, 4, 0, 0})
	DMember(float)                                     Decal_Opacity                                               OFFSET(get<float>, {0x3BC, 4, 0, 0})
	SMember(FVector)                                   Decal_Scale                                                 OFFSET(getStruct<T>, {0x3C0, 12, 0, 0})
	DMember(float)                                     Decal_X_Opacity_Hardness                                    OFFSET(get<float>, {0x3CC, 4, 0, 0})
	DMember(float)                                     Decal_Y_Opacity_Hardness                                    OFFSET(get<float>, {0x3D0, 4, 0, 0})
	DMember(float)                                     Decal_Z_Falloff_Hardness                                    OFFSET(get<float>, {0x3D4, 4, 0, 0})
	CMember(UTexture*)                                 Decal_Texture                                               OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.Fade Decal Out Timeline__FinishedFunc
	// void Fade Decal Out Timeline__FinishedFunc();                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.Fade Decal Out Timeline__UpdateFunc
	// void Fade Decal Out Timeline__UpdateFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_SprayDecalTest_Flare.B_SprayDecalTest_Flare_C.ExecuteUbergraph_B_SprayDecalTest_Flare
	// void ExecuteUbergraph_B_SprayDecalTest_Flare(int32_t EntryPoint);                                                        // [0x154a140] None                 
};

/// Class /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_AssaultRifle_FrontClip_BackAction_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_093BD79B4AD87188F29729836AA06276         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_A31555D842D75C0905B639846DA94151 OFFSET(getStruct<T>, {0x3B0, 56, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_6E68D2AF43B0D536C012ED82940BED48         OFFSET(getStruct<T>, {0x3E8, 112, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction
	// void ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction(int32_t EntryPoint);                                          // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Generic.B_Assault_Generic_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Assault_Generic_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto.B_Assault_Auto_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Assault_Auto_C : public AB_Assault_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_29/Meshes/ANimBP_UnicornHorn.ANimBP_UnicornHorn_C
/// Size: 0x0214 (0x000360 - 0x000574)
class UANimBP_UnicornHorn_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1396;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_5EA71789492D7AB39A717E8C785E00BE         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E   OFFSET(getStruct<T>, {0x3B0, 352, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_CA4101CC43143B5484092DAD36960EDA OFFSET(getStruct<T>, {0x510, 72, 0, 0})
	DMember(float)                                     HornScale                                                   OFFSET(get<float>, {0x558, 4, 0, 0})
	SMember(FVector)                                   MaxHornScale                                                OFFSET(getStruct<T>, {0x55C, 12, 0, 0})
	SMember(FVector)                                   MinHornScale                                                OFFSET(getStruct<T>, {0x568, 12, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_29/Meshes/ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_ANimBP_UnicornHorn_AnimGraphNode_ModifyBone_2C27563E472549F2720697AB08F83E1E(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Melee/Pickaxe_29/Meshes/ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_29/Meshes/ANimBP_UnicornHorn.ANimBP_UnicornHorn_C.ExecuteUbergraph_ANimBP_UnicornHorn
	// void ExecuteUbergraph_ANimBP_UnicornHorn(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_CarbideBlue/Models/SK_Pickaxe_CarbideBlue_AnimBP.SK_Pickaxe_CarbideBlue_AnimBP_C
/// Size: 0x06D8 (0x000410 - 0x000AE8)
class USK_Pickaxe_CarbideBlue_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_B8D216BC47C52E9485A47F88F9C76D91 OFFSET(getStruct<T>, {0x418, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_994860DD4F8F9D3E35DA72AE62AF25F2    OFFSET(getStruct<T>, {0x460, 1424, 0, 0})
	SMember(FAnimNode_SubInput)                        AnimGraphNode_SubInput_5B916D5A4FC042BFC0D4ECB266CE1F85     OFFSET(getStruct<T>, {0x9F0, 104, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_84899BF84B2BE48F95B56AAC25D35E3F OFFSET(getStruct<T>, {0xA58, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_CADB32404919AE1712ED6EBCE998CDDB         OFFSET(getStruct<T>, {0xAA0, 72, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_CarbideBlue/Models/SK_Pickaxe_CarbideBlue_AnimBP.SK_Pickaxe_CarbideBlue_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP
	// void ExecuteUbergraph_SK_Pickaxe_CarbideBlue_AnimBP(int32_t EntryPoint);                                                 // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_PJ_Party/Meshes/SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C
/// Size: 0x0F58 (0x000410 - 0x001368)
class USK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_SubInput)                        AnimGraphNode_SubInput_421E159244147BBC5C47379496FAAE1B     OFFSET(getStruct<T>, {0x418, 104, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_5744159B4EE1D73C7D8EF0B371B2684F    OFFSET(getStruct<T>, {0x480, 1424, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98 OFFSET(getStruct<T>, {0xA10, 208, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose_25E7BF754A4B2C7227E146B4F8D02C1E OFFSET(getStruct<T>, {0xAE0, 224, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_69A32A59489AD57DEF9F04A8666505D8 OFFSET(getStruct<T>, {0xBC0, 80, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_F05A53DA4C4A7B3876B951A736CB45AA OFFSET(getStruct<T>, {0xC10, 72, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_463A848D4E661E918E46149071B8A38C OFFSET(getStruct<T>, {0xC58, 80, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_232C9E2D4CD7AFB441AC03B53C09A131 OFFSET(getStruct<T>, {0xCA8, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_79529D1E4DD2609CC3183FB4F38B72DA OFFSET(getStruct<T>, {0xCF0, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_16A065814A83DB639FB5688BC44C9734 OFFSET(getStruct<T>, {0xD38, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_B4FE9C064848B634CAB4D3B16F5105FE    OFFSET(getStruct<T>, {0xD80, 1424, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_BE2E74B94CD2DD95BE92B49C366772FE         OFFSET(getStruct<T>, {0x1310, 72, 0, 0})
	SMember(FVector)                                   ExtVel                                                      OFFSET(getStruct<T>, {0x1358, 12, 0, 0})
	DMember(float)                                     ForceScale                                                  OFFSET(get<float>, {0x1364, 4, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_PJ_Party/Meshes/SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_AnimGraphNode_BlendListByBool_225561ED45DE5C2DECEDCB9D8F3CBF98(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Melee/Pickaxe_PJ_Party/Meshes/SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_PJ_Party/Meshes/SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP.SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP_C.ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP
	// void ExecuteUbergraph_SK_Pickaxe_PJ_Party_Export_Skeleton_AnimBP(int32_t EntryPoint);                                    // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Pizza_Pit/Meshes/Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C
/// Size: 0x06E8 (0x000410 - 0x000AF8)
class UPickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_SubInput)                        AnimGraphNode_SubInput_070E9EDA451C23C20742F1A3CEA36E92     OFFSET(getStruct<T>, {0x418, 104, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_151ADE244279A7A42130649830A169AC OFFSET(getStruct<T>, {0x480, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_F8CB432B4692B3C54E96EAB243541C63 OFFSET(getStruct<T>, {0x4C8, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_EC80E3A14FFEF078D3064A8578FD21FF         OFFSET(getStruct<T>, {0x510, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_A4C70D374ADF4261AD134E800DC2E8CD    OFFSET(getStruct<T>, {0x560, 1424, 0, 0})
	CMember(USkeletalMeshComponent*)                   MeshToCopy                                                  OFFSET(get<T>, {0xAF0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Pizza_Pit/Meshes/Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.BlueprintInitializeAnimation
	// void BlueprintInitializeAnimation();                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Pizza_Pit/Meshes/Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint.Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint
	// void ExecuteUbergraph_Pickaxe_Pizza_Pit_Skeleton_AnimBlueprint(int32_t EntryPoint);                                      // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Melee/Meshes/SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C
/// Size: 0x06E8 (0x000410 - 0x000AF8)
class USK_PickAxe_Jaws_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_SubInput)                        AnimGraphNode_SubInput_6B147D6642EFDBB249D21998BE4ED15C     OFFSET(getStruct<T>, {0x418, 104, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_85E18924481875C844C3A3A7EA0A5DAF         OFFSET(getStruct<T>, {0x480, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_E40FC2B6491B2E41E87B22BE74EFDBED    OFFSET(getStruct<T>, {0x4D0, 1424, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_D00AF4E743A94A1AD17B36A5F9F03EEA OFFSET(getStruct<T>, {0xA60, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_DB4BDBBD424FBEF62E5517A65A3B4597 OFFSET(getStruct<T>, {0xAA8, 72, 0, 0})
	CMember(USkeletalMeshComponent*)                   MeshToCopy                                                  OFFSET(get<T>, {0xAF0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Meshes/SK_PickAxe_Jaws_Skeleton_AnimBP.SK_PickAxe_Jaws_Skeleton_AnimBP_C.ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP
	// void ExecuteUbergraph_SK_PickAxe_Jaws_Skeleton_AnimBP(int32_t EntryPoint);                                               // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Melee/Pickaxe_Valor/Meshes/Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C
/// Size: 0x06E0 (0x000410 - 0x000AF0)
class UValor_Pickaxe_dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x410, 8, 0, 0})
	SMember(FAnimNode_SubInput)                        AnimGraphNode_SubInput_9318A6E24BC2379998187E968336A477     OFFSET(getStruct<T>, {0x418, 104, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_CCFDCC0F4CAA6571C11FAB8073E002E9         OFFSET(getStruct<T>, {0x480, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_91034D24435D027602524289648AE6D6 OFFSET(getStruct<T>, {0x4C8, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_24C791F6468FB05C35F89481BCA0BA5B OFFSET(getStruct<T>, {0x510, 72, 0, 0})
	SMember(FAnimNode_RigidBody)                       AnimGraphNode_RigidBody_0B995CB840C0EDC3623542A37764C52A    OFFSET(getStruct<T>, {0x560, 1424, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Pickaxe_Valor/Meshes/Valor_Pickaxe_dyn_AnimBP.Valor_Pickaxe_dyn_AnimBP_C.ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP
	// void ExecuteUbergraph_Valor_Pickaxe_dyn_AnimBP(int32_t EntryPoint);                                                      // [0x154a140] None                 
};

/// Class /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C
/// Size: 0x0F42 (0x000360 - 0x0012A2)
class UBP_GrenadeLauncher_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4770;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_CCD9E03141024373207EA19F7FABC7E4 OFFSET(getStruct<T>, {0x368, 176, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_9BE5EC0249061EF1B638FDA411EEAB88 OFFSET(getStruct<T>, {0x418, 72, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15   OFFSET(getStruct<T>, {0x460, 352, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_5027BC3E4B45A2EA685B7E89AFE7BD76 OFFSET(getStruct<T>, {0x5C0, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_35ADB9784B260E9E0D5321BC72AC51A5         OFFSET(getStruct<T>, {0x608, 112, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_545A1542415580C93B2F2CB92FFE6BF9         OFFSET(getStruct<T>, {0x678, 72, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive_1B48A4454DD43BDD5D313E9BFCAEB34E OFFSET(getStruct<T>, {0x6C0, 280, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC OFFSET(getStruct<T>, {0x7E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298 OFFSET(getStruct<T>, {0x860, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F OFFSET(getStruct<T>, {0x8E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607 OFFSET(getStruct<T>, {0x960, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A OFFSET(getStruct<T>, {0x9E0, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1 OFFSET(getStruct<T>, {0xA60, 128, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07 OFFSET(getStruct<T>, {0xAE0, 128, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_36B2599748A5ECA6839B26B25ED0F41F OFFSET(getStruct<T>, {0xB60, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_F9587DB84CDA0FB47B0428973D59B3E6  OFFSET(getStruct<T>, {0xC10, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_5DF1EBF84566794DCDFFA19D400B2E34 OFFSET(getStruct<T>, {0xC58, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_424E81254A7CDE1BA9149CB49FC795BD  OFFSET(getStruct<T>, {0xD08, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_2C8CA31D4817C8C9693A6EA8C5EBCE9E OFFSET(getStruct<T>, {0xD50, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_6385996A47E307977AB5BE9C84F42508  OFFSET(getStruct<T>, {0xE00, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_03999E3843804F0355B33984C6AB3969 OFFSET(getStruct<T>, {0xE48, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_CE69749D4FC3C1D98B24CCA69D360D62  OFFSET(getStruct<T>, {0xEF8, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_FF94CAE0484DB857352763B8BC624EA0 OFFSET(getStruct<T>, {0xF40, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_BF4E8EC14863F22C7C06589F99DF4C3E  OFFSET(getStruct<T>, {0xFF0, 72, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_4DB060FA436822518B51D09E9866705D OFFSET(getStruct<T>, {0x1038, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_75D4D2FC46577E0F28088884ABFA1036  OFFSET(getStruct<T>, {0x10E8, 72, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_IdentityPose_4E6685A948E38158991F278F356AAE07 OFFSET(getStruct<T>, {0x1130, 56, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_StateResult_6975EFCF41B2D616E4B5B4AF156848C7  OFFSET(getStruct<T>, {0x1168, 72, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine_46F65ED54161388583A1A59736014BD0 OFFSET(getStruct<T>, {0x11B0, 224, 0, 0})
	DMember(float)                                     CylinderROT                                                 OFFSET(get<float>, {0x1290, 4, 0, 0})
	DMember(float)                                     LastFrameRotCurveValue                                      OFFSET(get<float>, {0x1294, 4, 0, 0})
	DMember(int32_t)                                   DrumPositionCount                                           OFFSET(get<int32_t>, {0x1298, 4, 0, 0})
	DMember(bool)                                      ShouldRotateToPos1                                          OFFSET(get<bool>, {0x129C, 1, 0, 0})
	DMember(bool)                                      ShouldRotateToPos2                                          OFFSET(get<bool>, {0x129D, 1, 0, 0})
	DMember(bool)                                      ShouldRotateToPos3                                          OFFSET(get<bool>, {0x129E, 1, 0, 0})
	DMember(bool)                                      ShouldRotateToPos4                                          OFFSET(get<bool>, {0x129F, 1, 0, 0})
	DMember(bool)                                      ShouldRotateToPos5                                          OFFSET(get<bool>, {0x12A0, 1, 0, 0})
	DMember(bool)                                      ShouldRotateToPos6                                          OFFSET(get<bool>, {0x12A1, 1, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_3EC4C2194E3816DF80A821927DE6E3D1(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_744E32E64439A6E346874993BC2D3A07(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4C05BBC84F89653A9F496ABE3FBFA607(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_F88795E14387D493A0441AAF33462D4F(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_4CD0B0D343A573F7E5551299DF889298(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_71DAE6D547D6D96F74E8C99E79CBC0DC(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_ModifyBone_EA2975074BE60949C2769EB733D75B15(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_GrenadeLauncher_AnimGraphNode_TransitionResult_34526DF547A00B6C25DBA2B722782D7A(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.AnimNotify_RotateDrum
	// void AnimNotify_RotateDrum();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Skeleton_Templates/BP_GrenadeLauncher.BP_GrenadeLauncher_C.ExecuteUbergraph_BP_GrenadeLauncher
	// void ExecuteUbergraph_BP_GrenadeLauncher(int32_t EntryPoint);                                                            // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncherCameraShake.B_RocketLauncherCameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UB_RocketLauncherCameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Weapons/FORT_RocketLaunchers/Mesh/RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class URPG_Skeleton_AnimBlueprint_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_F7E820434538DD4C6AD2A1B5BCE33A39         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_782D94BD4EFDE1439B44CB93C212AD03         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_829520A14F89D74E64C7AEBBB88029DD OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_RocketLaunchers/Mesh/RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RPG_Skeleton_AnimBlueprint
	// void ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int32_t EntryPoint);                                                    // [0x154a140] None                 
};

/// Class /Game/Weapons/Skeleton_Templates/BP_Pistol_FC_SA.BP_Pistol_FC_SA_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_Pistol_FC_SA_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_59F2F7924C02FD42668752B6AD5C5D7D         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_3C404E374989FC3E37A4538744D810DA         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_16F5A0174D756BCD3A56E2A54C593E88 OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_Pistol_FC_SA.BP_Pistol_FC_SA_C.ExecuteUbergraph_BP_Pistol_FC_SA
	// void ExecuteUbergraph_BP_Pistol_FC_SA(int32_t EntryPoint);                                                               // [0x154a140] None                 
};

/// Class /Game/Weapons/Skeleton_Templates/BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_Pistol_Grip_Clip_TopAction_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_6047A5F5443C843C1EB16F90E772A9EC         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_1C444D924AC74067230DFA9A23E9CEE2         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_FE7CFCE944C6521565A6F7AC0C7064A1 OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C.ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction
	// void ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction(int32_t EntryPoint);                                                 // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Generic.B_Pistol_Generic_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_Generic_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Auto.B_Pistol_Auto_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_Auto_C : public AB_Pistol_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/Skeleton_Templates/BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_Shotgun_SG_BFPA_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C.ExecuteUbergraph_BP_Shotgun_SG_BFPA
	// void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32_t EntryPoint);                                                            // [0x154a140] None                 
};

/// Class /Game/Weapons/Skeleton_Templates/BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_Shotgun_RG_BFPA_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_447289EE478D0375649725A287B7BD4C         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_76185EE8467A3505F3E23E89565E7CB8         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_BE887AC24A08313E787615BA25555A93 OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C.ExecuteUbergraph_BP_Shotgun_RG_BFPA
	// void ExecuteUbergraph_BP_Shotgun_RG_BFPA(int32_t EntryPoint);                                                            // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Rifles/Effects/Muzzle/B_AMR_Shake_FullyCharged_01.B_AMR_Shake_FullyCharged_01_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UB_AMR_Shake_FullyCharged_01_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Mesh/SK_AMR_Skeleton_AnimBP.SK_AMR_Skeleton_AnimBP_C
/// Size: 0x048C (0x000360 - 0x0007EC)
class USK_AMR_Skeleton_AnimBP_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2028;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_14E0A36B40D7CB7F8DE59DBDC13CE364         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_SpringBone)                      AnimGraphNode_SpringBone_B6BDB3454D7292BB4130B7A8AA9DEDA7   OFFSET(getStruct<T>, {0x3B0, 384, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_DC0B2D6840E4BC0BFBE5C4B2250764FB OFFSET(getStruct<T>, {0x530, 72, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_7122483F4CB03C64C14DA7B10CFB57B2 OFFSET(getStruct<T>, {0x578, 72, 0, 0})
	SMember(FAnimNode_SpringBone)                      AnimGraphNode_SpringBone_12832F8745DDAA986539DB9A93020DB9   OFFSET(getStruct<T>, {0x5C0, 384, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_86E645A943788F57C7CA249A842FEE55         OFFSET(getStruct<T>, {0x740, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_19EAF67347136A59BFDB76A1B0DC77DC OFFSET(getStruct<T>, {0x7B0, 56, 0, 0})
	DMember(float)                                     springVal                                                   OFFSET(get<float>, {0x7E8, 4, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Rifles/Mesh/SK_AMR_Skeleton_AnimBP.SK_AMR_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_B6BDB3454D7292BB4130B7A8AA9DEDA7
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_B6BDB3454D7292BB4130B7A8AA9DEDA7(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Mesh/SK_AMR_Skeleton_AnimBP.SK_AMR_Skeleton_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_12832F8745DDAA986539DB9A93020DB9
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_AMR_Skeleton_AnimBP_AnimGraphNode_SpringBone_12832F8745DDAA986539DB9A93020DB9(); // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Mesh/SK_AMR_Skeleton_AnimBP.SK_AMR_Skeleton_AnimBP_C.ExecuteUbergraph_SK_AMR_Skeleton_AnimBP
	// void ExecuteUbergraph_SK_AMR_Skeleton_AnimBP(int32_t EntryPoint);                                                        // [0x154a140] None                 
};

/// Class /Game/Weapons/Skeleton_Templates/BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_SniperRifle_FCSA_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_146699F448DB1AAB26EC9F814C49D1D1         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_F7DD3CBC4CA03D5C78826D9E409ECCA2         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_7C8D051E4A0B249DA61DCAA86177450B OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_SniperRifle_FCSA.BP_SniperRifle_FCSA_C.ExecuteUbergraph_BP_SniperRifle_FCSA
	// void ExecuteUbergraph_BP_SniperRifle_FCSA(int32_t EntryPoint);                                                           // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Generic.B_Rifle_Generic_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Rifle_Generic_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Bullet_Sniper_Auto_Child.B_Prj_Bullet_Sniper_Auto_Child_C
/// Size: 0x0000 (0x000938 - 0x000938)
class AB_Prj_Bullet_Sniper_Auto_Child_C : public AB_Prj_Bullet_Sniper_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2360;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_NoScope_Athena.B_Rifle_NoScope_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Rifle_NoScope_Athena_C : public AB_Rifle_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Crossbows/Blueprints/B_Crossbow_Athena.B_Crossbow_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Crossbow_Athena_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C
/// Size: 0x0018 (0x000910 - 0x000928)
class AB_Prj_Arrow_Crossbow_Athena_C : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x910, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Crossbow_Projectile                                       OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(UParticleSystem*)                          HitPlayerEffect                                             OFFSET(get<T>, {0x920, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.OnTouched
	// void OnTouched(AActor* OtherActor, UPrimitiveComponent* OtherComp, FHitResult& HitResult, bool bIsOverlap);              // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Sniper/Blueprints/B_Prj_Arrow_Crossbow_Athena.B_Prj_Arrow_Crossbow_Athena_C.ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena
	// void ExecuteUbergraph_B_Prj_Arrow_Crossbow_Athena(int32_t EntryPoint);                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Athena.B_Rifle_Sniper_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Rifle_Sniper_Athena_C : public AB_Rifle_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_Sniper_Auto_Athena_Child.B_Rifle_Sniper_Auto_Athena_Child_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Rifle_Sniper_Auto_Athena_Child_C : public AB_Rifle_Sniper_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C
/// Size: 0x0154 (0x000E8C - 0x000FE0)
class AB_Rifle_AMR_Athena_C : public AB_Rifle_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4064;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE90, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Sm_AMR_Glass_01                                             OFFSET(get<T>, {0xE98, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ResidualArcsSide1                                           OFFSET(get<T>, {0xEA0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ResidualArcsTop2                                            OFFSET(get<T>, {0xEA8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ResidualArcsTop1                                            OFFSET(get<T>, {0xEB0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     AMRFan                                                      OFFSET(get<T>, {0xEB8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 MuzzleLight                                                 OFFSET(get<T>, {0xEC0, 8, 0, 0})
	CMember(UAudioComponent*)                          FullCharge_AudioComponent                                   OFFSET(get<T>, {0xEC8, 8, 0, 0})
	CMember(UAudioComponent*)                          Ambient_Charge_AudioComponent                               OFFSET(get<T>, {0xED0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ElectrodeParticles                                          OFFSET(get<T>, {0xED8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 CoreParticles                                               OFFSET(get<T>, {0xEE0, 8, 0, 0})
	DMember(float)                                     SlowdownTimeline_LERP_FA3456884604F88A7D037EA57D2A559E      OFFSET(get<float>, {0xEE8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           SlowdownTimeline__Direction_FA3456884604F88A7D037EA57D2A559E OFFSET(get<T>, {0xEEC, 1, 0, 0})
	CMember(UTimelineComponent*)                       SlowdownTimeline                                            OFFSET(get<T>, {0xEF0, 8, 0, 0})
	DMember(float)                                     springVal_springValCurve_40BD27CD4D6E40F558011BAB35039509   OFFSET(get<float>, {0xEF8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           springVal__Direction_40BD27CD4D6E40F558011BAB35039509       OFFSET(get<T>, {0xEFC, 1, 0, 0})
	CMember(UTimelineComponent*)                       springVal                                                   OFFSET(get<T>, {0xF00, 8, 0, 0})
	DMember(float)                                     ScaleUpParticles_SpawnRate_7A6295DF4D992FC114D1DCBF417ED9FD OFFSET(get<float>, {0xF08, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleUpParticles__Direction_7A6295DF4D992FC114D1DCBF417ED9FD OFFSET(get<T>, {0xF0C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleUpParticles                                            OFFSET(get<T>, {0xF10, 8, 0, 0})
	DMember(float)                                     ScaleDownParticles_SpawnRate_5C07019A41C7FA0F760F718DC5413D1A OFFSET(get<float>, {0xF18, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleDownParticles__Direction_5C07019A41C7FA0F760F718DC5413D1A OFFSET(get<T>, {0xF1C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleDownParticles                                          OFFSET(get<T>, {0xF20, 8, 0, 0})
	DMember(float)                                     Reload_PItchChange_NewTrack_0_377ECAF246C00AC525A90D814B63399F OFFSET(get<float>, {0xF28, 4, 0, 0})
	DMember(float)                                     Reload_PItchChange_Reload_Pitch_377ECAF246C00AC525A90D814B63399F OFFSET(get<float>, {0xF2C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Reload_PItchChange__Direction_377ECAF246C00AC525A90D814B63399F OFFSET(get<T>, {0xF30, 1, 0, 0})
	CMember(UTimelineComponent*)                       Reload_PItchChange                                          OFFSET(get<T>, {0xF38, 8, 0, 0})
	DMember(float)                                     CoreParticlesSpawnRate_Uncharged_                           OFFSET(get<float>, {0xF40, 4, 0, 0})
	DMember(float)                                     CoreParticlesSpawnRate_Charged_                             OFFSET(get<float>, {0xF44, 4, 0, 0})
	CMember(UParticleSystem*)                          ChargedBeam                                                 OFFSET(get<T>, {0xF48, 8, 0, 0})
	CMember(UParticleSystem*)                          DefaultBeam                                                 OFFSET(get<T>, {0xF50, 8, 0, 0})
	DMember(float)                                     AnimationRate_Uncharged_                                    OFFSET(get<float>, {0xF58, 4, 0, 0})
	DMember(float)                                     AnimationRate_Charged_                                      OFFSET(get<float>, {0xF5C, 4, 0, 0})
	DMember(float)                                     CoreParticlesTimeDilation_Uncharged_                        OFFSET(get<float>, {0xF60, 4, 0, 0})
	DMember(float)                                     CoreParticlesTimeDilation_Charged_                          OFFSET(get<float>, {0xF64, 4, 0, 0})
	DMember(float)                                     CoreParticlesSpinRate_Charged_                              OFFSET(get<float>, {0xF68, 4, 0, 0})
	DMember(float)                                     ElectrodeParticlesEnergizedSpawnRate_Uncharged_             OFFSET(get<float>, {0xF6C, 4, 0, 0})
	DMember(float)                                     ElectrodeParticlesEnergizedSpawnRate_Charged_               OFFSET(get<float>, {0xF70, 4, 0, 0})
	DMember(bool)                                      Reached_Min_Charge                                          OFFSET(get<bool>, {0xF74, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BarrelGlowMID                                               OFFSET(get<T>, {0xF78, 8, 0, 0})
	SMember(FLinearColor)                              BarrelGlowColor_Uncharged_                                  OFFSET(getStruct<T>, {0xF80, 16, 0, 0})
	SMember(FLinearColor)                              BarrelGlowColor_Charged_                                    OFFSET(getStruct<T>, {0xF90, 16, 0, 0})
	CMember(UParticleSystem*)                          MuzzleFlash_Uncharged_                                      OFFSET(get<T>, {0xFA0, 8, 0, 0})
	CMember(UParticleSystem*)                          MuzzleFlash_Charged_                                        OFFSET(get<T>, {0xFA8, 8, 0, 0})
	DMember(float)                                     Muzzle_Flash_Light_Intensity__Charged_                      OFFSET(get<float>, {0xFB0, 4, 0, 0})
	DMember(float)                                     Muzzle_Flash_Light_Intensity__Uncharged_                    OFFSET(get<float>, {0xFB4, 4, 0, 0})
	DMember(float)                                     TurbineSpinRate_Charged_                                    OFFSET(get<float>, {0xFB8, 4, 0, 0})
	DMember(float)                                     TurbineSpinRate_Uncharged_                                  OFFSET(get<float>, {0xFBC, 4, 0, 0})
	DMember(float)                                     AnimationRate_Reloading_                                    OFFSET(get<float>, {0xFC0, 4, 0, 0})
	DMember(float)                                     ChargePercent                                               OFFSET(get<float>, {0xFC4, 4, 0, 0})
	DMember(float)                                     Tick_Delta                                                  OFFSET(get<float>, {0xFC8, 4, 0, 0})
	DMember(bool)                                      Charging                                                    OFFSET(get<bool>, {0xFCC, 1, 0, 0})
	DMember(bool)                                      OutOfAmmo_Local                                             OFFSET(get<bool>, {0xFCD, 1, 0, 0})
	DMember(float)                                     CurrentPlayRate                                             OFFSET(get<float>, {0xFD0, 4, 0, 0})
	DMember(int32_t)                                   AmmoCost_MinCharge                                          OFFSET(get<int32_t>, {0xFD4, 4, 0, 0})
	CMember(UAudioComponent*)                          ChargeAudio                                                 OFFSET(get<T>, {0xFD8, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.VFX_SetChargedParams
	// void VFX_SetChargedParams();                                                                                             // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.VFX_SetUnchargedParams
	// void VFX_SetUnchargedParams();                                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleDownParticles__FinishedFunc
	// void ScaleDownParticles__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleDownParticles__UpdateFunc
	// void ScaleDownParticles__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Reload_PItchChange__FinishedFunc
	// void Reload_PItchChange__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Reload_PItchChange__UpdateFunc
	// void Reload_PItchChange__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleUpParticles__FinishedFunc
	// void ScaleUpParticles__FinishedFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ScaleUpParticles__UpdateFunc
	// void ScaleUpParticles__UpdateFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.springVal__FinishedFunc
	// void springVal__FinishedFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.springVal__UpdateFunc
	// void springVal__UpdateFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.SlowdownTimeline__FinishedFunc
	// void SlowdownTimeline__FinishedFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.SlowdownTimeline__UpdateFunc
	// void SlowdownTimeline__UpdateFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnStartCharge
	// void OnStartCharge();                                                                                                    // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnReachedMinCharge
	// void OnReachedMinCharge();                                                                                               // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.Muzzle Play Reload FX
	// void Muzzle Play Reload FX(TEnumAsByte<EFortReloadFXState> Selection);                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnPlayReloadFX
	// void OnPlayReloadFX(TEnumAsByte<EFortReloadFXState> ReloadStage);                                                        // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.EndOfCharge
	// void EndOfCharge();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.K2_OnUnEquip
	// void K2_OnUnEquip();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnAmmoCountChanged
	// void OnAmmoCountChanged();                                                                                               // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.CameraShakeLoop
	// void CameraShakeLoop();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnChargeDown
	// void OnChargeDown();                                                                                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.OnReachedMaxCharge
	// void OnReachedMaxCharge();                                                                                               // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/B_Rifle_AMR_Athena.B_Rifle_AMR_Athena_C.ExecuteUbergraph_B_Rifle_AMR_Athena
	// void ExecuteUbergraph_B_Rifle_AMR_Athena(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Standard_Athena.B_Shotgun_Standard_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Shotgun_Standard_Athena_C : public AB_Shotgun_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_SemiAuto_Athena.B_Shotgun_SemiAuto_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Shotgun_SemiAuto_Athena_C : public AB_Shotgun_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Shotguns/Blueprints/B_Shotgun_Heavy_Athena.B_Shotgun_Heavy_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Shotgun_Heavy_Athena_C : public AB_Shotgun_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_SixShooter_Athena.B_Pistol_SixShooter_Athena_C
/// Size: 0x0014 (0x000E8C - 0x000EA0)
class AB_Pistol_SixShooter_Athena_C : public AB_Pistol_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	CMember(UStaticMeshComponent*)                     Reload_QuickReload                                          OFFSET(get<T>, {0xE90, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Reload_Ammo                                                 OFFSET(get<T>, {0xE98, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_SixShooter_Athena.B_Pistol_SixShooter_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Vigilante_Supp_Athena.B_Pistol_Vigilante_Supp_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_Vigilante_Supp_Athena_C : public AB_Pistol_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Vigilante_Athena.B_Pistol_Vigilante_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_Vigilante_Athena_C : public AB_Pistol_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_PostApocalyptic_Athena.B_Pistol_PostApocalyptic_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_PostApocalyptic_Athena_C : public AB_Pistol_Auto_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_Handcannon_Athena.B_Pistol_Handcannon_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_Handcannon_Athena_C : public AB_Pistol_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_AutoHeavy_Athena.B_Pistol_AutoHeavy_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_AutoHeavy_Athena_C : public AB_Pistol_Auto_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Pistols/Blueprints/B_Pistol_AutoHeavy_Athena_Supp_Child.B_Pistol_AutoHeavy_Athena_Supp_Child_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Pistol_AutoHeavy_Athena_Supp_Child_C : public AB_Pistol_AutoHeavy_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C
/// Size: 0x0014 (0x000E8C - 0x000EA0)
class AB_RocketLauncher_Generic_Athena_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE90, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 RearMuzzle                                                  OFFSET(get<T>, {0xE98, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.Muzzle Flash FX
	// void Muzzle Flash FX(bool Persistent Fire);                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_RocketLauncher_Generic_Athena.B_RocketLauncher_Generic_Athena_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena
	// void ExecuteUbergraph_B_RocketLauncher_Generic_Athena(int32_t EntryPoint);                                               // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C
/// Size: 0x0140 (0x000820 - 0x000960)
class AB_Prj_Ranged_Rocket_Athena_C : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x820, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh                                               OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PP_Explode                                                  OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(UAudioComponent*)                          Rocket_AudioComponent                                       OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh                                                        OFFSET(get<T>, {0x840, 8, 0, 0})
	DMember(float)                                     PPFader_PPFade_6840155342A20C80B8C71EB25DE77BD9             OFFSET(get<float>, {0x848, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           PPFader__Direction_6840155342A20C80B8C71EB25DE77BD9         OFFSET(get<T>, {0x84C, 1, 0, 0})
	CMember(UTimelineComponent*)                       PPFader                                                     OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Ribbon_Trail_PSC                                            OFFSET(get<T>, {0x858, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Water_Explosion_PSC                                         OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(UParticleSystem*)                          Ribbon_Trail_PS                                             OFFSET(get<T>, {0x868, 8, 0, 0})
	CMember(UParticleSystem*)                          Water_Explosion_PS                                          OFFSET(get<T>, {0x870, 8, 0, 0})
	CMember(UParticleSystem*)                          Explosion_Generic_PS                                        OFFSET(get<T>, {0x878, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Explosion_Generic_PSC                                       OFFSET(get<T>, {0x880, 8, 0, 0})
	CMember(USoundBase*)                               Rocket_Projectile_Explosion_Sound                           OFFSET(get<T>, {0x888, 8, 0, 0})
	SMember(FVector)                                   StopLocation                                                OFFSET(getStruct<T>, {0x890, 12, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ObjectsToTraceAgainst                                       OFFSET(get<T>, {0x8A0, 16, 0, 0})
	CMember(UParticleSystem*)                          Explosion_Flesh_Damage_PS                                   OFFSET(get<T>, {0x8B0, 8, 0, 0})
	SMember(FRotator)                                  StopRotZ                                                    OFFSET(getStruct<T>, {0x8B8, 12, 0, 0})
	DMember(float)                                     TrailLifetime                                               OFFSET(get<float>, {0x8C4, 4, 0, 0})
	CMember(UParticleSystemComponent*)                 Explosion_Flesh_Damage_PSC                                  OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(USoundBase*)                               Rocket_Projectile_Explosion_Water_Sound                     OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(USoundBase*)                               Rocket_Projectile_InAir_Sound                               OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 RocketTrailPS                                               OFFSET(get<T>, {0x8E0, 8, 0, 0})
	DMember(float)                                     Tick_Delta                                                  OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     RocketSpinRate                                              OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     Explosion_Impact_Offset                                     OFFSET(get<float>, {0x8F0, 4, 0, 0})
	SMember(FRotator)                                  RocketSpin                                                  OFFSET(getStruct<T>, {0x8F4, 12, 0, 0})
	SMember(FVector)                                   RocketScale                                                 OFFSET(getStruct<T>, {0x900, 12, 0, 0})
	DMember(bool)                                      TimerMaxReached_                                            OFFSET(get<bool>, {0x90C, 1, 0, 0})
	CMember(UMaterialInterface*)                       Ground_Decal                                                OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Ground_Decal_MID                                            OFFSET(get<T>, {0x918, 8, 0, 0})
	DMember(float)                                     Decal_Size_Max                                              OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     Decal_Size_Min                                              OFFSET(get<float>, {0x924, 4, 0, 0})
	SMember(FVector)                                   DecalLocation                                               OFFSET(getStruct<T>, {0x928, 12, 0, 0})
	CMember(UParticleSystem*)                          Rocket_Trail_Template                                       OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0x940, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 Explosion_PS                                                OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackNear                                  OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackFar                                   OFFSET(get<T>, {0x958, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.PPFader__FinishedFunc
	// void PPFader__FinishedFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.PPFader__UpdateFunc
	// void PPFader__UpdateFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnBounce
	// void OnBounce(FHitResult& Hit);                                                                                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnStop
	// void OnStop(FHitResult& Hit);                                                                                            // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.FuseTimerMax
	// void FuseTimerMax();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.OnExploded
	// void OnExploded(TArray<AActor*>& HitActors, TArray<FHitResult>& HitResults);                                             // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_RocketLaunchers/Blueprints/B_Prj_Ranged_Rocket_Athena.B_Prj_Ranged_Rocket_Athena_C.ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena
	// void ExecuteUbergraph_B_Prj_Ranged_Rocket_Athena(int32_t EntryPoint);                                                    // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_GrenadeLaunchers/Blueprints/B_GrenadeLauncher_Generic_Athena.B_GrenadeLauncher_Generic_Athena_C
/// Size: 0x0014 (0x000E8C - 0x000EA0)
class AB_GrenadeLauncher_Generic_Athena_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	CMember(UStaticMeshComponent*)                     Reload_MagazineReload                                       OFFSET(get<T>, {0xE90, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Reload_Ammo                                                 OFFSET(get<T>, {0xE98, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_GrenadeLaunchers/Blueprints/B_GrenadeLauncher_Generic_Athena.B_GrenadeLauncher_Generic_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Surgical_Athena.B_Assault_Surgical_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Assault_Surgical_Athena_C : public AB_Assault_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Burst_Athena.B_Assault_Burst_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Assault_Burst_Athena_C : public AB_Assault_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C
/// Size: 0x0070 (0x000E8C - 0x000EFC)
class AB_Minigun_Athena_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3836;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE90, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BarrelGlowFX                                                OFFSET(get<T>, {0xE98, 8, 0, 0})
	CMember(UAudioComponent*)                          SpinUpSound                                                 OFFSET(get<T>, {0xEA0, 8, 0, 0})
	CMember(UAudioComponent*)                          SpinDownSound                                               OFFSET(get<T>, {0xEA8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_MinigunChargeUp                                           OFFSET(get<T>, {0xEB0, 8, 0, 0})
	DMember(float)                                     SpinAudioVolumeTimeline_Volume_18EF57D9444836E65E22B6A5DFE3BF4A OFFSET(get<float>, {0xEB8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           SpinAudioVolumeTimeline__Direction_18EF57D9444836E65E22B6A5DFE3BF4A OFFSET(get<T>, {0xEBC, 1, 0, 0})
	CMember(UTimelineComponent*)                       SpinAudioVolumeTimeline                                     OFFSET(get<T>, {0xEC0, 8, 0, 0})
	DMember(float)                                     BarrelGlow_MuzzleGlowOpacity_6AA244864FFB6D03BB4DAA82CADCA13E OFFSET(get<float>, {0xEC8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           BarrelGlow__Direction_6AA244864FFB6D03BB4DAA82CADCA13E      OFFSET(get<T>, {0xECC, 1, 0, 0})
	CMember(UTimelineComponent*)                       BarrelGlow                                                  OFFSET(get<T>, {0xED0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MuzzleGlowMID                                               OFFSET(get<T>, {0xED8, 8, 0, 0})
	DMember(bool)                                      bHasPlayedSpinUpSound                                       OFFSET(get<bool>, {0xEE0, 1, 0, 0})
	DMember(float)                                     SpinUpAudioVolumeMultiplier                                 OFFSET(get<float>, {0xEE4, 4, 0, 0})
	CMember(UAudioComponent*)                          CurrentSpinAudioComponent                                   OFFSET(get<T>, {0xEE8, 8, 0, 0})
	DMember(int32_t)                                   CurrentAmmo                                                 OFFSET(get<int32_t>, {0xEF0, 4, 0, 0})
	DMember(bool)                                      bPlayedSpinUpAudio                                          OFFSET(get<bool>, {0xEF4, 1, 0, 0})
	DMember(bool)                                      bPlayedSpinDownAudio                                        OFFSET(get<bool>, {0xEF5, 1, 0, 0})
	DMember(float)                                     SpinVolumeMultiplier                                        OFFSET(get<float>, {0xEF8, 4, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__FinishedFunc
	// void BarrelGlow__FinishedFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.BarrelGlow__UpdateFunc
	// void BarrelGlow__UpdateFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__FinishedFunc
	// void SpinAudioVolumeTimeline__FinishedFunc();                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.SpinAudioVolumeTimeline__UpdateFunc
	// void SpinAudioVolumeTimeline__UpdateFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.OnChargeUp
	// void OnChargeUp();                                                                                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.OnChargeDown
	// void OnChargeDown();                                                                                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod, UMaterialInstanceDynamic* DynamicMaterialInstance); // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.MakeBarrelGlow
	// void MakeBarrelGlow();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.StopBarrelGlow
	// void StopBarrelGlow();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.OnAmmoCountChanged
	// void OnAmmoCountChanged();                                                                                               // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Up Audio
	// void Start Spin Up Audio();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.Start Spin Down Audio
	// void Start Spin Down Audio();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Minigun_Athena.B_Minigun_Athena_C.ExecuteUbergraph_B_Minigun_Athena
	// void ExecuteUbergraph_B_Minigun_Athena(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto_Zoom_SR_Child_Athena.B_Assault_Auto_Zoom_SR_Child_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Assault_Auto_Zoom_SR_Child_Athena_C : public AB_Assault_Auto_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Auto_Athena.B_Assault_Auto_Athena_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Assault_Auto_Athena_C : public AB_Assault_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/Prototype/SprayGun/Blueprints/B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C
/// Size: 0x0044 (0x000E8C - 0x000ED0)
class AB_SprayGun_Generic_Athena_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE90, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 RearMuzzle                                                  OFFSET(get<T>, {0xE98, 8, 0, 0})
	SMember(FLinearColor)                              BannerSecondaryColor                                        OFFSET(getStruct<T>, {0xEA0, 16, 0, 0})
	SMember(FLinearColor)                              BannerPrimaryColor                                          OFFSET(getStruct<T>, {0xEB0, 16, 0, 0})
	CMember(UTexture2D*)                               BannerIconLarge                                             OFFSET(get<T>, {0xEC0, 8, 0, 0})
	CMember(UAthenaSprayItemDefinition*)               MySpray                                                     OFFSET(get<T>, {0xEC8, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/Prototype/SprayGun/Blueprints/B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/SprayGun/Blueprints/B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnLoaded_F452B84F41E132B2E1CB668CFA098154
	// void OnLoaded_F452B84F41E132B2E1CB668CFA098154(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/SprayGun/Blueprints/B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.Muzzle Flash FX
	// void Muzzle Flash FX(bool Persistent Fire);                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/SprayGun/Blueprints/B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UParticleSystemComponent* SpawnedPSC); // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/Prototype/SprayGun/Blueprints/B_SprayGun_Generic_Athena.B_SprayGun_Generic_Athena_C.ExecuteUbergraph_B_SprayGun_Generic_Athena
	// void ExecuteUbergraph_B_SprayGun_Generic_Athena(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/Prototype/FlareGun/Blueprints/B_FlareGun_Generic_Athena.B_FlareGun_Generic_Athena_C
/// Size: 0x0014 (0x000E8C - 0x000EA0)
class AB_FlareGun_Generic_Athena_C : public AB_Ranged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3744;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE90, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 RearMuzzle                                                  OFFSET(get<T>, {0xE98, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_FlareGun_Generic_Athena.B_FlareGun_Generic_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_FlareGun_Generic_Athena.B_FlareGun_Generic_Athena_C.Muzzle Flash FX
	// void Muzzle Flash FX(bool Persistent Fire);                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_FlareGun_Generic_Athena.B_FlareGun_Generic_Athena_C.ExecuteUbergraph_B_FlareGun_Generic_Athena
	// void ExecuteUbergraph_B_FlareGun_Generic_Athena(int32_t EntryPoint);                                                     // [0x154a140] None                 
};

/// Class /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C
/// Size: 0x016C (0x000820 - 0x00098C)
class AB_Prj_Ranged_FlareGun_C : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2444;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x820, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PP_Explode                                                  OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(UAudioComponent*)                          Rocket_AudioComponent                                       OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh                                                        OFFSET(get<T>, {0x838, 8, 0, 0})
	DMember(float)                                     PPFader_PPFade_83D6A8E24D28C000703E6EB526FEAD3C             OFFSET(get<float>, {0x840, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           PPFader__Direction_83D6A8E24D28C000703E6EB526FEAD3C         OFFSET(get<T>, {0x844, 1, 0, 0})
	CMember(UTimelineComponent*)                       PPFader                                                     OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Ribbon_Trail_PSC                                            OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Water_Explosion_PSC                                         OFFSET(get<T>, {0x858, 8, 0, 0})
	CMember(UParticleSystem*)                          Ribbon_Trail_PS                                             OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(UParticleSystem*)                          Water_Explosion_PS                                          OFFSET(get<T>, {0x868, 8, 0, 0})
	CMember(UParticleSystem*)                          Explosion_Generic_PS                                        OFFSET(get<T>, {0x870, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Explosion_Generic_PSC                                       OFFSET(get<T>, {0x878, 8, 0, 0})
	CMember(USoundBase*)                               Rocket_Projectile_Explosion_Sound                           OFFSET(get<T>, {0x880, 8, 0, 0})
	SMember(FVector)                                   StopLocation                                                OFFSET(getStruct<T>, {0x888, 12, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ObjectsToTraceAgainst                                       OFFSET(get<T>, {0x898, 16, 0, 0})
	CMember(UParticleSystem*)                          Explosion_Flesh_Damage_PS                                   OFFSET(get<T>, {0x8A8, 8, 0, 0})
	SMember(FRotator)                                  StopRotZ                                                    OFFSET(getStruct<T>, {0x8B0, 12, 0, 0})
	DMember(float)                                     TrailLifetime                                               OFFSET(get<float>, {0x8BC, 4, 0, 0})
	CMember(UParticleSystemComponent*)                 Explosion_Flesh_Damage_PSC                                  OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(USoundBase*)                               Rocket_Projectile_Explosion_Water_Sound                     OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(USoundBase*)                               Rocket_Projectile_InAir_Sound                               OFFSET(get<T>, {0x8D0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 RocketTrailPS                                               OFFSET(get<T>, {0x8D8, 8, 0, 0})
	DMember(float)                                     Tick_Delta                                                  OFFSET(get<float>, {0x8E0, 4, 0, 0})
	DMember(float)                                     RocketSpinRate                                              OFFSET(get<float>, {0x8E4, 4, 0, 0})
	DMember(float)                                     Explosion_Impact_Offset                                     OFFSET(get<float>, {0x8E8, 4, 0, 0})
	SMember(FRotator)                                  RocketSpin                                                  OFFSET(getStruct<T>, {0x8EC, 12, 0, 0})
	SMember(FVector)                                   RocketScale                                                 OFFSET(getStruct<T>, {0x8F8, 12, 0, 0})
	DMember(bool)                                      TimerMaxReached_                                            OFFSET(get<bool>, {0x904, 1, 0, 0})
	CMember(UMaterialInterface*)                       Ground_Decal                                                OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Ground_Decal_MID                                            OFFSET(get<T>, {0x910, 8, 0, 0})
	DMember(float)                                     Decal_Size_Max                                              OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     Decal_Size_Min                                              OFFSET(get<float>, {0x91C, 4, 0, 0})
	SMember(FVector)                                   DecalLocation                                               OFFSET(getStruct<T>, {0x920, 12, 0, 0})
	CMember(UParticleSystem*)                          Rocket_Trail_Template                                       OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0x938, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 Explosion_PS                                                OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackNear                                  OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackFar                                   OFFSET(get<T>, {0x950, 8, 0, 0})
	SMember(FLinearColor)                              BannerPrimaryColor                                          OFFSET(getStruct<T>, {0x958, 16, 0, 0})
	SMember(FLinearColor)                              BannerSecondaryColor                                        OFFSET(getStruct<T>, {0x968, 16, 0, 0})
	CMember(UTexture2D*)                               BannerIconLarge                                             OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UMaterialInterface*)                       BannerSmokeMaterial                                         OFFSET(get<T>, {0x980, 8, 0, 0})
	DMember(float)                                     FlareFuseInSecs                                             OFFSET(get<float>, {0x988, 4, 0, 0})


	/// Functions
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.PPFader__FinishedFunc
	// void PPFader__FinishedFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.PPFader__UpdateFunc
	// void PPFader__UpdateFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnLoaded_615134E044495378BCF0229743AFAF07
	// void OnLoaded_615134E044495378BCF0229743AFAF07(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnBounce
	// void OnBounce(FHitResult& Hit);                                                                                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnStop
	// void OnStop(FHitResult& Hit);                                                                                            // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.FuseTimerMax
	// void FuseTimerMax();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.OnExploded
	// void OnExploded(TArray<AActor*>& HitActors, TArray<FHitResult>& HitResults);                                             // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/Prototype/FlareGun/Blueprints/B_Prj_Ranged_FlareGun.B_Prj_Ranged_FlareGun_C.ExecuteUbergraph_B_Prj_Ranged_FlareGun
	// void ExecuteUbergraph_B_Prj_Ranged_FlareGun(int32_t EntryPoint);                                                         // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/Tracers/SubClasses/Tracer_Blue_Long.Tracer_Blue_Long_C
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class ATracer_Blue_Long_C : public ATracerGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/Melee_CameraShake.Melee_CameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UMelee_CameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Weapons/Skeleton_Templates/BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C
/// Size: 0x00F8 (0x000360 - 0x000458)
class UBP_Auto_Shotgun_Drum_Side_Action_C : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_7EA7D37645F443897F10498323E528F7         OFFSET(getStruct<T>, {0x368, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_64A40914450FCFA8B6BB00AA8DAB6F04         OFFSET(getStruct<T>, {0x3B0, 112, 0, 0})
	SMember(FAnimNode_RefPose)                         AnimGraphNode_LocalRefPose_9AFCD47E4FA0ED23378DEABB5751407C OFFSET(getStruct<T>, {0x420, 56, 0, 0})


	/// Functions
	// Function /Game/Weapons/Skeleton_Templates/BP_Auto_Shotgun_Drum_Side_Action.BP_Auto_Shotgun_Drum_Side_Action_C.ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action
	// void ExecuteUbergraph_BP_Auto_Shotgun_Drum_Side_Action(int32_t EntryPoint);                                              // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_Bulletswarm.B_Assault_Bulletswarm_C
/// Size: 0x0000 (0x000E8C - 0x000E8C)
class AB_Assault_Bulletswarm_C : public AB_Assault_Auto_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3724;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C
/// Size: 0x00E0 (0x000AC8 - 0x000BA8)
class AB_Melee_Generic_C : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	DMember(bool)                                      Has_Idle_Effect                                             OFFSET(get<bool>, {0xAD0, 1, 0, 0})
	CMember(UParticleSystem*)                          Idle_Effect                                                 OFFSET(get<T>, {0xAD8, 8, 0, 0})
	SMember(FVector)                                   Effects_Color_Level                                         OFFSET(getStruct<T>, {0xAE0, 12, 0, 0})
	DMember(bool)                                      Has_Swing_Effect                                            OFFSET(get<bool>, {0xAEC, 1, 0, 0})
	CMember(UParticleSystem*)                          Swing_Effect                                                OFFSET(get<T>, {0xAF0, 8, 0, 0})
	DMember(bool)                                      Use_Effect_Color_Override                                   OFFSET(get<bool>, {0xAF8, 1, 0, 0})
	SMember(FLinearColor)                              Main_Effects_Color_Lv                                       OFFSET(getStruct<T>, {0xAFC, 16, 0, 0})
	DMember(bool)                                      Lv2_wpn                                                     OFFSET(get<bool>, {0xB0C, 1, 0, 0})
	DMember(bool)                                      Lv3_Wpn                                                     OFFSET(get<bool>, {0xB0D, 1, 0, 0})
	SMember(FLinearColor)                              Main_Effects_Color2_Lv                                      OFFSET(getStruct<T>, {0xB10, 16, 0, 0})
	CMember(UParticleSystemComponent*)                 AnimTrail_PSC                                               OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 MeleeHeavy_PSC                                              OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UParticleSystem*)                          MeleeHeavy_ParticleSystem                                   OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffect                               OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(UParticleSystem*)                          WeaponDurabilityDestroyEffectIcon                           OFFSET(get<T>, {0xB40, 8, 0, 0})
	DMember(bool)                                      UseDestroyEffect                                            OFFSET(get<bool>, {0xB48, 1, 0, 0})
	SMember(FName)                                     IdleFXAttachSocket                                          OFFSET(getStruct<T>, {0xB50, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleFXComponent                                             OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(UParticleSystem*)                          AnimTrailsParticles                                         OFFSET(get<T>, {0xB60, 8, 0, 0})
	SMember(FName)                                     FirstSocketName                                             OFFSET(getStruct<T>, {0xB68, 8, 0, 0})
	SMember(FName)                                     Second_Socket_Name                                          OFFSET(getStruct<T>, {0xB70, 8, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0xB78, 4, 0, 0})
	DMember(bool)                                      UseAnimTrails                                               OFFSET(get<bool>, {0xB7C, 1, 0, 0})
	SMember(FName)                                     SwingFXSocket                                               OFFSET(getStruct<T>, {0xB80, 8, 0, 0})
	CMember(TArray<UAnimMontage*>)                     PokeAnimations                                              OFFSET(get<T>, {0xB88, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WeaponMID                                                   OFFSET(get<T>, {0xB98, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Alteration_Ambient_PS                                       OFFSET(get<T>, {0xBA0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color
	// void Melee_Effect_Color(FVector& Melee_Color_Set);                                                                       // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.SetActiveAlterationIdleParticles
	// void SetActiveAlterationIdleParticles(bool Active, bool Reset);                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity
	// void SetWpnRarity();                                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48
	// void OnLoaded_CB594210420542B302428F8181D85E48(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight
	// void MeleeSwingRight();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft
	// void MeleeSwingLeft();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.FootStepLeft
	// void FootStepLeft();                                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.FootStepRight
	// void FootStepRight();                                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX
	// void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire);                                                      // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts
	// void PlayRClickImpacts();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UParticleSystemComponent* SpawnedPSC); // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory
	// void OnEquippedWeaponDestory();                                                                                          // [0x154a140] BlueprintCosmetic|Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached
	// void OnWeaponAttached();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations
	// void OnInitCosmeticAlterations(FFortCosmeticModification CosmeticMod, UMaterialInstanceDynamic* DynamicMaterialInstance); // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnWeaponVisibilityChanged
	// void OnWeaponVisibilityChanged(bool bVisible);                                                                           // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.OnWeaponDetached
	// void OnWeaponDetached();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic
	// void ExecuteUbergraph_B_Melee_Generic(int32_t EntryPoint);                                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Edged/B_Melee_Edged_Generic.B_Melee_Edged_Generic_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Edged_Generic_C : public AB_Melee_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Generic.B_Melee_Impact_Generic_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Generic_C : public AB_Melee_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Valor.B_Melee_Impact_Pickaxe_Athena_Valor_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Valor_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_TeslaCoil_Athena.B_Melee_Impact_Pickaxe_TeslaCoil_Athena_C
/// Size: 0x0010 (0x000BA8 - 0x000BB8)
class AB_Melee_Impact_Pickaxe_TeslaCoil_Athena_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3000;

public:
	CMember(UParticleSystemComponent*)                 FX_Coil                                                     OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 FX_Head                                                     OFFSET(get<T>, {0xBB0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_TeslaCoil_Athena.B_Melee_Impact_Pickaxe_TeslaCoil_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_TacticalUrban.B_Melee_Impact_Pickaxe_Athena_TacticalUrban_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_TacticalUrban_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_TacticalBlack.B_Melee_Impact_Pickaxe_Athena_TacticalBlack_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_TacticalBlack_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Stealth.B_Melee_Impact_Pickaxe_Athena_Stealth_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Stealth_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_PotofGold.B_Melee_Impact_Pickaxe_PotofGold_C
/// Size: 0x0008 (0x000BA8 - 0x000BB0)
class AB_Melee_Impact_Pickaxe_PotofGold_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2992;

public:
	CMember(UParticleSystemComponent*)                 P_PotofGold_Pickaxe                                         OFFSET(get<T>, {0xBA8, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_PotofGold.B_Melee_Impact_Pickaxe_PotofGold_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Pizza.B_Melee_Impact_Pickaxe_Athena_Pizza_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Pizza_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_PajamaParty.B_Melee_Impact_Pickaxe_Athena_PajamaParty_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_PajamaParty_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_OrbitingPlanets.B_Melee_Impact_Pickaxe_Athena_OrbitingPlanets_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_OrbitingPlanets_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_NeonGlow.B_Melee_Impact_Pickaxe_Athena_NeonGlow_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_NeonGlow_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Metal.B_Melee_Impact_Pickaxe_Athena_Metal_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Metal_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Graffiti.B_Melee_Impact_Pickaxe_Athena_Graffiti_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Graffiti_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Circuitbreaker.B_Melee_Impact_Pickaxe_Circuitbreaker_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Circuitbreaker_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Carrot.B_Melee_Impact_Pickaxe_Athena_Carrot_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Carrot_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_CarbideBlue.B_Melee_Impact_Pickaxe_Athena_CarbideBlue_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_CarbideBlue_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_CarbideBlack.B_Melee_Impact_Pickaxe_Athena_CarbideBlack_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_CarbideBlack_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Candy.B_Melee_Impact_Pickaxe_Athena_Candy_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Candy_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Edged/B_Melee_Edged_Scythe.B_Melee_Edged_Scythe_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Edged_Scythe_C : public AB_Melee_Edged_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C
/// Size: 0x0024 (0x000E8C - 0x000EB0)
class AB_Assault_LMG_SAW_Athena_C : public AB_Assault_Bulletswarm_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xE90, 8, 0, 0})
	SMember(FVector)                                   LaserScaleUntargeted                                        OFFSET(getStruct<T>, {0xE98, 12, 0, 0})
	SMember(FVector)                                   LaserScaleTargeted                                          OFFSET(getStruct<T>, {0xEA4, 12, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.OnSetTargeting
	// void OnSetTargeting(bool bNewIsTargeting);                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Rifles/Blueprints/Assault/B_Assault_LMG_SAW_Athena.B_Assault_LMG_SAW_Athena_C.ExecuteUbergraph_B_Assault_LMG_SAW_Athena
	// void ExecuteUbergraph_B_Assault_LMG_SAW_Athena(int32_t EntryPoint);                                                      // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena.B_Melee_Impact_Pickaxe_Athena_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_C : public AB_Melee_Impact_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C
/// Size: 0x0020 (0x000BA8 - 0x000BC8)
class AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MeshMID                                                     OFFSET(get<T>, {0xBB0, 8, 0, 0})
	DMember(float)                                     Kills                                                       OFFSET(get<float>, {0xBB8, 4, 0, 0})
	CMember(UParticleSystem*)                          JingleTimeFX                                                OFFSET(get<T>, {0xBC0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.TurnOnLights
	// void TurnOnLights(float Kills);                                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.UpdateBasedOnKills
	// void UpdateBasedOnKills();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.K2_OnProgressiveCosmeticWatchedStatChanged
	// void K2_OnProgressiveCosmeticWatchedStatChanged(FName StatName, int32_t NewValue);                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_15_CandyCane_Parent.B_Melee_Impact_Pickaxe_15_CandyCane_Parent_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent
	// void ExecuteUbergraph_B_Melee_Impact_Pickaxe_15_CandyCane_Parent(int32_t EntryPoint);                                    // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Shovel.B_Melee_Impact_Pickaxe_Athena_Shovel_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Shovel_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Tactical.B_Melee_Impact_Pickaxe_Athena_Tactical_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Tactical_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Squeak.B_Melee_Impact_Pickaxe_Athena_Squeak_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Squeak_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Spikey.B_Melee_Impact_Pickaxe_Athena_Spikey_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Spikey_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Space.B_Melee_Impact_Pickaxe_Athena_Space_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Space_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Smiley.B_Melee_Impact_Pickaxe_Athena_Smiley_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Smiley_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_SkiBoot.B_Melee_Impact_Pickaxe_Athena_SkiBoot_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_SkiBoot_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_BatSickle.B_Melee_Impact_Pickaxe_Athena_BatSickle_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_BatSickle_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Jaws.B_Melee_Impact_Pickaxe_Athena_Jaws_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Jaws_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Scavenger.B_Melee_Impact_Pickaxe_Athena_Scavenger_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Scavenger_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_RockerPunk.B_Melee_Impact_Pickaxe_Athena_RockerPunk_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_RockerPunk_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Prismatic.B_Melee_Impact_Pickaxe_Athena_Prismatic_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Prismatic_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Plunger.B_Melee_Impact_Pickaxe_Athena_Plunger_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Plunger_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Megalo.B_Melee_Impact_Pickaxe_Athena_Megalo_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Megalo_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Medieval.B_Melee_Impact_Pickaxe_Athena_Medieval_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Medieval_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_LockJaw.B_Melee_Impact_Pickaxe_Athena_LockJaw_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_LockJaw_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C
/// Size: 0x0035 (0x000BA8 - 0x000BDD)
class AB_Melee_Impact_Pickaxe_Athena_Keg_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3037;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	DMember(float)                                     Splat_Decal_Size__Min_                                      OFFSET(get<float>, {0xBB0, 4, 0, 0})
	DMember(float)                                     Splat_Decal_Size__Max_                                      OFFSET(get<float>, {0xBB4, 4, 0, 0})
	DMember(float)                                     Decal_Height                                                OFFSET(get<float>, {0xBB8, 4, 0, 0})
	DMember(float)                                     Decal_Lifespan                                              OFFSET(get<float>, {0xBBC, 4, 0, 0})
	DMember(float)                                     Decal_Fadeout_Hold                                          OFFSET(get<float>, {0xBC0, 4, 0, 0})
	SMember(FVector)                                   DecalPosition                                               OFFSET(getStruct<T>, {0xBC4, 12, 0, 0})
	SMember(FVector)                                   Decal_Size                                                  OFFSET(getStruct<T>, {0xBD0, 12, 0, 0})
	DMember(bool)                                      SpawnDecal_                                                 OFFSET(get<bool>, {0xBDC, 1, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.SpawnDecalCheck
	// void SpawnDecalCheck(FVector Hit_Location);                                                                              // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.OnPlayImpactFX
	// void OnPlayImpactFX(FHitResult& HitResult, TEnumAsByte<EPhysicalSurface> ImpactPhysicalSurface, UParticleSystemComponent* SpawnedPSC); // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Keg.B_Melee_Impact_Pickaxe_Athena_Keg_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg
	// void ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_Keg(int32_t EntryPoint);                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_IceAxe.B_Melee_Impact_Pickaxe_Athena_IceAxe_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_IceAxe_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Giftwrap.B_Melee_Impact_Pickaxe_Athena_Giftwrap_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Giftwrap_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_15_CandyCane.B_Melee_Impact_Pickaxe_15_CandyCane_C
/// Size: 0x0000 (0x000BC8 - 0x000BC8)
class AB_Melee_Impact_Pickaxe_15_CandyCane_C : public AB_Melee_Impact_Pickaxe_15_CandyCane_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3016;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Heart.B_Melee_Impact_Pickaxe_Athena_Heart_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Heart_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Flamingo_Athena.B_Melee_Impact_Pickaxe_Flamingo_Athena_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Flamingo_Athena_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Dragon.B_Melee_Impact_Pickaxe_Athena_Dragon_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Dragon_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_District.B_Melee_Impact_Pickaxe_Athena_District_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_District_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Disco.B_Melee_Impact_Pickaxe_Athena_Disco_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Disco_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_DeathV.B_Melee_Impact_Pickaxe_Athena_DeathV_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_DeathV_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_CuChulainn.B_Melee_Impact_Pickaxe_Athena_CuChulainn_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_CuChulainn_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C
/// Size: 0x0034 (0x000BA8 - 0x000BDC)
class AB_Melee_Impact_Pickaxe_26_Brite_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3036;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     eye_l                                                       OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     eye_r                                                       OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Mid                                                         OFFSET(get<T>, {0xBC0, 8, 0, 0})
	DMember(float)                                     KillCount                                                   OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     GlowKillThresholdMin                                        OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     GlowKillThresholdMax                                        OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     HornScaleKillThresholdMin                                   OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(float)                                     HornScaleKillThresholdMax                                   OFFSET(get<float>, {0xBD8, 4, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.K2_OnProgressiveCosmeticWatchedStatChanged
	// void K2_OnProgressiveCosmeticWatchedStatChanged(FName StatName, int32_t NewValue);                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.UpdateBasedOnKills
	// void UpdateBasedOnKills();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_26_Brite.B_Melee_Impact_Pickaxe_26_Brite_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite
	// void ExecuteUbergraph_B_Melee_Impact_Pickaxe_26_Brite(int32_t EntryPoint);                                               // [0x154a140] None                 
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Bolt.B_Melee_Impact_Pickaxe_Athena_Bolt_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Bolt_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Assassin.B_Melee_Impact_Pickaxe_Athena_Assassin_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Assassin_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_ArtDeco.B_Melee_Impact_Pickaxe_Athena_ArtDeco_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_ArtDeco_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Melee_Impact_Pickaxe_Athena_Anchor.B_Melee_Impact_Pickaxe_Athena_Anchor_C
/// Size: 0x0000 (0x000BA8 - 0x000BA8)
class AB_Melee_Impact_Pickaxe_Athena_Anchor_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
};

/// Class /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C
/// Size: 0x0030 (0x000BA8 - 0x000BD8)
class AB_Dev_Test_Pickaxe_C : public AB_Melee_Impact_Pickaxe_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3032;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	CMember(URotatingMovementComponent*)               RotatingMovement                                            OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Mid                                                         OFFSET(get<T>, {0xBB8, 8, 0, 0})
	DMember(float)                                     Kill                                                        OFFSET(get<float>, {0xBC0, 4, 0, 0})
	DMember(float)                                     MaxKills                                                    OFFSET(get<float>, {0xBC4, 4, 0, 0})
	DMember(float)                                     KillGlowThreshold                                           OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     KillHornThreshold                                           OFFSET(get<float>, {0xBCC, 4, 0, 0})
	CMember(UMaterialInstance*)                        NewVar                                                      OFFSET(get<T>, {0xBD0, 8, 0, 0})


	/// Functions
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.K2_OnProgressiveCosmeticWatchedStatChanged
	// void K2_OnProgressiveCosmeticWatchedStatChanged(FName StatName, int32_t NewValue);                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Weapons/FORT_Melee/Blueprints/Impact/B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.ExecuteUbergraph_B_Dev_Test_Pickaxe
	// void ExecuteUbergraph_B_Dev_Test_Pickaxe(int32_t EntryPoint);                                                            // [0x154a140] None                 
};

/// Enum /Game/Weapons/Blueprints/En_ShellTypes_01.En_ShellTypes_01
/// Size: 0x06
enum En_ShellTypes_01 : uint8_t
{
	En_ShellTypes_01__NewEnumerator00                                                = 0,
	En_ShellTypes_01__NewEnumerator11                                                = 1,
	En_ShellTypes_01__NewEnumerator22                                                = 2,
	En_ShellTypes_01__NewEnumerator33                                                = 3,
	En_ShellTypes_01__NewEnumerator44                                                = 4,
	En_ShellTypes_01__En_ShellTypes_MAX5                                             = 5
};

