
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class ASunDirectionandColorSet_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          Scene                                                       ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FLinearColor)                              SunLightColor                                               ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

