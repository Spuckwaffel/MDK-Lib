
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/EpicMediaMetadataResolver.EpicMediaMetadataResolver
/// Size: 0x0190 (0x0000A0 - 0x000230)
class UEpicMediaMetadataResolver : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MetadataResultExt                                           ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(UEpicMediaCDNHostnames*)                   CDNHostNames                                                ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

