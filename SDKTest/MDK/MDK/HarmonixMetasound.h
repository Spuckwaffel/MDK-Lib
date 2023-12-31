
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/HarmonixMetasound.MetasoundOfflinePlayerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UMetasoundOfflinePlayerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(UMetaSoundSource*)                         MetaSoundSource                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/HarmonixMetasound.MidiClockUpdateSubsystem
/// Size: 0x0040 (0x000030 - 0x000070)
class UMidiClockUpdateSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiEventInfoBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HarmonixMetasound.MidiStepSequence
/// Size: 0x0050 (0x000028 - 0x000078)
class UMidiStepSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   Pages                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Rows                                                        OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   Columns                                                     OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FStepSequenceTable)                        StepTable                                                   OFFSET(getStruct<T>, {0x40, 40, 0, 0})


	/// Functions
	// Function /Script/HarmonixMetasound.MidiStepSequence.ToggleCellOnPage
	// FStepSequenceCell ToggleCellOnPage(int32_t Page, int32_t Row, int32_t Column);                                           // [0xa3c8b38] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.ToggleCell
	// FStepSequenceCell ToggleCell(int32_t Row, int32_t Column);                                                               // [0xa3c8a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetStepTable
	// void SetStepTable(FStepSequenceTable& NewStepTable);                                                                     // [0xa3c88f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetStepSkipIndex
	// bool SetStepSkipIndex(int32_t StepIndex);                                                                                // [0xa3c8864] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetRowVelocity
	// bool SetRowVelocity(int32_t RowIndex, int32_t MidiVelocoty);                                                             // [0xa3c877c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetRowNoteNumber
	// bool SetRowNoteNumber(int32_t RowIndex, int32_t MidiNoteNumber);                                                         // [0xa3c86bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumRows
	// void SetNumRows(int32_t Count);                                                                                          // [0xa3c863c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumPages
	// void SetNumPages(int32_t Count);                                                                                         // [0xa3c85bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumColumns
	// void SetNumColumns(int32_t Count);                                                                                       // [0xa3c853c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellOnPage
	// FStepSequenceCell SetCellOnPage(int32_t Page, int32_t Row, int32_t Column, bool State);                                  // [0xa3c7c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellContinuationOnPage
	// FStepSequenceCell SetCellContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                     // [0xa3c7acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellContinuation
	// FStepSequenceCell SetCellContinuation(int32_t Row, int32_t Column, bool bState);                                         // [0xa3c79c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCell
	// FStepSequenceCell SetCell(int32_t Row, int32_t Column, bool State);                                                      // [0xa3c78b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetStepTable
	// FStepSequenceTable GetStepTable();                                                                                       // [0xa3c6e54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetCellOnPage
	// FStepSequenceCell GetCellOnPage(int32_t Page, int32_t Row, int32_t Column);                                              // [0xa3c54e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetCell
	// FStepSequenceCell GetCell(int32_t Row, int32_t Column);                                                                  // [0xa3c5410] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MidiStepSequence.DisableRowsAbove
	// void DisableRowsAbove(int32_t FirstDisabledRow);                                                                         // [0xa3c51e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MusicParameterBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicParameterBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicTimestampBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTimeSignatureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/HarmonixMetasound.MusicClockComponent
