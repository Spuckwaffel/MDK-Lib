
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LinearTimecode.LinearTimecodeComponent
/// Size: 0x0070 (0x000290 - 0x000300)
class ULinearTimecodeComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UMediaPlayer*)                             MediaPlayer                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	SMember(FDropTimecode)                             DropTimecode                                                OFFSET(getStruct<T>, {0x298, 40, 0, 0})
	CMember(UMulticastDelegate)                        OnTimecodeChange                                            OFFSET(get<T>, {0x2C0, 16, 0, 0})


	/// Functions
	// Function /Script/LinearTimecode.LinearTimecodeComponent.SetDropTimecodeFrameNumber
	// void SetDropTimecodeFrameNumber(FDropTimecode& Timecode, int32_t FrameNumber, FDropTimecode& OutTimecode);               // [0x857810] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LinearTimecode.LinearTimecodeComponent.GetDropTimeCodeFrameNumber
	// void GetDropTimeCodeFrameNumber(FDropTimecode& Timecode, int32_t& FrameNumber);                                          // [0x857710] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LinearTimecode.LinearTimecodeComponent.GetDropFrameNumber
	// int32_t GetDropFrameNumber();                                                                                            // [0x8576e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LinearTimecode.DropTimecodeToStringConversion
/// Size: 0x0000 (0x000028 - 0x000028)
class UDropTimecodeToStringConversion : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LinearTimecode.DropTimecodeToStringConversion.Conv_DropTimecodeToString
	// FString Conv_DropTimecodeToString(FDropTimecode& InTimecode);                                                            // [0x8575f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Struct /Script/LinearTimecode.DropTimecode
/// Size: 0x0028 (0x000000 - 0x000028)
class FDropTimecode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Hours                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Minutes                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seconds                                                     OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Frame                                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Drop                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   FrameRate                                                   OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   Clock                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   Color                                                       OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   Forward                                                     OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   NewFrame                                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

