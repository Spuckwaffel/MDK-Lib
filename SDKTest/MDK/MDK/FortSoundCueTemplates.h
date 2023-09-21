
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: SoundCueTemplates

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UFortSoundCueTemplateBase : public USoundCueTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.EmoteBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteBase : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.EmoteFoley
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteFoley : public UEmoteBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.EmoteMusic
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteMusic : public UEmoteBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.EmoteMusic3P
/// Size: 0x0000 (0x000560 - 0x000560)
class UEmoteMusic3P : public UEmoteBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PlayerFoleyBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UPlayerFoleyBase : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PlayerFoley
/// Size: 0x0000 (0x000560 - 0x000560)
class UPlayerFoley : public UPlayerFoleyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.FootstepFoley
/// Size: 0x0000 (0x000560 - 0x000560)
class UFootstepFoley : public UPlayerFoley
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaults
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortSoundCueTemplateDefaults : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(USoundClass*)                              SoundClass                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(USoundAttenuation*)                        Attenuation                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(USoundConcurrency*)                        Concurrency                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(float)                                     VolumeMultiplier                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PitchMultiplier                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	CMember(TArray<FFortSubmixPair>)                   SubmixSends                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FFortBusPair>)                      PreEffectBusSends                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FFortBusPair>)                      PostEffectBusSends                                          OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(USoundWave*)                               LicensedTrackAlternative                                    OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSubmix                                              OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortSoundCueTemplateDefaultSettings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UClass*, UFortSoundCueTemplateDefaults*>) TemplateDefaults                                        OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/FortSoundCueTemplates.FortSoundCueTemplateDefaultSettings.GetSettingsForTemplateType
	// UFortSoundCueTemplateDefaults* GetSettingsForTemplateType(UClass* TemplateType);                                         // [0xa246090] Final|Native|Public  
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortSoundCueTemplateSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UFortSoundCueTemplateDefaultSettings*>) DefaultTemplateSettings                         OFFSET(get<T>, {0x30, 32, 0, 0})


	/// Functions
	// Function /Script/FortSoundCueTemplates.FortSoundCueTemplateSettings.GetDefaultSettingsForTemplateType
	// UFortSoundCueTemplateDefaults* GetDefaultSettingsForTemplateType(UClass* TemplateType);                                  // [0xa245fec] Final|Native|Public|Const 
};

/// Class /Script/FortSoundCueTemplates.FortSoundCueTemplateSimple
/// Size: 0x0000 (0x000560 - 0x000560)
class UFortSoundCueTemplateSimple : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.GliderThrustSCTDefaults
/// Size: 0x0160 (0x000090 - 0x0001F0)
class UGliderThrustSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FGliderThrustData)                         Forward                                                     OFFSET(get<T>, {0x90, 88, 0, 0})
	SMember(FGliderThrustData)                         Sideways                                                    OFFSET(get<T>, {0xE8, 88, 0, 0})
	SMember(FGliderThrustData)                         Backwards                                                   OFFSET(get<T>, {0x140, 88, 0, 0})
	SMember(FGliderThrustData)                         AnyDirection                                                OFFSET(get<T>, {0x198, 88, 0, 0})
};

/// Class /Script/FortSoundCueTemplates.GliderThrustLoop
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderThrustLoop : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.GliderThrustStart
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderThrustStart : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.GliderOpen
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderOpen : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.GliderClose
/// Size: 0x0000 (0x000560 - 0x000560)
class UGliderClose : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.MusicPack
/// Size: 0x0000 (0x000560 - 0x000560)
class UMusicPack : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PhysicsStateSCTDefaults
/// Size: 0x0248 (0x000090 - 0x0002D8)
class UPhysicsStateSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FName)                                     SpeedParameterName                                          OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FPhysicsStateData)                         Rolling                                                     OFFSET(get<T>, {0x98, 144, 0, 0})
	SMember(FPhysicsStateData)                         Sliding                                                     OFFSET(get<T>, {0x128, 144, 0, 0})
	SMember(FPhysicsStateData)                         Flying                                                      OFFSET(get<T>, {0x1B8, 144, 0, 0})
	SMember(FPhysicsStateData)                         Floating                                                    OFFSET(get<T>, {0x248, 144, 0, 0})
};

