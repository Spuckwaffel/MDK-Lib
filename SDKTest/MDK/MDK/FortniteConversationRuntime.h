
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonConversationRuntime
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FortniteConversationRuntime.FortConversationMarkerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationMarkerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationParticipantComponent
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UFortConversationParticipantComponent : public UConversationParticipantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationContextCondition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasCID
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortConversationContextCondition_ParticipantHasCID : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   AllowedCIDs                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasMetaTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortConversationContextCondition_ParticipantHasMetaTag : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTag)                              MetaTag                                                     OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantHasOwnedTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortConversationContextCondition_ParticipantHasOwnedTag : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FGameplayTag)                              OwnedTag                                                    OFFSET(get<T>, {0x2C, 4, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextCondition_ParticipantControllerMeetsRequirement
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortConversationContextCondition_ParticipantControllerMeetsRequirement : public UFortConversationContextCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              ParticipantID                                               OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(UFortControllerRequirement*)               Requirement                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/FortniteConversationRuntime.FortConversationContextConditionHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationContextConditionHelpers : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteConversationRuntime.FortConversationParamLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortConversationParamLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteConversationRuntime.FortniteConversationGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortniteConversationGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteConversationRuntime.FortPlayerConversationComponent
/// Size: 0x01C0 (0x0001A0 - 0x000360)
class UFortPlayerConversationComponent : public UFortConversationParticipantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(TArray<UFortNonPlayerConversationParticipantComponent*>) ConversationParticipantsInRange               OFFSET(get<T>, {0x1A0, 16, 0, 0})
	DMember(float)                                     GreetSphereRadius                                           OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     IconVisibilityRadius                                        OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     AbortConversationRange                                      OFFSET(get<float>, {0x1B8, 4, 0, 0})
	SMember(FGameplayTag)                              RidingOnActorTag                                            OFFSET(get<T>, {0x1BC, 4, 0, 0})
	DMember(float)                                     RidingOnActorRangeMultiplierSquared                         OFFSET(get<float>, {0x1C0, 4, 0, 0})
	CMember(TSet<UFortNonPlayerConversationParticipantComponent*>) IndicatedNPCConversationComponents              OFFSET(get<T>, {0x200, 80, 0, 0})
	DMember(bool)                                      bMoveShouldAbortConversation                                OFFSET(get<bool>, {0x258, 1, 0, 0})
};



	/// Functions
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversationWithParticipant
	// void RequestServerAbortConversationWithParticipant(UFortNonPlayerConversationParticipantComponent* Participant);         // [0x98adae4] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.RequestServerAbortConversation
	// void RequestServerAbortConversation();                                                                                   // [0x77d5290] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleWeaponEquipped
	// void HandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                              // [0x5fd7ee0] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleViewTargetChanged
	// void HandleViewTargetChanged();                                                                                          // [0x98adad0] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleFollowedPlayerChanged
	// void HandleFollowedPlayerChanged(AFortPlayerControllerSpectating* SpectatingPC, AFortPlayerState* FollowedPlayerState);  // [0x98ada0c] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.HandleDBNOChanged
	// void HandleDBNOChanged(AFortPawn* Pawn, bool bIsDBNO);                                                                   // [0x7814974] Final|Native|Private 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorOpenUI
	// void ClientSpectatorOpenUI();                                                                                            // [0x77d3b90] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientSpectatorCloseUI
	// void ClientSpectatorCloseUI();                                                                                           // [0x6646580] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/FortniteConversationRuntime.FortPlayerConversationComponent.ClientReceiveConversationGiftUINotification
	// void ClientReceiveConversationGiftUINotification(FGiftUINotificationInfo ConversationGiftUINotification);                // [0x98ac26c] Net|NetReliableNative|Event|Public|NetClient 
/// Struct /Script/FortniteConversationRuntime.FortConversationEnterEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortConversationEnterEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(APlayerController*)                        PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversationLeaveEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortConversationLeaveEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(APlayerController*)                        PlayerController                                            OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_Spectator_EnterConversation
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortConversation_Spectator_EnterConversation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_Spectator_LeaveConversation
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortConversation_Spectator_LeaveConversation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_SetDialogMarkerClassEvent
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortConversation_SetDialogMarkerClassEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FortniteConversationRuntime.NPCConversationIndicatorMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FNPCConversationIndicatorMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UFortNonPlayerConversationParticipantComponent*) NPCConversationComponent                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_NPC_AddIndicator
/// Size: 0x0000 (0x000008 - 0x000008)
class FFortConversation_NPC_AddIndicator : public FNPCConversationIndicatorMessage
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteConversationRuntime.FortConversation_NPC_RemoveIndicator
/// Size: 0x0000 (0x000008 - 0x000008)
class FFortConversation_NPC_RemoveIndicator : public FNPCConversationIndicatorMessage
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteConversationRuntime.ConversationSettingDialogMarkerData
/// Size: 0x0020 (0x000000 - 0x000020)
class FConversationSettingDialogMarkerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UClass*>)                   DialogMarkerSoftClass                                       OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversationConditionalMessage
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortConversationConditionalMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UFortConversationContextCondition*)        Condition                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FText)                                     Message                                                     OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/FortniteConversationRuntime.FortConversationNodeConditionalMessages
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortConversationNodeConditionalMessages : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortConversationConditionalMessage>) Messages                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/FortniteConversationRuntime.EInteractionRange
/// Size: 0x03
enum EInteractionRange : uint8_t
{
	EInteractionRange__Preview0                                                      = 0,
	EInteractionRange__Interaction1                                                  = 1,
	EInteractionRange__EInteractionRange_MAX2                                        = 2
};

