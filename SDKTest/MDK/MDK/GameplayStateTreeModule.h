
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: StateTreeModule

/// Class /Script/GameplayStateTreeModule.StateTreeComponent
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UStateTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMulticastInlineDelegate)                  OnStateTreeRunStatusChanged                                 OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FStateTreeReference)                       StateTreeRef                                                OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	DMember(bool)                                      bStartLogicAutomatically                                    OFFSET(get<bool>, {0x128, 1, 0, 0})
	SMember(FStateTreeInstanceData)                    InstanceData                                                OFFSET(getStruct<T>, {0x130, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SetStartLogicAutomatically
	// void SetStartLogicAutomatically(bool bInStartLogicAutomatically);                                                        // [0x9cf9428] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.SendStateTreeEvent
	// void SendStateTreeEvent(FStateTreeEvent& Event);                                                                         // [0x9cf933c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayStateTreeModule.StateTreeComponent.GetStateTreeRunStatus
	// EStateTreeRunStatus GetStateTreeRunStatus();                                                                             // [0x9cf9304] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GameplayStateTreeModule.StateTreeComponentSchema
/// Size: 0x0018 (0x000028 - 0x000040)
class UStateTreeComponentSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   ContextActorClass                                           OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FStateTreeExternalDataDesc)                ContextActorDataDesc                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

