/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Curie.

/// Struct /Script/Curie.CurieContainerHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FCurieContainerHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/Curie.CurieMaterialDefinitionBase
/// Size: 0x0080 (0x000008 - 0x000088)
class FCurieMaterialDefinitionBase : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     ElementalImmunities                                         ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ElementAttachmentImmunities                                 ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ElementsAllowedWhenCannotBeDamaged                          ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	SMember(FGameplayTagContainer)                     MaterialProperties                                          ___ OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/Curie.CurieElementDefinitionBase
/// Size: 0x0078 (0x000008 - 0x000080)
class FCurieElementDefinitionBase : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UClass*)                                   ElementAllocationHandler                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UClass*>)                           ElementAttachHandlers                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(UClass*)                                   ElementAttachConditionHandler                               ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<UClass*>)                           ElementInteractHandlers                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UClass*>)                           ElementMaterialInteractHandlers                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UClass*>)                           ElementContainerInteractHandlers                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FGameplayTagContainer)                     ElementalImmunities                                         ___ OFFSET(get<T>, {0x58, 32, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x78, 1, 1, 0})
};

/// Struct /Script/Curie.CurieEntityStateDefinitionBase
/// Size: 0x0010 (0x000008 - 0x000018)
class FCurieEntityStateDefinitionBase : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   StateBehaviorClass                                          ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x10, 1, 1, 0})
};

/// Struct /Script/Curie.CurieElementAttachHandlersContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurieElementAttachHandlersContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UCurieElementAttachHandler*>)       Handlers                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Curie.CurieElementAttachConditionHandlersContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurieElementAttachConditionHandlersContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UCurieElementAttachConditionHandler*>) Handlers                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Curie.CurieElementInteractWithElementHandlersContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurieElementInteractWithElementHandlersContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UCurieElementInteractWithElementHandler*>) Handlers                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Curie.CurieElementInteractWithMaterialHandlersContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurieElementInteractWithMaterialHandlersContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UCurieElementInteractWithMaterialHandler*>) Handlers                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Curie.CurieElementInteractWithContainerHandlersContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurieElementInteractWithContainerHandlersContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UCurieElementInteractWithContainerHandler*>) Handlers                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Curie.CurieInteractParamsHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FCurieInteractParamsHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/Curie.CurieElementPairKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FCurieElementPairKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Curie.CurieManagerComponentEntry
/// Size: 0x0018 (0x000008 - 0x000020)
class FCurieManagerComponentEntry : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsActive                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ECurieManagerComponentPriority)            Priority                                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(UClass*)                                   ManagerType                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UCurieManagerComponentConfig*)             Config                                                      ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Curie.CurieInteractHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FCurieInteractHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/Curie.CurieEffectContainer
/// Size: 0x0050 (0x000000 - 0x000050)
class FCurieEffectContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         TargetFilter                                                ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	CMember(UClass*)                                   GameplayEffect                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/Curie.CurieStateHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FCurieStateHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/Curie.CurieElementHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FCurieElementHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Class /Script/Curie.CurieComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UCurieComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/Curie.CurieElementGameplayEffectOwner
/// Size: 0x0000 (0x000028 - 0x000028)
class UCurieElementGameplayEffectOwner : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Curie.CurieEntityStateBehavior
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UCurieEntityStateBehavior : public UCurieElementGameplayEffectOwner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayTagContainer)                     RequiredAttachedElements                                    ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredInteractingElements                                 ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AllowedAttachmentEntityTypes                                ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OnBeginEffects                                              ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OngoingEffects                                              ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OnEndEffects                                                ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(bool)                                      bShouldDetach                                               ___ OFFSET(get<bool>, {0xB8, 1, 1, 0})
	DMember(bool)                                      bSkipExecuteAttachDetach                                    ___ OFFSET(get<bool>, {0xB8, 1, 1, 1})
};

