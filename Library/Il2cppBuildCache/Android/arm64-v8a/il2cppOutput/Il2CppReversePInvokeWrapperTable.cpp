﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// agora_gaming_rtc.WlAccStats
struct WlAccStats_t07DB3F8E004DA70BAF06F50EE0B760D6778780F3 
{
public:
	// System.UInt16 agora_gaming_rtc.WlAccStats::e2eDelayPercent
	uint16_t ___e2eDelayPercent_0;
	// System.UInt16 agora_gaming_rtc.WlAccStats::frozenRatioPercent
	uint16_t ___frozenRatioPercent_1;
	// System.UInt16 agora_gaming_rtc.WlAccStats::lossRatePercent
	uint16_t ___lossRatePercent_2;

public:
	inline static int32_t get_offset_of_e2eDelayPercent_0() { return static_cast<int32_t>(offsetof(WlAccStats_t07DB3F8E004DA70BAF06F50EE0B760D6778780F3, ___e2eDelayPercent_0)); }
	inline uint16_t get_e2eDelayPercent_0() const { return ___e2eDelayPercent_0; }
	inline uint16_t* get_address_of_e2eDelayPercent_0() { return &___e2eDelayPercent_0; }
	inline void set_e2eDelayPercent_0(uint16_t value)
	{
		___e2eDelayPercent_0 = value;
	}

	inline static int32_t get_offset_of_frozenRatioPercent_1() { return static_cast<int32_t>(offsetof(WlAccStats_t07DB3F8E004DA70BAF06F50EE0B760D6778780F3, ___frozenRatioPercent_1)); }
	inline uint16_t get_frozenRatioPercent_1() const { return ___frozenRatioPercent_1; }
	inline uint16_t* get_address_of_frozenRatioPercent_1() { return &___frozenRatioPercent_1; }
	inline void set_frozenRatioPercent_1(uint16_t value)
	{
		___frozenRatioPercent_1 = value;
	}

	inline static int32_t get_offset_of_lossRatePercent_2() { return static_cast<int32_t>(offsetof(WlAccStats_t07DB3F8E004DA70BAF06F50EE0B760D6778780F3, ___lossRatePercent_2)); }
	inline uint16_t get_lossRatePercent_2() const { return ___lossRatePercent_2; }
	inline uint16_t* get_address_of_lossRatePercent_2() { return &___lossRatePercent_2; }
	inline void set_lossRatePercent_2(uint16_t value)
	{
		___lossRatePercent_2 = value;
	}
};


