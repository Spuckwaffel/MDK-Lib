/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Requirements.

/// Class /Lager/Requirements/BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C
/// Size: 0x0018 (0x000030 - 0x000048)
class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C : public UFortControllerRequirement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   RequiredBudget                                              ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	SMember(FDataTableRowHandle)                       EventRowHandle                                              ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

