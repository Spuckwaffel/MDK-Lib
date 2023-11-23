
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: Athena
/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: SoundLibrary
/// dependency: UMG

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
	CMember(UFortTaggedSoundBank*)                     DeprecatedBPSoundBank                                       OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(USceneComponent*)                          AttachComponent                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(double)                                    TriggerTimeThreshold                                        OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    LastTriggerTime                                             OFFSET(get<double>, {0xC0, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio_Component                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(USoundEffectSourcePresetChain*)            SourceChainToApply                                          OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.PlaySoundCue
	// void PlaySoundCue(USoundCue* SoundToPlay, UAudioComponent* AudioComponent, bool& Success);                               // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.SetSourceEffectChainToApply
	// void SetSourceEffectChainToApply(USoundEffectSourcePresetChain* SourceEffectChain);                                      // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.Internal Get Voice Sound Bank
	// void Internal Get Voice Sound Bank(UFortTaggedSoundBank*& Sound Bank);                                                   // [0x101681c] Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.Deprecated Set Sound Bank
	// void Deprecated Set Sound Bank(UFortTaggedSoundBank* SoundBank);                                                         // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/VoiceComponent/NPC_VoiceComponent.NPC_VoiceComponent_C.PlayVoiceLine
	// void PlayVoiceLine(FGameplayTag& Gameplay Tag, UAudioComponent* AudioComponent, bool& Success);                          // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Foley/BP_AnimPreviewFoleyComponent.BP_AnimPreviewFoleyComponent_C
/// Size: 0x0000 (0x000158 - 0x000158)
class UBP_AnimPreviewFoleyComponent_C : public USoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

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

/// Class /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C
/// Size: 0x0079 (0x0000A0 - 0x000119)
class UBP_SurfaceTypeSoundComponent_C : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 281;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0xA8, 1, 0, 0})
	CMember(TMap<TEnumAsByte, USoundBase*>)            SoundMap                                                    OFFSET(get<T>, {0xB0, 80, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	DMember(bool)                                      IsSurfaceTypeSet                                            OFFSET(get<bool>, {0x118, 1, 0, 0})


	/// Functions
	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ActuallyPlaySound
	// void ActuallyPlaySound();                                                                                                // [0x101681c] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.SetSurfaceType
	// void SetSurfaceType(TEnumAsByte<EPhysicalSurface> SurfaceType, AActor* Actor);                                           // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.PlaySound
	// void PlaySound(FVector Location);                                                                                        // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.Test Delay
	// void Test Delay();                                                                                                       // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/SurfaceTypeSound/BP_SurfaceTypeSoundComponent.BP_SurfaceTypeSoundComponent_C.ExecuteUbergraph_BP_SurfaceTypeSoundComponent
	// void ExecuteUbergraph_BP_SurfaceTypeSoundComponent(int32_t EntryPoint);                                                  // [0x101681c] Final                
};

/// Class /Game/Sounds/Fort_GamePlay_Sounds/Explosives/Athena_Grenade_Base_WhipTracker.Athena_Grenade_Base_WhipTracker_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UAthena_Grenade_Base_WhipTracker_C : public UBulletWhipTrackerComponent_Default_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
/// Size: 0x0032 (0x000290 - 0x0002C2)
class AFort_Entry_Music_Controller_BP_C : public AFortEntryMusicController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 706;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          SceneComponent                                              OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(double)                                    FadeOutTime                                                 OFFSET(get<double>, {0x2A0, 8, 0, 0})
	CMember(USoundBase*)                               CurrentMusic                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      Is_Music_Activate_Override                                  OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	CMember(UAthenaMusicPackItemDefinition*)           MusicPackToPlayLater                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bCanRetriggerNextMusicPack                                  OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bRegisteredForAnalysis                                      OFFSET(get<bool>, {0x2C1, 1, 0, 0})


	/// Functions
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
	// void Change Music(USoundBase* New Music, double StartTime, FGameplayTag Event Tag);                                      // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ListenToMusicPacks
	// void ListenToMusicPacks();                                                                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.OnMusicPackChanged
	// void OnMusicPackChanged(UAthenaMusicPackItemDefinition* NewMusicPack, float StartTimeOffset);                            // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Lobby Music Override
	// void Lobby Music Override(bool Lobby Music Activate, USoundBase* New Music);                                             // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.SetCanRetriggerNextMusicPack
	// void SetCanRetriggerNextMusicPack(bool bCanRetriggerNextMusicPack);                                                      // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.PlayEquippedMusicPack
	// void PlayEquippedMusicPack();                                                                                            // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.StartMusic
	// void StartMusic();                                                                                                       // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
	// void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32_t EntryPoint);                                                // [0x101681c] Final|HasDefaults    
};

/// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
/// Size: 0x0080 (0x0002C0 - 0x000340)
class UWB_AudioAnalysis_FloatGraph_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UCanvasPanel*)                             CanvasPanel                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UTextBlock*)                               Label_                                                      OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UProgressBar*)                             ProgressBar                                                 OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UTextBlock*)                               Value                                                       OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(FVector2D)                                 Position                                                    OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FVector2D)                                 Size                                                        OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	DMember(bool)                                      calculated                                                  OFFSET(get<bool>, {0x308, 1, 0, 0})
	SMember(FName)                                     Parameter                                                   OFFSET(getStruct<T>, {0x30C, 4, 0, 0})
	CMember(TArray<FVector2D>)                         Points                                                      OFFSET(get<T>, {0x310, 16, 0, 0})
	DMember(int32_t)                                   NumPoints                                                   OFFSET(get<int32_t>, {0x320, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x324, 16, 0, 0})
	DMember(int32_t)                                   VectorIndex                                                 OFFSET(get<int32_t>, {0x334, 4, 0, 0})
	CMember(UMaterialParameterCollection*)             Collection                                                  OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint
	// void OnPaint(FPaintContext& Context);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize
	// void calcWidgetSize(FGeometry geom);                                                                                     // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value
	// void Set Value(double Value);                                                                                            // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct
	// void Construct();                                                                                                        // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC
	// void Initialize MPC(FName Parameter, UMaterialParameterCollection* Collection, int32_t VectorIndex);                     // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph
	// void ExecuteUbergraph_WB_AudioAnalysis_FloatGraph(int32_t EntryPoint);                                                   // [0x101681c] Final|HasDefaults    
};

/// Class /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
/// Size: 0x0020 (0x0002C0 - 0x0002E0)
class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UVerticalBox*)                             GraphBox                                                    OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(TArray<UWB_AudioAnalysis_FloatGraph_C*>)   Widgets                                                     OFFSET(get<T>, {0x2D0, 16, 0, 0})


	/// Functions
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddScalarParameter
	// void AddScalarParameter(FAudioAnalysisParameterScalar& Param);                                                           // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddVectorParameter
	// void AddVectorParameter(FAudioAnalysisParameterVector& Param);                                                           // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ClearParameters
	// void ClearParameters();                                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI
	// void ExecuteUbergraph_WB_AudioAnalysis_UI(int32_t EntryPoint);                                                           // [0x101681c] Final|HasDefaults    
};

/// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UB_MusicEventInstanceWidget_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UUEFN_TextBlock_C*)                        Text                                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UMusicEventInstance*)                      EventInstance                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0x2D8, 8, 0, 0})
	CMember(UB_MusicEventDebugWidget_C*)               DebugWidget                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetTextColor
	// FSlateColor GetTextColor();                                                                                              // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.GetFormatText
	// void GetFormatText(FText& Result);                                                                                       // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnEntryReleased
	// void BP_OnEntryReleased();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemExpansionChanged
	// void BP_OnItemExpansionChanged(bool bIsExpanded);                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.BP_OnItemSelectionChanged
	// void BP_OnItemSelectionChanged(bool bIsSelected);                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.Tick
	// void Tick(FGeometry MyGeometry, float InDeltaTime);                                                                      // [0x101681c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.OnListItemObjectSet
	// void OnListItemObjectSet(UObject* ListItemObject);                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventInstanceWidget.B_MusicEventInstanceWidget_C.ExecuteUbergraph_B_MusicEventInstanceWidget
	// void ExecuteUbergraph_B_MusicEventInstanceWidget(int32_t EntryPoint);                                                    // [0x101681c] Final|HasDefaults    
};

