
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C
/// Size: 0x01CD (0x000BB0 - 0x000D7D)
class AMASTER_TODM_C : public AFortTimeOfDayManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3453;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xBB0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    HeavySSAO_Postprocess                                       OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(UPostProcessComponent*)                    EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_ OFFSET(get<T>, {0xBC0, 8, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF OFFSET(get<float>, {0xBD4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF OFFSET(get<T>, {0xBD8, 1, 0, 0})
	CMember(UTimelineComponent*)                       New_Storm_Timeline                                          OFFSET(get<T>, {0xBE0, 8, 0, 0})
	DMember(float)                                     FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285 OFFSET(get<float>, {0xBE8, 4, 0, 0})
	DMember(float)                                     FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285 OFFSET(get<float>, {0xBEC, 4, 0, 0})
	DMember(float)                                     FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285 OFFSET(get<float>, {0xBF0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285  OFFSET(get<T>, {0xBF4, 1, 0, 0})
	CMember(UTimelineComponent*)                       FlashLightning                                              OFFSET(get<T>, {0xBF8, 8, 0, 0})
	DMember(float)                                     WindSpeed                                                   OFFSET(get<float>, {0xC00, 4, 0, 0})
	DMember(float)                                     RandomWeatherWaitTime                                       OFFSET(get<float>, {0xC04, 4, 0, 0})
	DMember(float)                                     CurrentAmountOfRandomWeatherTimeLeft                        OFFSET(get<float>, {0xC08, 4, 0, 0})
	DMember(float)                                     NewWeatherLerpAmount                                        OFFSET(get<float>, {0xC0C, 4, 0, 0})
	DMember(float)                                     WindStrength                                                OFFSET(get<float>, {0xC10, 4, 0, 0})
	DMember(float)                                     FutureWindStrength                                          OFFSET(get<float>, {0xC14, 4, 0, 0})
	DMember(float)                                     FutureWindSpeed                                             OFFSET(get<float>, {0xC18, 4, 0, 0})
	DMember(bool)                                      bPickNewWindConditions                                      OFFSET(get<bool>, {0xC1C, 1, 0, 0})
	DMember(float)                                     LightningStrength                                           OFFSET(get<float>, {0xC20, 4, 0, 0})
	DMember(float)                                     ThreatCloudStormAmount                                      OFFSET(get<float>, {0xC24, 4, 0, 0})
	DMember(bool)                                      UseRainWithStorms                                           OFFSET(get<bool>, {0xC28, 1, 0, 0})
	DMember(bool)                                      Play_a_Particle_Effect_Near_the_players_Feet                OFFSET(get<bool>, {0xC29, 1, 0, 0})
	DMember(bool)                                      Internal_Rain_WindEffects_Should_be_Active                  OFFSET(get<bool>, {0xC2A, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 Storm_Foot_Particle_Outdoor                                 OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(UParticleSystem*)                          Storm_Foot_Particle_While_on_Terrain                        OFFSET(get<T>, {0xC38, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Storm_Foot_Particle_Indoor                                  OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(UParticleSystem*)                          Storm_Foot_Particle_While_NOT_on_Terrain                    OFFSET(get<T>, {0xC48, 8, 0, 0})
	DMember(float)                                     Storm_Wind_Strength                                         OFFSET(get<float>, {0xC50, 4, 0, 0})
	DMember(bool)                                      Generate_Foliage_Wind_Gusts                                 OFFSET(get<bool>, {0xC54, 1, 0, 0})
	SMember(FTimerHandle)                              LightningStrikeTimerHandle                                  OFFSET(getStruct<T>, {0xC58, 8, 0, 0})
	SMember(FLinearColor)                              PreviousDirectionalLightColor                               OFFSET(getStruct<T>, {0xC60, 16, 0, 0})
	SMember(FLinearColor)                              Lightning_Flash_Color                                       OFFSET(getStruct<T>, {0xC70, 16, 0, 0})
	DMember(float)                                     Lightning_Flash_Timeline_Min                                OFFSET(get<float>, {0xC80, 4, 0, 0})
	DMember(float)                                     Lightning_Flash_Timeline_Max                                OFFSET(get<float>, {0xC84, 4, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningColor                                       OFFSET(getStruct<T>, {0xC88, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningLitColor                                    OFFSET(getStruct<T>, {0xC98, 16, 0, 0})
	DMember(float)                                     SkyboxFogMorningDistance                                    OFFSET(get<float>, {0xCA8, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningDiffuseAmount                               OFFSET(get<float>, {0xCAC, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningEmissiveAmount                              OFFSET(get<float>, {0xCB0, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningLitLength                                   OFFSET(get<float>, {0xCB4, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningLitRotation                                 OFFSET(get<float>, {0xCB8, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningLitOffset                                   OFFSET(get<float>, {0xCBC, 4, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayColor                                           OFFSET(getStruct<T>, {0xCC0, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayLitColor                                        OFFSET(getStruct<T>, {0xCD0, 16, 0, 0})
	DMember(float)                                     SkyboxFogDayDistance                                        OFFSET(get<float>, {0xCE0, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayDiffuseAmount                                   OFFSET(get<float>, {0xCE4, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayEmissiveAmount                                  OFFSET(get<float>, {0xCE8, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayLitLength                                       OFFSET(get<float>, {0xCEC, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayLitRotation                                     OFFSET(get<float>, {0xCF0, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayLitOffset                                       OFFSET(get<float>, {0xCF4, 4, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningColor                                       OFFSET(getStruct<T>, {0xCF8, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningLitColor                                    OFFSET(getStruct<T>, {0xD08, 16, 0, 0})
	DMember(float)                                     SkyboxFogEveningDistance                                    OFFSET(get<float>, {0xD18, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningDiffuseAmount                               OFFSET(get<float>, {0xD1C, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningEmissiveAmount                              OFFSET(get<float>, {0xD20, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningLitLength                                   OFFSET(get<float>, {0xD24, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningLitRotation                                 OFFSET(get<float>, {0xD28, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningLitOffset                                   OFFSET(get<float>, {0xD2C, 4, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightColor                                         OFFSET(getStruct<T>, {0xD30, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightLitColor                                      OFFSET(getStruct<T>, {0xD40, 16, 0, 0})
	DMember(float)                                     SkyboxFogNightDistance                                      OFFSET(get<float>, {0xD50, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightDiffuseAmount                                 OFFSET(get<float>, {0xD54, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightEmissiveAmount                                OFFSET(get<float>, {0xD58, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightLitLength                                     OFFSET(get<float>, {0xD5C, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightLitRotation                                   OFFSET(get<float>, {0xD60, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightLitOffset                                     OFFSET(get<float>, {0xD64, 4, 0, 0})
	DMember(float)                                     World_Border_Cloud_Base_Color_Brightness                    OFFSET(get<float>, {0xD68, 4, 0, 0})
	SMember(FLinearColor)                              World_Border_Cloud_Sub_Surface_Color_and_Opacity            OFFSET(getStruct<T>, {0xD6C, 16, 0, 0})
	DMember(bool)                                      EnableCometDynamicPlacement                                 OFFSET(get<bool>, {0xD7C, 1, 0, 0})


	/// Functions
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EmptyTransform
	// void EmptyTransform(FTransform& Transform);                                                                              // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.SetHeavySSAO
	// void SetHeavySSAO();                                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__FinishedFunc
	// void FlashLightning__FinishedFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.FlashLightning__UpdateFunc
	// void FlashLightning__UpdateFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FinishedFunc
	// void New Storm Timeline__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__UpdateFunc
	// void New Storm Timeline__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FireOffRain__EventFunc
	// void New Storm Timeline__FireOffRain__EventFunc();                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.StartStorm
	// void StartStorm();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormStart
	// void OnStormStart();                                                                                                     // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.OnStormEnd
	// void OnStormEnd();                                                                                                       // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.LightningStrike
	// void LightningStrike();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.EnableHDRRendering
	// void EnableHDRRendering();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.UpdateSSAO
	// void UpdateSSAO();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.DisableLightAndFog
	// void DisableLightAndFog(bool Enable);                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C.ExecuteUbergraph_MASTER_TODM
	// void ExecuteUbergraph_MASTER_TODM(int32_t EntryPoint);                                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C
/// Size: 0x017F (0x000D7D - 0x000EFC)
class ATODM_Disabled_C : public AMASTER_TODM_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3836;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xD80, 8, 0, 0})
	DMember(float)                                     WindSpeed                                                   OFFSET(get<float>, {0xD88, 4, 0, 0})
	DMember(float)                                     RandomWeatherWaitTime                                       OFFSET(get<float>, {0xD8C, 4, 0, 0})
	DMember(float)                                     CurrentAmountOfRandomWeatherTimeLeft                        OFFSET(get<float>, {0xD90, 4, 0, 0})
	DMember(float)                                     NewWeatherLerpAmount                                        OFFSET(get<float>, {0xD94, 4, 0, 0})
	DMember(float)                                     WindStrength                                                OFFSET(get<float>, {0xD98, 4, 0, 0})
	DMember(float)                                     FutureWindStrength                                          OFFSET(get<float>, {0xD9C, 4, 0, 0})
	DMember(float)                                     FutureWindSpeed                                             OFFSET(get<float>, {0xDA0, 4, 0, 0})
	DMember(bool)                                      bPickNewWindConditions                                      OFFSET(get<bool>, {0xDA4, 1, 0, 0})
	DMember(float)                                     LightningStrength                                           OFFSET(get<float>, {0xDA8, 4, 0, 0})
	DMember(float)                                     ThreatCloudStormAmount                                      OFFSET(get<float>, {0xDAC, 4, 0, 0})
	DMember(bool)                                      UseRainWithStorms                                           OFFSET(get<bool>, {0xDB0, 1, 0, 0})
	DMember(bool)                                      Play_a_Particle_Effect_Near_the_players_Feet                OFFSET(get<bool>, {0xDB1, 1, 0, 0})
	DMember(bool)                                      Internal_Rain_WindEffects_Should_be_Active                  OFFSET(get<bool>, {0xDB2, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 Storm_Foot_Particle_Outdoor                                 OFFSET(get<T>, {0xDB8, 8, 0, 0})
	CMember(UParticleSystem*)                          Storm_Foot_Particle_While_on_Terrain                        OFFSET(get<T>, {0xDC0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Storm_Foot_Particle_Indoor                                  OFFSET(get<T>, {0xDC8, 8, 0, 0})
	CMember(UParticleSystem*)                          Storm_Foot_Particle_While_NOT_on_Terrain                    OFFSET(get<T>, {0xDD0, 8, 0, 0})
	DMember(float)                                     Storm_Wind_Strength                                         OFFSET(get<float>, {0xDD8, 4, 0, 0})
	DMember(bool)                                      Generate_Foliage_Wind_Gusts                                 OFFSET(get<bool>, {0xDDC, 1, 0, 0})
	SMember(FTimerHandle)                              LightningStrikeTimerHandle                                  OFFSET(getStruct<T>, {0xDE0, 8, 0, 0})
	SMember(FLinearColor)                              PreviousDirectionalLightColor                               OFFSET(getStruct<T>, {0xDE8, 16, 0, 0})
	SMember(FLinearColor)                              Lightning_Flash_Color                                       OFFSET(getStruct<T>, {0xDF8, 16, 0, 0})
	DMember(float)                                     Lightning_Flash_Timeline_Min                                OFFSET(get<float>, {0xE08, 4, 0, 0})
	DMember(float)                                     Lightning_Flash_Timeline_Max                                OFFSET(get<float>, {0xE0C, 4, 0, 0})
	CMember(UParticleSystemComponent*)                 ShootingStarParticleSystem                                  OFFSET(get<T>, {0xE10, 8, 0, 0})
	DMember(bool)                                      Spawn_Shooting_Stars                                        OFFSET(get<bool>, {0xE18, 1, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningColor                                       OFFSET(getStruct<T>, {0xE1C, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningLitColor                                    OFFSET(getStruct<T>, {0xE2C, 16, 0, 0})
	DMember(float)                                     SkyboxFogMorningDistance                                    OFFSET(get<float>, {0xE3C, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningDiffuseAmount                               OFFSET(get<float>, {0xE40, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningEmissiveAmount                              OFFSET(get<float>, {0xE44, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningLitLength                                   OFFSET(get<float>, {0xE48, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningLitRotation                                 OFFSET(get<float>, {0xE4C, 4, 0, 0})
	DMember(float)                                     SkyboxFogMorningLitOffset                                   OFFSET(get<float>, {0xE50, 4, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayColor                                           OFFSET(getStruct<T>, {0xE54, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayLitColor                                        OFFSET(getStruct<T>, {0xE64, 16, 0, 0})
	DMember(float)                                     SkyboxFogDayDistance                                        OFFSET(get<float>, {0xE74, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayDiffuseAmount                                   OFFSET(get<float>, {0xE78, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayEmissiveAmount                                  OFFSET(get<float>, {0xE7C, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayLitLength                                       OFFSET(get<float>, {0xE80, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayLitRotation                                     OFFSET(get<float>, {0xE84, 4, 0, 0})
	DMember(float)                                     SkyboxFogDayLitOffset                                       OFFSET(get<float>, {0xE88, 4, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningColor                                       OFFSET(getStruct<T>, {0xE8C, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningLitColor                                    OFFSET(getStruct<T>, {0xE9C, 16, 0, 0})
	DMember(float)                                     SkyboxFogEveningDistance                                    OFFSET(get<float>, {0xEAC, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningDiffuseAmount                               OFFSET(get<float>, {0xEB0, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningEmissiveAmount                              OFFSET(get<float>, {0xEB4, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningLitLength                                   OFFSET(get<float>, {0xEB8, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningLitRotation                                 OFFSET(get<float>, {0xEBC, 4, 0, 0})
	DMember(float)                                     SkyboxFogEveningLitOffset                                   OFFSET(get<float>, {0xEC0, 4, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightColor                                         OFFSET(getStruct<T>, {0xEC4, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightLitColor                                      OFFSET(getStruct<T>, {0xED4, 16, 0, 0})
	DMember(float)                                     SkyboxFogNightDistance                                      OFFSET(get<float>, {0xEE4, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightDiffuseAmount                                 OFFSET(get<float>, {0xEE8, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightEmissiveAmount                                OFFSET(get<float>, {0xEEC, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightLitLength                                     OFFSET(get<float>, {0xEF0, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightLitRotation                                   OFFSET(get<float>, {0xEF4, 4, 0, 0})
	DMember(float)                                     SkyboxFogNightLitOffset                                     OFFSET(get<float>, {0xEF8, 4, 0, 0})


	/// Functions
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.DisableLightAndFog
	// void DisableLightAndFog(bool Enable);                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C.ExecuteUbergraph_TODM_Disabled
	// void ExecuteUbergraph_TODM_Disabled(int32_t EntryPoint);                                                                 // [0x154a140] None                 
};

