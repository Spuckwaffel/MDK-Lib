/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayStateTreeModule.

/// Class /Script/GameplayStateTreeModule.StateTreeComponent
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UStateTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMulticastInlineDelegate)                  OnStateTreeRunStatusChanged                                 ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FStateTreeReference)                       StateTreeRef                                                ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	DMember(bool)                                      bStartLogicAutomatically                                    ___ OFFSET(get<bool>, {0x128, 1, 0, 0})
	SMember(FStateTreeInstanceData)                    InstanceData                                                ___ OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/GameplayStateTreeModule.StateTreeComponentSchema
/// Size: 0x0018 (0x000028 - 0x000040)
class UStateTreeComponentSchema : public UStateTreeSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   ContextActorClass                                           ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FStateTreeExternalDataDesc)                ContextActorDataDesc                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

