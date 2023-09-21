
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/LinkId.OnlineLinkId
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnlineLinkId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Mnemonic                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Version                                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Enum /Script/LinkId.ELinkCodeUserInputError
/// Size: 0x05
enum ELinkCodeUserInputError : uint8_t
{
	ELinkCodeUserInputError__InvalidMnemonicCharacter0                               = 0,
	ELinkCodeUserInputError__InvalidMnemonicLength1                                  = 1,
	ELinkCodeUserInputError__InvalidVersionFormat2                                   = 2,
	ELinkCodeUserInputError__NoError3                                                = 3,
	ELinkCodeUserInputError__ELinkCodeUserInputError_MAX4                            = 4
};

