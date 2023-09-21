
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LearningAgents.LearningAgentsAction
/// Size: 0x0228 (0x000028 - 0x000250)
class ULearningAgentsAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgents.FloatAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/LearningAgents.FloatArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UFloatArrayAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/LearningAgents.VectorAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/LearningAgents.VectorArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UVectorArrayAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/LearningAgents.PlanarVelocityAction
/// Size: 0x0010 (0x000250 - 0x000260)
class UPlanarVelocityAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/LearningAgents.RotationAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/LearningAgents.RotationArrayAction
/// Size: 0x0010 (0x000250 - 0x000260)
class URotationArrayAction : public ULearningAgentsAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
};

/// Class /Script/LearningAgents.LearningAgentsManagerComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULearningAgentsManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bIsSetup                                                    OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(ALearningAgentsManager*)                   Manager                                                     OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<ULearningAgentsHelper*>)            HelperObjects                                               OFFSET(get<T>, {0xB0, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.IsSetup
	// bool IsSetup();                                                                                                          // [0x754416c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, UClass* AgentClass);                        // [0xa061b3c] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgents
	// void GetAgents(TArray<int32_t>& AgentIds, UClass* AgentClass, TArray<UObject*>& OutAgents);                              // [0xa061728] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgentManager
	// ALearningAgentsManager* GetAgentManager(UClass* AgentManagerClass);                                                      // [0xa06147c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.GetAgent
	// UObject* GetAgent(int32_t AgentId, UClass* AgentClass);                                                                  // [0xa061214] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsReset
	// void AgentsReset(TArray<int32_t>& AgentIds);                                                                             // [0x649b3ec] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsRemoved
	// void AgentsRemoved(TArray<int32_t>& AgentIds);                                                                           // [0xa060fac] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsManagerComponent.AgentsAdded
	// void AgentsAdded(TArray<int32_t>& AgentIds);                                                                             // [0xa060f0c] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/LearningAgents.LearningAgentsController
/// Size: 0x0050 (0x0000C0 - 0x000110)
class ULearningAgentsController : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsController.SetupController
	// void SetupController(ULearningAgentsInteractor* InInteractor);                                                           // [0xa05cc0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.SetActions
	// void SetActions(TArray<int32_t>& AgentIds);                                                                              // [0xa05c498] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsController.RunController
	// void RunController();                                                                                                    // [0xa05bd44] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsController.GetInteractor
	// ULearningAgentsInteractor* GetInteractor(UClass* InteractorClass);                                                       // [0xa057a00] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsController.EncodeActions
	// void EncodeActions();                                                                                                    // [0xa057268] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsCritic
/// Size: 0x0158 (0x0000C0 - 0x000218)
class ULearningAgentsCritic : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(ULearningAgentsNeuralNetwork*)             Network                                                     OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsCritic.UseCriticFromAsset
	// void UseCriticFromAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                               // [0xa05ce7c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SetupCritic
	// void SetupCritic(ULearningAgentsInteractor* InInteractor, FLearningAgentsCriticSettings& CriticSettings, ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xa05cc8c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToSnapshot
	// void SaveCriticToSnapshot(FFilePath& File);                                                                              // [0xa05bdd8] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.SaveCriticToAsset
	// void SaveCriticToAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                                // [0xa05bd58] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromSnapshot
	// void LoadCriticFromSnapshot(FFilePath& File);                                                                            // [0xa0596e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.LoadCriticFromAsset
	// void LoadCriticFromAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                              // [0xa059664] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsCritic.GetEstimatedDiscountedReturn
	// float GetEstimatedDiscountedReturn(int32_t AgentId);                                                                     // [0xa0577fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsCritic.EvaluateCritic
	// void EvaluateCritic();                                                                                                   // [0xa05727c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsHelper
