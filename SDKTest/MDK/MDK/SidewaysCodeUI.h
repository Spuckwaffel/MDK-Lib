
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/SidewaysCodeUI.SidewaysWidgetBase
/// Size: 0x0010 (0x000310 - 0x000320)
class USidewaysWidgetBase : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(AFortPlayspaceReplicatedState*)            ReplicatedState                                             ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(ESidewaysState)                            CurrentSidewaysState                                        ___ OFFSET(get<T>, {0x318, 1, 0, 0})
};

