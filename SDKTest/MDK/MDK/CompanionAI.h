
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: EntityCore
/// dependency: VerseFortnite

/// Class /Script/CompanionAI.PingComponentBase
/// Size: 0x0018 (0x000090 - 0x0000A8)
class UPingComponentBase : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UFortPawnComponent_AIBotPingCommand*)      CachedAIBotPingCommand                                      OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCUnconvertedEvent
	// void HandleOnNPCUnconvertedEvent(AFortPawn* UnconvertedFortPawn, EUnconvertReason UnconvertReason);                      // [0x990e82c] Final|Native|Private 
	// Function /Script/CompanionAI.PingComponentBase.HandleOnNPCConvertedEvent
	// void HandleOnNPCConvertedEvent(AFortPawn* InstigatorPawn, AFortPawn* ConvertedPawn);                                     // [0x990e76c] Final|Native|Private 
};

