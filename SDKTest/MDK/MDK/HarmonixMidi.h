
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HarmonixMidi.MidiFile
/// Size: 0x0110 (0x000028 - 0x000138)
class UMidiFile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(int32_t)                                   StartBar                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bLengthRoundedDown                                          OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bLengthRoundedUp                                            OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bLengthRoundedToNearest                                     OFFSET(get<bool>, {0x36, 1, 0, 0})
	SMember(FMidiFileData)                             TheMidiData                                                 OFFSET(getStruct<T>, {0x38, 240, 0, 0})
};

/// Class /Script/HarmonixMidi.MidiNoteFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiNoteFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HarmonixMidi.MusicalTickFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicalTickFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/HarmonixMidi.MusicTimestamp
/// Size: 0x0008 (0x000000 - 0x000008)
class FMusicTimestamp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Bar                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Beat                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiSongPos
/// Size: 0x0040 (0x000000 - 0x000040)
class FMidiSongPos : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     SecondsFromBarOne                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SecondsIncludingCountIn                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TimeSigNumerator                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   TimeSigDenominator                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     BarsIncludingCountIn                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     BeatsIncludingCountIn                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(EMusicalBeatType)                          BeatType                                                    OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FMusicTimestamp)                           Timestamp                                                   OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/HarmonixMidi.TimeSignature
/// Size: 0x0004 (0x000000 - 0x000004)
class FTimeSignature : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int16_t)                                   Numerator                                                   OFFSET(get<int16_t>, {0x0, 2, 0, 0})
	DMember(int16_t)                                   Denominator                                                 OFFSET(get<int16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/HarmonixMidi.MusicMapTimespanBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FMusicMapTimespanBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   StartTick                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LengthTicks                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.TimeSignaturePoint
/// Size: 0x000C (0x000008 - 0x000014)
class FTimeSignaturePoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   BarIndex                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   BeatIndex                                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FTimeSignature)                            TimeSignature                                               OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.BarMap
/// Size: 0x0018 (0x000000 - 0x000018)
class FBarMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   StartBar                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FTimeSignaturePoint>)               Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.BeatMapPoint
/// Size: 0x0008 (0x000008 - 0x000010)
class FBeatMapPoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   PulseBar                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EMusicalBeatType)                          Type                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/HarmonixMidi.PulseBar
/// Size: 0x0010 (0x000000 - 0x000010)
class FPulseBar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   StartTick                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LengthTicks                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FirstIncludedBeatIndex                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   LastIncludedBeatIndex                                       OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.BeatMap
/// Size: 0x0028 (0x000000 - 0x000028)
class FBeatMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FBeatMapPoint>)                     Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FPulseBar>)                         Bars                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.ChordMapPoint
/// Size: 0x0004 (0x000008 - 0x00000C)
class FChordMapPoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.ChordProgressionMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FChordProgressionMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FChordMapPoint>)                    Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiEvent
/// Size: 0x0008 (0x000000 - 0x000008)
class FMidiEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Tick                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FMidiMsg)                                  Message                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiMsg
/// Size: 0x0004 (0x000000 - 0x000004)
class FMidiMsg : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/HarmonixMidi.MidiFileData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FMidiFileData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   MidiFileName                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FSongMaps)                                 SongMaps                                                    OFFSET(getStruct<T>, {0x18, 192, 0, 0})
	CMember(TArray<FMidiTrack>)                        Tracks                                                      OFFSET(get<T>, {0xD8, 16, 0, 0})
	DMember(int32_t)                                   LastEventTick                                               OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiTrack
/// Size: 0x0028 (0x000000 - 0x000028)
class FMidiTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FMidiEvent>)                        Events                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      Sorted                                                      OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   PrimaryMidiChannel                                          OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(TArray<FString>)                           Strings                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.SongMaps
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FSongMaps : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FTempoMap)                                 TempoMap                                                    OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	SMember(FBarMap)                                   BarMap                                                      OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FBeatMap)                                  BeatMap                                                     OFFSET(getStruct<T>, {0x40, 40, 0, 0})
	SMember(FSectionMap)                               SectionMap                                                  OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FChordProgressionMap)                      ChordMap                                                    OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	CMember(TArray<FString>)                           TrackNames                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FSongLengthData)                           LengthData                                                  OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
};

