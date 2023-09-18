/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PurchaseFlow.

/// Struct /Script/PurchaseFlow.PurchaseFlowItem
/// Size: 0x0030 (0x000000 - 0x000030)
class FPurchaseFlowItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemId                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   EntitlementId                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ValidationInfo                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/PurchaseFlow.PurchaseFlowOffer
/// Size: 0x0038 (0x000000 - 0x000038)
class FPurchaseFlowOffer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   OfferNamespace                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   OfferId                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	CMember(TArray<FPurchaseFlowItem>)                 Items                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PurchaseFlow.PurchaseFlowReceiptParam
/// Size: 0x0030 (0x000000 - 0x000030)
class FPurchaseFlowReceiptParam : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   TransactionId                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TransactionState                                            ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FPurchaseFlowOffer>)                Offers                                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Class /Script/PurchaseFlow.PurchaseFlowJSBridge
/// Size: 0x0010 (0x000028 - 0x000038)
class UPurchaseFlowJSBridge : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

