
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/CommonConversationRuntime.ConversationNode
/// Size: 0x0030 (0x000028 - 0x000058)
class UConversationNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UObject*)                                  EvalWorldContextObj                                         ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FString)                                   NodeName                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FGuid)                                     Compiled_NodeGUID                                           ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UConversationNode*)                        ParentNode                                                  ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationSubNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationSubNode : public UConversationNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/CommonConversationRuntime.ConversationChoiceNode
/// Size: 0x0038 (0x000058 - 0x000090)
class UConversationChoiceNode : public UConversationSubNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FText)                                     DefaultChoiceDisplayText                                    ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ChoiceTags                                                  ___ OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationContextHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UConversationContextHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonConversationRuntime.ConversationDatabase
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UConversationDatabase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(int32_t)                                   CompilerVersion                                             ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TMap<FGuid, UConversationNode*>)           ReachableNodeMap                                            ___ OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TArray<FConversationEntryList>)            EntryTags                                                   ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FGameplayTagContainer)                     ExitTags                                                    ___ OFFSET(get<T>, {0x98, 32, 0, 0})
	CMember(TArray<FGuid>)                             InternalNodeIds                                             ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FGuid>)                             LinkedToNodeIds                                             ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FCommonDialogueBankParticipant>)    Speakers                                                    ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationNodeWithLinks
/// Size: 0x0010 (0x000058 - 0x000068)
class UConversationNodeWithLinks : public UConversationNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FGuid>)                             OutputConnections                                           ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationEntryPointNode
/// Size: 0x0008 (0x000068 - 0x000070)
class UConversationEntryPointNode : public UConversationNodeWithLinks
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTag)                              EntryTag                                                    ___ OFFSET(get<T>, {0x68, 4, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationInstance
/// Size: 0x0180 (0x000028 - 0x0001A8)
class UConversationInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FConversationParticipants)                 Participants                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UConversationLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonConversationRuntime.ConversationTaskNode
/// Size: 0x0018 (0x000068 - 0x000080)
class UConversationTaskNode : public UConversationNodeWithLinks
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<UConversationSubNode*>)             SubNodes                                                    ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bIgnoreRequirementsWhileAdvancingConversations              ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationLinkNode
/// Size: 0x0008 (0x000080 - 0x000088)
class UConversationLinkNode : public UConversationTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              RemoteEntryTag                                              ___ OFFSET(get<T>, {0x80, 4, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationParticipantComponent
/// Size: 0x0100 (0x0000A0 - 0x0001A0)
class UConversationParticipantComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(int32_t)                                   ConversationsActive                                         ___ OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	CMember(UConversationInstance*)                    Auth_CurrentConversation                                    ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TArray<UConversationInstance*>)            Auth_Conversations                                          ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FClientConversationMessagePayload)         LastMessage                                                 ___ OFFSET(get<T>, {0x120, 120, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationRegistry
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UConversationRegistry : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FNetSerializeScriptStructCache_ConvVersion) ConversationChoiceDataStructCache                          ___ OFFSET(get<T>, {0x38, 96, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationRequirementNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationRequirementNode : public UConversationSubNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/CommonConversationRuntime.ConversationSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UConversationSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ConversationInstanceClass                                   ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/CommonConversationRuntime.ConversationSideEffectNode
/// Size: 0x0000 (0x000058 - 0x000058)
class UConversationSideEffectNode : public UConversationSubNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/CommonConversationRuntime.ClientConversationMessagePayload
/// Size: 0x0078 (0x000000 - 0x000078)
class FClientConversationMessagePayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FClientConversationMessage)                Message                                                     ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FConversationParticipants)                 Participants                                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FConversationNodeHandle)                   CurrentNode                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FClientConversationOptionEntry>)    Options                                                     ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ClientConversationOptionEntry
/// Size: 0x0070 (0x000000 - 0x000070)
class FClientConversationOptionEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FText)                                     ChoiceText                                                  ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ChoiceTags                                                  ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	CMember(EConversationChoiceType)                   ChoiceType                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FConversationChoiceReference)              ChoiceReference                                             ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    ExtraData                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationNodeParameterPair
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationNodeParameterPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceReference
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationChoiceReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FConversationNodeHandle)                   NodeReference                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    NodeParameters                                              ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationNodeHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FConversationNodeHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGuid)                                     NodeGUID                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationParticipants
/// Size: 0x0010 (0x000000 - 0x000010)
class FConversationParticipants : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FConversationParticipantEntry>)     List                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationParticipantEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FConversationParticipantEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              ParticipantID                                               ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ClientConversationMessage
/// Size: 0x0048 (0x000000 - 0x000048)
class FClientConversationMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              SpeakerID                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     ParticipantDisplayName                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    MetadataParameters                                          ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationTaskResult
/// Size: 0x0080 (0x000000 - 0x000080)
class FConversationTaskResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EConversationTaskResultType)               Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FAdvanceConversationRequest)               AdvanceToChoice                                             ___ OFFSET(get<T>, {0x8, 48, 0, 0})
	SMember(FClientConversationMessage)                Message                                                     ___ OFFSET(get<T>, {0x38, 72, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.AdvanceConversationRequest
/// Size: 0x0030 (0x000000 - 0x000030)
class FAdvanceConversationRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FConversationChoiceReference)              Choice                                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FConversationNodeParameterPair>)    UserParameters                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationContext
/// Size: 0x0038 (0x000000 - 0x000038)
class FConversationContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UConversationRegistry*)                    ConversationRegistry                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UConversationInstance*)                    ActiveConversation                                          ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UConversationParticipantComponent*)        ClientParticipant                                           ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UConversationTaskNode*)                    TaskBeingConsidered                                         ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<FConversationNodeHandle>)           ReturnScopeStack                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bServer_PRIVATE                                             ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bClient_PRIVATE                                             ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationEntryList
/// Size: 0x0018 (0x000000 - 0x000018)
class FConversationEntryList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              EntryTag                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FGuid>)                             DestinationList                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.CommonDialogueBankParticipant
/// Size: 0x0030 (0x000000 - 0x000030)
class FCommonDialogueBankParticipant : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     FallbackName                                                ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FGameplayTag)                              ParticipantName                                             ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FLinearColor)                              NodeTint                                                    ___ OFFSET(get<T>, {0x1C, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.NetSerializeScriptStructCache_ConvVersion
/// Size: 0x0060 (0x000000 - 0x000060)
class FNetSerializeScriptStructCache_ConvVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<UScriptStruct*, int32_t>)             ScriptStructsToIndex                                        ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<UScriptStruct*>)                    IndexToScriptStructs                                        ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FConversationChoiceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CommonConversationRuntime.ConversationChoiceDataHandle
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationChoiceDataHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/CommonConversationRuntime.ConversationBranchPoint
/// Size: 0x0080 (0x000000 - 0x000080)
class FConversationBranchPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FConversationNodeHandle>)           ReturnScopeStack                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FClientConversationOptionEntry)            ClientChoice                                                ___ OFFSET(get<T>, {0x10, 112, 0, 0})
};

