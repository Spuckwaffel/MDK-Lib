
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteGame
/// dependency: VerseFortnite

/// Class /Script/VerseAIBase.AIActionsHandlerComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UAIActionsHandlerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/VerseAIBase.AIActionsComponent
/// Size: 0x0020 (0x000070 - 0x000090)
class UAIActionsComponent : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/VerseAIBase.AIBehaviorScriptComponent
/// Size: 0x0008 (0x000120 - 0x000128)
class UAIBehaviorScriptComponent : public UFortUserOptionContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UAIBehaviorScript*)                        AIBehaviorScript                                            OFFSET(get<T>, {0x120, 8, 0, 0})


	/// Functions
	// Function /Script/VerseAIBase.AIBehaviorScriptComponent.GetBehaviorScript
	// UAIBehaviorScript* GetBehaviorScript();                                                                                  // [0x953b3d4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VerseAIBase.AIPerceptionComponentBase
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UAIPerceptionComponentBase : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