/// Size: 0x0368 (0x0000A0 - 0x000408)
class UMusicClockComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	CMember(EMusicClockDriveMethod)                    DriveMethod                                                 OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FName)                                     MetasoundOutputName                                         OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	CMember(UAudioComponent*)                          MetasoundsAudioComponent                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UMidiFile*)                                TempoMap                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   TimeSignatureNum                                            OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   TimeSignatureDenom                                          OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(float)                                     CurrentBeatDurationSec                                      OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     CurrentBarDurationSec                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     CurrentClockAdvanceRate                                     OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      RunPastMusicEnd                                             OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(ECalibratedMusicTimebase)                  TimebaseForBarAndBeatEvents                                 OFFSET(get<T>, {0xD1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayStateEvent                                              OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BeatEvent                                                   OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BarEvent                                                    OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SectionEvent                                                OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MusicClockConnectedEvent                                    OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MusicClockDisconnectedEvent                                 OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMidiSongPos)                              CurrentSmoothedAudioRenderSongPos                           OFFSET(getStruct<T>, {0x138, 64, 0, 0})
	SMember(FMidiSongPos)                              CurrentVideoRenderSongPos                                   OFFSET(getStruct<T>, {0x178, 64, 0, 0})
	SMember(FMidiSongPos)                              CurrentPlayerExperiencedSongPos                             OFFSET(getStruct<T>, {0x1B8, 64, 0, 0})


	/// Functions
	// Function /Script/HarmonixMetasound.MusicClockComponent.TickToMs
	// float TickToMs(float Tick);                                                                                              // [0xa3c89bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Stop
	// void Stop();                                                                                                             // [0xa3c89a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Start
	// void Start();                                                                                                            // [0xa3c8994] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Pause
	// void Pause();                                                                                                            // [0xa3c7860] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.MeasureSpanProgress
	// float MeasureSpanProgress(FMusicalTimeSpan& Span, ECalibratedMusicTimebase Timebase);                                    // [0xa3c76ac] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetState
	// EMusicClockState GetState();                                                                                             // [0xa3c6e3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongSections
	// TArray<FSongSection> GetSongSections();                                                                                  // [0xa3c6e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongRemainingTime
	// float GetSongRemainingTime(ECalibratedMusicTimebase Timebase);                                                           // [0xa3c6d80] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongPos
	// FMidiSongPos GetSongPos(ECalibratedMusicTimebase Timebase);                                                              // [0xa3c6ce8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthMs
	// float GetSongLengthMs();                                                                                                 // [0xa3c6cb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthBeats
	// float GetSongLengthBeats();                                                                                              // [0xa3c6c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthBars
	// int32_t GetSongLengthBars();                                                                                             // [0xa3c6c5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionStartMsAtMs
	// float GetSectionStartMsAtMs(float Ms);                                                                                   // [0xa3c6bb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionNameAtMs
	// FString GetSectionNameAtMs(float Ms);                                                                                    // [0xa3c6b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionLengthMsAtMs
	// float GetSectionLengthMsAtMs(float Ms);                                                                                  // [0xa3c6a70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionEndMsAtMs
	// float GetSectionEndMsAtMs(float Ms);                                                                                     // [0xa3c69cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSecondsIncludingCountIn
	// float GetSecondsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                     // [0xa3c693c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSecondsFromBarOne
	// float GetSecondsFromBarOne(ECalibratedMusicTimebase Timebase);                                                           // [0xa3c68ac] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetNumSections
	// float GetNumSections();                                                                                                  // [0xa3c687c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetNumBeatsInBarAtMs
	// float GetNumBeatsInBarAtMs(float Ms);                                                                                    // [0xa3c67ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetMsPerBeatAtMs
	// float GetMsPerBeatAtMs(float Ms);                                                                                        // [0xa3c6158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetMsPerBarAtMs
	// float GetMsPerBarAtMs(float Ms);                                                                                         // [0xa3c60c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToNextBeat
	// float GetDistanceToNextBeat(ECalibratedMusicTimebase Timebase);                                                          // [0xa3c5eb0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToNextBar
	// float GetDistanceToNextBar(ECalibratedMusicTimebase Timebase);                                                           // [0xa3c5e20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToClosestBeat
	// float GetDistanceToClosestBeat(ECalibratedMusicTimebase Timebase);                                                       // [0xa3c5d90] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToClosestBar
	// float GetDistanceToClosestBar(ECalibratedMusicTimebase Timebase);                                                        // [0xa3c5d00] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceFromCurrentBeat
	// float GetDistanceFromCurrentBeat(ECalibratedMusicTimebase Timebase);                                                     // [0xa3c5c70] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceFromCurrentBar
	// float GetDistanceFromCurrentBar(ECalibratedMusicTimebase Timebase);                                                      // [0xa3c5be0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDeltaBeat
	// float GetDeltaBeat(ECalibratedMusicTimebase Timebase);                                                                   // [0xa3c5b50] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDeltaBar
	// float GetDeltaBar(ECalibratedMusicTimebase Timebase);                                                                    // [0xa3c5ac0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentVideoRenderSongPos
	// FMidiSongPos GetCurrentVideoRenderSongPos();                                                                             // [0xa3c5a78] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentTimestamp
	// FMusicTimestamp GetCurrentTimestamp(ECalibratedMusicTimebase Timebase);                                                  // [0xa3c59f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSmoothedAudioRenderSongPos
	// FMidiSongPos GetCurrentSmoothedAudioRenderSongPos();                                                                     // [0xa3c59a8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionStartMs
	// float GetCurrentSectionStartMs(ECalibratedMusicTimebase Timebase);                                                       // [0xa3c5900] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionName
	// FString GetCurrentSectionName(ECalibratedMusicTimebase Timebase);                                                        // [0xa3c5854] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionLengthMs
	// float GetCurrentSectionLengthMs(ECalibratedMusicTimebase Timebase);                                                      // [0xa3c57ac] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionIndex
	// int32_t GetCurrentSectionIndex(ECalibratedMusicTimebase Timebase);                                                       // [0xa3c5704] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentPlayerExperiencedSongPos
	// FMidiSongPos GetCurrentPlayerExperiencedSongPos();                                                                       // [0xa3c56bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCountInSeconds
	// float GetCountInSeconds();                                                                                               // [0xa3c568c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBeatsIncludingCountIn
	// float GetBeatsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                       // [0xa3c5380] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBeatInBarAtMs
	// float GetBeatInBarAtMs(float Ms);                                                                                        // [0xa3c52f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBarsIncludingCountIn
	// float GetBarsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                        // [0xa3c5260] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MusicClockComponent.CreateWallClockDrivenMusicClock
	// UMusicClockComponent* CreateWallClockDrivenMusicClock(UObject* WorldContextObject, UMidiFile* WithTempoMap, bool Start); // [0xa3c509c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.CreateMetasoundDrivenMusicClock
	// UMusicClockComponent* CreateMetasoundDrivenMusicClock(UObject* WorldContextObject, UAudioComponent* InAudioComponent, FName MetasoundOuputPinName, bool Start); // [0xa3c4f60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Continue
	// void Continue();                                                                                                         // [0xa3c4f0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.ConnectToWallClockForMidi
	// void ConnectToWallClockForMidi(UMidiFile* InTempoMap);                                                                   // [0xa3c4e8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.ConnectToMetasoundOnAudioComponent
	// bool ConnectToMetasoundOnAudioComponent(UAudioComponent* InAudioComponent);                                              // [0xa3c4dfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.BeatToMs
	// float BeatToMs(float Beat);                                                                                              // [0xa3c4d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.BarToMs
	// float BarToMs(float Bar);                                                                                                // [0xa3c4cdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HarmonixMetasound.MusicTempometerComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UMusicTempometerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     SecondsIncludingCountInParameterName                        OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     BarsIncludingCountInParameterName                           OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	SMember(FName)                                     BeatsIncludingCountInParameterName                          OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     SecondsFromBarOneParameterName                              OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TimestampBarParameterName                                   OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TimestampBeatInBarParameterName                             OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     BarProgressParameterName                                    OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     BeatProgressParameterName                                   OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     TimeSignatureNumeratorParameterName                         OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     TimeSignatureDenominatorParameterName                       OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     TempoParameterName                                          OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FMidiSongPos)                              SongPos                                                     OFFSET(getStruct<T>, {0xD0, 64, 0, 0})
	CMember(UMusicClockComponent*)                     MusicClock                                                  OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(UMaterialParameterCollection*)             MaterialParameterCollection                                 OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(UMaterialParameterCollectionInstance*)     MaterialParameterCollectionInstance                         OFFSET(get<T>, {0x150, 8, 0, 0})


	/// Functions
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetMaterialParameterCollection
	// void SetMaterialParameterCollection(UMaterialParameterCollection* InMaterialParameterCollection);                        // [0xa475c20] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetClockFromActor
	// void SetClockFromActor(AActor* Actor);                                                                                   // [0xa475b74] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetClock
	// void SetClock(UMusicClockComponent* InClockComponent);                                                                   // [0xa475acc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeStamp
	// FMusicTimestamp GetTimeStamp();                                                                                          // [0xa475a94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeSignatureNumerator
	// float GetTimeSignatureNumerator();                                                                                       // [0xa475a58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeSignatureDenominator
	// float GetTimeSignatureDenominator();                                                                                     // [0xa475a1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTempo
	// float GetTempo();                                                                                                        // [0xa4759e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSongPos
	// FMidiSongPos GetSongPos();                                                                                               // [0xa4759a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSecondsIncludingCountIn
	// float GetSecondsIncludingCountIn();                                                                                      // [0xa475970] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSecondsFromBarOne
	// float GetSecondsFromBarOne();                                                                                            // [0xa475938] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetMaterialParameterCollection
	// UMaterialParameterCollection* GetMaterialParameterCollection();                                                          // [0xa4758e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetClockNoMutex
	// UMusicClockComponent* GetClockNoMutex();                                                                                 // [0xa4758c4] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetClock
	// UMusicClockComponent* GetClock();                                                                                        // [0xa475870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBeatsIncludingCountIn
	// float GetBeatsIncludingCountIn();                                                                                        // [0xa475838] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBeatProgress
	// float GetBeatProgress();                                                                                                 // [0xa4757e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBarsIncludingCountIn
	// float GetBarsIncludingCountIn();                                                                                         // [0xa4757b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBarProgress
	// float GetBarProgress();                                                                                                  // [0xa475760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HarmonixMetasound.MidiEventInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FMidiEventInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMusicTimestamp)                           Timestamp                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   TrackIndex                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceCell
/// Size: 0x0002 (0x000000 - 0x000002)
class FStepSequenceCell : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bContinuation                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceRow
/// Size: 0x0018 (0x000000 - 0x000018)
class FStepSequenceRow : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FStepSequenceCell>)                 Cells                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bRowEnabled                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceNote
/// Size: 0x0008 (0x000000 - 0x000008)
class FStepSequenceNote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NoteNumber                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Velocity                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequencePage
/// Size: 0x0010 (0x000000 - 0x000010)
class FStepSequencePage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStepSequenceRow>)                  Rows                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceTable
/// Size: 0x0028 (0x000000 - 0x000028)
class FStepSequenceTable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FStepSequencePage>)                 Pages                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FStepSequenceNote>)                 Notes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   StepSkipIndex                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.MusicLoopConfiguration
/// Size: 0x0014 (0x000000 - 0x000014)
class FMusicLoopConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FMusicTimestamp)                           RegionStart                                                 OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FMusicTimestamp)                           RegionEnd                                                   OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/HarmonixMetasound.MusicSeekTarget
/// Size: 0x0010 (0x000000 - 0x000010)
class FMusicSeekTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESeekPointType)                            Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FMusicTimestamp)                           BarBeat                                                     OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(float)                                     Ms                                                          OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.MusicSeekRequest
/// Size: 0x0014 (0x000000 - 0x000014)
class FMusicSeekRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      EmmediateIfPastFromPoint                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FMusicTimestamp)                           FromPoint                                                   OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FMusicTimestamp)                           ToPoint                                                     OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Enum /Script/HarmonixMetasound.EMusicClockState
/// Size: 0x04
enum EMusicClockState : uint8_t
{
	EMusicClockState__Stopped0                                                       = 0,
	EMusicClockState__Paused1                                                        = 1,
	EMusicClockState__Running2                                                       = 2,
	EMusicClockState__EMusicClockState_MAX3                                          = 3
};

