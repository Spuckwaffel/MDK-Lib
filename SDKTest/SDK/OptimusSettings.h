/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OptimusSettings.

/// Class /Script/OptimusSettings.OptimusSettings
/// Size: 0x0048 (0x000030 - 0x000078)
class UOptimusSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EOptimusDefaultDeformerMode)               DefaultMode                                                 ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TWeakObjectPtr<UMeshDeformer*>)            DefaultDeformer                                             ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UMeshDeformer*>)            DefaultRecomputeTangentDeformer                             ___ OFFSET(get<T>, {0x58, 32, 0, 0})
};

/// Enum /Script/OptimusSettings.EOptimusDefaultDeformerMode
/// Size: 0x04
enum EOptimusDefaultDeformerMode : uint8_t
{
	EOptimusDefaultDeformerMode__Never0                                              = 0,
	EOptimusDefaultDeformerMode__SkinCacheOnly1                                      = 1,
	EOptimusDefaultDeformerMode__Always2                                             = 2,
	EOptimusDefaultDeformerMode__EOptimusDefaultDeformerMode_MAX3                    = 3
};

