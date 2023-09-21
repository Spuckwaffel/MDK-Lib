
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/GameSubCatalog.McpVerifierModeSelector
/// Size: 0x0020 (0x000028 - 0x000048)
class UMcpVerifierModeSelector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  RangeStart                                                  OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  RangeEnd                                                    OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	SMember(FString)                                   Salt                                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(EVerifierModeOverride)                     VerifierModeOverride                                        OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(int32_t)                                   ReceiptRefactorVersionOverride                              OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Struct /Script/GameSubCatalog.StoreOfferInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FStoreOfferInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Storefront                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   StoreId                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   GroupId                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogItemPrice
/// Size: 0x0050 (0x000000 - 0x000050)
class FCatalogItemPrice : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EStoreCurrencyType>)           CurrencyType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   FinalPrice                                                  OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FText)                                     PriceTextOverride                                           OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             SaleType                                                    OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FDateTime)                                 SaleExpiration                                              OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(EAppStore)                                 AppStoreId                                                  OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/GameSubCatalog.ItemQuantity
/// Size: 0x0038 (0x000000 - 0x000038)
class FItemQuantity : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   TemplateId                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FJsonObjectWrapper)                        Attributes                                                  OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogItemSalePrice
/// Size: 0x0018 (0x000000 - 0x000018)
class FCatalogItemSalePrice : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SalePrice                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             SaleType                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameSubCatalog.AppStoreCheckoutConfig
/// Size: 0x0002 (0x000000 - 0x000002)
class FAppStoreCheckoutConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ECheckoutType)                             CheckoutType                                                OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseAdditionalData
/// Size: 0x0030 (0x000030 - 0x000060)
class FCatalogPurchaseAdditionalData : public FStoreOfferInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   Playlist                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   IslandId                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   IslandTitle                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogRedeemRealMoneyPurchasesInfo
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FCatalogRedeemRealMoneyPurchasesInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           AuthTokens                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FString>)                           ReceiptIds                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(ERedeemRealMoneyPurchaseRefreshType)       RefreshType                                                 OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EVerifierModeOverride)                     VerifierModeOverride                                        OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   ReceiptRefactorVersionOverride                              OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FString)                                   PurchaseCorrelationId                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCatalogPurchaseAdditionalData)            AdditionalData                                              OFFSET(get<T>, {0x40, 96, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogReceiptInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FCatalogReceiptInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   AppStoreId                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ReceiptId                                                   OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ReceiptInfo                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   PurchaseCorrelationId                                       OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FCatalogPurchaseInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PurchaseQuantity                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           Currency                                                    OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   ExpectedTotalPrice                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   GameContext                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCatalogPurchaseAdditionalData)            AdditionalData                                              OFFSET(get<T>, {0x40, 96, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfoGift
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FCatalogPurchaseInfoGift : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           Currency                                                    OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   ExpectedTotalPrice                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   GameContext                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           ReceiverAccountIds                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GiftWrapTemplateId                                          OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   PersonalMessage                                             OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FCatalogPurchaseAdditionalData)            AdditionalData                                              OFFSET(get<T>, {0x70, 96, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogKeyValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogKeyValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogMetaAssetInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FCatalogMetaAssetInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   StructName                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        Payload                                                     OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundleItem
/// Size: 0x0078 (0x000000 - 0x000078)
class FCatalogDynamicBundleItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FItemQuantity)                             Item                                                        OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(bool)                                      bCanOwnMultiple                                             OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   DiscountedPrice                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   AlreadyOwnedPriceReduction                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundle
/// Size: 0x0038 (0x000000 - 0x000038)
class FCatalogDynamicBundle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   DiscountedBasePrice                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RegularBasePrice                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FloorPrice                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           CurrencyType                                                OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             DisplayType                                                 OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<FCatalogDynamicBundleItem>)         BundleItems                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogOfferRequirement
/// Size: 0x0018 (0x000000 - 0x000018)
class FCatalogOfferRequirement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECatalogRequirementType)                   RequirementType                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MinQuantity                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   RequiredId                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogGiftInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FCatalogGiftInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   ForcedGiftBoxTemplateId                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCatalogOfferRequirement>)          PurchaseRequirements                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogOffer
/// Size: 0x0260 (0x000000 - 0x000260)
class FCatalogOffer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DevName                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FCatalogKeyValue>)                  MetaInfo                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ECatalogOfferType)                         OfferType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FCatalogItemPrice>)                 Prices                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FCatalogDynamicBundle)                     DynamicBundleInfo                                           OFFSET(get<T>, {0x48, 56, 0, 0})
	DMember(int32_t)                                   DailyLimit                                                  OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(int32_t)                                   WeeklyLimit                                                 OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   MonthlyLimit                                                OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(TArray<FString>)                           Categories                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FString)                                   CatalogGroup                                                OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(int32_t)                                   CatalogGroupPriority                                        OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   SortPriority                                                OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FText)                                     ShortDescription                                            OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(get<T>, {0xE8, 24, 0, 0})
	SMember(FString)                                   AppStoreId                                                  OFFSET(get<T>, {0x100, 192, 0, 0})
	SMember(FCatalogMetaAssetInfo)                     MetaAssetInfo                                               OFFSET(get<T>, {0x1C0, 48, 0, 0})
	SMember(FString)                                   DisplayAssetPath                                            OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(TArray<FItemQuantity>)                     ItemGrants                                                  OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TArray<FCatalogOfferRequirement>)          Requirements                                                OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FCatalogGiftInfo)                          GiftInfo                                                    OFFSET(get<T>, {0x220, 40, 0, 0})
	DMember(bool)                                      Refundable                                                  OFFSET(get<bool>, {0x248, 1, 0, 0})
	CMember(TArray<FString>)                           DenyItemTemplateIds                                         OFFSET(get<T>, {0x250, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.Storefront
/// Size: 0x0020 (0x000000 - 0x000020)
class FStorefront : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCatalogOffer>)                     CatalogEntries                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDownload
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogDownload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   RefreshIntervalHrs                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DailyPurchaseHrs                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FDateTime)                                 Expiration                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FStorefront>)                       Storefronts                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseNotification
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogPurchaseNotification : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMcpLootResult)                            LootResult                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.McpEntitlementRefreshTimerInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FMcpEntitlementRefreshTimerInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDateTime)                                 NextEntitlementRefresh                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FDateTime)                                 MustRefreshAuthBy                                           OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 LastAuthRefresh                                             OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameSubCatalog.McpProcessedConsumables
/// Size: 0x0018 (0x000000 - 0x000018)
class FMcpProcessedConsumables : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EAppStore)                                 AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FString>)                           Ids                                                         OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.McpInAppPurchases
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FMcpInAppPurchases : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FString>)                           Receipts                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           IgnoredReceipts                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Fulfillments                                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<FString, int32_t>)                    FulfillmentCounts                                           OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TMap<EAppStore, FMcpEntitlementRefreshTimerInfo>) RefreshTimers                                        OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TArray<FMcpProcessedConsumables>)          ProcessedConsumables                                        OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.KeychainDownload
/// Size: 0x0010 (0x000000 - 0x000010)
class FKeychainDownload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/GameSubCatalog.EAppStore
/// Size: 0x13
enum EAppStore : uint8_t
{
	EAppStore__DebugStore0                                                           = 0,
	EAppStore__EpicPurchasingService1                                                = 1,
	EAppStore__IOSAppStore2                                                          = 2,
	EAppStore__WeGameStore3                                                          = 3,
	EAppStore__GooglePlayAppStore4                                                   = 4,
	EAppStore__KindleStore5                                                          = 5,
	EAppStore__PlayStation4Store6                                                    = 6,
	EAppStore__XboxLiveStore7                                                        = 7,
	EAppStore__NintendoEShop8                                                        = 8,
	EAppStore__SamsungGalaxyAppStore9                                                = 9,
	EAppStore__MicrosoftStore10                                                      = 10,
	EAppStore__PlayStation5Store11                                                   = 11,
	EAppStore__MAX12                                                                 = 12
};

