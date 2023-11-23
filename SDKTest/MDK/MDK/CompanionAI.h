
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: EntityCore
/// dependency: VerseFortnite

/// Class /Script/CompanionAI.PingComponentBase
/// Size: 0x0018 (0x000070 - 0x000088)
class UPingComponentBase : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UFortPawnComponent_AIBotPingCommand*)      CachedAIBotPingCommand                                      OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCUnconvertedEvent
	// void HandleOnNPCUnconvertedEvent(AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason);                      // [0x9fb7e84] Final|Native|Private 
	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCConvertedEvent
	// void HandleOnNPCConvertedEvent(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn);                                     // [0x9fb7dc4] Final|Native|Private 
};

