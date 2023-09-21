
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
	CMember(ULearningAgentsTrainer*)                   AgentTrainer                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(ULearningAgentsPolicy*)                    Policy                                                      ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecorder
/// Size: 0x4538 (0x0000C0 - 0x0045F8)
class ULearningAgentsRecorder : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 17912;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(ULearningAgentsRecording*)                 Recording                                                   ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bIsRecording                                                ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/LearningAgentsTraining.LearningAgentsRecording
/// Size: 0x0010 (0x000030 - 0x000040)
class ULearningAgentsRecording : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FLearningAgentsRecord>)             Records                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/LearningAgentsTraining.LearningAgentsReward
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsReward : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(ULearningAgentsTrainer*)                   AgentTrainer                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(ULearningAgentsInteractor*)                Interactor                                                  ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(ULearningAgentsPolicy*)                    Policy                                                      ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(ULearningAgentsCritic*)                    Critic                                                      ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bIsTraining                                                 ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bHasTrainingFailed                                          ___ OFFSET(get<bool>, {0xD9, 1, 0, 0})
	CMember(TArray<ULearningAgentsReward*>)            RewardObjects                                               ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<ULearningAgentsCompletion*>)        CompletionObjects                                           ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FLearningAgentsImitationTrainerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     TrainerCommunicationTimeout                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsImitationTrainerTrainingSettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FLearningAgentsImitationTrainerTrainingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   NumberOfIterations                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRate                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(uint32_t)                                  BatchSize                                                   ___ OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecorderPathSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FLearningAgentsRecorderPathSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDirectoryPath)                            IntermediateRelativePath                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RecordingsSubdirectory                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsRecord
/// Size: 0x0030 (0x000000 - 0x000030)
class FLearningAgentsRecord : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   SampleNum                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ObservationDimNum                                           ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActionDimNum                                                ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FLearningAgentsTrainerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(ELearningAgentsCompletion)                 MaxStepsCompletion                                          ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MaxStepNum                                                  ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedEpisodesPerIteration                         ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaximumRecordedStepsPerIteration                            ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     TrainerCommunicationTimeout                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerGameSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLearningAgentsTrainerGameSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bUseFixedTimeStep                                           ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     FixedTimeStepFrequency                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bSetMaxPhysicsStepToFixedTimeStep                           ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bDisableVSync                                               ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bUseUnlitViewportRendering                                  ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerTrainingSettings
/// Size: 0x0044 (0x000000 - 0x000044)
class FLearningAgentsTrainerTrainingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	DMember(int32_t)                                   NumberOfIterations                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     LearningRatePolicy                                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LearningRateCritic                                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LearningRateDecay                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WeightDecay                                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     InitialActionScale                                          ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   BatchSize                                                   ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(float)                                     EpsilonClip                                                 ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ActionRegularizationWeight                                  ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     EntropyWeight                                               ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     GaeLambda                                                   ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bClipAdvantages                                             ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bAdvantageNormalization                                     ___ OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtStartOfEpisode                         ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumberOfStepsToTrimAtEndOfEpisode                           ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     DiscountFactor                                              ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(ELearningAgentsTrainerDevice)              Device                                                      ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUseTensorboard                                             ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
};

/// Struct /Script/LearningAgentsTraining.LearningAgentsTrainerPathSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FLearningAgentsTrainerPathSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FDirectoryPath)                            EditorEngineRelativePath                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   NonEditorEngineRelativePath                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FDirectoryPath)                            IntermediateRelativePath                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
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

