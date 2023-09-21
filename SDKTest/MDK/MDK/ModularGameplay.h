
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ModularGameplay.GameFrameworkComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameFrameworkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.ControllerComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UControllerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.GameFrameworkComponentManager
/// Size: 0x0208 (0x000030 - 0x000238)
class UGameFrameworkComponentManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
};

/// Class /Script/ModularGameplay.GameFrameworkInitStateInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameFrameworkInitStateInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ModularGameplay.GameStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGameStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.PawnComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPawnComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/ModularGameplay.PlayerStateComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UPlayerStateComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ModularGameplay.ActorInitStateChangedParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FActorInitStateChangedParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   OwningActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     FeatureName                                                 OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(UObject*)                                  Implementer                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTag)                              FeatureState                                                OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

