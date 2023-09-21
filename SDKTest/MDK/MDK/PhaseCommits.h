
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/PhaseCommits.PhaseCommitFlow_Coordinator
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhaseCommitFlow_Coordinator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PhaseCommits.PhaseCommitFlow_Participant
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhaseCommitFlow_Participant : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/PhaseCommits.ECoordinatorFlowState
/// Size: 0x08
enum ECoordinatorFlowState : uint8_t
{
	ECoordinatorFlowState__NONE0                                                     = 0,
	ECoordinatorFlowState__Initializing1                                             = 1,
	ECoordinatorFlowState__WaitingForRequest2                                        = 2,
	ECoordinatorFlowState__WaitingForConsensus_BeginChange3                          = 3,
	ECoordinatorFlowState__WaitingForConsensus_Precommit4                            = 4,
	ECoordinatorFlowState__Consensus_Success5                                        = 5,
	ECoordinatorFlowState__Consensus_Failed6                                         = 6,
	ECoordinatorFlowState__ECoordinatorFlowState_MAX7                                = 7
};

/// Enum /Script/PhaseCommits.EParticipantFlowState
/// Size: 0x06
enum EParticipantFlowState : uint8_t
{
	EParticipantFlowState__NONE0                                                     = 0,
	EParticipantFlowState__Initializing1                                             = 1,
	EParticipantFlowState__WaitingFor_BroadcastBeginChange2                          = 2,
	EParticipantFlowState__WaitingFor_Precommit3                                     = 3,
	EParticipantFlowState__WaitingFor_Commit4                                        = 4,
	EParticipantFlowState__EParticipantFlowState_MAX5                                = 5
};

/// Enum /Script/PhaseCommits.EPhaseCommit
/// Size: 0x04
enum EPhaseCommit : uint8_t
{
	EPhaseCommit__One0                                                               = 0,
	EPhaseCommit__Two1                                                               = 1,
	EPhaseCommit__Three2                                                             = 2,
	EPhaseCommit__EPhaseCommit_MAX3                                                  = 3
};

/// Enum /Script/PhaseCommits.ECoordinatorBroadcasts
/// Size: 0x07
enum ECoordinatorBroadcasts : uint8_t
{
	ECoordinatorBroadcasts__ReadyForRequests0                                        = 0,
	ECoordinatorBroadcasts__BeginStateChange_TwoPhase1                               = 1,
	ECoordinatorBroadcasts__BeginStateChange_ThreePhase2                             = 2,
	ECoordinatorBroadcasts__PreCommit3                                               = 3,
	ECoordinatorBroadcasts__Success4                                                 = 4,
	ECoordinatorBroadcasts__Aborted5                                                 = 5,
	ECoordinatorBroadcasts__ECoordinatorBroadcasts_MAX6                              = 6
};

/// Enum /Script/PhaseCommits.EParticipantResponses
/// Size: 0x08
enum EParticipantResponses : uint8_t
{
	EParticipantResponses__NONE0                                                     = 0,
	EParticipantResponses__AcceptedBegin1                                            = 1,
	EParticipantResponses__RejectedBegin2                                            = 2,
	EParticipantResponses__AcceptedPreCommit3                                        = 3,
	EParticipantResponses__RejectedPreCommit4                                        = 4,
	EParticipantResponses__ReceivedSuccess5                                          = 5,
	EParticipantResponses__ReceivedAbort6                                            = 6,
	EParticipantResponses__EParticipantResponses_MAX7                                = 7
};