/// Size: 0x0008 (0x000028 - 0x000030)
class ULearningAgentsHelper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ULearningAgentsManagerComponent*)          ManagerComponent                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgents.SplineComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class USplineComponentHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LearningAgents.ProjectionHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UProjectionHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LearningAgents.MeshComponentHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class UMeshComponentHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LearningAgents.RayCastHelper
/// Size: 0x0000 (0x000030 - 0x000030)
class URayCastHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/LearningAgents.CollisionMonitorHelper
/// Size: 0x01D0 (0x000030 - 0x000200)
class UCollisionMonitorHelper : public ULearningAgentsHelper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/LearningAgents.LearningAgentsInteractor
/// Size: 0x0538 (0x0000C0 - 0x0005F8)
class ULearningAgentsInteractor : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	CMember(TArray<ULearningAgentsObservation*>)       ObservationObjects                                          OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<ULearningAgentsAction*>)            ActionObjects                                               OFFSET(get<T>, {0xD0, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupObservations
	// void SetupObservations();                                                                                                // [0xa0684e0] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupInteractor
	// void SetupInteractor();                                                                                                  // [0xa0684cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetupActions
	// void SetupActions();                                                                                                     // [0x7c83744] Native|Event|Public|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.SetObservations
	// void SetObservations(TArray<int32_t>& AgentIds);                                                                         // [0xa064064] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetObservationVector
	// void GetObservationVector(int32_t AgentId, TArray<float>& OutObservationVector);                                         // [0xa061d60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActionVector
	// void GetActionVector(int32_t AgentId, TArray<float>& OutActionVector);                                                   // [0xa061074] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsInteractor.GetActions
	// void GetActions(TArray<int32_t>& AgentIds);                                                                              // [0xa05c498] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/LearningAgents.LearningAgentsInteractor.EncodeObservations
	// void EncodeObservations();                                                                                               // [0xa061060] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsInteractor.DecodeActions
	// void DecodeActions();                                                                                                    // [0xa06104c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsManager
/// Size: 0x0088 (0x000290 - 0x000318)
class ALearningAgentsManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	DMember(int32_t)                                   MaxAgentNum                                                 OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(TArray<UObject*>)                          Agents                                                      OFFSET(get<T>, {0x298, 16, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAllAgents
	// void ResetAllAgents();                                                                                                   // [0xa0628e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgents
	// void ResetAgents(TArray<int32_t>& AgentIds);                                                                             // [0xa06284c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.ResetAgent
	// void ResetAgent(int32_t AgentId);                                                                                        // [0xa0627cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAllAgents
	// void RemoveAllAgents();                                                                                                  // [0xa0627b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgents
	// void RemoveAgents(TArray<int32_t>& AgentIds);                                                                            // [0xa06271c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.RemoveAgent
	// void RemoveAgent(int32_t AgentId);                                                                                       // [0xa06269c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgentObject
	// bool HasAgentObject(UObject* Agent);                                                                                     // [0xa061ed0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.HasAgent
	// bool HasAgent(int32_t AgentId);                                                                                          // [0xa061e44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetMaxAgentNum
	// int32_t GetMaxAgentNum();                                                                                                // [0x5b33cb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAllAgents
	// void GetAllAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& OutAgentIds, UClass* AgentClass);                        // [0xa061918] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgents
	// void GetAgents(TArray<UObject*>& OutAgents, TArray<int32_t>& AgentIds, UClass* AgentClass);                              // [0xa061508] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentNum
	// int32_t GetAgentNum();                                                                                                   // [0x78c82b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentIds
	// void GetAgentIds(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                              // [0xa061368] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgentId
	// int32_t GetAgentId(UObject* Agent);                                                                                      // [0xa0612d8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.GetAgent
	// UObject* GetAgent(int32_t AgentId, UClass* AgentClass);                                                                  // [0xa061158] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsManager.AddManagerAsTickPrerequisiteOfAgents
	// void AddManagerAsTickPrerequisiteOfAgents(TArray<AActor*>& InAgents);                                                    // [0xa05e1b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgentsAsTickPrerequisiteOfManager
	// void AddAgentsAsTickPrerequisiteOfManager(TArray<AActor*>& InAgents);                                                    // [0xa05d42c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgents
	// void AddAgents(TArray<int32_t>& OutAgentIds, TArray<UObject*>& InAgents);                                                // [0xa05d318] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsManager.AddAgent
	// int32_t AddAgent(UObject* Agent);                                                                                        // [0xa05d288] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/LearningAgents.LearningAgentsNeuralNetwork
/// Size: 0x0010 (0x000030 - 0x000040)
class ULearningAgentsNeuralNetwork : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/LearningAgents.LearningAgentsObservation
/// Size: 0x0118 (0x000028 - 0x000140)
class ULearningAgentsObservation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/LearningAgents.FloatObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.FloatArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UFloatArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.VectorObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.VectorArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVectorArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.EnumObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Script/LearningAgents.EnumArrayObservation
/// Size: 0x0018 (0x000140 - 0x000158)
class UEnumArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Script/LearningAgents.TimeObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.TimeArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UTimeArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.AngleObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.AngleArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngleArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.RotationObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.RotationArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class URotationArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.DirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.DirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UDirectionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PlanarDirectionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PlanarDirectionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarDirectionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPositionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.ScalarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.ScalarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarPositionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PlanarPositionObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PlanarPositionArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarPositionArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.VelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.VelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.ScalarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.ScalarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PlanarVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.PlanarVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UPlanarVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.AngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.AngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.ScalarAngularVelocityObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.ScalarAngularVelocityArrayObservation
/// Size: 0x0010 (0x000140 - 0x000150)
class UScalarAngularVelocityArrayObservation : public ULearningAgentsObservation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/LearningAgents.LearningAgentsPolicy
/// Size: 0x0048 (0x0000C0 - 0x000108)
class ULearningAgentsPolicy : public ULearningAgentsManagerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(ULearningAgentsInteractor*)                Interactor                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(ULearningAgentsNeuralNetwork*)             Network                                                     OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/LearningAgents.LearningAgentsPolicy.UsePolicyFromAsset
	// void UsePolicyFromAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                               // [0xa0dfdd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetupPolicy
	// void SetupPolicy(ULearningAgentsInteractor* InInteractor, FLearningAgentsPolicySettings& PolicySettings, ULearningAgentsNeuralNetwork* NeuralNetworkAsset); // [0xa0dfbcc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SetActionNoiseScale
	// void SetActionNoiseScale(float ActionNoiseScale);                                                                        // [0xa0dfb4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToSnapshot
	// void SavePolicyToSnapshot(FFilePath& File);                                                                              // [0xa0df48c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.SavePolicyToAsset
	// void SavePolicyToAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                                // [0xa0df40c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.RunInference
	// void RunInference();                                                                                                     // [0xa0df3f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromSnapshot
	// void LoadPolicyFromSnapshot(FFilePath& File);                                                                            // [0xa0ded38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.LoadPolicyFromAsset
	// void LoadPolicyFromAsset(ULearningAgentsNeuralNetwork* NeuralNetworkAsset);                                              // [0xa0decb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LearningAgents.LearningAgentsPolicy.GetActionNoiseScale
	// float GetActionNoiseScale();                                                                                             // [0xa0dec90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LearningAgents.LearningAgentsPolicy.EvaluatePolicy
	// void EvaluatePolicy();                                                                                                   // [0xa0dec7c] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/LearningAgents.LearningAgentsCriticSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FLearningAgentsCriticSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   LayerNum                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   HiddenLayerSize                                             OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(ELearningAgentsActivationFunction)         ActivationFunction                                          OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/LearningAgents.LearningAgentsPolicySettings
/// Size: 0x001C (0x000000 - 0x00001C)
class FLearningAgentsPolicySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   ActionNoiseSeed                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     ActionNoiseMin                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ActionNoiseMax                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ActionNoiseScale                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   LayerNum                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   HiddenLayerSize                                             OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	CMember(ELearningAgentsActivationFunction)         ActivationFunction                                          OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Enum /Script/LearningAgents.ELearningAgentsActivationFunction
/// Size: 0x04
enum ELearningAgentsActivationFunction : uint8_t
{
	ELearningAgentsActivationFunction__ReLU0                                         = 0,
	ELearningAgentsActivationFunction__ELU1                                          = 1,
	ELearningAgentsActivationFunction__TanH2                                         = 2,
	ELearningAgentsActivationFunction__ELearningAgentsActivationFunction_MAX3        = 3
};

