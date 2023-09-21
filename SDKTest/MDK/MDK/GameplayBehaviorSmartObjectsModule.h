
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTasks
/// dependency: SmartObjectsModule

/// Class /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectBehaviorDefinition
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayBehaviorSmartObjectBehaviorDefinition : public USmartObjectBehaviorDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UGameplayBehaviorConfig*)                  GameplayBehaviorConfig                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
/// Size: 0x0070 (0x000068 - 0x0000D8)
class UAITask_UseGameplayBehaviorSmartObject : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FMulticastInlineDelegate)                  OnSucceeded                                                 ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoveToFailed                                              ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(UAITask_MoveTo*)                           MoveToTask                                                  ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(UGameplayBehavior*)                        GameplayBehavior                                            ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.BTTask_FindAndUseGameplayBehaviorSmartObject
/// Size: 0x00A8 (0x000070 - 0x000118)
class UBTTask_FindAndUseGameplayBehaviorSmartObject : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        ___ OFFSET(get<T>, {0x70, 72, 0, 0})
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  ___ OFFSET(get<T>, {0xB8, 72, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x100, 4, 0, 0})
};

/// Class /Script/GameplayBehaviorSmartObjectsModule.GameplayBehaviorSmartObjectsBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayBehaviorSmartObjectsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

