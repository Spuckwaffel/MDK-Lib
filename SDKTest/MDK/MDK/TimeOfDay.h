
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/TimeOfDay/TODM/MASTER_TODM.MASTER_TODM_C
/// Size: 0x02F0 (0x000FF0 - 0x0012E0)
class AMASTER_TODM_C : public AFortTimeOfDayManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xFF0, 8, 0, 0})
	CMember(UPostProcessComponent*)                    HeavySSAO_Postprocess                                       ___ OFFSET(get<T>, {0xFF8, 8, 0, 0})
	CMember(UPostProcessComponent*)                    EditorPostProcessMaterial_HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime_ ___ OFFSET(get<T>, {0x1000, 8, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF ___ OFFSET(get<float>, {0x1008, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF ___ OFFSET(get<float>, {0x100C, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF ___ OFFSET(get<float>, {0x1010, 4, 0, 0})
	DMember(float)                                     New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF ___ OFFSET(get<float>, {0x1014, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF ___ OFFSET(get<T>, {0x1018, 1, 0, 0})
	CMember(UTimelineComponent*)                       New_Storm_Timeline                                          ___ OFFSET(get<T>, {0x1020, 8, 0, 0})
	DMember(float)                                     FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285 ___ OFFSET(get<float>, {0x1028, 4, 0, 0})
	DMember(float)                                     FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285 ___ OFFSET(get<float>, {0x102C, 4, 0, 0})
	DMember(float)                                     FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285 ___ OFFSET(get<float>, {0x1030, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285  ___ OFFSET(get<T>, {0x1034, 1, 0, 0})
	CMember(UTimelineComponent*)                       FlashLightning                                              ___ OFFSET(get<T>, {0x1038, 8, 0, 0})
	DMember(double)                                    WindSpeed                                                   ___ OFFSET(get<double>, {0x1040, 8, 0, 0})
	DMember(double)                                    RandomWeatherWaitTime                                       ___ OFFSET(get<double>, {0x1048, 8, 0, 0})
	DMember(double)                                    CurrentAmountOfRandomWeatherTimeLeft                        ___ OFFSET(get<double>, {0x1050, 8, 0, 0})
	DMember(double)                                    NewWeatherLerpAmount                                        ___ OFFSET(get<double>, {0x1058, 8, 0, 0})
	DMember(double)                                    WindStrength                                                ___ OFFSET(get<double>, {0x1060, 8, 0, 0})
	DMember(double)                                    FutureWindStrength                                          ___ OFFSET(get<double>, {0x1068, 8, 0, 0})
	DMember(double)                                    FutureWindSpeed                                             ___ OFFSET(get<double>, {0x1070, 8, 0, 0})
	DMember(bool)                                      bPickNewWindConditions                                      ___ OFFSET(get<bool>, {0x1078, 1, 0, 0})
	DMember(double)                                    LightningStrength                                           ___ OFFSET(get<double>, {0x1080, 8, 0, 0})
	DMember(double)                                    ThreatCloudStormAmount                                      ___ OFFSET(get<double>, {0x1088, 8, 0, 0})
	DMember(bool)                                      UseRainWithStorms                                           ___ OFFSET(get<bool>, {0x1090, 1, 0, 0})
	DMember(bool)                                      Play_a_Particle_Effect_Near_the_players_Feet                ___ OFFSET(get<bool>, {0x1091, 1, 0, 0})
	DMember(bool)                                      Internal_Rain_WindEffects_Should_be_Active                  ___ OFFSET(get<bool>, {0x1092, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 Storm_Foot_Particle_Outdoor                                 ___ OFFSET(get<T>, {0x1098, 8, 0, 0})
	CMember(UParticleSystem*)                          Storm_Foot_Particle_While_on_Terrain                        ___ OFFSET(get<T>, {0x10A0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Storm_Foot_Particle_Indoor                                  ___ OFFSET(get<T>, {0x10A8, 8, 0, 0})
	CMember(UParticleSystem*)                          Storm_Foot_Particle_While_NOT_on_Terrain                    ___ OFFSET(get<T>, {0x10B0, 8, 0, 0})
	DMember(double)                                    Storm_Wind_Strength                                         ___ OFFSET(get<double>, {0x10B8, 8, 0, 0})
	DMember(bool)                                      Generate_Foliage_Wind_Gusts                                 ___ OFFSET(get<bool>, {0x10C0, 1, 0, 0})
	SMember(FTimerHandle)                              LightningStrikeTimerHandle                                  ___ OFFSET(get<T>, {0x10C8, 8, 0, 0})
	SMember(FLinearColor)                              PreviousDirectionalLightColor                               ___ OFFSET(get<T>, {0x10D0, 16, 0, 0})
	SMember(FLinearColor)                              Lightning_Flash_Color                                       ___ OFFSET(get<T>, {0x10E0, 16, 0, 0})
	DMember(double)                                    Lightning_Flash_Timeline_Min                                ___ OFFSET(get<double>, {0x10F0, 8, 0, 0})
	DMember(double)                                    Lightning_Flash_Timeline_Max                                ___ OFFSET(get<double>, {0x10F8, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningColor                                       ___ OFFSET(get<T>, {0x1100, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogMorningLitColor                                    ___ OFFSET(get<T>, {0x1110, 16, 0, 0})
	DMember(double)                                    SkyboxFogMorningDistance                                    ___ OFFSET(get<double>, {0x1120, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningDiffuseAmount                               ___ OFFSET(get<double>, {0x1128, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningEmissiveAmount                              ___ OFFSET(get<double>, {0x1130, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningLitLength                                   ___ OFFSET(get<double>, {0x1138, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningLitRotation                                 ___ OFFSET(get<double>, {0x1140, 8, 0, 0})
	DMember(double)                                    SkyboxFogMorningLitOffset                                   ___ OFFSET(get<double>, {0x1148, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayColor                                           ___ OFFSET(get<T>, {0x1150, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogDayLitColor                                        ___ OFFSET(get<T>, {0x1160, 16, 0, 0})
	DMember(double)                                    SkyboxFogDayDistance                                        ___ OFFSET(get<double>, {0x1170, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayDiffuseAmount                                   ___ OFFSET(get<double>, {0x1178, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayEmissiveAmount                                  ___ OFFSET(get<double>, {0x1180, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayLitLength                                       ___ OFFSET(get<double>, {0x1188, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayLitRotation                                     ___ OFFSET(get<double>, {0x1190, 8, 0, 0})
	DMember(double)                                    SkyboxFogDayLitOffset                                       ___ OFFSET(get<double>, {0x1198, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningColor                                       ___ OFFSET(get<T>, {0x11A0, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogEveningLitColor                                    ___ OFFSET(get<T>, {0x11B0, 16, 0, 0})
	DMember(double)                                    SkyboxFogEveningDistance                                    ___ OFFSET(get<double>, {0x11C0, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningDiffuseAmount                               ___ OFFSET(get<double>, {0x11C8, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningEmissiveAmount                              ___ OFFSET(get<double>, {0x11D0, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningLitLength                                   ___ OFFSET(get<double>, {0x11D8, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningLitRotation                                 ___ OFFSET(get<double>, {0x11E0, 8, 0, 0})
	DMember(double)                                    SkyboxFogEveningLitOffset                                   ___ OFFSET(get<double>, {0x11E8, 8, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightColor                                         ___ OFFSET(get<T>, {0x11F0, 16, 0, 0})
	SMember(FLinearColor)                              SkyboxFogNightLitColor                                      ___ OFFSET(get<T>, {0x1200, 16, 0, 0})
	DMember(double)                                    SkyboxFogNightDistance                                      ___ OFFSET(get<double>, {0x1210, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightDiffuseAmount                                 ___ OFFSET(get<double>, {0x1218, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightEmissiveAmount                                ___ OFFSET(get<double>, {0x1220, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightLitLength                                     ___ OFFSET(get<double>, {0x1228, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightLitRotation                                   ___ OFFSET(get<double>, {0x1230, 8, 0, 0})
	DMember(double)                                    SkyboxFogNightLitOffset                                     ___ OFFSET(get<double>, {0x1238, 8, 0, 0})
	DMember(double)                                    World_Border_Cloud_Base_Color_Brightness                    ___ OFFSET(get<double>, {0x1240, 8, 0, 0})
	SMember(FLinearColor)                              World_Border_Cloud_Sub_Surface_Color_and_Opacity            ___ OFFSET(get<T>, {0x1248, 16, 0, 0})
	DMember(bool)                                      EnableCometDynamicPlacement                                 ___ OFFSET(get<bool>, {0x1258, 1, 0, 0})
	SMember(FVector4)                                  Night                                                       ___ OFFSET(get<T>, {0x1260, 32, 0, 0})
	SMember(FVector4)                                  Evening                                                     ___ OFFSET(get<T>, {0x1280, 32, 0, 0})
	SMember(FVector4)                                  Day                                                         ___ OFFSET(get<T>, {0x12A0, 32, 0, 0})
	SMember(FVector4)                                  Morning                                                     ___ OFFSET(get<T>, {0x12C0, 32, 0, 0})
};

/// Class /Game/TimeOfDay/TODM/TODM_Disabled.TODM_Disabled_C
/// Size: 0x0008 (0x0012E0 - 0x0012E8)
class ATODM_Disabled_C : public AMASTER_TODM_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x12E0, 8, 0, 0})
};