/// Enum /Script/CommonConversationRuntime.EConversationTaskResultType
/// Size: 0x09
enum EConversationTaskResultType : uint8_t
{
	EConversationTaskResultType__Invalid0                                            = 0,
	EConversationTaskResultType__AbortConversation1                                  = 1,
	EConversationTaskResultType__AdvanceConversation2                                = 2,
	EConversationTaskResultType__AdvanceConversationWithChoice3                      = 3,
	EConversationTaskResultType__PauseConversationAndSendClientChoices4              = 4,
	EConversationTaskResultType__ReturnToLastClientChoice5                           = 5,
	EConversationTaskResultType__ReturnToCurrentClientChoice6                        = 6,
	EConversationTaskResultType__ReturnToConversationStart7                          = 7,
	EConversationTaskResultType__EConversationTaskResultType_MAX8                    = 8
};

/// Enum /Script/CommonConversationRuntime.EConversationRequirementResult
/// Size: 0x04
enum EConversationRequirementResult : uint8_t
{
	EConversationRequirementResult__Passed0                                          = 0,
	EConversationRequirementResult__FailedButVisible1                                = 1,
	EConversationRequirementResult__FailedAndHidden2                                 = 2,
	EConversationRequirementResult__EConversationRequirementResult_MAX3              = 3
};

/// Enum /Script/CommonConversationRuntime.EConversationChoiceType
/// Size: 0x04
enum EConversationChoiceType : uint8_t
{
	EConversationChoiceType__ServerOnly0                                             = 0,
	EConversationChoiceType__UserChoiceAvailable1                                    = 1,
	EConversationChoiceType__UserChoiceUnavailable2                                  = 2,
	EConversationChoiceType__EConversationChoiceType_MAX3                            = 3
};

