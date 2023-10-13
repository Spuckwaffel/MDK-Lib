
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C
/// Size: 0x017A (0x000318 - 0x000492)
class ATVPostProcessBP_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1170;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UPostProcessComponent*)                    FullScreenTVPP_StoreFF                                      OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UBillboardComponent*)                      Billboard                                                   OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UPostProcessComponent*)                    FullScreenTVPP_OnlyMaterialModified                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UPostProcessComponent*)                    FullScreenTVPP                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(float)                                     FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd02_A319E55147356F64E8D7AE9C824CC6C2 OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     FrontEndCameraSwitchFade_DistortTheSceneTexture_FrontEnd_A319E55147356F64E8D7AE9C824CC6C2 OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     FrontEndCameraSwitchFade_PostProcessVisibility_A319E55147356F64E8D7AE9C824CC6C2 OFFSET(get<float>, {0x348, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FrontEndCameraSwitchFade__Direction_A319E55147356F64E8D7AE9C824CC6C2 OFFSET(get<T>, {0x34C, 1, 0, 0})
	CMember(UTimelineComponent*)                       FrontEndCameraSwitchFade                                    OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     Jitter_Timeline_use_solid_color_3FCD803A4A5E86474EA128B9EDBED56E OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(float)                                     Jitter_Timeline_LerpImageAndScreen_3FCD803A4A5E86474EA128B9EDBED56E OFFSET(get<float>, {0x35C, 4, 0, 0})
	DMember(float)                                     Jitter_Timeline_Noise_Distortion_Amount_3FCD803A4A5E86474EA128B9EDBED56E OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     Jitter_Timeline_Screen_Modulation_3FCD803A4A5E86474EA128B9EDBED56E OFFSET(get<float>, {0x364, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Jitter_Timeline__Direction_3FCD803A4A5E86474EA128B9EDBED56E OFFSET(get<T>, {0x368, 1, 0, 0})
	CMember(UTimelineComponent*)                       Jitter_Timeline                                             OFFSET(get<T>, {0x370, 8, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_SolidBackgroundModulation_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_Additive_screen_modulation_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_ReplacementAlpha_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x380, 4, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_Vpos_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x384, 4, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_Hpos_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_Noise_Distortion_Amount_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x38C, 4, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_Screen_Bend_Amount_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x390, 4, 0, 0})
	DMember(float)                                     Camera_StartTheMonitor_Text_Timeline_Screen_Modulation_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<float>, {0x394, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Camera_StartTheMonitor_Text_Timeline__Direction_8B52FB0849C47C5870E31DBE0A87A563 OFFSET(get<T>, {0x398, 1, 0, 0})
	CMember(UTimelineComponent*)                       Camera_StartTheMonitor_Text_Timeline                        OFFSET(get<T>, {0x3A0, 8, 0, 0})
	DMember(float)                                     FadeOut_blendweight_D40D454F4B32910AAC407D9AB580EA07        OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(float)                                     FadeOut_Fading_D40D454F4B32910AAC407D9AB580EA07             OFFSET(get<float>, {0x3AC, 4, 0, 0})
	DMember(float)                                     FadeOut_Effect_translucency_D40D454F4B32910AAC407D9AB580EA07 OFFSET(get<float>, {0x3B0, 4, 0, 0})
	DMember(float)                                     FadeOut_Kill_effect_amount_D40D454F4B32910AAC407D9AB580EA07 OFFSET(get<float>, {0x3B4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FadeOut__Direction_D40D454F4B32910AAC407D9AB580EA07         OFFSET(get<T>, {0x3B8, 1, 0, 0})
	CMember(UTimelineComponent*)                       FadeOut                                                     OFFSET(get<T>, {0x3C0, 8, 0, 0})
	DMember(float)                                     Switch_between_cameras_use_solid_color_E4FB35CD487A51ED1632BFAD49D21E03 OFFSET(get<float>, {0x3C8, 4, 0, 0})
	DMember(float)                                     Switch_between_cameras_LerpImageAndScreen_E4FB35CD487A51ED1632BFAD49D21E03 OFFSET(get<float>, {0x3CC, 4, 0, 0})
	DMember(float)                                     Switch_between_cameras_Noise_Distortion_Amount_E4FB35CD487A51ED1632BFAD49D21E03 OFFSET(get<float>, {0x3D0, 4, 0, 0})
	DMember(float)                                     Switch_between_cameras_Screen_Modulation_E4FB35CD487A51ED1632BFAD49D21E03 OFFSET(get<float>, {0x3D4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Switch_between_cameras__Direction_E4FB35CD487A51ED1632BFAD49D21E03 OFFSET(get<T>, {0x3D8, 1, 0, 0})
	CMember(UTimelineComponent*)                       Switch_between_cameras                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	DMember(float)                                     Switch_to_static_use_solid_color_010BC5074AA9D38B1E815EB7DA97273B OFFSET(get<float>, {0x3E8, 4, 0, 0})
	DMember(float)                                     Switch_to_static_ShowScreenStatic_010BC5074AA9D38B1E815EB7DA97273B OFFSET(get<float>, {0x3EC, 4, 0, 0})
	DMember(float)                                     Switch_to_static_Noise_Distortion_Amount_010BC5074AA9D38B1E815EB7DA97273B OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(float)                                     Switch_to_static_Screen_Modulation_010BC5074AA9D38B1E815EB7DA97273B OFFSET(get<float>, {0x3F4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Switch_to_static__Direction_010BC5074AA9D38B1E815EB7DA97273B OFFSET(get<T>, {0x3F8, 1, 0, 0})
	CMember(UTimelineComponent*)                       Switch_to_static                                            OFFSET(get<T>, {0x400, 8, 0, 0})
	DMember(float)                                     Switch_to_live_use_solid_color_DFB267304061CE3644C3E1B38972E94E OFFSET(get<float>, {0x408, 4, 0, 0})
	DMember(float)                                     Switch_to_live_LerpImageAndScreen_DFB267304061CE3644C3E1B38972E94E OFFSET(get<float>, {0x40C, 4, 0, 0})
	DMember(float)                                     Switch_to_live_Noise_Distortion_Amount_DFB267304061CE3644C3E1B38972E94E OFFSET(get<float>, {0x410, 4, 0, 0})
	DMember(float)                                     Switch_to_live_Screen_Modulation_DFB267304061CE3644C3E1B38972E94E OFFSET(get<float>, {0x414, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Switch_to_live__Direction_DFB267304061CE3644C3E1B38972E94E  OFFSET(get<T>, {0x418, 1, 0, 0})
	CMember(UTimelineComponent*)                       Switch_to_live                                              OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(float)                                     Show_the_troll_HideTroll_060EDD8E4EDBC900E7D2F29D7A26DBF0   OFFSET(get<float>, {0x428, 4, 0, 0})
	DMember(float)                                     Show_the_troll_use_solid_color_060EDD8E4EDBC900E7D2F29D7A26DBF0 OFFSET(get<float>, {0x42C, 4, 0, 0})
	DMember(float)                                     Show_the_troll_Noise_Distortion_Amount_060EDD8E4EDBC900E7D2F29D7A26DBF0 OFFSET(get<float>, {0x430, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Show_the_troll__Direction_060EDD8E4EDBC900E7D2F29D7A26DBF0  OFFSET(get<T>, {0x434, 1, 0, 0})
	CMember(UTimelineComponent*)                       Show_the_troll                                              OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(float)                                     StartScreen_Replacement_randomization_676222D64F5268BA3215E5B98CEFBE8A OFFSET(get<float>, {0x440, 4, 0, 0})
	DMember(float)                                     StartScreen_ReplacementAlpha_676222D64F5268BA3215E5B98CEFBE8A OFFSET(get<float>, {0x444, 4, 0, 0})
	DMember(float)                                     StartScreen_Vpos_676222D64F5268BA3215E5B98CEFBE8A           OFFSET(get<float>, {0x448, 4, 0, 0})
	DMember(float)                                     StartScreen_Hpos_676222D64F5268BA3215E5B98CEFBE8A           OFFSET(get<float>, {0x44C, 4, 0, 0})
	DMember(float)                                     StartScreen_Noise_Distortion_Amount_676222D64F5268BA3215E5B98CEFBE8A OFFSET(get<float>, {0x450, 4, 0, 0})
	DMember(float)                                     StartScreen_Screen_Bend_Amount_676222D64F5268BA3215E5B98CEFBE8A OFFSET(get<float>, {0x454, 4, 0, 0})
	DMember(float)                                     StartScreen_Screen_Modulation_676222D64F5268BA3215E5B98CEFBE8A OFFSET(get<float>, {0x458, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           StartScreen__Direction_676222D64F5268BA3215E5B98CEFBE8A     OFFSET(get<T>, {0x45C, 1, 0, 0})
	CMember(UTimelineComponent*)                       StartScreen                                                 OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(bool)                                      GrabNewColorBool                                            OFFSET(get<bool>, {0x468, 1, 0, 0})
	DMember(bool)                                      increase_distortion_                                        OFFSET(get<bool>, {0x469, 1, 0, 0})
	DMember(float)                                     AdditionalDistortionAmount                                  OFFSET(get<float>, {0x46C, 4, 0, 0})
	DMember(bool)                                      Show_troll                                                  OFFSET(get<bool>, {0x470, 1, 0, 0})
	DMember(int32_t)                                   Troll_counter                                               OFFSET(get<int32_t>, {0x474, 4, 0, 0})
	DMember(bool)                                      NewVar                                                      OFFSET(get<bool>, {0x478, 1, 0, 0})
	DMember(bool)                                      Camera_hasnt_switched_to_live_yet                           OFFSET(get<bool>, {0x479, 1, 0, 0})
	DMember(float)                                     FluctuatingDisplaySceneValue                                OFFSET(get<float>, {0x47C, 4, 0, 0})
	DMember(float)                                     Ideal_Display_scene_min_value                               OFFSET(get<float>, {0x480, 4, 0, 0})
	DMember(float)                                     Ideal_display_scene_max_value                               OFFSET(get<float>, {0x484, 4, 0, 0})
	DMember(bool)                                      SkipDos                                                     OFFSET(get<bool>, {0x488, 1, 0, 0})
	DMember(bool)                                      DisableOnStartup                                            OFFSET(get<bool>, {0x489, 1, 0, 0})
	DMember(bool)                                      FrontEndCameraSwitch_InProgress                             OFFSET(get<bool>, {0x48A, 1, 0, 0})
	DMember(float)                                     PreviousSceneModulation                                     OFFSET(get<float>, {0x48C, 4, 0, 0})
	DMember(bool)                                      FFInProgress                                                OFFSET(get<bool>, {0x490, 1, 0, 0})
	DMember(bool)                                      RestartFrontEndCameraSwitch_                                OFFSET(get<bool>, {0x491, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.RandomizeTheColor
	// void RandomizeTheColor(float Use Bluescreen, float Probablility modulator, float Use Flat Blue, float MaxColorPerChannelValue, bool Control replacement alpha); // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Show the troll__FinishedFunc
	// void Show the troll__FinishedFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Show the troll__UpdateFunc
	// void Show the troll__UpdateFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__FinishedFunc
	// void Switch between cameras__FinishedFunc();                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__UpdateFunc
	// void Switch between cameras__UpdateFunc();                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Switch between cameras__Switch Camera Position__EventFunc
	// void Switch between cameras__Switch Camera Position__EventFunc();                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Switch to live__FinishedFunc
	// void Switch to live__FinishedFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Switch to live__UpdateFunc
	// void Switch to live__UpdateFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.FadeOut__FinishedFunc
	// void FadeOut__FinishedFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.FadeOut__UpdateFunc
	// void FadeOut__UpdateFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Switch to static__FinishedFunc
	// void Switch to static__FinishedFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Switch to static__UpdateFunc
	// void Switch to static__UpdateFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__FinishedFunc
	// void Camera_StartTheMonitor_Text_Timeline__FinishedFunc();                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text_Timeline__UpdateFunc
	// void Camera_StartTheMonitor_Text_Timeline__UpdateFunc();                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__FinishedFunc
	// void Jitter Timeline__FinishedFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__UpdateFunc
	// void Jitter Timeline__UpdateFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Jitter Timeline__Switch Camera Position__EventFunc
	// void Jitter Timeline__Switch Camera Position__EventFunc();                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__FinishedFunc
	// void FrontEndCameraSwitchFade__FinishedFunc();                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitchFade__UpdateFunc
	// void FrontEndCameraSwitchFade__UpdateFunc();                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.StartScreen__FinishedFunc
	// void StartScreen__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.StartScreen__UpdateFunc
	// void StartScreen__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_TriggerTheTroll
	// void Camera_TriggerTheTroll();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_SwitchBetweenLocations
	// void Camera_SwitchBetweenLocations();                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveStatic
	// void Camera_TransitionToLiveStatic();                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_TurnOffThePostProcess
	// void Camera_TurnOffThePostProcess();                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_TransitionToLiveVideo
	// void Camera_TransitionToLiveVideo();                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_DebugEvents
	// void Camera_DebugEvents();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_StartTheMonitor_Text
	// void Camera_StartTheMonitor_Text();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_DosTextFinished
	// void Camera_DosTextFinished();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_ReturningPlayerInitializeWithLiveVideo
	// void Camera_ReturningPlayerInitializeWithLiveVideo();                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
	// void FrontEndCameraSwitch();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_LoadAndWait
	// void Camera_LoadAndWait();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_Sequence_Start_StaticWhoomp
	// void Camera_Sequence_Start_StaticWhoomp();                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.WriteOutLoading
	// void WriteOutLoading();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.SequenceFinished
	// void SequenceFinished(FString SequenceName);                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_InitializePost
	// void Camera_InitializePost();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
	// void Camera_DisableEffects();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.FastForwardPostProcess
	// void FastForwardPostProcess();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.JitterTheScreen
	// void JitterTheScreen();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/Homebase/Blueprints/TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
	// void ExecuteUbergraph_TVPostProcessBP(int32_t EntryPoint);                                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Environments/Hexmap/Zones/Temperate/LevelSettings/HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C
/// Size: 0x0040 (0x000318 - 0x000358)
class AHexmapLevelSettings_Temperate01_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UExponentialHeightFogComponent*)           ExponentialHeightFog_Volumetric                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UExponentialHeightFogComponent*)           ExponentialHeightFog                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_Main                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USceneComponent*)                          LightsRoot                                                  OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/Hexmap/Zones/Temperate/LevelSettings/HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Hexmap/Zones/Temperate/LevelSettings/HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.CustomSettings
	// void CustomSettings(bool Visibility);                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/Hexmap/Zones/Temperate/LevelSettings/HexmapLevelSettings_Temperate01.HexmapLevelSettings_Temperate01_C.ExecuteUbergraph_HexmapLevelSettings_Temperate01
	// void ExecuteUbergraph_HexmapLevelSettings_Temperate01(int32_t EntryPoint);                                               // [0x154a140] None                 
};

/// Class /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C
/// Size: 0x0068 (0x000318 - 0x000380)
class ABP_FortniteLobbyLightSwitcher_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(ADirectionalLight*)                        DirectionLight                                              OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(ASkyLight*)                                SkyLight                                                    OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TArray<APointLight*>)                      Pointlights                                                 OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(AExponentialHeightFog*)                    ExponentialHeightFog                                        OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(ADirectionalLight*)                        DirectionalLight_LowDetailMode                              OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(TArray<AEmitter*>)                         ParticleSystems                                             OFFSET(get<T>, {0x358, 16, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      DebugLOWQualityLighting                                     OFFSET(get<bool>, {0x369, 1, 0, 0})
	CMember(ASkyLight*)                                SkyLight_LowDetailMode                                      OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(AExponentialHeightFog*)                    ExponentialHeightfog_LowDetailMode                          OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.SetVisiblityofSceneLighting
	// void SetVisiblityofSceneLighting(bool Activate);                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.EnableLobbySetLighting
	// void EnableLobbySetLighting();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.DisableLobbySetLighting
	// void DisableLobbySetLighting();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/BP_FortniteLobbyLightSwitcher.BP_FortniteLobbyLightSwitcher_C.ExecuteUbergraph_BP_FortniteLobbyLightSwitcher
	// void ExecuteUbergraph_BP_FortniteLobbyLightSwitcher(int32_t EntryPoint);                                                 // [0x154a140] None                 
};

/// Class /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C
/// Size: 0x00B0 (0x0008B0 - 0x000960)
class AWM_Camera_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	DMember(float)                                     TL_CameraDeactivateAnim_OutCurve_73E7DC7546C4C2FD98109BAD51037AF1 OFFSET(get<float>, {0x8B8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CameraDeactivateAnim__Direction_73E7DC7546C4C2FD98109BAD51037AF1 OFFSET(get<T>, {0x8BC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CameraDeactivateAnim                                     OFFSET(get<T>, {0x8C0, 8, 0, 0})
	DMember(float)                                     TL_CameraActivateAnim_NewTrack_4_ED6153E9442CF8BBFC62D28E1B56763B OFFSET(get<float>, {0x8C8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TL_CameraActivateAnim__Direction_ED6153E9442CF8BBFC62D28E1B56763B OFFSET(get<T>, {0x8CC, 1, 0, 0})
	CMember(UTimelineComponent*)                       TL_CameraActivateAnim                                       OFFSET(get<T>, {0x8D0, 8, 0, 0})
	DMember(float)                                     CameraNoise_Noise3_CAC0C7484A50FFB26B3B348FCDF148B0         OFFSET(get<float>, {0x8D8, 4, 0, 0})
	DMember(float)                                     CameraNoise_Noise2_CAC0C7484A50FFB26B3B348FCDF148B0         OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(float)                                     CameraNoise_Noise1_CAC0C7484A50FFB26B3B348FCDF148B0         OFFSET(get<float>, {0x8E0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CameraNoise__Direction_CAC0C7484A50FFB26B3B348FCDF148B0     OFFSET(get<T>, {0x8E4, 1, 0, 0})
	CMember(UTimelineComponent*)                       CameraNoise                                                 OFFSET(get<T>, {0x8E8, 8, 0, 0})
	SMember(FTransform)                                InitialPosition                                             OFFSET(getStruct<T>, {0x8F0, 48, 0, 0})
	SMember(FTransform)                                ZoomPosition                                                OFFSET(getStruct<T>, {0x920, 48, 0, 0})
	CMember(TArray<AWorldMapPin*>)                     AllPinsArray                                                OFFSET(get<T>, {0x950, 16, 0, 0})


	/// Functions
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.TL_CameraActivateAnim__FinishedFunc
	// void TL_CameraActivateAnim__FinishedFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.TL_CameraActivateAnim__UpdateFunc
	// void TL_CameraActivateAnim__UpdateFunc();                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__FinishedFunc
	// void TL_CameraDeactivateAnim__FinishedFunc();                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.TL_CameraDeactivateAnim__UpdateFunc
	// void TL_CameraDeactivateAnim__UpdateFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.CameraNoise__FinishedFunc
	// void CameraNoise__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.CameraNoise__UpdateFunc
	// void CameraNoise__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.CameraActivateAnim
	// void CameraActivateAnim();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.StopWiggle
	// void StopWiggle();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.CameraDeactivateAnim
	// void CameraDeactivateAnim();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.CameraWiggle
	// void CameraWiggle();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Camera.WM_Camera_C.ExecuteUbergraph_WM_Camera
	// void ExecuteUbergraph_WM_Camera(int32_t EntryPoint);                                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C
/// Size: 0x0060 (0x000318 - 0x000378)
class AVaultWeaponPlacementHelper_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Cube                                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Sparkle                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl02                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl01                                         OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CharacterPlacement                                          OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(int32_t)                                   PlayerID                                                    OFFSET(get<int32_t>, {0x350, 4, 0, 0})
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bIsPlayerSelected                                           OFFSET(get<bool>, {0x360, 1, 0, 0})
	CMember(UMulticastDelegate)                        NewEventDispatcher                                          OFFSET(get<T>, {0x368, 16, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerUnhovered
	// void OnLobbyPlayerUnhovered(int32_t PlayerIndex);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.GetFrontendAnimInstance
	// void GetFrontendAnimInstance(UFrontendAnimInstance*& AsFrontend Anim Instance);                                          // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberStateChanged
	// void OnTeamMemberStateChanged(FFortTeamMemberInfo TeamMemberInfo);                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberRemoved
	// void OnTeamMemberRemoved(int32_t TeamMemberInfo);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnTeamMemberAdded
	// void OnTeamMemberAdded(FFortTeamMemberInfo TeamMemberInfo);                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnFrontEndCameraChanged
	// void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyStarted
	// void OnLobbyStarted();                                                                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.Initialize
	// void Initialize();                                                                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.InitializeContextEvents
	// void InitializeContextEvents();                                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerSelected
	// void OnLobbyPlayerSelected(int32_t PlayerIndex);                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.OnLobbyPlayerHovered
	// void OnLobbyPlayerHovered(int32_t PlayerIndex);                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ItemRez
	// void ItemRez();                                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.ExecuteUbergraph_VaultWeaponPlacementHelper
	// void ExecuteUbergraph_VaultWeaponPlacementHelper(int32_t EntryPoint);                                                    // [0x154a140] None                 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultWeaponPlacementHelper.VaultWeaponPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
	// void NewEventDispatcher_0__DelegateSignature();                                                                          // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C
/// Size: 0x0081 (0x000318 - 0x000399)
class AVaultCharacterPlacementHelper_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 921;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Floor                                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CharacterPlacement                                          OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UMulticastDelegate)                        NewEventDispatcher                                          OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FTransform)                                OriginalTransform                                           OFFSET(getStruct<T>, {0x350, 48, 0, 0})
	SMember(FVector)                                   OffsetTranslate                                             OFFSET(getStruct<T>, {0x380, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotate                                                OFFSET(getStruct<T>, {0x38C, 12, 0, 0})
	DMember(bool)                                      Athena                                                      OFFSET(get<bool>, {0x398, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UpdatePosition For Camera
	// void UpdatePosition For Camera(EFrontEndCamera FrontendCamera);                                                          // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.SubGameChanged_Event
	// void SubGameChanged_Event(ESubGame SubGame);                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.OnFrontEndCameraChanged
	// void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.ExecuteUbergraph_VaultCharacterPlacementHelper
	// void ExecuteUbergraph_VaultCharacterPlacementHelper(int32_t EntryPoint);                                                 // [0x154a140] HasDefaults          
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterPlacementHelper.VaultCharacterPlacementHelper_C.NewEventDispatcher_0__DelegateSignature
	// void NewEventDispatcher_0__DelegateSignature();                                                                          // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C
/// Size: 0x0490 (0x000420 - 0x0008B0)
class APartyDisplayManagerBP_C : public APartyDisplayManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x420, 8, 0, 0})
	CMember(UChildActorComponent*)                     PrefabActorComp                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ScalePivot                                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     PivotHolder                                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 CelebratoryFX                                               OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(float)                                     HoloMatColorPulse_Alpha_E6C257BB472EFEF7971B66A1E8FAE3D8    OFFSET(get<float>, {0x460, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           HoloMatColorPulse__Direction_E6C257BB472EFEF7971B66A1E8FAE3D8 OFFSET(get<T>, {0x464, 1, 0, 0})
	CMember(UTimelineComponent*)                       HoloMatColorPulse                                           OFFSET(get<T>, {0x468, 8, 0, 0})
	DMember(float)                                     ScaleAnimEvolve_Scaling_6D0D09564D54A0DEA88CCC96FA6653CC    OFFSET(get<float>, {0x470, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleAnimEvolve__Direction_6D0D09564D54A0DEA88CCC96FA6653CC OFFSET(get<T>, {0x474, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleAnimEvolve                                             OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(float)                                     ScaleAnimLevel_Scaling_CC68128E49202D0C982B7A945E41AF43     OFFSET(get<float>, {0x480, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleAnimLevel__Direction_CC68128E49202D0C982B7A945E41AF43  OFFSET(get<T>, {0x484, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleAnimLevel                                              OFFSET(get<T>, {0x488, 8, 0, 0})
	SMember(FTimerHandle)                              TimerHandle                                                 OFFSET(getStruct<T>, {0x490, 8, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x498, 4, 0, 0})
	CMember(UFortItem*)                                ItemToRepresent                                             OFFSET(get<T>, {0x4A0, 8, 0, 0})
	DMember(bool)                                      PreviewRotation                                             OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	CMember(UCurveFloat*)                              RotationAnimation                                           OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UParticleSystem*)                          LevelUpFX                                                   OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UParticleSystem*)                          EvolveUpFX                                                  OFFSET(get<T>, {0x4C0, 8, 0, 0})
	SMember(FVector)                                   FXTargetLocation                                            OFFSET(getStruct<T>, {0x4C8, 12, 0, 0})
	DMember(bool)                                      IsCharacter                                                 OFFSET(get<bool>, {0x4D4, 1, 0, 0})
	DMember(bool)                                      IsEvolve                                                    OFFSET(get<bool>, {0x4D5, 1, 0, 0})
	CMember(UParticleSystem*)                          CharLevelUpFX                                               OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UParticleSystem*)                          CharEvolveUpFX                                              OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 UIoverrideMID                                               OFFSET(get<T>, {0x4E8, 8, 0, 0})
	DMember(bool)                                      HasResetVisuals                                             OFFSET(get<bool>, {0x4F0, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem1                                             OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem2                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UParticleSystem*)                          CharSwapTransitionFX                                        OFFSET(get<T>, {0x508, 8, 0, 0})
	DMember(bool)                                      IsCharacterVisible                                          OFFSET(get<bool>, {0x510, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          HeroPawn                                                    OFFSET(get<T>, {0x518, 8, 0, 0})
	SMember(FRotator)                                  PrevCosmeticPawnRotator                                     OFFSET(getStruct<T>, {0x520, 12, 0, 0})
	DMember(bool)                                      SanityChecker                                               OFFSET(get<bool>, {0x52C, 1, 0, 0})
	SMember(FFrontEnd_VFXStorage)                      VFX_StorageContainer                                        OFFSET(getStruct<T>, {0x530, 800, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_HoloMaterial                                            OFFSET(get<T>, {0x850, 8, 0, 0})
	SMember(FName)                                     HideElement                                                 OFFSET(getStruct<T>, {0x858, 8, 0, 0})
	SMember(FName)                                     VertexRange                                                 OFFSET(getStruct<T>, {0x860, 8, 0, 0})
	SMember(FName)                                     HideElement1                                                OFFSET(getStruct<T>, {0x868, 8, 0, 0})
	SMember(FName)                                     HideElement2                                                OFFSET(getStruct<T>, {0x870, 8, 0, 0})
	SMember(FName)                                     HideElement3                                                OFFSET(getStruct<T>, {0x878, 8, 0, 0})
	SMember(FName)                                     HideElement4                                                OFFSET(getStruct<T>, {0x880, 8, 0, 0})
	SMember(FName)                                     HideElement5                                                OFFSET(getStruct<T>, {0x888, 8, 0, 0})
	SMember(FName)                                     HideElement6                                                OFFSET(getStruct<T>, {0x890, 8, 0, 0})
	SMember(FName)                                     HideElement7                                                OFFSET(getStruct<T>, {0x898, 8, 0, 0})
	SMember(FName)                                     HideElement8                                                OFFSET(getStruct<T>, {0x8A0, 8, 0, 0})
	SMember(FName)                                     HideElement9                                                OFFSET(getStruct<T>, {0x8A8, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandlePartyMemberInProgressDisplayChanges
	// void HandlePartyMemberInProgressDisplayChanges(AFortPlayerPawn* Pawn);                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PartyMemberInProgressCheck
	// void PartyMemberInProgressCheck(AFortPlayerPawn* Pawn);                                                                  // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPrefabActorForCurrentDisplayedItem
	// AActor* GetPrefabActorForCurrentDisplayedItem();                                                                         // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostSetupPrefabVisuals
	// void PostSetupPrefabVisuals();                                                                                           // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetTeslaHackParticles
	// void ResetTeslaHackParticles();                                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupPrefabVisuals
	// void SetupPrefabVisuals(bool& Success);                                                                                  // [0x154a140] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetMeshForCurrentDisplayedItem
	// void GetMeshForCurrentDisplayedItem(UMeshComponent*& OutDisplayedMesh);                                                  // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemDefinitionToShow
	// void GetItemDefinitionToShow(UFortItemDefinition*& ItemDefinition);                                                      // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetUIOverrideVisuals
	// void SetUIOverrideVisuals(UTexture2D* Large Texture, UFortItemDefinition* Item, EFortRarity Rarity);                     // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetWeaponPlacementTransform
	// FTransform GetWeaponPlacementTransform();                                                                                // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.UpdatePreviewMeshTransforms
	// void UpdatePreviewMeshTransforms();                                                                                      // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetItemPreviewOffset
	// FTransform GetItemPreviewOffset(UFortItemDefinition* ItemDefinition);                                                    // [0x154a140] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.GetPreviewMeshWorldTransform
	// FTransform GetPreviewMeshWorldTransform();                                                                               // [0x154a140] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupStaticMeshVisuals
	// void SetupStaticMeshVisuals(UStaticMesh* NewMesh);                                                                       // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.SetupSkeletalMeshVisuals
	// void SetupSkeletalMeshVisuals(USkeletalMesh* NewMesh);                                                                   // [0x154a140] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ResetVisuals
	// void ResetVisuals();                                                                                                     // [0x154a140] Private|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__FinishedFunc
	// void ScaleAnimLevel__FinishedFunc();                                                                                     // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimLevel__UpdateFunc
	// void ScaleAnimLevel__UpdateFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__FinishedFunc
	// void ScaleAnimEvolve__FinishedFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ScaleAnimEvolve__UpdateFunc
	// void ScaleAnimEvolve__UpdateFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__FinishedFunc
	// void HoloMatColorPulse__FinishedFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HoloMatColorPulse__UpdateFunc
	// void HoloMatColorPulse__UpdateFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowLoading
	// void ShowLoading();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HideLoading
	// void HideLoading();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ShowItem
	// void ShowItem(UFortItem* ItemToView, FGuid& RequestID);                                                                  // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayLevelUpEffect
	// void PlayLevelUpEffect();                                                                                                // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PlayEvolutionEffect
	// void PlayEvolutionEffect();                                                                                              // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CelebrateWithFX
	// void CelebrateWithFX();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PerformScaleMeshFX
	// void PerformScaleMeshFX();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.HandleLoadingAssetsForItemCompleted
	// void HandleLoadingAssetsForItemCompleted(UFortItem* ItemWhoseAssetsWereLoaded, TArray<UObject*>& LoadedAssets, FGuid& RequestID); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.Set Character Parts Visibility
	// void Set Character Parts Visibility(bool NewVisible);                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.CharacterCustomizationFinished
	// void CharacterCustomizationFinished(AFortPlayerPawn* Pawn);                                                              // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.PostLoadCustomization
	// void PostLoadCustomization(AFortPlayerPawn* Pawn);                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyDisplayManagerBP.PartyDisplayManagerBP_C.ExecuteUbergraph_PartyDisplayManagerBP
	// void ExecuteUbergraph_PartyDisplayManagerBP(int32_t EntryPoint);                                                         // [0x154a140] HasDefaults          
};

/// Class /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C
/// Size: 0x0159 (0x000318 - 0x000471)
class APartyCharacterPlacementHelper_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1137;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_FE_Smoke                                                  OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Lobby_Character_TopSpot                                  OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetComponent*)                         LobbyPlayerPadBottom                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetComponent*)                         LobbyPlayerAddPlayer                                        OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetComponent*)                         LobbyPlayerPadTop                                           OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetComponent*)                         LobbyPlayerPadGadgets                                       OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UPointLightComponent*)                     UnderlightBluePoint02                                       OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UPointLightComponent*)                     UnderlightBluePoint01                                       OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(USpotLightComponent*)                      UnderlightBlue02                                            OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(USpotLightComponent*)                      UnderlightBlue01                                            OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(USpotLightComponent*)                      RimSpotLight                                                OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(USpotLightComponent*)                      TopSpotLight                                                OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(USceneComponent*)                          LightsParent                                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Sparkle                                         OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl02                                         OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 PS_NoPlayer_Swirl01                                         OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Lobby_Character_Pad_Light_Ring                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Lobby_Character_Pad                                      OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CharacterPlacement                                          OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(int32_t)                                   PlayerID                                                    OFFSET(get<int32_t>, {0x3C0, 4, 0, 0})
	DMember(bool)                                      PreviewMesh                                                 OFFSET(get<bool>, {0x3C4, 1, 0, 0})
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x3C8, 8, 0, 0})
	DMember(bool)                                      bIsPlayerSelected                                           OFFSET(get<bool>, {0x3D0, 1, 0, 0})
	DMember(bool)                                      PlayerOnPad                                                 OFFSET(get<bool>, {0x3D1, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Pad                                                     OFFSET(get<T>, {0x3D8, 8, 0, 0})
	DMember(bool)                                      DebugFakePlayer                                             OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(int32_t)                                   DebugFakePlayerID_                                          OFFSET(get<int32_t>, {0x3E4, 4, 0, 0})
	CMember(UMulticastDelegate)                        Debug_OnFriendLFGRequest                                    OFFSET(get<T>, {0x3E8, 16, 0, 0})
	DMember(bool)                                      PlayerBeingRemoved                                          OFFSET(get<bool>, {0x3F8, 1, 0, 0})
	CMember(UOverlay*)                                 OverlayEmptySpot                                            OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UOverlay*)                                 OverlayInputAction                                          OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(ULobbyPlayerPadTop_C*)                     Top                                                         OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(ULobbyPlayerPadGadgets_C*)                 Gadgets                                                     OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(ULobbyPlayerAddPlayer_C*)                  PlayerAdd                                                   OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          LastAnimatedPlayerPawn                                      OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(ULobbyPlayerPadBottom_C*)                  BattlePassWidget                                            OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UAthena_PartySuggestion_C*)                UI_PartySuggestion                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(bool)                                      bAllowPartySuggestions                                      OFFSET(get<bool>, {0x440, 1, 0, 0})
	DMember(float)                                     OffsetLobbyAddPlayer                                        OFFSET(get<float>, {0x444, 4, 0, 0})
	DMember(bool)                                      bPlayerPodiumHovered                                        OFFSET(get<bool>, {0x448, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Pad_Light_Ring                                          OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Top_Light_Ring                                          OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(bool)                                      FxActive                                                    OFFSET(get<bool>, {0x460, 1, 0, 0})
	CMember(UAthena_PartySuggestion_TempFix_C*)        UIPartySuggestionXboxTempFix                                OFFSET(get<T>, {0x468, 8, 0, 0})
	DMember(bool)                                      EnableXboxPartySuggestionFix                                OFFSET(get<bool>, {0x470, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAccept
	// void OnPartySuggestionAccept(int32_t PlayerID);                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionChanged
	// void OnPartySuggestionChanged(int32_t SlotIndex, FFortPartySuggestion& FortPartySuggestion);                             // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionRemoved
	// void OnPartySuggestionRemoved(int32_t SlotIndex);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionUpdated
	// void OnPartySuggestionUpdated(int32_t SlotIndex, FFortPartySuggestion& FortPartySuggestion);                             // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartySuggestionAdded
	// void OnPartySuggestionAdded(int32_t SlotIndex, FFortPartySuggestion& FortPartySuggestion);                               // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Refresh Lights
	// void Refresh Lights(FFortTeamMemberInfo Team Info);                                                                      // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnPartyDataChanged
	// void OnPartyDataChanged(FFortTeamMemberInfo& MemberInfo);                                                                // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.CompletedQuestPrerequisites
	// void CompletedQuestPrerequisites(bool& bCompleted);                                                                      // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.IsInLobby
	// void IsInLobby(bool& IsInLobby);                                                                                         // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.PlayLobbyAnimation
	// void PlayLobbyAnimation(int32_t PartyMemberIndex);                                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyDisconnected
	// void OnLobbyDisconnected();                                                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.RefreshWidgets
	// void RefreshWidgets();                                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeWidgets
	// void InitializeWidgets();                                                                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnhovered
	// void OnLobbyPlayerUnhovered(int32_t PlayerIndex);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberStateChanged
	// void OnTeamMemberStateChanged(FFortTeamMemberInfo TeamMemberInfo);                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberRemoved
	// void OnTeamMemberRemoved(int32_t TeamMemberRemovedInt);                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnTeamMemberAdded
	// void OnTeamMemberAdded(FFortTeamMemberInfo TeamMemberInfo);                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnFrontEndCameraChanged
	// void OnFrontEndCameraChanged(EFrontEndCamera NewCamera, EFrontEndCamera OldCamera);                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyStarted
	// void OnLobbyStarted();                                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializePadUI
	// void InitializePadUI();                                                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Initialize
	// void Initialize();                                                                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.InitializeContextEvents
	// void InitializeContextEvents();                                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerUnselected
	// void OnLobbyPlayerUnselected(int32_t PlayerIndex);                                                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerSelected
	// void OnLobbyPlayerSelected(int32_t PlayerIndex);                                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnLobbyPlayerHovered
	// void OnLobbyPlayerHovered(int32_t PlayerIndex);                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabClosed
	// void HandleClientEvent_StoreTabClosed(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);         // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.HandleClientEvent_StoreTabSelected
	// void HandleClientEvent_StoreTabSelected(UObject* EventSource, UObject* EventFocus, FFortClientEvent& ClientEvent);       // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.OnHotfixApplied
	// void OnHotfixApplied();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.ExecuteUbergraph_PartyCharacterPlacementHelper
	// void ExecuteUbergraph_PartyCharacterPlacementHelper(int32_t EntryPoint);                                                 // [0x154a140] HasDefaults          
	// Function /Game/Environments/FrontEnd/Blueprints/PartyCharacterPlacementHelper.PartyCharacterPlacementHelper_C.Debug_OnFriendLFGRequest__DelegateSignature
	// void Debug_OnFriendLFGRequest__DelegateSignature(int32_t PlayerIndex);                                                   // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C
/// Size: 0x0020 (0x0008B0 - 0x0008D0)
class AFortnitePartyHeroSelect_Camera_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2256;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	CMember(UCameraComponent*)                         CameraActor                                                 OFFSET(get<T>, {0x8B8, 8, 0, 0})
	DMember(bool)                                      MouseDown                                                   OFFSET(get<bool>, {0x8C0, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          CachedPawn                                                  OFFSET(get<T>, {0x8C8, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMousePress
	// void HandleMousePress();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.HandleMouseRelease
	// void HandleMouseRelease();                                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent(FKey Key);                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.InpActEvt_RightMouseButton_K2Node_InputKeyEvent
	// void InpActEvt_RightMouseButton_K2Node_InputKeyEvent(FKey Key);                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyHeroSelect_Camera.FortnitePartyHeroSelect_Camera_C.ExecuteUbergraph_FortnitePartyHeroSelect_Camera
	// void ExecuteUbergraph_FortnitePartyHeroSelect_Camera(int32_t EntryPoint);                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C
/// Size: 0x0020 (0x0008B0 - 0x0008D0)
class AFortnitePartyBackdrop_Camera_C : public AFortCameraBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2256;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x8B0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x8B8, 8, 0, 0})
	CMember(UClass*)                                   FortEntryMusic                                              OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(AFort_Entry_Music_Controller_BP_C*)        Fort_Entry_Music_Controller                                 OFFSET(get<T>, {0x8C8, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/FortnitePartyBackdrop_Camera.FortnitePartyBackdrop_Camera_C.ExecuteUbergraph_FortnitePartyBackdrop_Camera
	// void ExecuteUbergraph_FortnitePartyBackdrop_Camera(int32_t EntryPoint);                                                  // [0x154a140] None                 
};

/// Class /Game/Environments/WorldMap/Blueprints/WM_Lights.WM_Lights_C
/// Size: 0x0030 (0x000318 - 0x000348)
class AWM_Lights_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UPointLightComponent*)                     PointLight1                                                 OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Game/Environments/WorldMap/Blueprints/WM_Lights.WM_Lights_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Lights.WM_Lights_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Lights.WM_Lights_C.WM-Lightcontrol
	// void WM-Lightcontrol(bool TurnOn);                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/WorldMap/Blueprints/WM_Lights.WM_Lights_C.ExecuteUbergraph_WM_Lights
	// void ExecuteUbergraph_WM_Lights(int32_t EntryPoint);                                                                     // [0x154a140] None                 
};

/// Class /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C
/// Size: 0x00AD (0x000318 - 0x0003C5)
class AVaultCharacterLightingBP_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 965;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_Mobile                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UPostProcessComponent*)                    PostProcess_LOWPC                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight_LOWPC                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLight_LOWPC                                      OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UDirectionalLightComponent*)               DirectionalLightMobile                                      OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLightLowMobil                                            OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(USkyLightComponent*)                       SkyLight                                                    OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent010                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent09                                            OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent08                                            OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent07                                            OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent06                                            OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent05                                            OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent04                                            OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent03                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent02                                            OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent01                                            OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(USpotLightComponent*)                      LightComponent0                                             OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(USceneComponent*)                          SharedRoot                                                  OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(bool)                                      DebugMobile_Lighting                                        OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	DMember(bool)                                      DebugLightingPC                                             OFFSET(get<bool>, {0x3C1, 1, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x3C2, 1, 0, 0})
	DMember(bool)                                      AlwaysOn                                                    OFFSET(get<bool>, {0x3C3, 1, 0, 0})
	DMember(bool)                                      DebugLighting_LOWDetailPC                                   OFFSET(get<bool>, {0x3C4, 1, 0, 0})


	/// Functions
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting_LOWDetail
	// void SwitchPCLighting_LOWDetail(bool Visibility);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchPCLighting
	// void SwitchPCLighting(bool Visibility);                                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.SwitchMobileLighting
	// void SwitchMobileLighting(bool Visibilty);                                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.UpdateSettings
	// void UpdateSettings();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ToggleLighting
	// void ToggleLighting();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.OVERRIDELIGHTING
	// void OVERRIDELIGHTING();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.LightControl
	// void LightControl(bool NewParam);                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Environments/FrontEnd/Blueprints/VaultCharacterLightingBP.VaultCharacterLightingBP_C.ExecuteUbergraph_VaultCharacterLightingBP
	// void ExecuteUbergraph_VaultCharacterLightingBP(int32_t EntryPoint);                                                      // [0x154a140] None                 
};

