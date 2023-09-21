
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MeshNetwork
/// dependency: NetCore

/// Class /Script/VotingFramework.VoteBroadcasterComponent
/// Size: 0x03C0 (0x000150 - 0x000510)
class UVoteBroadcasterComponent : public UMeshNetworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	CMember(TArray<FVoteSessionSettings>)              VoteSessionSettingsList                                     ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FVoteSessionRuntimeArray)                  VoteSessionRuntimeList                                      ___ OFFSET(get<T>, {0x160, 288, 0, 0})
	SMember(FVoteRuntimeArray)                         VoteRuntimeList                                             ___ OFFSET(get<T>, {0x280, 288, 0, 0})
	SMember(FVoteSelectionResultsArray)                VoteResultsList                                             ___ OFFSET(get<T>, {0x3A0, 288, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, FCastedVote>)       PlayerCastedVotesMap                                        ___ OFFSET(get<T>, {0x4C0, 80, 0, 0})
};

/// Class /Script/VotingFramework.VoteDispatchSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVoteDispatchSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FVoteSelectionResults>)             VotingResults                                               ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/VotingFramework.VoteInitiationActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AVoteInitiationActor : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UVoteBroadcasterComponent*)                VoteBroadcasterComponent                                    ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/VotingFramework.VoteListenerComponent
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UVoteListenerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMulticastInlineDelegate)                  OnVoteSessionSetupEvent                                     ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSessionVotingEvent                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSetupEvent                                            ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteStartEvent                                            ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteChangeEvent                                           ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteEndEvent                                              ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSessionCompleteEvent                                  ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVoteSessionShutdownEvent                                  ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FGameplayTagContainer)                     RequestedVoteSessionIds                                     ___ OFFSET(get<T>, {0x120, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RequestedVoteIds                                            ___ OFFSET(get<T>, {0x140, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RequestedVoteSelectionIds                                   ___ OFFSET(get<T>, {0x160, 32, 0, 0})
};

/// Class /Script/VotingFramework.VoteResponderComponent
/// Size: 0x0070 (0x000180 - 0x0001F0)
class UVoteResponderComponent : public UVoteListenerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TArray<FVoteSelection>)                    SupportedVoteSelections                                     ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	DMember(bool)                                      bShouldLockVotingAfterCasted                                ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, FCastedVote>)       PlayerCastedVotesMap                                        ___ OFFSET(get<T>, {0x198, 80, 0, 0})
	SMember(FName)                                     ActiveVoteSessionId                                         ___ OFFSET(get<T>, {0x1E8, 4, 0, 0})
	SMember(FName)                                     ActiveVoteId                                                ___ OFFSET(get<T>, {0x1EC, 4, 0, 0})
};

/// Struct /Script/VotingFramework.CastedVote
/// Size: 0x000C (0x000000 - 0x00000C)
class FCastedVote : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     VoteSessionId                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     VoteId                                                      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     VoteSelectionId                                             ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelection
/// Size: 0x000C (0x000000 - 0x00000C)
class FVoteSelection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              VoteSessionId                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              VoteId                                                      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FGameplayTag)                              VoteSelectionId                                             ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelectionSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FVoteSelectionSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              VoteSelectionId                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     VoteSelectionText                                           ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FVoteSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VoteId                                                      ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bLocksSelection                                             ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FText)                                     VoteText                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<FVoteSelectionSettings>)            VoteSelections                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSessionSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FVoteSessionSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              VoteSessionId                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     VoteSessionText                                             ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<FVoteSettings>)                     VoteSettingsList                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(EVoteSessionNetworkType)                   NetworkType                                                 ___ OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelectionResults
/// Size: 0x002C (0x00000C - 0x000038)
class FVoteSelectionResults : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UWorld*)                                   WorldRef                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     VoteSessionId                                               ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     VoteId                                                      ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	SMember(FName)                                     VoteSelectionId                                             ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   ServerVoteTotal                                             ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   AllServersVoteTotal                                         ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Shadow_ServerVoteTotal                                      ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   Shadow_AllServersVoteTotal                                  ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSelectionResultsArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVoteSelectionResultsArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UWorld*)                                   WorldRef                                                    ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<FVoteSelectionResults>)             VoteSelectionResults                                        ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/VotingFramework.VoteRuntime
/// Size: 0x0034 (0x00000C - 0x000040)
class FVoteRuntime : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UWorld*)                                   WorldRef                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     VoteSessionId                                               ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     VoteId                                                      ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(TArray<FName>)                             VoteSelectionIds                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(EVoteState)                                VoteState                                                   ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FName)                                     VoteSelectionWinningResult                                  ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FName)                                     Shadow_VoteSelectionWinningResult                           ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(EVoteState)                                Shadow_VoteState                                            ___ OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Struct /Script/VotingFramework.VoteRuntimeArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVoteRuntimeArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UWorld*)                                   WorldRef                                                    ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<FVoteRuntime>)                      VotingResults                                               ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSessionRuntime
/// Size: 0x001C (0x00000C - 0x000028)
class FVoteSessionRuntime : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     VoteSessionId                                               ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	CMember(EVoteSessionNetworkType)                   NetworkType                                                 ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EVoteSessionState)                         VoteSessionState                                            ___ OFFSET(get<T>, {0x11, 1, 0, 0})
	SMember(FName)                                     CurrentVoteId                                               ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(UWorld*)                                   WorldRef                                                    ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(EVoteSessionState)                         Shadow_VoteSessionState                                     ___ OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/VotingFramework.VoteSessionRuntimeArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FVoteSessionRuntimeArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UWorld*)                                   WorldRef                                                    ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<FVoteSessionRuntime>)               VotingSessions                                              ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Enum /Script/VotingFramework.EVoteState
/// Size: 0x05
enum EVoteState : uint8_t
{
	EVoteState__None0                                                                = 0,
	EVoteState__Setup1                                                               = 1,
	EVoteState__Active2                                                              = 2,
	EVoteState__Completed3                                                           = 3,
	EVoteState__EVoteState_MAX4                                                      = 4
};

/// Enum /Script/VotingFramework.EVoteSessionState
/// Size: 0x06
enum EVoteSessionState : uint8_t
{
	EVoteSessionState__None0                                                         = 0,
	EVoteSessionState__Setup1                                                        = 1,
	EVoteSessionState__Voting2                                                       = 2,
	EVoteSessionState__Complete3                                                     = 3,
	EVoteSessionState__Shutdown4                                                     = 4,
	EVoteSessionState__EVoteSessionState_MAX5                                        = 5
};

/// Enum /Script/VotingFramework.EVoteSessionNetworkType
/// Size: 0x04
enum EVoteSessionNetworkType : uint8_t
{
	EVoteSessionNetworkType__NotDetermined0                                          = 0,
	EVoteSessionNetworkType__DedicatedServer1                                        = 1,
	EVoteSessionNetworkType__MeshNetwork2                                            = 2,
	EVoteSessionNetworkType__EVoteSessionNetworkType_MAX3                            = 3
};