/// Enum /Script/GameSubCatalog.EStoreCurrencyType
/// Size: 0x05
enum EStoreCurrencyType : uint8_t
{
	EStoreCurrencyType__RealMoney0                                                   = 0,
	EStoreCurrencyType__MtxCurrency1                                                 = 1,
	EStoreCurrencyType__GameItem2                                                    = 2,
	EStoreCurrencyType__Other3                                                       = 3,
	EStoreCurrencyType__MAX4                                                         = 4
};

/// Enum /Script/GameSubCatalog.ECatalogSaleType
/// Size: 0x07
enum ECatalogSaleType : uint8_t
{
	ECatalogSaleType__NotOnSale0                                                     = 0,
	ECatalogSaleType__UndecoratedNewPrice1                                           = 1,
	ECatalogSaleType__AmountOff2                                                     = 2,
	ECatalogSaleType__PercentOff3                                                    = 3,
	ECatalogSaleType__PercentOn4                                                     = 4,
	ECatalogSaleType__Strikethrough5                                                 = 5,
	ECatalogSaleType__MAX6                                                           = 6
};

/// Enum /Script/GameSubCatalog.ECheckoutType
/// Size: 0x04
enum ECheckoutType : uint8_t
{
	ECheckoutType__None0                                                             = 0,
	ECheckoutType__ReceiptRequested1                                                 = 1,
	ECheckoutType__Receiptless2                                                      = 2,
	ECheckoutType__MAX3                                                              = 3
};