/// Struct /Script/HarmonixMidi.SongLengthData
/// Size: 0x000C (0x000000 - 0x00000C)
class FSongLengthData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   LengthTicks                                                 OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LengthBars                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   LastTick                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.SectionMap
/// Size: 0x0018 (0x000000 - 0x000018)
class FSectionMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FSongSection>)                      Points                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.SongSection
/// Size: 0x0010 (0x000008 - 0x000018)
class FSongSection : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.TempoMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FTempoMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   TicksPerQuarterNote                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TArray<FTempoInfoPoint>)                   Points                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/HarmonixMidi.TempoInfoPoint
/// Size: 0x0008 (0x000008 - 0x000010)
class FTempoInfoPoint : public FMusicMapTimespanBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Ms                                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MidiTempo                                                   OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MusicalTimeSpan
/// Size: 0x0010 (0x000000 - 0x000010)
class FMusicalTimeSpan : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EMusicTimeSpanLengthUnits)                 LengthUnits                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Length                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(EMusicTimeSpanOffsetUnits)                 OffsetUnits                                                 OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   Offset                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMidi.MidiNote
/// Size: 0x0001 (0x000000 - 0x000001)
class FMidiNote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      NoteNumber                                                  OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Enum /Script/HarmonixMidi.EMusicalBeatType
/// Size: 0x04
enum EMusicalBeatType : uint8_t
{
	EMusicalBeatType__Downbeat0                                                      = 0,
	EMusicalBeatType__Strong1                                                        = 1,
	EMusicalBeatType__Normal2                                                        = 2,
	EMusicalBeatType__EMusicalBeatType_MAX3                                          = 3
};

/// Enum /Script/HarmonixMidi.EMusicTimeSpanOffsetUnits
/// Size: 0x19
enum EMusicTimeSpanOffsetUnits : uint8_t
{
	EMusicTimeSpanOffsetUnits__Ms0                                                   = 0,
	EMusicTimeSpanOffsetUnits__Bars1                                                 = 1,
	EMusicTimeSpanOffsetUnits__Beats2                                                = 2,
	EMusicTimeSpanOffsetUnits__ThirtySecondNotes3                                    = 3,
	EMusicTimeSpanOffsetUnits__SixteenthNotes4                                       = 4,
	EMusicTimeSpanOffsetUnits__EighthNotes5                                          = 5,
	EMusicTimeSpanOffsetUnits__QuarterNotes6                                         = 6,
	EMusicTimeSpanOffsetUnits__HalfNotes7                                            = 7,
	EMusicTimeSpanOffsetUnits__WholeNotes8                                           = 8,
	EMusicTimeSpanOffsetUnits__DottedSixteenthNotes9                                 = 9,
	EMusicTimeSpanOffsetUnits__DottedEighthNotes10                                   = 10,
	EMusicTimeSpanOffsetUnits__DottedQuarterNotes11                                  = 11,
	EMusicTimeSpanOffsetUnits__DottedHalfNotes12                                     = 12,
	EMusicTimeSpanOffsetUnits__DottedWholeNotes13                                    = 13,
	EMusicTimeSpanOffsetUnits__SixteenthNoteTriplets14                               = 14,
	EMusicTimeSpanOffsetUnits__EighthNoteTriplets15                                  = 15,
	EMusicTimeSpanOffsetUnits__QuarterNoteTriplets16                                 = 16,
	EMusicTimeSpanOffsetUnits__HalfNoteTriplets17                                    = 17,
	EMusicTimeSpanOffsetUnits__EMusicTimeSpanOffsetUnits_MAX18                       = 18
};

/// Enum /Script/HarmonixMidi.EMusicTimeSpanLengthUnits
/// Size: 0x18
enum EMusicTimeSpanLengthUnits : uint8_t
{
	EMusicTimeSpanLengthUnits__Bars0                                                 = 0,
	EMusicTimeSpanLengthUnits__Beats1                                                = 1,
	EMusicTimeSpanLengthUnits__ThirtySecondNotes2                                    = 2,
	EMusicTimeSpanLengthUnits__SixteenthNotes3                                       = 3,
	EMusicTimeSpanLengthUnits__EighthNotes4                                          = 4,
	EMusicTimeSpanLengthUnits__QuarterNotes5                                         = 5,
	EMusicTimeSpanLengthUnits__HalfNotes6                                            = 6,
	EMusicTimeSpanLengthUnits__WholeNotes7                                           = 7,
	EMusicTimeSpanLengthUnits__DottedSixteenthNotes8                                 = 8,
	EMusicTimeSpanLengthUnits__DottedEighthNotes9                                    = 9,
	EMusicTimeSpanLengthUnits__DottedQuarterNotes10                                  = 10,
	EMusicTimeSpanLengthUnits__DottedHalfNotes11                                     = 11,
	EMusicTimeSpanLengthUnits__DottedWholeNotes12                                    = 12,
	EMusicTimeSpanLengthUnits__SixteenthNoteTriplets13                               = 13,
	EMusicTimeSpanLengthUnits__EighthNoteTriplets14                                  = 14,
	EMusicTimeSpanLengthUnits__QuarterNoteTriplets15                                 = 15,
	EMusicTimeSpanLengthUnits__HalfNoteTriplets16                                    = 16,
	EMusicTimeSpanLengthUnits__EMusicTimeSpanLengthUnits_MAX17                       = 17
};

