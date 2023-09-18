/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Sounds.

/// Struct /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/AudioParameterQueryData.AudioParameterQueryData
/// Size: 0x0068 (0x000000 - 0x000068)
class FAudioParameterQueryData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         TagQuery_12_74B441D54446A49EB7F00AAC728B68F0                ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FName)                                     ParameterName_2_0E82F2EF4DD09C9EB9E25D9AD7DB520D            ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(USoundControlBus*)                         ControlBus_5_0B33E9404596DE8D58698EA40F70C171               ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FVector2D)                                 ControlBusFadeTime_9_E9701E2E4995E4A3C8798FA35536B86E       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Game/Sounds/Fort_Audio_Blueprints/Utilities/FunctionLibraries/AudioGameplay_FunctionLibrary.AudioGameplay_FunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioGameplay_FunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UNPC_VoiceComponent_C : public UFortAIComponent_Voice
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UFortTaggedSoundBank*)                     DeprecatedBPSoundBank                                       ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(USceneComponent*)                          AttachComponent                                             ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(double)                                    TriggerTimeThreshold                                        ___ OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    LastTriggerTime                                             ___ OFFSET(get<double>, {0xC0, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio_Component                                             ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(USoundEffectSourcePresetChain*)            SourceChainToApply                                          ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Foley/BP_AnimPreviewFoleyComponent.BP_AnimPreviewFoleyComponent_C
/// Size: 0x0000 (0x000138 - 0x000138)
class UBP_AnimPreviewFoleyComponent_C : public USoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Game/Sounds/DefaultAppActivationSoundMixManager.DefaultAppActivationSoundMixManager_C
/// Size: 0x0000 (0x000058 - 0x000058)
class UDefaultAppActivationSoundMixManager_C : public UFortAppActivationSoundMixManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureSoundLibraryContext.B_CreatureSoundLibraryContext_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UB_CreatureSoundLibraryContext_C : public USoundLibrarySimpleContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Sounds/Fort_GamePlay_Sounds/Explosives/Athena_Grenade_Base_WhipTracker.Athena_Grenade_Base_WhipTracker_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UAthena_Grenade_Base_WhipTracker_C : public UBulletWhipTrackerComponent_Default_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
/// Size: 0x0079 (0x0000A0 - 0x000119)
class UBP_SurfaceTypeSoundComponent_C : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 281;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 ___ OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(TMap<TEnumAsByte, USoundBase*>)            SoundMap                                                    ___ OFFSET(get<T>, {0xB0, 80, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	DMember(bool)                                      IsSurfaceTypeSet                                            ___ OFFSET(get<bool>, {0x118, 1, 0, 0})
};

/// Class /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
/// Size: 0x0032 (0x000290 - 0x0002C2)
class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 706;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          SceneComponent                                              ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(double)                                    FadeOutTime                                                 ___ OFFSET(get<double>, {0x2A0, 8, 0, 0})
	CMember(USoundBase*)                               CurrentMusic                                                ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      Is_Music_Activate_Override                                  ___ OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	CMember(UAthenaMusicPackItemDefinition*)           MusicPackToPlayLater                                        ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bCanRetriggerNextMusicPack                                  ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bRegisteredForAnalysis                                      ___ OFFSET(get<bool>, {0x2C1, 1, 0, 0})
};

/// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
/// Size: 0x0080 (0x0002A8 - 0x000328)
class UWB_AudioAnalysis_FloatGraph_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCanvasPanel*)                             CanvasPanel                                                 ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UTextBlock*)                               Label_                                                      ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UProgressBar*)                             ProgressBar                                                 ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UTextBlock*)                               Value                                                       ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FVector2D)                                 Position                                                    ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FVector2D)                                 Size                                                        ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      calculated                                                  ___ OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	SMember(FName)                                     Parameter                                                   ___ OFFSET(get<T>, {0x2F4, 4, 0, 0})
	CMember(TArray<FVector2D>)                         Points                                                      ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	DMember(int32_t)                                   NumPoints                                                   ___ OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x30C, 16, 0, 0})
	DMember(int32_t)                                   VectorIndex                                                 ___ OFFSET(get<int32_t>, {0x31C, 4, 0, 0})
	CMember(UMaterialParameterCollection*)             Collection                                                  ___ OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
/// Size: 0x0020 (0x0002A8 - 0x0002C8)
class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UVerticalBox*)                             GraphBox                                                    ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(TArray<UWB_AudioAnalysis_FloatGraph_C*>)   Widgets                                                     ___ OFFSET(get<T>, {0x2B8, 16, 0, 0})
};

/// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
/// Size: 0x003C (0x0002A8 - 0x0002E4)
class UB_MusicEventDebugWidget_C : public UMusicEventSubsystemDebugWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 740;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UBackgroundBlur*)                          Background                                                  ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonListView*)                          EventInstances                                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FString)                                   AssetFilter                                                 ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<UMusicEventInstance*>)              Instances                                                   ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(int32_t)                                   FontSize                                                    ___ OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
};

/// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UB_MusicEventInstanceWidget_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UUEFN_TextBlock_C*)                        Text                                                        ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UMusicEventInstance*)                      EventInstance                                               ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(double)                                    Distance                                                    ___ OFFSET(get<double>, {0x2C0, 8, 0, 0})
	CMember(UB_MusicEventDebugWidget_C*)               DebugWidget                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureAnimSoundLibraryContext.B_CreatureAnimSoundLibraryContext_C
/// Size: 0x0000 (0x000098 - 0x000098)
class UB_CreatureAnimSoundLibraryContext_C : public USoundLibraryAnimContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UB_WeaponSoundLibraryContext_C : public USoundLibrarySimpleContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C
/// Size: 0x0004 (0x000188 - 0x00018C)
class UB_WeaponSoundLibraryComponent_C : public UFortWeaponSoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 396;

public:
	SMember(FGameplayTag)                              FireEvent                                                   ___ OFFSET(get<T>, {0x188, 4, 0, 0})
};

/// Class /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C
/// Size: 0x003B (0x0000F0 - 0x00012B)
class UBP_AudioParameterComponent_Pawn_C : public UFortAudioParameterComponent_Pawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 299;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(AActor*)                                   LocalViewTarget                                             ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TArray<FAudioParameterQueryData>)          QueryAudioParams                                            ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bDebugEnabled                                               ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      IsInWater                                                   ___ OFFSET(get<bool>, {0x111, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          LocalPlayerPawnTarget                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	DMember(double)                                    WaterDepthValue                                             ___ OFFSET(get<double>, {0x120, 8, 0, 0})
	CMember(TEnumAsByte<PlayerWaterDepthEnum>)         PlayerWaterDepth                                            ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(TEnumAsByte<PlayerWaterDepthEnum>)         CurrentWaterDepth                                           ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(bool)                                      WaterDepthChanged                                           ___ OFFSET(get<bool>, {0x12A, 1, 0, 0})
};

/// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryContext.BP_HitNotifySoundLibraryContext_C
/// Size: 0x0000 (0x000108 - 0x000108)
class UBP_HitNotifySoundLibraryContext_C : public UFortHitNotifySoundLibraryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent.BP_HitNotifySoundLibraryComponent_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UBP_HitNotifySoundLibraryComponent_C : public UFortHitNotifySoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent_FortPawn.BP_HitNotifySoundLibraryComponent_FortPawn_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UBP_HitNotifySoundLibraryComponent_FortPawn_C : public UBP_HitNotifySoundLibraryComponent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C
/// Size: 0x0020 (0x000198 - 0x0001B8)
class UBP_SkydiveSoundLibraryComponent_C : public UFortSkydiveSoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	SMember(FGameplayTag)                              SkydiveEventTag                                             ___ OFFSET(get<T>, {0x1A0, 4, 0, 0})
	CMember(TArray<UAudioComponent*>)                  Components                                                  ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
};

/// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent_FortAthenaVehicle.BP_HitNotifySoundLibraryComponent_FortAthenaVehicle_C
/// Size: 0x0000 (0x000188 - 0x000188)
class UBP_HitNotifySoundLibraryComponent_FortAthenaVehicle_C : public UBP_HitNotifySoundLibraryComponent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
};

/// Class /Game/Sounds/Fort_Player/Interaction/SLC_InteractionPlayerDefault.SLC_InteractionPlayerDefault_C
/// Size: 0x0000 (0x000138 - 0x000138)
class USLC_InteractionPlayerDefault_C : public USoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Enum /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/PlayerWaterDepthEnum.PlayerWaterDepthEnum
/// Size: 0x06
enum PlayerWaterDepthEnum : uint8_t
{
	PlayerWaterDepthEnum__NewEnumerator50                                            = 0,
	PlayerWaterDepthEnum__NewEnumerator41                                            = 1,
	PlayerWaterDepthEnum__NewEnumerator32                                            = 2,
	PlayerWaterDepthEnum__NewEnumerator23                                            = 3,
	PlayerWaterDepthEnum__NewEnumerator14                                            = 4,
	PlayerWaterDepthEnum__PlayerWaterDepthEnum_MAX5                                  = 5
};