/// Enum /Script/HarmonixMetasound.EStdMidiControllerID
/// Size: 0x130
enum EStdMidiControllerID : uint8_t
{
	EStdMidiControllerID__BankSelection0                                             = 0,
	EStdMidiControllerID__ModWheel1                                                  = 1,
	EStdMidiControllerID__Breath2                                                    = 2,
	EStdMidiControllerID__Undefined33                                                = 3,
	EStdMidiControllerID__FootController4                                            = 4,
	EStdMidiControllerID__PortamentoTime5                                            = 5,
	EStdMidiControllerID__DataCoarse6                                                = 6,
	EStdMidiControllerID__Volume7                                                    = 7,
	EStdMidiControllerID__Balance8                                                   = 8,
	EStdMidiControllerID__Undefined99                                                = 9,
	EStdMidiControllerID__Pan10                                                      = 10,
	EStdMidiControllerID__Expression11                                               = 11,
	EStdMidiControllerID__EffectControl112                                           = 12,
	EStdMidiControllerID__EffectControl213                                           = 13,
	EStdMidiControllerID__Undefined1414                                              = 14,
	EStdMidiControllerID__Undefined1515                                              = 15,
	EStdMidiControllerID__GeneralPurposeController116                                = 16,
	EStdMidiControllerID__GeneralPurposeController217                                = 17,
	EStdMidiControllerID__GeneralPurposeController318                                = 18,
	EStdMidiControllerID__GeneralPurposeController419                                = 19,
	EStdMidiControllerID__Undefined2020                                              = 20,
	EStdMidiControllerID__Undefined2121                                              = 21,
	EStdMidiControllerID__Undefined2222                                              = 22,
	EStdMidiControllerID__Undefined2323                                              = 23,
	EStdMidiControllerID__Undefined2424                                              = 24,
	EStdMidiControllerID__Undefined2525                                              = 25,
	EStdMidiControllerID__Undefined2626                                              = 26,
	EStdMidiControllerID__Undefined2727                                              = 27,
	EStdMidiControllerID__Undefined2828                                              = 28,
	EStdMidiControllerID__Undefined2929                                              = 29,
	EStdMidiControllerID__Undefined3030                                              = 30,
	EStdMidiControllerID__Undefined3131                                              = 31,
	EStdMidiControllerID__LSBControl032                                              = 32,
	EStdMidiControllerID__LSBControl133                                              = 33,
	EStdMidiControllerID__LSBControl234                                              = 34,
	EStdMidiControllerID__LSBControl335                                              = 35,
	EStdMidiControllerID__LSBControl436                                              = 36,
	EStdMidiControllerID__LSBControl537                                              = 37,
	EStdMidiControllerID__LSBControl638                                              = 38,
	EStdMidiControllerID__LSBControl739                                              = 39,
	EStdMidiControllerID__LSBControl840                                              = 40,
	EStdMidiControllerID__LSBControl941                                              = 41,
	EStdMidiControllerID__LSBControl1042                                             = 42,
	EStdMidiControllerID__LSBControl1143                                             = 43,
	EStdMidiControllerID__LSBControl1244                                             = 44,
	EStdMidiControllerID__LSBControl1345                                             = 45,
	EStdMidiControllerID__LSBControl1446                                             = 46,
	EStdMidiControllerID__LSBControl1547                                             = 47,
	EStdMidiControllerID__LSBControl1648                                             = 48,
	EStdMidiControllerID__LSBControl1749                                             = 49,
	EStdMidiControllerID__LSBControl1850                                             = 50,
	EStdMidiControllerID__LSBControl1951                                             = 51,
	EStdMidiControllerID__LSBControl2052                                             = 52,
	EStdMidiControllerID__LSBControl2153                                             = 53,
	EStdMidiControllerID__LSBControl2254                                             = 54,
	EStdMidiControllerID__LSBControl2355                                             = 55,
	EStdMidiControllerID__LSBControl2456                                             = 56,
	EStdMidiControllerID__LSBControl2557                                             = 57,
	EStdMidiControllerID__LSBControl2658                                             = 58,
	EStdMidiControllerID__LSBControl2759                                             = 59,
	EStdMidiControllerID__LSBControl2860                                             = 60,
	EStdMidiControllerID__LSBControl2961                                             = 61,
	EStdMidiControllerID__LSBControl3062                                             = 62,
	EStdMidiControllerID__LSBControl3163                                             = 63,
	EStdMidiControllerID__Hold64                                                     = 64,
	EStdMidiControllerID__PortamentoSwitch65                                         = 65,
	EStdMidiControllerID__Sustenuto66                                                = 66,
	EStdMidiControllerID__SoftPedal67                                                = 67,
	EStdMidiControllerID__Legato68                                                   = 68,
	EStdMidiControllerID__Hold269                                                    = 69,
	EStdMidiControllerID__SoundController170                                         = 70,
	EStdMidiControllerID__SoundController271                                         = 71,
	EStdMidiControllerID__SoundController372                                         = 72,
	EStdMidiControllerID__SoundController473                                         = 73,
	EStdMidiControllerID__SoundController574                                         = 74,
	EStdMidiControllerID__SoundController675                                         = 75,
	EStdMidiControllerID__SoundController776                                         = 76,
	EStdMidiControllerID__SoundController877                                         = 77,
	EStdMidiControllerID__SoundController978                                         = 78,
	EStdMidiControllerID__SoundController1079                                        = 79,
	EStdMidiControllerID__GeneralPurposeController580                                = 80,
	EStdMidiControllerID__GeneralPurposeController681                                = 81,
	EStdMidiControllerID__GeneralPurposeController782                                = 82,
	EStdMidiControllerID__GeneralPurposeController883                                = 83,
	EStdMidiControllerID__PortamentoControl84                                        = 84,
	EStdMidiControllerID__Undefined8585                                              = 85,
	EStdMidiControllerID__Undefined8686                                              = 86,
	EStdMidiControllerID__Undefined8787                                              = 87,
	EStdMidiControllerID__HighResolutionVelocityPrefix88                             = 88,
	EStdMidiControllerID__Undefined8989                                              = 89,
	EStdMidiControllerID__Undefined9090                                              = 90,
	EStdMidiControllerID__Effects1Depth91                                            = 91,
	EStdMidiControllerID__Effects2Depth92                                            = 92,
	EStdMidiControllerID__Effects3Depth93                                            = 93,
	EStdMidiControllerID__Effects4Depth94                                            = 94,
	EStdMidiControllerID__Effects5Depth95                                            = 95,
	EStdMidiControllerID__DataIncrement96                                            = 96,
	EStdMidiControllerID__DataDecrement97                                            = 97,
	EStdMidiControllerID__NRPNFine98                                                 = 98,
	EStdMidiControllerID__NRPNCoarse99                                               = 99,
	EStdMidiControllerID__RPNFine100                                                 = 100,
	EStdMidiControllerID__RPNCoarse101                                               = 101,
	EStdMidiControllerID__Undefined102102                                            = 102,
	EStdMidiControllerID__Undefined103103                                            = 103,
	EStdMidiControllerID__Undefined104104                                            = 104,
	EStdMidiControllerID__Undefined105105                                            = 105,
	EStdMidiControllerID__Undefined106106                                            = 106,
	EStdMidiControllerID__Undefined107107                                            = 107,
	EStdMidiControllerID__Undefined108108                                            = 108,
	EStdMidiControllerID__Undefined109109                                            = 109,
	EStdMidiControllerID__Undefined110110                                            = 110,
	EStdMidiControllerID__Undefined111111                                            = 111,
	EStdMidiControllerID__Undefined112112                                            = 112,
	EStdMidiControllerID__Undefined113113                                            = 113,
	EStdMidiControllerID__Undefined114114                                            = 114,
	EStdMidiControllerID__Undefined115115                                            = 115,
	EStdMidiControllerID__Undefined116116                                            = 116,
	EStdMidiControllerID__Undefined117117                                            = 117,
	EStdMidiControllerID__Undefined118118                                            = 118,
	EStdMidiControllerID__Undefined119119                                            = 119,
	EStdMidiControllerID__AllSoundOff120                                             = 120,
	EStdMidiControllerID__Reset121                                                   = 121,
	EStdMidiControllerID__LocalKeyboardSwitch122                                     = 122,
	EStdMidiControllerID__AllNotesOff123                                             = 123,
	EStdMidiControllerID__OmniModeOff124                                             = 124,
	EStdMidiControllerID__OmniModeOn125                                              = 125,
	EStdMidiControllerID__MonoMode126                                                = 126,
	EStdMidiControllerID__PolyMode127                                                = 127,
	EStdMidiControllerID__NUM128                                                     = 128,
	EStdMidiControllerID__EStdMidiControllerID_MAX129                                = 129
};

/// Enum /Script/HarmonixMetasound.ESeekPointType
/// Size: 0x03
enum ESeekPointType : uint8_t
{
	ESeekPointType__BarBeat0                                                         = 0,
	ESeekPointType__Millisecond1                                                     = 1,
	ESeekPointType__ESeekPointType_MAX2                                              = 2
};

/// Enum /Script/HarmonixMetasound.EMusicClockDriveMethod
/// Size: 0x03
enum EMusicClockDriveMethod : uint8_t
{
	EMusicClockDriveMethod__WallClock0                                               = 0,
	EMusicClockDriveMethod__MetaSound1                                               = 1,
	EMusicClockDriveMethod__EMusicClockDriveMethod_MAX2                              = 2
};

