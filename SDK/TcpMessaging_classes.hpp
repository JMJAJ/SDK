#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TcpMessaging

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class TcpMessaging.TcpMessagingSettings
// 0x0030 (0x0058 - 0x0028)
class UTcpMessagingSettings final : public UObject
{
public:
	bool                                          EnableTransport;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1BFB[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ListenEndpoint;                                    // 0x0030(0x0010)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                         ConnectToEndpoints;                                // 0x0040(0x0010)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	int32                                         ConnectionRetryDelay;                              // 0x0050(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                          bStopServiceWhenAppDeactivates;                    // 0x0054(0x0001)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1BFC[0x3];                                     // 0x0055(0x0003)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"TcpMessagingSettings">();
	}
	static class UTcpMessagingSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTcpMessagingSettings>();
	}
};
static_assert(alignof(UTcpMessagingSettings) == 0x000008, "Wrong alignment on UTcpMessagingSettings");
static_assert(sizeof(UTcpMessagingSettings) == 0x000058, "Wrong size on UTcpMessagingSettings");
static_assert(offsetof(UTcpMessagingSettings, EnableTransport) == 0x000028, "Member 'UTcpMessagingSettings::EnableTransport' has a wrong offset!");
static_assert(offsetof(UTcpMessagingSettings, ListenEndpoint) == 0x000030, "Member 'UTcpMessagingSettings::ListenEndpoint' has a wrong offset!");
static_assert(offsetof(UTcpMessagingSettings, ConnectToEndpoints) == 0x000040, "Member 'UTcpMessagingSettings::ConnectToEndpoints' has a wrong offset!");
static_assert(offsetof(UTcpMessagingSettings, ConnectionRetryDelay) == 0x000050, "Member 'UTcpMessagingSettings::ConnectionRetryDelay' has a wrong offset!");
static_assert(offsetof(UTcpMessagingSettings, bStopServiceWhenAppDeactivates) == 0x000054, "Member 'UTcpMessagingSettings::bStopServiceWhenAppDeactivates' has a wrong offset!");

}

