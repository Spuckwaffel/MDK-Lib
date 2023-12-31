
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver
/// Size: 0x0198 (0x0000A0 - 0x000238)
class UEpicMediaMetadataResolver : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MetadataResultExt                                           OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(UEpicMediaCDNHostnames*)                   CDNHostNames                                                OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetData
	// bool GetData(FString UID, bool bLive, FEpicMediaOptions InMediaOptions);                                                 // [0x708064c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver.GetBlurl
	// bool GetBlurl(FString InVUID, bool bInBlurlLive, FEpicMediaOptions InMediaOptions);                                      // [0x707fca4] Final|Native|Public|BlueprintCallable 
};

