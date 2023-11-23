
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UControllerComponent_MatchQuests : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TArray<TScriptInterface>)                  QuestOffering                                               OFFSET(get<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests.Server_SetSelectedQuest
	// void Server_SetSelectedQuest(TScriptInterface<Class> Quest);                                                             // [0xa1c5b0c] Final|Net|NetReliableNative|Event|Private|NetServer 
	// Function /Script/MatchQuestsRuntime.ControllerComponent_MatchQuests.OnRep_QuestOffering
	// void OnRep_QuestOffering();                                                                                              // [0xa1c5af8] Final|Native|Private|Const 
};

