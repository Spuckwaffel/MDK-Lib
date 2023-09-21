
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Effects
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: ModularGameplay
/// dependency: Niagara
/// dependency: SpecialSurfaceCoverageRuntime
/// dependency: VictoryCrownsRuntime

/// Class /RocketRamGameplay/Items/RocketRam/CameraEffects/CameraShake_ActiveThrust_RocketRam.CameraShake_ActiveThrust_RocketRam_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_ActiveThrust_RocketRam_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RocketRamGameplay/Items/RocketRam/GameplayCues/GCNL_RocketRam_ActiveThrusting.GCNL_RocketRam_ActiveThrusting_C
/// Size: 0x0038 (0x000990 - 0x0009C8)
class AGCNL_RocketRam_ActiveThrusting_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UFortSoundIndicatorComponent*)             FortSoundIndicator_InAir                                    ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAudioComponent*)                          FireAudioComponent                                          ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(USoundBase*)                               FireSoundCue                                                ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(USoundBase*)                               FireInAirSoundCue                                           ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(UAudioComponent*)                          FireInAirAudioComponent                                     ___ OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(AActor*)                                   CurrentTarget                                               ___ OFFSET(get<T>, {0x9C0, 8, 0, 0})
};

/// Class /RocketRamGameplay/Items/RocketRam/GameplayCues/GCNL_RocketRam_FreeFalling.GCNL_RocketRam_FreeFalling_C
/// Size: 0x0028 (0x000990 - 0x0009B8)
class AGCNL_RocketRam_FreeFalling_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2488;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UFortSoundIndicatorComponent*)             FortSoundIndicator_InAir                                    ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(USoundBase*)                               WindDownSoundCue                                            ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UAudioComponent*)                          WindDownAudioComponent                                      ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(AActor*)                                   CurrentTarget                                               ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
};

/// Class /RocketRamGameplay/Items/RocketRam/FX/BP_RocketRam_CameraLens_Booster.BP_RocketRam_CameraLens_Booster_C
/// Size: 0x0710 (0x000330 - 0x000A40)
class ABP_RocketRam_CameraLens_Booster_C : public ABP_NS_ExampleCameraEffect_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2624;

public:
	CMember(UMaterialInstanceDynamic*)                 Dynamic_instance_setting                                    ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	SMember(FPostProcessSettings)                      Post_Process_Settings                                       ___ OFFSET(get<T>, {0x340, 1760, 0, 0})
	SMember(FVector4)                                  Saturation                                                  ___ OFFSET(get<T>, {0xA20, 32, 0, 0})
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression_Season26.B_CosmeticStatObject_HabaneroProgression_Season26_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UB_CosmeticStatObject_HabaneroProgression_Season26_C : public UFortCosmeticStatObject_HabaneroProgressionSeasonal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /RankedPermanentQuests/Items/B_CosmeticStatObject_HabaneroProgression.B_CosmeticStatObject_HabaneroProgression_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UB_CosmeticStatObject_HabaneroProgression_C : public UFortCosmeticStatObject_HabaneroProgression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /SpecialSurfaceCoverage/Items/SnowSurfaceCoverageMap_GSC.SnowSurfaceCoverageMap_GSC_C
/// Size: 0x0000 (0x000110 - 0x000110)
class USnowSurfaceCoverageMap_GSC_C : public UFortGameStateComponent_SurfaceCoverageMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /VictoryCrownsGameplay/Items/B_CosmeticStatObject_TotalVictoryCrowns.B_CosmeticStatObject_TotalVictoryCrowns_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UB_CosmeticStatObject_TotalVictoryCrowns_C : public UFortCosmeticStatObject_TotalVictoryCrowns
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /VictoryCrownsGameplay/Items/B_CosmeticStatObject_HasCrown.B_CosmeticStatObject_HasCrown_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UB_CosmeticStatObject_HasCrown_C : public UFortCosmeticStatObject_HasCrown
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownGameStateComponent.VictoryCrownGameStateComponent_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UVictoryCrownGameStateComponent_C : public UFortGameStateComponent_VictoryCrowns
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /VictoryCrownsGameplay/Items/B_CosmeticStatObject_TotalRoyalRoyales.B_CosmeticStatObject_TotalRoyalRoyales_C
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UB_CosmeticStatObject_TotalRoyalRoyales_C : public UFortCosmeticStatObject_TotalRoyalRoyales
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownComponent.VictoryCrownComponent_C
/// Size: 0x0008 (0x000268 - 0x000270)
class UVictoryCrownComponent_C : public UFortControllerComponent_VictoryCrowns
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x268, 8, 0, 0})
};

/// Class /VictoryCrownsGameplay/Items/VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C
/// Size: 0x001A (0x0000C0 - 0x0000DA)
class UVictoryCrownFrontEndPawnComponent_C : public UFortPawnComponent_VictoryCrownsFrontEnd
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 218;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FGameplayTag)                              CrownFXCueTag                                               ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     AthenaPawn                                                  ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      AccountHasCrown                                             ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      AppliedCrownFX                                              ___ OFFSET(get<bool>, {0xD9, 1, 0, 0})
};

