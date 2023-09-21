
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: LearningAgents

/// Class /Script/LearningAgentsTraining.LearningAgentsCompletion
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsCompletion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(ULearningAgentsTrainer*)                   AgentTrainer                                                OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgentsTraining.ConditionalCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UConditionalCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.TimeElapsedCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeElapsedCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.PlanarPositionDifferenceCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionDifferenceCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.PlanarPositionSimilarityCompletion
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionSimilarityCompletion : public ULearningAgentsCompletion
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.LearningAgentsImitationTrainer
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class ULearningAgentsImitationTrainer : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(ULearningAgentsPolicy*)                    Policy                                                      OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          OFFSET(get<bool>, {0xA9, 1, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.RunTraining
	// void RunTraining(ULearningAgentsPolicy* InPolicy, ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings, bool bReinitializePolicyNetwork); // [0xa113988] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IterateTraining
	// void IterateTraining();                                                                                                  // [0xa112ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0xa0352d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xa036240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xa1128f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsImitationTrainer.BeginTraining
	// void BeginTraining(ULearningAgentsPolicy* InPolicy, ULearningAgentsRecording* Recording, FLearningAgentsImitationTrainerSettings& ImitationTrainerSettings, FLearningAgentsImitationTrainerTrainingSettings& ImitationTrainerTrainingSettings, FLearningAgentsTrainerPathSettings& ImitationTrainerPathSettings, bool bReinitializePolicyNetwork); // [0xa1120d8] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecorder
/// Size: 0x4538 (0x0000C0 - 0x0045F8)
class ULearningAgentsRecorder : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 17912;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(ULearningAgentsRecording*)                 Recording                                                   OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bIsRecording                                                OFFSET(get<bool>, {0xD0, 1, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.UseRecordingAsset
	// void UseRecordingAsset(ULearningAgentsRecording* RecordingAsset);                                                        // [0xa116a04] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SetupRecorder
	// void SetupRecorder(ULearningAgentsInteractor* InInteractor, FLearningAgentsRecorderPathSettings& RecorderPathSettings, ULearningAgentsRecording* RecordingAsset); // [0xa1166ac] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SaveRecordingToFile
	// void SaveRecordingToFile(FFilePath& File);                                                                               // [0xa114294] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.SaveRecordingToAsset
	// void SaveRecordingToAsset(ULearningAgentsRecording* RecordingAsset);                                                     // [0xa114194] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                             // [0xa112bf4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(ULearningAgentsRecording* RecordingAsset);                                                   // [0xa112af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.IsRecording
	// bool IsRecording();                                                                                                      // [0x9e51888] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.GetCurrentRecording
	// ULearningAgentsRecording* GetCurrentRecording();                                                                         // [0xa112948] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.EndRecording
	// void EndRecording();                                                                                                     // [0xa1128e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.BeginRecording
	// void BeginRecording(bool bReinitializeRecording);                                                                        // [0xa112058] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AppendRecordingToAsset
	// void AppendRecordingToAsset(ULearningAgentsRecording* RecordingAsset);                                                   // [0xa111f58] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                           // [0xa1111d8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecorder.AddExperience
	// void AddExperience();                                                                                                    // [0xa10ff74] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecording
/// Size: 0x0010 (0x000030 - 0x000040)
class ULearningAgentsRecording : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FLearningAgentsRecord>)             Records                                                     OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToFile
	// void SaveRecordingToFile(FFilePath& File);                                                                               // [0xa114954] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.SaveRecordingToAsset
	// void SaveRecordingToAsset(ULearningAgentsRecording* RecordingAsset);                                                     // [0xa114214] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromFile
	// void LoadRecordingFromFile(FFilePath& File);                                                                             // [0xa1132b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.LoadRecordingFromAsset
	// void LoadRecordingFromAsset(ULearningAgentsRecording* RecordingAsset);                                                   // [0xa112b74] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingToAsset
	// void AppendRecordingToAsset(ULearningAgentsRecording* RecordingAsset);                                                   // [0xa111fd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsRecording.AppendRecordingFromFile
	// void AppendRecordingFromFile(FFilePath& File);                                                                           // [0xa111898] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LearningAgentsTraining.LearningAgentsReward
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsReward : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(ULearningAgentsTrainer*)                   AgentTrainer                                                OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgentsTraining.FloatReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.ConditionalReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UConditionalReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.ScalarVelocityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.LocalDirectionalVelocityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class ULocalDirectionalVelocityReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.PlanarPositionDifferencePenalty
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionDifferencePenalty : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.PositionArraySimilarityReward
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionArraySimilarityReward : public ULearningAgentsReward
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgentsTraining.LearningAgentsTrainer
/// Size: 0x05C0 (0x0000C0 - 0x000680)
class ULearningAgentsTrainer : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(ULearningAgentsPolicy*)                    Policy                                                      OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(ULearningAgentsCritic*)                    Critic                                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          OFFSET(get<bool>, {0xD9, 1, 0, 0})
	CMember(TArray<ULearningAgentsReward*>)            RewardObjects                                               OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<ULearningAgentsCompletion*>)        CompletionObjects                                           OFFSET(get<T>, {0xF0, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupTrainer
	// void SetupTrainer(ULearningAgentsInteractor* InInteractor, ULearningAgentsPolicy* InPolicy, ULearningAgentsCritic* InCritic, FLearningAgentsTrainerSettings& TrainerSettings); // [0xa11689c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupRewards
	// void SetupRewards();                                                                                                     // [0x8f61260] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetupCompletions
	// void SetupCompletions();                                                                                                 // [0x2dd65ac] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetRewards
	// void SetRewards(TArray<int32_t>& AgentIds);                                                                              // [0xa116484] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.SetCompletions
	// void SetCompletions(TArray<int32_t>& AgentIds);                                                                          // [0xa115014] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.RunTraining
	// void RunTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, FLearningAgentsCriticSettings& CriticSettings, bool bReinitializePolicyNetwork, bool bReinitializeCriticNetwork, bool bResetAgentsOnBegin); // [0xa113c7c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ResetEpisodes
	// void ResetEpisodes(TArray<int32_t>& AgentIds);                                                                           // [0xa05c498] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.ProcessExperience
	// void ProcessExperience();                                                                                                // [0xa113974] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsTraining
	// bool IsTraining();                                                                                                       // [0x789fc5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.IsCompleted
	// bool IsCompleted(int32_t AgentId, ELearningAgentsCompletion& OutCompletion);                                             // [0xa112a14] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.HasTrainingFailed
	// bool HasTrainingFailed();                                                                                                // [0xa1129fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.GetReward
	// float GetReward(int32_t AgentId);                                                                                        // [0xa11296c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EvaluateRewards
	// void EvaluateRewards();                                                                                                  // [0xa112934] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EvaluateCompletions
	// void EvaluateCompletions();                                                                                              // [0xa112920] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.EndTraining
	// void EndTraining();                                                                                                      // [0xa11290c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgentsTraining.LearningAgentsTrainer.BeginTraining
	// void BeginTraining(FLearningAgentsTrainerTrainingSettings& TrainerTrainingSettings, FLearningAgentsTrainerGameSettings& TrainerGameSettings, FLearningAgentsTrainerPathSettings& TrainerPathSettings, FLearningAgentsCriticSettings& CriticSettings, bool bReinitializePolicyNetwork, bool bReinitializeCriticNetwork, bool bResetAgentsOnBegin); // [0xa1123cc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FLearningAgentsImitationTrainerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     TrainerCommunicationTimeout                                 OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerTrainingSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FLearningAgentsImitationTrainerTrainingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   NumberOfIterations                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRate                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  BatchSize                                                   OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecorderPathSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FLearningAgentsRecorderPathSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDirectoryPath)                            IntermediateRelativePath                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RecordingsSubdirectory                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecord
/// Size: 0x0030 (0x000000 - 0x000030)
class FLearningAgentsRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   SampleNum                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ObservationDimNum                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActionDimNum                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FLearningAgentsTrainerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(ELearningAgentsCompletion)                 MaxStepsCompletion                                          OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MaxStepNum                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedEpisodesPerIteration                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedStepsPerIteration                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     TrainerCommunicationTimeout                                 OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerGameSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLearningAgentsTrainerGameSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bUseFixedTimeStep                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     FixedTimeStepFrequency                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSetMaxPhysicsStepToFixedTimeStep                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bDisableVSync                                               OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bUseUnlitViewportRendering                                  OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerTrainingSettings
/// Size: 0x0044 (0x000000 - 0x000044)
class FLearningAgentsTrainerTrainingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	DMember(int32_t)                                   NumberOfIterations                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRatePolicy                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateCritic                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     InitialActionScale                                          OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   BatchSize                                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     EpsilonClip                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ActionRegularizationWeight                                  OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     EntropyWeight                                               OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     GaeLambda                                                   OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bClipAdvantages                                             OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bAdvantageNormalization                                     OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtStartOfEpisode                         OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtEndOfEpisode                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     DiscountFactor                                              OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             OFFSET(get<bool>, {0x41, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerPathSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FLearningAgentsTrainerPathSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FDirectoryPath)                            EditorEngineRelativePath                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   NonEditorEngineRelativePath                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FDirectoryPath)                            IntermediateRelativePath                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Enum /Script/LearningAgentsTraining.ELearningAgentsCompletion
/// Size: 0x03
enum ELearningAgentsCompletion : uint8_t
{
	ELearningAgentsCompletion__Truncation0                                           = 0,
	ELearningAgentsCompletion__Termination1                                          = 1,
	ELearningAgentsCompletion__ELearningAgentsCompletion_MAX2                        = 2
};

/// Enum /Script/LearningAgentsTraining.ELearningAgentsTrainerDevice
/// Size: 0x03
enum ELearningAgentsTrainerDevice : uint8_t
{
	ELearningAgentsTrainerDevice__CPU0                                               = 0,
	ELearningAgentsTrainerDevice__GPU1                                               = 1,
	ELearningAgentsTrainerDevice__ELearningAgentsTrainerDevice_MAX2                  = 2
};

