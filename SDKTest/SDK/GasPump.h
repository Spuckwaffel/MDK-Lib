/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GasPump.

/// Class /Valet/GasPump/B_GasPump_Valet_Component.B_GasPump_Valet_Component_C
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UB_GasPump_Valet_Component_C : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FName)                                     Gas_Pump_Icon_Enabled                                       ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(UClass*)                                   Gas_Pump_IndicatorManager_Class                             ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UValet_GasPumpIndicatorManagerV2_C*)       Gas_Pump_IndicatorManager                                   ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UValet_GasPumpIndicatorManagerV2_C : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UClass*)                                   FuelIndicatorClass                                          ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<UB_GasPump_Valet_Component_C*>)     GasPumpList                                                 ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<AFuelIndicator_C*>)                 FuelIndicatorList                                           ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(double)                                    FuelIndicatorRangeSquared                                   ___ OFFSET(get<double>, {0xC8, 8, 0, 0})
};

