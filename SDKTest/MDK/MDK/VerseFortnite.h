
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: VerseGameplayTags

/// Class /Script/VerseFortnite.VerseActorPayloadWrapper
/// Size: 0x0008 (0x000290 - 0x000298)
class AVerseActorPayloadWrapper : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteBRTeamCollection
/// Size: 0x0068 (0x000028 - 0x000090)
class UVerseFortniteBRTeamCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteMinigameTeamCollection
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseFortniteMinigameTeamCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/VerseFortnite.AIComponent
/// Size: 0x0018 (0x000078 - 0x000090)
class UAIComponent : public UEntityEnableableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(AFortPawn*)                                CachedPawn                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(AAIController*)                            CachedAIController                                          OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/VerseFortnite.AIBehaviorScript
/// Size: 0x0000 (0x000090 - 0x000090)
class UAIBehaviorScript : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteActorWrapper
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseFortniteActorWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteCharacter
/// Size: 0x0008 (0x000048 - 0x000050)
class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/VerseFortnite.TaggedObjectQueryWorldSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspace
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UVerseFortnitePlayspaceExtensionBase*>) Extensions                                              OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigameSetUp
	// void OnMinigameSetUp(AFortMinigame* Minigame);                                                                           // [0x96f6274] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
	// void OnMinigamePlayerAdded(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);                                           // [0x96f5f24] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspaceExtensionBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortnitePlayspaceExtensionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteSubsystem
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UVerseFortniteSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TMap<TWeakObjectPtr, UVerseFortniteActorWrapper*>) ActorToWrapperMap                                   OFFSET(get<T>, {0x30, 80, 0, 0})
};

