
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: EntityCore
/// dependency: VerseAIBase
/// dependency: VerseFortnite

/// Class /Script/VerseNPC.InventoryComponentBase
/// Size: 0x0040 (0x000058 - 0x000098)
class UInventoryComponentBase : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(AFortInventory*)                           CachedFortInventory                                         OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(AFortPawn*)                                CachedFortPawn                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UBlackboardComponent*)                     CachedBlackboardComponent                                   OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/VerseNPC.LeashComponentBase
/// Size: 0x0000 (0x000070 - 0x000070)
class ULeashComponentBase : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/VerseNPC.NPCPerceptionComponentBase
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UNPCPerceptionComponentBase : public UAIPerceptionComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

