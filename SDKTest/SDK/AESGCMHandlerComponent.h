/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AESGCMHandlerComponent.

/// Enum /Script/AESGCMHandlerComponent.EAESGCMNetResult
/// Size: 0x08
enum EAESGCMNetResult : uint8_t
{
	EAESGCMNetResult__Unknown0                                                       = 0,
	EAESGCMNetResult__Success1                                                       = 1,
	EAESGCMNetResult__AESMissingIV2                                                  = 2,
	EAESGCMNetResult__AESMissingAuthTag3                                             = 3,
	EAESGCMNetResult__AESMissingPayload4                                             = 4,
	EAESGCMNetResult__AESDecryptionFailed5                                           = 5,
	EAESGCMNetResult__AESZeroLastByte6                                               = 6,
	EAESGCMNetResult__EAESGCMNetResult_MAX7                                          = 7
};

