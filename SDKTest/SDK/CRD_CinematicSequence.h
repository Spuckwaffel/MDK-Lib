/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CRD_CinematicSequence.

/// Class /Script/CRD_CinematicSequence.CinematicSequenceDeviceBase
/// Size: 0x0048 (0x000BB8 - 0x000C00)
class ACinematicSequenceDeviceBase : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
	CMember(ULevelSequence*)                           Sequence                                                    ___ OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(ALevelSequenceActor*)                      LevelSequenceActor                                          ___ OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(AFortPlayerController*)                    InstigatingController                                       ___ OFFSET(get<T>, {0xBE8, 8, 0, 0})
	DMember(char)                                      InstigatingTeam                                             ___ OFFSET(get<char>, {0xBF0, 1, 0, 0})
	DMember(bool)                                      bLoopPlayback                                               ___ OFFSET(get<bool>, {0xBF4, 1, 1, 0})
	DMember(bool)                                      bRestoreState                                               ___ OFFSET(get<bool>, {0xBF4, 1, 1, 1})
	DMember(bool)                                      bAutoPlay                                                   ___ OFFSET(get<bool>, {0xBF4, 1, 1, 2})
	CMember(EFortMinigameState)                        AutoPlayMinigameState                                       ___ OFFSET(get<T>, {0xBF8, 1, 0, 0})
	CMember(ECinematicSequenceVisibility)              Visibility                                                  ___ OFFSET(get<T>, {0xBF9, 1, 0, 0})
	DMember(bool)                                      bLevelSequenceActorAlwaysRelevant                           ___ OFFSET(get<bool>, {0xBFA, 1, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0xBFC, 4, 0, 0})
};

/// Enum /Script/CRD_CinematicSequence.ECinematicSequenceVisibility
/// Size: 0x04
enum ECinematicSequenceVisibility : uint8_t
{
	ECinematicSequenceVisibility__InstigatorOnly0                                    = 0,
	ECinematicSequenceVisibility__InstigatingTeam1                                   = 1,
	ECinematicSequenceVisibility__Everyone2                                          = 2,
	ECinematicSequenceVisibility__ECinematicSequenceVisibility_MAX3                  = 3
};