/// Class /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C
/// Size: 0x003C (0x0002C0 - 0x0002FC)
class UB_MusicEventDebugWidget_C : public UMusicEventSubsystemDebugWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 764;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2C0, 8, 0, 0})
	CMember(UBackgroundBlur*)                          Background                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonListView*)                          EventInstances                                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FString)                                   AssetFilter                                                 OFFSET(getStruct<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<UMusicEventInstance*>)              Instances                                                   OFFSET(get<T>, {0x2E8, 16, 0, 0})
	DMember(int32_t)                                   FontSize                                                    OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})


	/// Functions
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.FilterInstances
	// void FilterInstances();                                                                                                  // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetEventInstances
	// void SetEventInstances(TArray<UMusicEventInstance*>& Instances);                                                         // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventPos
	// void SetMusicEventPos(double X, double Y);                                                                               // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventAssetFilter
	// void SetMusicEventAssetFilter(FString Filter);                                                                           // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.SetMusicEventFontSize
	// void SetMusicEventFontSize(int32_t Size);                                                                                // [0x101681c] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/MusicEventSubsystem/B_MusicEventDebugWidget.B_MusicEventDebugWidget_C.ExecuteUbergraph_B_MusicEventDebugWidget
	// void ExecuteUbergraph_B_MusicEventDebugWidget(int32_t EntryPoint);                                                       // [0x101681c] Final|HasDefaults    
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Creatures/B_CreatureAnimSoundLibraryContext.B_CreatureAnimSoundLibraryContext_C
/// Size: 0x0000 (0x000098 - 0x000098)
class UB_CreatureAnimSoundLibraryContext_C : public USoundLibraryAnimContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C
/// Size: 0x003B (0x0000F0 - 0x00012B)
class UBP_AudioParameterComponent_Pawn_C : public UFortAudioParameterComponent_Pawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 299;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xF0, 8, 0, 0})
	CMember(AActor*)                                   LocalViewTarget                                             OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TArray<FAudioParameterQueryData>)          QueryAudioParams                                            OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bDebugEnabled                                               OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      IsInWater                                                   OFFSET(get<bool>, {0x111, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          LocalPlayerPawnTarget                                       OFFSET(get<T>, {0x118, 8, 0, 0})
	DMember(double)                                    WaterDepthValue                                             OFFSET(get<double>, {0x120, 8, 0, 0})
	CMember(TEnumAsByte<PlayerWaterDepthEnum>)         PlayerWaterDepth                                            OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(TEnumAsByte<PlayerWaterDepthEnum>)         CurrentWaterDepth                                           OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(bool)                                      WaterDepthChanged                                           OFFSET(get<bool>, {0x12A, 1, 0, 0})


	/// Functions
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.OnWaterDepthSwitch
	// void OnWaterDepthSwitch();                                                                                               // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.OnWaterUpdate
	// void OnWaterUpdate();                                                                                                    // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.Movement Mode Change
	// void Movement Mode Change(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode);  // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.OnExitWater
	// void OnExitWater(AFortPlayerPawn* FortPlayerPawn, bool bPawnIsOutsideOfAllWaterBodies);                                  // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.OnEnterWater
	// void OnEnterWater(AFortPlayerPawn* FortPlayerPawn);                                                                      // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.GetWaterDepthValue
	// float GetWaterDepthValue();                                                                                              // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.PrintParameter
	// void PrintParameter(FAudioParameterQueryData& Parameter, bool Condition);                                                // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.OnViewTargetSet
	// void OnViewTargetSet(AActor* Actor);                                                                                     // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/BP_AudioParameterComponent_Pawn.BP_AudioParameterComponent_Pawn_C.ExecuteUbergraph_BP_AudioParameterComponent_Pawn
	// void ExecuteUbergraph_BP_AudioParameterComponent_Pawn(int32_t EntryPoint);                                               // [0x101681c] Final                
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryContext.BP_SkydiveSoundLibraryContext_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UBP_SkydiveSoundLibraryContext_C : public UFortSkydiveSoundLibraryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C
/// Size: 0x0020 (0x0001B8 - 0x0001D8)
class UBP_SkydiveSoundLibraryComponent_C : public UFortSkydiveSoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1B8, 8, 0, 0})
	SMember(FGameplayTag)                              SkydiveEventTag                                             OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	CMember(TArray<UAudioComponent*>)                  Components                                                  OFFSET(get<T>, {0x1C8, 16, 0, 0})


	/// Functions
	// Function /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.OnEventPlayed
	// void OnEventPlayed(FGameplayTag InEventName);                                                                            // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.OnSoundPlayed
	// void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent* InComponent);                                              // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.OnSoundStopped
	// void OnSoundStopped(FGameplayTag InEventName, UAudioComponent* InComponent, bool& bStopped);                             // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Skydive/BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.ExecuteUbergraph_BP_SkydiveSoundLibraryComponent
	// void ExecuteUbergraph_BP_SkydiveSoundLibraryComponent(int32_t EntryPoint);                                               // [0x101681c] Final                
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
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UBP_HitNotifySoundLibraryComponent_C : public UFortHitNotifySoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/HitNotify/BP_HitNotifySoundLibraryComponent_FortAthenaVehicle.BP_HitNotifySoundLibraryComponent_FortAthenaVehicle_C
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UBP_HitNotifySoundLibraryComponent_FortAthenaVehicle_C : public UBP_HitNotifySoundLibraryComponent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UB_WeaponSoundLibraryContext_C : public UFortWeaponSoundLibraryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bGatherSounds                                               OFFSET(get<bool>, {0xB0, 1, 0, 0})
	CMember(TArray<USoundBase*>)                       GatheredSounds                                              OFFSET(get<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C.EnableSoundRetrieval
	// void EnableSoundRetrieval();                                                                                             // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C.ClearRetrievedSounds
	// void ClearRetrievedSounds();                                                                                             // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C.GetRetrievedSounds
	// void GetRetrievedSounds(TArray<USoundBase*>& GatheredSounds);                                                            // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C.GetRootComponent
	// void GetRootComponent(AActor* Actor, FGameplayTag EventTag, USceneComponent*& RootComponent);                            // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C.Play
	// bool Play(FSoundLibraryContextEventInput& InEventData, TArray<UAudioComponent*>& OutComponents);                         // [0x101681c] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C
/// Size: 0x0039 (0x000220 - 0x000259)
class UB_WeaponSoundLibraryComponent_C : public UFortWeaponSoundLibraryComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 601;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x220, 8, 0, 0})
	SMember(FGameplayTag)                              FireEvent                                                   OFFSET(getStruct<T>, {0x228, 4, 0, 0})
	CMember(UMetaSoundSource*)                         BaseGunfireMS                                               OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(TArray<UMetaSoundPatch*>)                  ModMS                                                       OFFSET(get<T>, {0x238, 16, 0, 0})
	CMember(USoundLibrary*)                            ModSoundLibrary                                             OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(UObject*)                                  ModDistanceCurveBank                                        OFFSET(get<T>, {0x250, 8, 0, 0})
	DMember(bool)                                      bSuppressorAtt                                              OFFSET(get<bool>, {0x258, 1, 0, 0})


	/// Functions
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.ValidateModMetasounds
	// void ValidateModMetasounds(UObject* 1pMetaSoundPatch, UObject* 3pMetaSoundPatch, bool& bShouldBuild);                    // [0x101681c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.CheckIfSuppressor
	// void CheckIfSuppressor(UMetaSoundBuilderBase* BuilderRef, FMetaSoundNodeHandle& BaseNodeHandle, FMetaSoundNodeHandle ModNodeHandle, UObject* ModRef); // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.ConnectInterfaceInputs
	// void ConnectInterfaceInputs(UMetaSoundBuilderBase* BuilderRef, FMetaSoundNodeHandle& BaseWeaponNodeHandle, FName InputName); // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.ConnectNodesIO
	// void ConnectNodesIO(UMetaSoundBuilderBase* BuilderRef, FName InputName, FName OutputName, FMetaSoundNodeHandle BaseNodeHandle, FMetaSoundNodeHandle ModNodeHandle); // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.AddConnectedGraphInput
	// void AddConnectedGraphInput(FName InputName, FName DataType, UMetaSoundSourceBuilder* BuilderRef, FMetaSoundNodeHandle BaseWeaponNodeHandleRef); // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.CreateModSoundLibrary
	// void CreateModSoundLibrary();                                                                                            // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.SetModMS
	// void SetModMS();                                                                                                         // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.SetBaseMS
	// void SetBaseMS();                                                                                                        // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.CreateModMetaSound
	// void CreateModMetaSound();                                                                                               // [0x101681c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.GetSoundsFromEvent
	// void GetSoundsFromEvent(FGameplayTag InEventName, TArray<USoundBase*>& Out Sounds);                                      // [0x101681c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnSoundPlayed
	// void OnSoundPlayed(FGameplayTag InEventName, UAudioComponent* InComponent);                                              // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnSoundStopped
	// void OnSoundStopped(FGameplayTag InEventName, UAudioComponent* InComponent, bool& bStopped);                             // [0x101681c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.TryHandleFireEvent
	// void TryHandleFireEvent(FGameplayTag Event, UAudioComponent* Component);                                                 // [0x101681c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnModApplied
	// void OnModApplied(UFortWeaponModAudioData* InModAudioData);                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnModRemoved
	// void OnModRemoved(UFortWeaponModAudioData* InModAudioData);                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Game/Sounds/SoundLibrary/Contexts/Weapons/B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.ExecuteUbergraph_B_WeaponSoundLibraryComponent
	// void ExecuteUbergraph_B_WeaponSoundLibraryComponent(int32_t EntryPoint);                                                 // [0x101681c] Final                
};

/// Struct /Game/Sounds/Fort_Audio_Blueprints/AudioParameterComponent/AudioParameterQueryData.AudioParameterQueryData
/// Size: 0x0068 (0x000000 - 0x000068)
class FAudioParameterQueryData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         TagQuery_12_74B441D54446A49EB7F00AAC728B68F0                OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	SMember(FName)                                     ParameterName_2_0E82F2EF4DD09C9EB9E25D9AD7DB520D            OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	CMember(USoundControlBus*)                         ControlBus_5_0B33E9404596DE8D58698EA40F70C171               OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FVector2D)                                 ControlBusFadeTime_9_E9701E2E4995E4A3C8798FA35536B86E       OFFSET(getStruct<T>, {0x58, 16, 0, 0})
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