/// Enum /Script/GameSubCatalog.ERedeemRealMoneyPurchaseRefreshType
/// Size: 0x05
enum ERedeemRealMoneyPurchaseRefreshType : uint8_t
{
	ERedeemRealMoneyPurchaseRefreshType__Default0                                    = 0,
	ERedeemRealMoneyPurchaseRefreshType__ForceCurrent1                               = 1,
	ERedeemRealMoneyPurchaseRefreshType__ForceAll2                                   = 2,
	ERedeemRealMoneyPurchaseRefreshType__UpdateOfflineAuth3                          = 3,
	ERedeemRealMoneyPurchaseRefreshType__MAX4                                        = 4
};

/// Enum /Script/GameSubCatalog.EAutoRenewState
/// Size: 0x05
enum EAutoRenewState : uint8_t
{
	EAutoRenewState__None0                                                           = 0,
	EAutoRenewState__AutoRenewEnabled1                                               = 1,
	EAutoRenewState__AutoRenewDisabled2                                              = 2,
	EAutoRenewState__NotAutoRenewable3                                               = 3,
	EAutoRenewState__MAX4                                                            = 4
};

/// Enum /Script/GameSubCatalog.EVerifierModeOverride
/// Size: 0x07
enum EVerifierModeOverride : uint8_t
{
	EVerifierModeOverride__DefaultToConfig0                                          = 1,
	EVerifierModeOverride__ReceiptOnly1                                              = 2,
	EVerifierModeOverride__OccurrenceOnly2                                           = 3,
	EVerifierModeOverride__ReceiptPrimary3                                           = 4,
	EVerifierModeOverride__OccurrencePrimary4                                        = 5,
	EVerifierModeOverride__OccurrenceOnlyRemoveReceipts5                             = 6,
	EVerifierModeOverride__MAX6                                                      = 7
};

/// Enum /Script/GameSubCatalog.ECatalogOfferType
/// Size: 0x03
enum ECatalogOfferType : uint8_t
{
	ECatalogOfferType__StaticPrice0                                                  = 0,
	ECatalogOfferType__DynamicBundle1                                                = 1,
	ECatalogOfferType__ECatalogOfferType_MAX2                                        = 2
};

/// Enum /Script/GameSubCatalog.ECatalogRequirementType
/// Size: 0x05
enum ECatalogRequirementType : uint8_t
{
	ECatalogRequirementType__RequireFulfillment0                                     = 0,
	ECatalogRequirementType__DenyOnFulfillment1                                      = 1,
	ECatalogRequirementType__RequireItemOwnership2                                   = 2,
	ECatalogRequirementType__DenyOnItemOwnership3                                    = 3,
	ECatalogRequirementType__ECatalogRequirementType_MAX4                            = 4
};