/// Class /Script/Curie.CurieGlobals
/// Size: 0x0028 (0x000028 - 0x000050)
class UCurieGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bEnableCurie                                                ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSoftClassPath)                            CurieGlobalsClassName                                       ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(UCurieManager*)                            RegisteredCurieManager                                      ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/Curie.CurieElementAllocationHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UCurieElementAllocationHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Curie.CurieElementInteractWithElementHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UCurieElementInteractWithElementHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ECurieHandlerPriority)                     HandlerPriority                                             ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ECurieHandlerBehavior)                     HandlerBehavior                                             ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FGameplayTag)                              ElementTag                                                  ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/Curie.CurieElementInteractWithMaterialHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UCurieElementInteractWithMaterialHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ECurieHandlerPriority)                     HandlerPriority                                             ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ECurieHandlerBehavior)                     HandlerBehavior                                             ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FGameplayTag)                              ElementTag                                                  ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/Curie.CurieElementAttachHandler
/// Size: 0x0038 (0x000028 - 0x000060)
class UCurieElementAttachHandler : public UCurieElementGameplayEffectOwner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(ECurieHandlerPriority)                     HandlerPriority                                             ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ECurieHandlerBehavior)                     HandlerBehavior                                             ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FGameplayTag)                              ElementTag                                                  ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OnBeginAttachmentEffects                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OngoingAttachmentEffects                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OnEndAttachmentEffects                                      ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Curie.CurieElementAttachConditionHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UCurieElementAttachConditionHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ECurieHandlerPriority)                     HandlerPriority                                             ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FGameplayTag)                              ElementTag                                                  ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/Curie.CurieElementInteractWithContainerHandler
/// Size: 0x0048 (0x000028 - 0x000070)
class UCurieElementInteractWithContainerHandler : public UCurieElementGameplayEffectOwner
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(ECurieHandlerPriority)                     HandlerPriority                                             ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ECurieHandlerBehavior)                     HandlerBehavior                                             ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FGameplayTag)                              ElementTag                                                  ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OnInstantInteractionEffects                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OnBeginInteractionEffects                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OngoingInteractionEffects                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FCurieEffectContainer>)             OnEndInteractionEffects                                     ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/Curie.CurieInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCurieInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Curie.CurieManager
/// Size: 0x0590 (0x0000A0 - 0x000630)
class UCurieManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(UClass*)                                   CurieComponentClass                                         ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FName)                                     CurieManagerRegistryName                                    ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     MaterialDataRegistryName                                    ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     ElementDataRegistryName                                     ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     EntityStateDataRegistryName                                 ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	CMember(TMap<FGameplayTag, UCurieElementAllocationHandler*>) ElementAllocationHandlers                         ___ OFFSET(get<T>, {0x350, 80, 0, 0})
	CMember(TMap<FGameplayTag, FCurieElementAttachHandlersContainer>) ElementAttachmentHandlers                    ___ OFFSET(get<T>, {0x3A0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FCurieElementAttachConditionHandlersContainer>) ElementAttachmentConditionHandlers  ___ OFFSET(get<T>, {0x3F0, 80, 0, 0})
	CMember(TMap<FCurieElementPairKey, FCurieElementInteractWithElementHandlersContainer>) ElementInteractWithElementHandlers ___ OFFSET(get<T>, {0x440, 80, 0, 0})
	CMember(TMap<FGameplayTag, FCurieElementInteractWithMaterialHandlersContainer>) ElementInteractWithMaterialHandlers ___ OFFSET(get<T>, {0x490, 80, 0, 0})
	CMember(TMap<FGameplayTag, FCurieElementInteractWithContainerHandlersContainer>) ElementInteractWithContainerHandlers ___ OFFSET(get<T>, {0x4E0, 80, 0, 0})
	CMember(TArray<UCurieManagerComponent*>)           CurieManagerComponents                                      ___ OFFSET(get<T>, {0x530, 16, 0, 0})
};