/// Class /Script/FortSoundCueTemplates.PhysicsStateLoop
/// Size: 0x0000 (0x000560 - 0x000560)
class UPhysicsStateLoop : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PhysicsImpactSCTDefaults
/// Size: 0x0110 (0x000090 - 0x0001A0)
class UPhysicsImpactSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     ImpactTypeParameterName                                     OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     StrengthParameterName                                       OFFSET(get<T>, {0x94, 4, 0, 0})
	SMember(FPhysicsImpactData)                        Light                                                       OFFSET(get<T>, {0x98, 88, 0, 0})
	SMember(FPhysicsImpactData)                        Medium                                                      OFFSET(get<T>, {0xF0, 88, 0, 0})
	SMember(FPhysicsImpactData)                        Heavy                                                       OFFSET(get<T>, {0x148, 88, 0, 0})
};

/// Class /Script/FortSoundCueTemplates.PhysicsImpact
/// Size: 0x0000 (0x000560 - 0x000560)
class UPhysicsImpact : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeSCTDefaults
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UPickaxeSCTDefaults : public UFortSoundCueTemplateDefaults
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(USoundAttenuation*)                        CloseAttenuation                                            OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(USoundAttenuation*)                        DistantAttenuation                                          OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<USoundWave*>)                       DistantVariations                                           OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/FortSoundCueTemplates.PickaxeBase
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeBase : public UFortSoundCueTemplateBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeSwing
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeSwing : public UPickaxeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeReady
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeReady : public UPickaxeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PickaxeImpactEnemy
/// Size: 0x0000 (0x000560 - 0x000560)
class UPickaxeImpactEnemy : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.PlayerFoleyDefaults
/// Size: 0x0048 (0x000090 - 0x0000D8)
class UPlayerFoleyDefaults : public UFortSoundCueTemplateDefaults
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(USoundClass*)                              LocalPlayerSoundClass                                       OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(USoundClass*)                              TeammateSoundClass                                          OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(USoundClass*)                              HostileSoundClass                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(USoundAttenuation*)                        LocalPlayerAttenuation                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(USoundAttenuation*)                        AboveAttenuation                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(USoundAttenuation*)                        BelowAttenuation                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(USoundAttenuation*)                        ParallelAttenuation                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(TArray<FDistanceDatum>)                    ElevationCrossfadeDistances                                 OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/FortSoundCueTemplates.WeaponLowAmmo
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponLowAmmo : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.WeaponOutOfAmmo
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponOutOfAmmo : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.WeaponReloadStart
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponReloadStart : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.WeaponReloadInsert
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponReloadInsert : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.WeaponReloadEnd
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponReloadEnd : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.WeaponTargetingStart
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponTargetingStart : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/FortSoundCueTemplates.WeaponTargetingEnd
/// Size: 0x0000 (0x000560 - 0x000560)
class UWeaponTargetingEnd : public UFortSoundCueTemplateSimple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Struct /Script/FortSoundCueTemplates.FortContinuousModulatorConfig
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortContinuousModulatorConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector2D)                                 VolumeRange                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 PitchRange                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TEnumAsByte<ModulationParamMode>)          VolumeMode                                                  OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TEnumAsByte<ModulationParamMode>)          PitchMode                                                   OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/FortSoundCueTemplates.FortSubmixPair
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortSubmixPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USoundSubmixBase*)                         Submix                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     SendAmount                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortSoundCueTemplates.FortBusPair
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortBusPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(USoundSourceBus*)                          SourceBus                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UAudioBus*)                                AudioBus                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     SendAmount                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/FortSoundCueTemplates.GliderThrustData
/// Size: 0x0058 (0x000000 - 0x000058)
class FGliderThrustData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 PitchOutput                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 VolumeOutput                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(USoundWave*)                               sound                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FFortContinuousModulatorConfig)            Settings                                                    OFFSET(get<T>, {0x30, 40, 0, 0})
};

/// Struct /Script/FortSoundCueTemplates.PhysicsStateData
/// Size: 0x0090 (0x000000 - 0x000090)
class FPhysicsStateData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector2D)                                 VolumeOutput                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 PitchOutput                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FFortContinuousModulatorConfig)            Settings                                                    OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FDistanceDatum)                            CrossfadeInputSlow                                          OFFSET(get<T>, {0x50, 20, 0, 0})
	CMember(USoundWave*)                               SlowLoop                                                    OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FDistanceDatum)                            CrossfadeInputFast                                          OFFSET(get<T>, {0x70, 20, 0, 0})
	CMember(USoundWave*)                               FastLoop                                                    OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/FortSoundCueTemplates.PhysicsImpactData
/// Size: 0x0058 (0x000000 - 0x000058)
class FPhysicsImpactData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector2D)                                 VolumeOutput                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector2D)                                 PitchOutput                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FFortContinuousModulatorConfig)            Settings                                                    OFFSET(get<T>, {0x20, 40, 0, 0})
	CMember(TArray<USoundWave*>)                       Variations                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
};

