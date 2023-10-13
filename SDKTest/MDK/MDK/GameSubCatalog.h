
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/GameSubCatalog.CatalogPurchaseNotification
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogPurchaseNotification : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FMcpLootResult)                            LootResult                                                  OFFSET(getStruct<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDownload
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogDownload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   RefreshIntervalHrs                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DailyPurchaseHrs                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FDateTime)                                 Expiration                                                  OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FStorefront>)                       Storefronts                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.Storefront
/// Size: 0x0020 (0x000000 - 0x000020)
class FStorefront : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCatalogOffer>)                     CatalogEntries                                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogOffer
/// Size: 0x0218 (0x000000 - 0x000218)
class FCatalogOffer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DevName                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FCatalogKeyValue>)                  MetaInfo                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ECatalogOfferType)                         OfferType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TArray<FCatalogItemPrice>)                 Prices                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FCatalogDynamicBundle)                     DynamicBundleInfo                                           OFFSET(getStruct<T>, {0x48, 48, 0, 0})
	DMember(int32_t)                                   DailyLimit                                                  OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   WeeklyLimit                                                 OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(int32_t)                                   MonthlyLimit                                                OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	CMember(TArray<FString>)                           Categories                                                  OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   CatalogGroup                                                OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	DMember(int32_t)                                   CatalogGroupPriority                                        OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   SortPriority                                                OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0xB0, 24, 0, 0})
	SMember(FText)                                     ShortDescription                                            OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	SMember(FString)                                   AppStoreId                                                  OFFSET(getStruct<T>, {0xF8, 128, 0, 0})
	SMember(FCatalogMetaAssetInfo)                     MetaAssetInfo                                               OFFSET(getStruct<T>, {0x178, 48, 0, 0})
	SMember(FString)                                   DisplayAssetPath                                            OFFSET(getStruct<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FItemQuantity>)                     ItemGrants                                                  OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<FCatalogOfferRequirement>)          Requirements                                                OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FCatalogGiftInfo)                          GiftInfo                                                    OFFSET(getStruct<T>, {0x1D8, 40, 0, 0})
	DMember(bool)                                      Refundable                                                  OFFSET(get<bool>, {0x200, 1, 0, 0})
	CMember(TArray<FString>)                           DenyItemTemplateIds                                         OFFSET(get<T>, {0x208, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogGiftInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FCatalogGiftInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   ForcedGiftBoxTemplateId                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCatalogOfferRequirement>)          PurchaseRequirements                                        OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogOfferRequirement
/// Size: 0x0018 (0x000000 - 0x000018)
class FCatalogOfferRequirement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECatalogRequirementType)                   RequirementType                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   MinQuantity                                                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   RequiredId                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.ItemQuantity
/// Size: 0x0038 (0x000000 - 0x000038)
class FItemQuantity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   TemplateId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Quantity                                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FJsonObjectWrapper)                        Attributes                                                  OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogMetaAssetInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FCatalogMetaAssetInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   StructName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        Payload                                                     OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundle
/// Size: 0x0030 (0x000000 - 0x000030)
class FCatalogDynamicBundle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   BasePrice                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           CurrencyType                                                OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             DisplayType                                                 OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TArray<FCatalogDynamicBundleItem>)         BundleItems                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogDynamicBundleItem
/// Size: 0x0078 (0x000000 - 0x000078)
class FCatalogDynamicBundleItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FItemQuantity)                             Item                                                        OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(bool)                                      bCanOwnMultiple                                             OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   DiscountedPrice                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   AlreadyOwnedPriceReduction                                  OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x60, 24, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogItemPrice
/// Size: 0x0048 (0x000000 - 0x000048)
class FCatalogItemPrice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TEnumAsByte<EStoreCurrencyType>)           CurrencyType                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   FinalPrice                                                  OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	SMember(FText)                                     PriceTextOverride                                           OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             SaleType                                                    OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FDateTime)                                 SaleExpiration                                              OFFSET(getStruct<T>, {0x40, 8, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogKeyValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FCatalogKeyValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Key                                                         OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogItemSalePrice
/// Size: 0x0018 (0x000000 - 0x000018)
class FCatalogItemSalePrice : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SalePrice                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ECatalogSaleType>)             SaleType                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FDateTime)                                 StartTime                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FDateTime)                                 EndTime                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfoGift
/// Size: 0x0070 (0x000000 - 0x000070)
class FCatalogPurchaseInfoGift : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           Currency                                                    OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   ExpectedTotalPrice                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   GameContext                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           ReceiverAccountIds                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   GiftWrapTemplateId                                          OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   PersonalMessage                                             OFFSET(getStruct<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogPurchaseInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FCatalogPurchaseInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   OfferId                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   PurchaseQuantity                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(TEnumAsByte<EStoreCurrencyType>)           Currency                                                    OFFSET(get<T>, {0x14, 1, 0, 0})
	SMember(FString)                                   CurrencySubType                                             OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   ExpectedTotalPrice                                          OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   GameContext                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/GameSubCatalog.CatalogReceiptInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FCatalogReceiptInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TEnumAsByte<EAppStore>)                    AppStore                                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   AppStoreId                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ReceiptId                                                   OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ReceiptInfo                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   PurchaseCorrelationId                                       OFFSET(getStruct<T>, {0x38, 16, 0, 0})
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

/// Enum /Script/GameSubCatalog.ECatalogOfferType
/// Size: 0x03
enum ECatalogOfferType : uint8_t
{
	ECatalogOfferType__StaticPrice0                                                  = 0,
	ECatalogOfferType__DynamicBundle1                                                = 1,
	ECatalogOfferType__ECatalogOfferType_MAX2                                        = 2
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

/// Enum /Script/GameSubCatalog.EAppStore
/// Size: 0x09
enum EAppStore : uint8_t
{
	EAppStore__DebugStore0                                                           = 0,
	EAppStore__EpicPurchasingService1                                                = 1,
	EAppStore__IOSAppStore2                                                          = 2,
	EAppStore__WeChatAppStore3                                                       = 3,
	EAppStore__GooglePlayAppStore4                                                   = 4,
	EAppStore__KindleStore5                                                          = 5,
	EAppStore__PlayStationStore6                                                     = 6,
	EAppStore__XboxLiveStore7                                                        = 7,
	EAppStore__MAX8                                                                  = 8
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