// agora_gaming_rtc.AudioDeviceTestVolumeType
struct AudioDeviceTestVolumeType_t27E09148DB05924C7FC728BCC774E3A9083A3AE6 
{
public:
	// System.Int32 agora_gaming_rtc.AudioDeviceTestVolumeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AudioDeviceTestVolumeType_t27E09148DB05924C7FC728BCC774E3A9083A3AE6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CHANNEL_MEDIA_RELAY_ERROR
struct CHANNEL_MEDIA_RELAY_ERROR_t9597E8B8404217EA10C1C3E0034D77E0834D64FE 
{
public:
	// System.Int32 agora_gaming_rtc.CHANNEL_MEDIA_RELAY_ERROR::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CHANNEL_MEDIA_RELAY_ERROR_t9597E8B8404217EA10C1C3E0034D77E0834D64FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CHANNEL_MEDIA_RELAY_EVENT
struct CHANNEL_MEDIA_RELAY_EVENT_tAA575F98549A6B6CBB4C3CF7BDD57907BBA015D0 
{
public:
	// System.Int32 agora_gaming_rtc.CHANNEL_MEDIA_RELAY_EVENT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CHANNEL_MEDIA_RELAY_EVENT_tAA575F98549A6B6CBB4C3CF7BDD57907BBA015D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CHANNEL_MEDIA_RELAY_STATE
struct CHANNEL_MEDIA_RELAY_STATE_tAAFE4F05AB1199735EAC07309AD28C3DF4B4F043 
{
public:
	// System.Int32 agora_gaming_rtc.CHANNEL_MEDIA_RELAY_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CHANNEL_MEDIA_RELAY_STATE_tAAFE4F05AB1199735EAC07309AD28C3DF4B4F043, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CLIENT_ROLE_CHANGE_FAILED_REASON
struct CLIENT_ROLE_CHANGE_FAILED_REASON_t727FB04B8237D444F03FC7D726251E8E34D57370 
{
public:
	// System.Int32 agora_gaming_rtc.CLIENT_ROLE_CHANGE_FAILED_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CLIENT_ROLE_CHANGE_FAILED_REASON_t727FB04B8237D444F03FC7D726251E8E34D57370, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CLIENT_ROLE_TYPE
struct CLIENT_ROLE_TYPE_t1807B958690782D5953628EA71D5883B507748D4 
{
public:
	// System.Int32 agora_gaming_rtc.CLIENT_ROLE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CLIENT_ROLE_TYPE_t1807B958690782D5953628EA71D5883B507748D4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CONNECTION_CHANGED_REASON_TYPE
struct CONNECTION_CHANGED_REASON_TYPE_t192D37CF8196CD7815F659C96E227B57F3A1AE53 
{
public:
	// System.Int32 agora_gaming_rtc.CONNECTION_CHANGED_REASON_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CONNECTION_CHANGED_REASON_TYPE_t192D37CF8196CD7815F659C96E227B57F3A1AE53, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CONNECTION_STATE_TYPE
struct CONNECTION_STATE_TYPE_t89E06198A4AD958757B3C8B84B8A7794DB95D253 
{
public:
	// System.Int32 agora_gaming_rtc.CONNECTION_STATE_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CONNECTION_STATE_TYPE_t89E06198A4AD958757B3C8B84B8A7794DB95D253, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.CONTENT_INSPECT_RESULT
struct CONTENT_INSPECT_RESULT_t4D45FEF01741F3A43F25FBE78DF6B59FCDF6361E 
{
public:
	// System.Int32 agora_gaming_rtc.CONTENT_INSPECT_RESULT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CONTENT_INSPECT_RESULT_t4D45FEF01741F3A43F25FBE78DF6B59FCDF6361E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.PROXY_TYPE
struct PROXY_TYPE_tD4534AB657319C5418B5A9C38A74526E3899A07B 
{
public:
	// System.Int32 agora_gaming_rtc.PROXY_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PROXY_TYPE_tD4534AB657319C5418B5A9C38A74526E3899A07B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.REMOTE_AUDIO_STATE
struct REMOTE_AUDIO_STATE_t6C8D4246BABE2FD2A22AD64A70990534CEFA7A5A 
{
public:
	// System.Int32 agora_gaming_rtc.REMOTE_AUDIO_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_AUDIO_STATE_t6C8D4246BABE2FD2A22AD64A70990534CEFA7A5A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.REMOTE_AUDIO_STATE_REASON
struct REMOTE_AUDIO_STATE_REASON_t1AA2F2198070393988ECBF1069B70D7A0CC46CA0 
{
public:
	// System.Int32 agora_gaming_rtc.REMOTE_AUDIO_STATE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_AUDIO_STATE_REASON_t1AA2F2198070393988ECBF1069B70D7A0CC46CA0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.REMOTE_VIDEO_STATE
struct REMOTE_VIDEO_STATE_t7C95EB21B0307429E14458DCAA19B8A9C60B3AD1 
{
public:
	// System.Int32 agora_gaming_rtc.REMOTE_VIDEO_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_VIDEO_STATE_t7C95EB21B0307429E14458DCAA19B8A9C60B3AD1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.REMOTE_VIDEO_STATE_REASON
struct REMOTE_VIDEO_STATE_REASON_t07B20939F9FC7DB7F4A318C1F1962C3BE8CFE82A 
{
public:
	// System.Int32 agora_gaming_rtc.REMOTE_VIDEO_STATE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(REMOTE_VIDEO_STATE_REASON_t07B20939F9FC7DB7F4A318C1F1962C3BE8CFE82A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.RTMP_STREAMING_EVENT
struct RTMP_STREAMING_EVENT_tAB2C3AECD9E979563C9FA9C3896B094AC15B2F41 
{
public:
	// System.Int32 agora_gaming_rtc.RTMP_STREAMING_EVENT::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RTMP_STREAMING_EVENT_tAB2C3AECD9E979563C9FA9C3896B094AC15B2F41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.RTMP_STREAM_PUBLISH_ERROR_TYPE
struct RTMP_STREAM_PUBLISH_ERROR_TYPE_t7F7129C759E17C75F60530AE38705A03C55574CF 
{
public:
	// System.Int32 agora_gaming_rtc.RTMP_STREAM_PUBLISH_ERROR_TYPE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RTMP_STREAM_PUBLISH_ERROR_TYPE_t7F7129C759E17C75F60530AE38705A03C55574CF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.RTMP_STREAM_PUBLISH_STATE
struct RTMP_STREAM_PUBLISH_STATE_t6097AD020348F349E2F43B1AA1F7CF5B723E870A 
{
public:
	// System.Int32 agora_gaming_rtc.RTMP_STREAM_PUBLISH_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RTMP_STREAM_PUBLISH_STATE_t6097AD020348F349E2F43B1AA1F7CF5B723E870A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.STREAM_PUBLISH_STATE
struct STREAM_PUBLISH_STATE_t6CA5E6C8AFC19F945760637F4CC9EC5BFD06D81F 
{
public:
	// System.Int32 agora_gaming_rtc.STREAM_PUBLISH_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(STREAM_PUBLISH_STATE_t6CA5E6C8AFC19F945760637F4CC9EC5BFD06D81F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.STREAM_SUBSCRIBE_STATE
struct STREAM_SUBSCRIBE_STATE_t0DB63692B56AA8456D5780DC44BD1F329C5203FB 
{
public:
	// System.Int32 agora_gaming_rtc.STREAM_SUBSCRIBE_STATE::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(STREAM_SUBSCRIBE_STATE_t0DB63692B56AA8456D5780DC44BD1F329C5203FB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.SUPER_RESOLUTION_STATE_REASON
struct SUPER_RESOLUTION_STATE_REASON_t0BD5FE268AE4CCB094EB7A7F7D7F29AB4BA76C5C 
{
public:
	// System.Int32 agora_gaming_rtc.SUPER_RESOLUTION_STATE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SUPER_RESOLUTION_STATE_REASON_t0BD5FE268AE4CCB094EB7A7F7D7F29AB4BA76C5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.UPLOAD_ERROR_REASON
struct UPLOAD_ERROR_REASON_t91BC8700BCDB3291390E68928C353306D11D671B 
{
public:
	// System.Int32 agora_gaming_rtc.UPLOAD_ERROR_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UPLOAD_ERROR_REASON_t91BC8700BCDB3291390E68928C353306D11D671B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.USER_OFFLINE_REASON
struct USER_OFFLINE_REASON_t6A2A5B520F9C699121043654A83B96967206D14A 
{
public:
	// System.Int32 agora_gaming_rtc.USER_OFFLINE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(USER_OFFLINE_REASON_t6A2A5B520F9C699121043654A83B96967206D14A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.VIRTUAL_BACKGROUND_SOURCE_STATE_REASON
struct VIRTUAL_BACKGROUND_SOURCE_STATE_REASON_t432279C137E19149695E456767160F4740C774B1 
{
public:
	// System.Int32 agora_gaming_rtc.VIRTUAL_BACKGROUND_SOURCE_STATE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VIRTUAL_BACKGROUND_SOURCE_STATE_REASON_t432279C137E19149695E456767160F4740C774B1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.WLACC_MESSAGE_REASON
struct WLACC_MESSAGE_REASON_t9AFAECFEC4E360B9E159A99DF841A62A5DB0E7E0 
{
public:
	// System.Int32 agora_gaming_rtc.WLACC_MESSAGE_REASON::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WLACC_MESSAGE_REASON_t9AFAECFEC4E360B9E159A99DF841A62A5DB0E7E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// agora_gaming_rtc.WLACC_SUGGEST_ACTION
struct WLACC_SUGGEST_ACTION_t4AD90646F8416B0468A134F9AB1134ACAE9E142E 
{
public:
	// System.Int32 agora_gaming_rtc.WLACC_SUGGEST_ACTION::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WLACC_SUGGEST_ACTION_t4AD90646F8416B0468A134F9AB1134ACAE9E142E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnActiveSpeakerCallback_m6347B579751917B1C30BA1EF53BEB10C19A60236(char* ___channelId0, uint32_t ___uid1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnAudioPublishStateChangedCallback_m71C6F99179DD161A029770BF5285CEADBF084E5C(char* ___channelId0, int32_t ___oldState1, int32_t ___newState2, int32_t ___elapseSinceLastState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnAudioSubscribeStateChangedCallback_mEFD7126B481863C78106BC965F717611E128D77E(char* ___channelId0, uint32_t ___uid1, int32_t ___oldState2, int32_t ___newState3, int32_t ___elapseSinceLastState4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnChannelProxyConnectedCallback_mF158E9DFFB0A63EDB2AFEBD420FFF2A70DA5EC18(char* ___channelId0, uint32_t ___uid1, int32_t ___proxyType2, char* ___localProxyIp3, int32_t ___elapsed4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnClientRoleChangeFailedCallback_m60C190B2C71D6222CF3B3F3A666B1B77042CCA0A(char* ___channelId0, int32_t ___reason1, int32_t ___currentRole2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnClientRoleChangedCallback_mA07EB80EDDCAC1EE252847F36880F049C3C12C34(char* ___channelId0, int32_t ___oldRole1, int32_t ___newRole2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnConnectionLostCallback_mCD1BC68D16F66B1CD25CC9C41EC36C992F54F046(char* ___channelId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnConnectionStateChangedCallback_mCCDE2831DAFBE075FCB3A36D0C578D0A7E79E9D9(char* ___channelId0, int32_t ___state1, int32_t ___reason2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnErrorCallback_m7FAB5E7E29D0B0FDB4E97C1216A03A64062EA799(char* ___channelId0, int32_t ___err1, char* ___message2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnFirstRemoteVideoFrameHandlerCallback_m4558218E303DEB90988DF6D0D00E414A691B5B46(char* ___channelId0, uint32_t ___uid1, int32_t ___width2, int32_t ___height3, int32_t ___elapsed4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnJoinChannelSuccessCallback_m1C69A43FD84F23735DA67A5D58F9B496C71A5EA9(char* ___channelId0, uint32_t ___uid1, int32_t ___elapsed2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnLeaveChannelCallback_mD20AE0CB2DEC34D01A0DBF3DF84F43ED09893397(char* ___channelId0, uint32_t ___duration1, uint32_t ___txBytes2, uint32_t ___rxBytes3, uint32_t ___txAudioBytes4, uint32_t ___txVideoBytes5, uint32_t ___rxAudioBytes6, uint32_t ___rxVideoBytes7, uint16_t ___txKBitRate8, uint16_t ___rxKBitRate9, uint16_t ___rxAudioKBitRate10, uint16_t ___txAudioKBitRate11, uint16_t ___rxVideoKBitRate12, uint16_t ___txVideoKBitRate13, uint16_t ___lastmileDelay14, uint16_t ___txPacketLossRate15, uint16_t ___rxPacketLossRate16, uint32_t ___userCount17, double ___cpuAppUsage18, double ___cpuTotalUsage19, int32_t ___gatewayRtt20, double ___memoryAppUsageRatio21, double ___memoryTotalUsageRatio22, int32_t ___memoryAppUsageInKbytes23);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnLocalPublishFallbackToAudioOnlyCallback_m196D122F485EB2880F8201FD8691E6916FAEBDAB(char* ___channelId0, int32_t ___isFallbackOrRecover1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnMediaRelayEventCallback_mC6042C0633715920C64F331D5E5E17E016BCB779(char* ___channelId0, int32_t ___code1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnMediaRelayStateChangedCallback_m25E536BE122F8BAD31E57A9B166FF16E94114C01(char* ___channelId0, int32_t ___state1, int32_t ___code2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnNetworkQualityCallback_m8A0BE4BBE2FDB2B34D7E69F440BB893B3CA356CE(char* ___channelId0, uint32_t ___uid1, int32_t ___txQuality2, int32_t ___rxQuality3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnReJoinChannelSuccessCallback_m11E31ACC49D129ED2F325193F9B064A946AB400E(char* ___channelId0, uint32_t ___uid1, int32_t ___elapsed2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRemoteAudioStatChangedCallback_m728116CBEF7CEA2D0FDD14E601D07F8A69029B7F(char* ___channelId0, uint32_t ___uid1, int32_t ___state2, int32_t ___reason3, int32_t ___elapsed4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRemoteAudioStatsCallback_mEE3D09D7AF0C221262B2D383AF4A39D4E94DE465(char* ___channelId0, uint32_t ___uid1, int32_t ___quality2, int32_t ___networkTransportDelay3, int32_t ___jitterBufferDelay4, int32_t ___audioLossRate5, int32_t ___numChannels6, int32_t ___receivedSampleRate7, int32_t ___receivedBitrate8, int32_t ___totalFrozenTime9, int32_t ___frozenRate10, int32_t ___totalActiveTime11, int32_t ___publishDuration12, int32_t ___qoeQuality13, int32_t ___qualityChangedReason14, int32_t ___mosValue15);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRemoteSubscribeFallbackToAudioOnlyCallback_m4FC04A6AFC611D46A53E4BA23EDD23A9F3BA75A9(char* ___channelId0, uint32_t ___uid1, int32_t ___isFallbackOrRecover2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRemoteVideoStateChangedCallback_mE29289EA93CB7A032B829F8F25C2BD6A4F0E7FAA(char* ___channelId0, uint32_t ___uid1, int32_t ___state2, int32_t ___reason3, int32_t ___elapsed4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRemoteVideoStatsCallback_m1465499BBBE9F6604F87978A3D4C56E92B87E25C(char* ___channelId0, uint32_t ___uid1, int32_t ___delay2, int32_t ___width3, int32_t ___height4, int32_t ___receivedBitrate5, int32_t ___decoderOutputFrameRate6, int32_t ___rendererOutputFrameRate7, int32_t ___packetLossRate8, int32_t ___rxStreamType9, int32_t ___totalFrozenTime10, int32_t ___frozenRate11, int32_t ___totalActiveTime12, int32_t ___publishDuration13);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRequestTokenCallback_m3A098D24DC240E3440DF5C6580FBCAC8BC24DAE6(char* ___channelId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRtcStatsCallback_m6963F55E1A0EF4E054BFCB7AC817F19FDB236CF1(char* ___channelId0, uint32_t ___duration1, uint32_t ___txBytes2, uint32_t ___rxBytes3, uint32_t ___txAudioBytes4, uint32_t ___txVideoBytes5, uint32_t ___rxAudioBytes6, uint32_t ___rxVideoBytes7, uint16_t ___txKBitRate8, uint16_t ___rxKBitRate9, uint16_t ___rxAudioKBitRate10, uint16_t ___txAudioKBitRate11, uint16_t ___rxVideoKBitRate12, uint16_t ___txVideoKBitRate13, uint16_t ___lastmileDelay14, uint16_t ___txPacketLossRate15, uint16_t ___rxPacketLossRate16, uint32_t ___userCount17, double ___cpuAppUsage18, double ___cpuTotalUsage19, int32_t ___gatewayRtt20, double ___memoryAppUsageRatio21, double ___memoryTotalUsageRatio22, int32_t ___memoryAppUsageInKbytes23);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRtmpStreamingEventCallback_mA8407F3171511944864773A9B66584AD26737ED2(char* ___channelId0, char* ___url1, int32_t ___eventCode2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnRtmpStreamingStateChangedCallback_m1D989D5261B8D238FC1FCAB24DE0D15A169EDE4E(char* ___channelId0, char* ___url1, int32_t ___state2, int32_t ___errCode3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnStreamInjectedStatusCallback_m41425B19250CB597BF36DA52498389F61F5A6674(char* ___channelId0, char* ___url1, uint32_t ___uid2, int32_t ___status3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnStreamMessageCallback_mA4AB488C95FD22ECDE50DBD25240507AE893F9D1(char* ___channelId0, uint32_t ___uid1, int32_t ___streamId2, char* ___data3, int32_t ___length4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnStreamMessageErrorCallback_mEB2DA9B08B692A0F25D6E21845D55C7FD4B13541(char* ___channelId0, uint32_t ___uid1, int32_t ___streamId2, int32_t ___code3, int32_t ___missed4, int32_t ___cached5);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnTokenPrivilegeWillExpireCallback_m1239FB07C75EAF0FE77919984F7E27D6D92F97C5(char* ___channelId0, char* ___token1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnTranscodingUpdatedCallback_mCB5B9F886F51EA0D3E6464593729E3A2210C0BB4(char* ___channelId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnUserJoinedCallback_mD57D089D33F1B812BA7C9C8815BBB7B8E69FA94A(char* ___channelId0, uint32_t ___uid1, int32_t ___elapsed2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnUserOffLineCallback_mF2DF9030DBBCBED9FDE5313002DF48B8C648B543(char* ___channelId0, uint32_t ___uid1, int32_t ___reason2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnUserSuperResolutionEnabledCallback_mC5D67679FCEF0E15EC5895F0AE3929CA68882A1C(char* ___channelId0, uint32_t ___uid1, int32_t ___enabled2, int32_t ___reason3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnVideoPublishStateChangedCallback_mEC12147C7ED21C425D4404EAFD0ED80F86C4187D(char* ___channelId0, int32_t ___oldState1, int32_t ___newState2, int32_t ___elapseSinceLastState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnVideoSizeChangedCallback_mAE5DB12317F193868EA591E2EE238036BFB4476F(char* ___channelId0, uint32_t ___uid1, int32_t ___width2, int32_t ___height3, int32_t ___rotation4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnVideoSubscribeStateChangedCallback_m84C0BA97FCBC35E37398E269D5BBB6DD122148F4(char* ___channelId0, uint32_t ___uid1, int32_t ___oldState2, int32_t ___newState3, int32_t ___elapseSinceLastState4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AgoraChannel_OnWarningCallback_m8EE2F4BF594420B261E89F36880D984AD3A5936A(char* ___channelId0, int32_t ___warn1, char* ___message2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AudioRawDataManager_OnMixedAudioFrameCallback_m8CB55C2CDFD775DF8013BBBDA245F1F364FB2F3D(int32_t ___type0, int32_t ___samples1, int32_t ___bytesPerSample2, int32_t ___channels3, int32_t ___samplesPerSec4, intptr_t ___buffer5, int64_t ___renderTimeMs6, int32_t ___avsync_type7);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AudioRawDataManager_OnPlaybackAudioFrameBeforeMixingCallback_m254496AE367BDDFD3AC3279410BBCC8EB3DC945A(uint32_t ___uid0, int32_t ___type1, int32_t ___samples2, int32_t ___bytesPerSample3, int32_t ___channels4, int32_t ___samplesPerSec5, intptr_t ___buffer6, int64_t ___renderTimeMs7, int32_t ___avsync_type8);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AudioRawDataManager_OnPlaybackAudioFrameCallback_mC34B69938B467172EE49B0223BDC1160E9A5CA64(int32_t ___type0, int32_t ___samples1, int32_t ___bytesPerSample2, int32_t ___channels3, int32_t ___samplesPerSec4, intptr_t ___buffer5, int64_t ___renderTimeMs6, int32_t ___avsync_type7);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_AudioRawDataManager_OnRecordAudioFrameCallback_mB79666DA48C39A280D8CA789C7D825E0E3A92C39(int32_t ___type0, int32_t ___samples1, int32_t ___bytesPerSample2, int32_t ___channels3, int32_t ___samplesPerSec4, intptr_t ___buffer5, int64_t ___renderTimeMs6, int32_t ___avsync_type7);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnActiveSpeakerCallback_m8016E758421D22E875BF5443B0BE83B6ADCC0C93(uint32_t ___uid0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnApiExecutedCallback_m78C37E67865434B04EC9188BF41C452ED117CE01(int32_t ___err0, char* ___api1, char* ___result2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioDeviceStateChangedCallback_mFF87F6C0C069B9E5B3B2D2DB00B004C1E18539EF(char* ___deviceId0, int32_t ___deviceType1, int32_t ___deviceState2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioDeviceTestVolumeIndicationCallback_mE3A32F2EBCE1C5DC175E07E42511E1587BF775B1(int32_t ___volumeType0, int32_t ___volume1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioDeviceVolumeChangedCallback_m7FEC86C980D79566E62CEE3ABA1F0AD59B8353D7(int32_t ___deviceType0, int32_t ___volume1, int32_t ___muted2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioEffectFinishedCallback_mF795019B6FBD6CD7BACA74AE8EEC8DD58ADEAA3B(int32_t ___soundId0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioMixingFinishedCallback_m958333F55ACCA770C01712E70B16835BCE00D0D7();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioMixingStateChangedCallback_mA169736BBC2930D739E43458611E52CD6B058CFF(int32_t ___audioMixingStateType0, int32_t ___audioMixingErrorType1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioPublishStateChangeCallback_m6900065B81948C67F07E231B6E68E470755FA164(char* ___channel0, int32_t ___oldState1, int32_t ___newState2, int32_t ___elapseSinceLastState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioQualityCallback_m9A95217A72D7C619376E380D66176183A6963213(uint32_t ___userId0, int32_t ___quality1, uint16_t ___delay2, uint16_t ___lost3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioRouteChangedCallback_mB0CFFE5D93A60B962CDD595A738A4459B0C3A01E(int32_t ___route0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioSubscribeStateChangeCallback_m913BF10B18C4FE2D5A0D36E53A30DDA2963C3678(char* ___channel0, uint32_t ___uid1, int32_t ___oldState2, int32_t ___newState3, int32_t ___elapseSinceLastState4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnAudioVolumeIndicationCallback_m9BFB1860EE10A6942FF2A47F6A2760C4BB85D877(char* ___volumeInfo0, int32_t ___speakerNumber1, int32_t ___totalVolume2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnCameraExposureAreaChangedCallback_mD37F5E01DEC89FCFC77848EE42E305391CB124CE(int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnCameraFocusAreaChangedCallback_mCD76062A3FAC538784912C89FC5F36CDE98CB16C(int32_t ___x0, int32_t ___y1, int32_t ___width2, int32_t ___height3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnCameraReadyCallback_mF6770EAD5A912456105BEFB216161DCB488D6D0D();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnChannelMediaRelayEventCallback_m6E269678BC5237595C25E3E2DF6B5A26643ECE35(int32_t ___events0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnChannelMediaRelayStateChangedCallback_m1235F7B8AFF7C64FC4B1255D90AA83684E36AA61(int32_t ___state0, int32_t ___code1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnClientRoleChangeFailedCallback_m183FAC19EB8E68519AA056C25E68C563E0F0276F(int32_t ___reason0, int32_t ___currentRole1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnClientRoleChangedCallback_m59F7B1802A373A9B4E9CBC5374FB1C7BC9CB5180(int32_t ___oldRole0, int32_t ___newRole1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnConnectionBannedCallback_m83A293D1071404CF73B033E4ADF1F5FEB9156FB0();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnConnectionInterruptedCallback_m4DD4DEDBE247B769B198FC8D987314A039AC5FEC();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnConnectionLostCallback_m1CECC0E92D0BF45BE913C5A3EF31926E3F02689C();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnConnectionStateChangedCallback_mCCD7B8725BF83DCEE48D33532E8D3A16235B4C67(int32_t ___state0, int32_t ___reason1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnContentInspectResultCallback_mEFDF9059794B736F9D9488E51449701E166F6984(int32_t ___result0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFacePositionChangedCallback_mC6385C39B40EF427A138D812E42504B2EBD491FD(int32_t ___imageWidth0, int32_t ___imageHeight1, int32_t ___x2, int32_t ___y3, int32_t ___width4, int32_t ___height5, int32_t ___vecDistance6, int32_t ___numFaces7);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstLocalAudioFrameCallback_m03E42D89D8B1C94FA871D7CBD204BD5BA9B81E0E(int32_t ___elapsed0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstLocalAudioFramePublishedCallback_m3476E354D4CF58A4A114820AD5AACAD82395FBD1(int32_t ___elapsed0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstLocalVideoFrameCallback_mA2D8EB9695E45BD5345EF328A5FCCE973A1FC906(int32_t ___width0, int32_t ___height1, int32_t ___elapsed2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstLocalVideoFramePublishedCallback_m5825C7B0533406CB0F232E465CD0E73F4E02498A(int32_t ___elapsed0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteAudioDecodedCallback_m6574B35FB21DC5FB2EE52E38719558D21323FB8A(uint32_t ___uid0, int32_t ___elapsed1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteAudioFrameCallback_m1395BF3C44E2474AEE029659C46F2F81107C2FC1(uint32_t ___userId0, int32_t ___elapsed1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteVideoDecodedCallback_m4850554E5AD9CB2A93F356A06792B15E8BAA47B6(uint32_t ___uid0, int32_t ___width1, int32_t ___height2, int32_t ___elapsed3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteVideoFrameCallback_mE0D9A42626639A21431446C1CB74CF9C9C797281(uint32_t ___uid0, int32_t ___width1, int32_t ___height2, int32_t ___elapsed3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnJoinChannelSuccessCallback_mE1021898DC66A7FB8969F2F1EF868B31333BE651(char* ___channel0, uint32_t ___uid1, int32_t ___elapsed2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLastmileProbeResultCallback_m8A65CA0E44FFD2067CCDF090D6A5CB98E64BF5F2(int32_t ___state0, uint32_t ___upLinkPacketLossRate1, uint32_t ___upLinkjitter2, uint32_t ___upLinkAvailableBandwidth3, uint32_t ___downLinkPacketLossRate4, uint32_t ___downLinkJitter5, uint32_t ___downLinkAvailableBandwidth6, uint32_t ___rtt7);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLastmileQualityCallback_m7BB75EE7A41D15D960591E2EC7C2259D14AA4357(int32_t ___quality0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLeaveChannelCallback_m844B0B1C1CA2232C803ACC52973AAD9865233B20(uint32_t ___duration0, uint32_t ___txBytes1, uint32_t ___rxBytes2, uint32_t ___txAudioBytes3, uint32_t ___txVideoBytes4, uint32_t ___rxAudioBytes5, uint32_t ___rxVideoBytes6, uint16_t ___txKBitRate7, uint16_t ___rxKBitRate8, uint16_t ___rxAudioKBitRate9, uint16_t ___txAudioKBitRate10, uint16_t ___rxVideoKBitRate11, uint16_t ___txVideoKBitRate12, uint16_t ___lastmileDelay13, uint16_t ___txPacketLossRate14, uint16_t ___rxPacketLossRate15, uint32_t ___userCount16, double ___cpuAppUsage17, double ___cpuTotalUsage18, int32_t ___gatewayRtt19, double ___memoryAppUsageRatio20, double ___memoryTotalUsageRatio21, int32_t ___memoryAppUsageInKbytes22);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLocalAudioStateChangedCallback_m462DAC238B93EDBDD35353509C873B74DE9D838D(int32_t ___state0, int32_t ___error1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLocalAudioStatsCallback_mFAB648C1EF181BDC26AA9C388BC9C8964FA1ED32(int32_t ___numChannels0, int32_t ___sentSampleRate1, int32_t ___sentBitrate2, uint16_t ___txPacketLossRate3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLocalPublishFallbackToAudioOnlyCallback_mCA22634EF899FF4BEDE9F21E3E8246D8EF79CC55(int32_t ___isFallbackOrRecover0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLocalUserRegisteredCallback_m8F3AFD60B190647531C2050767962C6D74759124(uint32_t ___uid0, char* ___userAccount1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLocalVideoStateChangedCallback_mA4B5B7EE97A3D744A0ECF133A7A61924F203E0E5(int32_t ___localVideoState0, int32_t ___error1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLocalVideoStatsCallback_m13FDC474678B1F68E857E764043407B07CEC4F9C(int32_t ___sentBitrate0, int32_t ___sentFrameRate1, int32_t ___encoderOutputFrameRate2, int32_t ___rendererOutputFrameRate3, int32_t ___targetBitrate4, int32_t ___targetFrameRate5, int32_t ___qualityAdaptIndication6, int32_t ___encodedBitrate7, int32_t ___encodedFrameWidth8, int32_t ___encodedFrameHeight9, int32_t ___encodedFrameCount10, int32_t ___codecType11, uint16_t ___txPacketLossRate12, int32_t ___captureFrameRate13, int32_t ___captureBrightnessLevel14);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnLocalVoicePitchInHzCallback_mE3F3F826ADEE39672803CAB1C1F4F1B69B802BB6(int32_t ___pitchInHz0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnMediaEngineLoadSuccessCallback_mCCD423B8660434A6381D70F5517881EBE842B67C();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnMediaEngineStartCallSuccessCallback_m3F962214BEEADB0BC8A29461520CA3E0DB01BE4D();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnMicrophoneEnabledCallback_mD6BCFD95C3564500E9914C7C4CB72FD2A01340A3(int32_t ___isEnabled0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnNetworkQualityCallback_m05C912C683285635DAA02FC76EE28E0F6147A0D5(uint32_t ___uid0, int32_t ___txQuality1, int32_t ___rxQuality2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnNetworkTypeChangedCallback_mDDAFB4148AFF3642033DF526E774CF8FE17D8A5B(int32_t ___networkType0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnProxyConnectedCallback_m8CBB677D03DA4E3A13DD178EC7674974A285A4E0(char* ___channel0, uint32_t ___uid1, int32_t ___proxyType2, char* ___localProxyIp3, int32_t ___elapsed4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnReJoinChannelSuccessCallback_m978A95DF63ECA1096725D085B867A84CAE1B6CD9(char* ___channelName0, uint32_t ___uid1, int32_t ___elapsed2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioMixingBeginCallback_mCE9D27B8B6E9071040F1B48532EFFF99750EA6A0();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioMixingEndCallback_m51E88DAED5050F946411C9119F2AFDCDFDB99B10();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioStateChangedCallback_mF0D4779A91E6E929800DC38E77C6EE25E2703D3F(uint32_t ___uid0, int32_t ___state1, int32_t ___reason2, int32_t ___elapsed3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioStatsCallback_mC0E08F03F49E64B9E8F021CD291207FB95620632(uint32_t ___uid0, int32_t ___quality1, int32_t ___networkTransportDelay2, int32_t ___jitterBufferDelay3, int32_t ___audioLossRate4, int32_t ___numChannels5, int32_t ___receivedSampleRate6, int32_t ___receivedBitrate7, int32_t ___totalFrozenTime8, int32_t ___frozenRate9, int32_t ___totalActiveTime10, int32_t ___publishDuration11, int32_t ___qoeQuality12, int32_t ___qualityChangedReason13, int32_t ___mosValue14);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioTransportStatsCallback_m48D6C0CF3DDE8E70442AD3FE35C8A2D28F1C2FAE(uint32_t ___uid0, uint16_t ___delay1, uint16_t ___lost2, uint16_t ___rxKBitRate3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteSubscribeFallbackToAudioOnlyCallback_mDC83C950D4ECB28227A60E27D661B40E2AA09B74(uint32_t ___uid0, int32_t ___isFallbackOrRecover1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteVideoStateChangedCallback_m6BAEFD5296923BC15DC9A38BAF5775FF2F73515E(uint32_t ___uid0, int32_t ___state1, int32_t ___reason2, int32_t ___elapsed3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteVideoStatsCallback_m9376347730EA510A3D60A0218EBF869A9366B8CB(uint32_t ___uid0, int32_t ___delay1, int32_t ___width2, int32_t ___height3, int32_t ___receivedBitrate4, int32_t ___decoderOutputFrameRate5, int32_t ___rendererOutputFrameRate6, int32_t ___packetLossRate7, int32_t ___rxStreamType8, int32_t ___totalFrozenTime9, int32_t ___frozenRate10, int32_t ___totalActiveTime11, int32_t ___publishDuration12);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRemoteVideoTransportStatsCallback_m452C1D15F1D2E7F9F6EE11B567AA87C88F49132E(uint32_t ___uid0, uint16_t ___delay1, uint16_t ___lost2, uint16_t ___rxKBitRate3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRequestAudioFileInfoHandlback_m07E31CBEB76AC731CFC930D95ECCD9F473645348(char* ___filePath0, int32_t ___durationMs1, int32_t ___error2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRequestTokenCallback_m25FD4F2BE3FD34F396A8571143D0DFCA299A474D();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRtcStatsCallback_mFF39EC4D58F48B67E50717155C1DBE40EB8BFF98(uint32_t ___duration0, uint32_t ___txBytes1, uint32_t ___rxBytes2, uint32_t ___txAudioBytes3, uint32_t ___txVideoBytes4, uint32_t ___rxAudioBytes5, uint32_t ___rxVideoBytes6, uint16_t ___txKBitRate7, uint16_t ___rxKBitRate8, uint16_t ___rxAudioKBitRate9, uint16_t ___txAudioKBitRate10, uint16_t ___rxVideoKBitRate11, uint16_t ___txVideoKBitRate12, uint16_t ___lastmileDelay13, uint16_t ___txPacketLossRate14, uint16_t ___rxPacketLossRate15, uint32_t ___userCount16, double ___cpuAppUsage17, double ___cpuTotalUsage18, int32_t ___gatewayRtt19, double ___memoryAppUsageRatio20, double ___memoryTotalUsageRatio21, int32_t ___memoryAppUsageInKbytes22);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRtmpStreamingEventCallback_m57035F70ECB83B89BF9D36B1A07B05F961B270D9(char* ___url0, int32_t ___eventCode1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnRtmpStreamingStateChangedCallback_m977B2182EDB7DF06AEF0F02FBC6727B39A171267(char* ___url0, int32_t ___state1, int32_t ___errCode2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnSDKErrorCallback_m66DCEC233A6C9409620B56E7EF1EF39B422FC34F(int32_t ___error0, char* ___msg1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnSDKWarningCallback_m0135E88E0DA90BA694C3DD293291FA05E7BB8341(int32_t ___warn0, char* ___msg1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnScreenCaptureInfoUpdatedCallback_m1E092F836B5C7B65645A76B9C88844F2F0216DEE(char* ___graphicsCardType0, int32_t ___errCode1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnSnapshotTakenCallback_m1FCE8A1C6861F129757877E0B3064B1BC0867713(char* ___channel0, uint32_t ___uid1, char* ___filePath2, int32_t ___width3, int32_t ___height4, int32_t ___errCode5);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnStreamInjectedStatusCallback_mEB09A4F588C65C0A7B27659ED3C380FFFA54D92D(char* ___url0, uint32_t ___userId1, int32_t ___status2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnStreamMessageCallback_mE576476CF7488091D6EA10AD3314A20A486571AB(uint32_t ___userId0, int32_t ___streamId1, intptr_t ___data2, int32_t ___length3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnStreamMessageErrorCallback_mFC4260D7062B1DBAF890E999F9D1770C8BFCA80E(uint32_t ___userId0, int32_t ___streamId1, int32_t ___code2, int32_t ___missed3, int32_t ___cached4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnStreamPublishedCallback_mC79DD826CFED593CA5B2A25DE2871623FA3CD744(char* ___url0, int32_t ___error1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnStreamUnpublishedCallback_m004424C94E69E8F40C8E37614B0A49C0683B15F7(char* ___url0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnTokenPrivilegeWillExpireCallback_m1CF77757C089C33CB6FF0CD576CCD30D4E0609BF(char* ___token0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnTranscodingUpdatedCallback_mE62868EB0B5EA8F2BD3549BE8FB170442EFEBB1B();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUploadLogResultCallback_mA3C09C691D77D283EC4B61CF60C20D88B5467658(char* ___requestId0, int32_t ___success1, int32_t ___reason2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserEnableLocalVideoCallback_mD2C47516DD3DD624755196BFECE29BA09DDAD4D6(uint32_t ___uid0, int32_t ___enabled1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserEnableVideoCallback_m9F48853048B9EBA523B5ECC5420B62D6A66D4D85(uint32_t ___uid0, int32_t ___enabled1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserInfoUpdatedCallback_m50FAAD864316CED24162ED157620664338C79365(uint32_t ___uid0, uint32_t ___userUid1, char* ___userAccount2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserJoinedCallback_m1CED37554985D21368575A6DC8C0219DAA879FB6(uint32_t ___uid0, int32_t ___elapsed1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserMuteAudioCallback_mA1199E0757893AA030F25E304E86982ACA46C1E9(uint32_t ___uid0, int32_t ___muted1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserMuteVideoCallback_m81497718F6FEEEF84CC45383DCA225E2D6458886(uint32_t ___uid0, int32_t ___muted1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserOfflineCallback_mC9A5B34B51FD551963779D5CFCC34F0C0A79828C(uint32_t ___uid0, int32_t ___reason1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnUserSuperResolutionEnabledCallback_m4045BF2B5F62F13DED60006763D75BE6672E7875(uint32_t ___uid0, int32_t ___enabled1, int32_t ___reason2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnVideoDeviceStateChangedCallback_m7E6D501757CFA8C1C7F2A29E17FE6ED7A4FEBC13(char* ___deviceId0, int32_t ___deviceType1, int32_t ___deviceState2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnVideoPublishStateChangeCallback_m868CE54F892C8146FA5C56998180B77C3C247676(char* ___channel0, int32_t ___oldState1, int32_t ___newState2, int32_t ___elapseSinceLastState3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnVideoSizeChangedCallback_m67C1BD4A4B32B7A58334A934DE52B2832E13A613(uint32_t ___uid0, int32_t ___width1, int32_t ___height2, int32_t ___rotation3);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnVideoStoppedCallback_mE17F3CCFCB1FE6E8757F0A423E895D586F5D48DA();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnVideoSubscribeStateChangeCallback_mF424A65B4679771026F40596DC6C699D06311BAB(char* ___channel0, uint32_t ___uid1, int32_t ___oldState2, int32_t ___newState3, int32_t ___elapseSinceLastState4);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnVirtualBackgroundSourceEnabledCallback_m721E99AD5FD0C16BC1CFA53DBEC797075C42620C(int32_t ___enabled0, int32_t ___reason1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnWlAccMessageCallback_m261F7658AB755D995CDEBE92BB9A56ED55DA6096(int32_t ___reason0, int32_t ___action1, char* ___wlAccMsg2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_IRtcEngine_OnWlAccStatsCallback_mCE22DE708D65BD88E8085FAF1F756C4FBEA43B54(WlAccStats_t07DB3F8E004DA70BAF06F50EE0B760D6778780F3  ___currentStats0, WlAccStats_t07DB3F8E004DA70BAF06F50EE0B760D6778780F3  ___averageStats1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MediaRecorder_OnRecorderInfoUpdatedCallback_m8C3CE77146F9648FE675CD1BADE71B0CED2A3FA3(char* ___fileName0, uint32_t ___durationMs1, uint32_t ___fileSize2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MediaRecorder_OnRecorderStateChangedCallback_mE5AE8FABDEC57621E4B7C27FF5F2A96525DCBEE8(int32_t ___state0, int32_t ___error1);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MetadataObserver_OnGetMaxMetadataSizeCallback_m7CBED978562E9A5B5D7832CADAC24432BAD32D32();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MetadataObserver_OnMediaMetaDataReceivedCallback_m0F03B175EA2FA6116EE6F8F194213EADA13FC0EB(uint32_t ___uid0, uint32_t ___size1, intptr_t ___buffer2, int64_t ___timeStampMs3);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_MetadataObserver_OnReadyToSendMetadataCallback_mD8D32EAF76B7C602EBB65A1C8FDC1DA0471FDFFF();
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0(intptr_t ___arg0);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_PacketObserver_OnReceiveAudioPacketCallback_m4507991E04606AE20360F32DB747128F64186B59(intptr_t ___buffer0, intptr_t ___size1);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_PacketObserver_OnReceiveVideoPacketCallback_m8CEA37C53374432CA8E6C4732AB0F9A83901E96A(intptr_t ___buffer0, intptr_t ___size1);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_PacketObserver_OnSendAudioPacketCallback_mF8F925E426D264CEF15FC47C33B5EA8E4FB62C99(intptr_t ___buffer0, intptr_t ___size1);
extern "C" int32_t DEFAULT_CALL ReversePInvokeWrapper_PacketObserver_OnSendVideoPacketCallback_m881F105E54C96BF62E2FEB64AAF261259208C880(intptr_t ___buffer0, intptr_t ___size1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_VideoRawDataManager_OnCaptureVideoFrameCallback_mC97129FB1393EEAD2DEBCB3228147B4D080C3BC1(int32_t ___videoFrameType0, int32_t ___width1, int32_t ___height2, int32_t ___yStride3, intptr_t ___buffer4, int32_t ___rotation5, int64_t ___renderTimeMs6);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_VideoRawDataManager_OnRenderVideoFrameCallback_mFBAFE5844B274D5559BF3FCAE77A3C46A3F5D3AC(uint32_t ___uid0, int32_t ___videoFrameType1, int32_t ___width2, int32_t ___height3, int32_t ___yStride4, intptr_t ___yBuffer5, int32_t ___rotation6, int64_t ___renderTimeMs7);


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[148] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnActiveSpeakerCallback_m6347B579751917B1C30BA1EF53BEB10C19A60236),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnAudioPublishStateChangedCallback_m71C6F99179DD161A029770BF5285CEADBF084E5C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnAudioSubscribeStateChangedCallback_mEFD7126B481863C78106BC965F717611E128D77E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnChannelProxyConnectedCallback_mF158E9DFFB0A63EDB2AFEBD420FFF2A70DA5EC18),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnClientRoleChangeFailedCallback_m60C190B2C71D6222CF3B3F3A666B1B77042CCA0A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnClientRoleChangedCallback_mA07EB80EDDCAC1EE252847F36880F049C3C12C34),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnConnectionLostCallback_mCD1BC68D16F66B1CD25CC9C41EC36C992F54F046),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnConnectionStateChangedCallback_mCCDE2831DAFBE075FCB3A36D0C578D0A7E79E9D9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnErrorCallback_m7FAB5E7E29D0B0FDB4E97C1216A03A64062EA799),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnFirstRemoteVideoFrameHandlerCallback_m4558218E303DEB90988DF6D0D00E414A691B5B46),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnJoinChannelSuccessCallback_m1C69A43FD84F23735DA67A5D58F9B496C71A5EA9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnLeaveChannelCallback_mD20AE0CB2DEC34D01A0DBF3DF84F43ED09893397),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnLocalPublishFallbackToAudioOnlyCallback_m196D122F485EB2880F8201FD8691E6916FAEBDAB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnMediaRelayEventCallback_mC6042C0633715920C64F331D5E5E17E016BCB779),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnMediaRelayStateChangedCallback_m25E536BE122F8BAD31E57A9B166FF16E94114C01),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnNetworkQualityCallback_m8A0BE4BBE2FDB2B34D7E69F440BB893B3CA356CE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnReJoinChannelSuccessCallback_m11E31ACC49D129ED2F325193F9B064A946AB400E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRemoteAudioStatChangedCallback_m728116CBEF7CEA2D0FDD14E601D07F8A69029B7F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRemoteAudioStatsCallback_mEE3D09D7AF0C221262B2D383AF4A39D4E94DE465),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRemoteSubscribeFallbackToAudioOnlyCallback_m4FC04A6AFC611D46A53E4BA23EDD23A9F3BA75A9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRemoteVideoStateChangedCallback_mE29289EA93CB7A032B829F8F25C2BD6A4F0E7FAA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRemoteVideoStatsCallback_m1465499BBBE9F6604F87978A3D4C56E92B87E25C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRequestTokenCallback_m3A098D24DC240E3440DF5C6580FBCAC8BC24DAE6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRtcStatsCallback_m6963F55E1A0EF4E054BFCB7AC817F19FDB236CF1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRtmpStreamingEventCallback_mA8407F3171511944864773A9B66584AD26737ED2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnRtmpStreamingStateChangedCallback_m1D989D5261B8D238FC1FCAB24DE0D15A169EDE4E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnStreamInjectedStatusCallback_m41425B19250CB597BF36DA52498389F61F5A6674),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnStreamMessageCallback_mA4AB488C95FD22ECDE50DBD25240507AE893F9D1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnStreamMessageErrorCallback_mEB2DA9B08B692A0F25D6E21845D55C7FD4B13541),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnTokenPrivilegeWillExpireCallback_m1239FB07C75EAF0FE77919984F7E27D6D92F97C5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnTranscodingUpdatedCallback_mCB5B9F886F51EA0D3E6464593729E3A2210C0BB4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnUserJoinedCallback_mD57D089D33F1B812BA7C9C8815BBB7B8E69FA94A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnUserOffLineCallback_mF2DF9030DBBCBED9FDE5313002DF48B8C648B543),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnUserSuperResolutionEnabledCallback_mC5D67679FCEF0E15EC5895F0AE3929CA68882A1C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnVideoPublishStateChangedCallback_mEC12147C7ED21C425D4404EAFD0ED80F86C4187D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnVideoSizeChangedCallback_mAE5DB12317F193868EA591E2EE238036BFB4476F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnVideoSubscribeStateChangedCallback_m84C0BA97FCBC35E37398E269D5BBB6DD122148F4),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AgoraChannel_OnWarningCallback_m8EE2F4BF594420B261E89F36880D984AD3A5936A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioRawDataManager_OnMixedAudioFrameCallback_m8CB55C2CDFD775DF8013BBBDA245F1F364FB2F3D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioRawDataManager_OnPlaybackAudioFrameBeforeMixingCallback_m254496AE367BDDFD3AC3279410BBCC8EB3DC945A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioRawDataManager_OnPlaybackAudioFrameCallback_mC34B69938B467172EE49B0223BDC1160E9A5CA64),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_AudioRawDataManager_OnRecordAudioFrameCallback_mB79666DA48C39A280D8CA789C7D825E0E3A92C39),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnActiveSpeakerCallback_m8016E758421D22E875BF5443B0BE83B6ADCC0C93),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnApiExecutedCallback_m78C37E67865434B04EC9188BF41C452ED117CE01),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioDeviceStateChangedCallback_mFF87F6C0C069B9E5B3B2D2DB00B004C1E18539EF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioDeviceTestVolumeIndicationCallback_mE3A32F2EBCE1C5DC175E07E42511E1587BF775B1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioDeviceVolumeChangedCallback_m7FEC86C980D79566E62CEE3ABA1F0AD59B8353D7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioEffectFinishedCallback_mF795019B6FBD6CD7BACA74AE8EEC8DD58ADEAA3B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioMixingFinishedCallback_m958333F55ACCA770C01712E70B16835BCE00D0D7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioMixingStateChangedCallback_mA169736BBC2930D739E43458611E52CD6B058CFF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioPublishStateChangeCallback_m6900065B81948C67F07E231B6E68E470755FA164),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioQualityCallback_m9A95217A72D7C619376E380D66176183A6963213),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioRouteChangedCallback_mB0CFFE5D93A60B962CDD595A738A4459B0C3A01E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioSubscribeStateChangeCallback_m913BF10B18C4FE2D5A0D36E53A30DDA2963C3678),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnAudioVolumeIndicationCallback_m9BFB1860EE10A6942FF2A47F6A2760C4BB85D877),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnCameraExposureAreaChangedCallback_mD37F5E01DEC89FCFC77848EE42E305391CB124CE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnCameraFocusAreaChangedCallback_mCD76062A3FAC538784912C89FC5F36CDE98CB16C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnCameraReadyCallback_mF6770EAD5A912456105BEFB216161DCB488D6D0D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnChannelMediaRelayEventCallback_m6E269678BC5237595C25E3E2DF6B5A26643ECE35),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnChannelMediaRelayStateChangedCallback_m1235F7B8AFF7C64FC4B1255D90AA83684E36AA61),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnClientRoleChangeFailedCallback_m183FAC19EB8E68519AA056C25E68C563E0F0276F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnClientRoleChangedCallback_m59F7B1802A373A9B4E9CBC5374FB1C7BC9CB5180),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnConnectionBannedCallback_m83A293D1071404CF73B033E4ADF1F5FEB9156FB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnConnectionInterruptedCallback_m4DD4DEDBE247B769B198FC8D987314A039AC5FEC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnConnectionLostCallback_m1CECC0E92D0BF45BE913C5A3EF31926E3F02689C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnConnectionStateChangedCallback_mCCD7B8725BF83DCEE48D33532E8D3A16235B4C67),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnContentInspectResultCallback_mEFDF9059794B736F9D9488E51449701E166F6984),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFacePositionChangedCallback_mC6385C39B40EF427A138D812E42504B2EBD491FD),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstLocalAudioFrameCallback_m03E42D89D8B1C94FA871D7CBD204BD5BA9B81E0E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstLocalAudioFramePublishedCallback_m3476E354D4CF58A4A114820AD5AACAD82395FBD1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstLocalVideoFrameCallback_mA2D8EB9695E45BD5345EF328A5FCCE973A1FC906),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstLocalVideoFramePublishedCallback_m5825C7B0533406CB0F232E465CD0E73F4E02498A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteAudioDecodedCallback_m6574B35FB21DC5FB2EE52E38719558D21323FB8A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteAudioFrameCallback_m1395BF3C44E2474AEE029659C46F2F81107C2FC1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteVideoDecodedCallback_m4850554E5AD9CB2A93F356A06792B15E8BAA47B6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnFirstRemoteVideoFrameCallback_mE0D9A42626639A21431446C1CB74CF9C9C797281),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnJoinChannelSuccessCallback_mE1021898DC66A7FB8969F2F1EF868B31333BE651),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLastmileProbeResultCallback_m8A65CA0E44FFD2067CCDF090D6A5CB98E64BF5F2),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLastmileQualityCallback_m7BB75EE7A41D15D960591E2EC7C2259D14AA4357),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLeaveChannelCallback_m844B0B1C1CA2232C803ACC52973AAD9865233B20),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLocalAudioStateChangedCallback_m462DAC238B93EDBDD35353509C873B74DE9D838D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLocalAudioStatsCallback_mFAB648C1EF181BDC26AA9C388BC9C8964FA1ED32),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLocalPublishFallbackToAudioOnlyCallback_mCA22634EF899FF4BEDE9F21E3E8246D8EF79CC55),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLocalUserRegisteredCallback_m8F3AFD60B190647531C2050767962C6D74759124),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLocalVideoStateChangedCallback_mA4B5B7EE97A3D744A0ECF133A7A61924F203E0E5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLocalVideoStatsCallback_m13FDC474678B1F68E857E764043407B07CEC4F9C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnLocalVoicePitchInHzCallback_mE3F3F826ADEE39672803CAB1C1F4F1B69B802BB6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnMediaEngineLoadSuccessCallback_mCCD423B8660434A6381D70F5517881EBE842B67C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnMediaEngineStartCallSuccessCallback_m3F962214BEEADB0BC8A29461520CA3E0DB01BE4D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnMicrophoneEnabledCallback_mD6BCFD95C3564500E9914C7C4CB72FD2A01340A3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnNetworkQualityCallback_m05C912C683285635DAA02FC76EE28E0F6147A0D5),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnNetworkTypeChangedCallback_mDDAFB4148AFF3642033DF526E774CF8FE17D8A5B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnProxyConnectedCallback_m8CBB677D03DA4E3A13DD178EC7674974A285A4E0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnReJoinChannelSuccessCallback_m978A95DF63ECA1096725D085B867A84CAE1B6CD9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioMixingBeginCallback_mCE9D27B8B6E9071040F1B48532EFFF99750EA6A0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioMixingEndCallback_m51E88DAED5050F946411C9119F2AFDCDFDB99B10),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioStateChangedCallback_mF0D4779A91E6E929800DC38E77C6EE25E2703D3F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioStatsCallback_mC0E08F03F49E64B9E8F021CD291207FB95620632),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteAudioTransportStatsCallback_m48D6C0CF3DDE8E70442AD3FE35C8A2D28F1C2FAE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteSubscribeFallbackToAudioOnlyCallback_mDC83C950D4ECB28227A60E27D661B40E2AA09B74),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteVideoStateChangedCallback_m6BAEFD5296923BC15DC9A38BAF5775FF2F73515E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteVideoStatsCallback_m9376347730EA510A3D60A0218EBF869A9366B8CB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRemoteVideoTransportStatsCallback_m452C1D15F1D2E7F9F6EE11B567AA87C88F49132E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRequestAudioFileInfoHandlback_m07E31CBEB76AC731CFC930D95ECCD9F473645348),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRequestTokenCallback_m25FD4F2BE3FD34F396A8571143D0DFCA299A474D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRtcStatsCallback_mFF39EC4D58F48B67E50717155C1DBE40EB8BFF98),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRtmpStreamingEventCallback_m57035F70ECB83B89BF9D36B1A07B05F961B270D9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnRtmpStreamingStateChangedCallback_m977B2182EDB7DF06AEF0F02FBC6727B39A171267),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnSDKErrorCallback_m66DCEC233A6C9409620B56E7EF1EF39B422FC34F),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnSDKWarningCallback_m0135E88E0DA90BA694C3DD293291FA05E7BB8341),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnScreenCaptureInfoUpdatedCallback_m1E092F836B5C7B65645A76B9C88844F2F0216DEE),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnSnapshotTakenCallback_m1FCE8A1C6861F129757877E0B3064B1BC0867713),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnStreamInjectedStatusCallback_mEB09A4F588C65C0A7B27659ED3C380FFFA54D92D),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnStreamMessageCallback_mE576476CF7488091D6EA10AD3314A20A486571AB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnStreamMessageErrorCallback_mFC4260D7062B1DBAF890E999F9D1770C8BFCA80E),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnStreamPublishedCallback_mC79DD826CFED593CA5B2A25DE2871623FA3CD744),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnStreamUnpublishedCallback_m004424C94E69E8F40C8E37614B0A49C0683B15F7),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnTokenPrivilegeWillExpireCallback_m1CF77757C089C33CB6FF0CD576CCD30D4E0609BF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnTranscodingUpdatedCallback_mE62868EB0B5EA8F2BD3549BE8FB170442EFEBB1B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUploadLogResultCallback_mA3C09C691D77D283EC4B61CF60C20D88B5467658),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserEnableLocalVideoCallback_mD2C47516DD3DD624755196BFECE29BA09DDAD4D6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserEnableVideoCallback_m9F48853048B9EBA523B5ECC5420B62D6A66D4D85),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserInfoUpdatedCallback_m50FAAD864316CED24162ED157620664338C79365),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserJoinedCallback_m1CED37554985D21368575A6DC8C0219DAA879FB6),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserMuteAudioCallback_mA1199E0757893AA030F25E304E86982ACA46C1E9),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserMuteVideoCallback_m81497718F6FEEEF84CC45383DCA225E2D6458886),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserOfflineCallback_mC9A5B34B51FD551963779D5CFCC34F0C0A79828C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnUserSuperResolutionEnabledCallback_m4045BF2B5F62F13DED60006763D75BE6672E7875),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnVideoDeviceStateChangedCallback_m7E6D501757CFA8C1C7F2A29E17FE6ED7A4FEBC13),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnVideoPublishStateChangeCallback_m868CE54F892C8146FA5C56998180B77C3C247676),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnVideoSizeChangedCallback_m67C1BD4A4B32B7A58334A934DE52B2832E13A613),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnVideoStoppedCallback_mE17F3CCFCB1FE6E8757F0A423E895D586F5D48DA),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnVideoSubscribeStateChangeCallback_mF424A65B4679771026F40596DC6C699D06311BAB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnVirtualBackgroundSourceEnabledCallback_m721E99AD5FD0C16BC1CFA53DBEC797075C42620C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnWlAccMessageCallback_m261F7658AB755D995CDEBE92BB9A56ED55DA6096),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_IRtcEngine_OnWlAccStatsCallback_mCE22DE708D65BD88E8085FAF1F756C4FBEA43B54),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MediaRecorder_OnRecorderInfoUpdatedCallback_m8C3CE77146F9648FE675CD1BADE71B0CED2A3FA3),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MediaRecorder_OnRecorderStateChangedCallback_mE5AE8FABDEC57621E4B7C27FF5F2A96525DCBEE8),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MetadataObserver_OnGetMaxMetadataSizeCallback_m7CBED978562E9A5B5D7832CADAC24432BAD32D32),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MetadataObserver_OnMediaMetaDataReceivedCallback_m0F03B175EA2FA6116EE6F8F194213EADA13FC0EB),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MetadataObserver_OnReadyToSendMetadataCallback_mD8D32EAF76B7C602EBB65A1C8FDC1DA0471FDFFF),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_m0045E44F7E960D6B4A864D5206D4116249C09BB0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PacketObserver_OnReceiveAudioPacketCallback_m4507991E04606AE20360F32DB747128F64186B59),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PacketObserver_OnReceiveVideoPacketCallback_m8CEA37C53374432CA8E6C4732AB0F9A83901E96A),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PacketObserver_OnSendAudioPacketCallback_mF8F925E426D264CEF15FC47C33B5EA8E4FB62C99),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_PacketObserver_OnSendVideoPacketCallback_m881F105E54C96BF62E2FEB64AAF261259208C880),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_VideoRawDataManager_OnCaptureVideoFrameCallback_mC97129FB1393EEAD2DEBCB3228147B4D080C3BC1),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_VideoRawDataManager_OnRenderVideoFrameCallback_mFBAFE5844B274D5559BF3FCAE77A3C46A3F5D3AC),
};
