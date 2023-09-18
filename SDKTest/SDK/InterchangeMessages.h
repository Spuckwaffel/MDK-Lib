/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package InterchangeMessages.

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeResultMeshWarning : public UInterchangeResultWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   MeshName                                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeResultTextureWarning : public UInterchangeResultWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   TextureName                                                 ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError
/// Size: 0x0010 (0x000060 - 0x000070)
class UInterchangeResultMeshError : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FString)                                   MeshName                                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_Generic
/// Size: 0x0018 (0x000070 - 0x000088)
class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshError_Generic
/// Size: 0x0018 (0x000070 - 0x000088)
class UInterchangeResultMeshError_Generic : public UInterchangeResultMeshError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultMeshWarning_TooManyUVs
/// Size: 0x0008 (0x000070 - 0x000078)
class UInterchangeResultMeshWarning_TooManyUVs : public UInterchangeResultMeshWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   ExcessUVs                                                   ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/InterchangeMessages.InterchangeResultTextureWarning_TextureFileDoNotExist
/// Size: 0x0028 (0x000070 - 0x000098)
class UInterchangeResultTextureWarning_TextureFileDoNotExist : public UInterchangeResultTextureWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FText)                                     Text                                                        ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FString)                                   MaterialName                                                ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

