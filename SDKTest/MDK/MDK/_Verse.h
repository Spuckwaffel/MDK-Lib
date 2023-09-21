
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CompanionAI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore
/// dependency: EntityFortnite
/// dependency: EpicGamesEngine
/// dependency: VerseAIBase
/// dependency: VerseAssets
/// dependency: VerseCreature
/// dependency: VerseDevices
/// dependency: VerseFortnite
/// dependency: VerseFortniteGameplayAbilities
/// dependency: VerseFortniteInternal
/// dependency: VerseFortniteUI
/// dependency: VerseGameplayTags
/// dependency: VerseMovement
/// dependency: VerseNative
/// dependency: VerseNPC
/// dependency: VerseSimulation
/// dependency: VerseUI
/// dependency: VerseWorldPartition
/// dependency: VGameplayRst

/// Class /Solaris/_Verse/VNI/VerseNative.$SolarisSignatureFunctionOuter
/// Size: 0x0000 (0x000028 - 0x000028)
class U_SolarisSignatureFunctionOuter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Solaris/_Verse/VNI/VerseNative.Concurrency
/// Size: 0x0000 (0x000028 - 0x000028)
class UConcurrency : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Solaris/_Verse/VNI/VerseNative.Concurrency_awaitable
/// Size: 0x0000 (0x000028 - 0x000028)
class UConcurrency_awaitable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Solaris/_Verse/VNI/VerseNative.Concurrency_mind
/// Size: 0x0038 (0x000028 - 0x000060)
class UConcurrency_mind : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Solaris/_Verse/VNI/VerseNative.Concurrency_task
/// Size: 0x0118 (0x000028 - 0x000140)
class UConcurrency_task : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Solaris/_Verse/VNI/VerseNative.Native
/// Size: 0x0000 (0x000028 - 0x000028)
class UNative : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Solaris/_Verse/VNI/VerseNative.task_Concurrency_awaitable$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Concurrency_awaitable_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UConcurrency_awaitable*)                   _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /Solaris/_Verse/VNI/VerseNative.task_Concurrency_task$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Concurrency_task_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UConcurrency_task*)                        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.EpicGames_Input_verse_ue_input_component
/// Size: 0x0208 (0x000440 - 0x000648)
class UEpicGames_Input_verse_ue_input_component : public UVerseUEInputComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1608;

public:
};

