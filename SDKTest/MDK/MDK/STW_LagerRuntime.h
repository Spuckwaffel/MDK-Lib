
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LagerRuntime

/// Class /Script/STW_LagerRuntime.FortQuestLivingWorldVolume
/// Size: 0x0050 (0x0005C0 - 0x000610)
class AFortQuestLivingWorldVolume : public AFortAthenaLivingWorldVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	SMember(FGameplayTagContainer)                     NoPlayerNeedsQuestFilterTags                                ___ OFFSET(get<T>, {0x5C0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     PlayerNeedsQuestFilterTags                                  ___ OFFSET(get<T>, {0x5E0, 32, 0, 0})
	CMember(UFortQuestItemDefinition*)                 RequiredQuest                                               ___ OFFSET(get<T>, {0x600, 8, 0, 0})
};