/// Class /Script/Curie.CurieManagerComponentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCurieManagerComponentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Curie.CurieManagerComponentConfig
/// Size: 0x0010 (0x000030 - 0x000040)
class UCurieManagerComponentConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     ConfigName                                                  ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FGameplayTag)                              ConfigTag                                                   ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Class /Script/Curie.CurieManagerComponent
/// Size: 0x0008 (0x000028 - 0x000030)
class UCurieManagerComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UCurieManagerComponentConfig*)             CachedConfig                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Game/Curie/ElementHandlers/FireAttachConditionHandler.FireAttachConditionHandler_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UFireAttachConditionHandler_C : public UFortCurieElementAttachConditionHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Curie/ElementHandlers/FireSelfInteractHandler.FireSelfInteractHandler_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UFireSelfInteractHandler_C : public UFortCurieElementInteractWithSameElementHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/Curie/ElementHandlers/FireAllocationHandler.FireAllocationHandler_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UFireAllocationHandler_C : public UFortCurieElementAllocationHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Curie/ElementHandlers/WaterSelfInteractHandler.WaterSelfInteractHandler_C
/// Size: 0x0000 (0x000030 - 0x000030)
class UWaterSelfInteractHandler_C : public UFortCurieElementInteractWithSameElementHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Game/Curie/GameplayEffects/GE_CurieElementalStatus_Burning.GE_CurieElementalStatus_Burning_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_CurieElementalStatus_Burning_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Curie/ElementHandlers/WaterFireInteractHandler.WaterFireInteractHandler_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UWaterFireInteractHandler_C : public UFortCurieElementInteractWithElementHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Curie/ElementHandlers/FireWaterInteractHandler.FireWaterInteractHandler_C
/// Size: 0x0000 (0x000080 - 0x000080)
class UFireWaterInteractHandler_C : public UFortCurieElementInteractWithElementHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Game/Curie/ElementHandlers/WaterMaterialInteractHandler.WaterMaterialInteractHandler_C
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UWaterMaterialInteractHandler_C : public UFortCurieElementInteractWithMaterialHandlerWater
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Game/Curie/ElementHandlers/FireAttachHandler.FireAttachHandler_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UFireAttachHandler_C : public UFortCurieElementAttachHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Game/Curie/GameplayEffects/GE_Curie_FireInteract_Vehicle.GE_Curie_FireInteract_Vehicle_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Curie_FireInteract_Vehicle_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Curie/ElementHandlers/FireContainerInteractHandler.FireContainerInteractHandler_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UFireContainerInteractHandler_C : public UFortCurieElementInteractWithContainerHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Game/Curie/ElementHandlers/FireMaterialInteractHandler.FireMaterialInteractHandler_C
/// Size: 0x0000 (0x000090 - 0x000090)
class UFireMaterialInteractHandler_C : public UFortCurieElementInteractWithMaterialHandlerFire
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Game/Curie/ElementHandlers/WaterAttachConditionHandler.WaterAttachConditionHandler_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UWaterAttachConditionHandler_C : public UFortCurieElementAttachConditionHandlerWater
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Curie/States/CurieEntityStateBehavior_ElemInteraction_Fire.CurieEntityStateBehavior_ElemInteraction_Fire_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCurieEntityStateBehavior_ElemInteraction_Fire_C : public UFortCurieEntityStateBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Game/Curie/States/CurieEntityStateBehavior_ElemAttached_Fire.CurieEntityStateBehavior_ElemAttached_Fire_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCurieEntityStateBehavior_ElemAttached_Fire_C : public UFortCurieEntityStateBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Game/Curie/States/CurieEntityStateBehavior_ElemInteraction_Water.CurieEntityStateBehavior_ElemInteraction_Water_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCurieEntityStateBehavior_ElemInteraction_Water_C : public UFortCurieEntityStateBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Game/Curie/States/CurieEntityStateBehavior_Drying.CurieEntityStateBehavior_Drying_C
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UCurieEntityStateBehavior_Drying_C : public UFortCurieEntityStateBehavior_Drying
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Game/Curie/States/CurieEntityStateBehavior_FullyIgnited.CurieEntityStateBehavior_FullyIgnited_C
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCurieEntityStateBehavior_FullyIgnited_C : public UFortCurieEntityStateBehavior_Burning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Enum /Script/Curie.ECurieHandlerBehavior
/// Size: 0x03
enum ECurieHandlerBehavior : uint8_t
{
	ECurieHandlerBehavior__Handler_Add0                                              = 0,
	ECurieHandlerBehavior__Handler_Replace1                                          = 1,
	ECurieHandlerBehavior__Handler_MAX2                                              = 2
};

/// Enum /Script/Curie.ECurieHandlerPriority
/// Size: 0x12
enum ECurieHandlerPriority : uint8_t
{
	ECurieHandlerPriority__Priority0                                                 = 1,
	ECurieHandlerPriority__Priority1                                                 = 2,
	ECurieHandlerPriority__Priority2                                                 = 3,
	ECurieHandlerPriority__Priority3                                                 = 4,
	ECurieHandlerPriority__Priority4                                                 = 5,
	ECurieHandlerPriority__Priority5                                                 = 6,
	ECurieHandlerPriority__Priority6                                                 = 7,
	ECurieHandlerPriority__Priority7                                                 = 8,
	ECurieHandlerPriority__Priority8                                                 = 9,
	ECurieHandlerPriority__Priority9                                                 = 10,
	ECurieHandlerPriority__Priority_Default10                                        = 11,
	ECurieHandlerPriority__Priority_MAX11                                            = 12
};

/// Enum /Script/Curie.ECurieManagerComponentPriority
/// Size: 0x12
enum ECurieManagerComponentPriority : uint8_t
{
	ECurieManagerComponentPriority__Priority0                                        = 1,
	ECurieManagerComponentPriority__Priority1                                        = 2,
	ECurieManagerComponentPriority__Priority2                                        = 3,
	ECurieManagerComponentPriority__Priority3                                        = 4,
	ECurieManagerComponentPriority__Priority4                                        = 5,
	ECurieManagerComponentPriority__Priority5                                        = 6,
	ECurieManagerComponentPriority__Priority6                                        = 7,
	ECurieManagerComponentPriority__Priority7                                        = 8,
	ECurieManagerComponentPriority__Priority8                                        = 9,
	ECurieManagerComponentPriority__Priority9                                        = 10,
	ECurieManagerComponentPriority__Priority_Default10                               = 11,
	ECurieManagerComponentPriority__Priority_MAX11                                   = 12
};

/// Enum /Script/Curie.ECurieEntityType
/// Size: 0x04
enum ECurieEntityType : uint8_t
{
	ECurieEntityType__Invalid0                                                       = 0,
	ECurieEntityType__Material1                                                      = 1,
	ECurieEntityType__Element2                                                       = 2,
	ECurieEntityType__ECurieEntityType_MAX3                                          = 3
};