/// Class /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.task_EpicGames_Input_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R
/// Size: 0x0028 (0x000140 - 0x000168)
class Utask_EpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UEpicGames_Input_verse_ue_input_component*) _Self                                                      ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lverse__ue__input__component_M_Kchar_Minput__event_R) __verse_0xB2CDDD72_Argument               ___ OFFSET(get<T>, {0x148, 32, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Colors
/// Size: 0x0000 (0x000028 - 0x000028)
class UColors : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Colors_NamedColors
/// Size: 0x0DC8 (0x000028 - 0x000DF0)
class UColors_NamedColors : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3568;

public:
	SMember(FColors_color)                             __verse_0x9FBDE6AE_AliceBlue                                ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xB3F7599D_AntiqueWhite                             ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x37EE68B4_Aqua                                     ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA52EBB79_Aquamarine                               ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xD06EFB2A_Azure                                    ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x8CE5D6D0_Beige                                    ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC6B3972A_Bisque                                   ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x65E4346F_Black                                    ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x513D3B5F_BlanchedAlmond                           ___ OFFSET(get<T>, {0xE8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x80217580_Blue                                     ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x31D0653D_BlueViolet                               ___ OFFSET(get<T>, {0x118, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xAD308F8F_Brown                                    ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xED3A42A8_Burlywood                                ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x921A6303_CadetBlue                                ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x9E2BDE1B_Chartreuse                               ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x082AED19_Chocolate                                ___ OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x196BEF87_Coral                                    ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC6BCD84F_CornflowerBlue                           ___ OFFSET(get<T>, {0x1C0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xEE818697_Cornsilk                                 ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6733DEF7_Crimson                                  ___ OFFSET(get<T>, {0x1F0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2D925695_Cyan                                     ___ OFFSET(get<T>, {0x208, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x935B7248_DarkBlue                                 ___ OFFSET(get<T>, {0x220, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x3EE8515D_DarkCyan                                 ___ OFFSET(get<T>, {0x238, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x5817F032_DarkGoldenrod                            ___ OFFSET(get<T>, {0x250, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x916F3C35_DarkGray                                 ___ OFFSET(get<T>, {0x268, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x37F798B1_DarkGreen                                ___ OFFSET(get<T>, {0x280, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6B6176B1_DarkGrey                                 ___ OFFSET(get<T>, {0x298, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x9A5F61FB_DarkKhaki                                ___ OFFSET(get<T>, {0x2B0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x97899EDF_DarkMagenta                              ___ OFFSET(get<T>, {0x2C8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC2E62C73_DarkOliveGreen                           ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x7431D49D_DarkOrange                               ___ OFFSET(get<T>, {0x2F8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA0C47F58_DarkOrchid                               ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA3246E28_DarkRed                                  ___ OFFSET(get<T>, {0x328, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x5A06EB6C_DarkSalmon                               ___ OFFSET(get<T>, {0x340, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xF141484E_DarkSeaGreen                             ___ OFFSET(get<T>, {0x358, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4167AB57_DarkSlateBlue                            ___ OFFSET(get<T>, {0x370, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4353E52A_DarkSlateGray                            ___ OFFSET(get<T>, {0x388, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xB95DAFAE_DarkSlateGrey                            ___ OFFSET(get<T>, {0x3A0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x26DA5155_DarkTurquoise                            ___ OFFSET(get<T>, {0x3B8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x3E781A05_DarkViolet                               ___ OFFSET(get<T>, {0x3D0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x53E148EA_DeepPink                                 ___ OFFSET(get<T>, {0x3E8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA474CD21_DeepSkyBlue                              ___ OFFSET(get<T>, {0x400, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xEC312FE8_DimGray                                  ___ OFFSET(get<T>, {0x418, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x163F656C_DimGrey                                  ___ OFFSET(get<T>, {0x430, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x617B6862_DodgerBlue                               ___ OFFSET(get<T>, {0x448, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC636E104_Firebrick                                ___ OFFSET(get<T>, {0x460, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x06164DB2_FloralWhite                              ___ OFFSET(get<T>, {0x478, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4939E624_ForestGreen                              ___ OFFSET(get<T>, {0x490, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x8069E472_Fuchsia                                  ___ OFFSET(get<T>, {0x4A8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x71D0705F_Gainsboro                                ___ OFFSET(get<T>, {0x4C0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x1EDD5A5B_GhostWhite                               ___ OFFSET(get<T>, {0x4D8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x0363FA56_Gold                                     ___ OFFSET(get<T>, {0x4F0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x13A0B098_Goldenrod                                ___ OFFSET(get<T>, {0x508, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x82153BFD_Gray                                     ___ OFFSET(get<T>, {0x520, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x853EAC70_Green                                    ___ OFFSET(get<T>, {0x538, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x94CAEBA0_GreenYellow                              ___ OFFSET(get<T>, {0x550, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x781B7179_Grey                                     ___ OFFSET(get<T>, {0x568, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6FB30324_Honeydew                                 ___ OFFSET(get<T>, {0x580, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2D404B19_Hotpink                                  ___ OFFSET(get<T>, {0x598, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2CE09720_IndianRed                                ___ OFFSET(get<T>, {0x5B0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x180B2901_Indigo                                   ___ OFFSET(get<T>, {0x5C8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x1086E2EC_Ivory                                    ___ OFFSET(get<T>, {0x5E0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2896553A_Khaki                                    ___ OFFSET(get<T>, {0x5F8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xB93AFCDC_Lavender                                 ___ OFFSET(get<T>, {0x610, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4CF8F931_LavenderBlush                            ___ OFFSET(get<T>, {0x628, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x08B4792E_LawnGreen                                ___ OFFSET(get<T>, {0x640, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xCC22276F_LemonChiffon                             ___ OFFSET(get<T>, {0x658, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x607C97F4_LightBlue                                ___ OFFSET(get<T>, {0x670, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x89B3D40E_LightCoral                               ___ OFFSET(get<T>, {0x688, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xCDCFB4E1_LightCyan                                ___ OFFSET(get<T>, {0x6A0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6C11FD65_LightGoldenrodYellow                     ___ OFFSET(get<T>, {0x6B8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6248D989_LightGray                                ___ OFFSET(get<T>, {0x6D0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x15E697F9_LightGreen                               ___ OFFSET(get<T>, {0x6E8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x9846930D_LightGrey                                ___ OFFSET(get<T>, {0x700, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC34ABDCC_LightPink                                ___ OFFSET(get<T>, {0x718, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC57DAB84_LightSalmon                              ___ OFFSET(get<T>, {0x730, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x0FE57B41_LightSeaGreen                            ___ OFFSET(get<T>, {0x748, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4077C098_LightSkyBlue                             ___ OFFSET(get<T>, {0x760, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xCABFF9F6_LightSlateGray                           ___ OFFSET(get<T>, {0x778, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x30B1B372_LightSlateGrey                           ___ OFFSET(get<T>, {0x790, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xEFD2DF75_LightSteelBlue                           ___ OFFSET(get<T>, {0x7A8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x5732C477_LightYellow                              ___ OFFSET(get<T>, {0x7C0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA58A0A97_Lime                                     ___ OFFSET(get<T>, {0x7D8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC8D6E552_LimeGreen                                ___ OFFSET(get<T>, {0x7F0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xD014B08F_Linen                                    ___ OFFSET(get<T>, {0x808, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC5065659_Magenta                                  ___ OFFSET(get<T>, {0x820, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2C6B6225_Maroon                                   ___ OFFSET(get<T>, {0x838, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x603DC640_MediumAquamarine                         ___ OFFSET(get<T>, {0x850, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x03344EDD_MediumBlue                               ___ OFFSET(get<T>, {0x868, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xEB235F60_MediumOrchid                             ___ OFFSET(get<T>, {0x880, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x80AC62AF_MediumPurple                             ___ OFFSET(get<T>, {0x898, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA2F1456A_MediumSeaGreen                           ___ OFFSET(get<T>, {0x8B0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x81A3E0C2_MediumSlateBlue                          ___ OFFSET(get<T>, {0x8C8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x8259C923_MediumSpringGreen                        ___ OFFSET(get<T>, {0x8E0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xE61E1AC0_MediumTurquoise                          ___ OFFSET(get<T>, {0x8F8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x750A73D1_MediumVioletRed                          ___ OFFSET(get<T>, {0x910, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x54B068FD_MidnightBlue                             ___ OFFSET(get<T>, {0x928, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2D5517E3_MintCream                                ___ OFFSET(get<T>, {0x940, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC9B38859_MistyRose                                ___ OFFSET(get<T>, {0x958, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x045E548D_Moccasin                                 ___ OFFSET(get<T>, {0x970, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x66A473BA_NavajoWhite                              ___ OFFSET(get<T>, {0x988, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x621CB82D_Navy                                     ___ OFFSET(get<T>, {0x9A0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4433768E_OldLace                                  ___ OFFSET(get<T>, {0x9B8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4ADCED0B_Olive                                    ___ OFFSET(get<T>, {0x9D0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x662F5053_OliveDrab                                ___ OFFSET(get<T>, {0x9E8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x7B1B98E3_Orange                                   ___ OFFSET(get<T>, {0xA00, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x31DF128E_OrangeRed                                ___ OFFSET(get<T>, {0xA18, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xAFEE3326_Orchid                                   ___ OFFSET(get<T>, {0xA30, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA90612F2_PaleGoldenrod                            ___ OFFSET(get<T>, {0xA48, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6494F519_PaleGreen                                ___ OFFSET(get<T>, {0xA60, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xD7CBB395_PaleTurquoise                            ___ OFFSET(get<T>, {0xA78, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xBC04EB9C_PaleVioletred                            ___ OFFSET(get<T>, {0xA90, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x1267A5CE_PapayaWhip                               ___ OFFSET(get<T>, {0xAA8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x5B815063_PeachPuff                                ___ OFFSET(get<T>, {0xAC0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6A5E8726_Peru                                     ___ OFFSET(get<T>, {0xAD8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x23175FB8_Pink                                     ___ OFFSET(get<T>, {0xAF0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x92124624_Plum                                     ___ OFFSET(get<T>, {0xB08, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x315A9690_PowderBlue                               ___ OFFSET(get<T>, {0xB20, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC4610EE9_Purple                                   ___ OFFSET(get<T>, {0xB38, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x77CCDA87_Red                                      ___ OFFSET(get<T>, {0xB50, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xFB01846B_RosyBrown                                ___ OFFSET(get<T>, {0xB68, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xA95C80D8_RoyalBlue                                ___ OFFSET(get<T>, {0xB80, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xFCC2BB8C_SaddleBrown                              ___ OFFSET(get<T>, {0xB98, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x552CA712_Salmon                                   ___ OFFSET(get<T>, {0xBB0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xE1C22521_SandyBrown                               ___ OFFSET(get<T>, {0xBC8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x36A1DDC2_SeaGreen                                 ___ OFFSET(get<T>, {0xBE0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x58B624CB_SeaShell                                 ___ OFFSET(get<T>, {0xBF8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x013650B1_Sienna                                   ___ OFFSET(get<T>, {0xC10, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xFA47F979_Silver                                   ___ OFFSET(get<T>, {0xC28, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x1EAB27FD_SkyBlue                                  ___ OFFSET(get<T>, {0xC40, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x0AD0EBFD_SlateBlue                                ___ OFFSET(get<T>, {0xC58, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x08E4A580_SlateGray                                ___ OFFSET(get<T>, {0xC70, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xF2EAEF04_SlateGrey                                ___ OFFSET(get<T>, {0xC88, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xE7A26A33_Snow                                     ___ OFFSET(get<T>, {0xCA0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2CD5AEB9_SpringGreen                              ___ OFFSET(get<T>, {0xCB8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x2D898303_SteelBlue                                ___ OFFSET(get<T>, {0xCD0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x09871083_Tan                                      ___ OFFSET(get<T>, {0xCE8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x303C932D_Teal                                     ___ OFFSET(get<T>, {0xD00, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x303F6677_Thistle                                  ___ OFFSET(get<T>, {0xD18, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x4DC64808_Tomato                                   ___ OFFSET(get<T>, {0xD30, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x6D6D11FF_Turquoise                                ___ OFFSET(get<T>, {0xD48, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x3152567B_Violet                                   ___ OFFSET(get<T>, {0xD60, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x13A81039_Wheat                                    ___ OFFSET(get<T>, {0xD78, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x27EAE4E0_White                                    ___ OFFSET(get<T>, {0xD90, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xBE90A762_WhiteSmoke                               ___ OFFSET(get<T>, {0xDA8, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xC763C8E1_Yellow                                   ___ OFFSET(get<T>, {0xDC0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0xF10B434A_YellowGreen                              ___ OFFSET(get<T>, {0xDD8, 24, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Random
/// Size: 0x0000 (0x000028 - 0x000028)
class URandom : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.task_Verse_event$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Verse_event_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UVerse_event*)                             _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Verse
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerse : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(double)                                    __verse_0x34BB10F0_PiFloat                                  ___ OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Verse_cancelable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerse_cancelable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_disposable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerse_disposable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_event
/// Size: 0x0058 (0x000028 - 0x000080)
class UVerse_event : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_invalidatable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerse_invalidatable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_listenable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerse_listenable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_localizable_value
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerse_localizable_value : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_localizable_float
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerse_localizable_float : public UVerse_localizable_value
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(double)                                    __verse_0x31A8F10C_Value                                    ___ OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Verse_localizable_int
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerse_localizable_int : public UVerse_localizable_value
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   __verse_0x31A8F10C_Value                                    ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Verse_localizable_message
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerse_localizable_message : public UVerse_localizable_value
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UVerse_message*)                           __verse_0x31A8F10C_Value                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Verse_localizable_string
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerse_localizable_string : public UVerse_localizable_value
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_message
/// Size: 0x0070 (0x000028 - 0x000098)
class UVerse_message : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TMap<__verse_0x85420AD2_Substitutions, UVerse_localizable_value*>) __verse_0x85420AD2_Substitutions    ___ OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Class /Verse/_Verse/VNI/Verse.Verse_signalable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerse_signalable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Verse/_Verse/VNI/Verse.Verse_subscribable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerse_subscribable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.SpatialMath
/// Size: 0x0000 (0x000028 - 0x000028)
class USpatialMath : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Curves_editable_curve
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UCurves_editable_curve : public UCurveFloat
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics
/// Size: 0x0038 (0x000028 - 0x000060)
class UDiagnostics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FColors_color)                             __verse_0x57D963B0_DefaultDebugDrawColor                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	CMember(Diagnostics_debug_draw_duration_policy)    __verse_0xBB769F64_DefaultDebugDrawDurationPolicy           ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(double)                                    __verse_0x455A65A8_DefaultDebugDrawDuration                 ___ OFFSET(get<double>, {0x48, 8, 0, 0})
	DMember(double)                                    __verse_0xD30692C9_DefaultDebugDrawSize                     ___ OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    __verse_0xA45DC86B_DefaultDebugDrawThickness                ___ OFFSET(get<double>, {0x58, 8, 0, 0})
};

/// Class /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_debug_draw
/// Size: 0x00D8 (0x000028 - 0x000100)
class UDiagnostics_debug_draw : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UClass*)                                   __verse_0xFAE6EE9E_Channel                                  ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_debug_draw_channel
/// Size: 0x0000 (0x000028 - 0x000028)
class UDiagnostics_debug_draw_channel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_log
/// Size: 0x0030 (0x000028 - 0x000058)
class UDiagnostics_log : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UClass*)                                   __verse_0xFAE6EE9E_Channel                                  ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(Diagnostics_log_level)                     __verse_0x540F3253_DefaultLevel                             ___ OFFSET(get<T>, {0x50, 1, 0, 0})
};

/// Class /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_log_channel
/// Size: 0x0000 (0x000028 - 0x000028)
class UDiagnostics_log_channel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags
/// Size: 0x0000 (0x000028 - 0x000028)
class UTags : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UTags_tag : public UVerseGameplayTagBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_container
/// Size: 0x00C0 (0x000038 - 0x0000F8)
class UTags_tag_container : public UVerseGameplayTagContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_container_component
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UTags_tag_container_component : public UEntityTagContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_search_criteria
/// Size: 0x0038 (0x000028 - 0x000060)
class UTags_tag_search_criteria : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<UTags_tag*>)                        __verse_0x4B15ECEC_RequiredTags                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UTags_tag*>)                        __verse_0xDC4AEE52_PreferredTags                            ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UTags_tag*>)                        __verse_0x321D6A7B_ExclusionTags                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(Tags_tag_search_sort_type)                 __verse_0xBFD91910_SortType                                 ___ OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_view
/// Size: 0x0000 (0x000028 - 0x000028)
class UTags_tag_view : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseRestricted/_Verse/VNI/VerseRestricted.Restricted
/// Size: 0x0000 (0x000028 - 0x000028)
class URestricted : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseRestricted/_Verse/VNI/VerseRestricted.Restricted_sticky_event
/// Size: 0x0090 (0x000028 - 0x0000B8)
class URestricted_sticky_event : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /VerseRestricted/_Verse/VNI/VerseRestricted.task_Restricted_sticky_event$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Restricted_sticky_event_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(URestricted_sticky_event*)                 _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.task_VerseEngine_subscribable_event$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_VerseEngine_subscribable_event_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UVerseEngine_subscribable_event*)          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.VerseEngine
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseEngine : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.VerseEngine_Entity_entity
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UVerseEngine_Entity_entity : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.VerseEngine_Entity_EntityHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseEngine_Entity_EntityHelpers : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.VerseEngine_multicast_delegate_base
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseEngine_multicast_delegate_base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.VerseEngine_multicast_delegate
/// Size: 0x0070 (0x000028 - 0x000098)
class UVerseEngine_multicast_delegate : public UVerseEngine_multicast_delegate_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.VerseEngine_multicast_delegate_subscription
/// Size: 0x0028 (0x000028 - 0x000050)
class UVerseEngine_multicast_delegate_subscription : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseEngine.VerseEngine_subscribable_event
/// Size: 0x0038 (0x000098 - 0x0000D0)
class UVerseEngine_subscribable_event : public UVerseEngine_multicast_delegate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssets : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_asset
/// Size: 0x0048 (0x000080 - 0x0000C8)
class UAssets_asset : public UVerseAssetPtr
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_animation
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_animation : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_animation_blueprint
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_animation_blueprint : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_animation_instance
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_animation_instance : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_client_asset
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_client_asset : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_font
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_font : public UAssets_client_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_level
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_level : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_material
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_material : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_mesh
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_mesh : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_particle_system
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_particle_system : public UAssets_client_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_skeletal_mesh
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_skeletal_mesh : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_sound
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_sound : public UAssets_client_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_texture_base
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_texture_base : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseEngine/_Verse/VNI/VerseAssets.Assets_texture
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UAssets_texture : public UAssets_texture_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation
/// Size: 0x0000 (0x000028 - 0x000028)
class USimulation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_agent
/// Size: 0x0000 (0x000030 - 0x000030)
class USimulation_agent : public UVerseAgent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_localizable_agent
/// Size: 0x0008 (0x000028 - 0x000030)
class USimulation_localizable_agent : public UVerse_localizable_value
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USimulation_agent*)                        __verse_0x31A8F10C_Value                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_player
/// Size: 0x0018 (0x000030 - 0x000048)
class USimulation_player : public USimulation_agent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_player_array_helper
/// Size: 0x0000 (0x000028 - 0x000028)
class USimulation_player_array_helper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_player_component
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class USimulation_player_component : public UEntityActorPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_player_multicast_delegate
/// Size: 0x0000 (0x000098 - 0x000098)
class USimulation_player_multicast_delegate : public UVerseEngine_multicast_delegate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_session
/// Size: 0x0000 (0x000028 - 0x000028)
class USimulation_session : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.Simulation_team
/// Size: 0x0000 (0x000028 - 0x000028)
class USimulation_team : public UVerseTeam
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseSimulation/_Verse/VNI/VerseSimulation.task_Simulation$Sleep_L_Nfloat_R
/// Size: 0x0008 (0x000140 - 0x000148)
class Utask_Simulation_Sleep_L_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(double)                                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<double>, {0x140, 8, 0, 0})
};

/// Class /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseExperimental : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_date_time_ticks
/// Size: 0x0048 (0x000028 - 0x000070)
class UVerseExperimental_date_time_ticks : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int64_t)                                   __verse_0x8DE5F121_NanosecondsPerTick                       ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x358147B9_TicksPerDay                              ___ OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x5C0949D3_TicksPerHour                             ___ OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x59DFB831_TicksPerMicrosecond                      ___ OFFSET(get<int64_t>, {0x40, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xD20E16AF_TicksPerMillisecond                      ___ OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x4420B794_TicksPerMinute                           ___ OFFSET(get<int64_t>, {0x50, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x3E0178E0_TicksPerSecond                           ___ OFFSET(get<int64_t>, {0x58, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xA7911900_TicksPerWeek                             ___ OFFSET(get<int64_t>, {0x60, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xE371C089_TicksPerYear                             ___ OFFSET(get<int64_t>, {0x68, 8, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin
/// Size: 0x0009 (0x000140 - 0x000149)
class Utask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 329;

public:
	CMember(UVGameplayRst_Components_dynamic_activation_component*) _Self                                          ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete
/// Size: 0x0009 (0x000140 - 0x000149)
class Utask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 329;

public:
	CMember(UVGameplayRst_Components_dynamic_activation_component*) _Self                                          ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R
/// Size: 0x0028 (0x000140 - 0x000168)
class Utask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UVGameplayRst_Messaging_debug_command_component*) _Self                                                ___ OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitBeginOverlap
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_VGameplayRst_Physics_collision_component_WaitBeginOverlap : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UVGameplayRst_Physics_collision_component*) _Self                                                      ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UVGameplayRst_Physics_overlap_result*)     _RetVal                                                     ___ OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitEndOverlap
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_VGameplayRst_Physics_collision_component_WaitEndOverlap : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UVGameplayRst_Physics_collision_component*) _Self                                                      ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UVGameplayRst_Physics_overlap_result*)     _RetVal                                                     ___ OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitHit
/// Size: 0x0050 (0x000140 - 0x000190)
class Utask_VGameplayRst_Physics_collision_component_WaitHit : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(UVGameplayRst_Physics_collision_component*) _Self                                                      ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FVGameplayRst_Physics_hit_result)          _RetVal                                                     ___ OFFSET(get<T>, {0x150, 64, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UVGameplayRst_Physics_physics_trace*)      _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(TArray<FVGameplayRst_Physics_hit_result>)  _RetVal                                                     ___ OFFSET(get<T>, {0x150, 16, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Audio_audio_component
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UVGameplayRst_Audio_audio_component : public UAudioComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Components_dynamic_activation_component
/// Size: 0x0078 (0x0000B0 - 0x000128)
class UVGameplayRst_Components_dynamic_activation_component : public UEntityDynamicActivationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Components_script_component
/// Size: 0x0158 (0x0000B0 - 0x000208)
class UVGameplayRst_Components_script_component : public UEntityScriptComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	DMember(bool)                                      __verse_0xFAA77A2E_AllowMultiple                            ___ OFFSET(get<bool>, {0x1C0, 1, 1, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Datastore_datastore_component
/// Size: 0x0000 (0x000210 - 0x000210)
class UVGameplayRst_Datastore_datastore_component : public UDatastoreComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Datastore_DatastoreComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Datastore_DatastoreComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_EntityUtil
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_EntityUtil : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_GameObjects
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_GameObjects : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_GameObjects_immutable_model
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UVGameplayRst_GameObjects_immutable_model : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UVerseEngine_Entity_entity*)               __verse_0xC79F2B5D_InternalObject                           ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UVGameplayRst_Physics_collision_component*) __verse_0x42159B8D_CollisionComp                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UVGameplayRst_Geometry_fixed_mesh_component*) __verse_0xA6788863_MeshComp                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UVGameplayRst_Transform_position_component*) __verse_0x325D2C22_PositionComp                           ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UVGameplayRst_Transform_rotation_component*) __verse_0xF3C6D2D3_RotationComp                           ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UVGameplayRst_Transform_scale_component*)  __verse_0x1A7B631A_ScaleComp                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_GameObjects_model
/// Size: 0x0160 (0x000028 - 0x000188)
class UVGameplayRst_GameObjects_model : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(UVerseEngine_Entity_entity*)               __verse_0xC79F2B5D_InternalObject                           ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UVGameplayRst_Physics_collision_component*) __verse_0x42159B8D_CollisionComp                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UVGameplayRst_Geometry_fixed_mesh_component*) __verse_0xA6788863_MeshComp                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UVGameplayRst_Transform_position_component*) __verse_0x325D2C22_PositionComp                           ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UVGameplayRst_Transform_rotation_component*) __verse_0xF3C6D2D3_RotationComp                           ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UVGameplayRst_Transform_scale_component*)  __verse_0x1A7B631A_ScaleComp                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_GameObjects_model_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_GameObjects_model_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_GameObjects_mutable_model_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_GameObjects_mutable_model_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_GameObjects_world_anchor
/// Size: 0x0050 (0x000028 - 0x000078)
class UVGameplayRst_GameObjects_world_anchor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UVerseEngine_Entity_entity*)               __verse_0xC79F2B5D_InternalObject                           ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UVGameplayRst_Transform_position_component*) __verse_0x325D2C22_PositionComp                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component
/// Size: 0x0088 (0x0000A0 - 0x000128)
class UVGameplayRst_Geometry_fixed_mesh_component : public UEntityActorStaticMeshRenderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component
/// Size: 0x00D0 (0x000078 - 0x000148)
class UVGameplayRst_Geometry_skeletal_mesh_component : public UEntityActorSkeletalMeshRenderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component
/// Size: 0x0020 (0x000130 - 0x000150)
class UVGameplayRst_LevelStreaming_level_streaming_component : public UVerseLevelStreamingComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Lights_point_light_component
/// Size: 0x00A0 (0x000090 - 0x000130)
class UVGameplayRst_Lights_point_light_component : public UPointLightComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Lights_spot_light_component
/// Size: 0x00E0 (0x000090 - 0x000170)
class UVGameplayRst_Lights_spot_light_component : public USpotLightComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Messaging_debug_command_component
/// Size: 0x0078 (0x000058 - 0x0000D0)
class UVGameplayRst_Messaging_debug_command_component : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Physics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_collision_component
/// Size: 0x01C8 (0x0000F0 - 0x0002B8)
class UVGameplayRst_Physics_collision_component : public UEntityActorCollisionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_overlap_result
/// Size: 0x0048 (0x000028 - 0x000070)
class UVGameplayRst_Physics_overlap_result : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int64_t)                                   __verse_0x592C3A0F_OtherEntityID                            ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	CMember(UVGameplayRst_Physics_collision_component*) __verse_0x15DAA648_OtherComponent                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      __verse_0xCDE15551_FromSweep                                ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x02291CB0_SweepHitNormal                           ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xF4E2A3DA_SweepHitLocation                         ___ OFFSET(get<T>, {0x58, 24, 0, 0})
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace
/// Size: 0x00E8 (0x000028 - 0x000110)
class UVGameplayRst_Physics_physics_trace : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_mutable_positionable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Transform_mutable_positionable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_mutable_rotatable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Transform_mutable_rotatable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_mutable_scalable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Transform_mutable_scalable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_position_component
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UVGameplayRst_Transform_position_component : public UEntityActorPositionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_positionable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Transform_positionable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_rotatable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Transform_rotatable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_rotation_component
/// Size: 0x00A8 (0x000088 - 0x000130)
class UVGameplayRst_Transform_rotation_component : public UEntityActorRotationComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_scalable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVGameplayRst_Transform_scalable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Transform_scale_component
/// Size: 0x0050 (0x000080 - 0x0000D0)
class UVGameplayRst_Transform_scale_component : public UEntityActorScaleComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_VFX_particle_system_component
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UVGameplayRst_VFX_particle_system_component : public UParticleSystemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseMovement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_config_asset
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UVerseMovement_move_config_asset : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_movement_component
/// Size: 0x00A0 (0x000088 - 0x000128)
class UVerseMovement_movement_component : public UVerseMovementComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
};

/// Class /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_VerseMovementUtil
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseMovement_VerseMovementUtil : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVerseMovement_move_config)                __verse_0x40F5E85A_CarConfig                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI
/// Size: 0x0000 (0x000028 - 0x000028)
class UUI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_player_ui
/// Size: 0x0030 (0x0000D8 - 0x000108)
class UUI_player_ui : public UVersePlayerUIEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_widget
/// Size: 0x0060 (0x000038 - 0x000098)
class UUI_widget : public UVerseWidgetNativeBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_button
/// Size: 0x0058 (0x000098 - 0x0000F0)
class UUI_button : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FUI_button_slot)                           __verse_0x9693E4CD_Slot                                     ___ OFFSET(get<T>, {0xB8, 48, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x6B2BB37E_OnClickInternal                          ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_canvas
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UUI_canvas : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FUI_canvas_slot>)                   __verse_0x5AE077E0_Slots                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_color_block
/// Size: 0x0090 (0x000098 - 0x000128)
class UUI_color_block : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FColors_color)                             __verse_0xA0FC371C_DefaultColor                             ___ OFFSET(get<T>, {0xF8, 24, 0, 0})
	DMember(double)                                    __verse_0x5DA10C15_DefaultOpacity                           ___ OFFSET(get<double>, {0x110, 8, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x4DD253BC_DefaultDesiredSize                       ___ OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_material_block
/// Size: 0x0090 (0x000098 - 0x000128)
class UUI_material_block : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(UAssets_material*)                         __verse_0x800C064C_DefaultImage                             ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FColors_color)                             __verse_0xC0C585F9_DefaultTint                              ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x4DD253BC_DefaultDesiredSize                       ___ OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_overlay
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UUI_overlay : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FUI_overlay_slot>)                  __verse_0x5AE077E0_Slots                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_simple_button_internal
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UUI_simple_button_internal : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UVerse_message*)                           __verse_0xEDB05B46_DefaultText                              ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x6B2BB37E_OnClickInternal                          ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_stack_box
/// Size: 0x0038 (0x000098 - 0x0000D0)
class UUI_stack_box : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FUI_stack_box_slot>)                __verse_0x5AE077E0_Slots                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UI_orientation)                            __verse_0x4DFAB8C8_Orientation                              ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_text_base
/// Size: 0x00D0 (0x000098 - 0x000168)
class UUI_text_base : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UVerse_message*)                           __verse_0xEDB05B46_DefaultText                              ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FColors_color)                             __verse_0x5DC97209_DefaultTextColor                         ___ OFFSET(get<T>, {0x140, 24, 0, 0})
	DMember(double)                                    __verse_0x1EA9AC7C_DefaultTextOpacity                       ___ OFFSET(get<double>, {0x158, 8, 0, 0})
	CMember(UI_text_justification)                     __verse_0x616A37A2_DefaultJustification                     ___ OFFSET(get<T>, {0x160, 1, 0, 0})
	CMember(UI_text_overflow_policy)                   __verse_0x5C09BE1D_DefaultOverflowPolicy                    ___ OFFSET(get<T>, {0x161, 1, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_text_block_internal
/// Size: 0x0000 (0x000168 - 0x000168)
class UUI_text_block_internal : public UUI_text_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_texture_block
/// Size: 0x00B8 (0x000098 - 0x000150)
class UUI_texture_block : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UAssets_texture*)                          __verse_0x800C064C_DefaultImage                             ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FColors_color)                             __verse_0xC0C585F9_DefaultTint                              ___ OFFSET(get<T>, {0x120, 24, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x4DD253BC_DefaultDesiredSize                       ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(UI_image_tiling)                           __verse_0xAF9B7624_DefaultHorizontalTiling                  ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UI_image_tiling)                           __verse_0xF679588B_DefaultVerticalTiling                    ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_user_widget
/// Size: 0x0028 (0x000098 - 0x0000C0)
class UUI_user_widget : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UUI_widget_class*)                         __verse_0x26CD6686_Asset                                    ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<FUI_user_widget_slot>)              __verse_0x5AE077E0_Slots                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /VerseUI/_Verse/VNI/VerseUI.UI_widget_class
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UUI_widget_class : public UAssets_client_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseWorldPartition/_Verse/VNI/VerseWorldPartition.VerseWorldPartition
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseWorldPartition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseWorldPartition/_Verse/VNI/VerseWorldPartition.VerseWorldPartition_data_layer_asset
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UVerseWorldPartition_data_layer_asset : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseWorldPartition/_Verse/VNI/VerseWorldPartition.VerseWorldPartition_data_layer_manager
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseWorldPartition_data_layer_manager : public UVerseDataLayerManagerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_playspace_component
/// Size: 0x00E0 (0x000058 - 0x000138)
class UPlayspace_playspace_component : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /VersePlayspace/_Verse/VNI/VersePlayspace.task_Playspace_playspace_component$__WaitForMatchBegin
/// Size: 0x0009 (0x000140 - 0x000149)
class Utask_Playspace_playspace_component___WaitForMatchBegin : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 329;

public:
	CMember(UPlayspace_playspace_component*)           _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VersePlayspace/_Verse/VNI/VersePlayspace.task_Playspace_playspace_component$__WaitForMatchEnd
/// Size: 0x0009 (0x000140 - 0x000149)
class Utask_Playspace_playspace_component___WaitForMatchEnd : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 329;

public:
	CMember(UPlayspace_playspace_component*)           _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VersePlayspace/_Verse/VNI/VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerAdded
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_Playspace_playspace_component___WaitForPlayerAdded : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UPlayspace_playspace_component*)           _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(USimulation_player_component*)             _RetVal                                                     ___ OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /VersePlayspace/_Verse/VNI/VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerRemoved
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_Playspace_playspace_component___WaitForPlayerRemoved : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UPlayspace_playspace_component*)           _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(USimulation_player_component*)             _RetVal                                                     ___ OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /VersePlayspace/_Verse/VNI/VersePlayspace.task_Playspace_playspace_component$__WaitForSetupComplete
/// Size: 0x0009 (0x000140 - 0x000149)
class Utask_Playspace_playspace_component___WaitForSetupComplete : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 329;

public:
	CMember(UPlayspace_playspace_component*)           _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseBasicGameplay/_Verse/VNI/VerseBasicGameplay.task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents
/// Size: 0x02A0 (0x000140 - 0x0003E0)
class Utask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(UVerseBasicGameplay_PlayerManager_basic_player_manager_impl*) _Self                                    ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(int64_t)                                   _AsyncEndCount                                              ___ OFFSET(get<int64_t>, {0x150, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x158, 1, 1, 0})
	CMember(USimulation_player*)                       __verse_0x31268F5C_PlayerAdded                              ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(USimulation_player_component*)             __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	CMember(UPlayspace_playspace_component*)           __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x198, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1B0, 1, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x8C908304_MulticastDelegate                        ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	CMember(USimulation_player*)                       __verse_0x0B5DEACA_PlayerRemoved                            ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	CMember(USimulation_player_component*)             __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(UPlayspace_playspace_component*)           __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x238, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x250, 1, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x8C908304_MulticastDelegate1                       ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x270, 1, 0, 0})
	DMember(int64_t)                                   _AsyncEndCount1                                             ___ OFFSET(get<int64_t>, {0x298, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	CMember(USimulation_player*)                       __verse_0x31268F5C_PlayerAdded1                             ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USimulation_player_component*)             __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UPlayspace_playspace_component*)           __verse_0x00000000_7                                        ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x2D8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x2F8, 1, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x8C908304_MulticastDelegate2                       ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x00000000_8                                        ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x318, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x340, 1, 1, 0})
	CMember(USimulation_player*)                       __verse_0x0B5DEACA_PlayerRemoved1                           ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(USimulation_player_component*)             __verse_0x00000000_9                                        ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UPlayspace_playspace_component*)           __verse_0x00000000_10                                       ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x378, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x380, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x398, 1, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x8C908304_MulticastDelegate3                       ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(USimulation_player_multicast_delegate*)    __verse_0x00000000_11                                       ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x3B8, 1, 0, 0})
};

/// Class /VerseBasicGameplay/_Verse/VNI/VerseBasicGameplay.VerseBasicGameplay_PlayerManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseBasicGameplay_PlayerManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseBasicGameplay/_Verse/VNI/VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager
/// Size: 0x0038 (0x000028 - 0x000060)
class UVerseBasicGameplay_PlayerManager_basic_player_manager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UPlayspace_playspace_component*)           __verse_0xBC454097_ThePlayspace                             ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x7DC483AF_PlayerAddedEvent                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x5DE94DD9_PlayerRemovedEvent                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /VerseBasicGameplay/_Verse/VNI/VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl
/// Size: 0x0010 (0x000060 - 0x000070)
class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl : public UVerseBasicGameplay_PlayerManager_basic_player_manager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.AI
/// Size: 0x0000 (0x000028 - 0x000028)
class UAI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.AI_ai_behavior
/// Size: 0x0050 (0x000090 - 0x0000E0)
class UAI_ai_behavior : public UAIBehaviorScript
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.AI_focus_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAI_focus_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.AI_fort_leashable
/// Size: 0x0000 (0x000028 - 0x000028)
class UAI_fort_leashable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.AI_fort_threat_perception_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAI_fort_threat_perception_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.AI_navigatable
/// Size: 0x0000 (0x000028 - 0x000028)
class UAI_navigatable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.AI_navigation_target
/// Size: 0x0020 (0x000028 - 0x000048)
class UAI_navigation_target : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Characters
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacters : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Characters_fort_character
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacters_fort_character : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Characters_fort_character_impl
/// Size: 0x0330 (0x000050 - 0x000380)
class UCharacters_fort_character_impl : public UVerseFortniteCharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(UVerseEngine_subscribable_event*)          __verse_0x4DE1175C_DamagedHealthEventInternal               ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x3EFD7EED_DamagedShieldEventInternal               ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0xF4EDADDB_HealedHealthEventInternal                ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x87F1C46A_HealedShieldEventInternal                ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x0008931F_CrouchedEventInternal                    ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0xCE63A4CB_JumpedEventInternal                      ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x242DF4E0_SprintedEventInternal                    ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x5587B813_EliminatedEventInternal                  ___ OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.FortPlayerUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortPlayerUtilities : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_agent_instigator_impl
/// Size: 0x0008 (0x000028 - 0x000030)
class UGame_agent_instigator_impl : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(USimulation_agent*)                        __verse_0x8D191063_TheAgent                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_damageable
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_damageable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_game_action_causer
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_game_action_causer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_game_action_instigator
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_game_action_instigator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_healable
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_healable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_healthful
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_healthful : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_positional
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_positional : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Game_shieldable
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_shieldable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace
/// Size: 0x0000 (0x000028 - 0x000028)
class UPlayspaces_fort_playspace : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Playspaces_fort_playspace_impl
/// Size: 0x0050 (0x0000B8 - 0x000108)
class UPlayspaces_fort_playspace_impl : public UVerseFortnitePlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(UVerseEngine_subscribable_event*)          __verse_0xD574E81A_PlayerAddedEventInternal                 ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x91891F4A_PlayerRemovedEventInternal               ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.task_AI_ai_behavior$OnBegin
/// Size: 0x0009 (0x000140 - 0x000149)
class Utask_AI_ai_behavior_OnBegin : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 329;

public:
	CMember(UAI_ai_behavior*)                          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nagent_R
/// Size: 0x0010 (0x000140 - 0x000150)
class Utask_AI_focus_interface_MaintainFocus_L_Nagent_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UAI_focus_interface*)                      _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nvector3_R
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_AI_focus_interface_MaintainFocus_L_Nvector3_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UAI_focus_interface*)                      _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 24, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
/// Size: 0x0029 (0x000140 - 0x000169)
class Utask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 361;

public:
	CMember(UAI_navigatable*)                          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) __verse_0xB2CDDD72_Argument ___ OFFSET(get<T>, {0x148, 32, 0, 0})
	CMember(AI_navigation_result)                      _RetVal                                                     ___ OFFSET(get<T>, {0x168, 1, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UAI_navigatable*)                          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Teams_fort_br_team_collection
/// Size: 0x0070 (0x000090 - 0x000100)
class UTeams_fort_br_team_collection : public UVerseFortniteBRTeamCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Teams_fort_minigame_team_collection
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UTeams_fort_minigame_team_collection : public UVerseFortniteMinigameTeamCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Teams_fort_team_collection
/// Size: 0x0000 (0x000028 - 0x000028)
class UTeams_fort_team_collection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Vehicles
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicles : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Vehicles_fort_vehicle
/// Size: 0x0000 (0x000028 - 0x000028)
class UVehicles_fort_vehicle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortnite/_Verse/VNI/VerseFortnite.Vehicles_fort_vehicle_impl
/// Size: 0x00C8 (0x000048 - 0x000110)
class UVehicles_fort_vehicle_impl : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(UVerseEngine_subscribable_event*)          __verse_0x4996425D_DamagedEventInternal                     ___ OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_ability_component
/// Size: 0x00A8 (0x000090 - 0x000138)
class UGame_Abilities_ability_component : public UVerseFortniteAbilityComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Abilities_AbilityComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UGame_Abilities_gameplay_ability_asset : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UGame_Abilities_gameplay_effect_asset : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
/// Size: 0x0021 (0x000140 - 0x000161)
class Utask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 353;

public:
	CMember(UGame_Abilities_ability_component*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R) __verse_0xB2CDDD72_Argument   ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	CMember(Game_Abilities_activate_ability_result)    _RetVal                                                     ___ OFFSET(get<T>, {0x160, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R
/// Size: 0x0031 (0x000140 - 0x000171)
class Utask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 369;

public:
	CMember(UVerseAIBase_fort_character_actions_interface*) _Self                                                  ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x170, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R
/// Size: 0x0041 (0x000140 - 0x000181)
class Utask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 385;

public:
	CMember(UVerseAIBase_fort_character_actions_interface*) _Self                                                  ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x180, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R
/// Size: 0x0031 (0x000140 - 0x000171)
class Utask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 369;

public:
	CMember(UVerseAIBase_fort_character_actions_interface*) _Self                                                  ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FVerseAIBase_fort_loot_info)               __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x170, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_character_actions_interface*) _Self                                                  ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R
/// Size: 0x0011 (0x000140 - 0x000151)
class Utask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 337;

public:
	CMember(UVerseAIBase_fort_character_actions_interface*) _Self                                                  ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(VerseAIBase_fallible_action_result)        _RetVal                                                     ___ OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Crouch
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_character_movement_interface_Crouch : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_character_movement_interface*) _Self                                                 ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_fallible_action_result)        _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Jump
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_character_movement_interface_Jump : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_character_movement_interface*) _Self                                                 ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Slide
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_character_movement_interface_Slide : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_character_movement_interface*) _Self                                                 ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Sprint
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_character_movement_interface_Sprint : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_character_movement_interface*) _Self                                                 ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_movement_interface$TacticalSprint
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_character_movement_interface_TacticalSprint : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_character_movement_interface*) _Self                                                 ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Walk
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_character_movement_interface_Walk : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_character_movement_interface*) _Self                                                 ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_navigatable$MoveInRangeToAttack
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_navigatable_MoveInRangeToAttack : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_navigatable*)            _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.task_VerseAIBase_fort_navigatable$RoamAround
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseAIBase_fort_navigatable_RoamAround : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseAIBase_fort_navigatable*)            _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(AI_navigation_result)                      _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_character_actions_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_character_actions_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_character_movement_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_character_movement_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_creature_actions_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_creature_actions_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_inventory_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_inventory_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_inventory_item_asset
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UVerseAIBase_fort_inventory_item_asset : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_item_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_item_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_item_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_item_tag : public UTags_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_loot_perception_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_loot_perception_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_navigatable
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_navigatable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_obstacle_perception_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_obstacle_perception_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_resource_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_resource_tag : public UVerseAIBase_fort_item_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_metal_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_metal_tag : public UVerseAIBase_fort_resource_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_stone_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_stone_tag : public UVerseAIBase_fort_resource_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_target_selection_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_target_selection_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_weapon_actions_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_weapon_actions_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_weapon_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_weapon_tag : public UVerseAIBase_fort_item_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_melee_weapon_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_melee_weapon_tag : public UVerseAIBase_fort_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_pickaxe_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_pickaxe_tag : public UVerseAIBase_fort_melee_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_range_weapon_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_range_weapon_tag : public UVerseAIBase_fort_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_biplane_gun_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_biplane_gun_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_bow_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_bow_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_grenade_launcher_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_grenade_launcher_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_LMG_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_LMG_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_mini_gun_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_mini_gun_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_pistol_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_pistol_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_rifle_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_rifle_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_rocket_launcher_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_rocket_launcher_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_shotgun_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_shotgun_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_SMG_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_SMG_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_sniper_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_sniper_tag : public UVerseAIBase_fort_range_weapon_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_wood_tag
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_fort_wood_tag : public UVerseAIBase_fort_resource_tag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_FortCreatureActionsModule
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseAIBase_FortCreatureActionsModule : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R
/// Size: 0x0010 (0x000140 - 0x000150)
class Utask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UVerseCreature_creature_component*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UVerseCreature_creature_component*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 24, 0, 0})
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.task_VerseCreature_creature_component$MoveInRangeToAttack
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseCreature_creature_component_MoveInRangeToAttack : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseCreature_creature_component*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
/// Size: 0x0029 (0x000140 - 0x000169)
class Utask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 361;

public:
	CMember(UVerseCreature_creature_component*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) __verse_0xB2CDDD72_Argument ___ OFFSET(get<T>, {0x148, 32, 0, 0})
	CMember(AI_navigation_result)                      _RetVal                                                     ___ OFFSET(get<T>, {0x168, 1, 0, 0})
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.task_VerseCreature_creature_component$RoamAround
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseCreature_creature_component_RoamAround : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseCreature_creature_component*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(AI_navigation_result)                      _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UVerseCreature_creature_component*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.VerseCreature_creature_component
/// Size: 0x0080 (0x0000B0 - 0x000130)
class UVerseCreature_creature_component : public UAIActionsComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /VerseCreature/_Verse/VNI/VerseCreature.VerseCreature_creature_perception_component
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UVerseCreature_creature_perception_component : public UCreaturePerceptionComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R
/// Size: 0x0031 (0x000140 - 0x000171)
class Utask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 369;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x170, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R
/// Size: 0x0041 (0x000140 - 0x000181)
class Utask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 385;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x180, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$Crouch
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_Crouch : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_fallible_action_result)        _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$Jump
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_Jump : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R
/// Size: 0x0031 (0x000140 - 0x000171)
class Utask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 369;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FVerseAIBase_fort_loot_info)               __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x170, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R
/// Size: 0x0010 (0x000140 - 0x000150)
class Utask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 24, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$MoveInRangeToAttack
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_MoveInRangeToAttack : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
/// Size: 0x0029 (0x000140 - 0x000169)
class Utask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 361;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) __verse_0xB2CDDD72_Argument ___ OFFSET(get<T>, {0x148, 32, 0, 0})
	CMember(AI_navigation_result)                      _RetVal                                                     ___ OFFSET(get<T>, {0x168, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$PlayRandomEmote
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_PlayRandomEmote : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$Revive_L_Nagent_R
/// Size: 0x0011 (0x000140 - 0x000151)
class Utask_VerseNPC_npc_component_Revive_L_Nagent_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 337;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(VerseAIBase_fallible_action_result)        _RetVal                                                     ___ OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$RoamAround
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_RoamAround : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(AI_navigation_result)                      _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$Slide
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_Slide : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$Sprint
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_Sprint : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$TacticalSprint
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_TacticalSprint : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.task_VerseNPC_npc_component$Walk
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_VerseNPC_npc_component_Walk : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UVerseNPC_npc_component*)                  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.VerseNPC_inventory_component
/// Size: 0x00C8 (0x000098 - 0x000160)
class UVerseNPC_inventory_component : public UInventoryComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.VerseNPC_leash_component
/// Size: 0x0030 (0x000090 - 0x0000C0)
class UVerseNPC_leash_component : public ULeashComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.VerseNPC_npc_component
/// Size: 0x0170 (0x0000B0 - 0x000220)
class UVerseNPC_npc_component : public UAIActionsComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /VerseNPC/_Verse/VNI/VerseNPC.VerseNPC_npc_perception_component
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UVerseNPC_npc_perception_component : public UNPCPerceptionComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(UVerseEngine_subscribable_event*)          __verse_0xE0E8A985_CurrentThreatChangedEventInternal        ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x12343732_CurrentThreatStatusChangedEventInternal  ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0xB7573589_ObstacleChangedEventInternal             ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x1F8E9B61_BestObjectToLootChangedEventInternal     ___ OFFSET(get<T>, {0x180, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompanionAI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_ai
/// Size: 0x0068 (0x0000E0 - 0x000148)
class UCompanionAI_companion_ai : public UAI_ai_behavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(UDiagnostics_log*)                         __verse_0xF524C2AC_Logger                                   ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x8E43B8AF_DebugDraw                                ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      __verse_0x4222121E_DebugDisplay                             ___ OFFSET(get<bool>, {0xF0, 1, 1, 0})
	SMember(FColors_color)                             __verse_0x71320F52_DebugScreenColor                         ___ OFFSET(get<T>, {0xF8, 24, 0, 0})
	DMember(double)                                    __verse_0x2D4D6684_DebugScreenDuration                      ___ OFFSET(get<double>, {0x110, 8, 0, 0})
	DMember(double)                                    __verse_0x5155C58D_GoToLeashDistance                        ___ OFFSET(get<double>, {0x118, 8, 0, 0})
	DMember(double)                                    __verse_0x4D92C49B_GoToAttackTargetDistance                 ___ OFFSET(get<double>, {0x120, 8, 0, 0})
	DMember(double)                                    __verse_0x8D041DAB_HoldPositionLeashDistance                ___ OFFSET(get<double>, {0x128, 8, 0, 0})
	DMember(double)                                    __verse_0x5EF17E77_BackToMeMovementThreshold                ___ OFFSET(get<double>, {0x130, 8, 0, 0})
	DMember(double)                                    __verse_0x80F3C16A_ReviveDistance                           ___ OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(double)                                    __verse_0x53BD03B7_AttackCommand_TargetProximityRadius      ___ OFFSET(get<double>, {0x140, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_ai_runtime
/// Size: 0x02A0 (0x000028 - 0x0002C8)
class UCompanionAI_companion_ai_runtime : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(UCompanionAI_companion_ai*)                __verse_0xF8ADD547_CompanionAIScript                        ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xD2827887_Navigatable                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x47B0B441_CharacterMovement                        ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xA4160F11_Leashable                                ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x3FE20196_FortPing                                 ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x03CEBA4E_CharacterActions                         ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x6F5C8C64_FocusInterface                           ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xF161303F_WeaponActions                            ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x0F05355D_ThreatPerception                         ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00C33D6C_ObstaclePerception                       ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x27386837_TargetSelection                          ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature
/// Size: 0x0060 (0x0000E0 - 0x000140)
class UCompanionAI_companion_creature : public UAI_ai_behavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(UDiagnostics_log*)                         __verse_0xF524C2AC_Logger                                   ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x8E43B8AF_DebugDraw                                ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      __verse_0x4222121E_DebugDisplay                             ___ OFFSET(get<bool>, {0xF0, 1, 1, 0})
	SMember(FColors_color)                             __verse_0x71320F52_DebugScreenColor                         ___ OFFSET(get<T>, {0xF8, 24, 0, 0})
	DMember(double)                                    __verse_0x2D4D6684_DebugScreenDuration                      ___ OFFSET(get<double>, {0x110, 8, 0, 0})
	DMember(double)                                    __verse_0x474367D7_EngageThreatsWithinDistance              ___ OFFSET(get<double>, {0x118, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_companion_creature_runtime
/// Size: 0x00E8 (0x000028 - 0x000110)
class UCompanionAI_companion_creature_runtime : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(UCompanionAI_companion_creature*)          __verse_0xF685FDC9_Creature                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xD2827887_Navigatable                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x8FB74E85_AbilitySystemComponent                   ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xDE2F615F_Perception                               ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x8D6253CB_Focus                                    ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_default_ai_behavior
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UCompanionAI_default_ai_behavior : public UAI_ai_behavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_fort_br_character_actions_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompanionAI_fort_br_character_actions_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_fort_br_creature_actions_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompanionAI_fort_br_creature_actions_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_fort_creature_component
/// Size: 0x0010 (0x000130 - 0x000140)
class UCompanionAI_fort_creature_component : public UVerseCreature_creature_component
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_fort_npc_component
/// Size: 0x0020 (0x000220 - 0x000240)
class UCompanionAI_fort_npc_component : public UVerseNPC_npc_component
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_fort_ping_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompanionAI_fort_ping_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_log_companion_ai
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompanionAI_log_companion_ai : public UDiagnostics_log_channel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_log_companion_creature
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompanionAI_log_companion_creature : public UDiagnostics_log_channel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_ping_component
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UCompanionAI_ping_component : public UPingComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UVerseEngine_multicast_delegate*)          __verse_0xC18257FD_ConvertedEventInternal                   ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(UVerseEngine_multicast_delegate*)          __verse_0x0E297686_UnconvertedEventInternal                 ___ OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai$OnBegin
/// Size: 0x0818 (0x000140 - 0x000958)
class Utask_CompanionAI_companion_ai_OnBegin : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2392;

public:
	CMember(UCompanionAI_companion_ai*)                _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character                                ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult1                                                ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x1C1, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x1C2, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xD2827887_Navigatable                              ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult5                                          ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x1F9, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xA4160F11_Leashable                                ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult8                                          ___ OFFSET(get<T>, {0x220, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x231, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x47B0B441_CharacterMovement                        ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult11                                         ___ OFFSET(get<T>, {0x258, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x268, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult13                                               ___ OFFSET(get<T>, {0x269, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x3FE20196_FortPing                                 ___ OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult14                                         ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x2A0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult16                                               ___ OFFSET(get<T>, {0x2A1, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x03CEBA4E_CharacterActions                         ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult17                                         ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult18                                               ___ OFFSET(get<T>, {0x2D8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0x2D9, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xF161303F_WeaponActions                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult20                                         ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult21                                               ___ OFFSET(get<T>, {0x310, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult22                                               ___ OFFSET(get<T>, {0x311, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x0F05355D_ThreatPerception                         ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult23                                         ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult24                                               ___ OFFSET(get<T>, {0x348, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult25                                               ___ OFFSET(get<T>, {0x349, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00C33D6C_ObstaclePerception                       ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult26                                         ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult27                                               ___ OFFSET(get<T>, {0x380, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult28                                               ___ OFFSET(get<T>, {0x381, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x27386837_TargetSelection                          ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult29                                         ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult30                                               ___ OFFSET(get<T>, {0x3B8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult31                                               ___ OFFSET(get<T>, {0x3B9, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x6F5C8C64_FocusInterface                           ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult32                                         ___ OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult33                                               ___ OFFSET(get<T>, {0x3F0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult34                                               ___ OFFSET(get<T>, {0x3F1, 1, 0, 0})
	CMember(UCompanionAI_companion_ai_runtime*)        __verse_0x2B0A024B_CompanionAIRuntime                       ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCompanionAI_companion_ai_runtime*)        __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult35                                               ___ OFFSET(get<T>, {0x420, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x428, 8, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x448, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult36                                 ___ OFFSET(get<T>, {0x460, 24, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x47A, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R) _ExprResult37 ___ OFFSET(get<T>, {0x490, 64, 0, 0})
	SMember(Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R) __verse_0x00000000_3                              ___ OFFSET(get<T>, {0x4D0, 64, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x560, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult38                                               ___ OFFSET(get<T>, {0x578, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character1                               ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult39                                               ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult40                                               ___ OFFSET(get<T>, {0x5C8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult41                                               ___ OFFSET(get<T>, {0x5C9, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult42                                               ___ OFFSET(get<T>, {0x5CA, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xD2827887_Navigatable1                             ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult43                                         ___ OFFSET(get<T>, {0x5F0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult44                                               ___ OFFSET(get<T>, {0x600, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult45                                               ___ OFFSET(get<T>, {0x601, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xA4160F11_Leashable1                               ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult46                                         ___ OFFSET(get<T>, {0x628, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult47                                               ___ OFFSET(get<T>, {0x638, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult48                                               ___ OFFSET(get<T>, {0x639, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x47B0B441_CharacterMovement1                       ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult49                                         ___ OFFSET(get<T>, {0x660, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult50                                               ___ OFFSET(get<T>, {0x670, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult51                                               ___ OFFSET(get<T>, {0x671, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x3FE20196_FortPing1                                ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult52                                         ___ OFFSET(get<T>, {0x698, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult53                                               ___ OFFSET(get<T>, {0x6A8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult54                                               ___ OFFSET(get<T>, {0x6A9, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x03CEBA4E_CharacterActions1                        ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult55                                         ___ OFFSET(get<T>, {0x6D0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult56                                               ___ OFFSET(get<T>, {0x6E0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult57                                               ___ OFFSET(get<T>, {0x6E1, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xF161303F_WeaponActions1                           ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult58                                         ___ OFFSET(get<T>, {0x708, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult59                                               ___ OFFSET(get<T>, {0x718, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult60                                               ___ OFFSET(get<T>, {0x719, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x0F05355D_ThreatPerception1                        ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult61                                         ___ OFFSET(get<T>, {0x740, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult62                                               ___ OFFSET(get<T>, {0x750, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult63                                               ___ OFFSET(get<T>, {0x751, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00C33D6C_ObstaclePerception1                      ___ OFFSET(get<T>, {0x758, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult64                                         ___ OFFSET(get<T>, {0x778, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult65                                               ___ OFFSET(get<T>, {0x788, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult66                                               ___ OFFSET(get<T>, {0x789, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x27386837_TargetSelection1                         ___ OFFSET(get<T>, {0x790, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult67                                         ___ OFFSET(get<T>, {0x7B0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult68                                               ___ OFFSET(get<T>, {0x7C0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult69                                               ___ OFFSET(get<T>, {0x7C1, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x6F5C8C64_FocusInterface1                          ___ OFFSET(get<T>, {0x7C8, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult70                                         ___ OFFSET(get<T>, {0x7E8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult71                                               ___ OFFSET(get<T>, {0x7F8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult72                                               ___ OFFSET(get<T>, {0x7F9, 1, 0, 0})
	CMember(UCompanionAI_companion_ai_runtime*)        __verse_0x2B0A024B_CompanionAIRuntime1                      ___ OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UCompanionAI_companion_ai_runtime*)        __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x810, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult73                                               ___ OFFSET(get<T>, {0x828, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x830, 8, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x850, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult74                                 ___ OFFSET(get<T>, {0x868, 24, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x882, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R) _ExprResult75 ___ OFFSET(get<T>, {0x898, 64, 0, 0})
	SMember(Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R) __verse_0x00000000_7                              ___ OFFSET(get<T>, {0x8D8, 64, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R
/// Size: 0x08A8 (0x000140 - 0x0009E8)
class Utask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2536;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	DMember(bool)                                      _RetVal                                                     ___ OFFSET(get<bool>, {0x180, 1, 1, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x181, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter                                  ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x6B4100B8_EmitterCharacter                         ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult                                                 ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x1E9, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xC487D1E7_EmitterAgent                             ___ OFFSET(get<T>, {0x1F0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(double)                                    _ExprResultStack                                            ___ OFFSET(get<double>, {0x230, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult4                                                ___ OFFSET(get<T>, {0x248, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult5                                                ___ OFFSET(get<T>, {0x280, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x2F8, 1, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult7                                                ___ OFFSET(get<T>, {0x300, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x378, 1, 0, 0})
	DMember(bool)                                      __verse_0xC96E9091_HasRevivedEmitter                        ___ OFFSET(get<bool>, {0x379, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x398, 8, 0, 0})
	CMember(TArray<USimulation_agent*>)                __verse_0xBFBCE682_TeamMembers                              ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult9                                                ___ OFFSET(get<T>, {0x3C8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x3D8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x3D9, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex                                                   ___ OFFSET(get<int64_t>, {0x3E0, 8, 0, 0})
	DMember(int64_t)                                   _ForLength                                                  ___ OFFSET(get<int64_t>, {0x3E8, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xAE35E375_TeamMember                               ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	DMember(double)                                    _ExprResultStack1                                           ___ OFFSET(get<double>, {0x408, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult12                                               ___ OFFSET(get<T>, {0x420, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult13                                               ___ OFFSET(get<T>, {0x450, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult14                                               ___ OFFSET(get<T>, {0x4D0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x4E0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult16                                               ___ OFFSET(get<T>, {0x4E1, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult17                                               ___ OFFSET(get<T>, {0x4F8, 1, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult18                                               ___ OFFSET(get<T>, {0x500, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0x578, 1, 0, 0})
	DMember(bool)                                      __verse_0x87226150_HasRevivedTeamMember                     ___ OFFSET(get<bool>, {0x579, 1, 1, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x592, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x5B8, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter1                                 ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x6B4100B8_EmitterCharacter1                        ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult20                                               ___ OFFSET(get<T>, {0x610, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult21                                               ___ OFFSET(get<T>, {0x620, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult22                                               ___ OFFSET(get<T>, {0x621, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xC487D1E7_EmitterAgent1                            ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult23                                               ___ OFFSET(get<T>, {0x650, 1, 0, 0})
	DMember(double)                                    _ExprResultStack2                                           ___ OFFSET(get<double>, {0x668, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult24                                               ___ OFFSET(get<T>, {0x680, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult25                                               ___ OFFSET(get<T>, {0x6B0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult26                                               ___ OFFSET(get<T>, {0x728, 1, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult27                                               ___ OFFSET(get<T>, {0x730, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_7                                        ___ OFFSET(get<T>, {0x790, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult28                                               ___ OFFSET(get<T>, {0x7A8, 1, 0, 0})
	DMember(bool)                                      __verse_0xC96E9091_HasRevivedEmitter1                       ___ OFFSET(get<bool>, {0x7A9, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x7B0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x7C8, 8, 0, 0})
	CMember(TArray<USimulation_agent*>)                __verse_0xBFBCE682_TeamMembers1                             ___ OFFSET(get<T>, {0x7D8, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult29                                               ___ OFFSET(get<T>, {0x7F8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult30                                               ___ OFFSET(get<T>, {0x808, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult31                                               ___ OFFSET(get<T>, {0x809, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex1                                                  ___ OFFSET(get<int64_t>, {0x810, 8, 0, 0})
	DMember(int64_t)                                   _ForLength1                                                 ___ OFFSET(get<int64_t>, {0x818, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xAE35E375_TeamMember1                              ___ OFFSET(get<T>, {0x820, 8, 0, 0})
	DMember(double)                                    _ExprResultStack3                                           ___ OFFSET(get<double>, {0x838, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult32                                               ___ OFFSET(get<T>, {0x850, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult33                                               ___ OFFSET(get<T>, {0x880, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_8                                        ___ OFFSET(get<T>, {0x8E0, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult34                                               ___ OFFSET(get<T>, {0x900, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult35                                               ___ OFFSET(get<T>, {0x910, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult36                                               ___ OFFSET(get<T>, {0x911, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult37                                               ___ OFFSET(get<T>, {0x928, 1, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult38                                               ___ OFFSET(get<T>, {0x930, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_9                                        ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult39                                               ___ OFFSET(get<T>, {0x9A8, 1, 0, 0})
	DMember(bool)                                      __verse_0x87226150_HasRevivedTeamMember1                    ___ OFFSET(get<bool>, {0x9A9, 1, 1, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x9C2, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchService
/// Size: 0x00B0 (0x000140 - 0x0001F0)
class Utask_CompanionAI_companion_ai_runtime_CrouchService : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x168, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x188, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x1B8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1D8, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchUntilHit
/// Size: 0x0248 (0x000140 - 0x000388)
class Utask_CompanionAI_companion_ai_runtime_CrouchUntilHit : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x149, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x170, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x171, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1A8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x1B0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x1D8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x1E0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x200, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x208, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x210, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x238, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x240, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x268, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x290, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x291, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x2D0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x2F0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x2F8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount8                                           ___ OFFSET(get<bool>, {0x300, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x320, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x328, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount9                                           ___ OFFSET(get<bool>, {0x330, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x350, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x358, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x360, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
/// Size: 0x03C1 (0x000140 - 0x000501)
class Utask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1281;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Mcolor_R)           __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	SMember(Ftuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R) _ExprResult ___ OFFSET(get<T>, {0x1A8, 128, 0, 0})
	SMember(Ftuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R) __verse_0x00000000_1 ___ OFFSET(get<T>, {0x228, 112, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x318, 8, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x328, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x340, 1, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x350, 1, 0, 0})
	SMember(Ftuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R) _ExprResult2 ___ OFFSET(get<T>, {0x368, 128, 0, 0})
	SMember(Ftuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R) __verse_0x00000000_4 ___ OFFSET(get<T>, {0x3E8, 112, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x4D8, 8, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x4E8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x500, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GameLoop
/// Size: 0x0730 (0x000140 - 0x000870)
class Utask_CompanionAI_companion_ai_runtime_GameLoop : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(bool)                                      _ExprResult                                                 ___ OFFSET(get<bool>, {0x188, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1A8, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x1E0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1E8, 8, 0, 0})
	DMember(bool)                                      _ExprResult3                                                ___ OFFSET(get<bool>, {0x232, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x258, 1, 0, 0})
	CMember(UObject*)                                  _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x280, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x298, 1, 0, 0})
	CMember(UObject*)                                  _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0x78680F6D_CurrentCommand                           ___ OFFSET(get<T>, {0x2B8, 56, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x330, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x331, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x398, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x3A8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x3C8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_7                                        ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x3D8, 1, 0, 0})
	DMember(bool)                                      _ExprResult7                                                ___ OFFSET(get<bool>, {0x432, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x435, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x436, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_8                                        ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x458, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x460, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x468, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_9                                        ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x4D0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x4D8, 8, 0, 0})
	DMember(bool)                                      _ExprResult10                                               ___ OFFSET(get<bool>, {0x518, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_10                                       ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x538, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_11                                       ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x570, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x578, 8, 0, 0})
	DMember(bool)                                      _ExprResult13                                               ___ OFFSET(get<bool>, {0x5C2, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_12                                       ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_13                                       ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult14                                               ___ OFFSET(get<T>, {0x5E8, 1, 0, 0})
	CMember(UObject*)                                  _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_14                                       ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_15                                       ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x628, 1, 0, 0})
	CMember(UObject*)                                  _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0x78680F6D_CurrentCommand1                          ___ OFFSET(get<T>, {0x648, 56, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x6C0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x6C1, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_16                                       ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult16                                               ___ OFFSET(get<T>, {0x728, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x730, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount8                                           ___ OFFSET(get<bool>, {0x738, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x758, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_17                                       ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x768, 1, 0, 0})
	DMember(bool)                                      _ExprResult17                                               ___ OFFSET(get<bool>, {0x7C2, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount9                                           ___ OFFSET(get<bool>, {0x7C5, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount10                                          ___ OFFSET(get<bool>, {0x7C6, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_18                                       ___ OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask8                                                 ___ OFFSET(get<T>, {0x7D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult18                                               ___ OFFSET(get<T>, {0x7E8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult8                                               ___ OFFSET(get<int64_t>, {0x7F0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount11                                          ___ OFFSET(get<bool>, {0x7F8, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_19                                       ___ OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask9                                                 ___ OFFSET(get<T>, {0x848, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0x860, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult9                                               ___ OFFSET(get<int64_t>, {0x868, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R
/// Size: 0x07F0 (0x000140 - 0x000930)
class Utask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	DMember(bool)                                      _ExprResult                                                 ___ OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x248, 8, 0, 0})
	DMember(double)                                    __verse_0x0E44D420_ClosestTargetDistance                    ___ OFFSET(get<double>, {0x250, 8, 0, 0})
	DMember(bool)                                      _ExprResult2                                                ___ OFFSET(get<bool>, {0x29A, 1, 1, 0})
	CMember(TArray<FAI_fort_threat_info>)              _ForIterable                                                ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x2E0, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex                                                   ___ OFFSET(get<int64_t>, {0x2E8, 8, 0, 0})
	DMember(int64_t)                                   _ForLength                                                  ___ OFFSET(get<int64_t>, {0x2F0, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xD4ED8431_Threat                                   ___ OFFSET(get<T>, {0x2F8, 56, 0, 0})
	SMember(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) _ExprResult4                                 ___ OFFSET(get<T>, {0x380, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x398, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x399, 1, 0, 0})
	SMember(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R)    _ExprResult7                                                ___ OFFSET(get<T>, {0x3C8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x3E0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x3E1, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x3E2, 1, 0, 0})
	DMember(double)                                    __verse_0xD58F9071_TargetDistance                           ___ OFFSET(get<double>, {0x408, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult10                                               ___ OFFSET(get<T>, {0x420, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack                                            ___ OFFSET(get<T>, {0x450, 24, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x19FFC917_AttackTarget                             ___ OFFSET(get<T>, {0x4C8, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x540, 1, 0, 0})
	DMember(bool)                                      _ExprResult11                                               ___ OFFSET(get<bool>, {0x5B0, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x5D0, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x600, 8, 0, 0})
	DMember(double)                                    __verse_0x0E44D420_ClosestTargetDistance1                   ___ OFFSET(get<double>, {0x608, 8, 0, 0})
	DMember(bool)                                      _ExprResult13                                               ___ OFFSET(get<bool>, {0x652, 1, 1, 0})
	CMember(TArray<FAI_fort_threat_info>)              _ForIterable1                                               ___ OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult14                                               ___ OFFSET(get<T>, {0x698, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex1                                                  ___ OFFSET(get<int64_t>, {0x6A0, 8, 0, 0})
	DMember(int64_t)                                   _ForLength1                                                 ___ OFFSET(get<int64_t>, {0x6A8, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xD4ED8431_Threat1                                  ___ OFFSET(get<T>, {0x6B0, 56, 0, 0})
	SMember(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) _ExprResult15                                ___ OFFSET(get<T>, {0x738, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult16                                               ___ OFFSET(get<T>, {0x750, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult17                                               ___ OFFSET(get<T>, {0x751, 1, 0, 0})
	SMember(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R)    _ExprResult18                                               ___ OFFSET(get<T>, {0x780, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0x798, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult20                                               ___ OFFSET(get<T>, {0x799, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x79A, 1, 0, 0})
	DMember(double)                                    __verse_0xD58F9071_TargetDistance1                          ___ OFFSET(get<double>, {0x7C0, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult21                                               ___ OFFSET(get<T>, {0x7D8, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack1                                           ___ OFFSET(get<T>, {0x808, 24, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x19FFC917_AttackTarget1                            ___ OFFSET(get<T>, {0x880, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x8F8, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewObstacle
/// Size: 0x0150 (0x000140 - 0x000290)
class Utask_CompanionAI_companion_ai_runtime_GetNewObstacle : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0x39C5E53E_ObstacleInfo                             ___ OFFSET(get<T>, {0x180, 40, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1C8, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x200, 8, 0, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0x39C5E53E_ObstacleInfo1                            ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x250, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x280, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x288, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewTargetPerception
/// Size: 0x0180 (0x000140 - 0x0002C0)
class Utask_CompanionAI_companion_ai_runtime_GetNewTargetPerception : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo                               ___ OFFSET(get<T>, {0x190, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x220, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo1                              ___ OFFSET(get<T>, {0x228, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x280, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x2B0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2B8, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewThreat
/// Size: 0x0180 (0x000140 - 0x0002C0)
class Utask_CompanionAI_companion_ai_runtime_GetNewThreat : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo                               ___ OFFSET(get<T>, {0x190, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x220, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo1                              ___ OFFSET(get<T>, {0x228, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x280, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x2B0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2B8, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GetObstacle
/// Size: 0x0134 (0x000140 - 0x000274)
class Utask_CompanionAI_companion_ai_runtime_GetObstacle : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 628;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0x39C5E53E_ObstacleInfo                             ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	DMember(bool)                                      _ExprResult1                                                ___ OFFSET(get<bool>, {0x1F9, 1, 1, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0x39C5E53E_ObstacleInfo1                            ___ OFFSET(get<T>, {0x200, 40, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x270, 1, 0, 0})
	DMember(bool)                                      _ExprResult3                                                ___ OFFSET(get<bool>, {0x271, 1, 1, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GetThreat
/// Size: 0x0184 (0x000140 - 0x0002C4)
class Utask_CompanionAI_companion_ai_runtime_GetThreat : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 708;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo                               ___ OFFSET(get<T>, {0x198, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x228, 1, 0, 0})
	DMember(bool)                                      _ExprResult1                                                ___ OFFSET(get<bool>, {0x229, 1, 1, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo1                              ___ OFFSET(get<T>, {0x230, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      _ExprResult3                                                ___ OFFSET(get<bool>, {0x2C1, 1, 1, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R
/// Size: 0x0210 (0x000140 - 0x000350)
class Utask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x1A8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1C8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1D0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x1D8, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x1D9, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x200, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x208, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x238, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x240, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x268, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x290, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x2B0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x2C0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x2C1, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x2E8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x2F0, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x318, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x320, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x328, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
/// Size: 0x0818 (0x000140 - 0x000958)
class Utask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2392;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) __verse_0xB2CDDD72_Argument ___ OFFSET(get<T>, {0x148, 64, 0, 0})
	DMember(bool)                                      _RetVal                                                     ___ OFFSET(get<bool>, {0x188, 1, 1, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x189, 1, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array                                    ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<TArray>)                            _ExprResult                                                 ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array1                                   ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(Ftuple_L_Kchar_M_Kchar_R)                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1F0, 32, 0, 0})
	CMember(TArray<TArray>)                            _ForResult                                                  ___ OFFSET(get<T>, {0x280, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex                                                   ___ OFFSET(get<int64_t>, {0x290, 8, 0, 0})
	DMember(int64_t)                                   _ForLength                                                  ___ OFFSET(get<int64_t>, {0x298, 8, 0, 0})
	CMember(TArray<$ExprResult>)                       _ExprResult1                                                ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<$ForResult>)                        _ForResult1                                                 ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex1                                                  ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	DMember(int64_t)                                   _ForLength1                                                 ___ OFFSET(get<int64_t>, {0x2E8, 8, 0, 0})
	DMember(char)                                      __verse_0xFB88B569_Item                                     ___ OFFSET(get<char>, {0x2F0, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex2                                                  ___ OFFSET(get<int64_t>, {0x318, 8, 0, 0})
	DMember(int64_t)                                   _ForLength2                                                 ___ OFFSET(get<int64_t>, {0x320, 8, 0, 0})
	DMember(char)                                      _ExprResult2                                                ___ OFFSET(get<char>, {0x338, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x33B, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x358, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x360, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFE707B39_TargetCharacter                          ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(AI_navigation_result)                      __verse_0x95D09D0E_Result                                   ___ OFFSET(get<T>, {0x378, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R) _ExprResult4            ___ OFFSET(get<T>, {0x3A0, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack                                            ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x3F0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x440, 1, 0, 0})
	CMember(AI_navigation_result)                      __verse_0x95D09D0E_Result1                                  ___ OFFSET(get<T>, {0x468, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R) _ExprResult5            ___ OFFSET(get<T>, {0x488, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack1                                           ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x520, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x548, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x570, 1, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array2                                   ___ OFFSET(get<T>, {0x598, 16, 0, 0})
	CMember(TArray<TArray>)                            _ExprResult6                                                ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array3                                   ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
	SMember(Ftuple_L_Kchar_M_Kchar_R)                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x5D8, 32, 0, 0})
	CMember(TArray<TArray>)                            _ForResult2                                                 ___ OFFSET(get<T>, {0x668, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex3                                                  ___ OFFSET(get<int64_t>, {0x678, 8, 0, 0})
	DMember(int64_t)                                   _ForLength3                                                 ___ OFFSET(get<int64_t>, {0x680, 8, 0, 0})
	CMember(TArray<$ExprResult>)                       _ExprResult7                                                ___ OFFSET(get<T>, {0x698, 16, 0, 0})
	CMember(TArray<$ForResult>)                        _ForResult3                                                 ___ OFFSET(get<T>, {0x6B8, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex4                                                  ___ OFFSET(get<int64_t>, {0x6C8, 8, 0, 0})
	DMember(int64_t)                                   _ForLength4                                                 ___ OFFSET(get<int64_t>, {0x6D0, 8, 0, 0})
	DMember(char)                                      __verse_0xFB88B569_Item1                                    ___ OFFSET(get<char>, {0x6D8, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex5                                                  ___ OFFSET(get<int64_t>, {0x700, 8, 0, 0})
	DMember(int64_t)                                   _ForLength5                                                 ___ OFFSET(get<int64_t>, {0x708, 8, 0, 0})
	DMember(char)                                      _ExprResult8                                                ___ OFFSET(get<char>, {0x720, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x723, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x728, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x740, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x748, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFE707B39_TargetCharacter1                         ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(AI_navigation_result)                      __verse_0x95D09D0E_Result2                                  ___ OFFSET(get<T>, {0x760, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x770, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R) _ExprResult10           ___ OFFSET(get<T>, {0x788, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack2                                           ___ OFFSET(get<T>, {0x7A8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x7D8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x828, 1, 0, 0})
	CMember(AI_navigation_result)                      __verse_0x95D09D0E_Result3                                  ___ OFFSET(get<T>, {0x850, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x858, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R) _ExprResult11           ___ OFFSET(get<T>, {0x870, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack3                                           ___ OFFSET(get<T>, {0x890, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy6                                     ___ OFFSET(get<T>, {0x908, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy7                                     ___ OFFSET(get<T>, {0x930, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R
/// Size: 0x0710 (0x000140 - 0x000850)
class Utask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2128;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter                                  ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x6B4100B8_EmitterCharacter                         ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult                                                 ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x1E9, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult3                                          ___ OFFSET(get<T>, {0x240, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x250, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x251, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult6                                          ___ OFFSET(get<T>, {0x280, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x290, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x291, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x292, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2B0, 8, 0, 0})
	DMember(bool)                                      __verse_0x7EBDC403_HasReachedPosition                       ___ OFFSET(get<bool>, {0x2B8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R) _ExprResult9 ___ OFFSET(get<T>, {0x2D8, 64, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult10                                               ___ OFFSET(get<T>, {0x318, 24, 0, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint                                   ___ OFFSET(get<bool>, {0x338, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x358, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x362, 1, 0, 0})
	DMember(bool)                                      __verse_0x684D9F77_IsFollowingEnabled                       ___ OFFSET(get<bool>, {0x388, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x3A8, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x3AB, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x3D0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x3D1, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mfloat_R)          _ExprResult12                                               ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x400, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x408, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult13                                               ___ OFFSET(get<T>, {0x428, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x430, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x438, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x458, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x460, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x498, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x4A0, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x4D0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x4E8, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter1                                 ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x6B4100B8_EmitterCharacter1                        ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult14                                               ___ OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x550, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult16                                               ___ OFFSET(get<T>, {0x551, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult17                                         ___ OFFSET(get<T>, {0x5A8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult18                                               ___ OFFSET(get<T>, {0x5B8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0x5B9, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult20                                         ___ OFFSET(get<T>, {0x5E8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult21                                               ___ OFFSET(get<T>, {0x5F8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult22                                               ___ OFFSET(get<T>, {0x5F9, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x5FA, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x618, 8, 0, 0})
	DMember(bool)                                      __verse_0x7EBDC403_HasReachedPosition1                      ___ OFFSET(get<bool>, {0x620, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R) _ExprResult23 ___ OFFSET(get<T>, {0x640, 64, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult24                                               ___ OFFSET(get<T>, {0x680, 24, 0, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint1                                  ___ OFFSET(get<bool>, {0x6A0, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x6C0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy6                                     ___ OFFSET(get<T>, {0x6CA, 1, 0, 0})
	DMember(bool)                                      __verse_0x684D9F77_IsFollowingEnabled1                      ___ OFFSET(get<bool>, {0x6F0, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x6F8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult25                                               ___ OFFSET(get<T>, {0x710, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy7                                     ___ OFFSET(get<T>, {0x713, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x738, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount8                                           ___ OFFSET(get<bool>, {0x739, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask8                                                 ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mfloat_R)          _ExprResult26                                               ___ OFFSET(get<T>, {0x758, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult8                                               ___ OFFSET(get<int64_t>, {0x768, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount9                                           ___ OFFSET(get<bool>, {0x770, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask9                                                 ___ OFFSET(get<T>, {0x778, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult27                                               ___ OFFSET(get<T>, {0x790, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult9                                               ___ OFFSET(get<int64_t>, {0x798, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount10                                          ___ OFFSET(get<bool>, {0x7A0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask10                                                ___ OFFSET(get<T>, {0x7A8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult10                                              ___ OFFSET(get<int64_t>, {0x7C0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount11                                          ___ OFFSET(get<bool>, {0x7C8, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask11                                                ___ OFFSET(get<T>, {0x7D8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult11                                              ___ OFFSET(get<int64_t>, {0x800, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy8                                     ___ OFFSET(get<T>, {0x808, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy9                                     ___ OFFSET(get<T>, {0x838, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R
/// Size: 0x0AF0 (0x000140 - 0x000C30)
class Utask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x1A8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1C8, 8, 0, 0})
	CMember(UVerseEngine_Entity_entity*)               __verse_0x459049A1_Target                                   ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult ___ OFFSET(get<T>, {0x240, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R) __verse_0x00000000_      ___ OFFSET(get<T>, {0x280, 56, 0, 0})
	SMember(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R)    _ExprResult1                                                ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x2E0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x2E1, 1, 0, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint                                   ___ OFFSET(get<bool>, {0x2E2, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x300, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x3E0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x3E1, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult4 ___ OFFSET(get<T>, {0x400, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R) __verse_0x00000000_1     ___ OFFSET(get<T>, {0x440, 56, 0, 0})
	DMember(bool)                                      _ExprResult5                                                ___ OFFSET(get<bool>, {0x482, 1, 1, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint1                                  ___ OFFSET(get<bool>, {0x485, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x4A0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x4A8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x4C8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x4D2, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x4D3, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult6 ___ OFFSET(get<T>, {0x4F0, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R) __verse_0x00000000_2          ___ OFFSET(get<T>, {0x530, 56, 0, 0})
	DMember(bool)                                      _ExprResult7                                                ___ OFFSET(get<bool>, {0x572, 1, 1, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint2                                  ___ OFFSET(get<bool>, {0x575, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x590, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x598, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x5B8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x5C0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount8                                           ___ OFFSET(get<bool>, {0x5C1, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult8 ___ OFFSET(get<T>, {0x5E0, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R) __verse_0x00000000_3     ___ OFFSET(get<T>, {0x620, 56, 0, 0})
	DMember(bool)                                      _ExprResult9                                                ___ OFFSET(get<bool>, {0x662, 1, 1, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint3                                  ___ OFFSET(get<bool>, {0x665, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x680, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount9                                           ___ OFFSET(get<bool>, {0x688, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x6A8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x6B0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount10                                          ___ OFFSET(get<bool>, {0x700, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask8                                                 ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult8                                               ___ OFFSET(get<int64_t>, {0x720, 8, 0, 0})
	CMember(UVerseEngine_Entity_entity*)               __verse_0x459049A1_Target1                                  ___ OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask9                                                 ___ OFFSET(get<T>, {0x780, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult10 ___ OFFSET(get<T>, {0x798, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R) __verse_0x00000000_4     ___ OFFSET(get<T>, {0x7D8, 56, 0, 0})
	SMember(Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R)    _ExprResult11                                               ___ OFFSET(get<T>, {0x828, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x838, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult13                                               ___ OFFSET(get<T>, {0x839, 1, 0, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint4                                  ___ OFFSET(get<bool>, {0x83A, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult9                                               ___ OFFSET(get<int64_t>, {0x858, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount11                                          ___ OFFSET(get<bool>, {0x938, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount12                                          ___ OFFSET(get<bool>, {0x939, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask10                                                ___ OFFSET(get<T>, {0x940, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult14 ___ OFFSET(get<T>, {0x958, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R) __verse_0x00000000_5     ___ OFFSET(get<T>, {0x998, 56, 0, 0})
	DMember(bool)                                      _ExprResult15                                               ___ OFFSET(get<bool>, {0x9DA, 1, 1, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint5                                  ___ OFFSET(get<bool>, {0x9DD, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult10                                              ___ OFFSET(get<int64_t>, {0x9F8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount13                                          ___ OFFSET(get<bool>, {0xA00, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask11                                                ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult11                                              ___ OFFSET(get<int64_t>, {0xA20, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount14                                          ___ OFFSET(get<bool>, {0xA2A, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount15                                          ___ OFFSET(get<bool>, {0xA2B, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask12                                                ___ OFFSET(get<T>, {0xA30, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult16 ___ OFFSET(get<T>, {0xA48, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R) __verse_0x00000000_6          ___ OFFSET(get<T>, {0xA88, 56, 0, 0})
	DMember(bool)                                      _ExprResult17                                               ___ OFFSET(get<bool>, {0xACA, 1, 1, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint6                                  ___ OFFSET(get<bool>, {0xACD, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult12                                              ___ OFFSET(get<int64_t>, {0xAE8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount16                                          ___ OFFSET(get<bool>, {0xAF0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask13                                                ___ OFFSET(get<T>, {0xAF8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult13                                              ___ OFFSET(get<int64_t>, {0xB10, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount17                                          ___ OFFSET(get<bool>, {0xB18, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount18                                          ___ OFFSET(get<bool>, {0xB19, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask14                                                ___ OFFSET(get<T>, {0xB20, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult18 ___ OFFSET(get<T>, {0xB38, 64, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R) __verse_0x00000000_7     ___ OFFSET(get<T>, {0xB78, 56, 0, 0})
	DMember(bool)                                      _ExprResult19                                               ___ OFFSET(get<bool>, {0xBBA, 1, 1, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint7                                  ___ OFFSET(get<bool>, {0xBBD, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult14                                              ___ OFFSET(get<int64_t>, {0xBD8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount19                                          ___ OFFSET(get<bool>, {0xBE0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask15                                                ___ OFFSET(get<T>, {0xBE8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult15                                              ___ OFFSET(get<int64_t>, {0xC00, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0xC08, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R
/// Size: 0x0C48 (0x000140 - 0x000D88)
class Utask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3464;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(bool)                                      _ExprResult                                                 ___ OFFSET(get<bool>, {0x1EA, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x1ED, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x1EE, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x248, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x250, 1, 1, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter                                  ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x268, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Magent_R)           _ExprResult1                                                ___ OFFSET(get<T>, {0x288, 40, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2B0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x2D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x328, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x329, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x32A, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x388, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x390, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x398, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x3F8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x400, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x408, 1, 1, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xD4ED8431_Threat                                   ___ OFFSET(get<T>, {0x410, 56, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x4A8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x500, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R) _ExprResult6                            ___ OFFSET(get<T>, {0x518, 40, 0, 0})
	DMember(bool)                                      __verse_0xBC1095DF_HasRevived                               ___ OFFSET(get<bool>, {0x540, 1, 1, 0})
	DMember(double)                                    _ExprResultStack                                            ___ OFFSET(get<double>, {0x570, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult7                                                ___ OFFSET(get<T>, {0x588, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult8                                                ___ OFFSET(get<T>, {0x5C0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x638, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x459049A1_Target                                   ___ OFFSET(get<T>, {0x640, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x6B8, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFA2219CC_TargetAgent                              ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) _ExprResult10                                ___ OFFSET(get<T>, {0x700, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x718, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x719, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x728, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x758, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x760, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x788, 1, 0, 0})
	DMember(bool)                                      _ExprResult13                                               ___ OFFSET(get<bool>, {0x7F2, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount8                                           ___ OFFSET(get<bool>, {0x7F5, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount9                                           ___ OFFSET(get<bool>, {0x7F6, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x838, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x850, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount10                                          ___ OFFSET(get<bool>, {0x858, 1, 1, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter1                                 ___ OFFSET(get<T>, {0x860, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount11                                          ___ OFFSET(get<bool>, {0x870, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask8                                                 ___ OFFSET(get<T>, {0x878, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Magent_R)           _ExprResult14                                               ___ OFFSET(get<T>, {0x890, 40, 0, 0})
	DMember(int64_t)                                   _AsyncResult8                                               ___ OFFSET(get<int64_t>, {0x8B8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask9                                                 ___ OFFSET(get<T>, {0x8C0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult9                                               ___ OFFSET(get<int64_t>, {0x8D8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x930, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount12                                          ___ OFFSET(get<bool>, {0x931, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount13                                          ___ OFFSET(get<bool>, {0x932, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask10                                                ___ OFFSET(get<T>, {0x978, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult16                                               ___ OFFSET(get<T>, {0x990, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult10                                              ___ OFFSET(get<int64_t>, {0x998, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount14                                          ___ OFFSET(get<bool>, {0x9A0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask11                                                ___ OFFSET(get<T>, {0x9E8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult17                                               ___ OFFSET(get<T>, {0xA00, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult11                                              ___ OFFSET(get<int64_t>, {0xA08, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount15                                          ___ OFFSET(get<bool>, {0xA10, 1, 1, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xD4ED8431_Threat1                                  ___ OFFSET(get<T>, {0xA18, 56, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask12                                                ___ OFFSET(get<T>, {0xA98, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult12                                              ___ OFFSET(get<int64_t>, {0xAB0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult18                                               ___ OFFSET(get<T>, {0xB08, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R) _ExprResult19                           ___ OFFSET(get<T>, {0xB20, 40, 0, 0})
	DMember(bool)                                      __verse_0xBC1095DF_HasRevived1                              ___ OFFSET(get<bool>, {0xB48, 1, 1, 0})
	DMember(double)                                    _ExprResultStack1                                           ___ OFFSET(get<double>, {0xB78, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult20                                               ___ OFFSET(get<T>, {0xB90, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult21                                               ___ OFFSET(get<T>, {0xBC0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult22                                               ___ OFFSET(get<T>, {0xC38, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x459049A1_Target1                                  ___ OFFSET(get<T>, {0xC40, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0xCB8, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFA2219CC_TargetAgent1                             ___ OFFSET(get<T>, {0xCE0, 8, 0, 0})
	SMember(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) _ExprResult23                                ___ OFFSET(get<T>, {0xD00, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult24                                               ___ OFFSET(get<T>, {0xD18, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult25                                               ___ OFFSET(get<T>, {0xD19, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0xD20, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy6                                     ___ OFFSET(get<T>, {0xD28, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask13                                                ___ OFFSET(get<T>, {0xD40, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult13                                              ___ OFFSET(get<int64_t>, {0xD58, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy7                                     ___ OFFSET(get<T>, {0xD60, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R
/// Size: 0x0318 (0x000140 - 0x000458)
class Utask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter                                  ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x1B8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Magent_R)           _ExprResult                                                 ___ OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult1                                                ___ OFFSET(get<T>, {0x200, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x278, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x280, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x2A0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2A8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x2C0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x2C1, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x2E8, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter1                                 ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x320, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Magent_R)           _ExprResult5                                                ___ OFFSET(get<T>, {0x340, 40, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult6                                                ___ OFFSET(get<T>, {0x370, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x3E8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x3F0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x410, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x418, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x430, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x431, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R
/// Size: 0x09A0 (0x000140 - 0x000AE0)
class Utask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2784;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array                                    ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<TArray>)                            _ExprResult                                                 ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array1                                   ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R)  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1E8, 64, 0, 0})
	CMember(TArray<TArray>)                            _ForResult                                                  ___ OFFSET(get<T>, {0x308, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex                                                   ___ OFFSET(get<int64_t>, {0x318, 8, 0, 0})
	DMember(int64_t)                                   _ForLength                                                  ___ OFFSET(get<int64_t>, {0x320, 8, 0, 0})
	CMember(TArray<$ExprResult>)                       _ExprResult1                                                ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TArray<$ForResult>)                        _ForResult1                                                 ___ OFFSET(get<T>, {0x358, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex1                                                  ___ OFFSET(get<int64_t>, {0x368, 8, 0, 0})
	DMember(int64_t)                                   _ForLength1                                                 ___ OFFSET(get<int64_t>, {0x370, 8, 0, 0})
	DMember(char)                                      __verse_0xFB88B569_Item                                     ___ OFFSET(get<char>, {0x378, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex2                                                  ___ OFFSET(get<int64_t>, {0x3A0, 8, 0, 0})
	DMember(int64_t)                                   _ForLength2                                                 ___ OFFSET(get<int64_t>, {0x3A8, 8, 0, 0})
	DMember(char)                                      _ExprResult2                                                ___ OFFSET(get<char>, {0x3C0, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x430, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x438, 8, 0, 0})
	DMember(bool)                                      _ExprResult4                                                ___ OFFSET(get<bool>, {0x442, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x460, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x470, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x5F0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x608, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x630, 1, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array2                                   ___ OFFSET(get<T>, {0x658, 16, 0, 0})
	CMember(TArray<TArray>)                            _ExprResult6                                                ___ OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array3                                   ___ OFFSET(get<T>, {0x688, 16, 0, 0})
	SMember(Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R)  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x698, 64, 0, 0})
	CMember(TArray<TArray>)                            _ForResult2                                                 ___ OFFSET(get<T>, {0x7B8, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex3                                                  ___ OFFSET(get<int64_t>, {0x7C8, 8, 0, 0})
	DMember(int64_t)                                   _ForLength3                                                 ___ OFFSET(get<int64_t>, {0x7D0, 8, 0, 0})
	CMember(TArray<$ExprResult>)                       _ExprResult7                                                ___ OFFSET(get<T>, {0x7E8, 16, 0, 0})
	CMember(TArray<$ForResult>)                        _ForResult3                                                 ___ OFFSET(get<T>, {0x808, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex4                                                  ___ OFFSET(get<int64_t>, {0x818, 8, 0, 0})
	DMember(int64_t)                                   _ForLength4                                                 ___ OFFSET(get<int64_t>, {0x820, 8, 0, 0})
	DMember(char)                                      __verse_0xFB88B569_Item1                                    ___ OFFSET(get<char>, {0x828, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex5                                                  ___ OFFSET(get<int64_t>, {0x850, 8, 0, 0})
	DMember(int64_t)                                   _ForLength5                                                 ___ OFFSET(get<int64_t>, {0x858, 8, 0, 0})
	DMember(char)                                      _ExprResult8                                                ___ OFFSET(get<char>, {0x870, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x8C0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x8C8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x8E0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x8E8, 8, 0, 0})
	DMember(bool)                                      _ExprResult10                                               ___ OFFSET(get<bool>, {0x8F2, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_7                                        ___ OFFSET(get<T>, {0x8F8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x910, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_8                                        ___ OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x920, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_9                                        ___ OFFSET(get<T>, {0xA98, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy6                                     ___ OFFSET(get<T>, {0xAA0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy7                                     ___ OFFSET(get<T>, {0xAB8, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R
/// Size: 0x0440 (0x000140 - 0x000580)
class Utask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x150, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1C8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x1D0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x1D1, 1, 1, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0x82A44C52_Obstacle                                 ___ OFFSET(get<T>, {0x1D8, 40, 0, 0})
	CMember(UVerseEngine_Entity_entity*)               __verse_0xBD80729A_CurrentTarget                            ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	DMember(bool)                                      _ExprResultStack                                            ___ OFFSET(get<bool>, {0x242, 1, 1, 0})
	SMember(Ftuple_Lfort__obstacle__info_Mentity_R)    _ExprResult1                                                ___ OFFSET(get<T>, {0x258, 48, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x288, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2A0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x2E0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x330, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x338, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x340, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x368, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x3D8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x3E0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x3E8, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x3E9, 1, 1, 0})
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0x82A44C52_Obstacle1                                ___ OFFSET(get<T>, {0x3F0, 40, 0, 0})
	CMember(UVerseEngine_Entity_entity*)               __verse_0xBD80729A_CurrentTarget1                           ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(bool)                                      _ExprResultStack1                                           ___ OFFSET(get<bool>, {0x45A, 1, 1, 0})
	SMember(Ftuple_Lfort__obstacle__info_Mentity_R)    _ExprResult4                                                ___ OFFSET(get<T>, {0x470, 48, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x4B8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x4F8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x548, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x550, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x558, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R
/// Size: 0x0280 (0x000140 - 0x0003C0)
class Utask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(FCompanionAI_ping_info)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter                                  ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	DMember(bool)                                      __verse_0xC96E9091_HasRevivedEmitter                        ___ OFFSET(get<bool>, {0x1B8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1D8, 8, 0, 0})
	CMember(TArray<USimulation_agent*>)                __verse_0xBFBCE682_TeamMembers                              ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult                                                 ___ OFFSET(get<T>, {0x208, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x219, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex                                                   ___ OFFSET(get<int64_t>, {0x220, 8, 0, 0})
	DMember(int64_t)                                   _ForLength                                                  ___ OFFSET(get<int64_t>, {0x228, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xAE35E375_TeamMember                               ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	DMember(bool)                                      __verse_0x87226150_HasRevivedTeamMember                     ___ OFFSET(get<bool>, {0x238, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x260, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x278, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x2A0, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xFD64D7AA_Emitter1                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      __verse_0xC96E9091_HasRevivedEmitter1                       ___ OFFSET(get<bool>, {0x2D8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2F8, 8, 0, 0})
	CMember(TArray<USimulation_agent*>)                __verse_0xBFBCE682_TeamMembers1                             ___ OFFSET(get<T>, {0x308, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult3                                                ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x338, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x339, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex1                                                  ___ OFFSET(get<int64_t>, {0x340, 8, 0, 0})
	DMember(int64_t)                                   _ForLength1                                                 ___ OFFSET(get<int64_t>, {0x348, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xAE35E375_TeamMember1                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(bool)                                      __verse_0x87226150_HasRevivedTeamMember1                    ___ OFFSET(get<bool>, {0x358, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x380, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x398, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R
/// Size: 0x0520 (0x000140 - 0x000660)
class Utask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Mfloat_R)           __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x68BA2569_RandomOffset                             ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack                                            ___ OFFSET(get<T>, {0x1B0, 80, 0, 0})
	DMember(double)                                    _ExprResultStack1                                           ___ OFFSET(get<double>, {0x230, 8, 0, 0})
	SMember(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R) _ExprResult                       ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	DMember(double)                                    _ExprResultStack2                                           ___ OFFSET(get<double>, {0x258, 8, 0, 0})
	SMember(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R) _ExprResult1                      ___ OFFSET(get<T>, {0x270, 16, 0, 0})
	DMember(double)                                    _ExprResultStack3                                           ___ OFFSET(get<double>, {0x280, 8, 0, 0})
	SMember(Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R) _ExprResult2                         ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x2A8, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x2A9, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x2E8, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack4                                           ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult3                                                ___ OFFSET(get<T>, {0x338, 48, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x368, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x370, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(double)                                    _ExprResultStack5                                           ___ OFFSET(get<double>, {0x390, 8, 0, 0})
	SMember(Ftuple_Lfloat_Mfloat_R)                    _ExprResult4                                                ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x3B8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x3C0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x3E8, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x68BA2569_RandomOffset1                            ___ OFFSET(get<T>, {0x410, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack6                                           ___ OFFSET(get<T>, {0x428, 80, 0, 0})
	DMember(double)                                    _ExprResultStack7                                           ___ OFFSET(get<double>, {0x4A8, 8, 0, 0})
	SMember(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R) _ExprResult5                      ___ OFFSET(get<T>, {0x4C0, 16, 0, 0})
	DMember(double)                                    _ExprResultStack8                                           ___ OFFSET(get<double>, {0x4D0, 8, 0, 0})
	SMember(Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R) _ExprResult6                      ___ OFFSET(get<T>, {0x4E8, 16, 0, 0})
	DMember(double)                                    _ExprResultStack9                                           ___ OFFSET(get<double>, {0x4F8, 8, 0, 0})
	SMember(Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R) _ExprResult7                         ___ OFFSET(get<T>, {0x510, 16, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x520, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x521, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x558, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x560, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack10                                          ___ OFFSET(get<T>, {0x588, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult8                                                ___ OFFSET(get<T>, {0x5B0, 48, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x5E0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x5E8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	DMember(double)                                    _ExprResultStack11                                          ___ OFFSET(get<double>, {0x608, 8, 0, 0})
	SMember(Ftuple_Lfloat_Mfloat_R)                    _ExprResult9                                                ___ OFFSET(get<T>, {0x620, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x630, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x638, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget
/// Size: 0x0588 (0x000140 - 0x0006C8)
class Utask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x149, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1C8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1D0, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x26CBBAEB_CurrentThreatInfo                        ___ OFFSET(get<T>, {0x1D8, 56, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x250, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x251, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x2B0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x2C0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x320, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x328, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x330, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x350, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x358, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x359, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x378, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x380, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x388, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack                                            ___ OFFSET(get<T>, {0x3B0, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x3D8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x3E0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x408, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x488, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x490, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x26CBBAEB_CurrentThreatInfo1                       ___ OFFSET(get<T>, {0x498, 56, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x510, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount8                                           ___ OFFSET(get<bool>, {0x511, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x570, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x578, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount9                                           ___ OFFSET(get<bool>, {0x580, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask8                                                 ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x5E0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult8                                               ___ OFFSET(get<int64_t>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount10                                          ___ OFFSET(get<bool>, {0x5F0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask9                                                 ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult9                                               ___ OFFSET(get<int64_t>, {0x610, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount11                                          ___ OFFSET(get<bool>, {0x618, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount12                                          ___ OFFSET(get<bool>, {0x619, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask10                                                ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x638, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult10                                              ___ OFFSET(get<int64_t>, {0x640, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount13                                          ___ OFFSET(get<bool>, {0x648, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask11                                                ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack1                                           ___ OFFSET(get<T>, {0x670, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult11                                              ___ OFFSET(get<int64_t>, {0x698, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x6A0, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtThreatTask
/// Size: 0x03A8 (0x000140 - 0x0004E8)
class Utask_CompanionAI_companion_ai_runtime_LookAtThreatTask : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x149, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo                               ___ OFFSET(get<T>, {0x170, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x200, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x201, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x202, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x220, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x228, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x230, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x250, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x258, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x260, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack                                            ___ OFFSET(get<T>, {0x288, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x2B0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x2E0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x2E8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x2F0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x318, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo1                              ___ OFFSET(get<T>, {0x340, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x3D0, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x3D1, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x3D2, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x3F0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x3F8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x400, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x420, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x428, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x430, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack1                                           ___ OFFSET(get<T>, {0x458, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x480, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x4B0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x4B8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x4C0, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R
/// Size: 0x05E0 (0x000140 - 0x000720)
class Utask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	DMember(bool)                                      _RetVal                                                     ___ OFFSET(get<bool>, {0x150, 1, 1, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x151, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult                                                 ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1A8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x1A9, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult4                                          ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult5                                                ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x210, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x211, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x212, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x213, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x214, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x238, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x240, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x241, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x248, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x260, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult11                                               ___ OFFSET(get<T>, {0x288, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x298, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult13                                               ___ OFFSET(get<T>, {0x299, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult14                                               ___ OFFSET(get<T>, {0x2B0, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult15                                         ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult16                                               ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult17                                               ___ OFFSET(get<T>, {0x300, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult18                                               ___ OFFSET(get<T>, {0x301, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0x302, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult20                                               ___ OFFSET(get<T>, {0x303, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x304, 1, 1, 0})
	DMember(bool)                                      __verse_0x7EBDC403_HasReachedPosition                       ___ OFFSET(get<bool>, {0x305, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R) _ExprResult21 ___ OFFSET(get<T>, {0x320, 64, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult22                                               ___ OFFSET(get<T>, {0x360, 24, 0, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint                                   ___ OFFSET(get<bool>, {0x380, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x3A0, 8, 0, 0})
	CMember(VerseAIBase_fallible_action_result)        __verse_0x40FB4916_ReviveResult                             ___ OFFSET(get<T>, {0x3AA, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x410, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x438, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult23                                               ___ OFFSET(get<T>, {0x480, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult24                                               ___ OFFSET(get<T>, {0x490, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult25                                               ___ OFFSET(get<T>, {0x491, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult26                                               ___ OFFSET(get<T>, {0x4A8, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult27                                         ___ OFFSET(get<T>, {0x4C0, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult28                                               ___ OFFSET(get<T>, {0x4E8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult29                                               ___ OFFSET(get<T>, {0x4F8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult30                                               ___ OFFSET(get<T>, {0x4F9, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult31                                               ___ OFFSET(get<T>, {0x4FA, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult32                                               ___ OFFSET(get<T>, {0x4FB, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x4FC, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult33                                               ___ OFFSET(get<T>, {0x518, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x520, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x528, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x529, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x548, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult34                                               ___ OFFSET(get<T>, {0x570, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult35                                               ___ OFFSET(get<T>, {0x580, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult36                                               ___ OFFSET(get<T>, {0x581, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult37                                               ___ OFFSET(get<T>, {0x598, 1, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult38                                         ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult39                                               ___ OFFSET(get<T>, {0x5D8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult40                                               ___ OFFSET(get<T>, {0x5E8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult41                                               ___ OFFSET(get<T>, {0x5E9, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult42                                               ___ OFFSET(get<T>, {0x5EA, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult43                                               ___ OFFSET(get<T>, {0x5EB, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x5EC, 1, 1, 0})
	DMember(bool)                                      __verse_0x7EBDC403_HasReachedPosition1                      ___ OFFSET(get<bool>, {0x5ED, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	SMember(Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R) _ExprResult44 ___ OFFSET(get<T>, {0x608, 64, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult45                                               ___ OFFSET(get<T>, {0x648, 24, 0, 0})
	DMember(bool)                                      __verse_0x19F8ABA1_Sprint1                                  ___ OFFSET(get<bool>, {0x668, 1, 1, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x688, 8, 0, 0})
	CMember(VerseAIBase_fallible_action_result)        __verse_0x40FB4916_ReviveResult1                            ___ OFFSET(get<T>, {0x692, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x6F8, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R
/// Size: 0x0670 (0x000140 - 0x0007B0)
class Utask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Magent_R)           __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array                                    ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(TArray<TArray>)                            _ExprResult                                                 ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array1                                   ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(Ftuple_L_Kchar_M_Kchar_R)                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1D8, 32, 0, 0})
	CMember(TArray<TArray>)                            _ForResult                                                  ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex                                                   ___ OFFSET(get<int64_t>, {0x258, 8, 0, 0})
	DMember(int64_t)                                   _ForLength                                                  ___ OFFSET(get<int64_t>, {0x260, 8, 0, 0})
	CMember(TArray<$ExprResult>)                       _ExprResult1                                                ___ OFFSET(get<T>, {0x278, 16, 0, 0})
	CMember(TArray<$ForResult>)                        _ForResult1                                                 ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex1                                                  ___ OFFSET(get<int64_t>, {0x2A8, 8, 0, 0})
	DMember(int64_t)                                   _ForLength1                                                 ___ OFFSET(get<int64_t>, {0x2B0, 8, 0, 0})
	DMember(char)                                      __verse_0xFB88B569_Item                                     ___ OFFSET(get<char>, {0x2B8, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex2                                                  ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	DMember(int64_t)                                   _ForLength2                                                 ___ OFFSET(get<int64_t>, {0x2E8, 8, 0, 0})
	DMember(char)                                      _ExprResult2                                                ___ OFFSET(get<char>, {0x300, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x301, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Mcolor_R)           _ExprResult3                                                ___ OFFSET(get<T>, {0x320, 56, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x358, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x368, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R) _ExprResult4                                     ___ OFFSET(get<T>, {0x380, 40, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x3C0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x3D0, 1, 0, 0})
	SMember(Ftuple_Lagent_Mfloat_Mfloat_R)             _ExprResult5                                                ___ OFFSET(get<T>, {0x3E8, 24, 0, 0})
	SMember(Ftuple_Lfloat_Mfloat_R)                    _ExprResultStack                                            ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult6                                          ___ OFFSET(get<T>, {0x420, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x430, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x431, 1, 0, 0})
	SMember(Ftuple_Lfloat_Mfloat_R)                    _ExprResultStack1                                           ___ OFFSET(get<T>, {0x438, 16, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult9                                          ___ OFFSET(get<T>, {0x458, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x468, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x469, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x46A, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x490, 1, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array2                                   ___ OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(TArray<TArray>)                            _ExprResult12                                               ___ OFFSET(get<T>, {0x4D8, 16, 0, 0})
	CMember(TArray<__verse_0xFFC68BC5_Array>)          __verse_0xFFC68BC5_Array3                                   ___ OFFSET(get<T>, {0x4E8, 16, 0, 0})
	SMember(Ftuple_L_Kchar_M_Kchar_R)                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x4F8, 32, 0, 0})
	CMember(TArray<TArray>)                            _ForResult2                                                 ___ OFFSET(get<T>, {0x568, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex3                                                  ___ OFFSET(get<int64_t>, {0x578, 8, 0, 0})
	DMember(int64_t)                                   _ForLength3                                                 ___ OFFSET(get<int64_t>, {0x580, 8, 0, 0})
	CMember(TArray<$ExprResult>)                       _ExprResult13                                               ___ OFFSET(get<T>, {0x598, 16, 0, 0})
	CMember(TArray<$ForResult>)                        _ForResult3                                                 ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	DMember(int64_t)                                   _ForIndex4                                                  ___ OFFSET(get<int64_t>, {0x5C8, 8, 0, 0})
	DMember(int64_t)                                   _ForLength4                                                 ___ OFFSET(get<int64_t>, {0x5D0, 8, 0, 0})
	DMember(char)                                      __verse_0xFB88B569_Item1                                    ___ OFFSET(get<char>, {0x5D8, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex5                                                  ___ OFFSET(get<int64_t>, {0x600, 8, 0, 0})
	DMember(int64_t)                                   _ForLength5                                                 ___ OFFSET(get<int64_t>, {0x608, 8, 0, 0})
	DMember(char)                                      _ExprResult14                                               ___ OFFSET(get<char>, {0x620, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x621, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Mcolor_R)           _ExprResult15                                               ___ OFFSET(get<T>, {0x640, 56, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x678, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x688, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R) _ExprResult16                                    ___ OFFSET(get<T>, {0x6A0, 40, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x6E0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy6                                     ___ OFFSET(get<T>, {0x6F0, 1, 0, 0})
	SMember(Ftuple_Lagent_Mfloat_Mfloat_R)             _ExprResult17                                               ___ OFFSET(get<T>, {0x708, 24, 0, 0})
	SMember(Ftuple_Lfloat_Mfloat_R)                    _ExprResultStack2                                           ___ OFFSET(get<T>, {0x720, 16, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult18                                         ___ OFFSET(get<T>, {0x740, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0x750, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult20                                               ___ OFFSET(get<T>, {0x751, 1, 0, 0})
	SMember(Ftuple_Lfloat_Mfloat_R)                    _ExprResultStack3                                           ___ OFFSET(get<T>, {0x758, 16, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult21                                         ___ OFFSET(get<T>, {0x778, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult22                                               ___ OFFSET(get<T>, {0x788, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult23                                               ___ OFFSET(get<T>, {0x789, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy7                                     ___ OFFSET(get<T>, {0x78A, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R
/// Size: 0x06A8 (0x000140 - 0x0007E8)
class Utask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(double)                                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<double>, {0x148, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x150, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x190, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo                               ___ OFFSET(get<T>, {0x198, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x228, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x229, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x22A, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x248, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x250, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x258, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x278, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x280, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x288, 1, 1, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x28D, 1, 0, 0})
	DMember(double)                                    _ExprResultStack                                            ___ OFFSET(get<double>, {0x2C0, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult3                                                ___ OFFSET(get<T>, {0x2D8, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack1                                           ___ OFFSET(get<T>, {0x308, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult4                                                ___ OFFSET(get<T>, {0x330, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x3A8, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 __verse_0x95D09D0E_Result                                   ___ OFFSET(get<T>, {0x3A9, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x3D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x470, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x471, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x498, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x4D8, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo1                              ___ OFFSET(get<T>, {0x4E0, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x570, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x571, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x572, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x590, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x598, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x5A0, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x5C0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x5C8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x5D0, 1, 1, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x5D5, 1, 0, 0})
	DMember(double)                                    _ExprResultStack2                                           ___ OFFSET(get<double>, {0x608, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult10                                               ___ OFFSET(get<T>, {0x620, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack3                                           ___ OFFSET(get<T>, {0x650, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult11                                               ___ OFFSET(get<T>, {0x680, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x6F8, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 __verse_0x95D09D0E_Result1                                  ___ OFFSET(get<T>, {0x6F9, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x720, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult13                                               ___ OFFSET(get<T>, {0x7C0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x7C1, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$SprintService
/// Size: 0x0070 (0x000140 - 0x0001B0)
class Utask_CompanionAI_companion_ai_runtime_SprintService : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x178, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x1A8, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$TacticalSprintService
/// Size: 0x0070 (0x000140 - 0x0001B0)
class Utask_CompanionAI_companion_ai_runtime_TacticalSprintService : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x178, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x1A8, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForDamageService
/// Size: 0x0208 (0x000140 - 0x000348)
class Utask_CompanionAI_companion_ai_runtime_WaitForDamageService : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x149, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x170, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x171, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1B8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x1C8, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x1F0, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x210, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x218, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x220, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x248, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x270, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x271, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x278, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x280, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x298, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x2B8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x2C8, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_7                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x2F0, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x310, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x318, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x320, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R
/// Size: 0x0160 (0x000140 - 0x0002A0)
class Utask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x150, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x4BB95041_Vehicle                                  ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult                                           ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1A8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x1A9, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1C8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x4BB95041_Vehicle1                                 ___ OFFSET(get<T>, {0x220, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult3                                          ___ OFFSET(get<T>, {0x240, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x250, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x251, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x270, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x278, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R
/// Size: 0x0350 (0x000140 - 0x000490)
class Utask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(UCompanionAI_companion_ai_runtime*)        _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mfloat_R)          __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x455F599A_ReferencePosition                        ___ OFFSET(get<T>, {0x158, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult                                                 ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	DMember(double)                                    __verse_0x525BA815_DistanceFromReferencePosition            ___ OFFSET(get<double>, {0x1F0, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult2                                                ___ OFFSET(get<T>, {0x208, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult3                                                ___ OFFSET(get<T>, {0x240, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x2B8, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2E8, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x455F599A_ReferencePosition1                       ___ OFFSET(get<T>, {0x2F0, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult5                                                ___ OFFSET(get<T>, {0x310, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x388, 1, 0, 0})
	DMember(double)                                    __verse_0x525BA815_DistanceFromReferencePosition1           ___ OFFSET(get<double>, {0x390, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult7                                                ___ OFFSET(get<T>, {0x3A8, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult8                                                ___ OFFSET(get<T>, {0x3E0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x458, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x488, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
/// Size: 0x03C1 (0x000140 - 0x000501)
class Utask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1281;

public:
	CMember(UCompanionAI_companion_creature*)          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mfloat_Mcolor_R)           __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 56, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	SMember(Ftuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R) _ExprResult ___ OFFSET(get<T>, {0x1A8, 128, 0, 0})
	SMember(Ftuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R) __verse_0x00000000_1 ___ OFFSET(get<T>, {0x228, 112, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x318, 8, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x328, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x340, 1, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x350, 1, 0, 0})
	SMember(Ftuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R) _ExprResult2 ___ OFFSET(get<T>, {0x368, 128, 0, 0})
	SMember(Ftuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R) __verse_0x00000000_4 ___ OFFSET(get<T>, {0x3E8, 112, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x4D8, 8, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x4E8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x500, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature$OnBegin
/// Size: 0x06DA (0x000140 - 0x00081A)
class Utask_CompanionAI_companion_creature_OnBegin : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2074;

public:
	CMember(UCompanionAI_companion_creature*)          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0x75EB3F0A_Agent                                    ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character                                ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult2                                                ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x1D1, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xD2827887_Navigatable                              ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult5                                          ___ OFFSET(get<T>, {0x1F8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x208, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x209, 1, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x8FB74E85_AbilitySystemComponent                   ___ OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xDE2F615F_Perception                               ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult8                                          ___ OFFSET(get<T>, {0x250, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x260, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x261, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x8D6253CB_Focus                                    ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult11                                         ___ OFFSET(get<T>, {0x288, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x298, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult13                                               ___ OFFSET(get<T>, {0x299, 1, 0, 0})
	CMember(UCompanionAI_companion_creature_runtime*)  __verse_0xEF3B3F75_Runtime                                  ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UCompanionAI_companion_creature_runtime*)  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult14                                               ___ OFFSET(get<T>, {0x2C8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2D0, 8, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x2E0, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult15                                 ___ OFFSET(get<T>, {0x2F8, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x330, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult16                                 ___ OFFSET(get<T>, {0x348, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x380, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult17                                 ___ OFFSET(get<T>, {0x398, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x3D0, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult18                                 ___ OFFSET(get<T>, {0x3E8, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x420, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult19                                 ___ OFFSET(get<T>, {0x438, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_7                                        ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy6                                     ___ OFFSET(get<T>, {0x470, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult20                                 ___ OFFSET(get<T>, {0x488, 24, 0, 0})
	CMember(UDiagnostics_debug_draw*)                  __verse_0x00000000_8                                        ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy7                                     ___ OFFSET(get<T>, {0x4C0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult21                                               ___ OFFSET(get<T>, {0x4D8, 1, 0, 0})
	CMember(USimulation_agent*)                        __verse_0x75EB3F0A_Agent1                                   ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult22                                               ___ OFFSET(get<T>, {0x500, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character1                               ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult23                                               ___ OFFSET(get<T>, {0x528, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult24                                               ___ OFFSET(get<T>, {0x538, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult25                                               ___ OFFSET(get<T>, {0x539, 1, 0, 0})
	CMember(UObject*)                                  __verse_0xD2827887_Navigatable1                             ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult26                                         ___ OFFSET(get<T>, {0x560, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult27                                               ___ OFFSET(get<T>, {0x570, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult28                                               ___ OFFSET(get<T>, {0x571, 1, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x8FB74E85_AbilitySystemComponent1                  ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xDE2F615F_Perception1                              ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult29                                         ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult30                                               ___ OFFSET(get<T>, {0x5C8, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult31                                               ___ OFFSET(get<T>, {0x5C9, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x8D6253CB_Focus1                                   ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult32                                         ___ OFFSET(get<T>, {0x5F0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult33                                               ___ OFFSET(get<T>, {0x600, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult34                                               ___ OFFSET(get<T>, {0x601, 1, 0, 0})
	CMember(UCompanionAI_companion_creature_runtime*)  __verse_0xEF3B3F75_Runtime1                                 ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UCompanionAI_companion_creature_runtime*)  __verse_0x00000000_9                                        ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult35                                               ___ OFFSET(get<T>, {0x630, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x638, 8, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_10                                       ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy8                                     ___ OFFSET(get<T>, {0x648, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult36                                 ___ OFFSET(get<T>, {0x660, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_11                                       ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy9                                     ___ OFFSET(get<T>, {0x698, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult37                                 ___ OFFSET(get<T>, {0x6B0, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_12                                       ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy10                                    ___ OFFSET(get<T>, {0x6E8, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult38                                 ___ OFFSET(get<T>, {0x700, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_13                                       ___ OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy11                                    ___ OFFSET(get<T>, {0x738, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult39                                 ___ OFFSET(get<T>, {0x750, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_14                                       ___ OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy12                                    ___ OFFSET(get<T>, {0x788, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult40                                 ___ OFFSET(get<T>, {0x7A0, 24, 0, 0})
	CMember(UDiagnostics_log*)                         __verse_0x00000000_15                                       ___ OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy13                                    ___ OFFSET(get<T>, {0x7D8, 1, 0, 0})
	SMember(Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R) _ExprResult41                                 ___ OFFSET(get<T>, {0x7F0, 24, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R
/// Size: 0x04C8 (0x000140 - 0x000608)
class Utask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R) __verse_0xB2CDDD72_Argument                   ___ OFFSET(get<T>, {0x148, 32, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x168, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x08287148_Snapshot                                 ___ OFFSET(get<T>, {0x190, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	DMember(double)                                    _ExprResultStack                                            ___ OFFSET(get<double>, {0x230, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult                                                 ___ OFFSET(get<T>, {0x248, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult1                                                ___ OFFSET(get<T>, {0x280, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x2F8, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x2F9, 1, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(Ftuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R) _ExprResult3                  ___ OFFSET(get<T>, {0x340, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x368, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x390, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x3B8, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x08287148_Snapshot1                                ___ OFFSET(get<T>, {0x3E0, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(double)                                    _ExprResultStack1                                           ___ OFFSET(get<double>, {0x480, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult4                                                ___ OFFSET(get<T>, {0x498, 48, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult5                                                ___ OFFSET(get<T>, {0x4D0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x548, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x549, 1, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	SMember(Ftuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R) _ExprResult7                  ___ OFFSET(get<T>, {0x590, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x5B8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x5E0, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R
/// Size: 0x0330 (0x000140 - 0x000470)
class Utask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_Magent_Mfloat_R)           __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xE7A6CCE2_UpdatedSnapshot                          ___ OFFSET(get<T>, {0x198, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	DMember(double)                                    __verse_0x06CF9E69_TargetDisplacement                       ___ OFFSET(get<double>, {0x228, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult                                                 ___ OFFSET(get<T>, {0x240, 48, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x280, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2C0, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x2C8, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x2F0, 1, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0xE7A6CCE2_UpdatedSnapshot1                         ___ OFFSET(get<T>, {0x318, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(double)                                    __verse_0x06CF9E69_TargetDisplacement1                      ___ OFFSET(get<double>, {0x3A8, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult1                                                ___ OFFSET(get<T>, {0x3C0, 48, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy4                                     ___ OFFSET(get<T>, {0x400, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x440, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy5                                     ___ OFFSET(get<T>, {0x448, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$DetectNewTarget
/// Size: 0x0640 (0x000140 - 0x000780)
class Utask_CompanionAI_companion_creature_runtime_DetectNewTarget : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x5DB9D5B4_MyLocation                               ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult                                                 ___ OFFSET(get<T>, {0x1A0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(double)                                    __verse_0xF8082B80_CurrentTargetBonusWeight                 ___ OFFSET(get<double>, {0x220, 8, 0, 0})
	DMember(double)                                    __verse_0xF868BEBF_TargetDistanceWeightMultiplier           ___ OFFSET(get<double>, {0x228, 8, 0, 0})
	DMember(double)                                    __verse_0x614F22D2_BestTargetWeight                         ___ OFFSET(get<double>, {0x230, 8, 0, 0})
	DMember(bool)                                      _ExprResult2                                                ___ OFFSET(get<bool>, {0x242, 1, 1, 0})
	CMember(TArray<FAI_fort_threat_info>)              _ForIterable                                                ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x288, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex                                                   ___ OFFSET(get<int64_t>, {0x290, 8, 0, 0})
	DMember(int64_t)                                   _ForLength                                                  ___ OFFSET(get<int64_t>, {0x298, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo                               ___ OFFSET(get<T>, {0x2A0, 56, 0, 0})
	CMember(USimulation_agent*)                        __verse_0x5AB0A628_ThreatInstigator                         ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) _ExprResult4                                 ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x310, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x311, 1, 0, 0})
	DMember(double)                                    __verse_0x29AC0864_ThreatDistance                           ___ OFFSET(get<double>, {0x318, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult7                                                ___ OFFSET(get<T>, {0x330, 48, 0, 0})
	DMember(double)                                    __verse_0xC6D24390_Weight                                   ___ OFFSET(get<double>, {0x360, 8, 0, 0})
	DMember(double)                                    _ExprResult8                                                ___ OFFSET(get<double>, {0x368, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x440, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x448, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x470, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x5DB9D5B4_MyLocation1                              ___ OFFSET(get<T>, {0x498, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult9                                                ___ OFFSET(get<T>, {0x4B0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x528, 1, 0, 0})
	DMember(double)                                    __verse_0xF8082B80_CurrentTargetBonusWeight1                ___ OFFSET(get<double>, {0x530, 8, 0, 0})
	DMember(double)                                    __verse_0xF868BEBF_TargetDistanceWeightMultiplier1          ___ OFFSET(get<double>, {0x538, 8, 0, 0})
	DMember(double)                                    __verse_0x614F22D2_BestTargetWeight1                        ___ OFFSET(get<double>, {0x540, 8, 0, 0})
	DMember(bool)                                      _ExprResult11                                               ___ OFFSET(get<bool>, {0x552, 1, 1, 0})
	CMember(TArray<FAI_fort_threat_info>)              _ForIterable1                                               ___ OFFSET(get<T>, {0x558, 16, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x598, 1, 0, 0})
	DMember(int64_t)                                   _ForIndex1                                                  ___ OFFSET(get<int64_t>, {0x5A0, 8, 0, 0})
	DMember(int64_t)                                   _ForLength1                                                 ___ OFFSET(get<int64_t>, {0x5A8, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x1EB80E5B_ThreatInfo1                              ___ OFFSET(get<T>, {0x5B0, 56, 0, 0})
	CMember(USimulation_agent*)                        __verse_0x5AB0A628_ThreatInstigator1                        ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	SMember(Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R) _ExprResult13                                ___ OFFSET(get<T>, {0x608, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult14                                               ___ OFFSET(get<T>, {0x620, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x621, 1, 0, 0})
	DMember(double)                                    __verse_0x29AC0864_ThreatDistance1                          ___ OFFSET(get<double>, {0x628, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult16                                               ___ OFFSET(get<T>, {0x640, 48, 0, 0})
	DMember(double)                                    __verse_0xC6D24390_Weight1                                  ___ OFFSET(get<double>, {0x670, 8, 0, 0})
	DMember(double)                                    _ExprResult17                                               ___ OFFSET(get<double>, {0x678, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x750, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x758, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R
/// Size: 0x0288 (0x000140 - 0x0003C8)
class Utask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lagent_Mgameplay__ability__asset_R) __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1A0, 8, 0, 0})
	DMember(double)                                    __verse_0xBF8FBE20_MeleeRange                               ___ OFFSET(get<double>, {0x1A8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x1B0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x1B1, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R) _ExprResult1                                              ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x1E0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x1E8, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x1F0, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R) _ExprResult2                                              ___ OFFSET(get<T>, {0x208, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x218, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x220, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(Ftuple_Lagent_Mgameplay__ability__asset_Mtype_7b2_2e000000e_2b02_7d_Mtype_7b3_2e000000_7d_R) _ExprResult3 ___ OFFSET(get<T>, {0x240, 32, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x260, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x268, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x290, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x2D8, 8, 0, 0})
	DMember(double)                                    __verse_0xBF8FBE20_MeleeRange1                              ___ OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x2E8, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x2E9, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R) _ExprResult5                                              ___ OFFSET(get<T>, {0x308, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x318, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount6                                           ___ OFFSET(get<bool>, {0x320, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask6                                                 ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R) _ExprResult6                                              ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult6                                               ___ OFFSET(get<int64_t>, {0x350, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount7                                           ___ OFFSET(get<bool>, {0x358, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask7                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	SMember(Ftuple_Lagent_Mgameplay__ability__asset_Mtype_7b2_2e000000e_2b02_7d_Mtype_7b3_2e000000_7d_R) _ExprResult7 ___ OFFSET(get<T>, {0x378, 32, 0, 0})
	DMember(int64_t)                                   _AsyncResult7                                               ___ OFFSET(get<int64_t>, {0x398, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x3A0, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$FaceLKP_L_Nagent_M_Nfloat_R
/// Size: 0x0248 (0x000140 - 0x000388)
class Utask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lagent_Mfloat_R)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	DMember(double)                                    __verse_0x78468A3D_RangeThreshold                           ___ OFFSET(get<double>, {0x180, 8, 0, 0})
	SMember(Ftuple_Lagent_Mfloat_R)                    _ExprResult                                                 ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x1B0, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x1B1, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1D8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x1E0, 1, 1, 0})
	SMember(Ftuple_Lagent_Mfloat_R)                    _ExprResult1                                                ___ OFFSET(get<T>, {0x1F8, 16, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x220, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x240, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x248, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x270, 1, 0, 0})
	DMember(double)                                    __verse_0x78468A3D_RangeThreshold1                          ___ OFFSET(get<double>, {0x298, 8, 0, 0})
	SMember(Ftuple_Lagent_Mfloat_R)                    _ExprResult2                                                ___ OFFSET(get<T>, {0x2B8, 16, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x2C8, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x2C9, 1, 1, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x2F8, 1, 1, 0})
	SMember(Ftuple_Lagent_Mfloat_R)                    _ExprResult3                                                ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x338, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x358, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x360, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$GameLoop
/// Size: 0x01B9 (0x000140 - 0x0002F9)
class Utask_CompanionAI_companion_creature_runtime_GameLoop : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 761;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0x7F5D3678_MeleeAttackAbility                       ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(Game_Abilities_add_ability_result)         _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x198, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x199, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult                                                 ___ OFFSET(get<T>, {0x1B8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x1C8, 1, 1, 0})
	CMember(USimulation_agent*)                        __verse_0x459049A1_Target                                   ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	SMember(Ftuple_Lagent_Mgameplay__ability__asset_R) _ExprResult1                                                ___ OFFSET(get<T>, {0x1F8, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x208, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x220, 1, 0, 0})
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0x7F5D3678_MeleeAttackAbility1                      ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(Game_Abilities_add_ability_result)         _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x258, 1, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x270, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x271, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x278, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x290, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x298, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	CMember(USimulation_agent*)                        __verse_0x459049A1_Target1                                  ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(Ftuple_Lagent_Mgameplay__ability__asset_R) _ExprResult4                                                ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x2F8, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$Howl
/// Size: 0x0140 (0x000140 - 0x000280)
class Utask_CompanionAI_companion_creature_runtime_Howl : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0xC4B561B1_HowlAbility                              ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(Game_Abilities_add_ability_result)         _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x180, 1, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(Ftuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R) _ExprResult                   ___ OFFSET(get<T>, {0x1B8, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x1E0, 8, 0, 0})
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0xC4B561B1_HowlAbility1                             ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(Game_Abilities_add_ability_result)         _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	CMember(UGame_Abilities_ability_component*)        __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	SMember(Ftuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R) _ExprResult1                  ___ OFFSET(get<T>, {0x250, 24, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x278, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$PatrolAround
/// Size: 0x0CB0 (0x000140 - 0x000DF0)
class Utask_CompanionAI_companion_creature_runtime_PatrolAround : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3568;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xFE3AE8F0_OriginalPosition                         ___ OFFSET(get<T>, {0x150, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult                                                 ___ OFFSET(get<T>, {0x170, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x1E8, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x1F0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult2 ___ OFFSET(get<T>, {0x210, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack                                            ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack1                                           ___ OFFSET(get<T>, {0x248, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult3                                                ___ OFFSET(get<T>, {0x270, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult4                                                ___ OFFSET(get<T>, {0x2A0, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack2                                           ___ OFFSET(get<T>, {0x2B8, 80, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x350, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult5 ___ OFFSET(get<T>, {0x380, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack3                                           ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack4                                           ___ OFFSET(get<T>, {0x3B8, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult6                                                ___ OFFSET(get<T>, {0x3E0, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult7                                                ___ OFFSET(get<T>, {0x410, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack5                                           ___ OFFSET(get<T>, {0x428, 80, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_3                                        ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult8 ___ OFFSET(get<T>, {0x4E8, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack6                                           ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack7                                           ___ OFFSET(get<T>, {0x520, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult9                                                ___ OFFSET(get<T>, {0x548, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult10                                               ___ OFFSET(get<T>, {0x578, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack8                                           ___ OFFSET(get<T>, {0x590, 80, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult11 ___ OFFSET(get<T>, {0x650, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack9                                           ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack10                                          ___ OFFSET(get<T>, {0x688, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult12                                               ___ OFFSET(get<T>, {0x6B0, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult13                                               ___ OFFSET(get<T>, {0x6E0, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack11                                          ___ OFFSET(get<T>, {0x6F8, 80, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xFE3AE8F0_OriginalPosition1                        ___ OFFSET(get<T>, {0x7A0, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult14                                               ___ OFFSET(get<T>, {0x7C0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x820, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x838, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x848, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult16 ___ OFFSET(get<T>, {0x860, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack12                                          ___ OFFSET(get<T>, {0x880, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack13                                          ___ OFFSET(get<T>, {0x898, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult17                                               ___ OFFSET(get<T>, {0x8C0, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult18                                               ___ OFFSET(get<T>, {0x8F0, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack14                                          ___ OFFSET(get<T>, {0x908, 80, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x9A0, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_7                                        ___ OFFSET(get<T>, {0x9B8, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult19 ___ OFFSET(get<T>, {0x9D0, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack15                                          ___ OFFSET(get<T>, {0x9F0, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack16                                          ___ OFFSET(get<T>, {0xA08, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult20                                               ___ OFFSET(get<T>, {0xA30, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult21                                               ___ OFFSET(get<T>, {0xA60, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack17                                          ___ OFFSET(get<T>, {0xA78, 80, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_8                                        ___ OFFSET(get<T>, {0xB20, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult22 ___ OFFSET(get<T>, {0xB38, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack18                                          ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack19                                          ___ OFFSET(get<T>, {0xB70, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult23                                               ___ OFFSET(get<T>, {0xB98, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult24                                               ___ OFFSET(get<T>, {0xBC8, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack20                                          ___ OFFSET(get<T>, {0xBE0, 80, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_9                                        ___ OFFSET(get<T>, {0xC88, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult25 ___ OFFSET(get<T>, {0xCA0, 32, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack21                                          ___ OFFSET(get<T>, {0xCC0, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack22                                          ___ OFFSET(get<T>, {0xCD8, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult26                                               ___ OFFSET(get<T>, {0xD00, 48, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResult27                                               ___ OFFSET(get<T>, {0xD30, 24, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack23                                          ___ OFFSET(get<T>, {0xD48, 80, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R
/// Size: 0x06B8 (0x000140 - 0x0007F8)
class Utask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2040;

public:
	CMember(UCompanionAI_companion_creature_runtime*)  _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lagent_Mfloat_R)                    __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy                                      ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x4550A2D9_MyPosition                               ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult                                                 ___ OFFSET(get<T>, {0x1A0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	DMember(double)                                    __verse_0xB9A22CCD_RenavigateThreshold                      ___ OFFSET(get<double>, {0x220, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x08287148_Snapshot                                 ___ OFFSET(get<T>, {0x228, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(double)                                    __verse_0x47C7BD3D_DistanceToLKP                            ___ OFFSET(get<double>, {0x2B8, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult2                                                ___ OFFSET(get<T>, {0x2D0, 48, 0, 0})
	DMember(bool)                                      _AsyncBeginCount                                            ___ OFFSET(get<bool>, {0x310, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount1                                           ___ OFFSET(get<bool>, {0x311, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(Ftuple_Lvector3_Magent_Mfloat_R)           _ExprResult3                                                ___ OFFSET(get<T>, {0x330, 40, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x358, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount2                                           ___ OFFSET(get<bool>, {0x360, 1, 1, 0})
	DMember(double)                                    __verse_0xD93761B1_DistanceToLastKnownPosition              ___ OFFSET(get<double>, {0x368, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult4                                                ___ OFFSET(get<T>, {0x380, 48, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_2                                        ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult5 ___ OFFSET(get<T>, {0x3E0, 32, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_R) __verse_0x00000000_3                               ___ OFFSET(get<T>, {0x400, 24, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack                                            ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x448, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask2                                                 ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult2                                               ___ OFFSET(get<int64_t>, {0x478, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy1                                     ___ OFFSET(get<T>, {0x480, 1, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy2                                     ___ OFFSET(get<T>, {0x4A8, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x4550A2D9_MyPosition1                              ___ OFFSET(get<T>, {0x4D0, 24, 0, 0})
	SMember(FSpatialMath_transform)                    _ExprResult6                                                ___ OFFSET(get<T>, {0x4F0, 96, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_4                                        ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x568, 1, 0, 0})
	DMember(double)                                    __verse_0xB9A22CCD_RenavigateThreshold1                     ___ OFFSET(get<double>, {0x570, 8, 0, 0})
	SMember(FAI_fort_threat_info)                      __verse_0x08287148_Snapshot1                                ___ OFFSET(get<T>, {0x578, 56, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_5                                        ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	DMember(double)                                    __verse_0x47C7BD3D_DistanceToLKP1                           ___ OFFSET(get<double>, {0x608, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult8                                                ___ OFFSET(get<T>, {0x620, 48, 0, 0})
	DMember(bool)                                      _AsyncBeginCount3                                           ___ OFFSET(get<bool>, {0x660, 1, 1, 0})
	DMember(bool)                                      _AsyncBeginCount4                                           ___ OFFSET(get<bool>, {0x661, 1, 1, 0})
	CMember(UConcurrency_task*)                        _AsyncTask3                                                 ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	SMember(Ftuple_Lvector3_Magent_Mfloat_R)           _ExprResult9                                                ___ OFFSET(get<T>, {0x680, 40, 0, 0})
	DMember(int64_t)                                   _AsyncResult3                                               ___ OFFSET(get<int64_t>, {0x6A8, 8, 0, 0})
	DMember(bool)                                      _AsyncBeginCount5                                           ___ OFFSET(get<bool>, {0x6B0, 1, 1, 0})
	DMember(double)                                    __verse_0xD93761B1_DistanceToLastKnownPosition1             ___ OFFSET(get<double>, {0x6B8, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult10                                               ___ OFFSET(get<T>, {0x6D0, 48, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_6                                        ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask4                                                 ___ OFFSET(get<T>, {0x718, 8, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R) _ExprResult11 ___ OFFSET(get<T>, {0x730, 32, 0, 0})
	SMember(Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_R) __verse_0x00000000_7                               ___ OFFSET(get<T>, {0x750, 24, 0, 0})
	CMember(UAI_navigation_target*)                    _ExprResultStack1                                           ___ OFFSET(get<T>, {0x768, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult4                                               ___ OFFSET(get<int64_t>, {0x798, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask5                                                 ___ OFFSET(get<T>, {0x7B0, 8, 0, 0})
	DMember(int64_t)                                   _AsyncResult5                                               ___ OFFSET(get<int64_t>, {0x7C8, 8, 0, 0})
	CMember(EVerseTrue)                                _InvokeSureResultDummy3                                     ___ OFFSET(get<T>, {0x7D0, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_default_ai_behavior$OnBegin
/// Size: 0x0180 (0x000140 - 0x0002C0)
class Utask_CompanionAI_default_ai_behavior_OnBegin : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(UCompanionAI_default_ai_behavior*)         _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character                                ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult                                                 ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x199, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult3                                                ___ OFFSET(get<T>, {0x19A, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x03CEBA4E_CharacterActions                         ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult4                                          ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult5                                                ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult6                                                ___ OFFSET(get<T>, {0x1D1, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_                                         ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x200, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x963EC691_Character1                               ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	SMember(Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R)     _ExprResult8                                                ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x250, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x251, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x252, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x03CEBA4E_CharacterActions1                        ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	SMember(Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R) _ExprResult12                                         ___ OFFSET(get<T>, {0x278, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult13                                               ___ OFFSET(get<T>, {0x288, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult14                                               ___ OFFSET(get<T>, {0x289, 1, 0, 0})
	CMember(UObject*)                                  __verse_0x00000000_1                                        ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult15                                               ___ OFFSET(get<T>, {0x2B0, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x2B8, 8, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UCompanionAI_fort_br_character_actions_interface*) _Self                                               ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UCompanionAI_fort_br_creature_actions_interface*) _Self                                                ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_fort_creature_component$RunDefaultBehavior
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_CompanionAI_fort_creature_component_RunDefaultBehavior : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UCompanionAI_fort_creature_component*)     _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_fort_npc_component$RunDefaultBehavior
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_CompanionAI_fort_npc_component_RunDefaultBehavior : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UCompanionAI_fort_npc_component*)          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(VerseAIBase_action_result)                 _RetVal                                                     ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_fort_ping_interface$OnNPCCommand
/// Size: 0x0050 (0x000140 - 0x000190)
class Utask_CompanionAI_fort_ping_interface_OnNPCCommand : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(UCompanionAI_fort_ping_interface*)         _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /CompanionAI/_Verse/VNI/CompanionAI.task_CompanionAI_ping_component$OnNPCCommand
/// Size: 0x0050 (0x000140 - 0x000190)
class Utask_CompanionAI_ping_component_OnNPCCommand : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(UCompanionAI_ping_component*)              _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices
/// Size: 0x0008 (0x000028 - 0x000030)
class UDevices : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UDevices_creative_prop_asset*)             __verse_0x88F30926_DefaultCreativePropAsset                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_device
/// Size: 0x00A0 (0x0000B0 - 0x000150)
class UDevices_creative_device : public UVerseCreativeDevice
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_device_asset
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UDevices_creative_device_asset : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_object
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UDevices_creative_object : public UVerseCreativeObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_device_base
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UDevices_creative_device_base : public UDevices_creative_object
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_object_interface
/// Size: 0x0000 (0x000028 - 0x000028)
class UDevices_creative_object_interface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_prop
/// Size: 0x00B0 (0x0000D0 - 0x000180)
class UDevices_creative_prop : public UDevices_creative_object
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_prop_asset
/// Size: 0x0000 (0x000090 - 0x000090)
class UDevices_creative_prop_asset : public UVerseCreativePropAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_creative_prop_debug_log
/// Size: 0x0000 (0x000028 - 0x000028)
class UDevices_creative_prop_debug_log : public UDiagnostics_log_channel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation
/// Size: 0x0000 (0x000028 - 0x000028)
class UDevices_CreativeAnimation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_animation_controller
/// Size: 0x0140 (0x000028 - 0x000168)
class UDevices_CreativeAnimation_animation_controller : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UDiagnostics_log*)                         __verse_0x63A8D5FA_DebugLog                                 ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UObject*)                                  __verse_0x1A3A2D49_KeyframeReachedEvent                     ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xEC8DE8C6_MovementCompleteEvent                    ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UObject*)                                  __verse_0xDE60FD58_StateChangedEvent                        ___ OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_animation_controller_debug_log
/// Size: 0x0000 (0x000028 - 0x000028)
class UDevices_CreativeAnimation_animation_controller_debug_log : public UDiagnostics_log_channel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_InterpolationTypes
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UDevices_CreativeAnimation_InterpolationTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FDevices_CreativeAnimation_cubic_bezier_parameters) __verse_0x9B27EB9D_Linear                          ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FDevices_CreativeAnimation_cubic_bezier_parameters) __verse_0x9CD14C25_Ease                            ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	SMember(FDevices_CreativeAnimation_cubic_bezier_parameters) __verse_0xB345298C_EaseIn                          ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FDevices_CreativeAnimation_cubic_bezier_parameters) __verse_0xF59E2BD2_EaseOut                         ___ OFFSET(get<T>, {0x88, 32, 0, 0})
	SMember(FDevices_CreativeAnimation_cubic_bezier_parameters) __verse_0x29A389AE_EaseInOut                       ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event
/// Size: 0x0050 (0x000028 - 0x000078)
class UDevices_device_event : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event_agent
/// Size: 0x0000 (0x000078 - 0x000078)
class UDevices_device_event_agent : public UDevices_device_event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event_agent_int
/// Size: 0x0000 (0x000078 - 0x000078)
class UDevices_device_event_agent_int : public UDevices_device_event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event_ai_interaction
/// Size: 0x0020 (0x000078 - 0x000098)
class UDevices_device_event_ai_interaction : public UDevices_device_event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event_optional_agent
/// Size: 0x0000 (0x000078 - 0x000078)
class UDevices_device_event_optional_agent : public UDevices_device_event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event_optional_agent_int
/// Size: 0x0000 (0x000078 - 0x000078)
class UDevices_device_event_optional_agent_int : public UDevices_device_event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event_vehicle
/// Size: 0x0000 (0x000078 - 0x000078)
class UDevices_device_event_vehicle : public UDevices_device_event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_event_void
/// Size: 0x0000 (0x000078 - 0x000078)
class UDevices_device_event_void : public UDevices_device_event
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function
/// Size: 0x0030 (0x000028 - 0x000058)
class UDevices_device_function : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_base
/// Size: 0x0010 (0x000028 - 0x000038)
class UDevices_device_function_get_base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_agent
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_get_agent : public UDevices_device_function_get_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_color
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_get_color : public UDevices_device_function_get_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_float
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_get_float : public UDevices_device_function_get_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_int
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_get_int : public UDevices_device_function_get_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_logic
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_get_logic : public UDevices_device_function_get_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_string
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_get_string : public UDevices_device_function_get_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_get_vector3
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_get_vector3 : public UDevices_device_function_get_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_base
/// Size: 0x0010 (0x000028 - 0x000038)
class UDevices_device_function_set_base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_agent
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_agent : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_color
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_color : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_float
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_float : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_int
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_int : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_logic
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_logic : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_message
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_message : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_multi_parameter_base
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_multi_parameter_base : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_params_by_name
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UDevices_device_function_set_params_by_name : public UDevices_device_function_set_multi_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<__verse_0x8F623C81_ParameterTypes, UClass*>) __verse_0x8F623C81_ParameterTypes                    ___ OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_params_by_name_const
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UDevices_device_function_set_params_by_name_const : public UDevices_device_function_set_params_by_name
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_params_by_type
/// Size: 0x0020 (0x000048 - 0x000068)
class UDevices_device_function_set_params_by_type : public UDevices_device_function_set_multi_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<UClass*>)                           __verse_0x8F623C81_ParameterTypes                           ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_params_by_type_const
/// Size: 0x0010 (0x000068 - 0x000078)
class UDevices_device_function_set_params_by_type_const : public UDevices_device_function_set_params_by_type
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_string
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_string : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_function_set_vector3
/// Size: 0x0010 (0x000038 - 0x000048)
class UDevices_device_function_set_vector3 : public UDevices_device_function_set_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_subscription
/// Size: 0x0040 (0x000028 - 0x000068)
class UDevices_device_subscription : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_base
/// Size: 0x0000 (0x000028 - 0x000028)
class UDevices_function_parameter_base : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_agent
/// Size: 0x0008 (0x000028 - 0x000030)
class UDevices_function_parameter_agent : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_color
/// Size: 0x0018 (0x000028 - 0x000040)
class UDevices_function_parameter_color : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FColors_color)                             __verse_0x31A8F10C_Value                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_float
/// Size: 0x0008 (0x000028 - 0x000030)
class UDevices_function_parameter_float : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(double)                                    __verse_0x31A8F10C_Value                                    ___ OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_int
/// Size: 0x0008 (0x000028 - 0x000030)
class UDevices_function_parameter_int : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   __verse_0x31A8F10C_Value                                    ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_logic
/// Size: 0x0008 (0x000028 - 0x000030)
class UDevices_function_parameter_logic : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      __verse_0x31A8F10C_Value                                    ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_message
/// Size: 0x0008 (0x000028 - 0x000030)
class UDevices_function_parameter_message : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_string
/// Size: 0x0010 (0x000028 - 0x000038)
class UDevices_function_parameter_string : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_function_parameter_vector3
/// Size: 0x0018 (0x000028 - 0x000040)
class UDevices_function_parameter_vector3 : public UDevices_function_parameter_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x31A8F10C_Value                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_move_to_debug_log
/// Size: 0x0000 (0x000028 - 0x000028)
class UDevices_move_to_debug_log : public UDiagnostics_log_channel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.Devices_teleport_to_debug_log
/// Size: 0x0000 (0x000028 - 0x000028)
class UDevices_teleport_to_debug_log : public UDiagnostics_log_channel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
/// Size: 0x02F8 (0x000140 - 0x000438)
class Utask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) __verse_0xB2CDDD72_Argument ___ OFFSET(get<T>, {0x140, 128, 0, 0})
	CMember(Devices_move_to_result)                    _RetVal                                                     ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	CMember(Devices_move_to_internal_result)           __verse_0x95D09D0E_Result                                   ___ OFFSET(get<T>, {0x1C1, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult           ___ OFFSET(get<T>, {0x1E0, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x260, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult2                                                ___ OFFSET(get<T>, {0x270, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	CMember(Devices_move_to_internal_result)           __verse_0x95D09D0E_Result1                                  ___ OFFSET(get<T>, {0x2F8, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult3          ___ OFFSET(get<T>, {0x320, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x3A0, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult5                                                ___ OFFSET(get<T>, {0x3B0, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x420, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R
/// Size: 0x03C8 (0x000140 - 0x000508)
class Utask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1288;

public:
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R) __verse_0xB2CDDD72_Argument ___ OFFSET(get<T>, {0x140, 96, 0, 0})
	CMember(Devices_move_to_result)                    _RetVal                                                     ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x61C3007D_Transform                                ___ OFFSET(get<T>, {0x1B0, 96, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R) _ExprResult                           ___ OFFSET(get<T>, {0x220, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x231, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult3          ___ OFFSET(get<T>, {0x250, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult5                                                ___ OFFSET(get<T>, {0x2E0, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x350, 8, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x61C3007D_Transform1                               ___ OFFSET(get<T>, {0x360, 96, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R) _ExprResult6                          ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult7                                                ___ OFFSET(get<T>, {0x3E0, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x3E1, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult9          ___ OFFSET(get<T>, {0x400, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult10                                               ___ OFFSET(get<T>, {0x480, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult11                                               ___ OFFSET(get<T>, {0x490, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x500, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
/// Size: 0x0C28 (0x000140 - 0x000D68)
class Utask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3432;

public:
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) __verse_0xB2CDDD72_Argument ___ OFFSET(get<T>, {0x140, 128, 0, 0})
	CMember(Devices_move_to_internal_result)           _RetVal                                                     ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	SMember(Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R) __verse_0xA8BECD0D_GetControllerResult ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x995129C4_Controller                        ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x80B800AD_CurrentTransform                         ___ OFFSET(get<T>, {0x210, 96, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R) _ExprResult                           ___ OFFSET(get<T>, {0x280, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x290, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult2                                                ___ OFFSET(get<T>, {0x291, 1, 0, 0})
	CMember(TArray<FDevices_CreativeAnimation_keyframe_delta>) __verse_0xB23BEFD6_KeyframeArray                    ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FDevices_CreativeAnimation_keyframe_delta) _ExprResult3                                                ___ OFFSET(get<T>, {0x2B0, 128, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack                                            ___ OFFSET(get<T>, {0x330, 80, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack1                                           ___ OFFSET(get<T>, {0x3D0, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult4                                                ___ OFFSET(get<T>, {0x3F8, 48, 0, 0})
	SMember(FVerseRotation)                            _ExprResultStack2                                           ___ OFFSET(get<T>, {0x430, 32, 0, 0})
	SMember(Ftuple_Lrotation_Mrotation_R)              _ExprResult5                                                ___ OFFSET(get<T>, {0x460, 64, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack3                                           ___ OFFSET(get<T>, {0x4A0, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult6                                                ___ OFFSET(get<T>, {0x4C8, 48, 0, 0})
	CMember(Devices_CreativeAnimation_set_animation_result) __verse_0xC40A5F4A_SetAnimationResult                  ___ OFFSET(get<T>, {0x4F8, 1, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x00000000_                                  ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R) _ExprResult7                            ___ OFFSET(get<T>, {0x518, 24, 0, 0})
	CMember(Devices_CreativeAnimation_playstoppause_result) __verse_0x2BCA4545_PlayResult                          ___ OFFSET(get<T>, {0x580, 1, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x00000000_1                                 ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult8                                                ___ OFFSET(get<T>, {0x5A0, 1, 0, 0})
	CMember(Devices_CreativeAnimation_await_next_keyframe_result) __verse_0x95D09D0E_Result                        ___ OFFSET(get<T>, {0x5F0, 1, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x00000000_2                                 ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult9                                                ___ OFFSET(get<T>, {0x618, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x620, 8, 0, 0})
	CMember(Devices_CreativeAnimation_await_next_keyframe_result) __verse_0x00000000_3                             ___ OFFSET(get<T>, {0x628, 1, 0, 0})
	SMember(Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R) __verse_0xA8BECD0D_GetControllerResult1 ___ OFFSET(get<T>, {0x7A8, 16, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x995129C4_Controller1                       ___ OFFSET(get<T>, {0x7C8, 8, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x80B800AD_CurrentTransform1                        ___ OFFSET(get<T>, {0x7E0, 96, 0, 0})
	SMember(Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R) _ExprResult10                         ___ OFFSET(get<T>, {0x850, 16, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult11                                               ___ OFFSET(get<T>, {0x860, 1, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult12                                               ___ OFFSET(get<T>, {0x861, 1, 0, 0})
	CMember(TArray<FDevices_CreativeAnimation_keyframe_delta>) __verse_0xB23BEFD6_KeyframeArray1                   ___ OFFSET(get<T>, {0x868, 16, 0, 0})
	SMember(FDevices_CreativeAnimation_keyframe_delta) _ExprResult13                                               ___ OFFSET(get<T>, {0x880, 128, 0, 0})
	CMember(TMap<$ExprResultStack, bool>)              _ExprResultStack4                                           ___ OFFSET(get<T>, {0x900, 80, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack5                                           ___ OFFSET(get<T>, {0x9A0, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult14                                               ___ OFFSET(get<T>, {0x9C8, 48, 0, 0})
	SMember(FVerseRotation)                            _ExprResultStack6                                           ___ OFFSET(get<T>, {0xA00, 32, 0, 0})
	SMember(Ftuple_Lrotation_Mrotation_R)              _ExprResult15                                               ___ OFFSET(get<T>, {0xA30, 64, 0, 0})
	SMember(FSpatialMath_vector3)                      _ExprResultStack7                                           ___ OFFSET(get<T>, {0xA70, 24, 0, 0})
	SMember(Ftuple_Lvector3_Mvector3_R)                _ExprResult16                                               ___ OFFSET(get<T>, {0xA98, 48, 0, 0})
	CMember(Devices_CreativeAnimation_set_animation_result) __verse_0xC40A5F4A_SetAnimationResult1                 ___ OFFSET(get<T>, {0xAC8, 1, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x00000000_4                                 ___ OFFSET(get<T>, {0xAD0, 8, 0, 0})
	SMember(Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R) _ExprResult17                           ___ OFFSET(get<T>, {0xAE8, 24, 0, 0})
	CMember(Devices_CreativeAnimation_playstoppause_result) __verse_0x2BCA4545_PlayResult1                         ___ OFFSET(get<T>, {0xB50, 1, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x00000000_5                                 ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult18                                               ___ OFFSET(get<T>, {0xB70, 1, 0, 0})
	CMember(Devices_CreativeAnimation_await_next_keyframe_result) __verse_0x95D09D0E_Result1                       ___ OFFSET(get<T>, {0xBC0, 1, 0, 0})
	CMember(UDevices_CreativeAnimation_animation_controller*) __verse_0x00000000_6                                 ___ OFFSET(get<T>, {0xBC8, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0xBD0, 8, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult19                                               ___ OFFSET(get<T>, {0xBE8, 1, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0xBF0, 8, 0, 0})
	CMember(Devices_CreativeAnimation_await_next_keyframe_result) __verse_0x00000000_7                             ___ OFFSET(get<T>, {0xBF8, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R
/// Size: 0x02C8 (0x000140 - 0x000408)
class Utask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	CMember(UDevices_creative_device*)                 _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x150, 112, 0, 0})
	CMember(Devices_move_to_result)                    _RetVal                                                     ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult                          ___ OFFSET(get<T>, {0x1E0, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x260, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult2                                                ___ OFFSET(get<T>, {0x270, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult3                         ___ OFFSET(get<T>, {0x300, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x380, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult5                                                ___ OFFSET(get<T>, {0x390, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x400, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
/// Size: 0x0228 (0x000140 - 0x000368)
class Utask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(UDevices_creative_device*)                 _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x150, 80, 0, 0})
	CMember(Devices_move_to_result)                    _RetVal                                                     ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R) _ExprResult                  ___ OFFSET(get<T>, {0x1C0, 96, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x220, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        _ExprResult2                                                ___ OFFSET(get<T>, {0x230, 80, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x280, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R) _ExprResult3                 ___ OFFSET(get<T>, {0x2A0, 96, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x300, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        _ExprResult5                                                ___ OFFSET(get<T>, {0x310, 80, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x360, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_creative_device$OnBegin
/// Size: 0x0009 (0x000140 - 0x000149)
class Utask_Devices_creative_device_OnBegin : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 329;

public:
	CMember(UDevices_creative_device*)                 _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R
/// Size: 0x02C8 (0x000140 - 0x000408)
class Utask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	CMember(UDevices_creative_prop*)                   _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x150, 112, 0, 0})
	CMember(Devices_move_to_result)                    _RetVal                                                     ___ OFFSET(get<T>, {0x1C0, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult                            ___ OFFSET(get<T>, {0x1E0, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x260, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult2                                                ___ OFFSET(get<T>, {0x270, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x2E0, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R) _ExprResult3                           ___ OFFSET(get<T>, {0x300, 128, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x380, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                _ExprResult5                                                ___ OFFSET(get<T>, {0x390, 112, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x400, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
/// Size: 0x0228 (0x000140 - 0x000368)
class Utask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(UDevices_creative_prop*)                   _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x150, 80, 0, 0})
	CMember(Devices_move_to_result)                    _RetVal                                                     ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask                                                  ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R) _ExprResult                    ___ OFFSET(get<T>, {0x1C0, 96, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult1                                                ___ OFFSET(get<T>, {0x220, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        _ExprResult2                                                ___ OFFSET(get<T>, {0x230, 80, 0, 0})
	DMember(int64_t)                                   _AsyncResult                                                ___ OFFSET(get<int64_t>, {0x280, 8, 0, 0})
	CMember(UConcurrency_task*)                        _AsyncTask1                                                 ___ OFFSET(get<T>, {0x288, 8, 0, 0})
	SMember(Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R) _ExprResult3                   ___ OFFSET(get<T>, {0x2A0, 96, 0, 0})
	SMember(Ftuple_L_R)                                _ExprResult4                                                ___ OFFSET(get<T>, {0x300, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        _ExprResult5                                                ___ OFFSET(get<T>, {0x310, 80, 0, 0})
	DMember(int64_t)                                   _AsyncResult1                                               ___ OFFSET(get<int64_t>, {0x360, 8, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe
/// Size: 0x000A (0x000140 - 0x00014A)
class Utask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 330;

public:
	CMember(UDevices_CreativeAnimation_animation_controller*) _Self                                                ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(Devices_CreativeAnimation_await_next_keyframe_result) _RetVal                                          ___ OFFSET(get<T>, {0x149, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_device_event_agent$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Devices_device_event_agent_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UDevices_device_event_agent*)              _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_device_event_agent_int$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Devices_device_event_agent_int_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UDevices_device_event_agent_int*)          _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_device_event_ai_interaction$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Devices_device_event_ai_interaction_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UDevices_device_event_ai_interaction*)     _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_device_event_optional_agent$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Devices_device_event_optional_agent_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UDevices_device_event_optional_agent*)     _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_device_event_optional_agent_int$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Devices_device_event_optional_agent_int_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UDevices_device_event_optional_agent_int*) _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_device_event_vehicle$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Devices_device_event_vehicle_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UDevices_device_event_vehicle*)            _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseDevices/_Verse/VNI/VerseDevices.task_Devices_device_event_void$Await
/// Size: 0x0020 (0x000140 - 0x000160)
class Utask_Devices_device_event_void_Await : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UDevices_device_event_void*)               _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_fort_building_settings_component
/// Size: 0x0050 (0x000088 - 0x0000D8)
class UGame_fort_building_settings_component : public UFortBuildingSettingsComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_fort_item_definition
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class UGame_fort_item_definition : public UAssets_asset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_fort_playspace_component
/// Size: 0x0038 (0x000138 - 0x000170)
class UGame_fort_playspace_component : public UPlayspace_playspace_component
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_fortnite_building_component
/// Size: 0x0058 (0x000058 - 0x0000B0)
class UGame_fortnite_building_component : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Item_item_type
/// Size: 0x0008 (0x000028 - 0x000030)
class UGame_Item_item_type : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Item_player_pickup_component
/// Size: 0x0058 (0x000058 - 0x0000B0)
class UGame_Item_player_pickup_component : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Item_PlayerPickupComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Item_PlayerPickupComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Movement_projectile_movement_component
/// Size: 0x0060 (0x000088 - 0x0000E8)
class UGame_Movement_projectile_movement_component : public UVerseFortniteMovementComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_player_eliminated_result
/// Size: 0x0010 (0x000028 - 0x000038)
class UGame_player_eliminated_result : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USimulation_player_component*)             __verse_0x7C71103B_EliminatedPlayer                         ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_fort_player_component
/// Size: 0x0040 (0x0000E0 - 0x000120)
class UGame_Player_fort_player_component : public USimulation_player_component
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_player_start_component
/// Size: 0x0030 (0x000058 - 0x000088)
class UGame_Player_player_start_component : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<__verse_0x7C32BFF7_tags>)           __verse_0x7C32BFF7_tags                                     ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerAttributes
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerAttributes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerInventory
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerInventory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerInvulnerable
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerInvulnerable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerSpectator
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerSpectator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerStartComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerStartComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerStasis
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerStasis : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerStatus
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerStatus : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerTeam
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerTeam : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerTravel
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerTravel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerVisibility
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_Player_PlayerVisibility : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_stat_container
/// Size: 0x0040 (0x000028 - 0x000068)
class UGame_stat_container : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_match_stats
/// Size: 0x00F0 (0x000068 - 0x000158)
class UGame_match_stats : public UGame_stat_container
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_player_stat_values
/// Size: 0x0008 (0x000068 - 0x000070)
class UGame_player_stat_values : public UGame_stat_container
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(USimulation_player*)                       __verse_0xDEE8E111_OwningPlayer                             ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_StormController_storm_controller_component
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UGame_StormController_storm_controller_component : public UEntityFortniteStormControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(double)                                    __verse_0xA5122212_startRadius                              ___ OFFSET(get<double>, {0xC8, 8, 0, 0})
	DMember(double)                                    __verse_0xE6BD5D91_boundsRadius                             ___ OFFSET(get<double>, {0xD0, 8, 0, 0})
	CMember(TArray<UGame_StormController_storm_phase*>) __verse_0xC2790393_phases                                  ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_StormController_storm_phase
/// Size: 0x0068 (0x000028 - 0x000090)
class UGame_StormController_storm_phase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(double)                                    __verse_0x4CDBEC4D_waitTime                                 ___ OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(double)                                    __verse_0xDFEF9A4E_shrinkTime                               ___ OFFSET(get<double>, {0x30, 8, 0, 0})
	DMember(double)                                    __verse_0x96A9475A_endRadius                                ___ OFFSET(get<double>, {0x38, 8, 0, 0})
	DMember(double)                                    __verse_0x61AAA523_endRadiusPercentage                      ___ OFFSET(get<double>, {0x40, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7781DBF3_damageIndex                              ___ OFFSET(get<int64_t>, {0x48, 8, 0, 0})
	DMember(bool)                                      __verse_0x3902DD0B_moves                                    ___ OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(double)                                    __verse_0xA376E20D_minMovementDistance                      ___ OFFSET(get<double>, {0x58, 8, 0, 0})
	DMember(double)                                    __verse_0x2C327F1D_maxMovementDistance                      ___ OFFSET(get<double>, {0x60, 8, 0, 0})
	DMember(double)                                    __verse_0xDA5EE7C4_minMovementDistancePercentage            ___ OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(double)                                    __verse_0x7B63CDBA_maxMovementDistancePercentage            ___ OFFSET(get<double>, {0x70, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xD6F5A7B7_endLocation                              ___ OFFSET(get<T>, {0x78, 24, 0, 0})
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_team_stat_values
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UGame_team_stat_values : public UGame_stat_container
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FGame_Player_player_team)                  __verse_0x555B2F95_Team                                     ___ OFFSET(get<T>, {0xE8, 4, 0, 0})
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_VerseFortniteHacks
/// Size: 0x0000 (0x000028 - 0x000028)
class UGame_VerseFortniteHacks : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.task_Game_fort_playspace_component$__WaitForPlayerEliminated
/// Size: 0x0018 (0x000140 - 0x000158)
class Utask_Game_fort_playspace_component___WaitForPlayerEliminated : public UConcurrency_task
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UGame_fort_playspace_component*)           _Self                                                       ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0xB2CDDD72_Argument                                 ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	CMember(UGame_player_eliminated_result*)           _RetVal                                                     ___ OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_editable_text_base
/// Size: 0x00B0 (0x000168 - 0x000218)
class UUI_editable_text_base : public UUI_text_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(UVerseEngine_subscribable_event*)          __verse_0x90B514C1_OnTextCommittedInternal                  ___ OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_editable_text
/// Size: 0x0000 (0x000218 - 0x000218)
class UUI_editable_text : public UUI_editable_text_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_editable_text_box
/// Size: 0x0000 (0x000218 - 0x000218)
class UUI_editable_text_box : public UUI_editable_text_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_fort_hud_controller
/// Size: 0x0000 (0x000028 - 0x000028)
class UUI_fort_hud_controller : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_fort_playspace_hud_controller_impl
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UUI_fort_playspace_hud_controller_impl : public UVerseFortnitePlayspaceHUDController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_element_identifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UUI_hud_element_identifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_element_game_phase_identifier_base
/// Size: 0x0008 (0x000028 - 0x000030)
class UUI_hud_element_game_phase_identifier_base : public UUI_hud_element_identifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   __verse_0xFD438257_InternalIndex                            ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_element_gameplay_tag_identifier_base
/// Size: 0x0038 (0x000028 - 0x000060)
class UUI_hud_element_gameplay_tag_identifier_base : public UUI_hud_element_identifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      __verse_0xAD653F0E_TreatAsChildTagCollection                ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_all
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_all : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_build_menu
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_build_menu : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_crafting_resources
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_crafting_resources : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_elimination_counter
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_elimination_counter : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_equipped_item
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_equipped_item : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_experience_level
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_experience_level : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_experience_supercharged
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_experience_supercharged : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_experience_ui
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_experience_ui : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_health
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_health : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_health_numbers
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_health_numbers : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_hud_info
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_hud_info : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_interaction_prompts
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_interaction_prompts : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_map_prompts
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_map_prompts : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_mimimap
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_mimimap : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_minimap
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_minimap : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_pickup_stream
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_pickup_stream : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_player_count
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_player_count : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_player_inventory
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_player_inventory : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_round_info
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_round_info : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_round_timer
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_round_timer : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_shield_numbers
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_shield_numbers : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_shields
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_shields : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_shileds
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_shileds : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_storm_notifications
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_storm_notifications : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_storm_timer
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_storm_timer : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_creative_hud_identifier_team_info
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_creative_hud_identifier_team_info : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_element_world_resource_identifier_base
/// Size: 0x0008 (0x000028 - 0x000030)
class UUI_hud_element_world_resource_identifier_base : public UUI_hud_element_identifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   __verse_0xFD438257_InternalIndex                            ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_bus_flying
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_bus_flying : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_bus_locked
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_bus_locked : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_countdown
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_countdown : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_end_game
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_end_game : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_final_countdown
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_final_countdown : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_none
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_none : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_setup
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_setup : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_storm_forming
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_storm_forming : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_storm_holding
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_storm_holding : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_storm_shrinking
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_storm_shrinking : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_game_phase_warmup
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_game_phase_warmup : public UUI_hud_element_game_phase_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_world_resource_gold_currency
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_world_resource_gold_currency : public UUI_hud_element_world_resource_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_world_resource_ingredient
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_world_resource_ingredient : public UUI_hud_element_world_resource_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_world_resource_metal
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_world_resource_metal : public UUI_hud_element_world_resource_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_world_resource_permanite
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_world_resource_permanite : public UUI_hud_element_world_resource_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_world_resource_stone
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_world_resource_stone : public UUI_hud_element_world_resource_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_hud_identifier_world_resource_wood
/// Size: 0x0000 (0x000030 - 0x000030)
class UUI_hud_identifier_world_resource_wood : public UUI_hud_element_world_resource_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_player_hud_identifier_all
/// Size: 0x0000 (0x000060 - 0x000060)
class UUI_player_hud_identifier_all : public UUI_hud_element_gameplay_tag_identifier_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_slider_regular
/// Size: 0x00B8 (0x000098 - 0x000150)
class UUI_slider_regular : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	DMember(double)                                    __verse_0xF4334CD7_DefaultValue                             ___ OFFSET(get<double>, {0x128, 8, 0, 0})
	DMember(double)                                    __verse_0x286B843E_DefaultMinValue                          ___ OFFSET(get<double>, {0x130, 8, 0, 0})
	DMember(double)                                    __verse_0xADAE7DFC_DefaultMaxValue                          ___ OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(double)                                    __verse_0x8F4BE3BB_DefaultStepSize                          ___ OFFSET(get<double>, {0x140, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0xDA7EA268_OnValueChangedInternal                   ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_text_block
/// Size: 0x0098 (0x000168 - 0x000200)
class UUI_text_block : public UUI_text_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FColors_color)                             __verse_0xAD85CEA8_DefaultShadowColor                       ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_text_button_base
/// Size: 0x0040 (0x000098 - 0x0000D8)
class UUI_text_button_base : public UUI_widget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UVerse_message*)                           __verse_0xEDB05B46_DefaultText                              ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UVerseEngine_subscribable_event*)          __verse_0x6B2BB37E_OnClickInternal                          ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_button_loud
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UUI_button_loud : public UUI_text_button_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_button_quiet
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UUI_button_quiet : public UUI_text_button_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.UI_button_regular
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UUI_button_regular : public UUI_text_button_base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Struct /Solaris/_Verse/VNI/VerseNative.tuple_L_R
/// Size: 0x0001 (0x000000 - 0x000001)
class Ftuple_L_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      _StructPaddingDummy                                         ___ OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R
/// Size: 0x0058 (0x000000 - 0x000058)
class Ftuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<EpicGames_Input_verse_key>)         __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<EpicGames_Input_verse_key>)         __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R
/// Size: 0x0048 (0x000000 - 0x000048)
class Ftuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<EpicGames_Input_verse_key>)         __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(EpicGames_Input_input_event)               __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_L_Kchar_M_Kchar_M_Kverse__key_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<EpicGames_Input_verse_key>)         __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EpicGames_Input_input_event)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_L_Kchar_Minput__event_R
/// Size: 0x0011 (0x000000 - 0x000011)
class Ftuple_L_Kchar_Minput__event_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 17;

public:
	CMember(EpicGames_Input_input_event)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.tuple_Lverse__ue__input__component_M_Kchar_Minput__event_R
/// Size: 0x0019 (0x000000 - 0x000019)
class Ftuple_Lverse__ue__input__component_M_Kchar_Minput__event_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 25;

public:
	CMember(UEpicGames_Input_verse_ue_input_component*) __verse_0x18E3F084_Elem0                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EpicGames_Input_input_event)               __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.Colors_color
/// Size: 0x0018 (0x000000 - 0x000018)
class FColors_color : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x35184040_R                                        ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x98BF8727_G                                        ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0xAA4F5910_B                                        ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_K_Kchar_M_Kchar_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_L_K_Kchar_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_M_Kany_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_L_Kany_M_Kany_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<__verse_0x7D844C3C_Elem1>)          __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Many_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_L_Kany_Mtuple_L_R_Many_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Mint_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_L_Kany_Mtuple_L_R_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_L_Kany_Mtuple_L_R_Mtuple_L_Kany_M_Kany_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(Ftuple_L_Kany_M_Kany_R)                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lany_Many_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(Ftuple_Lany_Many_R)                        __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_M_Kany_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(Ftuple_Lint_M_Kany_R)                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Many_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(Ftuple_Lint_Many_R)                        __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_L_Kany_Mtuple_L_R_Mtuple_Lint_Mint_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(Ftuple_Lint_Mint_R)                        __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_L_Kany_Mtuple_L_R_Mtuple_Ltype_7b0_7d_Mint_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<__verse_0x18E3F084_Elem0>)          __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(Ftuple_Ltype_7b0_7d_Mint_R)                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
/// Size: 0x0070 (0x000000 - 0x000070)
class Ftuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TMap<__verse_0x932BF92E_Elem2, UVerse_localizable_value*>) __verse_0x932BF92E_Elem2                    ___ OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_L_Kchar_M_QWhere_Nlocale_R
/// Size: 0x0012 (0x000000 - 0x000012)
class Ftuple_L_Kchar_M_QWhere_Nlocale_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lany_Many_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lany_Many_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lcolor_Mcolor_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_Lcolor_Mcolor_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FColors_color)                             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FColors_color)                             __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lcolor_Mfloat_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lcolor_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FColors_color)                             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lcolor_Mint_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lcolor_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FColors_color)                             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lfloat_M_QWhere_Nlocale_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lfloat_M_QWhere_Nlocale_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lfloat_Mcolor_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lfloat_Mcolor_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(FColors_color)                             __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lfloat_Mfloat_Mfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lfloat_Mfloat_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lfloat_Mfloat_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lfloat_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lfloat_Mtuple_L_R_Mfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lfloat_Mtuple_L_R_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lint_M_Kany_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lint_M_Kany_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(TArray<__verse_0x7D844C3C_Elem1>)          __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lint_M_QWhere_Nlocale_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lint_M_QWhere_Nlocale_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lint_Many_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lint_Many_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lint_Mcolor_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lint_Mcolor_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FColors_color)                             __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lint_Mint_Mint_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lint_Mint_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Lint_Mint_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lint_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.tuple_Ltype_7b0_7d_Mint_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Ltype_7b0_7d_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Verse/_Verse/VNI/Verse.Verse_locale
/// Size: 0x0001 (0x000000 - 0x000001)
class FVerse_locale : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.SpatialMath_transform
/// Size: 0x0060 (0x000000 - 0x000060)
class FSpatialMath_transform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSpatialMath_vector3)                      __verse_0xA376805D_Scale                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x78C70FF3_Rotation                                 ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x4E05BF15_Translation                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.SpatialMath_vector2
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialMath_vector2 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    __verse_0x51F8FD2F_X                                        ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x349F4197_Y                                        ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.SpatialMath_vector2i
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpatialMath_vector2i : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   __verse_0x51F8FD2F_X                                        ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x349F4197_Y                                        ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.SpatialMath_vector3
/// Size: 0x0018 (0x000000 - 0x000018)
class FSpatialMath_vector3 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x51F8FD2F_X                                        ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x349F4197_Y                                        ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0xDA30F485_Z                                        ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lfloat_Mvector2_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lfloat_Mvector2_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lfloat_Mvector3_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lfloat_Mvector3_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lint_Mvector2i_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lint_Mvector2i_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	SMember(FSpatialMath_vector2i)                     __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lrotation_Mrotation_Mfloat_R
/// Size: 0x0048 (0x000000 - 0x000048)
class Ftuple_Lrotation_Mrotation_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVerseRotation)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x40, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lrotation_Mrotation_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_Lrotation_Mrotation_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVerseRotation)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mfloat_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_Lrotation_Mtuple_L_R_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVerseRotation)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mrotation_R
/// Size: 0x0050 (0x000000 - 0x000050)
class Ftuple_Lrotation_Mtuple_L_R_Mrotation_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVerseRotation)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FVerseRotation)                            __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x0022 (0x000000 - 0x000022)
class Ftuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 34;

public:
	SMember(FVerseRotation)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lrotation_Mtuple_L_R_Mvector3_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_Lrotation_Mtuple_L_R_Mvector3_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVerseRotation)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Ltransform_Mvector3_R
/// Size: 0x0078 (0x000000 - 0x000078)
class Ftuple_Ltransform_Mvector3_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSpatialMath_transform)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector2_Mfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lvector2_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSpatialMath_vector2)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector2_Mtuple_L_R_Mfloat_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lvector2_Mtuple_L_R_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSpatialMath_vector2)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x0012 (0x000000 - 0x000012)
class Ftuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
	SMember(FSpatialMath_vector2)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x11, 1, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector2_Mvector2_Mfloat_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector2_Mvector2_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector2)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector2_Mvector2_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lvector2_Mvector2_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSpatialMath_vector2)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector2i_Mint_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lvector2i_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSpatialMath_vector2i)                     __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector2i_Mvector2i_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lvector2i_Mvector2i_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSpatialMath_vector2i)                     __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMath_vector2i)                     __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector3_Mfloat_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lvector3_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector3_Mtuple_L_R_Mfloat_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector3_Mtuple_L_R_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x001A (0x000000 - 0x00001A)
class Ftuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 26;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x19, 1, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector3_Mvector3_Mfloat_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_Lvector3_Mvector3_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Struct /EpicGamesTemporary/_Verse/VNI/EpicGamesTemporary.tuple_Lvector3_Mvector3_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_Lvector3_Mvector3_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R
/// Size: 0x0012 (0x000000 - 0x000012)
class Ftuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0060 (0x000000 - 0x000060)
class Ftuple_Lvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0080 (0x000000 - 0x000080)
class Ftuple_Lvector3_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_Mrotation_M_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class Ftuple_Lvector3_Mrotation_M_QExtent_Nvector3_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_Mrotation_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class Ftuple_Lvector3_Mrotation_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0088 (0x000000 - 0x000088)
class Ftuple_Lvector3_Mvector3_M_QArrowSize_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0078 (0x000000 - 0x000078)
class Ftuple_Lvector3_Mvector3_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QNumSides_Nint_20_3d_20_2e_2e_2e_M_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class Ftuple_Lvector3_Mvector3_M_QHeight_Nfloat_20_3d_20_2e_2e_2e_M_QNumSides_Nint_20_3d_20_2e_2e_2e_M_QAngleWidthRadians_Nfloat_20_3d_20_2e_2e_2e_M_QAngleHeightRadians_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.tuple_Lvector3_Mvector3_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
/// Size: 0x0098 (0x000000 - 0x000098)
class Ftuple_Lvector3_Mvector3_M_QNumSegments_Nint_20_3d_20_2e_2e_2e_M_QRadius_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_M_QThickness_Nfloat_20_3d_20_2e_2e_2e_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_20_3d_20_2e_2e_2e_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.tuple_Ltag__container_Mtag__container_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Ltag__container_Mtag__container_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UTags_tag_container*)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UTags_tag_container*)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.tuple_Ltag_Mtag_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Ltag_Mtag_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UTags_tag*)                                __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UTags_tag*)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseEngine/_Verse/VNI/VerseEngine.tuple_Lcomponent_Many_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lcomponent_Many_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UEntityComponent*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseEngine/_Verse/VNI/VerseAssets.tuple_Lany_M_Kchar_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lany_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseSimulation/_Verse/VNI/VerseSimulation.tuple_Lplayer__component_Many_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lplayer__component_Many_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_player_component*)             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.tuple_Ldate__time_Mdate__time_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Ldate__time_Mdate__time_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FVerseExperimental_date_time)              __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVerseExperimental_date_time)              __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.tuple_Ldate__time_Mtime__span_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Ldate__time_Mtime__span_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVerseExperimental_date_time)              __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVerseExperimental_time_span)              __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.tuple_Lfloat_Mtime__span_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lfloat_Mtime__span_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	SMember(FVerseExperimental_time_span)              __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.tuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x4F74920B_Elem4                                    ___ OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x2A132EB3_Elem5                                    ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xC4BC9BA1_Elem6                                    ___ OFFSET(get<int64_t>, {0x30, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.tuple_Lint_Mint_Mint_Mint_Mint_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lint_Mint_Mint_Mint_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x4F74920B_Elem4                                    ___ OFFSET(get<int64_t>, {0x20, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.tuple_Ltime__span_Mfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Ltime__span_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVerseExperimental_time_span)              __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.tuple_Ltime__span_Mtime__span_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Ltime__span_Mtime__span_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVerseExperimental_time_span)              __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVerseExperimental_time_span)              __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_date_parts
/// Size: 0x0018 (0x000000 - 0x000018)
class FVerseExperimental_date_parts : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   __verse_0xC55E1F94_Year                                     ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x1B283C2C_Month                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xD305C642_Day                                      ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_date_time
/// Size: 0x0008 (0x000000 - 0x000008)
class FVerseExperimental_date_time : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   __verse_0xD9F5FBDB_Ticks                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_time_of_day_parts
/// Size: 0x0030 (0x000000 - 0x000030)
class FVerseExperimental_time_of_day_parts : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int64_t)                                   __verse_0xEF684B3B_Hours                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x2D42EE39_Minutes                                  ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xA650E91F_Seconds                                  ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x59EF8267_Milliseconds                             ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x40AEA2F6_Microseconds                             ___ OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x0E58C5A9_Nanoseconds                              ___ OFFSET(get<int64_t>, {0x28, 8, 0, 0})
};

/// Struct /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_time_span
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseExperimental_time_span : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   __verse_0xD9F5FBDB_Ticks                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_L_Kchar_Mtransform_M_Kchar_R
/// Size: 0x0080 (0x000000 - 0x000080)
class Ftuple_L_Kchar_Mtransform_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSpatialMath_transform)                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R
/// Size: 0x0090 (0x000000 - 0x000090)
class Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<UClass*>)                           __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UAssets_material*)                         __verse_0x4F74920B_Elem4                                    ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R
/// Size: 0x0088 (0x000000 - 0x000088)
class Ftuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<UClass*>)                           __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R
/// Size: 0x0088 (0x000000 - 0x000088)
class Ftuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<UClass*>)                           __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0x2A132EB3_Elem5                                    ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UAssets_material*)                         __verse_0xC4BC9BA1_Elem6                                    ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lcomponent_Mint_Many_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lcomponent_Mint_Many_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UEntityComponent*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R
/// Size: 0x0078 (0x000000 - 0x000078)
class Ftuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UEntityComponent*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(VGameplayRst_Physics_physics_trace_category) __verse_0x7D844C3C_Elem1                                  ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(VGameplayRst_Physics_physics_trace_type)   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(VGameplayRst_Physics_physics_trace_shape)  __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0xA, 1, 0, 0})
	CMember(VGameplayRst_Physics_physics_trace_channel) __verse_0x4F74920B_Elem4                                   ___ OFFSET(get<T>, {0xB, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x2A132EB3_Elem5                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xC4BC9BA1_Elem6                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      __verse_0xA1DB2719_Elem7                                    ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xF7CB4441_Elem8                                    ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(double)                                    __verse_0x92ACF8F9_Elem9                                    ___ OFFSET(get<double>, {0x60, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lentity_M_Ksubtype_Lcomponent_R_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lentity_M_Ksubtype_Lcomponent_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UVerseEngine_Entity_entity*)               __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UClass*>)                           __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lfloat_Mactivation__state_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_Lfloat_Mactivation__state_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	CMember(VGameplayRst_Components_activation_state)  __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lfloat_Mlogic_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_Lfloat_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(bool)                                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lint_Mcomponent_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lint_Mcomponent_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Llevel_Mtime__span_M_Kchar_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Llevel_Mtime__span_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UAssets_level*)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVerseExperimental_time_span)              __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Llogic_Mlogic_R
/// Size: 0x0002 (0x000000 - 0x000002)
class Ftuple_Llogic_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<bool>, {0x1, 1, 1, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lmaterial_Mint_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lmaterial_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UAssets_material*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lplayer__component_M_Kchar_M_Kchar_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lplayer__component_M_Kchar_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(USimulation_player_component*)             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lplayer__component_M_Kchar_Mint_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lplayer__component_M_Kchar_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USimulation_player_component*)             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Ltime__span_M_Kchar_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Ltime__span_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVerseExperimental_time_span)              __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R
/// Size: 0x0080 (0x000000 - 0x000080)
class Ftuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSpatialMath_transform)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UAssets_material*)                         __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Ltransform_M_Kchar_Mmesh_R
/// Size: 0x0078 (0x000000 - 0x000078)
class Ftuple_Ltransform_M_Kchar_Mmesh_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSpatialMath_transform)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Ltransform_M_Kchar_R
/// Size: 0x0070 (0x000000 - 0x000070)
class Ftuple_Ltransform_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FSpatialMath_transform)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 96, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UAssets_material*)                         __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lvector3_M_Kchar_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector3_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R
/// Size: 0x0060 (0x000000 - 0x000060)
class Ftuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UAssets_material*)                         __verse_0x4F74920B_Elem4                                    ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R
/// Size: 0x0078 (0x000000 - 0x000078)
class Ftuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(UAssets_mesh*)                             __verse_0x4F74920B_Elem4                                    ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UAssets_material*)                         __verse_0x2A132EB3_Elem5                                    ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.tuple_Lvector3_Mvector3_Mvector3_M_Kchar_R
/// Size: 0x0058 (0x000000 - 0x000058)
class Ftuple_Lvector3_Mvector3_Mvector3_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_hit_result
/// Size: 0x0040 (0x000000 - 0x000040)
class FVGameplayRst_Physics_hit_result : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int64_t)                                   __verse_0x592C3A0F_OtherEntityID                            ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(UVGameplayRst_Physics_collision_component*) __verse_0x15DAA648_OtherComponent                          ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xA0175DA6_HitNormal                                ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xE16733E1_HitLocation                              ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_config
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseMovement_move_config : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVerseMovement_move_config_entry>)  __verse_0xCE82C4DD_Entries                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_config_entry
/// Size: 0x0030 (0x000000 - 0x000030)
class FVerseMovement_move_config_entry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FVerseMovement_move_trigger>)       __verse_0x6DA99CE5_Triggers                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FVerseMovement_move_response>)      __verse_0xBAC32A9B_Responses                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_input_trigger_params
/// Size: 0x0038 (0x000000 - 0x000038)
class FVerseMovement_move_input_trigger_params : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      __verse_0x7D5B20A2_IsAxis                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      __verse_0xC35555B9_AccumulateAxisInput                      ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x9EA11583_ClampAxis                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_physics_trigger_params
/// Size: 0x0018 (0x000000 - 0x000018)
class FVerseMovement_move_physics_trigger_params : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSpatialMath_vector3)                      __verse_0xE78E15A1_SpeedInDirection                         ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response
/// Size: 0x0050 (0x000000 - 0x000050)
class FVerseMovement_move_response : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x0464FDB1_Vector                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0xA6A970E7_Magnitude                                ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	CMember(VerseMovement_move_response_type)          __verse_0x72E298E9_Type                                     ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(VerseMovement_move_response_frame)         __verse_0x08A22912_Frame                                    ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(VerseMovement_move_response_effect)        __verse_0xCDC901A6_Effect                                   ___ OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(VerseMovement_move_response_modifier)      __verse_0xCDC9EFBD_Modifier                                 ___ OFFSET(get<T>, {0x2B, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7B949B4B_ClampVector                              ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(VerseMovement_move_response_frame)         __verse_0x3B045791_ClampFrame                               ___ OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_trace_trigger_params
/// Size: 0x0038 (0x000000 - 0x000038)
class FVerseMovement_move_trace_trigger_params : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x722EF6A3_Direction                                ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(VerseMovement_move_response_frame)         __verse_0x08A22912_Frame                                    ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(double)                                    __verse_0x2AC13C27_TraceLength                              ___ OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(bool)                                      __verse_0x99455FC7_ProportionalToHitDistance                ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Struct /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_trigger
/// Size: 0x0090 (0x000000 - 0x000090)
class FVerseMovement_move_trigger : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(VerseMovement_move_trigger_type)           __verse_0x72E298E9_Type                                     ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVerseMovement_move_input_trigger_params)  __verse_0xD3F71544_InputParams                              ___ OFFSET(get<T>, {0x8, 56, 0, 0})
	SMember(FVerseMovement_move_physics_trigger_params) __verse_0x4D939126_PhysicsParams                           ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FVerseMovement_move_trace_trigger_params)  __verse_0x874565E7_TraceParams                              ___ OFFSET(get<T>, {0x58, 56, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.tuple_Limage__tiling_Mimage__tiling_R
/// Size: 0x0002 (0x000000 - 0x000002)
class Ftuple_Limage__tiling_Mimage__tiling_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(UI_image_tiling)                           __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UI_image_tiling)                           __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.tuple_Lwidget_Mplayer__ui__slot_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lwidget_Mplayer__ui__slot_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UUI_widget*)                               __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FUI_player_ui_slot)                        __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.tuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R
/// Size: 0x0058 (0x000000 - 0x000058)
class Ftuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UUI_widget*)                               __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_anchors
/// Size: 0x0020 (0x000000 - 0x000020)
class FUI_anchors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSpatialMath_vector2)                      __verse_0x91692725_Minimum                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSpatialMath_vector2)                      __verse_0xDF63CF93_Maximum                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_button_slot
/// Size: 0x0030 (0x000000 - 0x000030)
class FUI_button_slot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UUI_widget*)                               __verse_0xA5B83AD1_Widget                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UI_horizontal_alignment)                   __verse_0xF13651F1_HorizontalAlignment                      ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(UI_vertical_alignment)                     __verse_0xA83057DE_VerticalAlignment                        ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FUI_margin)                                __verse_0x7F718DF5_Padding                                  ___ OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_canvas_slot
/// Size: 0x0068 (0x000000 - 0x000068)
class FUI_canvas_slot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FUI_anchors)                               __verse_0x6C624651_Anchors                                  ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FUI_margin)                                __verse_0xAE9C7630_Offsets                                  ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(bool)                                      __verse_0x270727B9_SizeToContent                            ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	SMember(FSpatialMath_vector2)                      __verse_0xE9839A38_Alignment                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int64_t)                                   __verse_0xEB688892_ZOrder                                   ___ OFFSET(get<int64_t>, {0x58, 8, 0, 0})
	CMember(UUI_widget*)                               __verse_0xA5B83AD1_Widget                                   ___ OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_margin
/// Size: 0x0020 (0x000000 - 0x000020)
class FUI_margin : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    __verse_0x88EBCF27_Left                                     ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x97B55C26_Top                                      ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0x296C864F_Right                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    __verse_0x7AA421E3_Bottom                                   ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_overlay_slot
/// Size: 0x0030 (0x000000 - 0x000030)
class FUI_overlay_slot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UUI_widget*)                               __verse_0xA5B83AD1_Widget                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UI_horizontal_alignment)                   __verse_0xF13651F1_HorizontalAlignment                      ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(UI_vertical_alignment)                     __verse_0xA83057DE_VerticalAlignment                        ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FUI_margin)                                __verse_0x7F718DF5_Padding                                  ___ OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_player_ui_slot
/// Size: 0x0010 (0x000000 - 0x000010)
class FUI_player_ui_slot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   __verse_0xEB688892_ZOrder                                   ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	CMember(UI_ui_input_mode)                          __verse_0xF0FC54F2_InputMode                                ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_stack_box_slot
/// Size: 0x0040 (0x000000 - 0x000040)
class FUI_stack_box_slot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UUI_widget*)                               __verse_0xA5B83AD1_Widget                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UI_horizontal_alignment)                   __verse_0xF13651F1_HorizontalAlignment                      ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(UI_vertical_alignment)                     __verse_0xA83057DE_VerticalAlignment                        ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FUI_margin)                                __verse_0x7F718DF5_Padding                                  ___ OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_user_widget_slot
/// Size: 0x0018 (0x000000 - 0x000018)
class FUI_user_widget_slot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UUI_widget*)                               __verse_0xA5B83AD1_Widget                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseUI/_Verse/VNI/VerseUI.UI_widget_message
/// Size: 0x0010 (0x000000 - 0x000010)
class FUI_widget_message : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_player*)                       __verse_0xE5E3B371_Player                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UUI_widget*)                               __verse_0xB1B721CE_Source                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseWorldPartition/_Verse/VNI/VerseWorldPartition.tuple_Ldata__layer__asset_Mdata__layer__runtime__state_Mlogic_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Ldata__layer__asset_Mdata__layer__runtime__state_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UVerseWorldPartition_data_layer_asset*)    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(VerseWorldPartition_data_layer_runtime_state) __verse_0x7D844C3C_Elem1                                 ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x9, 1, 1, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.AI_fort_threat_info
/// Size: 0x0038 (0x000000 - 0x000038)
class FAI_fort_threat_info : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x4A328DE2_LastKnownPosition                        ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      __verse_0xAC2B8860_HasLineOfSight                           ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      __verse_0xABBA0802_IsThreatening                            ___ OFFSET(get<bool>, {0x29, 1, 1, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.Characters_stasis_args
/// Size: 0x0003 (0x000000 - 0x000003)
class FCharacters_stasis_args : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      __verse_0xADC8E6AA_AllowTurning                             ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      __verse_0x04C721DA_AllowFalling                             ___ OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      __verse_0x178F77CA_AllowEmotes                              ___ OFFSET(get<bool>, {0x2, 1, 1, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.Game_damage_args
/// Size: 0x0018 (0x000000 - 0x000018)
class FGame_damage_args : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x193A13B7_Amount                                   ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.Game_damage_result
/// Size: 0x0020 (0x000000 - 0x000020)
class FGame_damage_result : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UObject*)                                  __verse_0x459049A1_Target                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x193A13B7_Amount                                   ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.Game_elimination_result
/// Size: 0x0010 (0x000000 - 0x000010)
class FGame_elimination_result : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  __verse_0xC5F618E8_EliminatedCharacter                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.Game_healing_args
/// Size: 0x0018 (0x000000 - 0x000018)
class FGame_healing_args : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(double)                                    __verse_0x193A13B7_Amount                                   ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.Game_healing_result
/// Size: 0x0020 (0x000000 - 0x000020)
class FGame_healing_result : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UObject*)                                  __verse_0x459049A1_Target                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x193A13B7_Amount                                   ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lagent_Magent_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lagent_Magent_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lagent_Mfloat_Mfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lagent_Mfloat_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lagent_Mteam_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lagent_Mteam_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USimulation_team*)                         __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lagent_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lagent_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R
/// Size: 0x0050 (0x000000 - 0x000050)
class Ftuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_R)               __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 64, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UObject*)                                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UObject*)                                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
/// Size: 0x001A (0x000000 - 0x00001A)
class Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 26;

public:
	CMember(UAI_navigation_target*)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lplayer_Mtuple_L_R_Mplayer_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lplayer_Mtuple_L_R_Mplayer_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(USimulation_player*)                       __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lteam_Mteam_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lteam_Mteam_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_team*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USimulation_team*)                         __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lvector3_Mfloat_Mfloat_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector3_Mfloat_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /VerseFortnite/_Verse/VNI/VerseFortnite.tuple_Lvector3_Mrotation_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_Lvector3_Mrotation_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.tuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.tuple_Lgameplay__effect__asset_Mfloat_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lgameplay__effect__asset_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UGame_Abilities_gameplay_effect_asset*)    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /VerseAIBase/_Verse/VNI/VerseAIBase.tuple_Lfort__inventory__item__asset_Mint_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lfort__inventory__item__asset_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UVerseAIBase_fort_inventory_item_asset*)   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /VerseAIBase/_Verse/VNI/VerseAIBase.tuple_Lfort__item__descriptor_Mfort__item__tag_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lfort__item__descriptor_Mfort__item__tag_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVerseAIBase_fort_item_descriptor)         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(UVerseAIBase_fort_item_tag*)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /VerseAIBase/_Verse/VNI/VerseAIBase.tuple_Lgameplay__ability__asset_M_Kchar_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lgameplay__ability__asset_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_item_descriptor
/// Size: 0x0018 (0x000000 - 0x000018)
class FVerseAIBase_fort_item_descriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UVerseAIBase_fort_item_tag*)               __verse_0x93BEB694_ItemType                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_loot_info
/// Size: 0x0028 (0x000000 - 0x000028)
class FVerseAIBase_fort_loot_info : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0xB0C27E0A_Location                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(VerseAIBase_fort_loot_type)                __verse_0x72E298E9_Type                                     ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(UVerseEngine_Entity_entity*)               __verse_0xC218B7D2_Loot                                     ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_obstacle_info
/// Size: 0x0028 (0x000000 - 0x000028)
class FVerseAIBase_fort_obstacle_info : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0xB0C27E0A_Location                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(VerseAIBase_fort_obstacle_status)          __verse_0xFA60180E_Status                                   ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(UVerseEngine_Entity_entity*)               __verse_0x82A44C52_Obstacle                                 ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_weapon_descriptor
/// Size: 0x0018 (0x000000 - 0x000018)
class FVerseAIBase_fort_weapon_descriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int64_t)                                   __verse_0xB3780369_TotalAmmo                                ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0xAEE6FE8C_LoadedAmmo                               ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0x40EB5EBF_MaxRange                                 ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_ping_info
/// Size: 0x0038 (0x000000 - 0x000038)
class FCompanionAI_ping_info : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(CompanionAI_PingCommand_command_type)      __verse_0x72E298E9_Type                                     ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(CompanionAI_PingCommand_entity_type)       __verse_0x6CF7C7E8_EntityType                               ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xB0C27E0A_Location                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      __verse_0x0FA78E7E_LocationOnHorizontalSurface              ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_L_Kchar_M_Kchar_M_Kchar_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_L_Kchar_M_Kchar_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_L_Kchar_M_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lagent_Mfloat_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lagent_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lagent_Mgameplay__ability__asset_Mtype_7b2_2e000000e_2b02_7d_Mtype_7b3_2e000000_7d_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lagent_Mgameplay__ability__asset_Mtype_7b2_2e000000e_2b02_7d_Mtype_7b3_2e000000_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lagent_Mgameplay__ability__asset_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lagent_Mgameplay__ability__asset_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGame_Abilities_gameplay_ability_asset*)   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lagent_Mtype_7b2_2e000000e_2b02_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_agent*)                        __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lentity_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lentity_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UVerseEngine_Entity_entity*)               __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lfort__character_Mfloat_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lfort__character_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lfort__obstacle__info_Mentity_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_Lfort__obstacle__info_Mentity_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVerseAIBase_fort_obstacle_info)           __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	CMember(UVerseEngine_Entity_entity*)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R
/// Size: 0x001A (0x000000 - 0x00001A)
class Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_M_QAllowPartialPath_Nlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 26;

public:
	CMember(UAI_navigation_target*)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lnavigation__target_M_QReachRadius_Nfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lnavigation__target_M_QReachRadius_Nfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UAI_navigation_target*)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Ltype_7b5_2e000000e_2b01_7d_Mtype_7b2_2e000000e_2b02_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Ltype_7b_2d1_2e000000e_2b03_7d_Mtype_7b1_2e000000e_2b03_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
/// Size: 0x003A (0x000000 - 0x00003A)
class Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 58;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b10_2e000000_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b1_2e000000e_2b02_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R
/// Size: 0x003A (0x000000 - 0x00003A)
class Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b2_2e000000e_2b02_7d_M_QAllowPartialPath_Nlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 58;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b4_2e000000e_2b02_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R
/// Size: 0x003A (0x000000 - 0x00003A)
class Ftuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Ntype_7b5_2e000000e_2b01_7d_M_QAllowPartialPath_Nlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 58;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R
/// Size: 0x0070 (0x000000 - 0x000070)
class Ftuple_Lvector3_M_QColor_Ncolor_M_QRadius_Nfloat_M_QThickness_Ntype_7b3_2e000000_7d_M_QDrawDurationPolicy_Ndebug__draw__duration__policy_M_QNumSegments_Ntype_7b32_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_Magent_Mfloat_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector3_Magent_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(USimulation_agent*)                        __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_Mfloat_Magent_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector3_Mfloat_Magent_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	CMember(USimulation_agent*)                        __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_Mfloat_Mcolor_R
/// Size: 0x0038 (0x000000 - 0x000038)
class Ftuple_Lvector3_Mfloat_Mcolor_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	SMember(FColors_color)                             __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector3_Mtype_7b0_2e500000_7d_Mtype_7b1_2e500000_7d_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /CompanionAI/_Verse/VNI/CompanionAI.tuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R
/// Size: 0x0028 (0x000000 - 0x000028)
class Ftuple_Lvector3_Mtype_7b1_2e000000e_2b02_7d_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_cubic_bezier_parameters
/// Size: 0x0020 (0x000000 - 0x000020)
class FDevices_CreativeAnimation_cubic_bezier_parameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    __verse_0xBBCFCA13_X0                                       ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    __verse_0x25CF60DF_Y0                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    __verse_0xDEA876AB_X1                                       ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    __verse_0x40A8DC67_Y1                                       ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_keyframe_delta
/// Size: 0x0080 (0x000000 - 0x000080)
class FDevices_CreativeAnimation_keyframe_delta : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FSpatialMath_vector3)                      __verse_0xC51B5857_DeltaLocation                            ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x0D1E29AE_DeltaRotation                            ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x97B35C4B_DeltaScale                               ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(double)                                    __verse_0x742B3E02_Time                                     ___ OFFSET(get<double>, {0x58, 8, 0, 0})
	SMember(FDevices_CreativeAnimation_cubic_bezier_parameters) __verse_0xB7FF3D07_Interpolation                   ___ OFFSET(get<T>, {0x60, 32, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.Devices_device_ai_interaction_result
/// Size: 0x0010 (0x000000 - 0x000010)
class FDevices_device_ai_interaction_result : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_L_Kchar_M_QLevel_Nlog__level_R
/// Size: 0x0012 (0x000000 - 0x000012)
class Ftuple_L_Kchar_M_QLevel_Nlog__level_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_L_Kchar_Mplaystoppause__result_R
/// Size: 0x0011 (0x000000 - 0x000011)
class Ftuple_L_Kchar_Mplaystoppause__result_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 17;

public:
	CMember(Devices_CreativeAnimation_playstoppause_result) __verse_0x7D844C3C_Elem1                               ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R
/// Size: 0x0012 (0x000000 - 0x000012)
class Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
	CMember(TArray<FDevices_CreativeAnimation_keyframe_delta>) __verse_0x18E3F084_Elem0                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R
/// Size: 0x0012 (0x000000 - 0x000012)
class Ftuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
	CMember(TArray<FDevices_CreativeAnimation_keyframe_delta>) __verse_0x18E3F084_Elem0                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R
/// Size: 0x0012 (0x000000 - 0x000012)
class Ftuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
	CMember(TArray<FDevices_CreativeAnimation_keyframe_delta>) __verse_0x18E3F084_Elem0                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_L_Qanimation__controller_Mget__animation__controller__result_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_L_Qanimation__controller_Mget__animation__controller__result_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	CMember(Devices_CreativeAnimation_get_animation_controller_result) __verse_0x7D844C3C_Elem1                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_L_Qcreative__prop_Mspawn__prop__result_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_L_Qcreative__prop_Mspawn__prop__result_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	CMember(Devices_spawn_prop_result)                 __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__device_Mtuple_L_R_Mtransform_R
/// Size: 0x0070 (0x000000 - 0x000070)
class Ftuple_Lcreative__device_Mtuple_L_R_Mtransform_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UDevices_creative_device*)                 __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__device_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UDevices_creative_device*)                 __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__device_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R
/// Size: 0x0080 (0x000000 - 0x000080)
class Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UDevices_creative_device*)                 __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 112, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R
/// Size: 0x0060 (0x000000 - 0x000060)
class Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UDevices_creative_device*)                 __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R
/// Size: 0x0050 (0x000000 - 0x000050)
class Ftuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UDevices_creative_device*)                 __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_R)               __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 64, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R
/// Size: 0x0070 (0x000000 - 0x000070)
class Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UVerseMovableObjectBase*)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UVerseMovableObjectBase*)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R
/// Size: 0x0080 (0x000000 - 0x000080)
class Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UVerseMovableObjectBase*)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 112, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R
/// Size: 0x0060 (0x000000 - 0x000060)
class Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UVerseMovableObjectBase*)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R
/// Size: 0x0050 (0x000000 - 0x000050)
class Ftuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UVerseMovableObjectBase*)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_R)               __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 64, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UObject*)                                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__object_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lcreative__object_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UDevices_creative_object*)                 __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__prop__asset_Mtransform_R
/// Size: 0x0070 (0x000000 - 0x000070)
class Ftuple_Lcreative__prop__asset_Mtransform_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UDevices_creative_prop_asset*)             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__prop__asset_Mvector3_Mrotation_R
/// Size: 0x0040 (0x000000 - 0x000040)
class Ftuple_Lcreative__prop__asset_Mvector3_Mrotation_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UDevices_creative_prop_asset*)             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_Mtransform_R
/// Size: 0x0070 (0x000000 - 0x000070)
class Ftuple_Lcreative__prop_Mtuple_L_R_Mtransform_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UDevices_creative_prop*)                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FSpatialMath_transform)                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 96, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UDevices_creative_prop*)                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R
/// Size: 0x0080 (0x000000 - 0x000080)
class Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UDevices_creative_prop*)                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Ltransform_Mfloat_R)                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 112, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R
/// Size: 0x0060 (0x000000 - 0x000060)
class Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UDevices_creative_prop*)                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_Mfloat_R)        __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R
/// Size: 0x0050 (0x000000 - 0x000050)
class Ftuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UDevices_creative_prop*)                   __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_Lvector3_Mrotation_R)               __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 64, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lmaterial_M_QIndex_Nint_20_3d_20_2e_2e_2e_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lmaterial_M_QIndex_Nint_20_3d_20_2e_2e_2e_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UAssets_material*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Ltransform_Mfloat_R
/// Size: 0x0068 (0x000000 - 0x000068)
class Ftuple_Ltransform_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FSpatialMath_transform)                    __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	DMember(double)                                    __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<double>, {0x60, 8, 0, 0})
};

/// Struct /VerseDevices/_Verse/VNI/VerseDevices.tuple_Lvector3_Mrotation_Mfloat_R
/// Size: 0x0048 (0x000000 - 0x000048)
class Ftuple_Lvector3_Mrotation_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVerseRotation)                            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x40, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_player_team
/// Size: 0x0004 (0x000000 - 0x000004)
class FGame_Player_player_team : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lcomponent_M_K_Kchar_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lcomponent_M_K_Kchar_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UEntityComponent*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<__verse_0x7D844C3C_Elem1>)          __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lcomponent_Mcomponent_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lcomponent_Mcomponent_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UEntityComponent*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R
/// Size: 0x0030 (0x000000 - 0x000030)
class Ftuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UEntityComponent*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGame_fort_item_definition*)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	SMember(FSpatialMath_vector3)                      __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lcomponent_Mlogic_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_Lcomponent_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	CMember(UEntityComponent*)                         __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Litem__type_Mint_Mplayer__component_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Litem__type_Mint_Mplayer__component_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGame_Item_item_type*)                     __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	CMember(USimulation_player_component*)             __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer__component_Mplayer__start__component_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lplayer__component_Mplayer__start__component_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_player_component*)             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGame_Player_player_start_component*)      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer__component_Mplayer__status__type_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_Lplayer__component_Mplayer__status__type_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	CMember(USimulation_player_component*)             __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(Game_Player_player_status_type)            __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer__team_Mint_Mint_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lplayer__team_Mint_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGame_Player_player_team)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer__team_Mint_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lplayer__team_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGame_Player_player_team)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer__team_Mplayer__team_R
/// Size: 0x0008 (0x000000 - 0x000008)
class Ftuple_Lplayer__team_Mplayer__team_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGame_Player_player_team)                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGame_Player_player_team)                  __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_M_Kchar_Mint_Mlogic_R
/// Size: 0x0021 (0x000000 - 0x000021)
class Ftuple_Lplayer_M_Kchar_Mint_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 33;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	DMember(bool)                                      __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_M_Kchar_Mint_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lplayer_M_Kchar_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x18, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R
/// Size: 0x0019 (0x000000 - 0x000019)
class Ftuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 25;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UGame_fort_item_definition*)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	DMember(bool)                                      __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_Mint_Mint_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lplayer_Mint_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<int64_t>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_Mint_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lplayer_Mint_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_Mlogic_Mlogic_Mlogic_R
/// Size: 0x000B (0x000000 - 0x00000B)
class Ftuple_Lplayer_Mlogic_Mlogic_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 11;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<bool>, {0x9, 1, 1, 0})
	DMember(bool)                                      __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<bool>, {0xA, 1, 1, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_Mlogic_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_Lplayer_Mlogic_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_Mplayer__team_R
/// Size: 0x000C (0x000000 - 0x00000C)
class Ftuple_Lplayer_Mplayer__team_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGame_Player_player_team)                  __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_Mplayer_R
/// Size: 0x0010 (0x000000 - 0x000010)
class Ftuple_Lplayer_Mplayer_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USimulation_player*)                       __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_MPlayerAttribute_Mfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lplayer_MPlayerAttribute_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(Game_Player_PlayerAttribute)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(double)                                    __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R
/// Size: 0x0018 (0x000000 - 0x000018)
class Ftuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(Game_Player_PlayerAttribute)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(Game_Player_PlayerAttributeOperation)      __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
	DMember(double)                                    __verse_0xF64C4596_Elem3                                    ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lplayer_MPlayerAttribute_R
/// Size: 0x0009 (0x000000 - 0x000009)
class Ftuple_Lplayer_MPlayerAttribute_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 9;

public:
	CMember(USimulation_player*)                       __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(Game_Player_PlayerAttribute)               __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.tuple_Lvector3_M_Qplayer__component_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lvector3_M_Qplayer__component_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FSpatialMath_vector3)                      __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.tuple_Lfort__playspace_Mtuple_L_R_Mtuple_L_R_R
/// Size: 0x000A (0x000000 - 0x00000A)
class Ftuple_Lfort__playspace_Mtuple_L_R_Mtuple_L_R_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 10;

public:
	CMember(UObject*)                                  __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /VerseFortniteUI/_Verse/VNI/VerseFortniteUI.tuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R
/// Size: 0x0020 (0x000000 - 0x000020)
class Ftuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UUI_player_ui*)                            __verse_0x18E3F084_Elem0                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(Ftuple_L_R)                                __verse_0x7D844C3C_Elem1                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<UUI_hud_element_identifier*>)       __verse_0x932BF92E_Elem2                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.EpicGames_Input_input_event
/// Size: 0x03
enum EpicGames_Input_input_event : uint8_t
{
	EpicGames_Input_input_event__Pressed0                                            = 0,
	EpicGames_Input_input_event__Released1                                           = 1,
	EpicGames_Input_input_event__EpicGames_Input_input_MAX2                          = 2
};

/// Enum /EpicGamesEngine/_Verse/VNI/EpicGamesEngine.EpicGames_Input_verse_key
/// Size: 0x73
enum EpicGames_Input_verse_key : uint8_t
{
	EpicGames_Input_verse_key__Gamepad_FaceButton_Top0                               = 0,
	EpicGames_Input_verse_key__Gamepad_FaceButton_Bottom1                            = 1,
	EpicGames_Input_verse_key__Gamepad_FaceButton_Left2                              = 2,
	EpicGames_Input_verse_key__Gamepad_FaceButton_Right3                             = 3,
	EpicGames_Input_verse_key__Gamepad_LeftShoulder4                                 = 4,
	EpicGames_Input_verse_key__Gamepad_RightShoulder5                                = 5,
	EpicGames_Input_verse_key__Gamepad_LeftTrigger6                                  = 6,
	EpicGames_Input_verse_key__Gamepad_RightTrigger7                                 = 7,
	EpicGames_Input_verse_key__Gamepad_DPad_Up8                                      = 8,
	EpicGames_Input_verse_key__Gamepad_DPad_Down9                                    = 9,
	EpicGames_Input_verse_key__Gamepad_DPad_Left10                                   = 10,
	EpicGames_Input_verse_key__Gamepad_DPad_Right11                                  = 11,
	EpicGames_Input_verse_key__Gamepad_LeftX12                                       = 12,
	EpicGames_Input_verse_key__Gamepad_LeftY13                                       = 13,
	EpicGames_Input_verse_key__Gamepad_RightX14                                      = 14,
	EpicGames_Input_verse_key__Gamepad_RightY15                                      = 15,
	EpicGames_Input_verse_key__Gamepad_LeftTriggerAxis16                             = 16,
	EpicGames_Input_verse_key__Gamepad_RightTriggerAxis17                            = 17,
	EpicGames_Input_verse_key__Mouse_X18                                             = 18,
	EpicGames_Input_verse_key__Mouse_Y19                                             = 19,
	EpicGames_Input_verse_key__Mouse_WheelAxis20                                     = 20,
	EpicGames_Input_verse_key__Mouse_LeftButton21                                    = 21,
	EpicGames_Input_verse_key__Mouse_RightButton22                                   = 22,
	EpicGames_Input_verse_key__Mouse_MiddleButton23                                  = 23,
	EpicGames_Input_verse_key__Mouse_ThumbButton24                                   = 24,
	EpicGames_Input_verse_key__Mouse_ThumbButton225                                  = 25,
	EpicGames_Input_verse_key__Mouse_ScrollUp26                                      = 26,
	EpicGames_Input_verse_key__Mouse_ScrollDown27                                    = 27,
	EpicGames_Input_verse_key__Keyboard_Up28                                         = 28,
	EpicGames_Input_verse_key__Keyboard_Down29                                       = 29,
	EpicGames_Input_verse_key__Keyboard_Left30                                       = 30,
	EpicGames_Input_verse_key__Keyboard_Right31                                      = 31,
	EpicGames_Input_verse_key__Keyboard_Enter32                                      = 32,
	EpicGames_Input_verse_key__Keyboard_Multiply33                                   = 33,
	EpicGames_Input_verse_key__Keyboard_Divide34                                     = 34,
	EpicGames_Input_verse_key__Keyboard_Add35                                        = 35,
	EpicGames_Input_verse_key__Keyboard_Subtract36                                   = 36,
	EpicGames_Input_verse_key__Keyboard_Decimal37                                    = 37,
	EpicGames_Input_verse_key__Keyboard_SpaceBar38                                   = 38,
	EpicGames_Input_verse_key__Keyboard_LeftShift39                                  = 39,
	EpicGames_Input_verse_key__Keyboard_RightShift40                                 = 40,
	EpicGames_Input_verse_key__Keyboard_LeftControl41                                = 41,
	EpicGames_Input_verse_key__Keyboard_RightControl42                               = 42,
	EpicGames_Input_verse_key__Keyboard_LeftAlt43                                    = 43,
	EpicGames_Input_verse_key__Keyboard_RightAlt44                                   = 44,
	EpicGames_Input_verse_key__NumPad_Zero45                                         = 45,
	EpicGames_Input_verse_key__NumPad_One46                                          = 46,
	EpicGames_Input_verse_key__NumPad_Two47                                          = 47,
	EpicGames_Input_verse_key__NumPad_Three48                                        = 48,
	EpicGames_Input_verse_key__NumPad_Four49                                         = 49,
	EpicGames_Input_verse_key__NumPad_Five50                                         = 50,
	EpicGames_Input_verse_key__NumPad_Six51                                          = 51,
	EpicGames_Input_verse_key__NumPad_Seven52                                        = 52,
	EpicGames_Input_verse_key__NumPad_Eight53                                        = 53,
	EpicGames_Input_verse_key__NumPad_Nine54                                         = 54,
	EpicGames_Input_verse_key__E55                                                   = 55,
	EpicGames_Input_verse_key__I56                                                   = 56,
	EpicGames_Input_verse_key__J57                                                   = 57,
	EpicGames_Input_verse_key__K58                                                   = 58,
	EpicGames_Input_verse_key__L59                                                   = 59,
	EpicGames_Input_verse_key__Z60                                                   = 60,
	EpicGames_Input_verse_key__TAB61                                                 = 61,
	EpicGames_Input_verse_key__Zero62                                                = 62,
	EpicGames_Input_verse_key__One63                                                 = 63,
	EpicGames_Input_verse_key__Two64                                                 = 64,
	EpicGames_Input_verse_key__Three65                                               = 65,
	EpicGames_Input_verse_key__Four66                                                = 66,
	EpicGames_Input_verse_key__Five67                                                = 67,
	EpicGames_Input_verse_key__Six68                                                 = 68,
	EpicGames_Input_verse_key__Seven69                                               = 69,
	EpicGames_Input_verse_key__Eight70                                               = 70,
	EpicGames_Input_verse_key__Nine71                                                = 71,
	EpicGames_Input_verse_key__EpicGames_Input_verse_MAX72                           = 72
};

/// Enum /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_debug_draw_duration_policy
/// Size: 0x04
enum Diagnostics_debug_draw_duration_policy : uint8_t
{
	Diagnostics_debug_draw_duration_policy__SingleFrame0                             = 0,
	Diagnostics_debug_draw_duration_policy__FiniteDuration1                          = 1,
	Diagnostics_debug_draw_duration_policy__Persistent2                              = 2,
	Diagnostics_debug_draw_duration_policy__Diagnostics_debug_draw_duration_MAX3     = 3
};

/// Enum /UnrealEngineExperimental/_Verse/VNI/UnrealEngineExperimental.Diagnostics_log_level
/// Size: 0x06
enum Diagnostics_log_level : uint8_t
{
	Diagnostics_log_level__Debug0                                                    = 0,
	Diagnostics_log_level__Verbose1                                                  = 1,
	Diagnostics_log_level__Normal2                                                   = 2,
	Diagnostics_log_level__Warning3                                                  = 3,
	Diagnostics_log_level__Error4                                                    = 4,
	Diagnostics_log_level__Diagnostics_log_MAX5                                      = 5
};

/// Enum /VerseGameplayTags/_Verse/VNI/VerseGameplayTags.Tags_tag_search_sort_type
/// Size: 0x03
enum Tags_tag_search_sort_type : uint8_t
{
	Tags_tag_search_sort_type__Unsorted0                                             = 0,
	Tags_tag_search_sort_type__Sorted1                                               = 1,
	Tags_tag_search_sort_type__Tags_tag_search_sort_MAX2                             = 2
};

/// Enum /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_day_of_week
/// Size: 0x08
enum VerseExperimental_day_of_week : uint8_t
{
	VerseExperimental_day_of_week__Monday0                                           = 0,
	VerseExperimental_day_of_week__Tuesday1                                          = 1,
	VerseExperimental_day_of_week__Wednesday2                                        = 2,
	VerseExperimental_day_of_week__Thursday3                                         = 3,
	VerseExperimental_day_of_week__Friday4                                           = 4,
	VerseExperimental_day_of_week__Saturday5                                         = 5,
	VerseExperimental_day_of_week__Sunday6                                           = 6,
	VerseExperimental_day_of_week__VerseExperimental_day_of_MAX7                     = 7
};

/// Enum /VerseExperimental/_Verse/VNI/VerseExperimental.VerseExperimental_month_of_year
/// Size: 0x13
enum VerseExperimental_month_of_year : uint8_t
{
	VerseExperimental_month_of_year__January0                                        = 0,
	VerseExperimental_month_of_year__February1                                       = 1,
	VerseExperimental_month_of_year__March2                                          = 2,
	VerseExperimental_month_of_year__April3                                          = 3,
	VerseExperimental_month_of_year__May4                                            = 4,
	VerseExperimental_month_of_year__June5                                           = 5,
	VerseExperimental_month_of_year__July6                                           = 6,
	VerseExperimental_month_of_year__August7                                         = 7,
	VerseExperimental_month_of_year__September8                                      = 8,
	VerseExperimental_month_of_year__October9                                        = 9,
	VerseExperimental_month_of_year__November10                                      = 10,
	VerseExperimental_month_of_year__December11                                      = 11,
	VerseExperimental_month_of_year__VerseExperimental_month_of_MAX12                = 12
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Components_activation_state
/// Size: 0x03
enum VGameplayRst_Components_activation_state : uint8_t
{
	VGameplayRst_Components_activation_state__Active0                                = 0,
	VGameplayRst_Components_activation_state__Inactive1                              = 1,
	VGameplayRst_Components_activation_state__VGameplayRst_Components_activation_MAX2 = 2
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Geometry_collision_type
/// Size: 0x05
enum VGameplayRst_Geometry_collision_type : uint8_t
{
	VGameplayRst_Geometry_collision_type__NoCollision0                               = 0,
	VGameplayRst_Geometry_collision_type__QueryOnly1                                 = 1,
	VGameplayRst_Geometry_collision_type__SimulationOnly2                            = 2,
	VGameplayRst_Geometry_collision_type__QueryAndSimulation3                        = 3,
	VGameplayRst_Geometry_collision_type__VGameplayRst_Geometry_collision_MAX4       = 4
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Geometry_default_animation_mode_type
/// Size: 0x05
enum VGameplayRst_Geometry_default_animation_mode_type : uint8_t
{
	VGameplayRst_Geometry_default_animation_mode_type__UseAnimationBlueprint0        = 0,
	VGameplayRst_Geometry_default_animation_mode_type__UseAnimationInstance1         = 1,
	VGameplayRst_Geometry_default_animation_mode_type__UseAnimationAsset2            = 2,
	VGameplayRst_Geometry_default_animation_mode_type__UseCustomMode3                = 3,
	VGameplayRst_Geometry_default_animation_mode_type__VGameplayRst_Geometry_default_animation_mode_MAX4 = 4
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Geometry_default_mesh_type
/// Size: 0x06
enum VGameplayRst_Geometry_default_mesh_type : uint8_t
{
	VGameplayRst_Geometry_default_mesh_type__Cube0                                   = 0,
	VGameplayRst_Geometry_default_mesh_type__Sphere1                                 = 1,
	VGameplayRst_Geometry_default_mesh_type__Cylinder2                               = 2,
	VGameplayRst_Geometry_default_mesh_type__Cone3                                   = 3,
	VGameplayRst_Geometry_default_mesh_type__Plane4                                  = 4,
	VGameplayRst_Geometry_default_mesh_type__VGameplayRst_Geometry_default_mesh_MAX5 = 5
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_collision_shape_mode
/// Size: 0x05
enum VGameplayRst_Physics_collision_shape_mode : uint8_t
{
	VGameplayRst_Physics_collision_shape_mode__CollisionMesh0                        = 0,
	VGameplayRst_Physics_collision_shape_mode__CollisionBox1                         = 1,
	VGameplayRst_Physics_collision_shape_mode__CollisionCapsule2                     = 2,
	VGameplayRst_Physics_collision_shape_mode__CollisionSphere3                      = 3,
	VGameplayRst_Physics_collision_shape_mode__VGameplayRst_Physics_collision_shape_MAX4 = 4
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_dof_movement_mode
/// Size: 0x08
enum VGameplayRst_Physics_dof_movement_mode : uint8_t
{
	VGameplayRst_Physics_dof_movement_mode__Default0                                 = 0,
	VGameplayRst_Physics_dof_movement_mode__SixDOF1                                  = 1,
	VGameplayRst_Physics_dof_movement_mode__YZPlane2                                 = 2,
	VGameplayRst_Physics_dof_movement_mode__XZPlane3                                 = 3,
	VGameplayRst_Physics_dof_movement_mode__XYPlane4                                 = 4,
	VGameplayRst_Physics_dof_movement_mode__CustomPlane5                             = 5,
	VGameplayRst_Physics_dof_movement_mode__NoConstraints6                           = 6,
	VGameplayRst_Physics_dof_movement_mode__VGameplayRst_Physics_dof_movement_MAX7   = 7
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_category
/// Size: 0x04
enum VGameplayRst_Physics_physics_trace_category : uint8_t
{
	VGameplayRst_Physics_physics_trace_category__Channel0                            = 0,
	VGameplayRst_Physics_physics_trace_category__Profile1                            = 1,
	VGameplayRst_Physics_physics_trace_category__Object2                             = 2,
	VGameplayRst_Physics_physics_trace_category__VGameplayRst_Physics_physics_trace_MAX3 = 3
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_channel
/// Size: 0x15
enum VGameplayRst_Physics_physics_trace_channel : uint8_t
{
	VGameplayRst_Physics_physics_trace_channel__WorldStatic0                         = 0,
	VGameplayRst_Physics_physics_trace_channel__WorldDynamic1                        = 1,
	VGameplayRst_Physics_physics_trace_channel__Pawn2                                = 2,
	VGameplayRst_Physics_physics_trace_channel__Visibility3                          = 3,
	VGameplayRst_Physics_physics_trace_channel__Camera4                              = 4,
	VGameplayRst_Physics_physics_trace_channel__PhysicsBody5                         = 5,
	VGameplayRst_Physics_physics_trace_channel__Vehicle6                             = 6,
	VGameplayRst_Physics_physics_trace_channel__Destructible7                        = 7,
	VGameplayRst_Physics_physics_trace_channel__GameTraceChannel18                   = 8,
	VGameplayRst_Physics_physics_trace_channel__GameTraceChannel29                   = 9,
	VGameplayRst_Physics_physics_trace_channel__GameTraceChannel310                  = 10,
	VGameplayRst_Physics_physics_trace_channel__GameTraceChannel411                  = 11,
	VGameplayRst_Physics_physics_trace_channel__GameTraceChannel512                  = 12,
	VGameplayRst_Physics_physics_trace_channel__GameTraceChannel613                  = 13,
	VGameplayRst_Physics_physics_trace_channel__VGameplayRst_Physics_physics_trace_MAX14 = 14
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_shape
/// Size: 0x04
enum VGameplayRst_Physics_physics_trace_shape : uint8_t
{
	VGameplayRst_Physics_physics_trace_shape__Line0                                  = 0,
	VGameplayRst_Physics_physics_trace_shape__Box1                                   = 1,
	VGameplayRst_Physics_physics_trace_shape__ShapeSphere2                           = 2,
	VGameplayRst_Physics_physics_trace_shape__VGameplayRst_Physics_physics_trace_MAX3 = 3
};

/// Enum /VGameplayRst/_Verse/VNI/VGameplayRst.VGameplayRst_Physics_physics_trace_type
/// Size: 0x04
enum VGameplayRst_Physics_physics_trace_type : uint8_t
{
	VGameplayRst_Physics_physics_trace_type__Single0                                 = 0,
	VGameplayRst_Physics_physics_trace_type__Multi1                                  = 1,
	VGameplayRst_Physics_physics_trace_type__Test2                                   = 2,
	VGameplayRst_Physics_physics_trace_type__VGameplayRst_Physics_physics_trace_MAX3 = 3
};

/// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_effect
/// Size: 0x05
enum VerseMovement_move_response_effect : uint8_t
{
	VerseMovement_move_response_effect__Force0                                       = 0,
	VerseMovement_move_response_effect__VelocityChange1                              = 1,
	VerseMovement_move_response_effect__Transform2                                   = 2,
	VerseMovement_move_response_effect__move_response_effect_MAX3                    = 3,
	VerseMovement_move_response_effect__VerseMovement_move_response_MAX4             = 4
};

/// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_frame
/// Size: 0x05
enum VerseMovement_move_response_frame : uint8_t
{
	VerseMovement_move_response_frame__Absolute0                                     = 0,
	VerseMovement_move_response_frame__move_response_frame_Object1                   = 1,
	VerseMovement_move_response_frame__move_response_frame_Camera2                   = 2,
	VerseMovement_move_response_frame__move_response_frame_MAX3                      = 3,
	VerseMovement_move_response_frame__VerseMovement_move_response_MAX4              = 4
};

/// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_modifier
/// Size: 0x07
enum VerseMovement_move_response_modifier : uint8_t
{
	VerseMovement_move_response_modifier__move_response_modifier_Add0                = 0,
	VerseMovement_move_response_modifier__TargetTransform1                           = 1,
	VerseMovement_move_response_modifier__TargetVelocity2                            = 2,
	VerseMovement_move_response_modifier__OverrideTransform3                         = 3,
	VerseMovement_move_response_modifier__OverrideVelocity4                          = 4,
	VerseMovement_move_response_modifier__move_response_modifier_MAX5                = 5,
	VerseMovement_move_response_modifier__VerseMovement_move_response_MAX6           = 6
};

/// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_response_type
/// Size: 0x04
enum VerseMovement_move_response_type : uint8_t
{
	VerseMovement_move_response_type__Linear0                                        = 0,
	VerseMovement_move_response_type__Angular1                                       = 1,
	VerseMovement_move_response_type__move_response_type_MAX2                        = 2,
	VerseMovement_move_response_type__VerseMovement_move_response_MAX3               = 3
};

/// Enum /VerseMovement/_Verse/VNI/VerseMovement.VerseMovement_move_trigger_type
/// Size: 0x07
enum VerseMovement_move_trigger_type : uint8_t
{
	VerseMovement_move_trigger_type__Input0                                          = 0,
	VerseMovement_move_trigger_type__Constraint1                                     = 1,
	VerseMovement_move_trigger_type__Physics2                                        = 2,
	VerseMovement_move_trigger_type__Trace3                                          = 3,
	VerseMovement_move_trigger_type__Constant4                                       = 4,
	VerseMovement_move_trigger_type__move_trigger_type_MAX5                          = 5,
	VerseMovement_move_trigger_type__VerseMovement_move_trigger_MAX6                 = 6
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_horizontal_alignment
/// Size: 0x05
enum UI_horizontal_alignment : uint8_t
{
	UI_horizontal_alignment__Center0                                                 = 0,
	UI_horizontal_alignment__Left1                                                   = 1,
	UI_horizontal_alignment__Right2                                                  = 2,
	UI_horizontal_alignment__Fill3                                                   = 3,
	UI_horizontal_alignment__UI_horizontal_MAX4                                      = 4
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_image_tiling
/// Size: 0x03
enum UI_image_tiling : uint8_t
{
	UI_image_tiling__Stretch0                                                        = 0,
	UI_image_tiling__Repeat1                                                         = 1,
	UI_image_tiling__UI_image_MAX2                                                   = 2
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_orientation
/// Size: 0x03
enum UI_orientation : uint8_t
{
	UI_orientation__Horizontal0                                                      = 0,
	UI_orientation__Vertical1                                                        = 1,
	UI_orientation__UI_MAX2                                                          = 2
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_text_justification
/// Size: 0x06
enum UI_text_justification : uint8_t
{
	UI_text_justification__Left0                                                     = 0,
	UI_text_justification__Center1                                                   = 1,
	UI_text_justification__Right2                                                    = 2,
	UI_text_justification__InvariantLeft3                                            = 3,
	UI_text_justification__InvariantRight4                                           = 4,
	UI_text_justification__UI_text_MAX5                                              = 5
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_text_overflow_policy
/// Size: 0x03
enum UI_text_overflow_policy : uint8_t
{
	UI_text_overflow_policy__Clip0                                                   = 0,
	UI_text_overflow_policy__Ellipsis1                                               = 1,
	UI_text_overflow_policy__UI_text_overflow_MAX2                                   = 2
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_ui_input_mode
/// Size: 0x03
enum UI_ui_input_mode : uint8_t
{
	UI_ui_input_mode__None0                                                          = 0,
	UI_ui_input_mode__All1                                                           = 1,
	UI_ui_input_mode__UI_ui_input_MAX2                                               = 2
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_vertical_alignment
/// Size: 0x05
enum UI_vertical_alignment : uint8_t
{
	UI_vertical_alignment__Center0                                                   = 0,
	UI_vertical_alignment__Top1                                                      = 1,
	UI_vertical_alignment__Bottom2                                                   = 2,
	UI_vertical_alignment__Fill3                                                     = 3,
	UI_vertical_alignment__UI_vertical_MAX4                                          = 4
};

/// Enum /VerseUI/_Verse/VNI/VerseUI.UI_widget_visibility
/// Size: 0x04
enum UI_widget_visibility : uint8_t
{
	UI_widget_visibility__Visible0                                                   = 0,
	UI_widget_visibility__Collapsed1                                                 = 1,
	UI_widget_visibility__Hidden2                                                    = 2,
	UI_widget_visibility__UI_widget_MAX3                                             = 3
};

/// Enum /VerseWorldPartition/_Verse/VNI/VerseWorldPartition.VerseWorldPartition_data_layer_runtime_state
/// Size: 0x04
enum VerseWorldPartition_data_layer_runtime_state : uint8_t
{
	VerseWorldPartition_data_layer_runtime_state__Unloaded0                          = 0,
	VerseWorldPartition_data_layer_runtime_state__Loaded1                            = 1,
	VerseWorldPartition_data_layer_runtime_state__Activated2                         = 2,
	VerseWorldPartition_data_layer_runtime_state__VerseWorldPartition_data_layer_runtime_MAX3 = 3
};

/// Enum /VersePlayspace/_Verse/VNI/VersePlayspace.Playspace_PlayerType
/// Size: 0x04
enum Playspace_PlayerType : uint8_t
{
	Playspace_PlayerType__All0                                                       = 0,
	Playspace_PlayerType__ActivePlayer1                                              = 1,
	Playspace_PlayerType__Spectator2                                                 = 2,
	Playspace_PlayerType__Playspace_MAX3                                             = 3
};

/// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.AI_navigation_result
/// Size: 0x06
enum AI_navigation_result : uint8_t
{
	AI_navigation_result__Reached0                                                   = 0,
	AI_navigation_result__PartiallyReached1                                          = 1,
	AI_navigation_result__Interrupted2                                               = 2,
	AI_navigation_result__Blocked3                                                   = 3,
	AI_navigation_result__Unreachable4                                               = 4,
	AI_navigation_result__AI_navigation_MAX5                                         = 5
};

/// Enum /VerseFortnite/_Verse/VNI/VerseFortnite.Teams_team_attitude
/// Size: 0x04
enum Teams_team_attitude : uint8_t
{
	Teams_team_attitude__Friendly0                                                   = 0,
	Teams_team_attitude__Neutral1                                                    = 1,
	Teams_team_attitude__Hostile2                                                    = 2,
	Teams_team_attitude__Teams_team_MAX3                                             = 3
};

/// Enum /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_activate_ability_result
/// Size: 0x07
enum Game_Abilities_activate_ability_result : uint8_t
{
	Game_Abilities_activate_ability_result__Activated0                               = 0,
	Game_Abilities_activate_ability_result__Canceled1                                = 1,
	Game_Abilities_activate_ability_result__Completed2                               = 2,
	Game_Abilities_activate_ability_result__Failed3                                  = 3,
	Game_Abilities_activate_ability_result__NotOwned4                                = 4,
	Game_Abilities_activate_ability_result__Invalid5                                 = 5,
	Game_Abilities_activate_ability_result__Game_Abilities_activate_ability_MAX6     = 6
};

/// Enum /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_add_ability_result
/// Size: 0x04
enum Game_Abilities_add_ability_result : uint8_t
{
	Game_Abilities_add_ability_result__Added0                                        = 0,
	Game_Abilities_add_ability_result__AlreadyOwned1                                 = 1,
	Game_Abilities_add_ability_result__Invalid2                                      = 2,
	Game_Abilities_add_ability_result__Game_Abilities_add_ability_MAX3               = 3
};

/// Enum /VerseFortniteGameplayAbilities/_Verse/VNI/VerseFortniteGameplayAbilities.Game_Abilities_remove_ability_result
/// Size: 0x04
enum Game_Abilities_remove_ability_result : uint8_t
{
	Game_Abilities_remove_ability_result__NotOwned0                                  = 0,
	Game_Abilities_remove_ability_result__Removed1                                   = 1,
	Game_Abilities_remove_ability_result__Invalid2                                   = 2,
	Game_Abilities_remove_ability_result__Game_Abilities_remove_ability_MAX3         = 3
};

/// Enum /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_action_result
/// Size: 0x04
enum VerseAIBase_action_result : uint8_t
{
	VerseAIBase_action_result__Success0                                              = 0,
	VerseAIBase_action_result__Canceled1                                             = 1,
	VerseAIBase_action_result__Disallowed2                                           = 2,
	VerseAIBase_action_result__VerseAIBase_action_MAX3                               = 3
};

/// Enum /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fallible_action_result
/// Size: 0x05
enum VerseAIBase_fallible_action_result : uint8_t
{
	VerseAIBase_fallible_action_result__Success0                                     = 0,
	VerseAIBase_fallible_action_result__Failure1                                     = 1,
	VerseAIBase_fallible_action_result__Canceled2                                    = 2,
	VerseAIBase_fallible_action_result__Disallowed3                                  = 3,
	VerseAIBase_fallible_action_result__VerseAIBase_fallible_action_MAX4             = 4
};

/// Enum /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_loot_type
/// Size: 0x05
enum VerseAIBase_fort_loot_type : uint8_t
{
	VerseAIBase_fort_loot_type__pickup0                                              = 0,
	VerseAIBase_fort_loot_type__chest1                                               = 1,
	VerseAIBase_fort_loot_type__supply_drop2                                         = 2,
	VerseAIBase_fort_loot_type__unknown3                                             = 3,
	VerseAIBase_fort_loot_type__VerseAIBase_fort_loot_MAX4                           = 4
};

/// Enum /VerseAIBase/_Verse/VNI/VerseAIBase.VerseAIBase_fort_obstacle_status
/// Size: 0x04
enum VerseAIBase_fort_obstacle_status : uint8_t
{
	VerseAIBase_fort_obstacle_status__incoming_obstacle0                             = 0,
	VerseAIBase_fort_obstacle_status__blocked_by_obstacle1                           = 1,
	VerseAIBase_fort_obstacle_status__trap_obstacle2                                 = 2,
	VerseAIBase_fort_obstacle_status__VerseAIBase_fort_obstacle_MAX3                 = 3
};

/// Enum /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_PingCommand_command_type
/// Size: 0x07
enum CompanionAI_PingCommand_command_type : uint8_t
{
	CompanionAI_PingCommand_command_type__go_to0                                     = 0,
	CompanionAI_PingCommand_command_type__back_to_me1                                = 1,
	CompanionAI_PingCommand_command_type__back_to_default2                           = 2,
	CompanionAI_PingCommand_command_type__hold_position3                             = 3,
	CompanionAI_PingCommand_command_type__revive4                                    = 4,
	CompanionAI_PingCommand_command_type__invalid5                                   = 5,
	CompanionAI_PingCommand_command_type__CompanionAI_PingCommand_command_MAX6       = 6
};

/// Enum /CompanionAI/_Verse/VNI/CompanionAI.CompanionAI_PingCommand_entity_type
/// Size: 0x08
enum CompanionAI_PingCommand_entity_type : uint8_t
{
	CompanionAI_PingCommand_entity_type__pawn0                                       = 0,
	CompanionAI_PingCommand_entity_type__pickup1                                     = 1,
	CompanionAI_PingCommand_entity_type__weapon2                                     = 2,
	CompanionAI_PingCommand_entity_type__container3                                  = 3,
	CompanionAI_PingCommand_entity_type__player_built_actor4                         = 4,
	CompanionAI_PingCommand_entity_type__building_actor5                             = 5,
	CompanionAI_PingCommand_entity_type__undefined6                                  = 6,
	CompanionAI_PingCommand_entity_type__CompanionAI_PingCommand_entity_MAX7         = 7
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_animation_controller_state
/// Size: 0x06
enum Devices_CreativeAnimation_animation_controller_state : uint8_t
{
	Devices_CreativeAnimation_animation_controller_state__InvalidObject0             = 0,
	Devices_CreativeAnimation_animation_controller_state__AnimationNotSet1           = 1,
	Devices_CreativeAnimation_animation_controller_state__Stopped2                   = 2,
	Devices_CreativeAnimation_animation_controller_state__Playing3                   = 3,
	Devices_CreativeAnimation_animation_controller_state__Paused4                    = 4,
	Devices_CreativeAnimation_animation_controller_state__Devices_CreativeAnimation_animation_controller_MAX5 = 5
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_animation_mode
/// Size: 0x04
enum Devices_CreativeAnimation_animation_mode : uint8_t
{
	Devices_CreativeAnimation_animation_mode__OneShot0                               = 0,
	Devices_CreativeAnimation_animation_mode__PingPong1                              = 1,
	Devices_CreativeAnimation_animation_mode__Loop2                                  = 2,
	Devices_CreativeAnimation_animation_mode__Devices_CreativeAnimation_animation_MAX3 = 3
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_await_next_keyframe_result
/// Size: 0x04
enum Devices_CreativeAnimation_await_next_keyframe_result : uint8_t
{
	Devices_CreativeAnimation_await_next_keyframe_result__KeyframeReached0           = 0,
	Devices_CreativeAnimation_await_next_keyframe_result__NotPlaying1                = 1,
	Devices_CreativeAnimation_await_next_keyframe_result__AnimationAborted2          = 2,
	Devices_CreativeAnimation_await_next_keyframe_result__Devices_CreativeAnimation_await_next_keyframe_MAX3 = 3
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_get_animation_controller_result
/// Size: 0x04
enum Devices_CreativeAnimation_get_animation_controller_result : uint8_t
{
	Devices_CreativeAnimation_get_animation_controller_result__Ok0                   = 0,
	Devices_CreativeAnimation_get_animation_controller_result__UnknownError1         = 1,
	Devices_CreativeAnimation_get_animation_controller_result__InvalidObject2        = 2,
	Devices_CreativeAnimation_get_animation_controller_result__Devices_CreativeAnimation_get_animation_controller_MAX3 = 3
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_playstoppause_result
/// Size: 0x04
enum Devices_CreativeAnimation_playstoppause_result : uint8_t
{
	Devices_CreativeAnimation_playstoppause_result__Ok0                              = 0,
	Devices_CreativeAnimation_playstoppause_result__AnimationNotSet1                 = 1,
	Devices_CreativeAnimation_playstoppause_result__InvalidObject2                   = 2,
	Devices_CreativeAnimation_playstoppause_result__Devices_CreativeAnimation_playstoppause_MAX3 = 3
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_CreativeAnimation_set_animation_result
/// Size: 0x10
enum Devices_CreativeAnimation_set_animation_result : uint8_t
{
	Devices_CreativeAnimation_set_animation_result__Ok0                              = 0,
	Devices_CreativeAnimation_set_animation_result__UnknownError1                    = 1,
	Devices_CreativeAnimation_set_animation_result__NoKeyframes2                     = 2,
	Devices_CreativeAnimation_set_animation_result__LoopingAnimationDoesNotLoop3     = 3,
	Devices_CreativeAnimation_set_animation_result__KeyframeOutOfBounds4             = 4,
	Devices_CreativeAnimation_set_animation_result__InvalidLocation5                 = 5,
	Devices_CreativeAnimation_set_animation_result__InvalidTime6                     = 6,
	Devices_CreativeAnimation_set_animation_result__InvalidInterpolationParameters7  = 7,
	Devices_CreativeAnimation_set_animation_result__InvalidObject8                   = 8,
	Devices_CreativeAnimation_set_animation_result__Devices_CreativeAnimation_set_animation_MAX9 = 9
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_move_to_internal_result
/// Size: 0x08
enum Devices_move_to_internal_result : uint8_t
{
	Devices_move_to_internal_result__DestinationReached0                             = 0,
	Devices_move_to_internal_result__WillNotReachDestination1                        = 1,
	Devices_move_to_internal_result__UnknownError2                                   = 2,
	Devices_move_to_internal_result__InvalidDestination3                             = 3,
	Devices_move_to_internal_result__InvalidTime4                                    = 4,
	Devices_move_to_internal_result__InvalidObject5                                  = 5,
	Devices_move_to_internal_result__DestinationOutOfBounds6                         = 6,
	Devices_move_to_internal_result__Devices_move_to_internal_MAX7                   = 7
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_move_to_result
/// Size: 0x03
enum Devices_move_to_result : uint8_t
{
	Devices_move_to_result__DestinationReached0                                      = 0,
	Devices_move_to_result__WillNotReachDestination1                                 = 1,
	Devices_move_to_result__Devices_move_to_MAX2                                     = 2
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_spawn_prop_result
/// Size: 0x07
enum Devices_spawn_prop_result : uint8_t
{
	Devices_spawn_prop_result__Ok0                                                   = 0,
	Devices_spawn_prop_result__UnknownError1                                         = 1,
	Devices_spawn_prop_result__InvalidSpawnPoint2                                    = 2,
	Devices_spawn_prop_result__SpawnPointOutOfBounds3                                = 3,
	Devices_spawn_prop_result__InvalidAsset4                                         = 4,
	Devices_spawn_prop_result__TooManyProps5                                         = 5,
	Devices_spawn_prop_result__Devices_spawn_prop_MAX6                               = 6
};

/// Enum /VerseDevices/_Verse/VNI/VerseDevices.Devices_teleport_to_result
/// Size: 0x06
enum Devices_teleport_to_result : uint8_t
{
	Devices_teleport_to_result__Ok0                                                  = 0,
	Devices_teleport_to_result__UnknownError1                                        = 1,
	Devices_teleport_to_result__InvalidDestination2                                  = 2,
	Devices_teleport_to_result__InvalidObject3                                       = 3,
	Devices_teleport_to_result__DestinationOutOfBounds4                              = 4,
	Devices_teleport_to_result__Devices_teleport_to_MAX5                             = 5
};

/// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_player_status_type
/// Size: 0x08
enum Game_Player_player_status_type : uint8_t
{
	Game_Player_player_status_type__OnGround0                                        = 0,
	Game_Player_player_status_type__Skydiving1                                       = 1,
	Game_Player_player_status_type__UsingGlider2                                     = 2,
	Game_Player_player_status_type__InVehicle3                                       = 3,
	Game_Player_player_status_type__Shooting4                                        = 4,
	Game_Player_player_status_type__AimingDownSights5                                = 5,
	Game_Player_player_status_type__InStasis6                                        = 6,
	Game_Player_player_status_type__Game_Player_player_status_MAX7                   = 7
};

/// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerAttribute
/// Size: 0x07
enum Game_Player_PlayerAttribute : uint8_t
{
	Game_Player_PlayerAttribute__CurrentHealth0                                      = 0,
	Game_Player_PlayerAttribute__CurrentShield1                                      = 1,
	Game_Player_PlayerAttribute__InitialHealth2                                      = 2,
	Game_Player_PlayerAttribute__InitialShield3                                      = 3,
	Game_Player_PlayerAttribute__Damage4                                             = 4,
	Game_Player_PlayerAttribute__ShieldDamage5                                       = 5,
	Game_Player_PlayerAttribute__Game_Player_MAX6                                    = 6
};

/// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_Player_PlayerAttributeOperation
/// Size: 0x07
enum Game_Player_PlayerAttributeOperation : uint8_t
{
	Game_Player_PlayerAttributeOperation__Add0                                       = 0,
	Game_Player_PlayerAttributeOperation__Multiply1                                  = 1,
	Game_Player_PlayerAttributeOperation__Divide2                                    = 2,
	Game_Player_PlayerAttributeOperation__Override3                                  = 3,
	Game_Player_PlayerAttributeOperation__SetMax4                                    = 4,
	Game_Player_PlayerAttributeOperation__SetMin5                                    = 5,
	Game_Player_PlayerAttributeOperation__Game_Player_MAX6                           = 6
};

/// Enum /VerseFortniteInternal/_Verse/VNI/VerseFortniteInternal.Game_PlayerSettingState
/// Size: 0x04
enum Game_PlayerSettingState : uint8_t
{
	Game_PlayerSettingState__PlayerDefault0                                          = 0,
	Game_PlayerSettingState__PlayerAllow1                                            = 1,
	Game_PlayerSettingState__PlayerDisallow2                                         = 2,
	Game_PlayerSettingState__Game_MAX3                                               = 3
};

