
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C
/// Size: 0x0058 (0x000318 - 0x000370)
class AFort_Entry_Music_Controller_BP_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UAudioComponent*)                          MenuMusic_B                                                 OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UAudioComponent*)                          MenuMusic_A                                                 OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UAudioComponent*)                          Hexmap_Music                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UAudioComponent*)                          Homebase_Music                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UAudioComponent*)                          OverView_Music                                              OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UAudioComponent*)                          LobbyMusic                                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UAudioComponent*)                          LlamaVO                                                     OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UAudioComponent*)                          LoginMusic                                                  OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(float)                                     FadeOutTime                                                 OFFSET(get<float>, {0x360, 4, 0, 0})
	CMember(USoundBase*)                               CurrentMusic                                                OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Login_FadeIn
	// void Music_Login_FadeIn();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Store_FadeIn
	// void Music_Store_FadeIn();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Lobby_FadeIn
	// void Music_Lobby_FadeIn();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_WorldOverview_FadeIn
	// void Music_WorldOverview_FadeIn();                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_HomeBase_FadeIn
	// void Music_HomeBase_FadeIn();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Hexmap_FadeIn
	// void Music_Hexmap_FadeIn();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Heroes_FadeIn
	// void Music_Heroes_FadeIn();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Vault_FadeIn
	// void Music_Vault_FadeIn();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Store_CardIntro_Fadein
	// void Music_Store_CardIntro_Fadein();                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Store_Transition_To_Purchase
	// void Store_Transition_To_Purchase();                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Store_Llama_HangingOut
	// void Store_Llama_HangingOut();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Store_CardpackSummaryOpenAndLoop
	// void Store_CardpackSummaryOpenAndLoop();                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Store_HitLlamaAndLoop
	// void Store_HitLlamaAndLoop();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Store_Intro_Loop
	// void Store_Intro_Loop();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.VBucks_Menu_Enter
	// void VBucks_Menu_Enter();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.On Sub Game Changed
	// void On Sub Game Changed(ESubGame SubGame);                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Music_Lobby_Athena_FadeIn
	// void Music_Lobby_Athena_FadeIn();                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.Change Music
	// void Change Music(USoundBase* New Music);                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Sounds/Fort_Audio_Blueprints/Fort_Entry_Music_Controller_BP.Fort_Entry_Music_Controller_BP_C.ExecuteUbergraph_Fort_Entry_Music_Controller_BP
	// void ExecuteUbergraph_Fort_Entry_Music_Controller_BP(int32_t EntryPoint);                                                // [0x154a140] None                 
};

